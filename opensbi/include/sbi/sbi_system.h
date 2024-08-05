/*
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * Copyright (c) 2019 Western Digital Corporation or its affiliates.
 *
 * Authors:
 *   Anup Patel <anup.patel@wdc.com>
 */

#ifndef __SBI_SYSTEM_H__
#define __SBI_SYSTEM_H__

#include <sbi/sbi_types.h>

/** System reset hardware device */
struct sbi_system_reset_device {
	/** Name of the system reset device */
	char name[32];

	/* Check whether reset type and reason supported by the device */
	int (*system_reset_check)(u32 reset_type, u32 reset_reason);

	/** Reset the system */
	void (*system_reset)(u32 reset_type, u32 reset_reason);
};

const struct sbi_system_reset_device *sbi_system_reset_get_device(void);

void sbi_system_reset_set_device(const struct sbi_system_reset_device *dev);

bool sbi_system_reset_supported(u32 reset_type, u32 reset_reason);

void __noreturn sbi_system_reset(u32 reset_type, u32 reset_reason);

/** System suspend device */
struct sbi_system_suspend_device {
	/** Name of the system suspend device */
	char name[32];

	/* Check whether sleep type is supported by the device */
	int (*system_suspend_check)(u32 sleep_type);

	/**
	 * Suspend the system
	 *
	 * @sleep_type: The sleep type identifier passed to the SBI call.
	 * @mmode_resume_addr:
	 *     This is the same as sbi_scratch.warmboot_addr. Some platforms
	 *     may not be able to return from system_suspend(), so they will
	 *     jump directly to this address instead. Platforms which can
	 *     return from system_suspend() may ignore this parameter.
	 */
	int (*system_suspend)(u32 sleep_type, unsigned long mmode_resume_addr);
};

const struct sbi_system_suspend_device *sbi_system_suspend_get_device(void);
void sbi_system_suspend_set_device(struct sbi_system_suspend_device *dev);
bool sbi_system_suspend_supported(u32 sleep_type);
int sbi_system_suspend(u32 sleep_type, ulong resume_addr, ulong opaque);

#endif
