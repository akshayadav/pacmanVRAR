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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
struct DefaultComparer_t1993;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m13067_gshared (DefaultComparer_t1993 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13067(__this, method) (( void (*) (DefaultComparer_t1993 *, const MethodInfo*))DefaultComparer__ctor_m13067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13068_gshared (DefaultComparer_t1993 * __this, Color32_t92  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13068(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1993 *, Color32_t92 , const MethodInfo*))DefaultComparer_GetHashCode_m13068_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13069_gshared (DefaultComparer_t1993 * __this, Color32_t92  ___x, Color32_t92  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13069(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1993 *, Color32_t92 , Color32_t92 , const MethodInfo*))DefaultComparer_Equals_m13069_gshared)(__this, ___x, ___y, method)
