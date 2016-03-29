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

// UnityEngine.UI.ClipperRegistry
struct ClipperRegistry_t635;
// UnityEngine.UI.IClipper
struct IClipper_t682;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ClipperRegistry::.ctor()
extern "C" void ClipperRegistry__ctor_m3441 (ClipperRegistry_t635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ClipperRegistry UnityEngine.UI.ClipperRegistry::get_instance()
extern "C" ClipperRegistry_t635 * ClipperRegistry_get_instance_m3442 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Cull()
extern "C" void ClipperRegistry_Cull_m3443 (ClipperRegistry_t635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Register(UnityEngine.UI.IClipper)
extern "C" void ClipperRegistry_Register_m3444 (Object_t * __this /* static, unused */, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Unregister(UnityEngine.UI.IClipper)
extern "C" void ClipperRegistry_Unregister_m3445 (Object_t * __this /* static, unused */, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
