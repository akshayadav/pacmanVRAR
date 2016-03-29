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

// RemoteWebCamDevice
struct RemoteWebCamDevice_t88;
// UnityEngine.Texture2D
struct Texture2D_t85;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WebCamDevice.h"

// System.Void RemoteWebCamDevice::.ctor(UnityEngine.WebCamDevice)
extern "C" void RemoteWebCamDevice__ctor_m394 (RemoteWebCamDevice_t88 * __this, WebCamDevice_t89  ___device, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RemoteWebCamDevice::StartStream(System.Int32,System.Int32,System.Int32)
extern "C" void RemoteWebCamDevice_StartStream_m395 (RemoteWebCamDevice_t88 * __this, int32_t ___width, int32_t ___height, int32_t ___fps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RemoteWebCamDevice::StopStream()
extern "C" void RemoteWebCamDevice_StopStream_m396 (RemoteWebCamDevice_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RemoteWebCamDevice::CheckTextureChange()
extern "C" void RemoteWebCamDevice_CheckTextureChange_m397 (RemoteWebCamDevice_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D RemoteWebCamDevice::GetImage()
extern "C" Texture2D_t85 * RemoteWebCamDevice_GetImage_m398 (RemoteWebCamDevice_t88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
