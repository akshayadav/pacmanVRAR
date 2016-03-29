#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture
struct RenderTexture_t12;
// CardboardOnGUI/OnGUICallback
struct OnGUICallback_t6;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// CardboardOnGUI
struct  CardboardOnGUI_t10  : public MonoBehaviour_t2
{
	// UnityEngine.Color CardboardOnGUI::background
	Color_t11  ___background_4;
	// UnityEngine.RenderTexture CardboardOnGUI::guiScreen
	RenderTexture_t12 * ___guiScreen_5;
};
struct CardboardOnGUI_t10_StaticFields{
	// System.Boolean CardboardOnGUI::okToDraw
	bool ___okToDraw_2;
	// System.Boolean CardboardOnGUI::isGUIVisible
	bool ___isGUIVisible_3;
	// CardboardOnGUI/OnGUICallback CardboardOnGUI::onGUICallback
	OnGUICallback_t6 * ___onGUICallback_6;
};
