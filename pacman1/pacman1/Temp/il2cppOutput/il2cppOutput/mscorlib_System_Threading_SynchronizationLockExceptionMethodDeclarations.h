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

// System.Threading.SynchronizationLockException
struct SynchronizationLockException_t1677;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t454;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.SynchronizationLockException::.ctor()
extern "C" void SynchronizationLockException__ctor_m10359 (SynchronizationLockException_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationLockException::.ctor(System.String)
extern "C" void SynchronizationLockException__ctor_m10360 (SynchronizationLockException_t1677 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationLockException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SynchronizationLockException__ctor_m10361 (SynchronizationLockException_t1677 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
