#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t72;
// System.Byte[]
struct ByteU5BU5D_t73;
// ScreenStream
struct ScreenStream_t74;
// WebCamStreamer
struct WebCamStreamer_t75;

#include "mscorlib_System_Object.h"

// DataReceiver
struct  DataReceiver_t71  : public Object_t
{
	// System.IO.MemoryStream DataReceiver::data
	MemoryStream_t72 * ___data_0;
	// System.Byte[] DataReceiver::buffer
	ByteU5BU5D_t73* ___buffer_1;
	// ScreenStream DataReceiver::screen
	ScreenStream_t74 * ___screen_2;
	// WebCamStreamer DataReceiver::webCamStreamer
	WebCamStreamer_t75 * ___webCamStreamer_3;
};
