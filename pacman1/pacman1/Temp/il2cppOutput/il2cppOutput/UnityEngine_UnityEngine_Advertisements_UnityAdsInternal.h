﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t257;
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
struct UnityAdsDelegate_2_t258;

#include "mscorlib_System_Object.h"

// UnityEngine.Advertisements.UnityAdsInternal
struct  UnityAdsInternal_t256  : public Object_t
{
};
struct UnityAdsInternal_t256_StaticFields{
	// UnityEngine.Advertisements.UnityAdsDelegate UnityEngine.Advertisements.UnityAdsInternal::onCampaignsAvailable
	UnityAdsDelegate_t257 * ___onCampaignsAvailable_0;
	// UnityEngine.Advertisements.UnityAdsDelegate UnityEngine.Advertisements.UnityAdsInternal::onCampaignsFetchFailed
	UnityAdsDelegate_t257 * ___onCampaignsFetchFailed_1;
	// UnityEngine.Advertisements.UnityAdsDelegate UnityEngine.Advertisements.UnityAdsInternal::onShow
	UnityAdsDelegate_t257 * ___onShow_2;
	// UnityEngine.Advertisements.UnityAdsDelegate UnityEngine.Advertisements.UnityAdsInternal::onHide
	UnityAdsDelegate_t257 * ___onHide_3;
	// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean> UnityEngine.Advertisements.UnityAdsInternal::onVideoCompleted
	UnityAdsDelegate_2_t258 * ___onVideoCompleted_4;
	// UnityEngine.Advertisements.UnityAdsDelegate UnityEngine.Advertisements.UnityAdsInternal::onVideoStarted
	UnityAdsDelegate_t257 * ___onVideoStarted_5;
};