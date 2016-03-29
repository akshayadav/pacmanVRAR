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

// System.Security.Policy.CodeGroup
struct CodeGroup_t1621;
// System.String
struct String_t;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t1623;
// System.Collections.IList
struct IList_t1061;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.String System.Security.Policy.CodeGroup::get_Description()
extern "C" String_t* CodeGroup_get_Description_m9978 (CodeGroup_t1621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::get_MembershipCondition()
extern "C" Object_t * CodeGroup_get_MembershipCondition_m9979 (CodeGroup_t1621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Name()
extern "C" String_t* CodeGroup_get_Name_m9980 (CodeGroup_t1621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Security.Policy.CodeGroup::get_Children()
extern "C" Object_t * CodeGroup_get_Children_m9981 (CodeGroup_t1621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Object)
extern "C" bool CodeGroup_Equals_m9982 (CodeGroup_t1621 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Security.Policy.CodeGroup,System.Boolean)
extern "C" bool CodeGroup_Equals_m9983 (CodeGroup_t1621 * __this, CodeGroup_t1621 * ___cg, bool ___compareChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.CodeGroup::GetHashCode()
extern "C" int32_t CodeGroup_GetHashCode_m9984 (CodeGroup_t1621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
