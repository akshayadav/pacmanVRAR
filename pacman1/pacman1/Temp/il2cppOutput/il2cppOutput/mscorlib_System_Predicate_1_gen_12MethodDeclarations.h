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

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t1984;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12926_gshared (Predicate_1_t1984 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12926(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1984 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12926_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12927_gshared (Predicate_1_t1984 * __this, Vector2_t15  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12927(__this, ___obj, method) (( bool (*) (Predicate_1_t1984 *, Vector2_t15 , const MethodInfo*))Predicate_1_Invoke_m12927_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12928_gshared (Predicate_1_t1984 * __this, Vector2_t15  ___obj, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12928(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1984 *, Vector2_t15 , AsyncCallback_t9 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12928_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12929_gshared (Predicate_1_t1984 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12929(__this, ___result, method) (( bool (*) (Predicate_1_t1984 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12929_gshared)(__this, ___result, method)
