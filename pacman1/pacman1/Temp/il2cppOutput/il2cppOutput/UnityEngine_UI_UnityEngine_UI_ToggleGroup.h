﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t632;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t633;
// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t634;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"

// UnityEngine.UI.ToggleGroup
struct  ToggleGroup_t631  : public UIBehaviour_t497
{
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_2;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_t632 * ___m_Toggles_3;
};
struct ToggleGroup_t631_StaticFields{
	// System.Predicate`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::<>f__am$cache2
	Predicate_1_t633 * ___U3CU3Ef__amU24cache2_4;
	// System.Func`2<UnityEngine.UI.Toggle,System.Boolean> UnityEngine.UI.ToggleGroup::<>f__am$cache3
	Func_2_t634 * ___U3CU3Ef__amU24cache3_5;
};