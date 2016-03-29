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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t499;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m3673_gshared (Comparison_1_t499 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m3673(__this, ___object, ___method, method) (( void (*) (Comparison_1_t499 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3673_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m11765_gshared (Comparison_1_t499 * __this, RaycastResult_t125  ___x, RaycastResult_t125  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m11765(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t499 *, RaycastResult_t125 , RaycastResult_t125 , const MethodInfo*))Comparison_1_Invoke_m11765_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m11766_gshared (Comparison_1_t499 * __this, RaycastResult_t125  ___x, RaycastResult_t125  ___y, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m11766(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t499 *, RaycastResult_t125 , RaycastResult_t125 , AsyncCallback_t9 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11766_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11767_gshared (Comparison_1_t499 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m11767(__this, ___result, method) (( int32_t (*) (Comparison_1_t499 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11767_gshared)(__this, ___result, method)
