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

// System.Func`2<System.Object,System.Object>
struct Func_2_t170;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m12181_gshared (Func_2_t170 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m12181(__this, ___object, ___method, method) (( void (*) (Func_2_t170 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m12181_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m12183_gshared (Func_2_t170 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m12183(__this, ___arg1, method) (( Object_t * (*) (Func_2_t170 *, Object_t *, const MethodInfo*))Func_2_Invoke_m12183_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m12185_gshared (Func_2_t170 * __this, Object_t * ___arg1, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m12185(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t170 *, Object_t *, AsyncCallback_t9 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m12185_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m12187_gshared (Func_2_t170 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m12187(__this, ___result, method) (( Object_t * (*) (Func_2_t170 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m12187_gshared)(__this, ___result, method)
