/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */
#ifndef __SSPM_DEFINE_H__
#define __SSPM_DEFINE_H__

#include <linux/param.h> /* for HZ */
#include <asm/arch_timer.h>

#define SSPM_MBOX_MAX		5
#define MBOX_IN_IRQ_OFS		0x0
#define MBOX_OUT_IRQ_OFS	0x4
#define MBOX_SLOT_SIZE		0x4

#define SSPM_CFG_OFS_SEMA	0x048
#define SSPM_MPU_REGION_ID  4

#define SSPM_SHARE_BUFFER_SUPPORT

#define SSPM_PLT_SERV_SUPPORT       (1)
#define SSPM_LOGGER_SUPPORT         (1)
#define SSPM_EMI_PROTECTION_SUPPORT (1)
/* Below are legacy feature, not support but need to define*/
#define SSPM_TIMESYNC_SUPPORT       (0)
#define SSPM_LASTK_SUPPORT          (0)
#define SSPM_COREDUMP_SUPPORT       (0)

#define PLT_INIT			0x504C5401
#define PLT_LOG_ENABLE		0x504C5402
#define PLT_TIMESYNC_SRAM_TEST	0x504C5406

struct plt_ipi_data_s {
	unsigned int cmd;
	union {
		struct {
			unsigned int phys;
			unsigned int size;
		} ctrl;
		struct {
			unsigned int enable;
		} logger;
	} u;
};

#endif
