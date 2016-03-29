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

// WebCamStreamer
struct WebCamStreamer_t75;
// RemoteWebCamDevice[]
struct RemoteWebCamDeviceU5BU5D_t105;
// RemoteWebCamDevice
struct RemoteWebCamDevice_t88;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void WebCamStreamer::.ctor()
extern "C" void WebCamStreamer__ctor_m399 (WebCamStreamer_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RemoteWebCamDevice[] WebCamStreamer::get_Devices()
extern "C" RemoteWebCamDeviceU5BU5D_t105* WebCamStreamer_get_Devices_m400 (WebCamStreamer_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RemoteWebCamDevice WebCamStreamer::GetDevice(System.String)
extern "C" RemoteWebCamDevice_t88 * WebCamStreamer_GetDevice_m401 (WebCamStreamer_t75 * __this, String_t* ___deviceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebCamStreamer::StartStream(System.String,System.Int32,System.Int32,System.Int32)
extern "C" bool WebCamStreamer_StartStream_m402 (WebCamStreamer_t75 * __this, String_t* ___deviceName, int32_t ___width, int32_t ___height, int32_t ___fps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCamStreamer::StopStream(System.String)
extern "C" void WebCamStreamer_StopStream_m403 (WebCamStreamer_t75 * __this, String_t* ___deviceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCamStreamer::OnDisconnect()
extern "C" void WebCamStreamer_OnDisconnect_m404 (WebCamStreamer_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
