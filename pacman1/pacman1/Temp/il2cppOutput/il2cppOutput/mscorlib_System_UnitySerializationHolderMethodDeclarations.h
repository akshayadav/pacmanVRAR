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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1760;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t454;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1700;
// System.Reflection.Module
struct Module_t1332;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m11213 (UnitySerializationHolder_t1760 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m11214 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t454 * ___info, StreamingContext_t455  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m11215 (Object_t * __this /* static, unused */, DBNull_t1700 * ___instance, SerializationInfo_t454 * ___info, StreamingContext_t455  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m11216 (Object_t * __this /* static, unused */, Module_t1332 * ___instance, SerializationInfo_t454 * ___info, StreamingContext_t455  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m11217 (UnitySerializationHolder_t1760 * __this, SerializationInfo_t454 * ___info, StreamingContext_t455  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m11218 (UnitySerializationHolder_t1760 * __this, StreamingContext_t455  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
