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

// UnityEngine.Texture
struct Texture_t14;
// UnityEngine.GUIStyle
struct GUIStyle_t84;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t161;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t324;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t336;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayout::Label(UnityEngine.Texture,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m777 (Object_t * __this /* static, unused */, Texture_t14 * ___image, GUIStyle_t84 * ___style, GUILayoutOptionU5BU5D_t161* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m778 (Object_t * __this /* static, unused */, String_t* ___text, GUIStyle_t84 * ___style, GUILayoutOptionU5BU5D_t161* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m1895 (Object_t * __this /* static, unused */, GUIContent_t324 * ___content, GUIStyle_t84 * ___style, GUILayoutOptionU5BU5D_t161* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C" void GUILayout_Space_m776 (Object_t * __this /* static, unused */, float ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C" void GUILayout_BeginArea_m775 (Object_t * __this /* static, unused */, Rect_t18  ___screenRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUILayout_BeginArea_m1896 (Object_t * __this /* static, unused */, Rect_t18  ___screenRect, GUIContent_t324 * ___content, GUIStyle_t84 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C" void GUILayout_EndArea_m779 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t336 * GUILayout_Width_m1897 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t336 * GUILayout_Height_m1898 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
