﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t41;
// UnityEngine.Material
struct Material_t42;
// System.Single[]
struct SingleU5BU5D_t43;
// UnityEngine.Camera
struct Camera_t30;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// CardboardPostRender
struct  CardboardPostRender_t40  : public MonoBehaviour_t2
{
	// UnityEngine.Mesh CardboardPostRender::distortionMesh
	Mesh_t41 * ___distortionMesh_14;
	// UnityEngine.Material CardboardPostRender::meshMaterial
	Material_t42 * ___meshMaterial_15;
	// UnityEngine.Material CardboardPostRender::uiMaterial
	Material_t42 * ___uiMaterial_16;
	// System.Single CardboardPostRender::centerWidthPx
	float ___centerWidthPx_17;
	// System.Single CardboardPostRender::buttonWidthPx
	float ___buttonWidthPx_18;
	// System.Single CardboardPostRender::xScale
	float ___xScale_19;
	// System.Single CardboardPostRender::yScale
	float ___yScale_20;
	// UnityEngine.Matrix4x4 CardboardPostRender::xfm
	Matrix4x4_t36  ___xfm_21;
	// UnityEngine.Camera CardboardPostRender::<camera>k__BackingField
	Camera_t30 * ___U3CcameraU3Ek__BackingField_23;
};
struct CardboardPostRender_t40_StaticFields{
	// System.Single[] CardboardPostRender::Angles
	SingleU5BU5D_t43* ___Angles_22;
};
