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

// ScreenStream
struct ScreenStream_t74;
// System.Byte[]
struct ByteU5BU5D_t73;

#include "codegen/il2cpp-codegen.h"

// System.Void ScreenStream::.ctor()
extern "C" void ScreenStream__ctor_m382 (ScreenStream_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenStream::Start()
extern "C" void ScreenStream_Start_m383 (ScreenStream_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenStream::OnGUI()
extern "C" void ScreenStream_OnGUI_m384 (ScreenStream_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenStream::ShowInfoScreen()
extern "C" void ScreenStream_ShowInfoScreen_m385 (ScreenStream_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenStream::LateUpdate()
extern "C" void ScreenStream_LateUpdate_m386 (ScreenStream_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenStream::OnDisconnect()
extern "C" void ScreenStream_OnDisconnect_m387 (ScreenStream_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenStream::UpdateScreen(System.Byte[],System.Int32,System.Int32)
extern "C" void ScreenStream_UpdateScreen_m388 (ScreenStream_t74 * __this, ByteU5BU5D_t73* ___data, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
