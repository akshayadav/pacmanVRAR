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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2474;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m18824_gshared (DefaultComparer_t2474 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18824(__this, method) (( void (*) (DefaultComparer_t2474 *, const MethodInfo*))DefaultComparer__ctor_m18824_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18825_gshared (DefaultComparer_t2474 * __this, Guid_t1725  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18825(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2474 *, Guid_t1725 , const MethodInfo*))DefaultComparer_GetHashCode_m18825_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18826_gshared (DefaultComparer_t2474 * __this, Guid_t1725  ___x, Guid_t1725  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18826(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2474 *, Guid_t1725 , Guid_t1725 , const MethodInfo*))DefaultComparer_Equals_m18826_gshared)(__this, ___x, ___y, method)
