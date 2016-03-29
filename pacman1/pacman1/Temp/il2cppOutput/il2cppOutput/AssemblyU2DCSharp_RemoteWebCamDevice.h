#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.WebCamTexture
struct WebCamTexture_t90;
// UnityEngine.Color32[]
struct Color32U5BU5D_t91;
// UnityEngine.Texture2D
struct Texture2D_t85;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_WebCamDevice.h"

// RemoteWebCamDevice
struct  RemoteWebCamDevice_t88  : public Object_t
{
	// System.String RemoteWebCamDevice::name
	String_t* ___name_0;
	// System.String RemoteWebCamDevice::internalName
	String_t* ___internalName_1;
	// UnityEngine.WebCamDevice RemoteWebCamDevice::device
	WebCamDevice_t89  ___device_2;
	// UnityEngine.WebCamTexture RemoteWebCamDevice::texture
	WebCamTexture_t90 * ___texture_3;
	// UnityEngine.Color32[] RemoteWebCamDevice::imageBuffer
	Color32U5BU5D_t91* ___imageBuffer_4;
	// UnityEngine.Texture2D RemoteWebCamDevice::image
	Texture2D_t85 * ___image_5;
};
