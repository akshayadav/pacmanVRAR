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

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t168;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m12166_gshared (Func_2_t168 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m12166(__this, ___object, ___method, method) (( void (*) (Func_2_t168 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m12166_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
extern "C" bool Func_2_Invoke_m12168_gshared (Func_2_t168 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m12168(__this, ___arg1, method) (( bool (*) (Func_2_t168 *, Object_t *, const MethodInfo*))Func_2_Invoke_m12168_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m12170_gshared (Func_2_t168 * __this, Object_t * ___arg1, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m12170(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t168 *, Object_t *, AsyncCallback_t9 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m12170_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Func_2_EndInvoke_m12172_gshared (Func_2_t168 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m12172(__this, ___result, method) (( bool (*) (Func_2_t168 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m12172_gshared)(__this, ___result, method)