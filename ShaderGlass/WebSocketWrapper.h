#pragma once

#include "ShaderWindow.h"
#include "ixwebsocket/IXWebSocketServer.h"
#include "ixwebsocket/IXConnectionState.h"
#include "ixwebsocket/IXWebSocket.h"
#include "ixwebsocket/IXWebSocketMessageType.h"

class WebSocketWrapper
{
    ix::WebSocketServer& m_socketServer;
    ShaderWindow&        m_shaderWindow;


public:
    //WebSocketWrapper() = default;
    WebSocketWrapper(
        ix::WebSocketServer& socketServer,
        ShaderWindow& m_shaderWindow
    );

    void onMessage(
        std::shared_ptr<ix::ConnectionState> connectionState,
        ix::WebSocket& webSocket,
        const ix::WebSocketMessagePtr& msg
    );
    void Start();
    void Stop();

};