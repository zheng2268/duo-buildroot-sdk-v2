#ifndef __CVI_RC_KERNEL_H__
#define __CVI_RC_KERNEL_H__
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "cvi_float_point/cvi_float_point.h"

#ifdef MAX
#undef MAX
#endif
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

#ifdef MIN
#undef MIN
#endif
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

#ifdef CLIP
#undef CLIP
#endif
#define CLIP(min, max, v) (MIN((MAX(min, v)), max))

#define MAX_T_LAYER 2
#define MAX_BIT_ERROR (1<<28)

// floating point format abstraction
typedef float32 RC_Float;

// float point constant abstraction
#if SOFT_FLOAT
// generated by script
#define  FLOAT_VAL_minus_1p367 (0xbfaef9db)
#define  FLOAT_VAL_256 (0x43800000)
#define  FLOAT_VAL_p005 (0x3ba3d70a)
#define  FLOAT_VAL_1p2517 (0x3fa037b5)
#define  FLOAT_VAL_13p7122 (0x415b652c)
#define  FLOAT_VAL_p025 (0x3ccccccd)
#define  FLOAT_VAL_p125 (0x3e000000)
#define  FLOAT_VAL_0 (0x0)
#define  FLOAT_VAL_p25 (0x3e800000)
#define  FLOAT_VAL_2 (0x40000000)
#define  FLOAT_VAL_3 (0x40400000)
#define  FLOAT_VAL_p08 (0x3da3d70a)
#define  FLOAT_VAL_minus_3 (0xc0400000)
#define  FLOAT_VAL_1p786 (0x3fe49ba6)
#define  FLOAT_VAL_minus_1 (0xbf800000)
#define  FLOAT_VAL_p05 (0x3d4ccccd)
#define  FLOAT_VAL_minus_p125 (0xbe000000)
#define  FLOAT_VAL_p03 (0x3cf5c28f)
#define  FLOAT_VAL_minus_5 (0xc0a00000)
#define  FLOAT_VAL_p01 (0x3c23d70a)
#define  FLOAT_VAL_1000 (0x447a0000)
#define  FLOAT_VAL_p9 (0x3f666666)
#define  FLOAT_VAL_6p7542 (0x40d82268)
#define  FLOAT_VAL_1 (0x3f800000)
#define  FLOAT_VAL_minus_p01 (0xbc23d70a)
#define  FLOAT_VAL_p4 (0x3ecccccd)
#define  FLOAT_VAL_p1 (0x3dcccccd)
#define  FLOAT_VAL_4p2005 (0x40866a7f)
#define  FLOAT_VAL_3p2003 (0x404cd1b7)
#define  FLOAT_VAL_p2 (0x3e4ccccd)
#define  FLOAT_VAL_12 (0x41400000)
#define  FLOAT_VAL_p5 (0x3f000000)
#define  FLOAT_VAL_10 (0x41200000)
#define  FLOAT_VAL_minus_p8 (0xbf4ccccd)
#define  FLOAT_VAL_10000 (0x461c4000)
#define  FLOAT_VAL_p00024 (0x397ba882)
#define  FLOAT_VAL_2000 (0x44fa0000)
#else
#define FLOAT_VAL_minus_5 (-5.0)
#define FLOAT_VAL_minus_3 (-3.0)
#define FLOAT_VAL_minus_1  (-1.0)
#define FLOAT_VAL_minus_p8 (-0.8)
#define FLOAT_VAL_minus_p125 (-0.125)
#define FLOAT_VAL_minus_p01 (-0.01)
#define FLOAT_VAL_0 (0.)
#define FLOAT_VAL_p005 (0.005)
#define FLOAT_VAL_p01 (0.01)
#define FLOAT_VAL_p025 (0.025)
#define FLOAT_VAL_p03 (0.03)
#define FLOAT_VAL_p05 (0.05)
#define FLOAT_VAL_p08 (0.08)
#define FLOAT_VAL_p1 (0.1)
#define FLOAT_VAL_p125 (0.125)
#define FLOAT_VAL_p2 (0.2)
#define FLOAT_VAL_p25 (0.25)
#define FLOAT_VAL_p4 (0.4)
#define FLOAT_VAL_p5 (0.5)
#define FLOAT_VAL_p9 (0.9)
#define FLOAT_VAL_1 (1.0)
#define FLOAT_VAL_2 (2.0)
#define FLOAT_VAL_3 (3.0)
#define FLOAT_VAL_10 (10.0)
#define FLOAT_VAL_12 (12.0)
#define FLOAT_VAL_256 (256.0)
#define FLOAT_VAL_2000 (2000.0)
#define FLOAT_VAL_1000 (1000.0)
#define FLOAT_VAL_10000 (10000.0)

#define FLOAT_VAL_minus_1p367 (-1.367)
#define FLOAT_VAL_p00024 (0.00024)
#define FLOAT_VAL_1p2517 (1.2517)
#define FLOAT_VAL_1p786 (1.786)
#define FLOAT_VAL_3p2003 (3.2003)
#define FLOAT_VAL_4p2005 (4.2005)
#define FLOAT_VAL_6p7542 (6.7542)
#define FLOAT_VAL_13p7122 (13.7122)
#endif

#define FIX_POINT_FRAC_BIT (24)

typedef struct _stRcKernelCfg_ {
	int targetBitrate;
	int codec;
	RC_Float framerate;
	int intraPeriod;
	int statTime;
	int ipQpDelta;
	int numOfPixel;
	int maxIprop;
	int minIprop;
	int maxQp;
	int minQp;
	int maxIQp;
	int minIQp;
	int firstFrmstartQp;
	int rcMdlUpdatType;
} stRcKernelCfg;

typedef struct _stRcKernelPicOut_ {
	int targetBit;
	int qp;
	RC_Float lambda;
} stRcKernelPicOut;

typedef struct _stRcKernelPicIn_ {
	int encodedBit;
	RC_Float encodedQp;
	RC_Float encodedLambda;
	RC_Float madi;
	RC_Float mse;
	RC_Float skipRatio;
} stRcKernelPicIn;

typedef struct _stRLModel_ {
	RC_Float alpha;
	RC_Float beta;
} stRLModel;

typedef struct _stRcKernelInfo_ {
	int targetBitrate;
	int codec;
	int framerate;
	int intraPeriod;
	int statTime;
	int picAvgBit;
	int numOfPixel;
	int rcGopSize;
	int statFrameNum;
	int maxIPicBit;
	int maxPicBit;
	int minPicBit;
	int minIPicBit;
	int ipQpDelta;
	int maxIprop;
	int minIprop;
	int rcMdlUpdatType;
	int levelPicQpClip;
	int lastPicQpClip;
	int picQpNormalClip;
	stRLModel rqModel[MAX_T_LAYER];
	// 0: I frame, 1: temporal base layer
	// 2: temporal sencond layer, 2: temporal third layer
	RC_Float alphaStep;
	RC_Float betaStep;
	RC_Float picTextCplx;
	RC_Float lastLevelLambda[MAX_T_LAYER];
	RC_Float lastPicLambda;
	RC_Float maxLambda;
	RC_Float minLambda;
	RC_Float maxILambda;
	RC_Float minILambda;
	RC_Float lastLevelLambdaScaleLow;
	RC_Float lastLevelLambdaScaleHigh;
	RC_Float lastPicLambdaScaleLow;
	RC_Float lastPicLambdaScaleHigh;
	RC_Float lastNormalLambdaScaleLow;
	RC_Float lastNormalLambdaScaleHigh;
	int lastLevelQp[MAX_T_LAYER];
	int lastPicQp;
	int neiIBitMargin;
	int gopPicAvgBit;
	int gopBitLeft;
	int gopPicLeft;
	int picTargetBit;
	int bitError;
	int bitreset_cnt;
	int lastIPicBit;
	int maxQp;
	int minQp;
	int maxIQp;
	int minIQp;
	int firstFrmstartQp;
	int isFirstPic;
	int isCurPicI;
	int isLastPicI;
	RC_Float pPicQpAccum;
	int pPicCnt;
	RC_Float avgGopLambda;
	int predictPicAvgBit;
	int bitrateChange;
} stRcKernelInfo;

void cviRcKernel_init(stRcKernelInfo *info, stRcKernelCfg *cfg);
void cviRcKernel_estimatePic(stRcKernelInfo *info, stRcKernelPicOut *out, int isIPic, int picIdx);
void cviRcKernel_updatePic(stRcKernelInfo *info, stRcKernelPicIn *stats, int isIPic);
void cviRcKernel_setTextCplx(stRcKernelInfo *info, RC_Float madi);
void cviRcKernel_setBitrateAndFrameRate(stRcKernelInfo *info, int targetBitrate, RC_Float frameRate);
void cviRcKernel_setMinMaxQp(stRcKernelInfo *info, int minQp, int maxQp, int isIntra);
void cviRcKernel_setLastPicQpClip(stRcKernelInfo *info, int lastPicQpClip);
void cviRcKernel_setLevelPicQpClip(stRcKernelInfo *info, int levelPicQpClip);
void cviRcKernel_setpPicQpNormalClip(stRcKernelInfo *info, int picQpNormalClip);
void cviRcKernel_setRCModelParam(stRcKernelInfo *info, RC_Float alpha, RC_Float beta, int model_idx);
void cviRcKernel_setRCModelUpdateStep(stRcKernelInfo *info, RC_Float alphaStep, RC_Float betaStep);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif



