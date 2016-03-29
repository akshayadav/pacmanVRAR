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

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t536;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m3735_gshared (Comparison_1_t536 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m3735(__this, ___object, ___method, method) (( void (*) (Comparison_1_t536 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3735_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15707_gshared (Comparison_1_t536 * __this, RaycastHit_t113  ___x, RaycastHit_t113  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15707(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t536 *, RaycastHit_t113 , RaycastHit_t113 , const MethodInfo*))Comparison_1_Invoke_m15707_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15708_gshared (Comparison_1_t536 * __this, RaycastHit_t113  ___x, RaycastHit_t113  ___y, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15708(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t536 *, RaycastHit_t113 , RaycastHit_t113 , AsyncCallback_t9 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15708_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15709_gshared (Comparison_1_t536 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15709(__this, ___result, method) (( int32_t (*) (Comparison_1_t536 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15709_gshared)(__this, ___result, method)
