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

// System.Reflection.ModuleResolveEventHandler
struct ModuleResolveEventHandler_t1349;
// System.Object
struct Object_t;
// System.Reflection.Module
struct Module_t1332;
// System.ResolveEventArgs
struct ResolveEventArgs_t1747;
// System.IAsyncResult
struct IAsyncResult_t8;
// System.AsyncCallback
struct AsyncCallback_t9;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.ModuleResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ModuleResolveEventHandler__ctor_m11254 (ModuleResolveEventHandler_t1349 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Module_t1332 * ModuleResolveEventHandler_Invoke_m11255 (ModuleResolveEventHandler_t1349 * __this, Object_t * ___sender, ResolveEventArgs_t1747 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Module_t1332 * pinvoke_delegate_wrapper_ModuleResolveEventHandler_t1349(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1747 * ___e);
// System.IAsyncResult System.Reflection.ModuleResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ModuleResolveEventHandler_BeginInvoke_m11256 (ModuleResolveEventHandler_t1349 * __this, Object_t * ___sender, ResolveEventArgs_t1747 * ___e, AsyncCallback_t9 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Module_t1332 * ModuleResolveEventHandler_EndInvoke_m11257 (ModuleResolveEventHandler_t1349 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
