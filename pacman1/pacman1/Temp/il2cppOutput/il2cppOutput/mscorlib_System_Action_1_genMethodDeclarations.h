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

// System.Action`1<System.Boolean>
struct Action_1_t188;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m12332_gshared (Action_1_t188 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m12332(__this, ___object, ___method, method) (( void (*) (Action_1_t188 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m12332_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
extern "C" void Action_1_Invoke_m2293_gshared (Action_1_t188 * __this, bool ___obj, const MethodInfo* method);
#define Action_1_Invoke_m2293(__this, ___obj, method) (( void (*) (Action_1_t188 *, bool, const MethodInfo*))Action_1_Invoke_m2293_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m12333_gshared (Action_1_t188 * __this, bool ___obj, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m12333(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t188 *, bool, AsyncCallback_t9 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m12333_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m12334_gshared (Action_1_t188 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m12334(__this, ___result, method) (( void (*) (Action_1_t188 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m12334_gshared)(__this, ___result, method)
