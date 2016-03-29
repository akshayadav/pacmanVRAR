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

// UnityEngine.AsyncOperation
struct AsyncOperation_t174;
struct AsyncOperation_t174_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m1307 (AsyncOperation_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m1308 (AsyncOperation_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m1309 (AsyncOperation_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t174_marshal(const AsyncOperation_t174& unmarshaled, AsyncOperation_t174_marshaled& marshaled);
extern "C" void AsyncOperation_t174_marshal_back(const AsyncOperation_t174_marshaled& marshaled, AsyncOperation_t174& unmarshaled);
extern "C" void AsyncOperation_t174_marshal_cleanup(AsyncOperation_t174_marshaled& marshaled);
