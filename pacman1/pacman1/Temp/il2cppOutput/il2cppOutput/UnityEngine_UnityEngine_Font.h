﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Font>
struct Action_1_t299;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t297;

#include "UnityEngine_UnityEngine_Object.h"

// UnityEngine.Font
struct  Font_t298  : public Object_t110
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t297 * ___m_FontTextureRebuildCallback_3;
};
struct Font_t298_StaticFields{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t299 * ___textureRebuilt_2;
};
