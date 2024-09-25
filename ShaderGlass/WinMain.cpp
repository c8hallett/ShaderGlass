#include "pch.h"

#include "resource.h"
#include "ShaderWindow.h"
#include "ParamsWindow.h"
#include "BrowserWindow.h"
#include "WebSocketWrapper.h"
#include "ixwebsocket/IXWebSocketServer.h"

#pragma comment(                                                                                                                           \
    linker,                                                                                                                                \
    "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")

int APIENTRY wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);


    /*
    if (lpCmdLine)
    {
        int  numArgs;
        auto cmdLine = GetCommandLineW();
        auto args = CommandLineToArgvW(cmdLine, &numArgs);

        for (int a = 0; a < numArgs; a++)
        {
            if (wcscmp(args[a], L"-port") == 0)
            {
            }
        }
    }
    */

    if(!winrt::Windows::Foundation::Metadata::ApiInformation::IsApiContractPresent(L"Windows.Foundation.UniversalApiContract", 8))
    {
        MessageBox(NULL, L"ShaderGlass requires Windows 10 version 1903 or later.", L"ShaderGlass", MB_OK | MB_ICONERROR);
        return -1;
    }

    SetProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT_SYSTEM_AWARE);

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_SHADERGLASS));
    MSG    msg;

    INITCOMMONCONTROLSEX ccs;
    ccs.dwICC  = ICC_STANDARD_CLASSES;
    ccs.dwSize = sizeof(ccs);
    InitCommonControlsEx(&ccs);

    CaptureManager captureManager;
    ShaderWindow   shaderWindow(captureManager);
    if(!shaderWindow.Create(hInstance, nCmdShow))
    {
        return FALSE;
    }

    ParamsWindow paramsWindow(captureManager);
    if(!paramsWindow.Create(hInstance, SW_HIDE, shaderWindow.m_mainWindow))
    {
        return FALSE;
    }

    BrowserWindow browserWindow(captureManager);
    if(!browserWindow.Create(hInstance, SW_HIDE, shaderWindow.m_mainWindow, paramsWindow.m_mainWindow))
    {
        return FALSE;
    }

    shaderWindow.Start(lpCmdLine, paramsWindow.m_mainWindow, browserWindow.m_mainWindow);

    ix::initNetSystem();
    ix::WebSocketServer serv(34613);
    WebSocketWrapper wrapper(serv, shaderWindow);

    wrapper.Start();

    while(GetMessage(&msg, nullptr, 0, 0))
    {
        if(!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    wrapper.Stop();
    return (int)msg.wParam;
}