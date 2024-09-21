#pragma once

#define MAX_PIXEL_SIZES 20U
#define MAX_ASPECT_RATIOS 20U
#define MAX_SHADERS 1000U
#define MAX_FRAME_SKIPS 20U
#define MAX_OUTPUT_SCALES 20U
#define MAX_CAPTURE_WINDOWS 50U
#define MAX_CAPTURE_DISPLAYS 10U
#define HK_FULLSCREEN 1000
#define HK_SCREENSHOT 1001
#define HK_PAUSE 1002

#define WM_PIXEL_SIZE(i) (static_cast<UINT>(WM_USER) + i)
#define WM_ASPECT_RATIO(i) (static_cast<UINT> WM_PIXEL_SIZE(MAX_PIXEL_SIZES) + i)
#define WM_SHADER(i) (static_cast<UINT> WM_ASPECT_RATIO(MAX_ASPECT_RATIOS) + i)
#define WM_FRAME_SKIP(i) (static_cast<UINT> WM_SHADER(MAX_SHADERS) + i)
#define WM_OUTPUT_SCALE(i) (static_cast<UINT> WM_FRAME_SKIP(MAX_FRAME_SKIPS) + i)
#define WM_CAPTURE_WINDOW(i) (static_cast<UINT> WM_OUTPUT_SCALE(MAX_OUTPUT_SCALES) + i)
#define WM_CAPTURE_DISPLAY(i) (static_cast<UINT> WM_CAPTURE_WINDOW(MAX_CAPTURE_WINDOWS) + i)

#define CUSTOM_MNEMONIC "Custom"

struct PixelSizeInfo
{
    float       w;
    float       h;
    const char* text;
    const char* mnemonic;

    PixelSizeInfo(float w, float h, const char* text, const char* mnemonic) : w(w), h(h), text(text), mnemonic(mnemonic) { }
};

struct AspectRatioInfo
{
    float       r;
    LPCWSTR     text;
    const char* mnemonic;

    AspectRatioInfo(float r, LPCWSTR text, const char* mnemonic) : r(r), text(text), mnemonic(mnemonic) { }
};

struct FrameSkipInfo
{
    unsigned    s;
    LPCWSTR     text;
    const char* mnemonic;

    FrameSkipInfo(int s, LPCWSTR text, const char* mnemonic) : s(s), text(text), mnemonic(mnemonic) { }
};

struct OutputScaleInfo
{
    float       s;
    LPCWSTR     text;
    const char* mnemonic;

    OutputScaleInfo(float s, LPCWSTR text, const char* mnemonic) : s(s), text(text), mnemonic(mnemonic) { }
};

struct CaptureWindow
{
    CaptureWindow(HWND hwnd, const std::string& name) : hwnd {hwnd}, name {name} { }
    HWND        hwnd;
    std::string name;
};

struct CaptureDisplay
{
    CaptureDisplay(HMONITOR monitor, const std::string& name) : monitor {monitor}, name {name} { }
    HMONITOR    monitor;
    std::string name;
};

static const std::map<UINT, PixelSizeInfo> pixelSizes = {
    {WM_PIXEL_SIZE(0), PixelSizeInfo(1.0f, 1.0f, "x1", "1")},
};

static std::map<UINT, AspectRatioInfo> aspectRatios = {
    {WM_ASPECT_RATIO(0), AspectRatioInfo(1.0f, L"None", "1")},
    {WM_ASPECT_RATIO(1), AspectRatioInfo(1.2f, L"x1.2 (DOS, NTSC)", "1.2")},
    {WM_ASPECT_RATIO(2), AspectRatioInfo(0.9375f, L"x0.94 (PAL)", "0.94")},
    {WM_ASPECT_RATIO(3), AspectRatioInfo(0.8f, L"x0.8 (NES)", "0.8")},
    {WM_ASPECT_RATIO(4), AspectRatioInfo(0.857143f, L"x0.86 (SNES)", "0.86")},
    {WM_ASPECT_RATIO(5), AspectRatioInfo(0.5f, L"x0.5 (double wide)", "0.5")},
    {WM_ASPECT_RATIO(6), AspectRatioInfo(2.0f, L"x2.0 (double tall)", "2.0")},
    {WM_ASPECT_RATIO(7), AspectRatioInfo(1.0f, L"Custom", CUSTOM_MNEMONIC)},
};

static const std::map<UINT, FrameSkipInfo> frameSkips = {
    {WM_FRAME_SKIP(0), FrameSkipInfo(0, L"none", "1")},
    {WM_FRAME_SKIP(1), FrameSkipInfo(1, L"/2", "2")},
    {WM_FRAME_SKIP(2), FrameSkipInfo(2, L"/3", "3")},
    {WM_FRAME_SKIP(3), FrameSkipInfo(3, L"/4", "4")},
    {WM_FRAME_SKIP(4), FrameSkipInfo(4, L"/5", "5")},
    {WM_FRAME_SKIP(5), FrameSkipInfo(5, L"/6", "6")},
    {WM_FRAME_SKIP(6), FrameSkipInfo(6, L"/7", "7")},
    {WM_FRAME_SKIP(7), FrameSkipInfo(7, L"/8", "8")},
    {WM_FRAME_SKIP(8), FrameSkipInfo(8, L"/9", "9")},
    {WM_FRAME_SKIP(9), FrameSkipInfo(9, L"/10", "10")},
    {WM_FRAME_SKIP(10), FrameSkipInfo(11, L"/12", "12")},
    {WM_FRAME_SKIP(11), FrameSkipInfo(13, L"/14", "14")},
    {WM_FRAME_SKIP(12), FrameSkipInfo(15, L"/16", "16")},
    {WM_FRAME_SKIP(13), FrameSkipInfo(17, L"/18", "18")},
    {WM_FRAME_SKIP(14), FrameSkipInfo(19, L"/20", "20")}
};

static const std::map<UINT, OutputScaleInfo> outputScales = {{WM_OUTPUT_SCALE(0), OutputScaleInfo(1.0f, L"100%", "100")},
                                                             {WM_OUTPUT_SCALE(1), OutputScaleInfo(1.5f, L"150%", "150")},
                                                             {WM_OUTPUT_SCALE(2), OutputScaleInfo(2.0f, L"200%", "200")},
                                                             {WM_OUTPUT_SCALE(3), OutputScaleInfo(2.0f, L"250%", "250")},
                                                             {WM_OUTPUT_SCALE(4), OutputScaleInfo(3.0f, L"300%", "300")},
                                                             {WM_OUTPUT_SCALE(5), OutputScaleInfo(3.5f, L"350%", "350")},
                                                             {WM_OUTPUT_SCALE(6), OutputScaleInfo(4.0f, L"400%", "400")},
                                                             {WM_OUTPUT_SCALE(7), OutputScaleInfo(5.0f, L"500%", "500")},
                                                             {WM_OUTPUT_SCALE(8), OutputScaleInfo(6.0f, L"600%", "600")},
                                                             {WM_OUTPUT_SCALE(9), OutputScaleInfo(7.0f, L"700%", "700")},
                                                             {WM_OUTPUT_SCALE(10), OutputScaleInfo(8.0f, L"800%", "800")},
                                                             {WM_OUTPUT_SCALE(11), OutputScaleInfo(9.0f, L"900%", "900")},
                                                             {WM_OUTPUT_SCALE(12), OutputScaleInfo(10.0f, L"1000%", "1000")}};
