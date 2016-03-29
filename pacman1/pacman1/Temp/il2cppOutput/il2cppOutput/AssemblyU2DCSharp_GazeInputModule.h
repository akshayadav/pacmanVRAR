﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t55;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t56;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// GazeInputModule
struct  GazeInputModule_t53  : public BaseInputModule_t54
{
	// System.Boolean GazeInputModule::vrModeOnly
	bool ___vrModeOnly_6;
	// UnityEngine.GameObject GazeInputModule::cursor
	GameObject_t55 * ___cursor_7;
	// System.Boolean GazeInputModule::showCursor
	bool ___showCursor_8;
	// System.Boolean GazeInputModule::scaleCursorSize
	bool ___scaleCursorSize_9;
	// System.Single GazeInputModule::clickTime
	float ___clickTime_10;
	// UnityEngine.Vector2 GazeInputModule::hotspot
	Vector2_t15  ___hotspot_11;
	// UnityEngine.EventSystems.PointerEventData GazeInputModule::pointerData
	PointerEventData_t56 * ___pointerData_12;
	// UnityEngine.Vector2 GazeInputModule::lastHeadPose
	Vector2_t15  ___lastHeadPose_13;
};
