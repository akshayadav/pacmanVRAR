#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t82;
// System.Net.Sockets.TcpClient
struct TcpClient_t83;
// System.Byte[]
struct ByteU5BU5D_t73;
// System.IO.MemoryStream
struct MemoryStream_t72;
// DataSender
struct DataSender_t79;
// DataReceiver
struct DataReceiver_t71;
// WebCamStreamer
struct WebCamStreamer_t75;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// RemoteConnection
struct  RemoteConnection_t81  : public MonoBehaviour_t2
{
	// System.Net.Sockets.Socket RemoteConnection::m_listenSocket
	Socket_t82 * ___m_listenSocket_4;
	// System.Net.Sockets.TcpClient RemoteConnection::m_tcpClient
	TcpClient_t83 * ___m_tcpClient_5;
	// System.Byte[] RemoteConnection::m_copyBuffer
	ByteU5BU5D_t73* ___m_copyBuffer_6;
	// System.Byte[] RemoteConnection::m_readBuffer
	ByteU5BU5D_t73* ___m_readBuffer_7;
	// System.IO.MemoryStream RemoteConnection::m_readStream
	MemoryStream_t72 * ___m_readStream_8;
	// System.IO.MemoryStream RemoteConnection::m_writeStream
	MemoryStream_t72 * ___m_writeStream_9;
	// DataSender RemoteConnection::m_dataSender
	DataSender_t79 * ___m_dataSender_10;
	// DataReceiver RemoteConnection::m_dataReceiver
	DataReceiver_t71 * ___m_dataReceiver_11;
	// WebCamStreamer RemoteConnection::m_webCamStreamer
	WebCamStreamer_t75 * ___m_webCamStreamer_12;
	// System.Int32 RemoteConnection::screenWidth
	int32_t ___screenWidth_13;
	// System.Int32 RemoteConnection::screenHeight
	int32_t ___screenHeight_14;
};
