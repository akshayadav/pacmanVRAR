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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t1890;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m11752_gshared (DefaultComparer_t1890 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11752(__this, method) (( void (*) (DefaultComparer_t1890 *, const MethodInfo*))DefaultComparer__ctor_m11752_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11753_gshared (DefaultComparer_t1890 * __this, RaycastResult_t125  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11753(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1890 *, RaycastResult_t125 , const MethodInfo*))DefaultComparer_GetHashCode_m11753_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11754_gshared (DefaultComparer_t1890 * __this, RaycastResult_t125  ___x, RaycastResult_t125  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11754(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1890 *, RaycastResult_t125 , RaycastResult_t125 , const MethodInfo*))DefaultComparer_Equals_m11754_gshared)(__this, ___x, ___y, method)
