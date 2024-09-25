#include "pch.h"

#include "Resource.h"
#include "WebSocketWrapper.h"

WebSocketWrapper::WebSocketWrapper(
    ix::WebSocketServer& socketServer,
    ShaderWindow& shaderWindow) : m_socketServer(socketServer), m_shaderWindow(shaderWindow)
{
    m_socketServer.disablePerMessageDeflate();
    m_socketServer.enablePong();
    m_socketServer.setOnClientMessageCallback(
        [this](
        std::shared_ptr<ix::ConnectionState> connectionState,
        ix::WebSocket & webSocket,
        const ix::WebSocketMessagePtr& msg)
    {
        onMessage(connectionState, webSocket, msg);
    });
}

void WebSocketWrapper::Start() {
    m_socketServer.listenAndStart();
}
void WebSocketWrapper::Stop() {
    m_socketServer.stop();
}

void WebSocketWrapper::onMessage(
    std::shared_ptr<ix::ConnectionState> connectionState,
    ix::WebSocket& webSocket,
    const ix::WebSocketMessagePtr& msg
)
{
    switch(msg->type)
    {
    case ix::WebSocketMessageType::Close:
        OutputDebugStringW(L"got close message");
        // HOW to manage?
        break;
    case ix::WebSocketMessageType::Open:
        OutputDebugStringW(L"got open connection message");
        SendMessage(m_shaderWindow.m_mainWindow, WM_COMMAND, IDM_START, 0);
        break;
    case ix::WebSocketMessageType::Message:
        if(msg->binary)
        {
            OutputDebugStringW(L"got binary message");
        }
        else
        {
            OutputDebugStringW(L"got non-binary message");
        }
        break;
    default:
        break;
    }
}