/*
 * Copyright (C) Cvitek Co., Ltd. 2019-2022. All rights reserved.
 *
 * File Name: cvi_ispd2_config_handler.c
 * Description:
 */

#include "cvi_ispd2_local.h"
#include "cvi_ispd2_callback_funcs.h"

// -----------------------------------------------------------------------------
#define CVI_ISPD2_REGISTER_CB(cb_func, name) \
{ \
	CVI_ISPD2_Message_RegisterHandler(ptHandlerInfo, cb_func, name, NULL); \
}

// -----------------------------------------------------------------------------
void CVI_ISPD2_ConfigMessageHandler(TISPD2HandlerInfo *ptHandlerInfo)
{
	// ISP Pre-RAW
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetBlackLevelAttr, "CVI_ISP_SetBlackLevelAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetBlackLevelAttr, "CVI_ISP_GetBlackLevelAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetDPDynamicAttr, "CVI_ISP_SetDPDynamicAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetDPDynamicAttr, "CVI_ISP_GetDPDynamicAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetDPStaticAttr, "CVI_ISP_SetDPStaticAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetDPStaticAttr, "CVI_ISP_GetDPStaticAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetCrosstalkAttr, "CVI_ISP_SetCrosstalkAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetCrosstalkAttr, "CVI_ISP_GetCrosstalkAttr");

	// ISP RAW-Top
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetNRAttr, "CVI_ISP_SetNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetNRAttr, "CVI_ISP_GetNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetNRFilterAttr, "CVI_ISP_SetNRFilterAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetNRFilterAttr, "CVI_ISP_GetNRFilterAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetDemosaicAttr, "CVI_ISP_SetDemosaicAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetDemosaicAttr, "CVI_ISP_GetDemosaicAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetDemosaicDemoireAttr, "CVI_ISP_SetDemosaicDemoireAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetDemosaicDemoireAttr, "CVI_ISP_GetDemosaicDemoireAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetRGBCACAttr, "CVI_ISP_SetRGBCACAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetRGBCACAttr, "CVI_ISP_GetRGBCACAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetLCACAttr, "CVI_ISP_SetLCACAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetLCACAttr, "CVI_ISP_GetLCACAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetDisAttr, "CVI_ISP_SetDisAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetDisAttr, "CVI_ISP_GetDisAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetDisConfig, "CVI_ISP_SetDisConfig");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetDisConfig, "CVI_ISP_GetDisConfig");

	// ISP RGB-Top
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetMeshShadingAttr, "CVI_ISP_SetMeshShadingAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetMeshShadingAttr, "CVI_ISP_GetMeshShadingAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetMeshShadingGainLutAttr, "CVI_ISP_SetMeshShadingGainLutAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetMeshShadingGainLutAttr, "CVI_ISP_GetMeshShadingGainLutAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetSaturationAttr, "CVI_ISP_SetSaturationAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetSaturationAttr, "CVI_ISP_GetSaturationAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetCCMAttr, "CVI_ISP_SetCCMAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetCCMAttr, "CVI_ISP_GetCCMAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetCCMSaturationAttr, "CVI_ISP_SetCCMSaturationAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetCCMSaturationAttr, "CVI_ISP_GetCCMSaturationAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetColorToneAttr, "CVI_ISP_SetColorToneAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetColorToneAttr, "CVI_ISP_GetColorToneAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetFSWDRAttr, "CVI_ISP_SetFSWDRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetFSWDRAttr, "CVI_ISP_GetFSWDRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetWDRExposureAttr, "CVI_ISP_SetWDRExposureAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetWDRExposureAttr, "CVI_ISP_GetWDRExposureAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetDRCAttr, "CVI_ISP_SetDRCAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetDRCAttr, "CVI_ISP_GetDRCAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetGammaAttr, "CVI_ISP_SetGammaAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetGammaAttr, "CVI_ISP_GetGammaAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetGammaCurveByType, "CVI_ISP_GetGammaCurveByType");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetAutoGammaAttr, "CVI_ISP_SetAutoGammaAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetAutoGammaAttr, "CVI_ISP_GetAutoGammaAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetDehazeAttr, "CVI_ISP_SetDehazeAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetDehazeAttr, "CVI_ISP_GetDehazeAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetClutAttr, "CVI_ISP_SetClutAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetClutAttr, "CVI_ISP_GetClutAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetClutSaturationAttr, "CVI_ISP_SetClutSaturationAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetClutSaturationAttr, "CVI_ISP_GetClutSaturationAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetCSCAttr, "CVI_ISP_SetCSCAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetCSCAttr, "CVI_ISP_GetCSCAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetVCAttr, "CVI_ISP_SetVCAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetVCAttr, "CVI_ISP_GetVCAttr");

	// ISP YUV-Top
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetDCIAttr, "CVI_ISP_SetDCIAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetDCIAttr, "CVI_ISP_GetDCIAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetLDCIAttr, "CVI_ISP_SetLDCIAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetLDCIAttr, "CVI_ISP_GetLDCIAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetPreSharpenAttr, "CVI_ISP_SetPreSharpenAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetPreSharpenAttr, "CVI_ISP_GetPreSharpenAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetTNRAttr, "CVI_ISP_SetTNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetTNRAttr, "CVI_ISP_GetTNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetTNRNoiseModelAttr, "CVI_ISP_SetTNRNoiseModelAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetTNRNoiseModelAttr, "CVI_ISP_GetTNRNoiseModelAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetTNRLumaMotionAttr, "CVI_ISP_SetTNRLumaMotionAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetTNRLumaMotionAttr, "CVI_ISP_GetTNRLumaMotionAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetTNRGhostAttr, "CVI_ISP_SetTNRGhostAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetTNRGhostAttr, "CVI_ISP_GetTNRGhostAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetTNRMtPrtAttr, "CVI_ISP_SetTNRMtPrtAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetTNRMtPrtAttr, "CVI_ISP_GetTNRMtPrtAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetTNRMotionAdaptAttr, "CVI_ISP_SetTNRMotionAdaptAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetTNRMotionAdaptAttr, "CVI_ISP_GetTNRMotionAdaptAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetYNRAttr, "CVI_ISP_SetYNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetYNRAttr, "CVI_ISP_GetYNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetYNRFilterAttr, "CVI_ISP_SetYNRFilterAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetYNRFilterAttr, "CVI_ISP_GetYNRFilterAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetYNRMotionNRAttr, "CVI_ISP_SetYNRMotionNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetYNRMotionNRAttr, "CVI_ISP_GetYNRMotionNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetCNRAttr, "CVI_ISP_SetCNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetCNRAttr, "CVI_ISP_GetCNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetCNRMotionNRAttr, "CVI_ISP_SetCNRMotionNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetCNRMotionNRAttr, "CVI_ISP_GetCNRMotionNRAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetCACAttr, "CVI_ISP_SetCACAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetCACAttr, "CVI_ISP_GetCACAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetSharpenAttr, "CVI_ISP_SetSharpenAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetSharpenAttr, "CVI_ISP_GetSharpenAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetCAAttr, "CVI_ISP_SetCAAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetCAAttr, "CVI_ISP_GetCAAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetCA2Attr, "CVI_ISP_SetCA2Attr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetCA2Attr, "CVI_ISP_GetCA2Attr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetYContrastAttr, "CVI_ISP_SetYContrastAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetYContrastAttr, "CVI_ISP_GetYContrastAttr");

	// ISP Other
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetPubAttr, "CVI_ISP_SetPubAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetPubAttr, "CVI_ISP_GetPubAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetNoiseProfileAttr, "CVI_ISP_SetNoiseProfileAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetNoiseProfileAttr, "CVI_ISP_GetNoiseProfileAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetMonoAttr, "CVI_ISP_SetMonoAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetMonoAttr, "CVI_ISP_GetMonoAttr");

	// AE
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetExposureAttr, "CVI_ISP_SetExposureAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetExposureAttr, "CVI_ISP_GetExposureAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetAERouteAttr, "CVI_ISP_SetAERouteAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetAERouteAttr, "CVI_ISP_GetAERouteAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetAERouteAttrEx, "CVI_ISP_SetAERouteAttrEx");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetAERouteAttrEx, "CVI_ISP_GetAERouteAttrEx");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetAERouteSFAttr, "CVI_ISP_SetAERouteSFAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetAERouteSFAttr, "CVI_ISP_GetAERouteSFAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetAERouteSFAttrEx, "CVI_ISP_SetAERouteSFAttrEx");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetAERouteSFAttrEx, "CVI_ISP_GetAERouteSFAttrEx");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetSmartExposureAttr, "CVI_ISP_SetSmartExposureAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetSmartExposureAttr, "CVI_ISP_GetSmartExposureAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetIrisAttr, "CVI_ISP_SetIrisAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetIrisAttr, "CVI_ISP_GetIrisAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetDCIrisAttr, "CVI_ISP_SetDcirisAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetDCIrisAttr, "CVI_ISP_GetDcirisAttr");

	// AWB
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetWBAttr, "CVI_ISP_SetWBAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetWBAttr, "CVI_ISP_GetWBAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetAWBAttrEx, "CVI_ISP_SetAWBAttrEx");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetAWBAttrEx, "CVI_ISP_GetAWBAttrEx");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetWBCalibration, "CVI_ISP_SetWBCalibration");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetWBCalibration, "CVI_ISP_GetWBCalibration");

	// AF

	// 3A
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_SetStatisticsConfig, "CVI_ISP_SetStatisticsConfig");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_GetStatisticsConfig, "CVI_ISP_GetStatisticsConfig");

	// Read only
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_QueryExposureInfo, "CVI_ISP_QueryExposureInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ISP_QueryWBInfo, "CVI_ISP_QueryWBInfo");

	// Daemon
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetVersionInfo, "CVI_GetVersion");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_SetTopInfo, "CVI_SetTopInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetTopInfo, "CVI_GetTopInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_SetLogLevelInfo, "CVI_SetLogLevelInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetDRCHistogramInfo, "CVI_GetDRCHistogramInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_Get3AStatisticsInfo, "CVI_Get3AStatisticsInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetAFStatisticsInfo, "CVI_GetAFStatisticsInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetChipInfo, "CVI_GetChipInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetWDRInfo, "CVI_GetWDRInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_ExportBinFile, "CVI_ExportBinFile");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_FixBinToFlash, "CVI_FixBinToFlash");

	// Applications
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetSingleYUVFrame, "CVI_GetSingleYUVFrame");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetMultipleYUVFrames, "CVI_GetMultipleYUVFrame");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetMultipleRAWFrames, "CVI_GetMultipleRAWFrame");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetImageInfo, "CVI_GetImageInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetImageData, "CVI_GetImageData");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_StopGetImageData, "CVI_StopGetImageData");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetBinaryInfo, "CVI_GetBinaryInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_PrepareBinaryData, "CVI_PrepareBinaryData");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetBinaryData, "CVI_GetBinaryData");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_SetBinaryData, "CVI_SetBinaryData");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_StartBracketing, "CVI_StartBracketing");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_FinishBracketing, "CVI_FinishBracketing");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_GetBracketingData, "CVI_GetBracketingData");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_StartRawReplay, "CVI_ISP_StartRawReplay");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_CancelRawReplay, "CVI_ISP_CancelRawReplay");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_I2cRead, "CVI_I2cRead");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_I2cWrite, "CVI_I2cWrite");


	// VI
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VI_SetChnLDCAttr, "CVI_VI_SetChnLDCAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VI_GetChnLDCAttr, "CVI_VI_GetChnLDCAttr");

	// VPSS
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VPSS_SetChnLDCAttr, "CVI_VPSS_SetChnLDCAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VPSS_GetChnLDCAttr, "CVI_VPSS_GetChnLDCAttr");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VPSS_SetGrpProcAmp, "CVI_VPSS_SetGrpProcAmp");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VPSS_GetGrpProcAmp, "CVI_VPSS_GetGrpProcAmp");

	// VO
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VO_SetGammaInfo, "CVI_VO_SetGammaInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VO_GetGammaInfo, "CVI_VO_GetGammaInfo");

	// VC
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VC_SetCodingParamInfo, "CVI_VC_SetCodingParamInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VC_GetCodingParamInfo, "CVI_VC_GetCodingParamInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VC_SetGopModeInfo, "CVI_VC_SetGopModeInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VC_GetGopModeInfo, "CVI_VC_GetGopModeInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VC_SetRCAttrInfo, "CVI_VC_SetRCAttrInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VC_GetRCAttrInfo, "CVI_VC_GetRCAttrInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VC_SetRCParamInfo, "CVI_VC_SetRCParamInfo");
	CVI_ISPD2_REGISTER_CB(CVI_ISPD2_CBFunc_VC_GetRCParamInfo, "CVI_VC_GetRCParamInfo");
}

// -----------------------------------------------------------------------------
