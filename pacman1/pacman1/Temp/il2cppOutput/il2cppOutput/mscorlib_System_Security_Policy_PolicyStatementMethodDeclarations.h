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

// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1622;
// System.Security.PermissionSet
struct PermissionSet_t1351;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionSet System.Security.Policy.PolicyStatement::get_PermissionSet()
extern "C" PermissionSet_t1351 * PolicyStatement_get_PermissionSet_m10004 (PolicyStatement_t1622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyStatement::Equals(System.Object)
extern "C" bool PolicyStatement_Equals_m10005 (PolicyStatement_t1622 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.PolicyStatement::GetHashCode()
extern "C" int32_t PolicyStatement_GetHashCode_m10006 (PolicyStatement_t1622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
