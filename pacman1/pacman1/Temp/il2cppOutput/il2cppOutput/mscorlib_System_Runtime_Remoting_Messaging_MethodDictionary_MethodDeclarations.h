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

// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct DictionaryEnumerator_t1489;
// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t1483;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern "C" void DictionaryEnumerator__ctor_m9230 (DictionaryEnumerator_t1489 * __this, MethodDictionary_t1483 * ___methodDictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern "C" Object_t * DictionaryEnumerator_get_Current_m9231 (DictionaryEnumerator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern "C" bool DictionaryEnumerator_MoveNext_m9232 (DictionaryEnumerator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::Reset()
extern "C" void DictionaryEnumerator_Reset_m9233 (DictionaryEnumerator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern "C" DictionaryEntry_t1100  DictionaryEnumerator_get_Entry_m9234 (DictionaryEnumerator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m9235 (DictionaryEnumerator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m9236 (DictionaryEnumerator_t1489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;