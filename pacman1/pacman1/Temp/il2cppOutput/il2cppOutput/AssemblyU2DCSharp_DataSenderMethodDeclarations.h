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

// DataSender
struct DataSender_t79;
// System.IO.Stream
struct Stream_t80;
// RemoteWebCamDevice[]
struct RemoteWebCamDeviceU5BU5D_t105;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t73;

#include "codegen/il2cpp-codegen.h"

// System.Void DataSender::.ctor(System.IO.Stream)
extern "C" void DataSender__ctor_m361 (DataSender_t79 * __this, Stream_t80 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataSender::SendHello()
extern "C" void DataSender_SendHello_m362 (DataSender_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataSender::SendOptions()
extern "C" void DataSender_SendOptions_m363 (DataSender_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataSender::SendDeviceOrientation()
extern "C" void DataSender_SendDeviceOrientation_m364 (DataSender_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataSender::SendAccelerometerInput()
extern "C" void DataSender_SendAccelerometerInput_m365 (DataSender_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataSender::SendGyroscopeSettings()
extern "C" void DataSender_SendGyroscopeSettings_m366 (DataSender_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataSender::SendGyroscopeInput()
extern "C" void DataSender_SendGyroscopeInput_m367 (DataSender_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataSender::SendTouchInput()
extern "C" void DataSender_SendTouchInput_m368 (DataSender_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataSender::SendWebCamDeviceList(RemoteWebCamDevice[])
extern "C" void DataSender_SendWebCamDeviceList_m369 (DataSender_t79 * __this, RemoteWebCamDeviceU5BU5D_t105* ___devices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataSender::SendWebCamStream(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
extern "C" void DataSender_SendWebCamStream_m370 (DataSender_t79 * __this, String_t* ___name, int32_t ___width, int32_t ___height, ByteU5BU5D_t73* ___image, int32_t ___angle, bool ___verticallyMirrored, const MethodInfo* method) IL2CPP_METHOD_ATTR;
