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

// DataReceiver
struct DataReceiver_t71;
// ScreenStream
struct ScreenStream_t74;
// WebCamStreamer
struct WebCamStreamer_t75;
// System.IO.Stream
struct Stream_t80;
// System.IO.BinaryReader
struct BinaryReader_t104;

#include "codegen/il2cpp-codegen.h"

// System.Void DataReceiver::.ctor(ScreenStream,WebCamStreamer)
extern "C" void DataReceiver__ctor_m338 (DataReceiver_t71 * __this, ScreenStream_t74 * ___screen, WebCamStreamer_t75 * ___webCamStreamer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataReceiver::AppendData(System.IO.Stream,System.Int32)
extern "C" void DataReceiver_AppendData_m339 (DataReceiver_t71 * __this, Stream_t80 * ___stream, int32_t ___available, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataReceiver::ProcessMessages()
extern "C" void DataReceiver_ProcessMessages_m340 (DataReceiver_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DataReceiver::HasFullMessage(System.IO.Stream)
extern "C" bool DataReceiver_HasFullMessage_m341 (Object_t * __this /* static, unused */, Stream_t80 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataReceiver::ProcessMessage(System.IO.Stream)
extern "C" void DataReceiver_ProcessMessage_m342 (DataReceiver_t71 * __this, Stream_t80 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataReceiver::HandleHello(System.IO.BinaryReader)
extern "C" void DataReceiver_HandleHello_m343 (DataReceiver_t71 * __this, BinaryReader_t104 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataReceiver::HandleScreenStream(System.IO.BinaryReader)
extern "C" void DataReceiver_HandleScreenStream_m344 (DataReceiver_t71 * __this, BinaryReader_t104 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataReceiver::HandleGyroSettings(System.IO.BinaryReader)
extern "C" void DataReceiver_HandleGyroSettings_m345 (DataReceiver_t71 * __this, BinaryReader_t104 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataReceiver::HandleScreenOrientation(System.IO.BinaryReader)
extern "C" void DataReceiver_HandleScreenOrientation_m346 (DataReceiver_t71 * __this, BinaryReader_t104 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataReceiver::HandleWebCamStartStream(System.IO.BinaryReader)
extern "C" void DataReceiver_HandleWebCamStartStream_m347 (DataReceiver_t71 * __this, BinaryReader_t104 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataReceiver::HandleWebCamStopStream(System.IO.BinaryReader)
extern "C" void DataReceiver_HandleWebCamStopStream_m348 (DataReceiver_t71 * __this, BinaryReader_t104 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
