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

// UnityEngine.Component
struct Component_t171;
// UnityEngine.Transform
struct Transform_t39;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t597;
// UnityEngine.UI.IClippable
struct IClippable_t680;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t605;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m3077 (Object_t * __this /* static, unused */, Component_t171 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m3078 (Object_t * __this /* static, unused */, Component_t171 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t39 * MaskUtilities_FindRootSortOverrideCanvas_m3079 (Object_t * __this /* static, unused */, Transform_t39 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m3080 (Object_t * __this /* static, unused */, Transform_t39 * ___transform, Transform_t39 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t597 * MaskUtilities_GetRectMaskForClippable_m3081 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m3082 (Object_t * __this /* static, unused */, RectMask2D_t597 * ___clipper, List_1_t605 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
