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

// UnityEngine.AnimationCurve
struct AnimationCurve_t285;
struct AnimationCurve_t285_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t445;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m1600 (AnimationCurve_t285 * __this, KeyframeU5BU5D_t445* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m1601 (AnimationCurve_t285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m1602 (AnimationCurve_t285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m1603 (AnimationCurve_t285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m1604 (AnimationCurve_t285 * __this, KeyframeU5BU5D_t445* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t285_marshal(const AnimationCurve_t285& unmarshaled, AnimationCurve_t285_marshaled& marshaled);
extern "C" void AnimationCurve_t285_marshal_back(const AnimationCurve_t285_marshaled& marshaled, AnimationCurve_t285& unmarshaled);
extern "C" void AnimationCurve_t285_marshal_cleanup(AnimationCurve_t285_marshaled& marshaled);
