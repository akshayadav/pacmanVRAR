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

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2035;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m13533_gshared (Comparison_1_t2035 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m13533(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2035 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m13533_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m13534_gshared (Comparison_1_t2035 * __this, UIVertex_t311  ___x, UIVertex_t311  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m13534(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2035 *, UIVertex_t311 , UIVertex_t311 , const MethodInfo*))Comparison_1_Invoke_m13534_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m13535_gshared (Comparison_1_t2035 * __this, UIVertex_t311  ___x, UIVertex_t311  ___y, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m13535(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2035 *, UIVertex_t311 , UIVertex_t311 , AsyncCallback_t9 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m13535_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13536_gshared (Comparison_1_t2035 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m13536(__this, ___result, method) (( int32_t (*) (Comparison_1_t2035 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m13536_gshared)(__this, ___result, method)
