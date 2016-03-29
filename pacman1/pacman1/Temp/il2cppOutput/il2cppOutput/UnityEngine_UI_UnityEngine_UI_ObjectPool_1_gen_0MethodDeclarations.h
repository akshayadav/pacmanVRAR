﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1902;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1904;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m11863_gshared (ObjectPool_1_t1902 * __this, UnityAction_1_t1904 * ___actionOnGet, UnityAction_1_t1904 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m11863(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1902 *, UnityAction_1_t1904 *, UnityAction_1_t1904 *, const MethodInfo*))ObjectPool_1__ctor_m11863_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m11865_gshared (ObjectPool_1_t1902 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m11865(__this, method) (( int32_t (*) (ObjectPool_1_t1902 *, const MethodInfo*))ObjectPool_1_get_countAll_m11865_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m11867_gshared (ObjectPool_1_t1902 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m11867(__this, ___value, method) (( void (*) (ObjectPool_1_t1902 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11867_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m11869_gshared (ObjectPool_1_t1902 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m11869(__this, method) (( Object_t * (*) (ObjectPool_1_t1902 *, const MethodInfo*))ObjectPool_1_Get_m11869_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m11871_gshared (ObjectPool_1_t1902 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m11871(__this, ___element, method) (( void (*) (ObjectPool_1_t1902 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m11871_gshared)(__this, ___element, method)
