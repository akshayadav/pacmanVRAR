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

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2278;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m16864_gshared (UnityAction_1_t2278 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m16864(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2278 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m16864_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m16865_gshared (UnityAction_1_t2278 * __this, Vector2_t15  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m16865(__this, ___arg0, method) (( void (*) (UnityAction_1_t2278 *, Vector2_t15 , const MethodInfo*))UnityAction_1_Invoke_m16865_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m16866_gshared (UnityAction_1_t2278 * __this, Vector2_t15  ___arg0, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m16866(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2278 *, Vector2_t15 , AsyncCallback_t9 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m16866_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m16867_gshared (UnityAction_1_t2278 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m16867(__this, ___result, method) (( void (*) (UnityAction_1_t2278 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m16867_gshared)(__this, ___result, method)
