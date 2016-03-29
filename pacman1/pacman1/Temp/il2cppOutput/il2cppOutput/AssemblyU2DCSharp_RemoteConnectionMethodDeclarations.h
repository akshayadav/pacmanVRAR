#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// RemoteConnection
struct RemoteConnection_t81;
// System.Net.Sockets.Socket
struct Socket_t82;
// System.Net.Sockets.TcpClient
struct TcpClient_t83;

#include "codegen/il2cpp-codegen.h"

// System.Void RemoteConnection::.ctor()
extern "C" void RemoteConnection__ctor_m371 (RemoteConnection_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RemoteConnection::Start()
extern "C" void RemoteConnection_Start_m372 (RemoteConnection_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RemoteConnection::Update()
extern "C" void RemoteConnection_Update_m373 (RemoteConnection_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RemoteConnection::OnApplicationQuit()
extern "C" void RemoteConnection_OnApplicationQuit_m374 (RemoteConnection_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket RemoteConnection::SetupListening(System.Int32)
extern "C" Socket_t82 * RemoteConnection_SetupListening_m375 (Object_t * __this /* static, unused */, int32_t ___listeningPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.TcpClient RemoteConnection::AcceptIncoming(System.Net.Sockets.Socket)
extern "C" TcpClient_t83 * RemoteConnection_AcceptIncoming_m376 (Object_t * __this /* static, unused */, Socket_t82 * ___listeningSocket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RemoteConnection::OnConnected()
extern "C" void RemoteConnection_OnConnected_m377 (RemoteConnection_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RemoteConnection::OnDisconnected()
extern "C" void RemoteConnection_OnDisconnected_m378 (RemoteConnection_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RemoteConnection::ProcessIncomingData()
extern "C" void RemoteConnection_ProcessIncomingData_m379 (RemoteConnection_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RemoteConnection::SendWebCamStreams()
extern "C" void RemoteConnection_SendWebCamStreams_m380 (RemoteConnection_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RemoteConnection::ProcessOutgoingData()
extern "C" void RemoteConnection_ProcessOutgoingData_m381 (RemoteConnection_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
