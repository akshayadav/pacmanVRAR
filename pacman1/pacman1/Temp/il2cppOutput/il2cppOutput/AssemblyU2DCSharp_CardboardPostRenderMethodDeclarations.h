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

// CardboardPostRender
struct CardboardPostRender_t40;
// UnityEngine.Camera
struct Camera_t30;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t98;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t99;
// UnityEngine.Color[]
struct ColorU5BU5D_t100;
// System.Int32[]
struct Int32U5BU5D_t67;

#include "codegen/il2cpp-codegen.h"

// System.Void CardboardPostRender::.ctor()
extern "C" void CardboardPostRender__ctor_m152 (CardboardPostRender_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::.cctor()
extern "C" void CardboardPostRender__cctor_m153 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardPostRender::get_camera()
extern "C" Camera_t30 * CardboardPostRender_get_camera_m154 (CardboardPostRender_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::set_camera(UnityEngine.Camera)
extern "C" void CardboardPostRender_set_camera_m155 (CardboardPostRender_t40 * __this, Camera_t30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Reset()
extern "C" void CardboardPostRender_Reset_m156 (CardboardPostRender_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Awake()
extern "C" void CardboardPostRender_Awake_m157 (CardboardPostRender_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::OnRenderObject()
extern "C" void CardboardPostRender_OnRenderObject_m158 (CardboardPostRender_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::RebuildDistortionMesh()
extern "C" void CardboardPostRender_RebuildDistortionMesh_m159 (CardboardPostRender_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeMeshPoints(System.Int32,System.Int32,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector2[]&)
extern "C" void CardboardPostRender_ComputeMeshPoints_m160 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, Vector3U5BU5D_t98** ___vertices, Vector2U5BU5D_t99** ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] CardboardPostRender::ComputeMeshColors(System.Int32,System.Int32,UnityEngine.Vector2[],System.Int32[],System.Boolean)
extern "C" ColorU5BU5D_t100* CardboardPostRender_ComputeMeshColors_m161 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, Vector2U5BU5D_t99* ___tex, Int32U5BU5D_t67* ___indices, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] CardboardPostRender::ComputeMeshIndices(System.Int32,System.Int32,System.Boolean)
extern "C" Int32U5BU5D_t67* CardboardPostRender_ComputeMeshIndices_m162 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawUILayer()
extern "C" void CardboardPostRender_DrawUILayer_m163 (CardboardPostRender_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeUIMatrix()
extern "C" void CardboardPostRender_ComputeUIMatrix_m164 (CardboardPostRender_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawSettingsButton()
extern "C" void CardboardPostRender_DrawSettingsButton_m165 (CardboardPostRender_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawAlignmentMarker()
extern "C" void CardboardPostRender_DrawAlignmentMarker_m166 (CardboardPostRender_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawVRBackButton()
extern "C" void CardboardPostRender_DrawVRBackButton_m167 (CardboardPostRender_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
