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

// UnityEngine.Texture2D
struct Texture2D_t85;
// UnityEngine.Color32[]
struct Color32U5BU5D_t91;
// System.Byte[]
struct ByteU5BU5D_t73;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" void Texture2D__ctor_m975 (Texture2D_t85 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" void Texture2D__ctor_m780 (Texture2D_t85 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" void Texture2D_Internal_Create_m976 (Object_t * __this /* static, unused */, Texture2D_t85 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C" Texture2D_t85 * Texture2D_get_whiteTexture_m977 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C" Color_t11  Texture2D_GetPixelBilinear_m978 (Texture2D_t85 * __this, float ___u, float ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)
extern "C" void Texture2D_SetAllPixels32_m979 (Texture2D_t85 * __this, Color32U5BU5D_t91* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C" void Texture2D_SetPixels32_m790 (Texture2D_t85 * __this, Color32U5BU5D_t91* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[],System.Int32)
extern "C" void Texture2D_SetPixels32_m980 (Texture2D_t85 * __this, Color32U5BU5D_t91* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::LoadImage(System.Byte[])
extern "C" bool Texture2D_LoadImage_m781 (Texture2D_t85 * __this, ByteU5BU5D_t73* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32)
extern "C" bool Texture2D_Resize_m788 (Texture2D_t85 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::Internal_ResizeWH(System.Int32,System.Int32)
extern "C" bool Texture2D_Internal_ResizeWH_m981 (Texture2D_t85 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Texture2D::EncodeToJPG(System.Int32)
extern "C" ByteU5BU5D_t73* Texture2D_EncodeToJPG_m982 (Texture2D_t85 * __this, int32_t ___quality, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Texture2D::EncodeToJPG()
extern "C" ByteU5BU5D_t73* Texture2D_EncodeToJPG_m768 (Texture2D_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
