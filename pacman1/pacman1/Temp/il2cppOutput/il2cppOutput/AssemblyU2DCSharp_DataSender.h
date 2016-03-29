#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PacketWriter
struct PacketWriter_t77;
// System.IO.Stream
struct Stream_t80;

#include "mscorlib_System_Object.h"

// DataSender
struct  DataSender_t79  : public Object_t
{
	// PacketWriter DataSender::writer
	PacketWriter_t77 * ___writer_0;
	// System.IO.Stream DataSender::stream
	Stream_t80 * ___stream_1;
};
