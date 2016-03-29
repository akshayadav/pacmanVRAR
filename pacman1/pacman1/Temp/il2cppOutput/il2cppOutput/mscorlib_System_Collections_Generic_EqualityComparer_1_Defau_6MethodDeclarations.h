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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2031;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m13520_gshared (DefaultComparer_t2031 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13520(__this, method) (( void (*) (DefaultComparer_t2031 *, const MethodInfo*))DefaultComparer__ctor_m13520_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13521_gshared (DefaultComparer_t2031 * __this, UIVertex_t311  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13521(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2031 *, UIVertex_t311 , const MethodInfo*))DefaultComparer_GetHashCode_m13521_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13522_gshared (DefaultComparer_t2031 * __this, UIVertex_t311  ___x, UIVertex_t311  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13522(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2031 *, UIVertex_t311 , UIVertex_t311 , const MethodInfo*))DefaultComparer_Equals_m13522_gshared)(__this, ___x, ___y, method)
