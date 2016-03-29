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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_0MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m12006(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1915 *, UnityAction_1_t1916 *, UnityAction_1_t1916 *, const MethodInfo*))ObjectPool_1__ctor_m11863_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::get_countAll()
#define ObjectPool_1_get_countAll_m12007(__this, method) (( int32_t (*) (ObjectPool_1_t1915 *, const MethodInfo*))ObjectPool_1_get_countAll_m11865_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m12008(__this, ___value, method) (( void (*) (ObjectPool_1_t1915 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11867_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::Get()
#define ObjectPool_1_Get_m12009(__this, method) (( List_1_t705 * (*) (ObjectPool_1_t1915 *, const MethodInfo*))ObjectPool_1_Get_m11869_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::Release(T)
#define ObjectPool_1_Release_m12010(__this, ___element, method) (( void (*) (ObjectPool_1_t1915 *, List_1_t705 *, const MethodInfo*))ObjectPool_1_Release_m11871_gshared)(__this, ___element, method)
