#pragma once

#include "CaptureSession.h"

struct CaptureOptions
{
    HMONITOR monitor {0};
    HWND     captureWindow {0};
    HWND     outputWindow {0};
    float    pixelWidth {3.0f};
    float    pixelHeight {3.0f};
    float    aspectRatio {1.0f};
    unsigned presetNo {0};
    unsigned frameSkip {0};
    float    outputScale {1};
    bool     flipHorizontal {false};
    bool     flipVertical {false};
    bool     clone {false};
};

class CaptureManager
{
public:
    CaptureManager(const CaptureOptions& options);

    const std::vector<std::unique_ptr<PresetDef>>& Presets();

    bool Initialize();
    bool IsActive();
    void StartSession();
    void StopSession();
    void Debug();
    void UpdatePixelSize();
    void UpdateOutputSize();
    void UpdateOutputFlip();
    void UpdateShaderPreset();
    void UpdateFrameSkip();
    void UpdateInput();

private:
    const CaptureOptions&           m_options;
    winrt::com_ptr<ID3D11Device>    m_d3dDevice;
    winrt::com_ptr<ID3D11Debug>     m_debug {nullptr};
    std::vector<std::unique_ptr<PresetDef>>         m_presetList;
    std::unique_ptr<CaptureSession> m_session {nullptr};
    std::unique_ptr<ShaderGlass>    m_shaderGlass {nullptr};
};
