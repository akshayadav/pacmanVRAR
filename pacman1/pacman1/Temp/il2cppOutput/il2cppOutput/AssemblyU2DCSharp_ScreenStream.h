#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t14;
// UnityEngine.GUIStyle
struct GUIStyle_t84;
// UnityEngine.Texture2D
struct Texture2D_t85;
// System.Byte[]
struct ByteU5BU5D_t73;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ScreenStream
struct  ScreenStream_t74  : public MonoBehaviour_t2
{
	// UnityEngine.Texture ScreenStream::logo
	Texture_t14 * ___logo_2;
	// UnityEngine.GUIStyle ScreenStream::logoCenter
	GUIStyle_t84 * ___logoCenter_3;
	// UnityEngine.GUIStyle ScreenStream::title
	GUIStyle_t84 * ___title_4;
	// UnityEngine.GUIStyle ScreenStream::blueBox
	GUIStyle_t84 * ___blueBox_5;
	// UnityEngine.GUIStyle ScreenStream::deviceInfo
	GUIStyle_t84 * ___deviceInfo_6;
	// UnityEngine.GUIStyle ScreenStream::warningBox
	GUIStyle_t84 * ___warningBox_7;
	// UnityEngine.Texture2D ScreenStream::screen
	Texture2D_t85 * ___screen_8;
	// System.Boolean ScreenStream::synced
	bool ___synced_9;
	// System.Byte[] ScreenStream::image
	ByteU5BU5D_t73* ___image_10;
	// System.Int32 ScreenStream::width
	int32_t ___width_11;
	// System.Int32 ScreenStream::height
	int32_t ___height_12;
};
