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

// UnityEngine.WebCamTexture
struct WebCamTexture_t90;
// System.String
struct String_t;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t162;
// UnityEngine.Color32[]
struct Color32U5BU5D_t91;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WebCamTexture::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C" void WebCamTexture__ctor_m785 (WebCamTexture_t90 * __this, String_t* ___deviceName, int32_t ___requestedWidth, int32_t ___requestedHeight, int32_t ___requestedFPS, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C" void WebCamTexture_Internal_CreateWebCamTexture_m1574 (Object_t * __this /* static, unused */, WebCamTexture_t90 * ___self, String_t* ___scriptingDevice, int32_t ___requestedWidth, int32_t ___requestedHeight, int32_t ___maxFramerate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C" void WebCamTexture_Play_m786 (WebCamTexture_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C" void WebCamTexture_INTERNAL_CALL_Play_m1575 (Object_t * __this /* static, unused */, WebCamTexture_t90 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C" void WebCamTexture_Stop_m787 (WebCamTexture_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)
extern "C" void WebCamTexture_INTERNAL_CALL_Stop_m1576 (Object_t * __this /* static, unused */, WebCamTexture_t90 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C" WebCamDeviceU5BU5D_t162* WebCamTexture_get_devices_m792 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.WebCamTexture::GetPixels32(UnityEngine.Color32[])
extern "C" Color32U5BU5D_t91* WebCamTexture_GetPixels32_m789 (WebCamTexture_t90 * __this, Color32U5BU5D_t91* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.WebCamTexture::get_videoRotationAngle()
extern "C" int32_t WebCamTexture_get_videoRotationAngle_m769 (WebCamTexture_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_videoVerticallyMirrored()
extern "C" bool WebCamTexture_get_videoVerticallyMirrored_m770 (WebCamTexture_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
