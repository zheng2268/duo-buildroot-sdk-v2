#ifndef __GC2385_1L_CMOS_PARAM_H_
#define __GC2385_1L_CMOS_PARAM_H_

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#ifdef ARCH_CV182X
#include <linux/cvi_vip_cif.h>
#include <linux/cvi_vip_snsr.h>
#include "cvi_type.h"
#else
#include <linux/cif_uapi.h>
#include <linux/vi_snsr.h>
#include <linux/cvi_type.h>
#endif
#include "cvi_sns_ctrl.h"
#include "gc2385_1l_cmos_ex.h"

static const GC2385_1L_MODE_S g_stGc2385_1L_mode = {
	.name = "1600X1200P30",
	.stImg = {
		.stSnsSize = {
			.u32Width = 1600,
			.u32Height = 1200,
		},
		.stWndRect = {
			.s32X = 0,
			.s32Y = 0,
			.u32Width = 1600,
			.u32Height = 1200,
		},
		.stMaxSize = {
			.u32Width = 1600,
			.u32Height = 1200,
		},
	},
	.f32MaxFps = 30,
	.f32MinFps = 2.285, /* 1248*30/3fff */
	.u32HtsDef = 2157,
	.u32VtsDef = 1248,
	.stExp = {
		.u16Min = 1,
		.u16Max = 1248 - 1, /* VtsDef - 1*/
		.u16Def = 100,
		.u16Step = 1,
	},
	.stAgain = {
		.u32Min = 1024,
		.u32Max = 16 * 2048,
		.u32Def = 1024,
		.u32Step = 1,
	},
	.stDgain = {
		.u32Min = 1024,
		.u32Max = 1024,
		.u32Def = 1024,
		.u32Step = 1,
	},
};

static ISP_CMOS_BLACK_LEVEL_S g_stIspBlcCalibratio = {
	.bUpdate = CVI_TRUE,
	.blcAttr = {
		.Enable = 1,
		.enOpType = OP_TYPE_AUTO,
		.stManual = {256, 256, 256, 256, 0, 0, 0, 0
#ifdef ARCH_CV182X
			, 1092, 1092, 1092, 1092
#endif
		},
		.stAuto = {
			{256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
			{256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
			{256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
			{256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
#ifdef ARCH_CV182X
			{1092, 1092, 1093, 1093, 1093, 1093, 1093, 1095,
				1099, 1104, 1125, 1130, 1125, 1127, 1126, 1126},
			{1092, 1092, 1093, 1093, 1093, 1093, 1094, 1095,
				1097, 1104, 1128, 1128, 1126, 1124, 1127, 1127},
			{1092, 1092, 1093, 1093, 1093, 1093, 1094, 1095,
				1098, 1104, 1128, 1131, 1125, 1127, 1128, 1126},
			{1092, 1092, 1093, 1093, 1093, 1093, 1093, 1095,
				1097, 1103, 1123, 1124, 1124, 1123, 1121, 1125},
#endif
		},
	},
};

struct combo_dev_attr_s gc2385_1l_rx_attr = {
	.input_mode = INPUT_MODE_MIPI,
	.mac_clk = RX_MAC_CLK_400M,
	.mipi_attr = {
		.raw_data_type = RAW_DATA_10BIT,
		.lane_id = {2, 0, -1, -1, -1},
		.pn_swap = {1, 1, 0, 0, 0},
		.wdr_mode = CVI_MIPI_WDR_MODE_NONE,
		.dphy = {
			.enable = 1,
			.hs_settle = 8,
		},
	},
	.mclk = {
		.cam = 0,
		.freq = CAMPLL_FREQ_24M,
	},
	.devno = 0,
};

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* End of #ifdef __cplusplus */


#endif /* __GC2385_1L_CMOS_PARAM_H_ */

