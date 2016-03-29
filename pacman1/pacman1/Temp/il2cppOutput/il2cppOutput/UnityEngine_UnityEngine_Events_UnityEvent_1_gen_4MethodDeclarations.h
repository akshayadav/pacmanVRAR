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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t596;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t691;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t410;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" void UnityEvent_1__ctor_m3830_gshared (UnityEvent_1_t596 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3830(__this, method) (( void (*) (UnityEvent_1_t596 *, const MethodInfo*))UnityEvent_1__ctor_m3830_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m3766_gshared (UnityEvent_1_t596 * __this, UnityAction_1_t691 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m3766(__this, ___call, method) (( void (*) (UnityEvent_1_t596 *, UnityAction_1_t691 *, const MethodInfo*))UnityEvent_1_AddListener_m3766_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m16161_gshared (UnityEvent_1_t596 * __this, UnityAction_1_t691 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m16161(__this, ___call, method) (( void (*) (UnityEvent_1_t596 *, UnityAction_1_t691 *, const MethodInfo*))UnityEvent_1_RemoveListener_m16161_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m16162_gshared (UnityEvent_1_t596 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m16162(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t596 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m16162_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t410 * UnityEvent_1_GetDelegate_m16163_gshared (UnityEvent_1_t596 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16163(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t410 * (*) (UnityEvent_1_t596 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m16163_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t410 * UnityEvent_1_GetDelegate_m16164_gshared (Object_t * __this /* static, unused */, UnityAction_1_t691 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16164(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t410 * (*) (Object_t * /* static, unused */, UnityAction_1_t691 *, const MethodInfo*))UnityEvent_1_GetDelegate_m16164_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m3832_gshared (UnityEvent_1_t596 * __this, bool ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3832(__this, ___arg0, method) (( void (*) (UnityEvent_1_t596 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m3832_gshared)(__this, ___arg0, method)
