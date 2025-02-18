#ifndef __RTC_H__
#define __RTC_H__

#include "mmio.h"

#define RTC_SYS_BASE 0x05000000
#define RTC_MACRO_BASE (RTC_SYS_BASE + 0x00026400)
#define RTC_CORE_SRAM_BASE (RTC_SYS_BASE + 0x00026800)
#define RTC_CORE_SRAM_SIZE 0x0800 // 2KB
#define RTC_IO_BASE (RTC_SYS_BASE + 0x00027000)

#define REG_RTC_CTRL_BASE (RTC_SYS_BASE + 0x00025000)
#define RTC_CTRL0_UNLOCKKEY 0x4
#define RTC_CTRL0 0x8
#define RTC_CTRL0_STATUS0 0xC
#define RTCSYS_RST_CTRL 0x18
#define RTC_FC_COARSE_EN 0x40
#define RTC_FC_COARSE_CAL 0x44
#define RTC_FC_FINE_EN 0x48
#define RTC_FC_FINE_CAL 0x50
#define RTC_POR_RST_CTRL 0xAC

#define REG_RTC_BASE (RTC_SYS_BASE + 0x00026000)
#define RTC_ANA_CALIB 0x0
#define RTC_SEC_PULSE_GEN 0x4
#define RTC_EN_PWR_WAKEUP 0xBC
#define RTC_EN_SHDN_REQ 0xC0
#define RTC_EN_PWR_CYC_REQ 0xC8
#define RTC_EN_WARM_RST_REQ 0xCC
#define RTC_EN_PWR_VBAT_DET 0xD0
#define RTC_EN_WDT_RST_REQ 0xE0
#define RTC_EN_SUSPEND_REQ 0xE4
#define RTC_PG_REG 0xF0
#define RTC_ST_ON_REASON 0xF8
#define RTC_ST_OFF_REASON 0xFC

#define RTC_INFO0 (REG_RTC_BASE + 0x1C)
#define RTC_INFO1 (REG_RTC_BASE + 0x20)
#define RTC_INFO2 (REG_RTC_BASE + 0x24)
#define RTC_INFO3 (REG_RTC_BASE + 0x28)

#define CVI_SAPD_FLAG 0x53415044
#define MCU_FLAG 0x8051

#define REG_RTC_ST_ON_REASON (REG_RTC_BASE + RTC_ST_ON_REASON)

#define RTCSYS_F32KLESS_BASE (RTC_SYS_BASE + 0x0002A000)

#define RTC_INTERNAL_32K 0
#define RTC_EXTERNAL_32K 1

#define PLAT_BM_TRUSTED_MAILBOX_BASE	0x0E000008
#define PLAT_BM_TRUSTED_MAILBOX_SIZE	8

#define RTC_SRAM_FLAG_ADDR		(RTC_CORE_SRAM_BASE + RTC_CORE_SRAM_SIZE - 8)
#define RTC_SRAM_TRUSTED_MAILBOX_BASE	(RTC_SRAM_FLAG_ADDR - PLAT_BM_TRUSTED_MAILBOX_SIZE)

#define BL31_WARMBOOT_ENTRY 0x80000040

#endif /* __RTC_H__ */
