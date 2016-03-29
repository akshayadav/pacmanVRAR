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

// System.Net.Sockets.TcpClient
struct TcpClient_t83;
// System.Net.Sockets.Socket
struct Socket_t82;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t157;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.Sockets.TcpClient::.ctor()
extern "C" void TcpClient__ctor_m763 (TcpClient_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::System.IDisposable.Dispose()
extern "C" void TcpClient_System_IDisposable_Dispose_m5189 (TcpClient_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Init(System.Net.Sockets.AddressFamily)
extern "C" void TcpClient_Init_m5190 (TcpClient_t83 * __this, int32_t ___family, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
extern "C" Socket_t82 * TcpClient_get_Client_m753 (TcpClient_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_Client(System.Net.Sockets.Socket)
extern "C" void TcpClient_set_Client_m764 (TcpClient_t83 * __this, Socket_t82 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.TcpClient::get_Available()
extern "C" int32_t TcpClient_get_Available_m767 (TcpClient_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C" void TcpClient_Close_m755 (TcpClient_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Dispose(System.Boolean)
extern "C" void TcpClient_Dispose_m5191 (TcpClient_t83 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Finalize()
extern "C" void TcpClient_Finalize_m5192 (TcpClient_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C" NetworkStream_t157 * TcpClient_GetStream_m752 (TcpClient_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::CheckDisposed()
extern "C" void TcpClient_CheckDisposed_m5193 (TcpClient_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
