﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t67;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2056;
// System.Object[]
struct ObjectU5BU5D_t151;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2061;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t454;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2099;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t2098  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::table
	Int32U5BU5D_t67* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::linkSlots
	LinkU5BU5D_t2056* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::keySlots
	ObjectU5BU5D_t151* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,System.Object>::valueSlots
	ObjectU5BU5D_t151* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,System.Object>::serialization_info
	SerializationInfo_t454 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t2098_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<>f__am$cacheB
	Transform_1_t2099 * ___U3CU3Ef__amU24cacheB_15;
};