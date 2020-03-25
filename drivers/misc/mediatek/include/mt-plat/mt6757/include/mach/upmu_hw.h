/*
* Copyright (C) 2015 MediaTek Inc.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*/

#ifndef _MT_PMIC_UPMU_HW_H_
#define _MT_PMIC_UPMU_HW_H_

#ifdef CONFIG_MTK_PMIC_NEW_ARCH

#ifdef CONFIG_MTK_PMIC_CHIP_MT6355
#include <mach/mt6355_hw.h>
#endif

#else
/*MT6351*/
#define MT6351_PMIC_REG_BASE (0x0000)

#define MT6351_STRUP_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0000))
#define MT6351_STRUP_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0002))
#define MT6351_STRUP_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0004))
#define MT6351_STRUP_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0006))
#define MT6351_STRUP_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0008))
#define MT6351_STRUP_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x000A))
#define MT6351_STRUP_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x000C))
#define MT6351_STRUP_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x000E))
#define MT6351_STRUP_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0010))
#define MT6351_STRUP_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0012))
#define MT6351_STRUP_CON10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0014))
#define MT6351_STRUP_CON11 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0016))
#define MT6351_STRUP_CON12 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0018))
#define MT6351_STRUP_CON13 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x001A))
#define MT6351_STRUP_CON14 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x001C))
#define MT6351_STRUP_CON15 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x001E))
#define MT6351_STRUP_CON16 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0020))
#define MT6351_STRUP_CON17 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0022))
#define MT6351_STRUP_CON18 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0024))
#define MT6351_STRUP_CON19 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0026))
#define MT6351_STRUP_CON20 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0028))
#define MT6351_STRUP_CON21 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x002A))
#define MT6351_STRUP_CON22 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x002C))
#define MT6351_STRUP_CON23 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x002E))
#define MT6351_STRUP_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0030))
#define MT6351_STRUP_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0032))
#define MT6351_HWCID ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0200))
#define MT6351_SWCID ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0202))
#define MT6351_TOP_CON ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0204))
#define MT6351_TEST_OUT ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0206))
#define MT6351_TEST_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0208))
#define MT6351_TEST_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x020A))
#define MT6351_TESTMODE_SW ((unsigned int)(MT6351_PMIC_REG_BASE + 0x020C))
#define MT6351_EN_STATUS1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x020E))
#define MT6351_EN_STATUS2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0210))
#define MT6351_OCSTATUS1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0212))
#define MT6351_OCSTATUS2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0214))
#define MT6351_PGDEBSTATUS0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0216))
#define MT6351_PGDEBSTATU1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0218))
#define MT6351_PGSTATUS0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x021A))
#define MT6351_PGSTATUS1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x021C))
#define MT6351_THERMALSTATUS ((unsigned int)(MT6351_PMIC_REG_BASE + 0x021E))
#define MT6351_TOPSTATUS ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0220))
#define MT6351_TDSEL_CON ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0222))
#define MT6351_RDSEL_CON ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0224))
#define MT6351_SMT_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0226))
#define MT6351_SMT_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0228))
#define MT6351_SMT_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x022A))
#define MT6351_DRV_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x022C))
#define MT6351_DRV_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x022E))
#define MT6351_DRV_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0230))
#define MT6351_DRV_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0232))
#define MT6351_TOP_STATUS ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0234))
#define MT6351_TOP_STATUS_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0236))
#define MT6351_TOP_STATUS_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0238))
#define MT6351_TOP_CKPDN_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x023A))
#define MT6351_TOP_CKPDN_CON0_SET                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x023C))
#define MT6351_TOP_CKPDN_CON0_CLR                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x023E))
#define MT6351_TOP_CKPDN_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0240))
#define MT6351_TOP_CKPDN_CON1_SET                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0242))
#define MT6351_TOP_CKPDN_CON1_CLR                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0244))
#define MT6351_TOP_CKPDN_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0246))
#define MT6351_TOP_CKPDN_CON2_SET                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0248))
#define MT6351_TOP_CKPDN_CON2_CLR                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x024A))
#define MT6351_TOP_CKPDN_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x024C))
#define MT6351_TOP_CKPDN_CON3_SET                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x024E))
#define MT6351_TOP_CKPDN_CON3_CLR                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0250))
#define MT6351_TOP_CKPDN_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0252))
#define MT6351_TOP_CKPDN_CON4_SET                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0254))
#define MT6351_TOP_CKPDN_CON4_CLR                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0256))
#define MT6351_TOP_CKPDN_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0258))
#define MT6351_TOP_CKPDN_CON5_SET                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x025A))
#define MT6351_TOP_CKPDN_CON5_CLR                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x025C))
#define MT6351_TOP_CKSEL_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x025E))
#define MT6351_TOP_CKSEL_CON0_SET                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0260))
#define MT6351_TOP_CKSEL_CON0_CLR                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0262))
#define MT6351_TOP_CKSEL_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0264))
#define MT6351_TOP_CKSEL_CON1_SET                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0266))
#define MT6351_TOP_CKSEL_CON1_CLR                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0268))
#define MT6351_TOP_CKSEL_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x026A))
#define MT6351_TOP_CKSEL_CON2_SET                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x026C))
#define MT6351_TOP_CKSEL_CON2_CLR                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x026E))
#define MT6351_TOP_CKSEL_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0270))
#define MT6351_TOP_CKSEL_CON3_SET                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0272))
#define MT6351_TOP_CKSEL_CON3_CLR                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0274))
#define MT6351_TOP_CKDIVSEL_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0276))
#define MT6351_TOP_CKDIVSEL_CON0_SET                                           \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0278))
#define MT6351_TOP_CKDIVSEL_CON0_CLR                                           \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x027A))
#define MT6351_TOP_CKDIVSEL_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x027C))
#define MT6351_TOP_CKDIVSEL_CON1_SET                                           \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x027E))
#define MT6351_TOP_CKDIVSEL_CON1_CLR                                           \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0280))
#define MT6351_TOP_CKHWEN_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0282))
#define MT6351_TOP_CKHWEN_CON0_SET                                             \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0284))
#define MT6351_TOP_CKHWEN_CON0_CLR                                             \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0286))
#define MT6351_TOP_CKHWEN_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0288))
#define MT6351_TOP_CKHWEN_CON1_SET                                             \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x028A))
#define MT6351_TOP_CKHWEN_CON1_CLR                                             \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x028C))
#define MT6351_TOP_CKHWEN_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x028E))
#define MT6351_TOP_CKHWEN_CON2_SET                                             \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0290))
#define MT6351_TOP_CKHWEN_CON2_CLR                                             \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0292))
#define MT6351_TOP_CKTST_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0294))
#define MT6351_TOP_CKTST_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0296))
#define MT6351_TOP_CKTST_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0298))
#define MT6351_TOP_CLKSQ ((unsigned int)(MT6351_PMIC_REG_BASE + 0x029A))
#define MT6351_TOP_CLKSQ_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x029C))
#define MT6351_TOP_CLKSQ_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x029E))
#define MT6351_TOP_CLKSQ_RTC ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02A0))
#define MT6351_TOP_CLKSQ_RTC_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02A2))
#define MT6351_TOP_CLKSQ_RTC_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02A4))
#define MT6351_TOP_CLK_TRIM ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02A6))
#define MT6351_TOP_RST_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02A8))
#define MT6351_TOP_RST_CON0_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02AA))
#define MT6351_TOP_RST_CON0_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02AC))
#define MT6351_TOP_RST_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02AE))
#define MT6351_TOP_RST_CON1_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02B0))
#define MT6351_TOP_RST_CON1_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02B2))
#define MT6351_TOP_RST_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02B4))
#define MT6351_TOP_RST_MISC ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02B6))
#define MT6351_TOP_RST_MISC_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02B8))
#define MT6351_TOP_RST_MISC_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02BA))
#define MT6351_TOP_RST_STATUS ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02BC))
#define MT6351_TOP_RST_STATUS_SET                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x02BE))
#define MT6351_TOP_RST_STATUS_CLR                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x02C0))
#define MT6351_INT_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02C2))
#define MT6351_INT_CON0_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02C4))
#define MT6351_INT_CON0_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02C6))
#define MT6351_INT_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02C8))
#define MT6351_INT_CON1_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02CA))
#define MT6351_INT_CON1_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02CC))
#define MT6351_INT_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02CE))
#define MT6351_INT_CON2_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02D0))
#define MT6351_INT_CON2_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02D2))
#define MT6351_INT_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02D4))
#define MT6351_INT_CON3_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02D6))
#define MT6351_INT_CON3_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02D8))
#define MT6351_INT_MISC_CON ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02DA))
#define MT6351_INT_MISC_CON_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02DC))
#define MT6351_INT_MISC_CON_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02DE))
#define MT6351_INT_STATUS0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02E0))
#define MT6351_INT_STATUS1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02E2))
#define MT6351_INT_STATUS2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02E4))
#define MT6351_INT_STATUS3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02E6))
#define MT6351_OC_GEAR_0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02E8))
#define MT6351_FQMTR_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02EA))
#define MT6351_FQMTR_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02EC))
#define MT6351_FQMTR_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02EE))
#define MT6351_RG_SPI_CON ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02F0))
#define MT6351_DEW_DIO_EN ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02F2))
#define MT6351_DEW_READ_TEST ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02F4))
#define MT6351_DEW_WRITE_TEST ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02F6))
#define MT6351_DEW_CRC_SWRST ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02F8))
#define MT6351_DEW_CRC_EN ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02FA))
#define MT6351_DEW_CRC_VAL ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02FC))
#define MT6351_DEW_DBG_MON_SEL ((unsigned int)(MT6351_PMIC_REG_BASE + 0x02FE))
#define MT6351_DEW_CIPHER_KEY_SEL                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0300))
#define MT6351_DEW_CIPHER_IV_SEL ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0302))
#define MT6351_DEW_CIPHER_EN ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0304))
#define MT6351_DEW_CIPHER_RDY ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0306))
#define MT6351_DEW_CIPHER_MODE ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0308))
#define MT6351_DEW_CIPHER_SWRST ((unsigned int)(MT6351_PMIC_REG_BASE + 0x030A))
#define MT6351_DEW_RDDMY_NO ((unsigned int)(MT6351_PMIC_REG_BASE + 0x030C))
#define MT6351_INT_TYPE_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x030E))
#define MT6351_INT_TYPE_CON0_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0310))
#define MT6351_INT_TYPE_CON0_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0312))
#define MT6351_INT_TYPE_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0314))
#define MT6351_INT_TYPE_CON1_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0316))
#define MT6351_INT_TYPE_CON1_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0318))
#define MT6351_INT_TYPE_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x031A))
#define MT6351_INT_TYPE_CON2_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x031C))
#define MT6351_INT_TYPE_CON2_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x031E))
#define MT6351_INT_TYPE_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0320))
#define MT6351_INT_TYPE_CON3_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0322))
#define MT6351_INT_TYPE_CON3_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0324))
#define MT6351_INT_STA ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0326))
#define MT6351_BUCK_ALL_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0400))
#define MT6351_BUCK_ALL_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0402))
#define MT6351_BUCK_ALL_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0404))
#define MT6351_BUCK_ALL_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0406))
#define MT6351_BUCK_ALL_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0408))
#define MT6351_BUCK_ALL_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x040A))
#define MT6351_BUCK_ALL_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x040C))
#define MT6351_BUCK_DLC_VPA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x040E))
#define MT6351_BUCK_DLC_VPA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0410))
#define MT6351_BUCK_DLC_VPA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0412))
#define MT6351_BUCK_DVS_VPA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0414))
#define MT6351_BUCK_VOW_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0416))
#define MT6351_BUCK_VOW_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0418))
#define MT6351_BUCK_VOW_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x041A))
#define MT6351_BUCK_VOW_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x041C))
#define MT6351_BUCK_OC_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x041E))
#define MT6351_BUCK_OC_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0420))
#define MT6351_BUCK_OC_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0422))
#define MT6351_BUCK_OC_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0424))
#define MT6351_BUCK_OC_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0426))
#define MT6351_BUCK_OC_VCORE_CON0                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0428))
#define MT6351_BUCK_OC_VGPU_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x042A))
#define MT6351_BUCK_OC_VMODEM_CON0                                             \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x042C))
#define MT6351_BUCK_OC_VMD1_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x042E))
#define MT6351_BUCK_OC_VSRAM_MD_CON0                                           \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0430))
#define MT6351_BUCK_OC_VS1_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0432))
#define MT6351_BUCK_OC_VS2_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0434))
#define MT6351_BUCK_OC_VPA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0436))
#define MT6351_SMPS_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0438))
#define MT6351_SMPS_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x043A))
#define MT6351_SMPS_ANA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x043C))
#define MT6351_SMPS_ANA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x043E))
#define MT6351_SMPS_ANA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0440))
#define MT6351_SMPS_ANA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0442))
#define MT6351_SMPS_ANA_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0444))
#define MT6351_SMPS_ANA_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0446))
#define MT6351_SMPS_ANA_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0448))
#define MT6351_SMPS_ANA_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x044A))
#define MT6351_SMPS_ANA_CON10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x044C))
#define MT6351_VCORE_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x044E))
#define MT6351_VCORE_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0450))
#define MT6351_VCORE_ANA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0452))
#define MT6351_VCORE_ANA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0454))
#define MT6351_VCORE_ANA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0456))
#define MT6351_VCORE_ANA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0458))
#define MT6351_VCORE_ANA_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x045A))
#define MT6351_VCORE_ANA_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x045C))
#define MT6351_VCORE_ANA_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x045E))
#define MT6351_VCORE_ANA_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0460))
#define MT6351_VGPU_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0462))
#define MT6351_VGPU_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0464))
#define MT6351_VGPU_ANA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0466))
#define MT6351_VGPU_ANA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0468))
#define MT6351_VGPU_ANA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x046A))
#define MT6351_VGPU_ANA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x046C))
#define MT6351_VGPU_ANA_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x046E))
#define MT6351_VGPU_ANA_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0470))
#define MT6351_VGPU_ANA_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0472))
#define MT6351_VGPU_ANA_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0474))
#define MT6351_VSRAM_MD_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0476))
#define MT6351_VSRAM_MD_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0478))
#define MT6351_VSRAM_MD_ANA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x047A))
#define MT6351_VSRAM_MD_ANA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x047C))
#define MT6351_VSRAM_MD_ANA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x047E))
#define MT6351_VSRAM_MD_ANA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0480))
#define MT6351_VSRAM_MD_ANA_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0482))
#define MT6351_VSRAM_MD_ANA_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0484))
#define MT6351_VSRAM_MD_ANA_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0486))
#define MT6351_VSRAM_MD_ANA_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0488))
#define MT6351_VMODEM_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x048A))
#define MT6351_VMODEM_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x048C))
#define MT6351_VMODEM_ANA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x048E))
#define MT6351_VMODEM_ANA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0490))
#define MT6351_VMODEM_ANA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0492))
#define MT6351_VMODEM_ANA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0494))
#define MT6351_VMODEM_ANA_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0496))
#define MT6351_VMODEM_ANA_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0498))
#define MT6351_VMODEM_ANA_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x049A))
#define MT6351_VMODEM_ANA_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x049C))
#define MT6351_VMD1_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x049E))
#define MT6351_VMD1_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04A0))
#define MT6351_VMD1_ANA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04A2))
#define MT6351_VMD1_ANA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04A4))
#define MT6351_VMD1_ANA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04A6))
#define MT6351_VMD1_ANA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04A8))
#define MT6351_VMD1_ANA_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04AA))
#define MT6351_VMD1_ANA_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04AC))
#define MT6351_VMD1_ANA_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04AE))
#define MT6351_VMD1_ANA_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04B0))
#define MT6351_VS1_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04B2))
#define MT6351_VS1_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04B4))
#define MT6351_VS1_ANA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04B6))
#define MT6351_VS1_ANA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04B8))
#define MT6351_VS1_ANA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04BA))
#define MT6351_VS1_ANA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04BC))
#define MT6351_VS1_ANA_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04BE))
#define MT6351_VS1_ANA_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04C0))
#define MT6351_VS1_ANA_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04C2))
#define MT6351_VS1_ANA_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04C4))
#define MT6351_VS2_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04C6))
#define MT6351_VS2_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04C8))
#define MT6351_VS2_ANA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04CA))
#define MT6351_VS2_ANA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04CC))
#define MT6351_VS2_ANA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04CE))
#define MT6351_VS2_ANA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04D0))
#define MT6351_VS2_ANA_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04D2))
#define MT6351_VS2_ANA_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04D4))
#define MT6351_VS2_ANA_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04D6))
#define MT6351_VS2_ANA_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04D8))
#define MT6351_VPA_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04DA))
#define MT6351_VPA_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04DC))
#define MT6351_VPA_ANA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04DE))
#define MT6351_VPA_ANA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04E0))
#define MT6351_VPA_ANA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04E2))
#define MT6351_VPA_ANA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x04E4))
#define MT6351_BUCK_VCORE_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0600))
#define MT6351_BUCK_VCORE_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0602))
#define MT6351_BUCK_VCORE_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0604))
#define MT6351_BUCK_VCORE_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0606))
#define MT6351_BUCK_VCORE_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0608))
#define MT6351_BUCK_VCORE_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x060A))
#define MT6351_BUCK_VCORE_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x060C))
#define MT6351_BUCK_VCORE_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x060E))
#define MT6351_BUCK_VCORE_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0610))
#define MT6351_BUCK_VCORE_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0612))
#define MT6351_BUCK_VGPU_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0614))
#define MT6351_BUCK_VGPU_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0616))
#define MT6351_BUCK_VGPU_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0618))
#define MT6351_BUCK_VGPU_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x061A))
#define MT6351_BUCK_VGPU_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x061C))
#define MT6351_BUCK_VGPU_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x061E))
#define MT6351_BUCK_VGPU_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0620))
#define MT6351_BUCK_VGPU_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0622))
#define MT6351_BUCK_VGPU_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0624))
#define MT6351_BUCK_VGPU_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0626))
#define MT6351_BUCK_VMODEM_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0628))
#define MT6351_BUCK_VMODEM_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x062A))
#define MT6351_BUCK_VMODEM_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x062C))
#define MT6351_BUCK_VMODEM_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x062E))
#define MT6351_BUCK_VMODEM_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0630))
#define MT6351_BUCK_VMODEM_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0632))
#define MT6351_BUCK_VMODEM_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0634))
#define MT6351_BUCK_VMODEM_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0636))
#define MT6351_BUCK_VMODEM_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0638))
#define MT6351_BUCK_VMODEM_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x063A))
#define MT6351_BUCK_VMD1_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x063C))
#define MT6351_BUCK_VMD1_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x063E))
#define MT6351_BUCK_VMD1_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0640))
#define MT6351_BUCK_VMD1_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0642))
#define MT6351_BUCK_VMD1_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0644))
#define MT6351_BUCK_VMD1_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0646))
#define MT6351_BUCK_VMD1_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0648))
#define MT6351_BUCK_VMD1_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x064A))
#define MT6351_BUCK_VMD1_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x064C))
#define MT6351_BUCK_VMD1_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x064E))
#define MT6351_BUCK_VSRAM_MD_CON0                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0650))
#define MT6351_BUCK_VSRAM_MD_CON1                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0652))
#define MT6351_BUCK_VSRAM_MD_CON2                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0654))
#define MT6351_BUCK_VSRAM_MD_CON3                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0656))
#define MT6351_BUCK_VSRAM_MD_CON4                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0658))
#define MT6351_BUCK_VSRAM_MD_CON5                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x065A))
#define MT6351_BUCK_VSRAM_MD_CON6                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x065C))
#define MT6351_BUCK_VSRAM_MD_CON7                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x065E))
#define MT6351_BUCK_VSRAM_MD_CON8                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0660))
#define MT6351_BUCK_VSRAM_MD_CON9                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0662))
#define MT6351_BUCK_VS1_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0664))
#define MT6351_BUCK_VS1_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0666))
#define MT6351_BUCK_VS1_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0668))
#define MT6351_BUCK_VS1_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x066A))
#define MT6351_BUCK_VS1_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x066C))
#define MT6351_BUCK_VS1_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x066E))
#define MT6351_BUCK_VS1_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0670))
#define MT6351_BUCK_VS1_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0672))
#define MT6351_BUCK_VS1_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0674))
#define MT6351_BUCK_VS1_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0676))
#define MT6351_BUCK_VS2_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0678))
#define MT6351_BUCK_VS2_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x067A))
#define MT6351_BUCK_VS2_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x067C))
#define MT6351_BUCK_VS2_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x067E))
#define MT6351_BUCK_VS2_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0680))
#define MT6351_BUCK_VS2_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0682))
#define MT6351_BUCK_VS2_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0684))
#define MT6351_BUCK_VS2_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0686))
#define MT6351_BUCK_VS2_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0688))
#define MT6351_BUCK_VS2_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x068A))
#define MT6351_BUCK_VPA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x068C))
#define MT6351_BUCK_VPA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x068E))
#define MT6351_BUCK_VPA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0690))
#define MT6351_BUCK_VPA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0692))
#define MT6351_BUCK_VPA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0694))
#define MT6351_BUCK_VPA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0696))
#define MT6351_BUCK_VPA_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0698))
#define MT6351_BUCK_VPA_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x069A))
#define MT6351_BUCK_VPA_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x069C))
#define MT6351_BUCK_VPA_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x069E))
#define MT6351_BUCK_VSRAM_PROC_CON0                                            \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x06A0))
#define MT6351_BUCK_VSRAM_PROC_CON1                                            \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x06A2))
#define MT6351_BUCK_VSRAM_PROC_CON2                                            \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x06A4))
#define MT6351_BUCK_VSRAM_PROC_CON3                                            \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x06A6))
#define MT6351_BUCK_VSRAM_PROC_CON4                                            \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x06A8))
#define MT6351_BUCK_VSRAM_PROC_CON5                                            \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x06AA))
#define MT6351_BUCK_VSRAM_PROC_CON6                                            \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x06AC))
#define MT6351_BUCK_VSRAM_PROC_CON7                                            \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x06AE))
#define MT6351_BUCK_VSRAM_PROC_CON8                                            \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x06B0))
#define MT6351_BUCK_VSRAM_PROC_CON9                                            \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x06B2))
#define MT6351_BUCK_K_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x06B4))
#define MT6351_BUCK_K_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x06B6))
#define MT6351_BUCK_K_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x06B8))
#define MT6351_BUCK_K_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x06BA))
#define MT6351_WDTDBG_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x06BC))
#define MT6351_WDTDBG_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x06BE))
#define MT6351_WDTDBG_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x06C0))
#define MT6351_WDTDBG_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x06C2))
#define MT6351_ZCD_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0800))
#define MT6351_ZCD_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0802))
#define MT6351_ZCD_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0804))
#define MT6351_ZCD_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0806))
#define MT6351_ZCD_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0808))
#define MT6351_ZCD_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x080A))
#define MT6351_ISINKA_ANA_CON_0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x080C))
#define MT6351_ISINKB_ANA_CON_0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x080E))
#define MT6351_ISINK0_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0810))
#define MT6351_ISINK0_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0812))
#define MT6351_ISINK0_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0814))
#define MT6351_ISINK0_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0816))
#define MT6351_ISINK1_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0818))
#define MT6351_ISINK1_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x081A))
#define MT6351_ISINK1_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x081C))
#define MT6351_ISINK1_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x081E))
#define MT6351_ISINK4_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0820))
#define MT6351_ISINK4_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0822))
#define MT6351_ISINK4_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0824))
#define MT6351_ISINK4_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0826))
#define MT6351_ISINK5_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0828))
#define MT6351_ISINK5_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x082A))
#define MT6351_ISINK5_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x082C))
#define MT6351_ISINK5_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x082E))
#define MT6351_ISINK_ANA1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0830))
#define MT6351_ISINK_PHASE_DLY ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0832))
#define MT6351_ISINK_SFSTR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0834))
#define MT6351_ISINK_EN_CTRL ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0836))
#define MT6351_ISINK_MODE_CTRL ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0838))
#define MT6351_ISINK_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x083A))
#define MT6351_ISINK2_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x083C))
#define MT6351_ISINK3_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x083E))
#define MT6351_ISINK6_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0840))
#define MT6351_ISINK7_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0842))
#define MT6351_ISINK_ANA1_SMPL ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0844))
#define MT6351_ISINK_PHASE_DLY_SMPL                                            \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0846))
#define MT6351_ISINK_EN_CTRL_SMPL                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0848))
#define MT6351_CHRIND_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x084A))
#define MT6351_CHRIND_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x084C))
#define MT6351_CHRIND_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x084E))
#define MT6351_CHRIND_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0850))
#define MT6351_CHRIND_EN_CTRL ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0852))
#define MT6351_LDO_VA18_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A00))
#define MT6351_LDO_VA18_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A02))
#define MT6351_LDO_VTCXO24_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A04))
#define MT6351_LDO_VTCXO24_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A06))
#define MT6351_LDO_VTCXO28_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A08))
#define MT6351_LDO_VTCXO28_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A0A))
#define MT6351_LDO_VCN28_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A0C))
#define MT6351_LDO_VCN28_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A0E))
#define MT6351_LDO_VCN28_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A10))
#define MT6351_LDO_VCAMA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A12))
#define MT6351_LDO_VCAMA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A14))
#define MT6351_LDO_VUSB33_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A16))
#define MT6351_LDO_VUSB33_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A18))
#define MT6351_LDO_VUSB33_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A1A))
#define MT6351_LDO_VSIM1_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A1C))
#define MT6351_LDO_VSIM1_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A1E))
#define MT6351_LDO_VSIM1_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A20))
#define MT6351_LDO_VSIM2_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A22))
#define MT6351_LDO_VSIM2_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A24))
#define MT6351_LDO_VSIM2_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A26))
#define MT6351_LDO_VEMC_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A28))
#define MT6351_LDO_VEMC_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A2A))
#define MT6351_LDO_VEMC_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A2C))
#define MT6351_LDO_VMCH_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A2E))
#define MT6351_LDO_VMCH_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A30))
#define MT6351_LDO_VMCH_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A32))
#define MT6351_LDO_VIO28_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A34))
#define MT6351_LDO_VIO28_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A36))
#define MT6351_LDO_VIO28_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A38))
#define MT6351_LDO_VIBR_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A3A))
#define MT6351_LDO_VIBR_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A3C))
#define MT6351_LDO_VIBR_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A3E))
#define MT6351_LDO_VCAMD_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A40))
#define MT6351_LDO_VCAMD_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A42))
#define MT6351_LDO_VCAMD_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A44))
#define MT6351_LDO_VRF18_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A46))
#define MT6351_LDO_VRF18_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A48))
#define MT6351_LDO_VRF18_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A4A))
#define MT6351_LDO_VIO18_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A4C))
#define MT6351_LDO_VIO18_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A4E))
#define MT6351_LDO_VIO18_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A50))
#define MT6351_LDO_VCN18_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A52))
#define MT6351_LDO_VCN18_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A54))
#define MT6351_LDO_VCN18_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A56))
#define MT6351_LDO_VCAMIO_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A58))
#define MT6351_LDO_VCAMIO_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A5A))
#define MT6351_LDO_VCAMIO_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A5C))
#define MT6351_LDO_VSRAM_PROC_CON0                                             \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A5E))
#define MT6351_LDO_VSRAM_PROC_CON1                                             \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A60))
#define MT6351_LDO_VSRAM_PROC_CON2                                             \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A62))
#define MT6351_LDO_VXO22_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A64))
#define MT6351_LDO_VXO22_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A66))
#define MT6351_LDO_VRF12_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A68))
#define MT6351_LDO_VRF12_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A6A))
#define MT6351_LDO_VRF12_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A6C))
#define MT6351_LDO_VA10_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A6E))
#define MT6351_LDO_VA10_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A70))
#define MT6351_LDO_VA10_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A72))
#define MT6351_LDO_VDRAM_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A74))
#define MT6351_LDO_VDRAM_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A76))
#define MT6351_LDO_VDRAM_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A78))
#define MT6351_LDO_VMIPI_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A7A))
#define MT6351_LDO_VMIPI_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A7C))
#define MT6351_LDO_VMIPI_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A7E))
#define MT6351_LDO_VGP3_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A80))
#define MT6351_LDO_VGP3_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A82))
#define MT6351_LDO_VGP3_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A84))
#define MT6351_LDO_VBIF28_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A86))
#define MT6351_LDO_VBIF28_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A88))
#define MT6351_LDO_VBIF28_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A8A))
#define MT6351_LDO_VEFUSE_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A8C))
#define MT6351_LDO_VEFUSE_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A8E))
#define MT6351_LDO_VEFUSE_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A90))
#define MT6351_LDO_VCN33_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A92))
#define MT6351_LDO_VCN33_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A94))
#define MT6351_LDO_VCN33_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A96))
#define MT6351_LDO_VCN33_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A98))
#define MT6351_LDO_VCN33_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A9A))
#define MT6351_LDO_VLDO28_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A9C))
#define MT6351_LDO_VLDO28_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0A9E))
#define MT6351_LDO_VLDO28_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AA0))
#define MT6351_LDO_VLDO28_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AA2))
#define MT6351_LDO_VLDO28_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AA4))
#define MT6351_LDO_RSV_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AA6))
#define MT6351_LDO_RSV_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AA8))
#define MT6351_LDO_VMC_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AAA))
#define MT6351_LDO_VMC_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AAC))
#define MT6351_LDO_VMC_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AAE))
#define MT6351_LDO_VMC_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AB0))
#define MT6351_LDO_K_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AB2))
#define MT6351_LDO_K_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AB4))
#define MT6351_LDO_K_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AB6))
#define MT6351_LDO_OCFB0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AB8))
#define MT6351_VRTC_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ABA))
#define MT6351_ALDO_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ABC))
#define MT6351_DLDO_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ABE))
#define MT6351_SLDO20_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AC0))
#define MT6351_SLDO14_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AC2))
#define MT6351_VXO22_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AC4))
#define MT6351_VTCXO28_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AC6))
#define MT6351_VTCXO24_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AC8))
#define MT6351_VBIF28_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ACA))
#define MT6351_VCN28_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ACC))
#define MT6351_VMCH_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ACE))
#define MT6351_VMCH_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AD0))
#define MT6351_VEMC_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AD2))
#define MT6351_VEMC_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AD4))
#define MT6351_VCAMA_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AD6))
#define MT6351_VCAMA_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AD8))
#define MT6351_VCN33_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ADA))
#define MT6351_VCN33_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ADC))
#define MT6351_VIO28_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ADE))
#define MT6351_VIO28_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AE0))
#define MT6351_VMC_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AE2))
#define MT6351_VMC_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AE4))
#define MT6351_VIBR_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AE6))
#define MT6351_VIBR_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AE8))
#define MT6351_VUSB33_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AEA))
#define MT6351_VUSB33_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AEC))
#define MT6351_VSIM1_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AEE))
#define MT6351_VSIM1_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AF0))
#define MT6351_VSIM2_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AF2))
#define MT6351_VSIM2_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AF4))
#define MT6351_VEFUSE_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AF6))
#define MT6351_VEFUSE_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AF8))
#define MT6351_VA18_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AFA))
#define MT6351_VGP3_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AFC))
#define MT6351_VGP3_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0AFE))
#define MT6351_VCAMD_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B00))
#define MT6351_VCAMD_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B02))
#define MT6351_VIO18_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B04))
#define MT6351_VIO18_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B06))
#define MT6351_VRF18_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B08))
#define MT6351_VRF18_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B0A))
#define MT6351_VRF12_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B0C))
#define MT6351_VRF12_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B0E))
#define MT6351_VA10_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B10))
#define MT6351_VA10_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B12))
#define MT6351_VCAMIO_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B14))
#define MT6351_VCAMIO_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B16))
#define MT6351_VCN18_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B18))
#define MT6351_VCN18_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B1A))
#define MT6351_VMIPI_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B1C))
#define MT6351_VMIPI_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B1E))
#define MT6351_VSRAM_PROC_ANA_CON1                                             \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B20))
#define MT6351_VDRAM_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B22))
#define MT6351_VDRAM_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B24))
#define MT6351_VLDO28_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B26))
#define MT6351_VLDO28_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B28))
#define MT6351_BIF_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B2A))
#define MT6351_BIF_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B2C))
#define MT6351_BIF_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B2E))
#define MT6351_BIF_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B30))
#define MT6351_BIF_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B32))
#define MT6351_BIF_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B34))
#define MT6351_BIF_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B36))
#define MT6351_BIF_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B38))
#define MT6351_BIF_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B3A))
#define MT6351_BIF_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B3C))
#define MT6351_BIF_CON10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B3E))
#define MT6351_BIF_CON11 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B40))
#define MT6351_BIF_CON12 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B42))
#define MT6351_BIF_CON13 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B44))
#define MT6351_BIF_CON14 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B46))
#define MT6351_BIF_CON15 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B48))
#define MT6351_BIF_CON16 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B4A))
#define MT6351_BIF_CON17 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B4C))
#define MT6351_BIF_CON18 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B4E))
#define MT6351_BIF_CON19 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B50))
#define MT6351_BIF_CON20 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B52))
#define MT6351_BIF_CON21 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B54))
#define MT6351_BIF_CON22 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B56))
#define MT6351_BIF_CON23 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B58))
#define MT6351_BIF_CON24 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B5A))
#define MT6351_BIF_CON25 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B5C))
#define MT6351_BIF_CON26 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B5E))
#define MT6351_BIF_CON27 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B60))
#define MT6351_BIF_CON28 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B62))
#define MT6351_BIF_CON29 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B64))
#define MT6351_BIF_CON30 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B66))
#define MT6351_BIF_CON31 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B68))
#define MT6351_BIF_CON32 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B6A))
#define MT6351_BIF_CON33 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B6C))
#define MT6351_BIF_CON34 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B6E))
#define MT6351_BIF_CON35 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B70))
#define MT6351_BIF_CON36 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B72))
#define MT6351_BIF_BAT_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B74))
#define MT6351_BIF_CON37 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B76))
#define MT6351_BIF_CON38 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B78))
#define MT6351_BIF_CON39 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0B7A))
#define MT6351_OTP_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C00))
#define MT6351_OTP_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C02))
#define MT6351_OTP_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C04))
#define MT6351_OTP_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C06))
#define MT6351_OTP_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C08))
#define MT6351_OTP_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C0A))
#define MT6351_OTP_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C0C))
#define MT6351_OTP_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C0E))
#define MT6351_OTP_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C10))
#define MT6351_OTP_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C12))
#define MT6351_OTP_CON10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C14))
#define MT6351_OTP_CON11 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C16))
#define MT6351_OTP_CON12 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C18))
#define MT6351_OTP_CON13 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C1A))
#define MT6351_OTP_CON14 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C1C))
#define MT6351_OTP_DOUT_0_15 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C1E))
#define MT6351_OTP_DOUT_16_31 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C20))
#define MT6351_OTP_DOUT_32_47 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C22))
#define MT6351_OTP_DOUT_48_63 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C24))
#define MT6351_OTP_DOUT_64_79 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C26))
#define MT6351_OTP_DOUT_80_95 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C28))
#define MT6351_OTP_DOUT_96_111 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C2A))
#define MT6351_OTP_DOUT_112_127 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C2C))
#define MT6351_OTP_DOUT_128_143 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C2E))
#define MT6351_OTP_DOUT_144_159 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C30))
#define MT6351_OTP_DOUT_160_175 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C32))
#define MT6351_OTP_DOUT_176_191 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C34))
#define MT6351_OTP_DOUT_192_207 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C36))
#define MT6351_OTP_DOUT_208_223 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C38))
#define MT6351_OTP_DOUT_224_239 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C3A))
#define MT6351_OTP_DOUT_240_255 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C3C))
#define MT6351_OTP_DOUT_256_271 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C3E))
#define MT6351_OTP_DOUT_272_287 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C40))
#define MT6351_OTP_DOUT_288_303 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C42))
#define MT6351_OTP_DOUT_304_319 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C44))
#define MT6351_OTP_DOUT_320_335 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C46))
#define MT6351_OTP_DOUT_336_351 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C48))
#define MT6351_OTP_DOUT_352_367 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C4A))
#define MT6351_OTP_DOUT_368_383 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C4C))
#define MT6351_OTP_DOUT_384_399 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C4E))
#define MT6351_OTP_DOUT_400_415 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C50))
#define MT6351_OTP_DOUT_416_431 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C52))
#define MT6351_OTP_DOUT_432_447 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C54))
#define MT6351_OTP_DOUT_448_463 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C56))
#define MT6351_OTP_DOUT_464_479 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C58))
#define MT6351_OTP_DOUT_480_495 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C5A))
#define MT6351_OTP_DOUT_496_511 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C5C))
#define MT6351_OTP_VAL_0_15 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C5E))
#define MT6351_OTP_VAL_16_31 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C60))
#define MT6351_OTP_VAL_32_47 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C62))
#define MT6351_OTP_VAL_48_63 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C64))
#define MT6351_OTP_VAL_64_79 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C66))
#define MT6351_OTP_VAL_80_95 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C68))
#define MT6351_OTP_VAL_96_111 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C6A))
#define MT6351_OTP_VAL_112_127 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C6C))
#define MT6351_OTP_VAL_128_143 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C6E))
#define MT6351_OTP_VAL_144_159 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C70))
#define MT6351_OTP_VAL_160_175 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C72))
#define MT6351_OTP_VAL_176_191 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C74))
#define MT6351_OTP_VAL_192_207 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C76))
#define MT6351_OTP_VAL_208_223 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C78))
#define MT6351_OTP_VAL_224_239 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C7A))
#define MT6351_OTP_VAL_240_255 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C7C))
#define MT6351_OTP_VAL_256_271 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C7E))
#define MT6351_OTP_VAL_272_287 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C80))
#define MT6351_OTP_VAL_288_303 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C82))
#define MT6351_OTP_VAL_304_319 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C84))
#define MT6351_OTP_VAL_320_335 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C86))
#define MT6351_OTP_VAL_336_351 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C88))
#define MT6351_OTP_VAL_352_367 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C8A))
#define MT6351_OTP_VAL_368_383 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C8C))
#define MT6351_OTP_VAL_384_399 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C8E))
#define MT6351_OTP_VAL_400_415 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C90))
#define MT6351_OTP_VAL_416_431 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C92))
#define MT6351_OTP_VAL_432_447 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C94))
#define MT6351_OTP_VAL_448_463 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C96))
#define MT6351_OTP_VAL_464_479 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C98))
#define MT6351_OTP_VAL_480_495 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C9A))
#define MT6351_OTP_VAL_496_511 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C9C))
#define MT6351_RTC_MIX_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0C9E))
#define MT6351_RTC_MIX_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CA0))
#define MT6351_RTC_MIX_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CA2))
#define MT6351_FGADC_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CA4))
#define MT6351_FGADC_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CA6))
#define MT6351_FGADC_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CA8))
#define MT6351_FGADC_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CAA))
#define MT6351_FGADC_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CAC))
#define MT6351_FGADC_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CAE))
#define MT6351_FGADC_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CB0))
#define MT6351_FGADC_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CB2))
#define MT6351_FGADC_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CB4))
#define MT6351_FGADC_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CB6))
#define MT6351_FGADC_CON10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CB8))
#define MT6351_FGADC_CON11 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CBA))
#define MT6351_FGADC_CON12 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CBC))
#define MT6351_FGADC_CON13 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CBE))
#define MT6351_FGADC_CON14 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CC0))
#define MT6351_FGADC_CON15 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CC2))
#define MT6351_FGADC_CON16 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CC4))
#define MT6351_FGADC_CON17 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CC6))
#define MT6351_FGADC_CON18 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CC8))
#define MT6351_FGADC_CON19 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CCA))
#define MT6351_FGADC_CON20 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CCC))
#define MT6351_FGADC_CON21 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CCE))
#define MT6351_FGADC_CON22 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CD0))
#define MT6351_FGADC_CON23 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CD2))
#define MT6351_FGADC_CON24 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CD4))
#define MT6351_FGADC_CON25 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CD6))
#define MT6351_FGADC_CON26 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CD8))
#define MT6351_FGADC_CON27 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CDA))
#define MT6351_FGADC_CON28 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CDC))
#define MT6351_FGADC_CON29 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CDE))
#define MT6351_FGADC_CON30 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CE0))
#define MT6351_FGADC_CON31 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CE2))
#define MT6351_FGADC_CON32 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CE4))
#define MT6351_FGADC_CON33 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CE6))
#define MT6351_SYSTEM_INFO_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CE8))
#define MT6351_SYSTEM_INFO_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CEA))
#define MT6351_SYSTEM_INFO_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CEC))
#define MT6351_SYSTEM_INFO_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CEE))
#define MT6351_SYSTEM_INFO_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CF0))
#define MT6351_AUDDEC_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CF2))
#define MT6351_AUDDEC_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CF4))
#define MT6351_AUDDEC_ANA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CF6))
#define MT6351_AUDDEC_ANA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CF8))
#define MT6351_AUDDEC_ANA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CFA))
#define MT6351_AUDDEC_ANA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CFC))
#define MT6351_AUDDEC_ANA_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0CFE))
#define MT6351_AUDDEC_ANA_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D00))
#define MT6351_AUDDEC_ANA_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D02))
#define MT6351_AUDDEC_ANA_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D04))
#define MT6351_AUDDEC_ANA_CON10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D06))
#define MT6351_AUDENC_ANA_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D08))
#define MT6351_AUDENC_ANA_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D0A))
#define MT6351_AUDENC_ANA_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D0C))
#define MT6351_AUDENC_ANA_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D0E))
#define MT6351_AUDENC_ANA_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D10))
#define MT6351_AUDENC_ANA_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D12))
#define MT6351_AUDENC_ANA_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D14))
#define MT6351_AUDENC_ANA_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D16))
#define MT6351_AUDENC_ANA_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D18))
#define MT6351_AUDENC_ANA_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D1A))
#define MT6351_AUDENC_ANA_CON10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D1C))
#define MT6351_AUDENC_ANA_CON11 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D1E))
#define MT6351_AUDENC_ANA_CON12 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D20))
#define MT6351_AUDENC_ANA_CON13 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D22))
#define MT6351_AUDENC_ANA_CON14 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D24))
#define MT6351_AUDENC_ANA_CON15 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D26))
#define MT6351_AUDENC_ANA_CON16 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D28))
#define MT6351_AUDNCP_CLKDIV_CON0                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D2A))
#define MT6351_AUDNCP_CLKDIV_CON1                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D2C))
#define MT6351_AUDNCP_CLKDIV_CON2                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D2E))
#define MT6351_AUDNCP_CLKDIV_CON3                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D30))
#define MT6351_AUDNCP_CLKDIV_CON4                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0D32))
#define MT6351_AUXADC_ADC0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E00))
#define MT6351_AUXADC_ADC1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E02))
#define MT6351_AUXADC_ADC2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E04))
#define MT6351_AUXADC_ADC3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E06))
#define MT6351_AUXADC_ADC4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E08))
#define MT6351_AUXADC_ADC5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E0A))
#define MT6351_AUXADC_ADC6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E0C))
#define MT6351_AUXADC_ADC7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E0E))
#define MT6351_AUXADC_ADC8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E10))
#define MT6351_AUXADC_ADC9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E12))
#define MT6351_AUXADC_ADC10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E14))
#define MT6351_AUXADC_ADC11 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E16))
#define MT6351_AUXADC_ADC12 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E18))
#define MT6351_AUXADC_ADC13 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E1A))
#define MT6351_AUXADC_ADC14 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E1C))
#define MT6351_AUXADC_ADC15 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E1E))
#define MT6351_AUXADC_ADC16 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E20))
#define MT6351_AUXADC_ADC17 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E22))
#define MT6351_AUXADC_ADC18 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E24))
#define MT6351_AUXADC_ADC19 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E26))
#define MT6351_AUXADC_ADC20 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E28))
#define MT6351_AUXADC_ADC21 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E2A))
#define MT6351_AUXADC_ADC22 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E2C))
#define MT6351_AUXADC_ADC23 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E2E))
#define MT6351_AUXADC_ADC24 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E30))
#define MT6351_AUXADC_ADC25 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E32))
#define MT6351_AUXADC_ADC26 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E34))
#define MT6351_AUXADC_ADC27 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E36))
#define MT6351_AUXADC_ADC28 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E38))
#define MT6351_AUXADC_ADC29 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E3A))
#define MT6351_AUXADC_ADC30 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E3C))
#define MT6351_AUXADC_ADC31 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E3E))
#define MT6351_AUXADC_ADC32 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E40))
#define MT6351_AUXADC_ADC33 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E42))
#define MT6351_AUXADC_ADC34 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E44))
#define MT6351_AUXADC_ADC35 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E46))
#define MT6351_AUXADC_ADC36 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E48))
#define MT6351_AUXADC_ADC37 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E4A))
#define MT6351_AUXADC_ADC38 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E4C))
#define MT6351_AUXADC_ADC39 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E4E))
#define MT6351_AUXADC_BUF0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E50))
#define MT6351_AUXADC_BUF1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E52))
#define MT6351_AUXADC_BUF2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E54))
#define MT6351_AUXADC_BUF3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E56))
#define MT6351_AUXADC_BUF4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E58))
#define MT6351_AUXADC_BUF5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E5A))
#define MT6351_AUXADC_BUF6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E5C))
#define MT6351_AUXADC_BUF7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E5E))
#define MT6351_AUXADC_BUF8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E60))
#define MT6351_AUXADC_BUF9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E62))
#define MT6351_AUXADC_BUF10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E64))
#define MT6351_AUXADC_BUF11 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E66))
#define MT6351_AUXADC_BUF12 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E68))
#define MT6351_AUXADC_BUF13 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E6A))
#define MT6351_AUXADC_BUF14 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E6C))
#define MT6351_AUXADC_BUF15 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E6E))
#define MT6351_AUXADC_BUF16 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E70))
#define MT6351_AUXADC_BUF17 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E72))
#define MT6351_AUXADC_BUF18 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E74))
#define MT6351_AUXADC_BUF19 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E76))
#define MT6351_AUXADC_BUF20 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E78))
#define MT6351_AUXADC_BUF21 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E7A))
#define MT6351_AUXADC_BUF22 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E7C))
#define MT6351_AUXADC_BUF23 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E7E))
#define MT6351_AUXADC_BUF24 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E80))
#define MT6351_AUXADC_BUF25 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E82))
#define MT6351_AUXADC_BUF26 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E84))
#define MT6351_AUXADC_BUF27 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E86))
#define MT6351_AUXADC_BUF28 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E88))
#define MT6351_AUXADC_BUF29 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E8A))
#define MT6351_AUXADC_BUF30 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E8C))
#define MT6351_AUXADC_BUF31 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E8E))
#define MT6351_AUXADC_STA0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E90))
#define MT6351_AUXADC_STA1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E92))
#define MT6351_AUXADC_STA2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E94))
#define MT6351_AUXADC_RQST0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E96))
#define MT6351_AUXADC_RQST0_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E98))
#define MT6351_AUXADC_RQST0_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E9A))
#define MT6351_AUXADC_RQST1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E9C))
#define MT6351_AUXADC_RQST1_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0E9E))
#define MT6351_AUXADC_RQST1_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EA0))
#define MT6351_AUXADC_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EA2))
#define MT6351_AUXADC_CON0_SET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EA4))
#define MT6351_AUXADC_CON0_CLR ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EA6))
#define MT6351_AUXADC_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EA8))
#define MT6351_AUXADC_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EAA))
#define MT6351_AUXADC_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EAC))
#define MT6351_AUXADC_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EAE))
#define MT6351_AUXADC_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EB0))
#define MT6351_AUXADC_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EB2))
#define MT6351_AUXADC_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EB4))
#define MT6351_AUXADC_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EB6))
#define MT6351_AUXADC_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EB8))
#define MT6351_AUXADC_CON10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EBA))
#define MT6351_AUXADC_CON11 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EBC))
#define MT6351_AUXADC_CON12 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EBE))
#define MT6351_AUXADC_CON13 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EC0))
#define MT6351_AUXADC_CON14 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EC2))
#define MT6351_AUXADC_CON15 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EC4))
#define MT6351_AUXADC_CON16 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EC6))
#define MT6351_AUXADC_AUTORPT0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EC8))
#define MT6351_AUXADC_LBAT0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ECA))
#define MT6351_AUXADC_LBAT1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ECC))
#define MT6351_AUXADC_LBAT2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ECE))
#define MT6351_AUXADC_LBAT3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ED0))
#define MT6351_AUXADC_LBAT4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ED2))
#define MT6351_AUXADC_LBAT5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ED4))
#define MT6351_AUXADC_LBAT6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ED6))
#define MT6351_AUXADC_ACCDET ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0ED8))
#define MT6351_AUXADC_THR0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EDA))
#define MT6351_AUXADC_THR1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EDC))
#define MT6351_AUXADC_THR2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EDE))
#define MT6351_AUXADC_THR3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EE0))
#define MT6351_AUXADC_THR4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EE2))
#define MT6351_AUXADC_THR5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EE4))
#define MT6351_AUXADC_THR6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EE6))
#define MT6351_AUXADC_EFUSE0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EE8))
#define MT6351_AUXADC_EFUSE1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EEA))
#define MT6351_AUXADC_EFUSE2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EEC))
#define MT6351_AUXADC_EFUSE3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EEE))
#define MT6351_AUXADC_EFUSE4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EF0))
#define MT6351_AUXADC_EFUSE5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EF2))
#define MT6351_AUXADC_DBG0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EF4))
#define MT6351_AUXADC_IMP0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EF6))
#define MT6351_AUXADC_IMP1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EF8))
#define MT6351_AUXADC_VISMPS0_1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EFA))
#define MT6351_AUXADC_VISMPS0_2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EFC))
#define MT6351_AUXADC_VISMPS0_3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0EFE))
#define MT6351_AUXADC_VISMPS0_4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F00))
#define MT6351_AUXADC_VISMPS0_5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F02))
#define MT6351_AUXADC_VISMPS0_6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F04))
#define MT6351_AUXADC_VISMPS0_7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F06))
#define MT6351_AUXADC_LBAT2_1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F08))
#define MT6351_AUXADC_LBAT2_2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F0A))
#define MT6351_AUXADC_LBAT2_3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F0C))
#define MT6351_AUXADC_LBAT2_4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F0E))
#define MT6351_AUXADC_LBAT2_5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F10))
#define MT6351_AUXADC_LBAT2_6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F12))
#define MT6351_AUXADC_LBAT2_7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F14))
#define MT6351_AUXADC_MDBG_0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F16))
#define MT6351_AUXADC_MDBG_1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F18))
#define MT6351_AUXADC_MDBG_2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F1A))
#define MT6351_AUXADC_MDRT_0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F1C))
#define MT6351_AUXADC_MDRT_1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F1E))
#define MT6351_AUXADC_MDRT_2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F20))
#define MT6351_AUXADC_JEITA_0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F22))
#define MT6351_AUXADC_JEITA_1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F24))
#define MT6351_AUXADC_JEITA_2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F26))
#define MT6351_AUXADC_JEITA_3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F28))
#define MT6351_AUXADC_JEITA_4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F2A))
#define MT6351_AUXADC_JEITA_5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F2C))
#define MT6351_AUXADC_DCXO_MDRT_0                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F2E))
#define MT6351_AUXADC_DCXO_MDRT_1                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F30))
#define MT6351_AUXADC_DCXO_MDRT_2                                              \
	((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F32))
#define MT6351_AUXADC_NAG_0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F34))
#define MT6351_AUXADC_NAG_1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F36))
#define MT6351_AUXADC_NAG_2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F38))
#define MT6351_AUXADC_NAG_3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F3A))
#define MT6351_AUXADC_NAG_4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F3C))
#define MT6351_AUXADC_NAG_5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F3E))
#define MT6351_AUXADC_NAG_6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F40))
#define MT6351_AUXADC_NAG_7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F42))
#define MT6351_AUXADC_NAG_8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F44))
#define MT6351_ACCDET_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F46))
#define MT6351_ACCDET_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F48))
#define MT6351_ACCDET_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F4A))
#define MT6351_ACCDET_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F4C))
#define MT6351_ACCDET_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F4E))
#define MT6351_ACCDET_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F50))
#define MT6351_ACCDET_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F52))
#define MT6351_ACCDET_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F54))
#define MT6351_ACCDET_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F56))
#define MT6351_ACCDET_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F58))
#define MT6351_ACCDET_CON10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F5A))
#define MT6351_ACCDET_CON11 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F5C))
#define MT6351_ACCDET_CON12 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F5E))
#define MT6351_ACCDET_CON13 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F60))
#define MT6351_ACCDET_CON14 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F62))
#define MT6351_ACCDET_CON15 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F64))
#define MT6351_ACCDET_CON16 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F66))
#define MT6351_ACCDET_CON17 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F68))
#define MT6351_ACCDET_CON19 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F6A))
#define MT6351_ACCDET_CON20 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F6C))
#define MT6351_ACCDET_CON21 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F6E))
#define MT6351_ACCDET_CON22 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F70))
#define MT6351_ACCDET_CON23 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F72))
#define MT6351_ACCDET_CON24 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F74))
#define MT6351_ACCDET_CON25 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F76))
#define MT6351_CHR_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F78))
#define MT6351_CHR_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F7A))
#define MT6351_CHR_CON2 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F7C))
#define MT6351_CHR_CON3 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F7E))
#define MT6351_CHR_CON4 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F80))
#define MT6351_CHR_CON5 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F82))
#define MT6351_CHR_CON6 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F84))
#define MT6351_CHR_CON7 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F86))
#define MT6351_CHR_CON8 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F88))
#define MT6351_CHR_CON9 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F8A))
#define MT6351_CHR_CON10 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F8C))
#define MT6351_CHR_CON11 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F8E))
#define MT6351_CHR_CON12 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F90))
#define MT6351_CHR_CON13 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F92))
#define MT6351_CHR_CON14 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F94))
#define MT6351_CHR_CON15 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F96))
#define MT6351_CHR_CON16 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F98))
#define MT6351_CHR_CON17 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F9A))
#define MT6351_CHR_CON18 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F9C))
#define MT6351_CHR_CON19 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0F9E))
#define MT6351_CHR_CON20 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FA0))
#define MT6351_CHR_CON21 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FA2))
#define MT6351_CHR_CON22 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FA4))
#define MT6351_CHR_CON23 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FA6))
#define MT6351_CHR_CON24 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FA8))
#define MT6351_CHR_CON25 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FAA))
#define MT6351_CHR_CON26 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FAC))
#define MT6351_CHR_CON27 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FAE))
#define MT6351_CHR_CON28 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FB0))
#define MT6351_CHR_CON29 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FB2))
#define MT6351_CHR_CON30 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FB4))
#define MT6351_CHR_CON31 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FB6))
#define MT6351_CHR_CON32 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FB8))
#define MT6351_CHR_CON33 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FBA))
#define MT6351_CHR_CON34 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FBC))
#define MT6351_CHR_CON35 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FBE))
#define MT6351_CHR_CON36 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FC0))
#define MT6351_CHR_CON37 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FC2))
#define MT6351_CHR_CON38 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FC4))
#define MT6351_CHR_CON39 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FC6))
#define MT6351_CHR_CON40 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FC8))
#define MT6351_CHR_CON41 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FCA))
#define MT6351_CHR_CON42 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FCC))
#define MT6351_BATON_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FCE))
#define MT6351_CHR_CON43 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FD0))
#define MT6351_CHR_CON44 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FD2))
#define MT6351_CHR_CON45 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FD4))
#define MT6351_CHR_CON46 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FD6))
#define MT6351_CHR_CON47 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FD8))
#define MT6351_CHR_CON48 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FDA))
#define MT6351_EOSC_CALI_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FDC))
#define MT6351_EOSC_CALI_CON1 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FDE))
#define MT6351_VRTC_PWM_CON0 ((unsigned int)(MT6351_PMIC_REG_BASE + 0x0FE0))
/*mask is HEX;  shift is Integer*/
#define MT6351_PMIC_THR_DET_DIS_ADDR MT6351_STRUP_CON0
#define MT6351_PMIC_THR_DET_DIS_MASK 0x1
#define MT6351_PMIC_THR_DET_DIS_SHIFT 0
#define MT6351_PMIC_THR_TEST_ADDR MT6351_STRUP_CON0
#define MT6351_PMIC_THR_TEST_MASK 0x3
#define MT6351_PMIC_THR_TEST_SHIFT 1
#define MT6351_PMIC_THR_HWPDN_EN_ADDR MT6351_STRUP_CON0
#define MT6351_PMIC_THR_HWPDN_EN_MASK 0x1
#define MT6351_PMIC_THR_HWPDN_EN_SHIFT 5
#define MT6351_PMIC_STRUP_THERMAL_DEB_SEL_ADDR MT6351_STRUP_CON0
#define MT6351_PMIC_STRUP_THERMAL_DEB_SEL_MASK 0x1
#define MT6351_PMIC_STRUP_THERMAL_DEB_SEL_SHIFT 15
#define MT6351_PMIC_USBDL_ADDR MT6351_STRUP_CON1
#define MT6351_PMIC_USBDL_MASK 0x1
#define MT6351_PMIC_USBDL_SHIFT 0
#define MT6351_PMIC_PMU_THERMAL_DEB_ADDR MT6351_STRUP_CON1
#define MT6351_PMIC_PMU_THERMAL_DEB_MASK 0x1
#define MT6351_PMIC_PMU_THERMAL_DEB_SHIFT 1
#define MT6351_PMIC_PMU_THR_DEB_ADDR MT6351_STRUP_CON1
#define MT6351_PMIC_PMU_THR_DEB_MASK 0x7
#define MT6351_PMIC_PMU_THR_DEB_SHIFT 4
#define MT6351_PMIC_PMU_THR_STATUS_ADDR MT6351_STRUP_CON1
#define MT6351_PMIC_PMU_THR_STATUS_MASK 0x7
#define MT6351_PMIC_PMU_THR_STATUS_SHIFT 8
#define MT6351_PMIC_STRUP_THER_DEB_RMAX_ADDR MT6351_STRUP_CON2
#define MT6351_PMIC_STRUP_THER_DEB_RMAX_MASK 0xFFFF
#define MT6351_PMIC_STRUP_THER_DEB_RMAX_SHIFT 0
#define MT6351_PMIC_STRUP_THER_DEB_FMAX_ADDR MT6351_STRUP_CON3
#define MT6351_PMIC_STRUP_THER_DEB_FMAX_MASK 0xFFFF
#define MT6351_PMIC_STRUP_THER_DEB_FMAX_SHIFT 0
#define MT6351_PMIC_DDUVLO_DEB_EN_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_DDUVLO_DEB_EN_MASK 0x1
#define MT6351_PMIC_DDUVLO_DEB_EN_SHIFT 0
#define MT6351_PMIC_PWRBB_DEB_EN_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_PWRBB_DEB_EN_MASK 0x1
#define MT6351_PMIC_PWRBB_DEB_EN_SHIFT 1
#define MT6351_PMIC_STRUP_OSC_EN_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_STRUP_OSC_EN_MASK 0x1
#define MT6351_PMIC_STRUP_OSC_EN_SHIFT 2
#define MT6351_PMIC_STRUP_OSC_EN_SEL_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_STRUP_OSC_EN_SEL_MASK 0x1
#define MT6351_PMIC_STRUP_OSC_EN_SEL_SHIFT 3
#define MT6351_PMIC_STRUP_FT_CTRL_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_STRUP_FT_CTRL_MASK 0x3
#define MT6351_PMIC_STRUP_FT_CTRL_SHIFT 4
#define MT6351_PMIC_STRUP_PWRON_FORCE_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_STRUP_PWRON_FORCE_MASK 0x1
#define MT6351_PMIC_STRUP_PWRON_FORCE_SHIFT 6
#define MT6351_PMIC_BIAS_GEN_EN_FORCE_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_BIAS_GEN_EN_FORCE_MASK 0x1
#define MT6351_PMIC_BIAS_GEN_EN_FORCE_SHIFT 7
#define MT6351_PMIC_STRUP_PWRON_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_STRUP_PWRON_MASK 0x1
#define MT6351_PMIC_STRUP_PWRON_SHIFT 8
#define MT6351_PMIC_STRUP_PWRON_SEL_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_STRUP_PWRON_SEL_MASK 0x1
#define MT6351_PMIC_STRUP_PWRON_SEL_SHIFT 9
#define MT6351_PMIC_BIAS_GEN_EN_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_BIAS_GEN_EN_MASK 0x1
#define MT6351_PMIC_BIAS_GEN_EN_SHIFT 10
#define MT6351_PMIC_BIAS_GEN_EN_SEL_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_BIAS_GEN_EN_SEL_MASK 0x1
#define MT6351_PMIC_BIAS_GEN_EN_SEL_SHIFT 11
#define MT6351_PMIC_RTC_XOSC32_ENB_SW_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_RTC_XOSC32_ENB_SW_MASK 0x1
#define MT6351_PMIC_RTC_XOSC32_ENB_SW_SHIFT 12
#define MT6351_PMIC_RTC_XOSC32_ENB_SEL_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_RTC_XOSC32_ENB_SEL_MASK 0x1
#define MT6351_PMIC_RTC_XOSC32_ENB_SEL_SHIFT 13
#define MT6351_PMIC_STRUP_DIG_IO_PG_FORCE_ADDR MT6351_STRUP_CON4
#define MT6351_PMIC_STRUP_DIG_IO_PG_FORCE_MASK 0x1
#define MT6351_PMIC_STRUP_DIG_IO_PG_FORCE_SHIFT 15
#define MT6351_PMIC_RG_STRUP_VUSB33_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VUSB33_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VUSB33_PG_H2L_EN_SHIFT 1
#define MT6351_PMIC_RG_STRUP_VGPU_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VGPU_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VGPU_PG_H2L_EN_SHIFT 2
#define MT6351_PMIC_RG_STRUP_VDRAM_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VDRAM_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VDRAM_PG_H2L_EN_SHIFT 3
#define MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_H2L_EN_SHIFT 4
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_H2L_EN_SHIFT 5
#define MT6351_PMIC_RG_STRUP_VA10_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VA10_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VA10_PG_H2L_EN_SHIFT 7
#define MT6351_PMIC_RG_STRUP_VEMC_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VEMC_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VEMC_PG_H2L_EN_SHIFT 8
#define MT6351_PMIC_RG_STRUP_VS2_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VS2_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS2_PG_H2L_EN_SHIFT 10
#define MT6351_PMIC_RG_STRUP_VMODEM_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VMODEM_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMODEM_PG_H2L_EN_SHIFT 11
#define MT6351_PMIC_RG_STRUP_VMD1_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VMD1_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMD1_PG_H2L_EN_SHIFT 12
#define MT6351_PMIC_RG_STRUP_VCORE_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VCORE_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VCORE_PG_H2L_EN_SHIFT 13
#define MT6351_PMIC_RG_STRUP_VA18_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VA18_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VA18_PG_H2L_EN_SHIFT 14
#define MT6351_PMIC_RG_STRUP_VS1_PG_H2L_EN_ADDR MT6351_STRUP_CON5
#define MT6351_PMIC_RG_STRUP_VS1_PG_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS1_PG_H2L_EN_SHIFT 15
#define MT6351_PMIC_RG_STRUP_VTCXO24_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VTCXO24_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VTCXO24_PG_ENB_SHIFT 0
#define MT6351_PMIC_RG_STRUP_VUSB33_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VUSB33_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VUSB33_PG_ENB_SHIFT 1
#define MT6351_PMIC_RG_STRUP_VGPU_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VGPU_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VGPU_PG_ENB_SHIFT 2
#define MT6351_PMIC_RG_STRUP_VDRAM_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VDRAM_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VDRAM_PG_ENB_SHIFT 3
#define MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_ENB_SHIFT 4
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_ENB_SHIFT 5
#define MT6351_PMIC_RG_STRUP_VIO28_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VIO28_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VIO28_PG_ENB_SHIFT 6
#define MT6351_PMIC_RG_STRUP_VA10_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VA10_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VA10_PG_ENB_SHIFT 7
#define MT6351_PMIC_RG_STRUP_VEMC_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VEMC_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VEMC_PG_ENB_SHIFT 8
#define MT6351_PMIC_RG_STRUP_VIO18_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VIO18_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VIO18_PG_ENB_SHIFT 9
#define MT6351_PMIC_RG_STRUP_VS2_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VS2_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS2_PG_ENB_SHIFT 10
#define MT6351_PMIC_RG_STRUP_VMODEM_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VMODEM_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMODEM_PG_ENB_SHIFT 11
#define MT6351_PMIC_RG_STRUP_VMD1_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VMD1_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMD1_PG_ENB_SHIFT 12
#define MT6351_PMIC_RG_STRUP_VCORE_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VCORE_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VCORE_PG_ENB_SHIFT 13
#define MT6351_PMIC_RG_STRUP_VA18_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VA18_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VA18_PG_ENB_SHIFT 14
#define MT6351_PMIC_RG_STRUP_VS1_PG_ENB_ADDR MT6351_STRUP_CON6
#define MT6351_PMIC_RG_STRUP_VS1_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS1_PG_ENB_SHIFT 15
#define MT6351_PMIC_RG_STRUP_VXO22_PG_ENB_ADDR MT6351_STRUP_CON7
#define MT6351_PMIC_RG_STRUP_VXO22_PG_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VXO22_PG_ENB_SHIFT 15
#define MT6351_PMIC_RG_STRUP_VGPU_OC_H2L_EN_ADDR MT6351_STRUP_CON8
#define MT6351_PMIC_RG_STRUP_VGPU_OC_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VGPU_OC_H2L_EN_SHIFT 9
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_H2L_EN_ADDR MT6351_STRUP_CON8
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_H2L_EN_SHIFT 10
#define MT6351_PMIC_RG_STRUP_VS2_OC_H2L_EN_ADDR MT6351_STRUP_CON8
#define MT6351_PMIC_RG_STRUP_VS2_OC_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS2_OC_H2L_EN_SHIFT 11
#define MT6351_PMIC_RG_STRUP_VMODEM_OC_H2L_EN_ADDR MT6351_STRUP_CON8
#define MT6351_PMIC_RG_STRUP_VMODEM_OC_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMODEM_OC_H2L_EN_SHIFT 12
#define MT6351_PMIC_RG_STRUP_VMD1_OC_H2L_EN_ADDR MT6351_STRUP_CON8
#define MT6351_PMIC_RG_STRUP_VMD1_OC_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMD1_OC_H2L_EN_SHIFT 13
#define MT6351_PMIC_RG_STRUP_VCORE_OC_H2L_EN_ADDR MT6351_STRUP_CON8
#define MT6351_PMIC_RG_STRUP_VCORE_OC_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VCORE_OC_H2L_EN_SHIFT 14
#define MT6351_PMIC_RG_STRUP_VS1_OC_H2L_EN_ADDR MT6351_STRUP_CON8
#define MT6351_PMIC_RG_STRUP_VS1_OC_H2L_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS1_OC_H2L_EN_SHIFT 15
#define MT6351_PMIC_RG_STRUP_VGPU_OC_ENB_ADDR MT6351_STRUP_CON9
#define MT6351_PMIC_RG_STRUP_VGPU_OC_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VGPU_OC_ENB_SHIFT 9
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_ENB_ADDR MT6351_STRUP_CON9
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_ENB_SHIFT 10
#define MT6351_PMIC_RG_STRUP_VS2_OC_ENB_ADDR MT6351_STRUP_CON9
#define MT6351_PMIC_RG_STRUP_VS2_OC_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS2_OC_ENB_SHIFT 11
#define MT6351_PMIC_RG_STRUP_VMODEM_OC_ENB_ADDR MT6351_STRUP_CON9
#define MT6351_PMIC_RG_STRUP_VMODEM_OC_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMODEM_OC_ENB_SHIFT 12
#define MT6351_PMIC_RG_STRUP_VMD1_OC_ENB_ADDR MT6351_STRUP_CON9
#define MT6351_PMIC_RG_STRUP_VMD1_OC_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMD1_OC_ENB_SHIFT 13
#define MT6351_PMIC_RG_STRUP_VCORE_OC_ENB_ADDR MT6351_STRUP_CON9
#define MT6351_PMIC_RG_STRUP_VCORE_OC_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VCORE_OC_ENB_SHIFT 14
#define MT6351_PMIC_RG_STRUP_VS1_OC_ENB_ADDR MT6351_STRUP_CON9
#define MT6351_PMIC_RG_STRUP_VS1_OC_ENB_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS1_OC_ENB_SHIFT 15
#define MT6351_PMIC_RG_STRUP_VDRAM_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON10
#define MT6351_PMIC_RG_STRUP_VDRAM_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VDRAM_PG_DEB_BYPASS_SHIFT 7
#define MT6351_PMIC_RG_STRUP_VXO22_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON10
#define MT6351_PMIC_RG_STRUP_VXO22_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VXO22_PG_DEB_BYPASS_SHIFT 8
#define MT6351_PMIC_RG_STRUP_VGPU_OC_DEB_BYPASS_ADDR MT6351_STRUP_CON10
#define MT6351_PMIC_RG_STRUP_VGPU_OC_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VGPU_OC_DEB_BYPASS_SHIFT 9
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_DEB_BYPASS_ADDR MT6351_STRUP_CON10
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_DEB_BYPASS_SHIFT 10
#define MT6351_PMIC_RG_STRUP_VS2_OC_DEB_BYPASS_ADDR MT6351_STRUP_CON10
#define MT6351_PMIC_RG_STRUP_VS2_OC_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS2_OC_DEB_BYPASS_SHIFT 11
#define MT6351_PMIC_RG_STRUP_VMODEM_OC_DEB_BYPASS_ADDR MT6351_STRUP_CON10
#define MT6351_PMIC_RG_STRUP_VMODEM_OC_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMODEM_OC_DEB_BYPASS_SHIFT 12
#define MT6351_PMIC_RG_STRUP_VMD1_OC_DEB_BYPASS_ADDR MT6351_STRUP_CON10
#define MT6351_PMIC_RG_STRUP_VMD1_OC_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMD1_OC_DEB_BYPASS_SHIFT 13
#define MT6351_PMIC_RG_STRUP_VCORE_OC_DEB_BYPASS_ADDR MT6351_STRUP_CON10
#define MT6351_PMIC_RG_STRUP_VCORE_OC_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VCORE_OC_DEB_BYPASS_SHIFT 14
#define MT6351_PMIC_RG_STRUP_VS1_OC_DEB_BYPASS_ADDR MT6351_STRUP_CON10
#define MT6351_PMIC_RG_STRUP_VS1_OC_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS1_OC_DEB_BYPASS_SHIFT 15
#define MT6351_PMIC_RG_STRUP_VTCXO24_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VTCXO24_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VTCXO24_PG_DEB_BYPASS_SHIFT 0
#define MT6351_PMIC_RG_STRUP_VUSB33_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VUSB33_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VUSB33_PG_DEB_BYPASS_SHIFT 1
#define MT6351_PMIC_RG_STRUP_VGPU_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VGPU_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VGPU_PG_DEB_BYPASS_SHIFT 2
#define MT6351_PMIC_RG_STRUP_VSRAM_DRAM_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VSRAM_DRAM_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VSRAM_DRAM_PG_DEB_BYPASS_SHIFT 3
#define MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_DEB_BYPASS_SHIFT 4
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_DEB_BYPASS_SHIFT 5
#define MT6351_PMIC_RG_STRUP_VIO28_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VIO28_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VIO28_PG_DEB_BYPASS_SHIFT 6
#define MT6351_PMIC_RG_STRUP_VA10_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VA10_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VA10_PG_DEB_BYPASS_SHIFT 7
#define MT6351_PMIC_RG_STRUP_VEMC_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VEMC_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VEMC_PG_DEB_BYPASS_SHIFT 8
#define MT6351_PMIC_RG_STRUP_VIO18_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VIO18_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VIO18_PG_DEB_BYPASS_SHIFT 9
#define MT6351_PMIC_RG_STRUP_VS2_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VS2_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS2_PG_DEB_BYPASS_SHIFT 10
#define MT6351_PMIC_RG_STRUP_VMODEM_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VMODEM_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMODEM_PG_DEB_BYPASS_SHIFT 11
#define MT6351_PMIC_RG_STRUP_VMD1_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VMD1_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VMD1_PG_DEB_BYPASS_SHIFT 12
#define MT6351_PMIC_RG_STRUP_VCORE_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VCORE_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VCORE_PG_DEB_BYPASS_SHIFT 13
#define MT6351_PMIC_RG_STRUP_VA18_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VA18_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VA18_PG_DEB_BYPASS_SHIFT 14
#define MT6351_PMIC_RG_STRUP_VS1_PG_DEB_BYPASS_ADDR MT6351_STRUP_CON11
#define MT6351_PMIC_RG_STRUP_VS1_PG_DEB_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_VS1_PG_DEB_BYPASS_SHIFT 15
#define MT6351_PMIC_CLR_JUST_RST_ADDR MT6351_STRUP_CON12
#define MT6351_PMIC_CLR_JUST_RST_MASK 0x1
#define MT6351_PMIC_CLR_JUST_RST_SHIFT 4
#define MT6351_PMIC_UVLO_L2H_DEB_EN_ADDR MT6351_STRUP_CON12
#define MT6351_PMIC_UVLO_L2H_DEB_EN_MASK 0x1
#define MT6351_PMIC_UVLO_L2H_DEB_EN_SHIFT 5
#define MT6351_PMIC_JUST_PWRKEY_RST_ADDR MT6351_STRUP_CON12
#define MT6351_PMIC_JUST_PWRKEY_RST_MASK 0x1
#define MT6351_PMIC_JUST_PWRKEY_RST_SHIFT 14
#define MT6351_PMIC_DA_QI_OSC_EN_ADDR MT6351_STRUP_CON12
#define MT6351_PMIC_DA_QI_OSC_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_OSC_EN_SHIFT 15
#define MT6351_PMIC_STRUP_EXT_PMIC_EN_ADDR MT6351_STRUP_CON13
#define MT6351_PMIC_STRUP_EXT_PMIC_EN_MASK 0x1
#define MT6351_PMIC_STRUP_EXT_PMIC_EN_SHIFT 0
#define MT6351_PMIC_STRUP_EXT_PMIC_SEL_ADDR MT6351_STRUP_CON13
#define MT6351_PMIC_STRUP_EXT_PMIC_SEL_MASK 0x1
#define MT6351_PMIC_STRUP_EXT_PMIC_SEL_SHIFT 1
#define MT6351_PMIC_STRUP_CON8_RSV0_ADDR MT6351_STRUP_CON13
#define MT6351_PMIC_STRUP_CON8_RSV0_MASK 0x7F
#define MT6351_PMIC_STRUP_CON8_RSV0_SHIFT 8
#define MT6351_PMIC_DA_QI_EXT_PMIC_EN_ADDR MT6351_STRUP_CON13
#define MT6351_PMIC_DA_QI_EXT_PMIC_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_EXT_PMIC_EN_SHIFT 15
#define MT6351_PMIC_STRUP_AUXADC_START_SW_ADDR MT6351_STRUP_CON14
#define MT6351_PMIC_STRUP_AUXADC_START_SW_MASK 0x1
#define MT6351_PMIC_STRUP_AUXADC_START_SW_SHIFT 4
#define MT6351_PMIC_STRUP_AUXADC_RSTB_SW_ADDR MT6351_STRUP_CON14
#define MT6351_PMIC_STRUP_AUXADC_RSTB_SW_MASK 0x1
#define MT6351_PMIC_STRUP_AUXADC_RSTB_SW_SHIFT 5
#define MT6351_PMIC_STRUP_AUXADC_START_SEL_ADDR MT6351_STRUP_CON14
#define MT6351_PMIC_STRUP_AUXADC_START_SEL_MASK 0x1
#define MT6351_PMIC_STRUP_AUXADC_START_SEL_SHIFT 6
#define MT6351_PMIC_STRUP_AUXADC_RSTB_SEL_ADDR MT6351_STRUP_CON14
#define MT6351_PMIC_STRUP_AUXADC_RSTB_SEL_MASK 0x1
#define MT6351_PMIC_STRUP_AUXADC_RSTB_SEL_SHIFT 7
#define MT6351_PMIC_STRUP_PWROFF_SEQ_EN_ADDR MT6351_STRUP_CON15
#define MT6351_PMIC_STRUP_PWROFF_SEQ_EN_MASK 0x1
#define MT6351_PMIC_STRUP_PWROFF_SEQ_EN_SHIFT 0
#define MT6351_PMIC_STRUP_PWROFF_PREOFF_EN_ADDR MT6351_STRUP_CON15
#define MT6351_PMIC_STRUP_PWROFF_PREOFF_EN_MASK 0x1
#define MT6351_PMIC_STRUP_PWROFF_PREOFF_EN_SHIFT 1
#define MT6351_PMIC_STRUP_PP_EN_ADDR MT6351_STRUP_CON16
#define MT6351_PMIC_STRUP_PP_EN_MASK 0x1
#define MT6351_PMIC_STRUP_PP_EN_SHIFT 0
#define MT6351_PMIC_STRUP_PP_EN_SEL_ADDR MT6351_STRUP_CON16
#define MT6351_PMIC_STRUP_PP_EN_SEL_MASK 0x1
#define MT6351_PMIC_STRUP_PP_EN_SEL_SHIFT 1
#define MT6351_PMIC_STRUP_DIG0_RSV0_ADDR MT6351_STRUP_CON16
#define MT6351_PMIC_STRUP_DIG0_RSV0_MASK 0xF
#define MT6351_PMIC_STRUP_DIG0_RSV0_SHIFT 2
#define MT6351_PMIC_STRUP_DIG1_RSV0_ADDR MT6351_STRUP_CON16
#define MT6351_PMIC_STRUP_DIG1_RSV0_MASK 0x1F
#define MT6351_PMIC_STRUP_DIG1_RSV0_SHIFT 6
#define MT6351_PMIC_RG_RSV_SWREG_ADDR MT6351_STRUP_CON17
#define MT6351_PMIC_RG_RSV_SWREG_MASK 0xFFFF
#define MT6351_PMIC_RG_RSV_SWREG_SHIFT 0
#define MT6351_PMIC_STRUP_PP_EN_PWROFF_CNT_ADDR MT6351_STRUP_CON18
#define MT6351_PMIC_STRUP_PP_EN_PWROFF_CNT_MASK 0x3FF
#define MT6351_PMIC_STRUP_PP_EN_PWROFF_CNT_SHIFT 0
#define MT6351_PMIC_STRUP_UVLO_U1U2_SEL_ADDR MT6351_STRUP_CON19
#define MT6351_PMIC_STRUP_UVLO_U1U2_SEL_MASK 0x1
#define MT6351_PMIC_STRUP_UVLO_U1U2_SEL_SHIFT 0
#define MT6351_PMIC_STRUP_UVLO_U1U2_SEL_SWCTRL_ADDR MT6351_STRUP_CON19
#define MT6351_PMIC_STRUP_UVLO_U1U2_SEL_SWCTRL_MASK 0x1
#define MT6351_PMIC_STRUP_UVLO_U1U2_SEL_SWCTRL_SHIFT 1
#define MT6351_PMIC_STRUP_AUXADC_RPCNT_MAX_ADDR MT6351_STRUP_CON20
#define MT6351_PMIC_STRUP_AUXADC_RPCNT_MAX_MASK 0x7F
#define MT6351_PMIC_STRUP_AUXADC_RPCNT_MAX_SHIFT 0
#define MT6351_PMIC_RG_STRUP_THR_OVER_110_CLR_ADDR MT6351_STRUP_CON21
#define MT6351_PMIC_RG_STRUP_THR_OVER_110_CLR_MASK 0x1
#define MT6351_PMIC_RG_STRUP_THR_OVER_110_CLR_SHIFT 0
#define MT6351_PMIC_RG_STRUP_THR_110_CLR_ADDR MT6351_STRUP_CON21
#define MT6351_PMIC_RG_STRUP_THR_110_CLR_MASK 0x1
#define MT6351_PMIC_RG_STRUP_THR_110_CLR_SHIFT 1
#define MT6351_PMIC_RG_STRUP_THR_125_CLR_ADDR MT6351_STRUP_CON21
#define MT6351_PMIC_RG_STRUP_THR_125_CLR_MASK 0x1
#define MT6351_PMIC_RG_STRUP_THR_125_CLR_SHIFT 2
#define MT6351_PMIC_RG_STRUP_THR_CLR_ADDR MT6351_STRUP_CON21
#define MT6351_PMIC_RG_STRUP_THR_CLR_MASK 0x1
#define MT6351_PMIC_RG_STRUP_THR_CLR_SHIFT 3
#define MT6351_PMIC_RG_STRUP_THR_OVER_110_IRQ_EN_ADDR MT6351_STRUP_CON21
#define MT6351_PMIC_RG_STRUP_THR_OVER_110_IRQ_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_THR_OVER_110_IRQ_EN_SHIFT 8
#define MT6351_PMIC_RG_STRUP_THR_110_IRQ_EN_ADDR MT6351_STRUP_CON21
#define MT6351_PMIC_RG_STRUP_THR_110_IRQ_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_THR_110_IRQ_EN_SHIFT 9
#define MT6351_PMIC_RG_STRUP_THR_125_IRQ_EN_ADDR MT6351_STRUP_CON21
#define MT6351_PMIC_RG_STRUP_THR_125_IRQ_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_THR_125_IRQ_EN_SHIFT 10
#define MT6351_PMIC_RG_STRUP_THR_OVER_110_IRQ_STATUS_ADDR MT6351_STRUP_CON21
#define MT6351_PMIC_RG_STRUP_THR_OVER_110_IRQ_STATUS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_THR_OVER_110_IRQ_STATUS_SHIFT 12
#define MT6351_PMIC_RG_STRUP_THR_110_IRQ_STATUS_ADDR MT6351_STRUP_CON21
#define MT6351_PMIC_RG_STRUP_THR_110_IRQ_STATUS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_THR_110_IRQ_STATUS_SHIFT 13
#define MT6351_PMIC_RG_STRUP_THR_125_IRQ_STATUS_ADDR MT6351_STRUP_CON21
#define MT6351_PMIC_RG_STRUP_THR_125_IRQ_STATUS_MASK 0x1
#define MT6351_PMIC_RG_STRUP_THR_125_IRQ_STATUS_SHIFT 14
#define MT6351_PMIC_STRUP_PG_STATUS_CLR_ADDR MT6351_STRUP_CON21
#define MT6351_PMIC_STRUP_PG_STATUS_CLR_MASK 0x1
#define MT6351_PMIC_STRUP_PG_STATUS_CLR_SHIFT 15
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_SEL_ADDR MT6351_STRUP_CON22
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_SEL_MASK 0x3
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_SEL_SHIFT 0
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_TD_ADDR MT6351_STRUP_CON22
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_TD_MASK 0x3
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_TD_SHIFT 2
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_EN_ADDR MT6351_STRUP_CON22
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_EN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_EN_SHIFT 4
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL_ADDR MT6351_STRUP_CON22
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL_MASK 0x1
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL_SHIFT 5
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_PWRKY_CTRL_ADDR MT6351_STRUP_CON22
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_PWRKY_CTRL_MASK 0x1
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_PWRKY_CTRL_SHIFT 6
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_PWRBB_CTRL_ADDR MT6351_STRUP_CON22
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_PWRBB_CTRL_MASK 0x1
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_PWRBB_CTRL_SHIFT 7
#define MT6351_PMIC_RG_STRUP_ENVTEM_ADDR MT6351_STRUP_CON22
#define MT6351_PMIC_RG_STRUP_ENVTEM_MASK 0x1
#define MT6351_PMIC_RG_STRUP_ENVTEM_SHIFT 14
#define MT6351_PMIC_RG_STRUP_ENVTEM_CTRL_ADDR MT6351_STRUP_CON22
#define MT6351_PMIC_RG_STRUP_ENVTEM_CTRL_MASK 0x1
#define MT6351_PMIC_RG_STRUP_ENVTEM_CTRL_SHIFT 15
#define MT6351_PMIC_RG_STRUP_PWRKEY_COUNT_RESET_ADDR MT6351_STRUP_CON23
#define MT6351_PMIC_RG_STRUP_PWRKEY_COUNT_RESET_MASK 0x1
#define MT6351_PMIC_RG_STRUP_PWRKEY_COUNT_RESET_SHIFT 0
#define MT6351_PMIC_RGS_ANA_CHIP_ID_ADDR MT6351_STRUP_ANA_CON0
#define MT6351_PMIC_RGS_ANA_CHIP_ID_MASK 0x7
#define MT6351_PMIC_RGS_ANA_CHIP_ID_SHIFT 7
#define MT6351_PMIC_RG_PP_EN_DRVSEL_ADDR MT6351_STRUP_ANA_CON0
#define MT6351_PMIC_RG_PP_EN_DRVSEL_MASK 0x1
#define MT6351_PMIC_RG_PP_EN_DRVSEL_SHIFT 10
#define MT6351_PMIC_RG_FCHR_PU_EN_ADDR MT6351_STRUP_ANA_CON0
#define MT6351_PMIC_RG_FCHR_PU_EN_MASK 0x1
#define MT6351_PMIC_RG_FCHR_PU_EN_SHIFT 11
#define MT6351_PMIC_RG_PMU_RSV_ADDR MT6351_STRUP_ANA_CON0
#define MT6351_PMIC_RG_PMU_RSV_MASK 0xF
#define MT6351_PMIC_RG_PMU_RSV_SHIFT 12
#define MT6351_PMIC_RG_FCHR_KEYDET_EN_ADDR MT6351_STRUP_ANA_CON1
#define MT6351_PMIC_RG_FCHR_KEYDET_EN_MASK 0x1
#define MT6351_PMIC_RG_FCHR_KEYDET_EN_SHIFT 1
#define MT6351_PMIC_RG_EN_DRVSEL_ADDR MT6351_STRUP_ANA_CON1
#define MT6351_PMIC_RG_EN_DRVSEL_MASK 0x1
#define MT6351_PMIC_RG_EN_DRVSEL_SHIFT 2
#define MT6351_PMIC_RG_RST_DRVSEL_ADDR MT6351_STRUP_ANA_CON1
#define MT6351_PMIC_RG_RST_DRVSEL_MASK 0x1
#define MT6351_PMIC_RG_RST_DRVSEL_SHIFT 3
#define MT6351_PMIC_RG_STRUP_IREF_TRIM_ADDR MT6351_STRUP_ANA_CON1
#define MT6351_PMIC_RG_STRUP_IREF_TRIM_MASK 0x1F
#define MT6351_PMIC_RG_STRUP_IREF_TRIM_SHIFT 4
#define MT6351_PMIC_RG_VREF_BG_ADDR MT6351_STRUP_ANA_CON1
#define MT6351_PMIC_RG_VREF_BG_MASK 0x7
#define MT6351_PMIC_RG_VREF_BG_SHIFT 9
#define MT6351_PMIC_RG_THR_TMODE_ADDR MT6351_STRUP_ANA_CON1
#define MT6351_PMIC_RG_THR_TMODE_MASK 0x1
#define MT6351_PMIC_RG_THR_TMODE_SHIFT 12
#define MT6351_PMIC_RG_STRUP_THR_SEL_ADDR MT6351_STRUP_ANA_CON1
#define MT6351_PMIC_RG_STRUP_THR_SEL_MASK 0x3
#define MT6351_PMIC_RG_STRUP_THR_SEL_SHIFT 13
#define MT6351_PMIC_RG_THRDET_SEL_ADDR MT6351_STRUP_ANA_CON1
#define MT6351_PMIC_RG_THRDET_SEL_MASK 0x1
#define MT6351_PMIC_RG_THRDET_SEL_SHIFT 15
#define MT6351_PMIC_HWCID_ADDR MT6351_HWCID
#define MT6351_PMIC_HWCID_MASK 0xFFFF
#define MT6351_PMIC_HWCID_SHIFT 0
#define MT6351_PMIC_SWCID_ADDR MT6351_SWCID
#define MT6351_PMIC_SWCID_MASK 0xFFFF
#define MT6351_PMIC_SWCID_SHIFT 0
#define MT6351_PMIC_RG_SRCLKEN_IN0_EN_ADDR MT6351_TOP_CON
#define MT6351_PMIC_RG_SRCLKEN_IN0_EN_MASK 0x1
#define MT6351_PMIC_RG_SRCLKEN_IN0_EN_SHIFT 0
#define MT6351_PMIC_RG_SRCLKEN_IN1_EN_ADDR MT6351_TOP_CON
#define MT6351_PMIC_RG_SRCLKEN_IN1_EN_MASK 0x1
#define MT6351_PMIC_RG_SRCLKEN_IN1_EN_SHIFT 1
#define MT6351_PMIC_RG_OSC_SEL_ADDR MT6351_TOP_CON
#define MT6351_PMIC_RG_OSC_SEL_MASK 0x1
#define MT6351_PMIC_RG_OSC_SEL_SHIFT 2
#define MT6351_PMIC_RG_SRCLKEN_IN2_EN_ADDR MT6351_TOP_CON
#define MT6351_PMIC_RG_SRCLKEN_IN2_EN_MASK 0x1
#define MT6351_PMIC_RG_SRCLKEN_IN2_EN_SHIFT 3
#define MT6351_PMIC_RG_SRCLKEN_IN0_HW_MODE_ADDR MT6351_TOP_CON
#define MT6351_PMIC_RG_SRCLKEN_IN0_HW_MODE_MASK 0x1
#define MT6351_PMIC_RG_SRCLKEN_IN0_HW_MODE_SHIFT 4
#define MT6351_PMIC_RG_SRCLKEN_IN1_HW_MODE_ADDR MT6351_TOP_CON
#define MT6351_PMIC_RG_SRCLKEN_IN1_HW_MODE_MASK 0x1
#define MT6351_PMIC_RG_SRCLKEN_IN1_HW_MODE_SHIFT 5
#define MT6351_PMIC_RG_OSC_SEL_HW_MODE_ADDR MT6351_TOP_CON
#define MT6351_PMIC_RG_OSC_SEL_HW_MODE_MASK 0x1
#define MT6351_PMIC_RG_OSC_SEL_HW_MODE_SHIFT 6
#define MT6351_PMIC_RG_SRCLKEN_IN_SYNC_EN_ADDR MT6351_TOP_CON
#define MT6351_PMIC_RG_SRCLKEN_IN_SYNC_EN_MASK 0x1
#define MT6351_PMIC_RG_SRCLKEN_IN_SYNC_EN_SHIFT 8
#define MT6351_PMIC_RG_OSC_EN_AUTO_OFF_ADDR MT6351_TOP_CON
#define MT6351_PMIC_RG_OSC_EN_AUTO_OFF_MASK 0x1
#define MT6351_PMIC_RG_OSC_EN_AUTO_OFF_SHIFT 9
#define MT6351_PMIC_TEST_OUT_ADDR MT6351_TEST_OUT
#define MT6351_PMIC_TEST_OUT_MASK 0xFF
#define MT6351_PMIC_TEST_OUT_SHIFT 0
#define MT6351_PMIC_RG_MON_FLAG_SEL_ADDR MT6351_TEST_CON0
#define MT6351_PMIC_RG_MON_FLAG_SEL_MASK 0xFF
#define MT6351_PMIC_RG_MON_FLAG_SEL_SHIFT 0
#define MT6351_PMIC_RG_MON_GRP_SEL_ADDR MT6351_TEST_CON0
#define MT6351_PMIC_RG_MON_GRP_SEL_MASK 0x1F
#define MT6351_PMIC_RG_MON_GRP_SEL_SHIFT 8
#define MT6351_PMIC_RG_NANDTREE_MODE_ADDR MT6351_TEST_CON1
#define MT6351_PMIC_RG_NANDTREE_MODE_MASK 0x1
#define MT6351_PMIC_RG_NANDTREE_MODE_SHIFT 0
#define MT6351_PMIC_RG_TEST_AUXADC_ADDR MT6351_TEST_CON1
#define MT6351_PMIC_RG_TEST_AUXADC_MASK 0x1
#define MT6351_PMIC_RG_TEST_AUXADC_SHIFT 1
#define MT6351_PMIC_RG_EFUSE_MODE_ADDR MT6351_TEST_CON1
#define MT6351_PMIC_RG_EFUSE_MODE_MASK 0x1
#define MT6351_PMIC_RG_EFUSE_MODE_SHIFT 2
#define MT6351_PMIC_RG_TEST_STRUP_ADDR MT6351_TEST_CON1
#define MT6351_PMIC_RG_TEST_STRUP_MASK 0x1
#define MT6351_PMIC_RG_TEST_STRUP_SHIFT 3
#define MT6351_PMIC_TESTMODE_SW_ADDR MT6351_TESTMODE_SW
#define MT6351_PMIC_TESTMODE_SW_MASK 0x1
#define MT6351_PMIC_TESTMODE_SW_SHIFT 0
#define MT6351_PMIC_EN_STATUS_VLDO28_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VLDO28_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VLDO28_SHIFT 0
#define MT6351_PMIC_EN_STATUS_VIO28_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VIO28_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VIO28_SHIFT 1
#define MT6351_PMIC_EN_STATUS_VMCH_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VMCH_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VMCH_SHIFT 2
#define MT6351_PMIC_EN_STATUS_VMC_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VMC_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VMC_SHIFT 3
#define MT6351_PMIC_EN_STATUS_VEMC_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VEMC_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VEMC_SHIFT 4
#define MT6351_PMIC_EN_STATUS_VSIM2_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VSIM2_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VSIM2_SHIFT 5
#define MT6351_PMIC_EN_STATUS_VSIM1_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VSIM1_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VSIM1_SHIFT 6
#define MT6351_PMIC_EN_STATUS_VEFUSE_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VEFUSE_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VEFUSE_SHIFT 7
#define MT6351_PMIC_EN_STATUS_VUSB33_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VUSB33_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VUSB33_SHIFT 8
#define MT6351_PMIC_EN_STATUS_VCN33_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VCN33_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VCN33_SHIFT 9
#define MT6351_PMIC_EN_STATUS_VCAMA_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VCAMA_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VCAMA_SHIFT 10
#define MT6351_PMIC_EN_STATUS_VCN28_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VCN28_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VCN28_SHIFT 11
#define MT6351_PMIC_EN_STATUS_VTCXO24_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VTCXO24_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VTCXO24_SHIFT 12
#define MT6351_PMIC_EN_STATUS_VTCXO28_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VTCXO28_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VTCXO28_SHIFT 13
#define MT6351_PMIC_EN_STATUS_VA18_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VA18_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VA18_SHIFT 14
#define MT6351_PMIC_EN_STATUS_VRTC_ADDR MT6351_EN_STATUS1
#define MT6351_PMIC_EN_STATUS_VRTC_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VRTC_SHIFT 15
#define MT6351_PMIC_EN_STATUS_VBIF28_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VBIF28_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VBIF28_SHIFT 2
#define MT6351_PMIC_EN_STATUS_VGP3_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VGP3_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VGP3_SHIFT 3
#define MT6351_PMIC_EN_STATUS_VMIPI_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VMIPI_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VMIPI_SHIFT 4
#define MT6351_PMIC_EN_STATUS_VDRAM_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VDRAM_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VDRAM_SHIFT 5
#define MT6351_PMIC_EN_STATUS_VA10_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VA10_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VA10_SHIFT 6
#define MT6351_PMIC_EN_STATUS_VRF12_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VRF12_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VRF12_SHIFT 7
#define MT6351_PMIC_EN_STATUS_VXO22_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VXO22_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VXO22_SHIFT 8
#define MT6351_PMIC_EN_STATUS_VSRAM_PROC_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VSRAM_PROC_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VSRAM_PROC_SHIFT 9
#define MT6351_PMIC_EN_STATUS_VCAMIO_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VCAMIO_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VCAMIO_SHIFT 10
#define MT6351_PMIC_EN_STATUS_VCN18_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VCN18_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VCN18_SHIFT 11
#define MT6351_PMIC_EN_STATUS_VIO18_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VIO18_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VIO18_SHIFT 12
#define MT6351_PMIC_EN_STATUS_VRF18_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VRF18_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VRF18_SHIFT 13
#define MT6351_PMIC_EN_STATUS_VCAMD_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VCAMD_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VCAMD_SHIFT 14
#define MT6351_PMIC_EN_STATUS_VIBR_ADDR MT6351_EN_STATUS2
#define MT6351_PMIC_EN_STATUS_VIBR_MASK 0x1
#define MT6351_PMIC_EN_STATUS_VIBR_SHIFT 15
#define MT6351_PMIC_OC_STATUS_VIBR_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VIBR_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VIBR_SHIFT 0
#define MT6351_PMIC_OC_STATUS_VLDO28_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VLDO28_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VLDO28_SHIFT 1
#define MT6351_PMIC_OC_STATUS_VIO28_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VIO28_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VIO28_SHIFT 2
#define MT6351_PMIC_OC_STATUS_VMC_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VMC_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VMC_SHIFT 3
#define MT6351_PMIC_OC_STATUS_VMCH_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VMCH_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VMCH_SHIFT 4
#define MT6351_PMIC_OC_STATUS_VEMC_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VEMC_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VEMC_SHIFT 5
#define MT6351_PMIC_OC_STATUS_VSIM2_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VSIM2_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VSIM2_SHIFT 6
#define MT6351_PMIC_OC_STATUS_VSIM1_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VSIM1_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VSIM1_SHIFT 7
#define MT6351_PMIC_OC_STATUS_VEFUSE_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VEFUSE_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VEFUSE_SHIFT 8
#define MT6351_PMIC_OC_STATUS_VUSB33_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VUSB33_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VUSB33_SHIFT 9
#define MT6351_PMIC_OC_STATUS_VCN33_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VCN33_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VCN33_SHIFT 10
#define MT6351_PMIC_OC_STATUS_VCAMA_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VCAMA_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VCAMA_SHIFT 11
#define MT6351_PMIC_OC_STATUS_VCN28_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VCN28_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VCN28_SHIFT 12
#define MT6351_PMIC_OC_STATUS_VTCXO24_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VTCXO24_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VTCXO24_SHIFT 13
#define MT6351_PMIC_OC_STATUS_VTCXO28_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VTCXO28_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VTCXO28_SHIFT 14
#define MT6351_PMIC_OC_STATUS_VA18_ADDR MT6351_OCSTATUS1
#define MT6351_PMIC_OC_STATUS_VA18_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VA18_SHIFT 15
#define MT6351_PMIC_OC_STATUS_VBIF28_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VBIF28_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VBIF28_SHIFT 3
#define MT6351_PMIC_OC_STATUS_VGP3_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VGP3_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VGP3_SHIFT 4
#define MT6351_PMIC_OC_STATUS_VMIPI_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VMIPI_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VMIPI_SHIFT 5
#define MT6351_PMIC_OC_STATUS_VDRAM_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VDRAM_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VDRAM_SHIFT 6
#define MT6351_PMIC_OC_STATUS_VA10_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VA10_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VA10_SHIFT 7
#define MT6351_PMIC_OC_STATUS_VRF12_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VRF12_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VRF12_SHIFT 8
#define MT6351_PMIC_OC_STATUS_VXO22_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VXO22_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VXO22_SHIFT 9
#define MT6351_PMIC_OC_STATUS_VSRAM_PROC_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VSRAM_PROC_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VSRAM_PROC_SHIFT 10
#define MT6351_PMIC_OC_STATUS_VCAMIO_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VCAMIO_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VCAMIO_SHIFT 11
#define MT6351_PMIC_OC_STATUS_VCN18_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VCN18_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VCN18_SHIFT 12
#define MT6351_PMIC_OC_STATUS_VIO18_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VIO18_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VIO18_SHIFT 13
#define MT6351_PMIC_OC_STATUS_VRF18_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VRF18_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VRF18_SHIFT 14
#define MT6351_PMIC_OC_STATUS_VCAMD_ADDR MT6351_OCSTATUS2
#define MT6351_PMIC_OC_STATUS_VCAMD_MASK 0x1
#define MT6351_PMIC_OC_STATUS_VCAMD_SHIFT 15
#define MT6351_PMIC_VA18_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VA18_PG_DEB_MASK 0x1
#define MT6351_PMIC_VA18_PG_DEB_SHIFT 0
#define MT6351_PMIC_VCORE_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VCORE_PG_DEB_MASK 0x1
#define MT6351_PMIC_VCORE_PG_DEB_SHIFT 1
#define MT6351_PMIC_VMD1_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VMD1_PG_DEB_MASK 0x1
#define MT6351_PMIC_VMD1_PG_DEB_SHIFT 2
#define MT6351_PMIC_VMODEM_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VMODEM_PG_DEB_MASK 0x1
#define MT6351_PMIC_VMODEM_PG_DEB_SHIFT 3
#define MT6351_PMIC_VS2_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VS2_PG_DEB_MASK 0x1
#define MT6351_PMIC_VS2_PG_DEB_SHIFT 4
#define MT6351_PMIC_VIO18_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VIO18_PG_DEB_MASK 0x1
#define MT6351_PMIC_VIO18_PG_DEB_SHIFT 5
#define MT6351_PMIC_VEMC_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VEMC_PG_DEB_MASK 0x1
#define MT6351_PMIC_VEMC_PG_DEB_SHIFT 6
#define MT6351_PMIC_VA10_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VA10_PG_DEB_MASK 0x1
#define MT6351_PMIC_VA10_PG_DEB_SHIFT 7
#define MT6351_PMIC_VIO28_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VIO28_PG_DEB_MASK 0x1
#define MT6351_PMIC_VIO28_PG_DEB_SHIFT 8
#define MT6351_PMIC_VSRAM_MD_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VSRAM_MD_PG_DEB_MASK 0x1
#define MT6351_PMIC_VSRAM_MD_PG_DEB_SHIFT 9
#define MT6351_PMIC_VSRAM_PROC_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VSRAM_PROC_PG_DEB_MASK 0x1
#define MT6351_PMIC_VSRAM_PROC_PG_DEB_SHIFT 10
#define MT6351_PMIC_VDRAM_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VDRAM_PG_DEB_MASK 0x1
#define MT6351_PMIC_VDRAM_PG_DEB_SHIFT 11
#define MT6351_PMIC_VGPU_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VGPU_PG_DEB_MASK 0x1
#define MT6351_PMIC_VGPU_PG_DEB_SHIFT 12
#define MT6351_PMIC_VUSB33_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VUSB33_PG_DEB_MASK 0x1
#define MT6351_PMIC_VUSB33_PG_DEB_SHIFT 13
#define MT6351_PMIC_VXO22_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VXO22_PG_DEB_MASK 0x1
#define MT6351_PMIC_VXO22_PG_DEB_SHIFT 14
#define MT6351_PMIC_VTCXO24_PG_DEB_ADDR MT6351_PGDEBSTATUS0
#define MT6351_PMIC_VTCXO24_PG_DEB_MASK 0x1
#define MT6351_PMIC_VTCXO24_PG_DEB_SHIFT 15
#define MT6351_PMIC_VS1_PG_DEB_ADDR MT6351_PGDEBSTATU1
#define MT6351_PMIC_VS1_PG_DEB_MASK 0x1
#define MT6351_PMIC_VS1_PG_DEB_SHIFT 15
#define MT6351_PMIC_STRUP_VA18_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VA18_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VA18_PG_STATUS_SHIFT 0
#define MT6351_PMIC_STRUP_VCORE_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VCORE_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VCORE_PG_STATUS_SHIFT 1
#define MT6351_PMIC_STRUP_VMD1_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VMD1_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VMD1_PG_STATUS_SHIFT 2
#define MT6351_PMIC_STRUP_VMODEM_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VMODEM_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VMODEM_PG_STATUS_SHIFT 3
#define MT6351_PMIC_STRUP_VS2_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VS2_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VS2_PG_STATUS_SHIFT 4
#define MT6351_PMIC_STRUP_VIO18_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VIO18_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VIO18_PG_STATUS_SHIFT 5
#define MT6351_PMIC_STRUP_VEMC_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VEMC_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VEMC_PG_STATUS_SHIFT 6
#define MT6351_PMIC_STRUP_VA10_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VA10_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VA10_PG_STATUS_SHIFT 7
#define MT6351_PMIC_STRUP_VIO28_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VIO28_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VIO28_PG_STATUS_SHIFT 8
#define MT6351_PMIC_STRUP_VSRAM_MD_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VSRAM_MD_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VSRAM_MD_PG_STATUS_SHIFT 9
#define MT6351_PMIC_STRUP_VSRAM_PROC_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VSRAM_PROC_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VSRAM_PROC_PG_STATUS_SHIFT 10
#define MT6351_PMIC_STRUP_VDRAM_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VDRAM_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VDRAM_PG_STATUS_SHIFT 11
#define MT6351_PMIC_STRUP_VGPU_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VGPU_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VGPU_PG_STATUS_SHIFT 12
#define MT6351_PMIC_STRUP_VUSB33_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VUSB33_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VUSB33_PG_STATUS_SHIFT 13
#define MT6351_PMIC_STRUP_VXO22_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VXO22_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VXO22_PG_STATUS_SHIFT 14
#define MT6351_PMIC_STRUP_VTCXO24_PG_STATUS_ADDR MT6351_PGSTATUS0
#define MT6351_PMIC_STRUP_VTCXO24_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VTCXO24_PG_STATUS_SHIFT 15
#define MT6351_PMIC_STRUP_VS1_PG_STATUS_ADDR MT6351_PGSTATUS1
#define MT6351_PMIC_STRUP_VS1_PG_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_VS1_PG_STATUS_SHIFT 15
#define MT6351_PMIC_THERMAL_BACK110_ADDR MT6351_THERMALSTATUS
#define MT6351_PMIC_THERMAL_BACK110_MASK 0x1
#define MT6351_PMIC_THERMAL_BACK110_SHIFT 12
#define MT6351_PMIC_THERMAL_OVER110_ADDR MT6351_THERMALSTATUS
#define MT6351_PMIC_THERMAL_OVER110_MASK 0x1
#define MT6351_PMIC_THERMAL_OVER110_SHIFT 13
#define MT6351_PMIC_THERMAL_OVER125_ADDR MT6351_THERMALSTATUS
#define MT6351_PMIC_THERMAL_OVER125_MASK 0x1
#define MT6351_PMIC_THERMAL_OVER125_SHIFT 14
#define MT6351_PMIC_STRUP_THERMAL_STATUS_ADDR MT6351_THERMALSTATUS
#define MT6351_PMIC_STRUP_THERMAL_STATUS_MASK 0x1
#define MT6351_PMIC_STRUP_THERMAL_STATUS_SHIFT 15
#define MT6351_PMIC_PMU_TEST_MODE_SCAN_ADDR MT6351_TOPSTATUS
#define MT6351_PMIC_PMU_TEST_MODE_SCAN_MASK 0x1
#define MT6351_PMIC_PMU_TEST_MODE_SCAN_SHIFT 0
#define MT6351_PMIC_PWRKEY_DEB_ADDR MT6351_TOPSTATUS
#define MT6351_PMIC_PWRKEY_DEB_MASK 0x1
#define MT6351_PMIC_PWRKEY_DEB_SHIFT 1
#define MT6351_PMIC_HOMEKEY_DEB_ADDR MT6351_TOPSTATUS
#define MT6351_PMIC_HOMEKEY_DEB_MASK 0x1
#define MT6351_PMIC_HOMEKEY_DEB_SHIFT 2
#define MT6351_PMIC_RTC_XTAL_DET_DONE_ADDR MT6351_TOPSTATUS
#define MT6351_PMIC_RTC_XTAL_DET_DONE_MASK 0x1
#define MT6351_PMIC_RTC_XTAL_DET_DONE_SHIFT 6
#define MT6351_PMIC_XOSC32_ENB_DET_ADDR MT6351_TOPSTATUS
#define MT6351_PMIC_XOSC32_ENB_DET_MASK 0x1
#define MT6351_PMIC_XOSC32_ENB_DET_SHIFT 7
#define MT6351_PMIC_RTC_XTAL_DET_RSV_ADDR MT6351_TOPSTATUS
#define MT6351_PMIC_RTC_XTAL_DET_RSV_MASK 0xF
#define MT6351_PMIC_RTC_XTAL_DET_RSV_SHIFT 8
#define MT6351_PMIC_RG_PMU_TDSEL_ADDR MT6351_TDSEL_CON
#define MT6351_PMIC_RG_PMU_TDSEL_MASK 0x1
#define MT6351_PMIC_RG_PMU_TDSEL_SHIFT 0
#define MT6351_PMIC_RG_SPI_TDSEL_ADDR MT6351_TDSEL_CON
#define MT6351_PMIC_RG_SPI_TDSEL_MASK 0x1
#define MT6351_PMIC_RG_SPI_TDSEL_SHIFT 1
#define MT6351_PMIC_RG_AUD_TDSEL_ADDR MT6351_TDSEL_CON
#define MT6351_PMIC_RG_AUD_TDSEL_MASK 0x1
#define MT6351_PMIC_RG_AUD_TDSEL_SHIFT 2
#define MT6351_PMIC_RG_E32CAL_TDSEL_ADDR MT6351_TDSEL_CON
#define MT6351_PMIC_RG_E32CAL_TDSEL_MASK 0x1
#define MT6351_PMIC_RG_E32CAL_TDSEL_SHIFT 3
#define MT6351_PMIC_RG_PMU_RDSEL_ADDR MT6351_RDSEL_CON
#define MT6351_PMIC_RG_PMU_RDSEL_MASK 0x1
#define MT6351_PMIC_RG_PMU_RDSEL_SHIFT 0
#define MT6351_PMIC_RG_SPI_RDSEL_ADDR MT6351_RDSEL_CON
#define MT6351_PMIC_RG_SPI_RDSEL_MASK 0x1
#define MT6351_PMIC_RG_SPI_RDSEL_SHIFT 1
#define MT6351_PMIC_RG_AUD_RDSEL_ADDR MT6351_RDSEL_CON
#define MT6351_PMIC_RG_AUD_RDSEL_MASK 0x1
#define MT6351_PMIC_RG_AUD_RDSEL_SHIFT 2
#define MT6351_PMIC_RG_E32CAL_RDSEL_ADDR MT6351_RDSEL_CON
#define MT6351_PMIC_RG_E32CAL_RDSEL_MASK 0x1
#define MT6351_PMIC_RG_E32CAL_RDSEL_SHIFT 3
#define MT6351_PMIC_RG_SMT_WDTRSTB_IN_ADDR MT6351_SMT_CON0
#define MT6351_PMIC_RG_SMT_WDTRSTB_IN_MASK 0x1
#define MT6351_PMIC_RG_SMT_WDTRSTB_IN_SHIFT 0
#define MT6351_PMIC_RG_SMT_HOMEKEY_ADDR MT6351_SMT_CON0
#define MT6351_PMIC_RG_SMT_HOMEKEY_MASK 0x1
#define MT6351_PMIC_RG_SMT_HOMEKEY_SHIFT 1
#define MT6351_PMIC_RG_SMT_SRCLKEN_IN0_ADDR MT6351_SMT_CON0
#define MT6351_PMIC_RG_SMT_SRCLKEN_IN0_MASK 0x1
#define MT6351_PMIC_RG_SMT_SRCLKEN_IN0_SHIFT 2
#define MT6351_PMIC_RG_SMT_SRCLKEN_IN1_ADDR MT6351_SMT_CON0
#define MT6351_PMIC_RG_SMT_SRCLKEN_IN1_MASK 0x1
#define MT6351_PMIC_RG_SMT_SRCLKEN_IN1_SHIFT 3
#define MT6351_PMIC_RG_SMT_RTC_32K1V8_0_ADDR MT6351_SMT_CON0
#define MT6351_PMIC_RG_SMT_RTC_32K1V8_0_MASK 0x1
#define MT6351_PMIC_RG_SMT_RTC_32K1V8_0_SHIFT 4
#define MT6351_PMIC_RG_SMT_RTC_32K1V8_1_ADDR MT6351_SMT_CON0
#define MT6351_PMIC_RG_SMT_RTC_32K1V8_1_MASK 0x1
#define MT6351_PMIC_RG_SMT_RTC_32K1V8_1_SHIFT 5
#define MT6351_PMIC_RG_SMT_SPI_CLK_ADDR MT6351_SMT_CON1
#define MT6351_PMIC_RG_SMT_SPI_CLK_MASK 0x1
#define MT6351_PMIC_RG_SMT_SPI_CLK_SHIFT 0
#define MT6351_PMIC_RG_SMT_SPI_CSN_ADDR MT6351_SMT_CON1
#define MT6351_PMIC_RG_SMT_SPI_CSN_MASK 0x1
#define MT6351_PMIC_RG_SMT_SPI_CSN_SHIFT 1
#define MT6351_PMIC_RG_SMT_SPI_MOSI_ADDR MT6351_SMT_CON1
#define MT6351_PMIC_RG_SMT_SPI_MOSI_MASK 0x1
#define MT6351_PMIC_RG_SMT_SPI_MOSI_SHIFT 2
#define MT6351_PMIC_RG_SMT_SPI_MISO_ADDR MT6351_SMT_CON1
#define MT6351_PMIC_RG_SMT_SPI_MISO_MASK 0x1
#define MT6351_PMIC_RG_SMT_SPI_MISO_SHIFT 3
#define MT6351_PMIC_RG_SMT_AUD_CLK_ADDR MT6351_SMT_CON2
#define MT6351_PMIC_RG_SMT_AUD_CLK_MASK 0x1
#define MT6351_PMIC_RG_SMT_AUD_CLK_SHIFT 0
#define MT6351_PMIC_RG_SMT_AUD_DAT_MOSI_ADDR MT6351_SMT_CON2
#define MT6351_PMIC_RG_SMT_AUD_DAT_MOSI_MASK 0x1
#define MT6351_PMIC_RG_SMT_AUD_DAT_MOSI_SHIFT 1
#define MT6351_PMIC_RG_SMT_AUD_DAT_MISO_ADDR MT6351_SMT_CON2
#define MT6351_PMIC_RG_SMT_AUD_DAT_MISO_MASK 0x1
#define MT6351_PMIC_RG_SMT_AUD_DAT_MISO_SHIFT 2
#define MT6351_PMIC_RG_SMT_ANC_DAT_MOSI_ADDR MT6351_SMT_CON2
#define MT6351_PMIC_RG_SMT_ANC_DAT_MOSI_MASK 0x1
#define MT6351_PMIC_RG_SMT_ANC_DAT_MOSI_SHIFT 3
#define MT6351_PMIC_RG_SMT_VOW_CLK_MISO_ADDR MT6351_SMT_CON2
#define MT6351_PMIC_RG_SMT_VOW_CLK_MISO_MASK 0x1
#define MT6351_PMIC_RG_SMT_VOW_CLK_MISO_SHIFT 4
#define MT6351_PMIC_RG_SMT_ENBB_ADDR MT6351_SMT_CON2
#define MT6351_PMIC_RG_SMT_ENBB_MASK 0x1
#define MT6351_PMIC_RG_SMT_ENBB_SHIFT 5
#define MT6351_PMIC_RG_SMT_XOSC_EN_ADDR MT6351_SMT_CON2
#define MT6351_PMIC_RG_SMT_XOSC_EN_MASK 0x1
#define MT6351_PMIC_RG_SMT_XOSC_EN_SHIFT 6
#define MT6351_PMIC_RG_OCTL_SRCLKEN_IN0_ADDR MT6351_DRV_CON0
#define MT6351_PMIC_RG_OCTL_SRCLKEN_IN0_MASK 0xF
#define MT6351_PMIC_RG_OCTL_SRCLKEN_IN0_SHIFT 0
#define MT6351_PMIC_RG_OCTL_SRCLKEN_IN1_ADDR MT6351_DRV_CON0
#define MT6351_PMIC_RG_OCTL_SRCLKEN_IN1_MASK 0xF
#define MT6351_PMIC_RG_OCTL_SRCLKEN_IN1_SHIFT 4
#define MT6351_PMIC_RG_OCTL_RTC_32K1V8_0_ADDR MT6351_DRV_CON0
#define MT6351_PMIC_RG_OCTL_RTC_32K1V8_0_MASK 0xF
#define MT6351_PMIC_RG_OCTL_RTC_32K1V8_0_SHIFT 8
#define MT6351_PMIC_RG_OCTL_RTC_32K1V8_1_ADDR MT6351_DRV_CON0
#define MT6351_PMIC_RG_OCTL_RTC_32K1V8_1_MASK 0xF
#define MT6351_PMIC_RG_OCTL_RTC_32K1V8_1_SHIFT 12
#define MT6351_PMIC_RG_OCTL_SPI_CLK_ADDR MT6351_DRV_CON1
#define MT6351_PMIC_RG_OCTL_SPI_CLK_MASK 0xF
#define MT6351_PMIC_RG_OCTL_SPI_CLK_SHIFT 0
#define MT6351_PMIC_RG_OCTL_SPI_CSN_ADDR MT6351_DRV_CON1
#define MT6351_PMIC_RG_OCTL_SPI_CSN_MASK 0xF
#define MT6351_PMIC_RG_OCTL_SPI_CSN_SHIFT 4
#define MT6351_PMIC_RG_OCTL_SPI_MOSI_ADDR MT6351_DRV_CON1
#define MT6351_PMIC_RG_OCTL_SPI_MOSI_MASK 0xF
#define MT6351_PMIC_RG_OCTL_SPI_MOSI_SHIFT 8
#define MT6351_PMIC_RG_OCTL_SPI_MISO_ADDR MT6351_DRV_CON1
#define MT6351_PMIC_RG_OCTL_SPI_MISO_MASK 0xF
#define MT6351_PMIC_RG_OCTL_SPI_MISO_SHIFT 12
#define MT6351_PMIC_RG_OCTL_AUD_DAT_MOSI_ADDR MT6351_DRV_CON2
#define MT6351_PMIC_RG_OCTL_AUD_DAT_MOSI_MASK 0xF
#define MT6351_PMIC_RG_OCTL_AUD_DAT_MOSI_SHIFT 0
#define MT6351_PMIC_RG_OCTL_AUD_DAT_MISO_ADDR MT6351_DRV_CON2
#define MT6351_PMIC_RG_OCTL_AUD_DAT_MISO_MASK 0xF
#define MT6351_PMIC_RG_OCTL_AUD_DAT_MISO_SHIFT 4
#define MT6351_PMIC_RG_OCTL_AUD_CLK_ADDR MT6351_DRV_CON2
#define MT6351_PMIC_RG_OCTL_AUD_CLK_MASK 0xF
#define MT6351_PMIC_RG_OCTL_AUD_CLK_SHIFT 8
#define MT6351_PMIC_RG_OCTL_ANC_DAT_MOSI_ADDR MT6351_DRV_CON2
#define MT6351_PMIC_RG_OCTL_ANC_DAT_MOSI_MASK 0xF
#define MT6351_PMIC_RG_OCTL_ANC_DAT_MOSI_SHIFT 12
#define MT6351_PMIC_RG_OCTL_HOMEKEY_ADDR MT6351_DRV_CON3
#define MT6351_PMIC_RG_OCTL_HOMEKEY_MASK 0xF
#define MT6351_PMIC_RG_OCTL_HOMEKEY_SHIFT 0
#define MT6351_PMIC_RG_OCTL_ENBB_ADDR MT6351_DRV_CON3
#define MT6351_PMIC_RG_OCTL_ENBB_MASK 0xF
#define MT6351_PMIC_RG_OCTL_ENBB_SHIFT 4
#define MT6351_PMIC_RG_OCTL_XOSC_EN_ADDR MT6351_DRV_CON3
#define MT6351_PMIC_RG_OCTL_XOSC_EN_MASK 0xF
#define MT6351_PMIC_RG_OCTL_XOSC_EN_SHIFT 8
#define MT6351_PMIC_RG_OCTL_VOW_CLK_MISO_ADDR MT6351_DRV_CON3
#define MT6351_PMIC_RG_OCTL_VOW_CLK_MISO_MASK 0xF
#define MT6351_PMIC_RG_OCTL_VOW_CLK_MISO_SHIFT 12
#define MT6351_PMIC_TOP_STATUS_ADDR MT6351_TOP_STATUS
#define MT6351_PMIC_TOP_STATUS_MASK 0xF
#define MT6351_PMIC_TOP_STATUS_SHIFT 0
#define MT6351_PMIC_TOP_STATUS_SET_ADDR MT6351_TOP_STATUS_SET
#define MT6351_PMIC_TOP_STATUS_SET_MASK 0x3
#define MT6351_PMIC_TOP_STATUS_SET_SHIFT 0
#define MT6351_PMIC_TOP_STATUS_CLR_ADDR MT6351_TOP_STATUS_CLR
#define MT6351_PMIC_TOP_STATUS_CLR_MASK 0x3
#define MT6351_PMIC_TOP_STATUS_CLR_SHIFT 0
#define MT6351_PMIC_RG_G_SMPS_PD_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_G_SMPS_PD_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_G_SMPS_PD_CK_PDN_SHIFT 0
#define MT6351_PMIC_RG_G_SMPS_AUD_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_G_SMPS_AUD_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_G_SMPS_AUD_CK_PDN_SHIFT 1
#define MT6351_PMIC_RG_G_DRV_2M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_G_DRV_2M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_G_DRV_2M_CK_PDN_SHIFT 2
#define MT6351_PMIC_RG_DRV_32K_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_DRV_32K_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_DRV_32K_CK_PDN_SHIFT 3
#define MT6351_PMIC_RG_DRV_ISINK0_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_DRV_ISINK0_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK0_CK_PDN_SHIFT 4
#define MT6351_PMIC_RG_DRV_ISINK1_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_DRV_ISINK1_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK1_CK_PDN_SHIFT 5
#define MT6351_PMIC_RG_DRV_ISINK2_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_DRV_ISINK2_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK2_CK_PDN_SHIFT 6
#define MT6351_PMIC_RG_DRV_ISINK3_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_DRV_ISINK3_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK3_CK_PDN_SHIFT 7
#define MT6351_PMIC_RG_AUXADC_1M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_AUXADC_1M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_1M_CK_PDN_SHIFT 8
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_PDN_SHIFT 9
#define MT6351_PMIC_RG_AUXADC_RNG_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_AUXADC_RNG_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_RNG_CK_PDN_SHIFT 10
#define MT6351_PMIC_RG_AUXADC_26M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_AUXADC_26M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_26M_CK_PDN_SHIFT 11
#define MT6351_PMIC_RG_AUDNCP_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_AUDNCP_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_AUDNCP_CK_PDN_SHIFT 12
#define MT6351_PMIC_RG_AUDIF_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_AUDIF_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_AUDIF_CK_PDN_SHIFT 13
#define MT6351_PMIC_RG_AUD_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_AUD_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_AUD_CK_PDN_SHIFT 14
#define MT6351_PMIC_RG_ZCD13M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON0
#define MT6351_PMIC_RG_ZCD13M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_ZCD13M_CK_PDN_SHIFT 15
#define MT6351_PMIC_TOP_CKPDN_CON0_SET_ADDR MT6351_TOP_CKPDN_CON0_SET
#define MT6351_PMIC_TOP_CKPDN_CON0_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON0_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKPDN_CON0_CLR_ADDR MT6351_TOP_CKPDN_CON0_CLR
#define MT6351_PMIC_TOP_CKPDN_CON0_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON0_CLR_SHIFT 0
#define MT6351_PMIC_RG_RTC_32K_CK_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_RTC_32K_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_RTC_32K_CK_PDN_SHIFT 0
#define MT6351_PMIC_RG_RTC_MCLK_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_RTC_MCLK_PDN_MASK 0x1
#define MT6351_PMIC_RG_RTC_MCLK_PDN_SHIFT 1
#define MT6351_PMIC_RG_RTC_75K_CK_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_RTC_75K_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_RTC_75K_CK_PDN_SHIFT 2
#define MT6351_PMIC_RG_RTCDET_CK_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_RTCDET_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_RTCDET_CK_PDN_SHIFT 3
#define MT6351_PMIC_RG_RTC32K_1V8_0_O_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_RTC32K_1V8_0_O_PDN_MASK 0x1
#define MT6351_PMIC_RG_RTC32K_1V8_0_O_PDN_SHIFT 4
#define MT6351_PMIC_RG_RTC32K_1V8_1_O_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_RTC32K_1V8_1_O_PDN_MASK 0x1
#define MT6351_PMIC_RG_RTC32K_1V8_1_O_PDN_SHIFT 5
#define MT6351_PMIC_RG_RTC_2SEC_OFF_DET_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_RTC_2SEC_OFF_DET_PDN_MASK 0x1
#define MT6351_PMIC_RG_RTC_2SEC_OFF_DET_PDN_SHIFT 6
#define MT6351_PMIC_RG_FQMTR_CK_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_FQMTR_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_FQMTR_CK_PDN_SHIFT 7
#define MT6351_PMIC_RG_STB_1M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_STB_1M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_STB_1M_CK_PDN_SHIFT 8
#define MT6351_PMIC_RG_BUCK_1M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_BUCK_1M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_1M_CK_PDN_SHIFT 9
#define MT6351_PMIC_RG_AUXADC_CK_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_AUXADC_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_CK_PDN_SHIFT 10
#define MT6351_PMIC_RG_PWMOC_6M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_PWMOC_6M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_PWMOC_6M_CK_PDN_SHIFT 11
#define MT6351_PMIC_RG_PWMOC_AUD_6M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON1
#define MT6351_PMIC_RG_PWMOC_AUD_6M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_PWMOC_AUD_6M_CK_PDN_SHIFT 12
#define MT6351_PMIC_TOP_CKPDN_CON1_SET_ADDR MT6351_TOP_CKPDN_CON1_SET
#define MT6351_PMIC_TOP_CKPDN_CON1_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON1_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKPDN_CON1_CLR_ADDR MT6351_TOP_CKPDN_CON1_CLR
#define MT6351_PMIC_TOP_CKPDN_CON1_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON1_CLR_SHIFT 0
#define MT6351_PMIC_RG_FGADC_ANA_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_FGADC_ANA_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_FGADC_ANA_CK_PDN_SHIFT 2
#define MT6351_PMIC_RG_FGADC_DIG_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_FGADC_DIG_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_FGADC_DIG_CK_PDN_SHIFT 3
#define MT6351_PMIC_RG_BIF_X72_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_BIF_X72_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BIF_X72_CK_PDN_SHIFT 4
#define MT6351_PMIC_RG_BIF_X4_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_BIF_X4_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BIF_X4_CK_PDN_SHIFT 5
#define MT6351_PMIC_RG_BIF_X1_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_BIF_X1_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BIF_X1_CK_PDN_SHIFT 6
#define MT6351_PMIC_RG_PCHR_32K_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_PCHR_32K_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_PCHR_32K_CK_PDN_SHIFT 7
#define MT6351_PMIC_RG_ACCDET_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_ACCDET_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_ACCDET_CK_PDN_SHIFT 9
#define MT6351_PMIC_RG_FQMTR_32K_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_FQMTR_32K_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_FQMTR_32K_CK_PDN_SHIFT 10
#define MT6351_PMIC_RG_INTRP_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_INTRP_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_INTRP_CK_PDN_SHIFT 11
#define MT6351_PMIC_RG_RTC_26M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_RTC_26M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_RTC_26M_CK_PDN_SHIFT 12
#define MT6351_PMIC_RG_RTC_EOSC32_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_RTC_EOSC32_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_RTC_EOSC32_CK_PDN_SHIFT 13
#define MT6351_PMIC_RG_TRIM_75K_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_TRIM_75K_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_TRIM_75K_CK_PDN_SHIFT 14
#define MT6351_PMIC_RG_STRUP_LBAT_SEL_CK_PDN_ADDR MT6351_TOP_CKPDN_CON2
#define MT6351_PMIC_RG_STRUP_LBAT_SEL_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_LBAT_SEL_CK_PDN_SHIFT 15
#define MT6351_PMIC_TOP_CKPDN_CON2_SET_ADDR MT6351_TOP_CKPDN_CON2_SET
#define MT6351_PMIC_TOP_CKPDN_CON2_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON2_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKPDN_CON2_CLR_ADDR MT6351_TOP_CKPDN_CON2_CLR
#define MT6351_PMIC_TOP_CKPDN_CON2_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON2_CLR_SHIFT 0
#define MT6351_PMIC_RG_STRUP_75K_CK_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_STRUP_75K_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_75K_CK_PDN_SHIFT 0
#define MT6351_PMIC_RG_STRUP_32K_CK_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_STRUP_32K_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_STRUP_32K_CK_PDN_SHIFT 1
#define MT6351_PMIC_RG_EFUSE_CK_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_EFUSE_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_EFUSE_CK_PDN_SHIFT 2
#define MT6351_PMIC_RG_SMPS_CK_DIV_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_SMPS_CK_DIV_PDN_MASK 0x1
#define MT6351_PMIC_RG_SMPS_CK_DIV_PDN_SHIFT 3
#define MT6351_PMIC_RG_SPI_CK_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_SPI_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_SPI_CK_PDN_SHIFT 4
#define MT6351_PMIC_RG_BGR_TEST_CK_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_BGR_TEST_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BGR_TEST_CK_PDN_SHIFT 5
#define MT6351_PMIC_RG_FGADC_FT_CK_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_FGADC_FT_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_FGADC_FT_CK_PDN_SHIFT 6
#define MT6351_PMIC_RG_PCHR_TEST_CK_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_PCHR_TEST_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_PCHR_TEST_CK_PDN_SHIFT 7
#define MT6351_PMIC_RG_BUCK_32K_CK_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_BUCK_32K_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_32K_CK_PDN_SHIFT 8
#define MT6351_PMIC_RG_BUCK_ANA_CK_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_BUCK_ANA_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_ANA_CK_PDN_SHIFT 9
#define MT6351_PMIC_RG_EOSC_CALI_TEST_CK_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_EOSC_CALI_TEST_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_EOSC_CALI_TEST_CK_PDN_SHIFT 10
#define MT6351_PMIC_RG_G_SMPS_TEST_CK_PDN_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_RG_G_SMPS_TEST_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_G_SMPS_TEST_CK_PDN_SHIFT 11
#define MT6351_PMIC_TOP_CKPDN_CON3_RSV_ADDR MT6351_TOP_CKPDN_CON3
#define MT6351_PMIC_TOP_CKPDN_CON3_RSV_MASK 0xF
#define MT6351_PMIC_TOP_CKPDN_CON3_RSV_SHIFT 12
#define MT6351_PMIC_TOP_CKPDN_CON3_SET_ADDR MT6351_TOP_CKPDN_CON3_SET
#define MT6351_PMIC_TOP_CKPDN_CON3_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON3_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKPDN_CON3_CLR_ADDR MT6351_TOP_CKPDN_CON3_CLR
#define MT6351_PMIC_TOP_CKPDN_CON3_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON3_CLR_SHIFT 0
#define MT6351_PMIC_RG_BUCK_9M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON4
#define MT6351_PMIC_RG_BUCK_9M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_9M_CK_PDN_SHIFT 0
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON4
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN_SHIFT 1
#define MT6351_PMIC_RG_BUCK_VPA_9M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON4
#define MT6351_PMIC_RG_BUCK_VPA_9M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VPA_9M_CK_PDN_SHIFT 2
#define MT6351_PMIC_RG_BUCK_VMODEM_9M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON4
#define MT6351_PMIC_RG_BUCK_VMODEM_9M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VMODEM_9M_CK_PDN_SHIFT 3
#define MT6351_PMIC_RG_BUCK_VCORE_9M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON4
#define MT6351_PMIC_RG_BUCK_VCORE_9M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VCORE_9M_CK_PDN_SHIFT 5
#define MT6351_PMIC_RG_BUCK_VGPU_9M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON4
#define MT6351_PMIC_RG_BUCK_VGPU_9M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VGPU_9M_CK_PDN_SHIFT 6
#define MT6351_PMIC_TOP_CKPDN_CON4_RSV_ADDR MT6351_TOP_CKPDN_CON4
#define MT6351_PMIC_TOP_CKPDN_CON4_RSV_MASK 0x1FF
#define MT6351_PMIC_TOP_CKPDN_CON4_RSV_SHIFT 7
#define MT6351_PMIC_TOP_CKPDN_CON4_SET_ADDR MT6351_TOP_CKPDN_CON4_SET
#define MT6351_PMIC_TOP_CKPDN_CON4_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON4_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKPDN_CON4_CLR_ADDR MT6351_TOP_CKPDN_CON4_CLR
#define MT6351_PMIC_TOP_CKPDN_CON4_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON4_CLR_SHIFT 0
#define MT6351_PMIC_RG_LDO_CALI_75K_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_LDO_CALI_75K_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_LDO_CALI_75K_CK_PDN_SHIFT 0
#define MT6351_PMIC_RG_INTRP_PRE_OC_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_INTRP_PRE_OC_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_INTRP_PRE_OC_CK_PDN_SHIFT 1
#define MT6351_PMIC_RG_BUCK_VS2_9M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_BUCK_VS2_9M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VS2_9M_CK_PDN_SHIFT 2
#define MT6351_PMIC_RG_BUCK_VS1_9M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_BUCK_VS1_9M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VS1_9M_CK_PDN_SHIFT 3
#define MT6351_PMIC_RG_BUCK_VMD1_9M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_BUCK_VMD1_9M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VMD1_9M_CK_PDN_SHIFT 4
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN_SHIFT 5
#define MT6351_PMIC_RG_VOW32K_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_VOW32K_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_VOW32K_CK_PDN_SHIFT 6
#define MT6351_PMIC_RG_VOW12M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_VOW12M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_VOW12M_CK_PDN_SHIFT 7
#define MT6351_PMIC_RG_AUD18M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_AUD18M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_AUD18M_CK_PDN_SHIFT 8
#define MT6351_PMIC_RG_DRV_ISINK4_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_DRV_ISINK4_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK4_CK_PDN_SHIFT 9
#define MT6351_PMIC_RG_DRV_ISINK5_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_DRV_ISINK5_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK5_CK_PDN_SHIFT 10
#define MT6351_PMIC_RG_DRV_ISINK6_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_DRV_ISINK6_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK6_CK_PDN_SHIFT 11
#define MT6351_PMIC_RG_DRV_ISINK7_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_DRV_ISINK7_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK7_CK_PDN_SHIFT 12
#define MT6351_PMIC_RG_DRV_CHRIND_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_DRV_CHRIND_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_DRV_CHRIND_CK_PDN_SHIFT 13
#define MT6351_PMIC_RG_BUCK_AUD_1M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_BUCK_AUD_1M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_AUD_1M_CK_PDN_SHIFT 14
#define MT6351_PMIC_RG_STB_AUD_1M_CK_PDN_ADDR MT6351_TOP_CKPDN_CON5
#define MT6351_PMIC_RG_STB_AUD_1M_CK_PDN_MASK 0x1
#define MT6351_PMIC_RG_STB_AUD_1M_CK_PDN_SHIFT 15
#define MT6351_PMIC_TOP_CKPDN_CON5_SET_ADDR MT6351_TOP_CKPDN_CON5_SET
#define MT6351_PMIC_TOP_CKPDN_CON5_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON5_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKPDN_CON5_CLR_ADDR MT6351_TOP_CKPDN_CON5_CLR
#define MT6351_PMIC_TOP_CKPDN_CON5_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKPDN_CON5_CLR_SHIFT 0
#define MT6351_PMIC_RG_AUDIF_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON0
#define MT6351_PMIC_RG_AUDIF_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_AUDIF_CK_CKSEL_SHIFT 0
#define MT6351_PMIC_RG_AUD_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON0
#define MT6351_PMIC_RG_AUD_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_AUD_CK_CKSEL_SHIFT 1
#define MT6351_PMIC_RG_DRV_ISINK0_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON0
#define MT6351_PMIC_RG_DRV_ISINK0_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK0_CK_CKSEL_SHIFT 2
#define MT6351_PMIC_RG_DRV_ISINK1_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON0
#define MT6351_PMIC_RG_DRV_ISINK1_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK1_CK_CKSEL_SHIFT 3
#define MT6351_PMIC_RG_DRV_ISINK2_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON0
#define MT6351_PMIC_RG_DRV_ISINK2_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK2_CK_CKSEL_SHIFT 4
#define MT6351_PMIC_RG_DRV_ISINK3_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON0
#define MT6351_PMIC_RG_DRV_ISINK3_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK3_CK_CKSEL_SHIFT 5
#define MT6351_PMIC_RG_FQMTR_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON0
#define MT6351_PMIC_RG_FQMTR_CK_CKSEL_MASK 0x7
#define MT6351_PMIC_RG_FQMTR_CK_CKSEL_SHIFT 6
#define MT6351_PMIC_RG_75K_32K_SEL_ADDR MT6351_TOP_CKSEL_CON0
#define MT6351_PMIC_RG_75K_32K_SEL_MASK 0x1
#define MT6351_PMIC_RG_75K_32K_SEL_SHIFT 9
#define MT6351_PMIC_RG_AUXADC_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON0
#define MT6351_PMIC_RG_AUXADC_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_CK_CKSEL_SHIFT 10
#define MT6351_PMIC_RG_OSC_SEL_HW_SRC_SEL_ADDR MT6351_TOP_CKSEL_CON0
#define MT6351_PMIC_RG_OSC_SEL_HW_SRC_SEL_MASK 0x3
#define MT6351_PMIC_RG_OSC_SEL_HW_SRC_SEL_SHIFT 12
#define MT6351_PMIC_RG_SRCLKEN_SRC_SEL_ADDR MT6351_TOP_CKSEL_CON0
#define MT6351_PMIC_RG_SRCLKEN_SRC_SEL_MASK 0x3
#define MT6351_PMIC_RG_SRCLKEN_SRC_SEL_SHIFT 14
#define MT6351_PMIC_TOP_CKSEL_CON_SET_ADDR MT6351_TOP_CKSEL_CON0_SET
#define MT6351_PMIC_TOP_CKSEL_CON_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKSEL_CON_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKSEL_CON_CLR_ADDR MT6351_TOP_CKSEL_CON0_CLR
#define MT6351_PMIC_TOP_CKSEL_CON_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKSEL_CON_CLR_SHIFT 0
#define MT6351_PMIC_RG_STRUP_75K_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON1
#define MT6351_PMIC_RG_STRUP_75K_CK_CKSEL_MASK 0x3
#define MT6351_PMIC_RG_STRUP_75K_CK_CKSEL_SHIFT 0
#define MT6351_PMIC_RG_BGR_TEST_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON1
#define MT6351_PMIC_RG_BGR_TEST_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_BGR_TEST_CK_CKSEL_SHIFT 2
#define MT6351_PMIC_RG_PCHR_TEST_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON1
#define MT6351_PMIC_RG_PCHR_TEST_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_PCHR_TEST_CK_CKSEL_SHIFT 3
#define MT6351_PMIC_RG_FGADC_ANA_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON1
#define MT6351_PMIC_RG_FGADC_ANA_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_FGADC_ANA_CK_CKSEL_SHIFT 4
#define MT6351_PMIC_RG_DRV_ISINK4_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON1
#define MT6351_PMIC_RG_DRV_ISINK4_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK4_CK_CKSEL_SHIFT 5
#define MT6351_PMIC_RG_DRV_ISINK5_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON1
#define MT6351_PMIC_RG_DRV_ISINK5_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK5_CK_CKSEL_SHIFT 6
#define MT6351_PMIC_RG_DRV_ISINK6_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON1
#define MT6351_PMIC_RG_DRV_ISINK6_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK6_CK_CKSEL_SHIFT 7
#define MT6351_PMIC_RG_DRV_ISINK7_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON1
#define MT6351_PMIC_RG_DRV_ISINK7_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK7_CK_CKSEL_SHIFT 8
#define MT6351_PMIC_RG_DRV_CHRIND_CK_CKSEL_ADDR MT6351_TOP_CKSEL_CON1
#define MT6351_PMIC_RG_DRV_CHRIND_CK_CKSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_CHRIND_CK_CKSEL_SHIFT 9
#define MT6351_PMIC_RG_TOP_CKSEL_CON1_RSV_ADDR MT6351_TOP_CKSEL_CON1
#define MT6351_PMIC_RG_TOP_CKSEL_CON1_RSV_MASK 0x3F
#define MT6351_PMIC_RG_TOP_CKSEL_CON1_RSV_SHIFT 10
#define MT6351_PMIC_TOP_CKSEL_CON1_SET_ADDR MT6351_TOP_CKSEL_CON1_SET
#define MT6351_PMIC_TOP_CKSEL_CON1_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKSEL_CON1_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKSEL_CON1_CLR_ADDR MT6351_TOP_CKSEL_CON1_CLR
#define MT6351_PMIC_TOP_CKSEL_CON1_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKSEL_CON1_CLR_SHIFT 0
#define MT6351_PMIC_RG_SRCVOLTEN_SW_ADDR MT6351_TOP_CKSEL_CON2
#define MT6351_PMIC_RG_SRCVOLTEN_SW_MASK 0x1
#define MT6351_PMIC_RG_SRCVOLTEN_SW_SHIFT 0
#define MT6351_PMIC_RG_BUCK_OSC_SEL_SW_ADDR MT6351_TOP_CKSEL_CON2
#define MT6351_PMIC_RG_BUCK_OSC_SEL_SW_MASK 0x1
#define MT6351_PMIC_RG_BUCK_OSC_SEL_SW_SHIFT 2
#define MT6351_PMIC_RG_VOWEN_SW_ADDR MT6351_TOP_CKSEL_CON2
#define MT6351_PMIC_RG_VOWEN_SW_MASK 0x1
#define MT6351_PMIC_RG_VOWEN_SW_SHIFT 3
#define MT6351_PMIC_RG_SRCVOLTEN_MODE_ADDR MT6351_TOP_CKSEL_CON2
#define MT6351_PMIC_RG_SRCVOLTEN_MODE_MASK 0x1
#define MT6351_PMIC_RG_SRCVOLTEN_MODE_SHIFT 4
#define MT6351_PMIC_RG_BUCK_OSC_SEL_MODE_ADDR MT6351_TOP_CKSEL_CON2
#define MT6351_PMIC_RG_BUCK_OSC_SEL_MODE_MASK 0x1
#define MT6351_PMIC_RG_BUCK_OSC_SEL_MODE_SHIFT 6
#define MT6351_PMIC_RG_VOWEN_MODE_ADDR MT6351_TOP_CKSEL_CON2
#define MT6351_PMIC_RG_VOWEN_MODE_MASK 0x1
#define MT6351_PMIC_RG_VOWEN_MODE_SHIFT 7
#define MT6351_PMIC_RG_TOP_CKSEL_CON2_RSV_ADDR MT6351_TOP_CKSEL_CON2
#define MT6351_PMIC_RG_TOP_CKSEL_CON2_RSV_MASK 0x3F
#define MT6351_PMIC_RG_TOP_CKSEL_CON2_RSV_SHIFT 8
#define MT6351_PMIC_RG_BUCK_VMD1_OSC_SEL_SW_ADDR MT6351_TOP_CKSEL_CON2
#define MT6351_PMIC_RG_BUCK_VMD1_OSC_SEL_SW_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VMD1_OSC_SEL_SW_SHIFT 14
#define MT6351_PMIC_RG_BUCK_VMD1_OSC_SEL_MODE_ADDR MT6351_TOP_CKSEL_CON2
#define MT6351_PMIC_RG_BUCK_VMD1_OSC_SEL_MODE_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VMD1_OSC_SEL_MODE_SHIFT 15
#define MT6351_PMIC_TOP_CKSEL_CON2_SET_ADDR MT6351_TOP_CKSEL_CON2_SET
#define MT6351_PMIC_TOP_CKSEL_CON2_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKSEL_CON2_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKSEL_CON2_CLR_ADDR MT6351_TOP_CKSEL_CON2_CLR
#define MT6351_PMIC_TOP_CKSEL_CON2_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKSEL_CON2_CLR_SHIFT 0
#define MT6351_PMIC_RG_BUCK_VCORE_OSC_SEL_SW_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VCORE_OSC_SEL_SW_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VCORE_OSC_SEL_SW_SHIFT 0
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_SW_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_SW_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_SW_SHIFT 1
#define MT6351_PMIC_RG_BUCK_VPA_OSC_SEL_SW_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VPA_OSC_SEL_SW_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VPA_OSC_SEL_SW_SHIFT 2
#define MT6351_PMIC_RG_BUCK_VMODEM_OSC_SEL_SW_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VMODEM_OSC_SEL_SW_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VMODEM_OSC_SEL_SW_SHIFT 3
#define MT6351_PMIC_RG_BUCK_VGPU_OSC_SEL_SW_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VGPU_OSC_SEL_SW_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VGPU_OSC_SEL_SW_SHIFT 4
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_SW_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_SW_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_SW_SHIFT 5
#define MT6351_PMIC_RG_BUCK_VS2_OSC_SEL_SW_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VS2_OSC_SEL_SW_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VS2_OSC_SEL_SW_SHIFT 6
#define MT6351_PMIC_RG_BUCK_VS1_OSC_SEL_SW_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VS1_OSC_SEL_SW_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VS1_OSC_SEL_SW_SHIFT 7
#define MT6351_PMIC_RG_BUCK_VCORE_OSC_SEL_MODE_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VCORE_OSC_SEL_MODE_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VCORE_OSC_SEL_MODE_SHIFT 8
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_MODE_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_MODE_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_MODE_SHIFT 9
#define MT6351_PMIC_RG_BUCK_VPA_OSC_SEL_MODE_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VPA_OSC_SEL_MODE_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VPA_OSC_SEL_MODE_SHIFT 10
#define MT6351_PMIC_RG_BUCK_VMODEM_OSC_SEL_MODE_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VMODEM_OSC_SEL_MODE_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VMODEM_OSC_SEL_MODE_SHIFT 11
#define MT6351_PMIC_RG_BUCK_VGPU_OSC_SEL_MODE_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VGPU_OSC_SEL_MODE_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VGPU_OSC_SEL_MODE_SHIFT 12
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_MODE_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_MODE_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_MODE_SHIFT 13
#define MT6351_PMIC_RG_BUCK_VS2_OSC_SEL_MODE_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VS2_OSC_SEL_MODE_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VS2_OSC_SEL_MODE_SHIFT 14
#define MT6351_PMIC_RG_BUCK_VS1_OSC_SEL_MODE_ADDR MT6351_TOP_CKSEL_CON3
#define MT6351_PMIC_RG_BUCK_VS1_OSC_SEL_MODE_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VS1_OSC_SEL_MODE_SHIFT 15
#define MT6351_PMIC_TOP_CKSEL_CON3_SET_ADDR MT6351_TOP_CKSEL_CON3_SET
#define MT6351_PMIC_TOP_CKSEL_CON3_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKSEL_CON3_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKSEL_CON3_CLR_ADDR MT6351_TOP_CKSEL_CON3_CLR
#define MT6351_PMIC_TOP_CKSEL_CON3_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKSEL_CON3_CLR_SHIFT 0
#define MT6351_PMIC_RG_STRUP_LBAT_SEL_CK_DIVSEL_ADDR MT6351_TOP_CKDIVSEL_CON0
#define MT6351_PMIC_RG_STRUP_LBAT_SEL_CK_DIVSEL_MASK 0x3
#define MT6351_PMIC_RG_STRUP_LBAT_SEL_CK_DIVSEL_SHIFT 0
#define MT6351_PMIC_TOP_CKDIVSEL_CON_RSV_ADDR MT6351_TOP_CKDIVSEL_CON0
#define MT6351_PMIC_TOP_CKDIVSEL_CON_RSV_MASK 0x3
#define MT6351_PMIC_TOP_CKDIVSEL_CON_RSV_SHIFT 2
#define MT6351_PMIC_RG_BIF_X4_CK_DIVSEL_ADDR MT6351_TOP_CKDIVSEL_CON0
#define MT6351_PMIC_RG_BIF_X4_CK_DIVSEL_MASK 0x7
#define MT6351_PMIC_RG_BIF_X4_CK_DIVSEL_SHIFT 4
#define MT6351_PMIC_RG_REG_CK_DIVSEL_ADDR MT6351_TOP_CKDIVSEL_CON0
#define MT6351_PMIC_RG_REG_CK_DIVSEL_MASK 0x3
#define MT6351_PMIC_RG_REG_CK_DIVSEL_SHIFT 8
#define MT6351_PMIC_TOP_CKDIVSEL_CON0_RSV_ADDR MT6351_TOP_CKDIVSEL_CON0
#define MT6351_PMIC_TOP_CKDIVSEL_CON0_RSV_MASK 0x3F
#define MT6351_PMIC_TOP_CKDIVSEL_CON0_RSV_SHIFT 10
#define MT6351_PMIC_TOP_CKDIVSEL_CON0_SET_ADDR MT6351_TOP_CKDIVSEL_CON0_SET
#define MT6351_PMIC_TOP_CKDIVSEL_CON0_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKDIVSEL_CON0_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKDIVSEL_CON0_CLR_ADDR MT6351_TOP_CKDIVSEL_CON0_CLR
#define MT6351_PMIC_TOP_CKDIVSEL_CON0_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKDIVSEL_CON0_CLR_SHIFT 0
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_DIVSEL_ADDR MT6351_TOP_CKDIVSEL_CON1
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_DIVSEL_MASK 0x3
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_DIVSEL_SHIFT 0
#define MT6351_PMIC_RG_AUXADC_26M_CK_DIVSEL_ADDR MT6351_TOP_CKDIVSEL_CON1
#define MT6351_PMIC_RG_AUXADC_26M_CK_DIVSEL_MASK 0x3
#define MT6351_PMIC_RG_AUXADC_26M_CK_DIVSEL_SHIFT 2
#define MT6351_PMIC_RG_BUCK_9M_CK_DIVSEL_ADDR MT6351_TOP_CKDIVSEL_CON1
#define MT6351_PMIC_RG_BUCK_9M_CK_DIVSEL_MASK 0x1
#define MT6351_PMIC_RG_BUCK_9M_CK_DIVSEL_SHIFT 4
#define MT6351_PMIC_TOP_CKDIVSEL_CON1_SET_ADDR MT6351_TOP_CKDIVSEL_CON1_SET
#define MT6351_PMIC_TOP_CKDIVSEL_CON1_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKDIVSEL_CON1_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKDIVSEL_CON1_CLR_ADDR MT6351_TOP_CKDIVSEL_CON1_CLR
#define MT6351_PMIC_TOP_CKDIVSEL_CON1_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKDIVSEL_CON1_CLR_SHIFT 0
#define MT6351_PMIC_RG_G_SMPS_PD_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON0
#define MT6351_PMIC_RG_G_SMPS_PD_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_G_SMPS_PD_CK_PDN_HWEN_SHIFT 0
#define MT6351_PMIC_RG_G_SMPS_AUD_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON0
#define MT6351_PMIC_RG_G_SMPS_AUD_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_G_SMPS_AUD_CK_PDN_HWEN_SHIFT 1
#define MT6351_PMIC_RG_G_DRV_2M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON0
#define MT6351_PMIC_RG_G_DRV_2M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_G_DRV_2M_CK_PDN_HWEN_SHIFT 2
#define MT6351_PMIC_RG_AUXADC_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON0
#define MT6351_PMIC_RG_AUXADC_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_CK_PDN_HWEN_SHIFT 3
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON0
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_PDN_HWEN_SHIFT 4
#define MT6351_PMIC_RG_BUCK_1M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON0
#define MT6351_PMIC_RG_BUCK_1M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_1M_CK_PDN_HWEN_SHIFT 5
#define MT6351_PMIC_RG_EFUSE_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON0
#define MT6351_PMIC_RG_EFUSE_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_EFUSE_CK_PDN_HWEN_SHIFT 6
#define MT6351_PMIC_RG_RTC_26M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON0
#define MT6351_PMIC_RG_RTC_26M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_RTC_26M_CK_PDN_HWEN_SHIFT 7
#define MT6351_PMIC_RG_AUXADC_26M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON0
#define MT6351_PMIC_RG_AUXADC_26M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_26M_CK_PDN_HWEN_SHIFT 10
#define MT6351_PMIC_RG_AUXADC_CK_CKSEL_HWEN_ADDR MT6351_TOP_CKHWEN_CON0
#define MT6351_PMIC_RG_AUXADC_CK_CKSEL_HWEN_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_CK_CKSEL_HWEN_SHIFT 11
#define MT6351_PMIC_TOP_CKHWEN_CON0_RSV_ADDR MT6351_TOP_CKHWEN_CON0
#define MT6351_PMIC_TOP_CKHWEN_CON0_RSV_MASK 0xF
#define MT6351_PMIC_TOP_CKHWEN_CON0_RSV_SHIFT 12
#define MT6351_PMIC_TOP_CKHWEN_CON0_SET_ADDR MT6351_TOP_CKHWEN_CON0_SET
#define MT6351_PMIC_TOP_CKHWEN_CON0_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKHWEN_CON0_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKHWEN_CON0_CLR_ADDR MT6351_TOP_CKHWEN_CON0_CLR
#define MT6351_PMIC_TOP_CKHWEN_CON0_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKHWEN_CON0_CLR_SHIFT 0
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN_HWEN_ADDR                     \
	MT6351_TOP_CKHWEN_CON1
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN_HWEN_SHIFT 0
#define MT6351_PMIC_RG_BUCK_VPA_9M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON1
#define MT6351_PMIC_RG_BUCK_VPA_9M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VPA_9M_CK_PDN_HWEN_SHIFT 1
#define MT6351_PMIC_RG_BUCK_VMODEM_9M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON1
#define MT6351_PMIC_RG_BUCK_VMODEM_9M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VMODEM_9M_CK_PDN_HWEN_SHIFT 2
#define MT6351_PMIC_RG_BUCK_VCORE_9M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON1
#define MT6351_PMIC_RG_BUCK_VCORE_9M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VCORE_9M_CK_PDN_HWEN_SHIFT 4
#define MT6351_PMIC_RG_BUCK_VGPU_9M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON1
#define MT6351_PMIC_RG_BUCK_VGPU_9M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VGPU_9M_CK_PDN_HWEN_SHIFT 5
#define MT6351_PMIC_TOP_CKHWEN_CON1_RSV_ADDR MT6351_TOP_CKHWEN_CON1
#define MT6351_PMIC_TOP_CKHWEN_CON1_RSV_MASK 0xF
#define MT6351_PMIC_TOP_CKHWEN_CON1_RSV_SHIFT 12
#define MT6351_PMIC_TOP_CKHWEN_CON1_SET_ADDR MT6351_TOP_CKHWEN_CON1_SET
#define MT6351_PMIC_TOP_CKHWEN_CON1_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKHWEN_CON1_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKHWEN_CON1_CLR_ADDR MT6351_TOP_CKHWEN_CON1_CLR
#define MT6351_PMIC_TOP_CKHWEN_CON1_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKHWEN_CON1_CLR_SHIFT 0
#define MT6351_PMIC_RG_BUCK_VS2_9M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON2
#define MT6351_PMIC_RG_BUCK_VS2_9M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VS2_9M_CK_PDN_HWEN_SHIFT 0
#define MT6351_PMIC_RG_BUCK_VS1_9M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON2
#define MT6351_PMIC_RG_BUCK_VS1_9M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VS1_9M_CK_PDN_HWEN_SHIFT 1
#define MT6351_PMIC_RG_BUCK_VMD1_9M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON2
#define MT6351_PMIC_RG_BUCK_VMD1_9M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VMD1_9M_CK_PDN_HWEN_SHIFT 2
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON2
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN_HWEN_SHIFT 3
#define MT6351_PMIC_RG_AUD18M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON2
#define MT6351_PMIC_RG_AUD18M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_AUD18M_CK_PDN_HWEN_SHIFT 4
#define MT6351_PMIC_RG_BUCK_AUD_1M_CK_PDN_HWEN_ADDR MT6351_TOP_CKHWEN_CON2
#define MT6351_PMIC_RG_BUCK_AUD_1M_CK_PDN_HWEN_MASK 0x1
#define MT6351_PMIC_RG_BUCK_AUD_1M_CK_PDN_HWEN_SHIFT 5
#define MT6351_PMIC_TOP_CKHWEN_CON2_RSV_ADDR MT6351_TOP_CKHWEN_CON2
#define MT6351_PMIC_TOP_CKHWEN_CON2_RSV_MASK 0x3FF
#define MT6351_PMIC_TOP_CKHWEN_CON2_RSV_SHIFT 6
#define MT6351_PMIC_TOP_CKHWEN_CON2_SET_ADDR MT6351_TOP_CKHWEN_CON2_SET
#define MT6351_PMIC_TOP_CKHWEN_CON2_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKHWEN_CON2_SET_SHIFT 0
#define MT6351_PMIC_TOP_CKHWEN_CON2_CLR_ADDR MT6351_TOP_CKHWEN_CON2_CLR
#define MT6351_PMIC_TOP_CKHWEN_CON2_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CKHWEN_CON2_CLR_SHIFT 0
#define MT6351_PMIC_RG_PMU75K_CK_TST_DIS_ADDR MT6351_TOP_CKTST_CON0
#define MT6351_PMIC_RG_PMU75K_CK_TST_DIS_MASK 0x1
#define MT6351_PMIC_RG_PMU75K_CK_TST_DIS_SHIFT 0
#define MT6351_PMIC_RG_SMPS_CK_TST_DIS_ADDR MT6351_TOP_CKTST_CON0
#define MT6351_PMIC_RG_SMPS_CK_TST_DIS_MASK 0x1
#define MT6351_PMIC_RG_SMPS_CK_TST_DIS_SHIFT 1
#define MT6351_PMIC_RG_AUD26M_CK_TST_DIS_ADDR MT6351_TOP_CKTST_CON0
#define MT6351_PMIC_RG_AUD26M_CK_TST_DIS_MASK 0x1
#define MT6351_PMIC_RG_AUD26M_CK_TST_DIS_SHIFT 2
#define MT6351_PMIC_RG_RTC32K_CK_TST_DIS_ADDR MT6351_TOP_CKTST_CON0
#define MT6351_PMIC_RG_RTC32K_CK_TST_DIS_MASK 0x1
#define MT6351_PMIC_RG_RTC32K_CK_TST_DIS_SHIFT 4
#define MT6351_PMIC_RG_FG_CK_TST_DIS_ADDR MT6351_TOP_CKTST_CON0
#define MT6351_PMIC_RG_FG_CK_TST_DIS_MASK 0x1
#define MT6351_PMIC_RG_FG_CK_TST_DIS_SHIFT 6
#define MT6351_PMIC_RG_RTC26M_CK_TST_DIS_ADDR MT6351_TOP_CKTST_CON0
#define MT6351_PMIC_RG_RTC26M_CK_TST_DIS_MASK 0x1
#define MT6351_PMIC_RG_RTC26M_CK_TST_DIS_SHIFT 7
#define MT6351_PMIC_RG_VOW12M_CK_TST_DIS_ADDR MT6351_TOP_CKTST_CON0
#define MT6351_PMIC_RG_VOW12M_CK_TST_DIS_MASK 0x1
#define MT6351_PMIC_RG_VOW12M_CK_TST_DIS_SHIFT 8
#define MT6351_PMIC_TOP_CKTST_CON0_RSV_ADDR MT6351_TOP_CKTST_CON0
#define MT6351_PMIC_TOP_CKTST_CON0_RSV_MASK 0x3F
#define MT6351_PMIC_TOP_CKTST_CON0_RSV_SHIFT 9
#define MT6351_PMIC_RG_BUCK_ANA_AUTO_OFF_DIS_ADDR MT6351_TOP_CKTST_CON0
#define MT6351_PMIC_RG_BUCK_ANA_AUTO_OFF_DIS_MASK 0x1
#define MT6351_PMIC_RG_BUCK_ANA_AUTO_OFF_DIS_SHIFT 15
#define MT6351_PMIC_RG_DRV_ISINK0_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_DRV_ISINK0_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK0_CK_TSTSEL_SHIFT 0
#define MT6351_PMIC_RG_DRV_ISINK1_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_DRV_ISINK1_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK1_CK_TSTSEL_SHIFT 1
#define MT6351_PMIC_RG_DRV_ISINK2_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_DRV_ISINK2_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK2_CK_TSTSEL_SHIFT 2
#define MT6351_PMIC_RG_DRV_ISINK3_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_DRV_ISINK3_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK3_CK_TSTSEL_SHIFT 3
#define MT6351_PMIC_RG_FQMTR_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_FQMTR_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_FQMTR_CK_TSTSEL_SHIFT 4
#define MT6351_PMIC_RG_RTCDET_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_RTCDET_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_RTCDET_CK_TSTSEL_SHIFT 5
#define MT6351_PMIC_RG_PMU75K_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_PMU75K_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_PMU75K_CK_TSTSEL_SHIFT 6
#define MT6351_PMIC_RG_SMPS_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_SMPS_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_SMPS_CK_TSTSEL_SHIFT 7
#define MT6351_PMIC_RG_AUD26M_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_AUD26M_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_AUD26M_CK_TSTSEL_SHIFT 8
#define MT6351_PMIC_RG_AUDIF_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_AUDIF_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_AUDIF_CK_TSTSEL_SHIFT 10
#define MT6351_PMIC_RG_AUD_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_AUD_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_AUD_CK_TSTSEL_SHIFT 11
#define MT6351_PMIC_RG_STRUP_75K_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_STRUP_75K_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_STRUP_75K_CK_TSTSEL_SHIFT 12
#define MT6351_PMIC_RG_RTC32K_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_RTC32K_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_RTC32K_CK_TSTSEL_SHIFT 13
#define MT6351_PMIC_RG_PCHR_TEST_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_PCHR_TEST_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_PCHR_TEST_CK_TSTSEL_SHIFT 14
#define MT6351_PMIC_RG_BGR_TEST_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON1
#define MT6351_PMIC_RG_BGR_TEST_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_BGR_TEST_CK_TSTSEL_SHIFT 15
#define MT6351_PMIC_RG_FG_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_FG_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_FG_CK_TSTSEL_SHIFT 0
#define MT6351_PMIC_RG_FGADC_ANA_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_FGADC_ANA_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_FGADC_ANA_CK_TSTSEL_SHIFT 1
#define MT6351_PMIC_RG_RTC26M_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_RTC26M_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_RTC26M_CK_TSTSEL_SHIFT 3
#define MT6351_PMIC_RG_RTC_EOSC32_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_RTC_EOSC32_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_RTC_EOSC32_CK_TSTSEL_SHIFT 4
#define MT6351_PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL_SHIFT 5
#define MT6351_PMIC_RG_AUXADC_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_AUXADC_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_CK_TSTSEL_SHIFT 6
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_SMPS_CK_TSTSEL_SHIFT 7
#define MT6351_PMIC_RG_AUXADC_26M_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_AUXADC_26M_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_26M_CK_TSTSEL_SHIFT 8
#define MT6351_PMIC_RG_VOW12M_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_VOW12M_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_VOW12M_CK_TSTSEL_SHIFT 9
#define MT6351_PMIC_RG_DRV_ISINK4_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_DRV_ISINK4_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK4_CK_TSTSEL_SHIFT 10
#define MT6351_PMIC_RG_DRV_ISINK5_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_DRV_ISINK5_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK5_CK_TSTSEL_SHIFT 11
#define MT6351_PMIC_RG_DRV_ISINK6_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_DRV_ISINK6_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK6_CK_TSTSEL_SHIFT 12
#define MT6351_PMIC_RG_DRV_ISINK7_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_DRV_ISINK7_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_ISINK7_CK_TSTSEL_SHIFT 13
#define MT6351_PMIC_RG_DRV_CHRIND_CK_TSTSEL_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_RG_DRV_CHRIND_CK_TSTSEL_MASK 0x1
#define MT6351_PMIC_RG_DRV_CHRIND_CK_TSTSEL_SHIFT 14
#define MT6351_PMIC_TOP_CKTST_CON2_RSV_ADDR MT6351_TOP_CKTST_CON2
#define MT6351_PMIC_TOP_CKTST_CON2_RSV_MASK 0x1
#define MT6351_PMIC_TOP_CKTST_CON2_RSV_SHIFT 15
#define MT6351_PMIC_RG_CLKSQ_EN_AUD_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_RG_CLKSQ_EN_AUD_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_EN_AUD_SHIFT 0
#define MT6351_PMIC_RG_CLKSQ_EN_FQR_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_RG_CLKSQ_EN_FQR_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_EN_FQR_SHIFT 1
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_AP_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_AP_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_AP_SHIFT 2
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_MD_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_MD_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_MD_SHIFT 3
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_GPS_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_GPS_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_GPS_SHIFT 4
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_RSV_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_RSV_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_RSV_SHIFT 5
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_AP_MODE_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_AP_MODE_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_AP_MODE_SHIFT 8
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_MD_MODE_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_MD_MODE_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_EN_AUX_MD_MODE_SHIFT 9
#define MT6351_PMIC_RG_CLKSQ_IN_SEL_VA18_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_RG_CLKSQ_IN_SEL_VA18_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_IN_SEL_VA18_SHIFT 10
#define MT6351_PMIC_RG_CLKSQ_IN_SEL_VA18_SWCTRL_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_RG_CLKSQ_IN_SEL_VA18_SWCTRL_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_IN_SEL_VA18_SWCTRL_SHIFT 11
#define MT6351_PMIC_TOP_CLKSQ_RSV_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_TOP_CLKSQ_RSV_MASK 0x7
#define MT6351_PMIC_TOP_CLKSQ_RSV_SHIFT 12
#define MT6351_PMIC_DA_CLKSQ_EN_VA18_ADDR MT6351_TOP_CLKSQ
#define MT6351_PMIC_DA_CLKSQ_EN_VA18_MASK 0x1
#define MT6351_PMIC_DA_CLKSQ_EN_VA18_SHIFT 15
#define MT6351_PMIC_TOP_CLKSQ_SET_ADDR MT6351_TOP_CLKSQ_SET
#define MT6351_PMIC_TOP_CLKSQ_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CLKSQ_SET_SHIFT 0
#define MT6351_PMIC_TOP_CLKSQ_CLR_ADDR MT6351_TOP_CLKSQ_CLR
#define MT6351_PMIC_TOP_CLKSQ_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CLKSQ_CLR_SHIFT 0
#define MT6351_PMIC_RG_CLKSQ_RTC_EN_ADDR MT6351_TOP_CLKSQ_RTC
#define MT6351_PMIC_RG_CLKSQ_RTC_EN_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_RTC_EN_SHIFT 0
#define MT6351_PMIC_RG_CLKSQ_RTC_EN_HW_MODE_ADDR MT6351_TOP_CLKSQ_RTC
#define MT6351_PMIC_RG_CLKSQ_RTC_EN_HW_MODE_MASK 0x1
#define MT6351_PMIC_RG_CLKSQ_RTC_EN_HW_MODE_SHIFT 1
#define MT6351_PMIC_TOP_CLKSQ_RTC_RSV0_ADDR MT6351_TOP_CLKSQ_RTC
#define MT6351_PMIC_TOP_CLKSQ_RTC_RSV0_MASK 0xF
#define MT6351_PMIC_TOP_CLKSQ_RTC_RSV0_SHIFT 2
#define MT6351_PMIC_RG_ENBB_SEL_ADDR MT6351_TOP_CLKSQ_RTC
#define MT6351_PMIC_RG_ENBB_SEL_MASK 0x1
#define MT6351_PMIC_RG_ENBB_SEL_SHIFT 8
#define MT6351_PMIC_RG_XOSC_EN_SEL_ADDR MT6351_TOP_CLKSQ_RTC
#define MT6351_PMIC_RG_XOSC_EN_SEL_MASK 0x1
#define MT6351_PMIC_RG_XOSC_EN_SEL_SHIFT 9
#define MT6351_PMIC_TOP_CLKSQ_RTC_RSV1_ADDR MT6351_TOP_CLKSQ_RTC
#define MT6351_PMIC_TOP_CLKSQ_RTC_RSV1_MASK 0x3
#define MT6351_PMIC_TOP_CLKSQ_RTC_RSV1_SHIFT 10
#define MT6351_PMIC_DA_CLKSQ_EN_VDIG18_ADDR MT6351_TOP_CLKSQ_RTC
#define MT6351_PMIC_DA_CLKSQ_EN_VDIG18_MASK 0x1
#define MT6351_PMIC_DA_CLKSQ_EN_VDIG18_SHIFT 15
#define MT6351_PMIC_TOP_CLKSQ_RTC_SET_ADDR MT6351_TOP_CLKSQ_RTC_SET
#define MT6351_PMIC_TOP_CLKSQ_RTC_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_CLKSQ_RTC_SET_SHIFT 0
#define MT6351_PMIC_TOP_CLKSQ_RTC_CLR_ADDR MT6351_TOP_CLKSQ_RTC_CLR
#define MT6351_PMIC_TOP_CLKSQ_RTC_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_CLKSQ_RTC_CLR_SHIFT 0
#define MT6351_PMIC_OSC_75K_TRIM_ADDR MT6351_TOP_CLK_TRIM
#define MT6351_PMIC_OSC_75K_TRIM_MASK 0x1F
#define MT6351_PMIC_OSC_75K_TRIM_SHIFT 0
#define MT6351_PMIC_RG_OSC_75K_TRIM_EN_ADDR MT6351_TOP_CLK_TRIM
#define MT6351_PMIC_RG_OSC_75K_TRIM_EN_MASK 0x1
#define MT6351_PMIC_RG_OSC_75K_TRIM_EN_SHIFT 5
#define MT6351_PMIC_RG_OSC_75K_TRIM_RATE_ADDR MT6351_TOP_CLK_TRIM
#define MT6351_PMIC_RG_OSC_75K_TRIM_RATE_MASK 0x3
#define MT6351_PMIC_RG_OSC_75K_TRIM_RATE_SHIFT 6
#define MT6351_PMIC_DA_OSC_75K_TRIM_ADDR MT6351_TOP_CLK_TRIM
#define MT6351_PMIC_DA_OSC_75K_TRIM_MASK 0x1F
#define MT6351_PMIC_DA_OSC_75K_TRIM_SHIFT 8
#define MT6351_PMIC_RG_EFUSE_MAN_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_EFUSE_MAN_RST_MASK 0x1
#define MT6351_PMIC_RG_EFUSE_MAN_RST_SHIFT 0
#define MT6351_PMIC_RG_AUXADC_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_AUXADC_RST_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_RST_SHIFT 1
#define MT6351_PMIC_RG_AUXADC_REG_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_AUXADC_REG_RST_MASK 0x1
#define MT6351_PMIC_RG_AUXADC_REG_RST_SHIFT 2
#define MT6351_PMIC_RG_AUDIO_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_AUDIO_RST_MASK 0x1
#define MT6351_PMIC_RG_AUDIO_RST_SHIFT 3
#define MT6351_PMIC_RG_ACCDET_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_ACCDET_RST_MASK 0x1
#define MT6351_PMIC_RG_ACCDET_RST_SHIFT 4
#define MT6351_PMIC_RG_BIF_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_BIF_RST_MASK 0x1
#define MT6351_PMIC_RG_BIF_RST_SHIFT 5
#define MT6351_PMIC_RG_DRIVER_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_DRIVER_RST_MASK 0x1
#define MT6351_PMIC_RG_DRIVER_RST_SHIFT 6
#define MT6351_PMIC_RG_FGADC_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_FGADC_RST_MASK 0x1
#define MT6351_PMIC_RG_FGADC_RST_SHIFT 7
#define MT6351_PMIC_RG_FQMTR_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_FQMTR_RST_MASK 0x1
#define MT6351_PMIC_RG_FQMTR_RST_SHIFT 8
#define MT6351_PMIC_RG_RTC_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_RTC_RST_MASK 0x1
#define MT6351_PMIC_RG_RTC_RST_SHIFT 9
#define MT6351_PMIC_RG_CHRWDT_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_CHRWDT_RST_MASK 0x1
#define MT6351_PMIC_RG_CHRWDT_RST_SHIFT 11
#define MT6351_PMIC_RG_ZCD_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_ZCD_RST_MASK 0x1
#define MT6351_PMIC_RG_ZCD_RST_SHIFT 12
#define MT6351_PMIC_RG_AUDNCP_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_AUDNCP_RST_MASK 0x1
#define MT6351_PMIC_RG_AUDNCP_RST_SHIFT 13
#define MT6351_PMIC_RG_CLK_TRIM_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_CLK_TRIM_RST_MASK 0x1
#define MT6351_PMIC_RG_CLK_TRIM_RST_SHIFT 14
#define MT6351_PMIC_RG_LDO_CALI_RST_ADDR MT6351_TOP_RST_CON0
#define MT6351_PMIC_RG_LDO_CALI_RST_MASK 0x1
#define MT6351_PMIC_RG_LDO_CALI_RST_SHIFT 15
#define MT6351_PMIC_TOP_RST_CON0_SET_ADDR MT6351_TOP_RST_CON0_SET
#define MT6351_PMIC_TOP_RST_CON0_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_RST_CON0_SET_SHIFT 0
#define MT6351_PMIC_TOP_RST_CON0_CLR_ADDR MT6351_TOP_RST_CON0_CLR
#define MT6351_PMIC_TOP_RST_CON0_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_RST_CON0_CLR_SHIFT 0
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_RST_ADDR MT6351_TOP_RST_CON1
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_RST_MASK 0x1
#define MT6351_PMIC_RG_STRUP_LONG_PRESS_RST_SHIFT 0
#define MT6351_PMIC_TOP_RST_CON1_RSV_ADDR MT6351_TOP_RST_CON1
#define MT6351_PMIC_TOP_RST_CON1_RSV_MASK 0x1F
#define MT6351_PMIC_TOP_RST_CON1_RSV_SHIFT 1
#define MT6351_PMIC_TOP_RST_CON1_SET_ADDR MT6351_TOP_RST_CON1_SET
#define MT6351_PMIC_TOP_RST_CON1_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_RST_CON1_SET_SHIFT 0
#define MT6351_PMIC_TOP_RST_CON1_CLR_ADDR MT6351_TOP_RST_CON1_CLR
#define MT6351_PMIC_TOP_RST_CON1_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_RST_CON1_CLR_SHIFT 0
#define MT6351_PMIC_RG_CHR_LDO_DET_MODE_ADDR MT6351_TOP_RST_CON2
#define MT6351_PMIC_RG_CHR_LDO_DET_MODE_MASK 0x1
#define MT6351_PMIC_RG_CHR_LDO_DET_MODE_SHIFT 0
#define MT6351_PMIC_RG_CHR_LDO_DET_SW_ADDR MT6351_TOP_RST_CON2
#define MT6351_PMIC_RG_CHR_LDO_DET_SW_MASK 0x1
#define MT6351_PMIC_RG_CHR_LDO_DET_SW_SHIFT 1
#define MT6351_PMIC_RG_CHRWDT_FLAG_MODE_ADDR MT6351_TOP_RST_CON2
#define MT6351_PMIC_RG_CHRWDT_FLAG_MODE_MASK 0x1
#define MT6351_PMIC_RG_CHRWDT_FLAG_MODE_SHIFT 2
#define MT6351_PMIC_RG_CHRWDT_FLAG_SW_ADDR MT6351_TOP_RST_CON2
#define MT6351_PMIC_RG_CHRWDT_FLAG_SW_MASK 0x1
#define MT6351_PMIC_RG_CHRWDT_FLAG_SW_SHIFT 3
#define MT6351_PMIC_TOP_RST_CON2_RSV_ADDR MT6351_TOP_RST_CON2
#define MT6351_PMIC_TOP_RST_CON2_RSV_MASK 0xF
#define MT6351_PMIC_TOP_RST_CON2_RSV_SHIFT 4
#define MT6351_PMIC_RG_WDTRSTB_EN_ADDR MT6351_TOP_RST_MISC
#define MT6351_PMIC_RG_WDTRSTB_EN_MASK 0x1
#define MT6351_PMIC_RG_WDTRSTB_EN_SHIFT 0
#define MT6351_PMIC_RG_WDTRSTB_MODE_ADDR MT6351_TOP_RST_MISC
#define MT6351_PMIC_RG_WDTRSTB_MODE_MASK 0x1
#define MT6351_PMIC_RG_WDTRSTB_MODE_SHIFT 1
#define MT6351_PMIC_WDTRSTB_STATUS_ADDR MT6351_TOP_RST_MISC
#define MT6351_PMIC_WDTRSTB_STATUS_MASK 0x1
#define MT6351_PMIC_WDTRSTB_STATUS_SHIFT 2
#define MT6351_PMIC_WDTRSTB_STATUS_CLR_ADDR MT6351_TOP_RST_MISC
#define MT6351_PMIC_WDTRSTB_STATUS_CLR_MASK 0x1
#define MT6351_PMIC_WDTRSTB_STATUS_CLR_SHIFT 3
#define MT6351_PMIC_RG_WDTRSTB_FB_EN_ADDR MT6351_TOP_RST_MISC
#define MT6351_PMIC_RG_WDTRSTB_FB_EN_MASK 0x1
#define MT6351_PMIC_RG_WDTRSTB_FB_EN_SHIFT 4
#define MT6351_PMIC_RG_WDTRSTB_DEB_ADDR MT6351_TOP_RST_MISC
#define MT6351_PMIC_RG_WDTRSTB_DEB_MASK 0x1
#define MT6351_PMIC_RG_WDTRSTB_DEB_SHIFT 5
#define MT6351_PMIC_RG_HOMEKEY_RST_EN_ADDR MT6351_TOP_RST_MISC
#define MT6351_PMIC_RG_HOMEKEY_RST_EN_MASK 0x1
#define MT6351_PMIC_RG_HOMEKEY_RST_EN_SHIFT 8
#define MT6351_PMIC_RG_PWRKEY_RST_EN_ADDR MT6351_TOP_RST_MISC
#define MT6351_PMIC_RG_PWRKEY_RST_EN_MASK 0x1
#define MT6351_PMIC_RG_PWRKEY_RST_EN_SHIFT 9
#define MT6351_PMIC_RG_PWRRST_TMR_DIS_ADDR MT6351_TOP_RST_MISC
#define MT6351_PMIC_RG_PWRRST_TMR_DIS_MASK 0x1
#define MT6351_PMIC_RG_PWRRST_TMR_DIS_SHIFT 10
#define MT6351_PMIC_RG_PWRKEY_RST_TD_ADDR MT6351_TOP_RST_MISC
#define MT6351_PMIC_RG_PWRKEY_RST_TD_MASK 0x3
#define MT6351_PMIC_RG_PWRKEY_RST_TD_SHIFT 12
#define MT6351_PMIC_TOP_RST_MISC_RSV_ADDR MT6351_TOP_RST_MISC
#define MT6351_PMIC_TOP_RST_MISC_RSV_MASK 0x3
#define MT6351_PMIC_TOP_RST_MISC_RSV_SHIFT 14
#define MT6351_PMIC_TOP_RST_MISC_SET_ADDR MT6351_TOP_RST_MISC_SET
#define MT6351_PMIC_TOP_RST_MISC_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_RST_MISC_SET_SHIFT 0
#define MT6351_PMIC_TOP_RST_MISC_CLR_ADDR MT6351_TOP_RST_MISC_CLR
#define MT6351_PMIC_TOP_RST_MISC_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_RST_MISC_CLR_SHIFT 0
#define MT6351_PMIC_VPWRIN_RSTB_STATUS_ADDR MT6351_TOP_RST_STATUS
#define MT6351_PMIC_VPWRIN_RSTB_STATUS_MASK 0x1
#define MT6351_PMIC_VPWRIN_RSTB_STATUS_SHIFT 0
#define MT6351_PMIC_DDLO_RSTB_STATUS_ADDR MT6351_TOP_RST_STATUS
#define MT6351_PMIC_DDLO_RSTB_STATUS_MASK 0x1
#define MT6351_PMIC_DDLO_RSTB_STATUS_SHIFT 1
#define MT6351_PMIC_UVLO_RSTB_STATUS_ADDR MT6351_TOP_RST_STATUS
#define MT6351_PMIC_UVLO_RSTB_STATUS_MASK 0x1
#define MT6351_PMIC_UVLO_RSTB_STATUS_SHIFT 2
#define MT6351_PMIC_RTC_DDLO_RSTB_STATUS_ADDR MT6351_TOP_RST_STATUS
#define MT6351_PMIC_RTC_DDLO_RSTB_STATUS_MASK 0x1
#define MT6351_PMIC_RTC_DDLO_RSTB_STATUS_SHIFT 3
#define MT6351_PMIC_CHRWDT_REG_RSTB_STATUS_ADDR MT6351_TOP_RST_STATUS
#define MT6351_PMIC_CHRWDT_REG_RSTB_STATUS_MASK 0x1
#define MT6351_PMIC_CHRWDT_REG_RSTB_STATUS_SHIFT 4
#define MT6351_PMIC_CHRDET_REG_RSTB_STATUS_ADDR MT6351_TOP_RST_STATUS
#define MT6351_PMIC_CHRDET_REG_RSTB_STATUS_MASK 0x1
#define MT6351_PMIC_CHRDET_REG_RSTB_STATUS_SHIFT 5
#define MT6351_PMIC_TOP_RST_STATUS_RSV_ADDR MT6351_TOP_RST_STATUS
#define MT6351_PMIC_TOP_RST_STATUS_RSV_MASK 0x3
#define MT6351_PMIC_TOP_RST_STATUS_RSV_SHIFT 6
#define MT6351_PMIC_TOP_RST_STATUS_SET_ADDR MT6351_TOP_RST_STATUS_SET
#define MT6351_PMIC_TOP_RST_STATUS_SET_MASK 0xFFFF
#define MT6351_PMIC_TOP_RST_STATUS_SET_SHIFT 0
#define MT6351_PMIC_TOP_RST_STATUS_CLR_ADDR MT6351_TOP_RST_STATUS_CLR
#define MT6351_PMIC_TOP_RST_STATUS_CLR_MASK 0xFFFF
#define MT6351_PMIC_TOP_RST_STATUS_CLR_SHIFT 0
#define MT6351_PMIC_RG_INT_EN_PWRKEY_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_PWRKEY_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_PWRKEY_SHIFT 0
#define MT6351_PMIC_RG_INT_EN_HOMEKEY_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_HOMEKEY_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_HOMEKEY_SHIFT 1
#define MT6351_PMIC_RG_INT_EN_PWRKEY_R_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_PWRKEY_R_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_PWRKEY_R_SHIFT 2
#define MT6351_PMIC_RG_INT_EN_HOMEKEY_R_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_HOMEKEY_R_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_HOMEKEY_R_SHIFT 3
#define MT6351_PMIC_RG_INT_EN_THR_H_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_THR_H_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_THR_H_SHIFT 4
#define MT6351_PMIC_RG_INT_EN_THR_L_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_THR_L_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_THR_L_SHIFT 5
#define MT6351_PMIC_RG_INT_EN_BAT_H_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_BAT_H_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_BAT_H_SHIFT 6
#define MT6351_PMIC_RG_INT_EN_BAT_L_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_BAT_L_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_BAT_L_SHIFT 7
#define MT6351_PMIC_RG_INT_EN_RTC_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_RTC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_RTC_SHIFT 9
#define MT6351_PMIC_RG_INT_EN_AUDIO_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_AUDIO_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_AUDIO_SHIFT 10
#define MT6351_PMIC_RG_INT_EN_MAD_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_MAD_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_MAD_SHIFT 11
#define MT6351_PMIC_RG_INT_EN_ACCDET_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_ACCDET_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_ACCDET_SHIFT 12
#define MT6351_PMIC_RG_INT_EN_ACCDET_EINT_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_ACCDET_EINT_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_ACCDET_EINT_SHIFT 13
#define MT6351_PMIC_RG_INT_EN_ACCDET_NEGV_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_ACCDET_NEGV_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_ACCDET_NEGV_SHIFT 14
#define MT6351_PMIC_RG_INT_EN_NI_LBAT_INT_ADDR MT6351_INT_CON0
#define MT6351_PMIC_RG_INT_EN_NI_LBAT_INT_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_NI_LBAT_INT_SHIFT 15
#define MT6351_PMIC_INT_CON0_SET_ADDR MT6351_INT_CON0_SET
#define MT6351_PMIC_INT_CON0_SET_MASK 0xFFFF
#define MT6351_PMIC_INT_CON0_SET_SHIFT 0
#define MT6351_PMIC_INT_CON0_CLR_ADDR MT6351_INT_CON0_CLR
#define MT6351_PMIC_INT_CON0_CLR_MASK 0xFFFF
#define MT6351_PMIC_INT_CON0_CLR_SHIFT 0
#define MT6351_PMIC_RG_INT_EN_VCORE_OC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VCORE_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VCORE_OC_SHIFT 0
#define MT6351_PMIC_RG_INT_EN_VGPU_OC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VGPU_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VGPU_OC_SHIFT 1
#define MT6351_PMIC_RG_INT_EN_VSRAM_MD_OC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VSRAM_MD_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VSRAM_MD_OC_SHIFT 2
#define MT6351_PMIC_RG_INT_EN_VMODEM_OC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VMODEM_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VMODEM_OC_SHIFT 3
#define MT6351_PMIC_RG_INT_EN_VM1_OC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VM1_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VM1_OC_SHIFT 4
#define MT6351_PMIC_RG_INT_EN_VS1_OC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VS1_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VS1_OC_SHIFT 5
#define MT6351_PMIC_RG_INT_EN_VS2_OC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VS2_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VS2_OC_SHIFT 6
#define MT6351_PMIC_RG_INT_EN_VPA_OC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VPA_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VPA_OC_SHIFT 7
#define MT6351_PMIC_RG_INT_EN_VCORE_PREOC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VCORE_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VCORE_PREOC_SHIFT 8
#define MT6351_PMIC_RG_INT_EN_VGPU_PREOC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VGPU_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VGPU_PREOC_SHIFT 9
#define MT6351_PMIC_RG_INT_EN_VSRAM_MD_PREOC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VSRAM_MD_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VSRAM_MD_PREOC_SHIFT 10
#define MT6351_PMIC_RG_INT_EN_VMODEM_PREOC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VMODEM_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VMODEM_PREOC_SHIFT 11
#define MT6351_PMIC_RG_INT_EN_VM1_PREOC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VM1_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VM1_PREOC_SHIFT 12
#define MT6351_PMIC_RG_INT_EN_VS1_PREOC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VS1_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VS1_PREOC_SHIFT 13
#define MT6351_PMIC_RG_INT_EN_VS2_PREOC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_VS2_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VS2_PREOC_SHIFT 14
#define MT6351_PMIC_RG_INT_EN_LDO_OC_ADDR MT6351_INT_CON1
#define MT6351_PMIC_RG_INT_EN_LDO_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_LDO_OC_SHIFT 15
#define MT6351_PMIC_INT_CON1_SET_ADDR MT6351_INT_CON1_SET
#define MT6351_PMIC_INT_CON1_SET_MASK 0xFFFF
#define MT6351_PMIC_INT_CON1_SET_SHIFT 0
#define MT6351_PMIC_INT_CON1_CLR_ADDR MT6351_INT_CON1_CLR
#define MT6351_PMIC_INT_CON1_CLR_MASK 0xFFFF
#define MT6351_PMIC_INT_CON1_CLR_SHIFT 0
#define MT6351_PMIC_RG_INT_EN_JEITA_HOT_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_JEITA_HOT_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_JEITA_HOT_SHIFT 0
#define MT6351_PMIC_RG_INT_EN_JEITA_WARM_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_JEITA_WARM_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_JEITA_WARM_SHIFT 1
#define MT6351_PMIC_RG_INT_EN_JEITA_COOL_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_JEITA_COOL_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_JEITA_COOL_SHIFT 2
#define MT6351_PMIC_RG_INT_EN_JEITA_COLD_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_JEITA_COLD_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_JEITA_COLD_SHIFT 3
#define MT6351_PMIC_RG_INT_EN_AUXADC_IMP_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_AUXADC_IMP_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_AUXADC_IMP_SHIFT 4
#define MT6351_PMIC_RG_INT_EN_NAG_C_DLTV_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_NAG_C_DLTV_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_NAG_C_DLTV_SHIFT 5
#define MT6351_PMIC_RG_INT_EN_OV_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_OV_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_OV_SHIFT 8
#define MT6351_PMIC_RG_INT_EN_BVALID_DET_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_BVALID_DET_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_BVALID_DET_SHIFT 9
#define MT6351_PMIC_RG_INT_EN_RGS_BATON_HV_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_RGS_BATON_HV_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_RGS_BATON_HV_SHIFT 10
#define MT6351_PMIC_RG_INT_EN_VBATON_UNDET_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_VBATON_UNDET_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_VBATON_UNDET_SHIFT 11
#define MT6351_PMIC_RG_INT_EN_WATCHDOG_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_WATCHDOG_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_WATCHDOG_SHIFT 12
#define MT6351_PMIC_RG_INT_EN_PCHR_CM_VDEC_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_PCHR_CM_VDEC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_PCHR_CM_VDEC_SHIFT 13
#define MT6351_PMIC_RG_INT_EN_CHRDET_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_CHRDET_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_CHRDET_SHIFT 14
#define MT6351_PMIC_RG_INT_EN_PCHR_CM_VINC_ADDR MT6351_INT_CON2
#define MT6351_PMIC_RG_INT_EN_PCHR_CM_VINC_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_PCHR_CM_VINC_SHIFT 15
#define MT6351_PMIC_INT_CON2_SET_ADDR MT6351_INT_CON2_SET
#define MT6351_PMIC_INT_CON2_SET_MASK 0xFFFF
#define MT6351_PMIC_INT_CON2_SET_SHIFT 0
#define MT6351_PMIC_INT_CON2_CLR_ADDR MT6351_INT_CON2_CLR
#define MT6351_PMIC_INT_CON2_CLR_MASK 0xFFFF
#define MT6351_PMIC_INT_CON2_CLR_SHIFT 0
#define MT6351_PMIC_RG_INT_EN_FG_BAT_H_ADDR MT6351_INT_CON3
#define MT6351_PMIC_RG_INT_EN_FG_BAT_H_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_FG_BAT_H_SHIFT 0
#define MT6351_PMIC_RG_INT_EN_FG_BAT_L_ADDR MT6351_INT_CON3
#define MT6351_PMIC_RG_INT_EN_FG_BAT_L_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_FG_BAT_L_SHIFT 1
#define MT6351_PMIC_RG_INT_EN_FG_CUR_H_ADDR MT6351_INT_CON3
#define MT6351_PMIC_RG_INT_EN_FG_CUR_H_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_FG_CUR_H_SHIFT 2
#define MT6351_PMIC_RG_INT_EN_FG_CUR_L_ADDR MT6351_INT_CON3
#define MT6351_PMIC_RG_INT_EN_FG_CUR_L_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_FG_CUR_L_SHIFT 3
#define MT6351_PMIC_RG_INT_EN_FG_ZCV_ADDR MT6351_INT_CON3
#define MT6351_PMIC_RG_INT_EN_FG_ZCV_MASK 0x1
#define MT6351_PMIC_RG_INT_EN_FG_ZCV_SHIFT 4
#define MT6351_PMIC_INT_CON3_SET_ADDR MT6351_INT_CON3_SET
#define MT6351_PMIC_INT_CON3_SET_MASK 0xFFFF
#define MT6351_PMIC_INT_CON3_SET_SHIFT 0
#define MT6351_PMIC_INT_CON3_CLR_ADDR MT6351_INT_CON3_CLR
#define MT6351_PMIC_INT_CON3_CLR_MASK 0xFFFF
#define MT6351_PMIC_INT_CON3_CLR_SHIFT 0
#define MT6351_PMIC_POLARITY_ADDR MT6351_INT_MISC_CON
#define MT6351_PMIC_POLARITY_MASK 0x1
#define MT6351_PMIC_POLARITY_SHIFT 0
#define MT6351_PMIC_RG_HOMEKEY_INT_SEL_ADDR MT6351_INT_MISC_CON
#define MT6351_PMIC_RG_HOMEKEY_INT_SEL_MASK 0x1
#define MT6351_PMIC_RG_HOMEKEY_INT_SEL_SHIFT 1
#define MT6351_PMIC_RG_PWRKEY_INT_SEL_ADDR MT6351_INT_MISC_CON
#define MT6351_PMIC_RG_PWRKEY_INT_SEL_MASK 0x1
#define MT6351_PMIC_RG_PWRKEY_INT_SEL_SHIFT 2
#define MT6351_PMIC_RG_CHRDET_INT_SEL_ADDR MT6351_INT_MISC_CON
#define MT6351_PMIC_RG_CHRDET_INT_SEL_MASK 0x1
#define MT6351_PMIC_RG_CHRDET_INT_SEL_SHIFT 3
#define MT6351_PMIC_RG_PCHR_CM_VINC_POLARITY_RSV_ADDR MT6351_INT_MISC_CON
#define MT6351_PMIC_RG_PCHR_CM_VINC_POLARITY_RSV_MASK 0x1
#define MT6351_PMIC_RG_PCHR_CM_VINC_POLARITY_RSV_SHIFT 4
#define MT6351_PMIC_RG_PCHR_CM_VDEC_POLARITY_RSV_ADDR MT6351_INT_MISC_CON
#define MT6351_PMIC_RG_PCHR_CM_VDEC_POLARITY_RSV_MASK 0x1
#define MT6351_PMIC_RG_PCHR_CM_VDEC_POLARITY_RSV_SHIFT 5
#define MT6351_PMIC_INT_MISC_CON_SET_ADDR MT6351_INT_MISC_CON_SET
#define MT6351_PMIC_INT_MISC_CON_SET_MASK 0xFFFF
#define MT6351_PMIC_INT_MISC_CON_SET_SHIFT 0
#define MT6351_PMIC_INT_MISC_CON_CLR_ADDR MT6351_INT_MISC_CON_CLR
#define MT6351_PMIC_INT_MISC_CON_CLR_MASK 0xFFFF
#define MT6351_PMIC_INT_MISC_CON_CLR_SHIFT 0
#define MT6351_PMIC_RG_INT_STATUS_PWRKEY_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_PWRKEY_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_PWRKEY_SHIFT 0
#define MT6351_PMIC_RG_INT_STATUS_HOMEKEY_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_HOMEKEY_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_HOMEKEY_SHIFT 1
#define MT6351_PMIC_RG_INT_STATUS_PWRKEY_R_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_PWRKEY_R_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_PWRKEY_R_SHIFT 2
#define MT6351_PMIC_RG_INT_STATUS_HOMEKEY_R_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_HOMEKEY_R_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_HOMEKEY_R_SHIFT 3
#define MT6351_PMIC_RG_INT_STATUS_THR_H_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_THR_H_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_THR_H_SHIFT 4
#define MT6351_PMIC_RG_INT_STATUS_THR_L_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_THR_L_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_THR_L_SHIFT 5
#define MT6351_PMIC_RG_INT_STATUS_BAT_H_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_BAT_H_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_BAT_H_SHIFT 6
#define MT6351_PMIC_RG_INT_STATUS_BAT_L_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_BAT_L_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_BAT_L_SHIFT 7
#define MT6351_PMIC_RG_INT_STATUS_RTC_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_RTC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_RTC_SHIFT 9
#define MT6351_PMIC_RG_INT_STATUS_AUDIO_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_AUDIO_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_AUDIO_SHIFT 10
#define MT6351_PMIC_RG_INT_STATUS_MAD_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_MAD_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_MAD_SHIFT 11
#define MT6351_PMIC_RG_INT_STATUS_ACCDET_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_ACCDET_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_ACCDET_SHIFT 12
#define MT6351_PMIC_RG_INT_STATUS_ACCDET_EINT_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_ACCDET_EINT_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_ACCDET_EINT_SHIFT 13
#define MT6351_PMIC_RG_INT_STATUS_ACCDET_NEGV_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_ACCDET_NEGV_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_ACCDET_NEGV_SHIFT 14
#define MT6351_PMIC_RG_INT_STATUS_NI_LBAT_INT_ADDR MT6351_INT_STATUS0
#define MT6351_PMIC_RG_INT_STATUS_NI_LBAT_INT_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_NI_LBAT_INT_SHIFT 15
#define MT6351_PMIC_RG_INT_STATUS_VCORE_OC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VCORE_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VCORE_OC_SHIFT 0
#define MT6351_PMIC_RG_INT_STATUS_VGPU_OC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VGPU_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VGPU_OC_SHIFT 1
#define MT6351_PMIC_RG_INT_STATUS_VSRAM_MD_OC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VSRAM_MD_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VSRAM_MD_OC_SHIFT 2
#define MT6351_PMIC_RG_INT_STATUS_VMODEM_OC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VMODEM_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VMODEM_OC_SHIFT 3
#define MT6351_PMIC_RG_INT_STATUS_VM1_OC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VM1_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VM1_OC_SHIFT 4
#define MT6351_PMIC_RG_INT_STATUS_VS1_OC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VS1_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VS1_OC_SHIFT 5
#define MT6351_PMIC_RG_INT_STATUS_VS2_OC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VS2_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VS2_OC_SHIFT 6
#define MT6351_PMIC_RG_INT_STATUS_VPA_OC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VPA_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VPA_OC_SHIFT 7
#define MT6351_PMIC_RG_INT_STATUS_VCORE_PREOC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VCORE_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VCORE_PREOC_SHIFT 8
#define MT6351_PMIC_RG_INT_STATUS_VGPU_PREOC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VGPU_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VGPU_PREOC_SHIFT 9
#define MT6351_PMIC_RG_INT_STATUS_VSRAM_MD_PREOC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VSRAM_MD_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VSRAM_MD_PREOC_SHIFT 10
#define MT6351_PMIC_RG_INT_STATUS_VMODEM_PREOC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VMODEM_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VMODEM_PREOC_SHIFT 11
#define MT6351_PMIC_RG_INT_STATUS_VM1_PREOC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VM1_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VM1_PREOC_SHIFT 12
#define MT6351_PMIC_RG_INT_STATUS_VS1_PREOC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VS1_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VS1_PREOC_SHIFT 13
#define MT6351_PMIC_RG_INT_STATUS_VS2_PREOC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_VS2_PREOC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VS2_PREOC_SHIFT 14
#define MT6351_PMIC_RG_INT_STATUS_LDO_OC_ADDR MT6351_INT_STATUS1
#define MT6351_PMIC_RG_INT_STATUS_LDO_OC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_LDO_OC_SHIFT 15
#define MT6351_PMIC_RG_INT_STATUS_JEITA_HOT_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_JEITA_HOT_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_JEITA_HOT_SHIFT 0
#define MT6351_PMIC_RG_INT_STATUS_JEITA_WARM_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_JEITA_WARM_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_JEITA_WARM_SHIFT 1
#define MT6351_PMIC_RG_INT_STATUS_JEITA_COOL_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_JEITA_COOL_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_JEITA_COOL_SHIFT 2
#define MT6351_PMIC_RG_INT_STATUS_JEITA_COLD_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_JEITA_COLD_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_JEITA_COLD_SHIFT 3
#define MT6351_PMIC_RG_INT_STATUS_AUXADC_IMP_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_AUXADC_IMP_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_AUXADC_IMP_SHIFT 4
#define MT6351_PMIC_RG_INT_STATUS_NAG_C_DLTV_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_NAG_C_DLTV_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_NAG_C_DLTV_SHIFT 5
#define MT6351_PMIC_RG_INT_STATUS_OV_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_OV_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_OV_SHIFT 8
#define MT6351_PMIC_RG_INT_STATUS_BVALID_DET_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_BVALID_DET_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_BVALID_DET_SHIFT 9
#define MT6351_PMIC_RG_INT_STATUS_RGS_BATON_HV_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_RGS_BATON_HV_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_RGS_BATON_HV_SHIFT 10
#define MT6351_PMIC_RG_INT_STATUS_VBATON_UNDET_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_VBATON_UNDET_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_VBATON_UNDET_SHIFT 11
#define MT6351_PMIC_RG_INT_STATUS_WATCHDOG_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_WATCHDOG_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_WATCHDOG_SHIFT 12
#define MT6351_PMIC_RG_INT_STATUS_PCHR_CM_VDEC_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_PCHR_CM_VDEC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_PCHR_CM_VDEC_SHIFT 13
#define MT6351_PMIC_RG_INT_STATUS_CHRDET_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_CHRDET_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_CHRDET_SHIFT 14
#define MT6351_PMIC_RG_INT_STATUS_PCHR_CM_VINC_ADDR MT6351_INT_STATUS2
#define MT6351_PMIC_RG_INT_STATUS_PCHR_CM_VINC_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_PCHR_CM_VINC_SHIFT 15
#define MT6351_PMIC_RG_INT_STATUS_FG_BAT_H_ADDR MT6351_INT_STATUS3
#define MT6351_PMIC_RG_INT_STATUS_FG_BAT_H_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_FG_BAT_H_SHIFT 0
#define MT6351_PMIC_RG_INT_STATUS_FG_BAT_L_ADDR MT6351_INT_STATUS3
#define MT6351_PMIC_RG_INT_STATUS_FG_BAT_L_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_FG_BAT_L_SHIFT 1
#define MT6351_PMIC_RG_INT_STATUS_FG_CUR_H_ADDR MT6351_INT_STATUS3
#define MT6351_PMIC_RG_INT_STATUS_FG_CUR_H_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_FG_CUR_H_SHIFT 2
#define MT6351_PMIC_RG_INT_STATUS_FG_CUR_L_ADDR MT6351_INT_STATUS3
#define MT6351_PMIC_RG_INT_STATUS_FG_CUR_L_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_FG_CUR_L_SHIFT 3
#define MT6351_PMIC_RG_INT_STATUS_FG_ZCV_ADDR MT6351_INT_STATUS3
#define MT6351_PMIC_RG_INT_STATUS_FG_ZCV_MASK 0x1
#define MT6351_PMIC_RG_INT_STATUS_FG_ZCV_SHIFT 4
#define MT6351_PMIC_OC_GEAR_LDO_ADDR MT6351_OC_GEAR_0
#define MT6351_PMIC_OC_GEAR_LDO_MASK 0x3
#define MT6351_PMIC_OC_GEAR_LDO_SHIFT 0
#define MT6351_PMIC_FQMTR_TCKSEL_ADDR MT6351_FQMTR_CON0
#define MT6351_PMIC_FQMTR_TCKSEL_MASK 0x7
#define MT6351_PMIC_FQMTR_TCKSEL_SHIFT 0
#define MT6351_PMIC_FQMTR_BUSY_ADDR MT6351_FQMTR_CON0
#define MT6351_PMIC_FQMTR_BUSY_MASK 0x1
#define MT6351_PMIC_FQMTR_BUSY_SHIFT 3
#define MT6351_PMIC_FQMTR_EN_ADDR MT6351_FQMTR_CON0
#define MT6351_PMIC_FQMTR_EN_MASK 0x1
#define MT6351_PMIC_FQMTR_EN_SHIFT 15
#define MT6351_PMIC_FQMTR_WINSET_ADDR MT6351_FQMTR_CON1
#define MT6351_PMIC_FQMTR_WINSET_MASK 0xFFFF
#define MT6351_PMIC_FQMTR_WINSET_SHIFT 0
#define MT6351_PMIC_FQMTR_DATA_ADDR MT6351_FQMTR_CON2
#define MT6351_PMIC_FQMTR_DATA_MASK 0xFFFF
#define MT6351_PMIC_FQMTR_DATA_SHIFT 0
#define MT6351_PMIC_RG_SLP_RW_EN_ADDR MT6351_RG_SPI_CON
#define MT6351_PMIC_RG_SLP_RW_EN_MASK 0x1
#define MT6351_PMIC_RG_SLP_RW_EN_SHIFT 0
#define MT6351_PMIC_RG_SPI_RSV_ADDR MT6351_RG_SPI_CON
#define MT6351_PMIC_RG_SPI_RSV_MASK 0x7FFF
#define MT6351_PMIC_RG_SPI_RSV_SHIFT 1
#define MT6351_PMIC_DEW_DIO_EN_ADDR MT6351_DEW_DIO_EN
#define MT6351_PMIC_DEW_DIO_EN_MASK 0x1
#define MT6351_PMIC_DEW_DIO_EN_SHIFT 0
#define MT6351_PMIC_DEW_READ_TEST_ADDR MT6351_DEW_READ_TEST
#define MT6351_PMIC_DEW_READ_TEST_MASK 0xFFFF
#define MT6351_PMIC_DEW_READ_TEST_SHIFT 0
#define MT6351_PMIC_DEW_WRITE_TEST_ADDR MT6351_DEW_WRITE_TEST
#define MT6351_PMIC_DEW_WRITE_TEST_MASK 0xFFFF
#define MT6351_PMIC_DEW_WRITE_TEST_SHIFT 0
#define MT6351_PMIC_DEW_CRC_SWRST_ADDR MT6351_DEW_CRC_SWRST
#define MT6351_PMIC_DEW_CRC_SWRST_MASK 0x1
#define MT6351_PMIC_DEW_CRC_SWRST_SHIFT 0
#define MT6351_PMIC_DEW_CRC_EN_ADDR MT6351_DEW_CRC_EN
#define MT6351_PMIC_DEW_CRC_EN_MASK 0x1
#define MT6351_PMIC_DEW_CRC_EN_SHIFT 0
#define MT6351_PMIC_DEW_CRC_VAL_ADDR MT6351_DEW_CRC_VAL
#define MT6351_PMIC_DEW_CRC_VAL_MASK 0xFF
#define MT6351_PMIC_DEW_CRC_VAL_SHIFT 0
#define MT6351_PMIC_DEW_DBG_MON_SEL_ADDR MT6351_DEW_DBG_MON_SEL
#define MT6351_PMIC_DEW_DBG_MON_SEL_MASK 0xF
#define MT6351_PMIC_DEW_DBG_MON_SEL_SHIFT 0
#define MT6351_PMIC_DEW_CIPHER_KEY_SEL_ADDR MT6351_DEW_CIPHER_KEY_SEL
#define MT6351_PMIC_DEW_CIPHER_KEY_SEL_MASK 0x3
#define MT6351_PMIC_DEW_CIPHER_KEY_SEL_SHIFT 0
#define MT6351_PMIC_DEW_CIPHER_IV_SEL_ADDR MT6351_DEW_CIPHER_IV_SEL
#define MT6351_PMIC_DEW_CIPHER_IV_SEL_MASK 0x3
#define MT6351_PMIC_DEW_CIPHER_IV_SEL_SHIFT 0
#define MT6351_PMIC_DEW_CIPHER_EN_ADDR MT6351_DEW_CIPHER_EN
#define MT6351_PMIC_DEW_CIPHER_EN_MASK 0x1
#define MT6351_PMIC_DEW_CIPHER_EN_SHIFT 0
#define MT6351_PMIC_DEW_CIPHER_RDY_ADDR MT6351_DEW_CIPHER_RDY
#define MT6351_PMIC_DEW_CIPHER_RDY_MASK 0x1
#define MT6351_PMIC_DEW_CIPHER_RDY_SHIFT 0
#define MT6351_PMIC_DEW_CIPHER_MODE_ADDR MT6351_DEW_CIPHER_MODE
#define MT6351_PMIC_DEW_CIPHER_MODE_MASK 0x1
#define MT6351_PMIC_DEW_CIPHER_MODE_SHIFT 0
#define MT6351_PMIC_DEW_CIPHER_SWRST_ADDR MT6351_DEW_CIPHER_SWRST
#define MT6351_PMIC_DEW_CIPHER_SWRST_MASK 0x1
#define MT6351_PMIC_DEW_CIPHER_SWRST_SHIFT 0
#define MT6351_PMIC_DEW_RDDMY_NO_ADDR MT6351_DEW_RDDMY_NO
#define MT6351_PMIC_DEW_RDDMY_NO_MASK 0xF
#define MT6351_PMIC_DEW_RDDMY_NO_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON0_ADDR MT6351_INT_TYPE_CON0
#define MT6351_PMIC_INT_TYPE_CON0_MASK 0xFFFF
#define MT6351_PMIC_INT_TYPE_CON0_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON0_SET_ADDR MT6351_INT_TYPE_CON0_SET
#define MT6351_PMIC_INT_TYPE_CON0_SET_MASK 0xFFFF
#define MT6351_PMIC_INT_TYPE_CON0_SET_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON0_CLR_ADDR MT6351_INT_TYPE_CON0_CLR
#define MT6351_PMIC_INT_TYPE_CON0_CLR_MASK 0xFFFF
#define MT6351_PMIC_INT_TYPE_CON0_CLR_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON1_ADDR MT6351_INT_TYPE_CON1
#define MT6351_PMIC_INT_TYPE_CON1_MASK 0xFFFF
#define MT6351_PMIC_INT_TYPE_CON1_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON1_SET_ADDR MT6351_INT_TYPE_CON1_SET
#define MT6351_PMIC_INT_TYPE_CON1_SET_MASK 0xFFFF
#define MT6351_PMIC_INT_TYPE_CON1_SET_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON1_CLR_ADDR MT6351_INT_TYPE_CON1_CLR
#define MT6351_PMIC_INT_TYPE_CON1_CLR_MASK 0xFFFF
#define MT6351_PMIC_INT_TYPE_CON1_CLR_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON2_ADDR MT6351_INT_TYPE_CON2
#define MT6351_PMIC_INT_TYPE_CON2_MASK 0xFFFF
#define MT6351_PMIC_INT_TYPE_CON2_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON2_SET_ADDR MT6351_INT_TYPE_CON2_SET
#define MT6351_PMIC_INT_TYPE_CON2_SET_MASK 0xFFFF
#define MT6351_PMIC_INT_TYPE_CON2_SET_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON2_CLR_ADDR MT6351_INT_TYPE_CON2_CLR
#define MT6351_PMIC_INT_TYPE_CON2_CLR_MASK 0xFFFF
#define MT6351_PMIC_INT_TYPE_CON2_CLR_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON3_ADDR MT6351_INT_TYPE_CON3
#define MT6351_PMIC_INT_TYPE_CON3_MASK 0x1F
#define MT6351_PMIC_INT_TYPE_CON3_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON3_SET_ADDR MT6351_INT_TYPE_CON3_SET
#define MT6351_PMIC_INT_TYPE_CON3_SET_MASK 0x1F
#define MT6351_PMIC_INT_TYPE_CON3_SET_SHIFT 0
#define MT6351_PMIC_INT_TYPE_CON3_CLR_ADDR MT6351_INT_TYPE_CON3_CLR
#define MT6351_PMIC_INT_TYPE_CON3_CLR_MASK 0x1F
#define MT6351_PMIC_INT_TYPE_CON3_CLR_SHIFT 0
#define MT6351_PMIC_CPU_INT_STA_ADDR MT6351_INT_STA
#define MT6351_PMIC_CPU_INT_STA_MASK 0x1
#define MT6351_PMIC_CPU_INT_STA_SHIFT 0
#define MT6351_PMIC_MD32_INT_STA_ADDR MT6351_INT_STA
#define MT6351_PMIC_MD32_INT_STA_MASK 0x1
#define MT6351_PMIC_MD32_INT_STA_SHIFT 1
#define MT6351_PMIC_BUCK_LDO_FT_TESTMODE_EN_ADDR MT6351_BUCK_ALL_CON0
#define MT6351_PMIC_BUCK_LDO_FT_TESTMODE_EN_MASK 0x1
#define MT6351_PMIC_BUCK_LDO_FT_TESTMODE_EN_SHIFT 0
#define MT6351_PMIC_BUCK_ALL_CON0_RSV1_ADDR MT6351_BUCK_ALL_CON0
#define MT6351_PMIC_BUCK_ALL_CON0_RSV1_MASK 0x7F
#define MT6351_PMIC_BUCK_ALL_CON0_RSV1_SHIFT 1
#define MT6351_PMIC_BUCK_ALL_CON0_RSV0_ADDR MT6351_BUCK_ALL_CON0
#define MT6351_PMIC_BUCK_ALL_CON0_RSV0_MASK 0xFF
#define MT6351_PMIC_BUCK_ALL_CON0_RSV0_SHIFT 8
#define MT6351_PMIC_BUCK_BUCK_RSV_ADDR MT6351_BUCK_ALL_CON1
#define MT6351_PMIC_BUCK_BUCK_RSV_MASK 0xFFFF
#define MT6351_PMIC_BUCK_BUCK_RSV_SHIFT 0
#define MT6351_PMIC_BUCK_BUCK_OSC_SEL_SRCLKEN_SEL_ADDR MT6351_BUCK_ALL_CON2
#define MT6351_PMIC_BUCK_BUCK_OSC_SEL_SRCLKEN_SEL_MASK 0x3
#define MT6351_PMIC_BUCK_BUCK_OSC_SEL_SRCLKEN_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_BUCK_R2R_PDN_SRCLKEN_SEL_ADDR MT6351_BUCK_ALL_CON2
#define MT6351_PMIC_BUCK_BUCK_R2R_PDN_SRCLKEN_SEL_MASK 0x3
#define MT6351_PMIC_BUCK_BUCK_R2R_PDN_SRCLKEN_SEL_SHIFT 4
#define MT6351_PMIC_BUCK_BUCK_VSLEEP_SRCLKEN_SEL_ADDR MT6351_BUCK_ALL_CON2
#define MT6351_PMIC_BUCK_BUCK_VSLEEP_SRCLKEN_SEL_MASK 0x3
#define MT6351_PMIC_BUCK_BUCK_VSLEEP_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_BUCK_ALL_CON2_RSV0_ADDR MT6351_BUCK_ALL_CON2
#define MT6351_PMIC_BUCK_ALL_CON2_RSV0_MASK 0x1F
#define MT6351_PMIC_BUCK_ALL_CON2_RSV0_SHIFT 11
#define MT6351_PMIC_BUCK_VSLEEP_SRC0_ADDR MT6351_BUCK_ALL_CON3
#define MT6351_PMIC_BUCK_VSLEEP_SRC0_MASK 0x1FF
#define MT6351_PMIC_BUCK_VSLEEP_SRC0_SHIFT 0
#define MT6351_PMIC_BUCK_VSLEEP_SRC1_ADDR MT6351_BUCK_ALL_CON3
#define MT6351_PMIC_BUCK_VSLEEP_SRC1_MASK 0xF
#define MT6351_PMIC_BUCK_VSLEEP_SRC1_SHIFT 12
#define MT6351_PMIC_BUCK_R2R_SRC0_ADDR MT6351_BUCK_ALL_CON4
#define MT6351_PMIC_BUCK_R2R_SRC0_MASK 0x1FF
#define MT6351_PMIC_BUCK_R2R_SRC0_SHIFT 0
#define MT6351_PMIC_BUCK_R2R_SRC1_ADDR MT6351_BUCK_ALL_CON4
#define MT6351_PMIC_BUCK_R2R_SRC1_MASK 0xF
#define MT6351_PMIC_BUCK_R2R_SRC1_SHIFT 12
#define MT6351_PMIC_BUCK_BUCK_OSC_SEL_SRC0_ADDR MT6351_BUCK_ALL_CON5
#define MT6351_PMIC_BUCK_BUCK_OSC_SEL_SRC0_MASK 0x1FF
#define MT6351_PMIC_BUCK_BUCK_OSC_SEL_SRC0_SHIFT 0
#define MT6351_PMIC_BUCK_SRCLKEN_DLY_SRC1_ADDR MT6351_BUCK_ALL_CON5
#define MT6351_PMIC_BUCK_SRCLKEN_DLY_SRC1_MASK 0xF
#define MT6351_PMIC_BUCK_SRCLKEN_DLY_SRC1_SHIFT 12
#define MT6351_PMIC_BUCK_VSRAM_PROC_BIN2GRAY_MAP_ENB_ADDR MT6351_BUCK_ALL_CON6
#define MT6351_PMIC_BUCK_VSRAM_PROC_BIN2GRAY_MAP_ENB_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_PROC_BIN2GRAY_MAP_ENB_SHIFT 0
#define MT6351_PMIC_BUCK_VS2_BIN2GRAY_MAP_ENB_ADDR MT6351_BUCK_ALL_CON6
#define MT6351_PMIC_BUCK_VS2_BIN2GRAY_MAP_ENB_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_BIN2GRAY_MAP_ENB_SHIFT 1
#define MT6351_PMIC_BUCK_VS1_BIN2GRAY_MAP_ENB_ADDR MT6351_BUCK_ALL_CON6
#define MT6351_PMIC_BUCK_VS1_BIN2GRAY_MAP_ENB_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_BIN2GRAY_MAP_ENB_SHIFT 2
#define MT6351_PMIC_BUCK_VSRAM_MD_BIN2GRAY_MAP_ENB_ADDR MT6351_BUCK_ALL_CON6
#define MT6351_PMIC_BUCK_VSRAM_MD_BIN2GRAY_MAP_ENB_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_BIN2GRAY_MAP_ENB_SHIFT 3
#define MT6351_PMIC_BUCK_VMD1_BIN2GRAY_MAP_ENB_ADDR MT6351_BUCK_ALL_CON6
#define MT6351_PMIC_BUCK_VMD1_BIN2GRAY_MAP_ENB_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_BIN2GRAY_MAP_ENB_SHIFT 4
#define MT6351_PMIC_BUCK_VPA_BIN2GRAY_MAP_ENB_ADDR MT6351_BUCK_ALL_CON6
#define MT6351_PMIC_BUCK_VPA_BIN2GRAY_MAP_ENB_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_BIN2GRAY_MAP_ENB_SHIFT 5
#define MT6351_PMIC_BUCK_VMODEM_BIN2GRAY_MAP_ENB_ADDR MT6351_BUCK_ALL_CON6
#define MT6351_PMIC_BUCK_VMODEM_BIN2GRAY_MAP_ENB_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_BIN2GRAY_MAP_ENB_SHIFT 6
#define MT6351_PMIC_BUCK_VGPU_BIN2GRAY_MAP_ENB_ADDR MT6351_BUCK_ALL_CON6
#define MT6351_PMIC_BUCK_VGPU_BIN2GRAY_MAP_ENB_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_BIN2GRAY_MAP_ENB_SHIFT 7
#define MT6351_PMIC_BUCK_VCORE_BIN2GRAY_MAP_ENB_ADDR MT6351_BUCK_ALL_CON6
#define MT6351_PMIC_BUCK_VCORE_BIN2GRAY_MAP_ENB_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_BIN2GRAY_MAP_ENB_SHIFT 8
#define MT6351_PMIC_BUCK_VPA_VOSEL_DLC011_ADDR MT6351_BUCK_DLC_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_VOSEL_DLC011_MASK 0x3F
#define MT6351_PMIC_BUCK_VPA_VOSEL_DLC011_SHIFT 0
#define MT6351_PMIC_BUCK_VPA_VOSEL_DLC111_ADDR MT6351_BUCK_DLC_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_VOSEL_DLC111_MASK 0x3F
#define MT6351_PMIC_BUCK_VPA_VOSEL_DLC111_SHIFT 8
#define MT6351_PMIC_BUCK_VPA_DLC_MAP_EN_ADDR MT6351_BUCK_DLC_VPA_CON1
#define MT6351_PMIC_BUCK_VPA_DLC_MAP_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_DLC_MAP_EN_SHIFT 0
#define MT6351_PMIC_BUCK_VPA_VOSEL_DLC001_ADDR MT6351_BUCK_DLC_VPA_CON1
#define MT6351_PMIC_BUCK_VPA_VOSEL_DLC001_MASK 0x3F
#define MT6351_PMIC_BUCK_VPA_VOSEL_DLC001_SHIFT 8
#define MT6351_PMIC_BUCK_VPA_DLC_ADDR MT6351_BUCK_DLC_VPA_CON2
#define MT6351_PMIC_BUCK_VPA_DLC_MASK 0x7
#define MT6351_PMIC_BUCK_VPA_DLC_SHIFT 0
#define MT6351_PMIC_DA_NI_VPA_DLC_ADDR MT6351_BUCK_DLC_VPA_CON2
#define MT6351_PMIC_DA_NI_VPA_DLC_MASK 0x7
#define MT6351_PMIC_DA_NI_VPA_DLC_SHIFT 12
#define MT6351_PMIC_BUCK_VPA_DVS_TRANS_TD_ADDR MT6351_BUCK_DVS_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_DVS_TRANS_TD_MASK 0x3
#define MT6351_PMIC_BUCK_VPA_DVS_TRANS_TD_SHIFT 0
#define MT6351_PMIC_BUCK_VPA_DVS_TRANS_CTRL_ADDR MT6351_BUCK_DVS_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_DVS_TRANS_CTRL_MASK 0x3
#define MT6351_PMIC_BUCK_VPA_DVS_TRANS_CTRL_SHIFT 4
#define MT6351_PMIC_BUCK_VPA_DVS_TRANS_ONCE_ADDR MT6351_BUCK_DVS_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_DVS_TRANS_ONCE_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_DVS_TRANS_ONCE_SHIFT 6
#define MT6351_PMIC_DA_NI_VPA_DVS_TRANST_ADDR MT6351_BUCK_DVS_VPA_CON0
#define MT6351_PMIC_DA_NI_VPA_DVS_TRANST_MASK 0x1
#define MT6351_PMIC_DA_NI_VPA_DVS_TRANST_SHIFT 7
#define MT6351_PMIC_BUCK_VPA_DIG0_RSV5_ADDR MT6351_BUCK_DVS_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_DIG0_RSV5_MASK 0xF
#define MT6351_PMIC_BUCK_VPA_DIG0_RSV5_SHIFT 8
#define MT6351_PMIC_BUCK_VPA_DIG1_RSV5_ADDR MT6351_BUCK_DVS_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_DIG1_RSV5_MASK 0xF
#define MT6351_PMIC_BUCK_VPA_DIG1_RSV5_SHIFT 12
#define MT6351_PMIC_BUCK_VCORE_VOSEL_AUD_ADDR MT6351_BUCK_VOW_CON0
#define MT6351_PMIC_BUCK_VCORE_VOSEL_AUD_MASK 0x7F
#define MT6351_PMIC_BUCK_VCORE_VOSEL_AUD_SHIFT 0
#define MT6351_PMIC_BUCK_VCORE_DVFS_DONE_ADDR MT6351_BUCK_VOW_CON1
#define MT6351_PMIC_BUCK_VCORE_DVFS_DONE_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_DVFS_DONE_SHIFT 0
#define MT6351_PMIC_BUCK_VCORE_DVFS_DONE_SW_ADDR MT6351_BUCK_VOW_CON1
#define MT6351_PMIC_BUCK_VCORE_DVFS_DONE_SW_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_DVFS_DONE_SW_SHIFT 1
#define MT6351_PMIC_BUCK_VCORE_DVFS_DONE_STA_ADDR MT6351_BUCK_VOW_CON1
#define MT6351_PMIC_BUCK_VCORE_DVFS_DONE_STA_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_DVFS_DONE_STA_SHIFT 4
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_AUD_ADDR MT6351_BUCK_VOW_CON2
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_AUD_MASK 0x7F
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_AUD_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_ADDR MT6351_BUCK_VOW_CON3
#define MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_SW_ADDR MT6351_BUCK_VOW_CON3
#define MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_SW_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_SW_SHIFT 1
#define MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_STA_ADDR MT6351_BUCK_VOW_CON3
#define MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_STA_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_STA_SHIFT 4
#define MT6351_PMIC_BUCK_VCORE_OC_STATUS_ADDR MT6351_BUCK_OC_CON0
#define MT6351_PMIC_BUCK_VCORE_OC_STATUS_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_OC_STATUS_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_OC_STATUS_ADDR MT6351_BUCK_OC_CON0
#define MT6351_PMIC_BUCK_VGPU_OC_STATUS_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_OC_STATUS_SHIFT 1
#define MT6351_PMIC_BUCK_VMODEM_OC_STATUS_ADDR MT6351_BUCK_OC_CON0
#define MT6351_PMIC_BUCK_VMODEM_OC_STATUS_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_OC_STATUS_SHIFT 2
#define MT6351_PMIC_BUCK_VMD1_OC_STATUS_ADDR MT6351_BUCK_OC_CON0
#define MT6351_PMIC_BUCK_VMD1_OC_STATUS_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_OC_STATUS_SHIFT 3
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_STATUS_ADDR MT6351_BUCK_OC_CON0
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_STATUS_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_STATUS_SHIFT 4
#define MT6351_PMIC_BUCK_VS1_OC_STATUS_ADDR MT6351_BUCK_OC_CON0
#define MT6351_PMIC_BUCK_VS1_OC_STATUS_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_OC_STATUS_SHIFT 5
#define MT6351_PMIC_BUCK_VS2_OC_STATUS_ADDR MT6351_BUCK_OC_CON0
#define MT6351_PMIC_BUCK_VS2_OC_STATUS_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_OC_STATUS_SHIFT 6
#define MT6351_PMIC_BUCK_VPA_OC_STATUS_ADDR MT6351_BUCK_OC_CON0
#define MT6351_PMIC_BUCK_VPA_OC_STATUS_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_OC_STATUS_SHIFT 7
#define MT6351_PMIC_BUCK_VCORE_OC_INT_EN_ADDR MT6351_BUCK_OC_CON1
#define MT6351_PMIC_BUCK_VCORE_OC_INT_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_OC_INT_EN_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_OC_INT_EN_ADDR MT6351_BUCK_OC_CON1
#define MT6351_PMIC_BUCK_VGPU_OC_INT_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_OC_INT_EN_SHIFT 1
#define MT6351_PMIC_BUCK_VMODEM_OC_INT_EN_ADDR MT6351_BUCK_OC_CON1
#define MT6351_PMIC_BUCK_VMODEM_OC_INT_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_OC_INT_EN_SHIFT 2
#define MT6351_PMIC_BUCK_VMD1_OC_INT_EN_ADDR MT6351_BUCK_OC_CON1
#define MT6351_PMIC_BUCK_VMD1_OC_INT_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_OC_INT_EN_SHIFT 3
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_INT_EN_ADDR MT6351_BUCK_OC_CON1
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_INT_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_INT_EN_SHIFT 4
#define MT6351_PMIC_BUCK_VS1_OC_INT_EN_ADDR MT6351_BUCK_OC_CON1
#define MT6351_PMIC_BUCK_VS1_OC_INT_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_OC_INT_EN_SHIFT 5
#define MT6351_PMIC_BUCK_VS2_OC_INT_EN_ADDR MT6351_BUCK_OC_CON1
#define MT6351_PMIC_BUCK_VS2_OC_INT_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_OC_INT_EN_SHIFT 6
#define MT6351_PMIC_BUCK_VPA_OC_INT_EN_ADDR MT6351_BUCK_OC_CON1
#define MT6351_PMIC_BUCK_VPA_OC_INT_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_OC_INT_EN_SHIFT 7
#define MT6351_PMIC_BUCK_VCORE_EN_OC_SDN_SEL_ADDR MT6351_BUCK_OC_CON2
#define MT6351_PMIC_BUCK_VCORE_EN_OC_SDN_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_EN_OC_SDN_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_EN_OC_SDN_SEL_ADDR MT6351_BUCK_OC_CON2
#define MT6351_PMIC_BUCK_VGPU_EN_OC_SDN_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_EN_OC_SDN_SEL_SHIFT 1
#define MT6351_PMIC_BUCK_VMODEM_EN_OC_SDN_SEL_ADDR MT6351_BUCK_OC_CON2
#define MT6351_PMIC_BUCK_VMODEM_EN_OC_SDN_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_EN_OC_SDN_SEL_SHIFT 2
#define MT6351_PMIC_BUCK_VMD1_EN_OC_SDN_SEL_ADDR MT6351_BUCK_OC_CON2
#define MT6351_PMIC_BUCK_VMD1_EN_OC_SDN_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_EN_OC_SDN_SEL_SHIFT 3
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_OC_SDN_SEL_ADDR MT6351_BUCK_OC_CON2
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_OC_SDN_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_OC_SDN_SEL_SHIFT 4
#define MT6351_PMIC_BUCK_VS1_EN_OC_SDN_SEL_ADDR MT6351_BUCK_OC_CON2
#define MT6351_PMIC_BUCK_VS1_EN_OC_SDN_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_EN_OC_SDN_SEL_SHIFT 5
#define MT6351_PMIC_BUCK_VS2_EN_OC_SDN_SEL_ADDR MT6351_BUCK_OC_CON2
#define MT6351_PMIC_BUCK_VS2_EN_OC_SDN_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_EN_OC_SDN_SEL_SHIFT 6
#define MT6351_PMIC_BUCK_VPA_EN_OC_SDN_SEL_ADDR MT6351_BUCK_OC_CON2
#define MT6351_PMIC_BUCK_VPA_EN_OC_SDN_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_EN_OC_SDN_SEL_SHIFT 7
#define MT6351_PMIC_BUCK_VCORE_OC_FLAG_CLR_ADDR MT6351_BUCK_OC_CON3
#define MT6351_PMIC_BUCK_VCORE_OC_FLAG_CLR_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_OC_FLAG_CLR_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_OC_FLAG_CLR_ADDR MT6351_BUCK_OC_CON3
#define MT6351_PMIC_BUCK_VGPU_OC_FLAG_CLR_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_OC_FLAG_CLR_SHIFT 1
#define MT6351_PMIC_BUCK_VMODEM_OC_FLAG_CLR_ADDR MT6351_BUCK_OC_CON3
#define MT6351_PMIC_BUCK_VMODEM_OC_FLAG_CLR_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_OC_FLAG_CLR_SHIFT 2
#define MT6351_PMIC_BUCK_VMD1_OC_FLAG_CLR_ADDR MT6351_BUCK_OC_CON3
#define MT6351_PMIC_BUCK_VMD1_OC_FLAG_CLR_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_OC_FLAG_CLR_SHIFT 3
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR_ADDR MT6351_BUCK_OC_CON3
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR_SHIFT 4
#define MT6351_PMIC_BUCK_VS1_OC_FLAG_CLR_ADDR MT6351_BUCK_OC_CON3
#define MT6351_PMIC_BUCK_VS1_OC_FLAG_CLR_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_OC_FLAG_CLR_SHIFT 5
#define MT6351_PMIC_BUCK_VS2_OC_FLAG_CLR_ADDR MT6351_BUCK_OC_CON3
#define MT6351_PMIC_BUCK_VS2_OC_FLAG_CLR_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_OC_FLAG_CLR_SHIFT 6
#define MT6351_PMIC_BUCK_VPA_OC_FLAG_CLR_ADDR MT6351_BUCK_OC_CON3
#define MT6351_PMIC_BUCK_VPA_OC_FLAG_CLR_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_OC_FLAG_CLR_SHIFT 7
#define MT6351_PMIC_BUCK_VCORE_OC_FLAG_CLR_SEL_ADDR MT6351_BUCK_OC_CON4
#define MT6351_PMIC_BUCK_VCORE_OC_FLAG_CLR_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_OC_FLAG_CLR_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_OC_FLAG_CLR_SEL_ADDR MT6351_BUCK_OC_CON4
#define MT6351_PMIC_BUCK_VGPU_OC_FLAG_CLR_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_OC_FLAG_CLR_SEL_SHIFT 1
#define MT6351_PMIC_BUCK_VMODEM_OC_FLAG_CLR_SEL_ADDR MT6351_BUCK_OC_CON4
#define MT6351_PMIC_BUCK_VMODEM_OC_FLAG_CLR_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_OC_FLAG_CLR_SEL_SHIFT 2
#define MT6351_PMIC_BUCK_VMD1_OC_FLAG_CLR_SEL_ADDR MT6351_BUCK_OC_CON4
#define MT6351_PMIC_BUCK_VMD1_OC_FLAG_CLR_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_OC_FLAG_CLR_SEL_SHIFT 3
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR_SEL_ADDR MT6351_BUCK_OC_CON4
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR_SEL_SHIFT 4
#define MT6351_PMIC_BUCK_VS1_OC_FLAG_CLR_SEL_ADDR MT6351_BUCK_OC_CON4
#define MT6351_PMIC_BUCK_VS1_OC_FLAG_CLR_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_OC_FLAG_CLR_SEL_SHIFT 5
#define MT6351_PMIC_BUCK_VS2_OC_FLAG_CLR_SEL_ADDR MT6351_BUCK_OC_CON4
#define MT6351_PMIC_BUCK_VS2_OC_FLAG_CLR_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_OC_FLAG_CLR_SEL_SHIFT 6
#define MT6351_PMIC_BUCK_VPA_OC_FLAG_CLR_SEL_ADDR MT6351_BUCK_OC_CON4
#define MT6351_PMIC_BUCK_VPA_OC_FLAG_CLR_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_OC_FLAG_CLR_SEL_SHIFT 7
#define MT6351_PMIC_BUCK_VCORE_OC_DEG_EN_ADDR MT6351_BUCK_OC_VCORE_CON0
#define MT6351_PMIC_BUCK_VCORE_OC_DEG_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_OC_DEG_EN_SHIFT 1
#define MT6351_PMIC_BUCK_VCORE_OC_WND_ADDR MT6351_BUCK_OC_VCORE_CON0
#define MT6351_PMIC_BUCK_VCORE_OC_WND_MASK 0x3
#define MT6351_PMIC_BUCK_VCORE_OC_WND_SHIFT 2
#define MT6351_PMIC_BUCK_VCORE_OC_THD_ADDR MT6351_BUCK_OC_VCORE_CON0
#define MT6351_PMIC_BUCK_VCORE_OC_THD_MASK 0x3
#define MT6351_PMIC_BUCK_VCORE_OC_THD_SHIFT 6
#define MT6351_PMIC_BUCK_VGPU_OC_DEG_EN_ADDR MT6351_BUCK_OC_VGPU_CON0
#define MT6351_PMIC_BUCK_VGPU_OC_DEG_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_OC_DEG_EN_SHIFT 1
#define MT6351_PMIC_BUCK_VGPU_OC_WND_ADDR MT6351_BUCK_OC_VGPU_CON0
#define MT6351_PMIC_BUCK_VGPU_OC_WND_MASK 0x3
#define MT6351_PMIC_BUCK_VGPU_OC_WND_SHIFT 2
#define MT6351_PMIC_BUCK_VGPU_OC_THD_ADDR MT6351_BUCK_OC_VGPU_CON0
#define MT6351_PMIC_BUCK_VGPU_OC_THD_MASK 0x3
#define MT6351_PMIC_BUCK_VGPU_OC_THD_SHIFT 6
#define MT6351_PMIC_BUCK_VMODEM_OC_DEG_EN_ADDR MT6351_BUCK_OC_VMODEM_CON0
#define MT6351_PMIC_BUCK_VMODEM_OC_DEG_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_OC_DEG_EN_SHIFT 1
#define MT6351_PMIC_BUCK_VMODEM_OC_WND_ADDR MT6351_BUCK_OC_VMODEM_CON0
#define MT6351_PMIC_BUCK_VMODEM_OC_WND_MASK 0x3
#define MT6351_PMIC_BUCK_VMODEM_OC_WND_SHIFT 2
#define MT6351_PMIC_BUCK_VMODEM_OC_THD_ADDR MT6351_BUCK_OC_VMODEM_CON0
#define MT6351_PMIC_BUCK_VMODEM_OC_THD_MASK 0x3
#define MT6351_PMIC_BUCK_VMODEM_OC_THD_SHIFT 6
#define MT6351_PMIC_BUCK_VMD1_OC_DEG_EN_ADDR MT6351_BUCK_OC_VMD1_CON0
#define MT6351_PMIC_BUCK_VMD1_OC_DEG_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_OC_DEG_EN_SHIFT 1
#define MT6351_PMIC_BUCK_VMD1_OC_WND_ADDR MT6351_BUCK_OC_VMD1_CON0
#define MT6351_PMIC_BUCK_VMD1_OC_WND_MASK 0x3
#define MT6351_PMIC_BUCK_VMD1_OC_WND_SHIFT 2
#define MT6351_PMIC_BUCK_VMD1_OC_THD_ADDR MT6351_BUCK_OC_VMD1_CON0
#define MT6351_PMIC_BUCK_VMD1_OC_THD_MASK 0x3
#define MT6351_PMIC_BUCK_VMD1_OC_THD_SHIFT 6
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_DEG_EN_ADDR MT6351_BUCK_OC_VSRAM_MD_CON0
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_DEG_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_DEG_EN_SHIFT 1
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_WND_ADDR MT6351_BUCK_OC_VSRAM_MD_CON0
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_WND_MASK 0x3
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_WND_SHIFT 2
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_THD_ADDR MT6351_BUCK_OC_VSRAM_MD_CON0
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_THD_MASK 0x3
#define MT6351_PMIC_BUCK_VSRAM_MD_OC_THD_SHIFT 6
#define MT6351_PMIC_BUCK_VS1_OC_DEG_EN_ADDR MT6351_BUCK_OC_VS1_CON0
#define MT6351_PMIC_BUCK_VS1_OC_DEG_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_OC_DEG_EN_SHIFT 1
#define MT6351_PMIC_BUCK_VS1_OC_WND_ADDR MT6351_BUCK_OC_VS1_CON0
#define MT6351_PMIC_BUCK_VS1_OC_WND_MASK 0x3
#define MT6351_PMIC_BUCK_VS1_OC_WND_SHIFT 2
#define MT6351_PMIC_BUCK_VS1_OC_THD_ADDR MT6351_BUCK_OC_VS1_CON0
#define MT6351_PMIC_BUCK_VS1_OC_THD_MASK 0x3
#define MT6351_PMIC_BUCK_VS1_OC_THD_SHIFT 6
#define MT6351_PMIC_BUCK_VS2_OC_DEG_EN_ADDR MT6351_BUCK_OC_VS2_CON0
#define MT6351_PMIC_BUCK_VS2_OC_DEG_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_OC_DEG_EN_SHIFT 1
#define MT6351_PMIC_BUCK_VS2_OC_WND_ADDR MT6351_BUCK_OC_VS2_CON0
#define MT6351_PMIC_BUCK_VS2_OC_WND_MASK 0x3
#define MT6351_PMIC_BUCK_VS2_OC_WND_SHIFT 2
#define MT6351_PMIC_BUCK_VS2_OC_THD_ADDR MT6351_BUCK_OC_VS2_CON0
#define MT6351_PMIC_BUCK_VS2_OC_THD_MASK 0x3
#define MT6351_PMIC_BUCK_VS2_OC_THD_SHIFT 6
#define MT6351_PMIC_BUCK_VPA_OC_DEG_EN_ADDR MT6351_BUCK_OC_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_OC_DEG_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_OC_DEG_EN_SHIFT 1
#define MT6351_PMIC_BUCK_VPA_OC_WND_ADDR MT6351_BUCK_OC_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_OC_WND_MASK 0x3
#define MT6351_PMIC_BUCK_VPA_OC_WND_SHIFT 2
#define MT6351_PMIC_BUCK_VPA_OC_THD_ADDR MT6351_BUCK_OC_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_OC_THD_MASK 0x3
#define MT6351_PMIC_BUCK_VPA_OC_THD_SHIFT 6
#define MT6351_PMIC_RG_SMPS_TESTMODE_B_ADDR MT6351_SMPS_ANA_CON0
#define MT6351_PMIC_RG_SMPS_TESTMODE_B_MASK 0xFFF
#define MT6351_PMIC_RG_SMPS_TESTMODE_B_SHIFT 0
#define MT6351_PMIC_RG_VPA_BURSTH_ADDR MT6351_SMPS_ANA_CON0
#define MT6351_PMIC_RG_VPA_BURSTH_MASK 0x3
#define MT6351_PMIC_RG_VPA_BURSTH_SHIFT 12
#define MT6351_PMIC_RG_VPA_BURSTL_ADDR MT6351_SMPS_ANA_CON0
#define MT6351_PMIC_RG_VPA_BURSTL_MASK 0x3
#define MT6351_PMIC_RG_VPA_BURSTL_SHIFT 14
#define MT6351_PMIC_RG_VPA_TRIMH_ADDR MT6351_SMPS_ANA_CON1
#define MT6351_PMIC_RG_VPA_TRIMH_MASK 0x1F
#define MT6351_PMIC_RG_VPA_TRIMH_SHIFT 0
#define MT6351_PMIC_RG_VPA_TRIML_ADDR MT6351_SMPS_ANA_CON1
#define MT6351_PMIC_RG_VPA_TRIML_MASK 0x1F
#define MT6351_PMIC_RG_VPA_TRIML_SHIFT 5
#define MT6351_PMIC_RG_VPA_TRIM_REF_ADDR MT6351_SMPS_ANA_CON1
#define MT6351_PMIC_RG_VPA_TRIM_REF_MASK 0x1F
#define MT6351_PMIC_RG_VPA_TRIM_REF_SHIFT 10
#define MT6351_PMIC_RG_VCORE_TRIMH_ADDR MT6351_SMPS_ANA_CON2
#define MT6351_PMIC_RG_VCORE_TRIMH_MASK 0x1F
#define MT6351_PMIC_RG_VCORE_TRIMH_SHIFT 0
#define MT6351_PMIC_RG_VCORE_TRIML_ADDR MT6351_SMPS_ANA_CON2
#define MT6351_PMIC_RG_VCORE_TRIML_MASK 0x1F
#define MT6351_PMIC_RG_VCORE_TRIML_SHIFT 5
#define MT6351_PMIC_RG_VCORE_VSLEEP_ADDR MT6351_SMPS_ANA_CON2
#define MT6351_PMIC_RG_VCORE_VSLEEP_MASK 0x7
#define MT6351_PMIC_RG_VCORE_VSLEEP_SHIFT 10
#define MT6351_PMIC_RG_VGPU_TRIMH_ADDR MT6351_SMPS_ANA_CON3
#define MT6351_PMIC_RG_VGPU_TRIMH_MASK 0x1F
#define MT6351_PMIC_RG_VGPU_TRIMH_SHIFT 0
#define MT6351_PMIC_RG_VGPU_TRIML_ADDR MT6351_SMPS_ANA_CON3
#define MT6351_PMIC_RG_VGPU_TRIML_MASK 0x1F
#define MT6351_PMIC_RG_VGPU_TRIML_SHIFT 5
#define MT6351_PMIC_RG_VGPU_VSLEEP_ADDR MT6351_SMPS_ANA_CON3
#define MT6351_PMIC_RG_VGPU_VSLEEP_MASK 0x7
#define MT6351_PMIC_RG_VGPU_VSLEEP_SHIFT 10
#define MT6351_PMIC_RG_VSRAM_MD_TRIMH_ADDR MT6351_SMPS_ANA_CON4
#define MT6351_PMIC_RG_VSRAM_MD_TRIMH_MASK 0x1F
#define MT6351_PMIC_RG_VSRAM_MD_TRIMH_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_MD_TRIML_ADDR MT6351_SMPS_ANA_CON4
#define MT6351_PMIC_RG_VSRAM_MD_TRIML_MASK 0x1F
#define MT6351_PMIC_RG_VSRAM_MD_TRIML_SHIFT 5
#define MT6351_PMIC_RG_VSRAM_MD_VSLEEP_ADDR MT6351_SMPS_ANA_CON4
#define MT6351_PMIC_RG_VSRAM_MD_VSLEEP_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_MD_VSLEEP_SHIFT 10
#define MT6351_PMIC_RG_VMODEM_TRIMH_ADDR MT6351_SMPS_ANA_CON5
#define MT6351_PMIC_RG_VMODEM_TRIMH_MASK 0x1F
#define MT6351_PMIC_RG_VMODEM_TRIMH_SHIFT 0
#define MT6351_PMIC_RG_VMODEM_TRIML_ADDR MT6351_SMPS_ANA_CON5
#define MT6351_PMIC_RG_VMODEM_TRIML_MASK 0x1F
#define MT6351_PMIC_RG_VMODEM_TRIML_SHIFT 5
#define MT6351_PMIC_RG_VMODEM_VSLEEP_ADDR MT6351_SMPS_ANA_CON5
#define MT6351_PMIC_RG_VMODEM_VSLEEP_MASK 0x7
#define MT6351_PMIC_RG_VMODEM_VSLEEP_SHIFT 10
#define MT6351_PMIC_RG_VMD1_TRIMH_ADDR MT6351_SMPS_ANA_CON6
#define MT6351_PMIC_RG_VMD1_TRIMH_MASK 0x1F
#define MT6351_PMIC_RG_VMD1_TRIMH_SHIFT 0
#define MT6351_PMIC_RG_VMD1_TRIML_ADDR MT6351_SMPS_ANA_CON6
#define MT6351_PMIC_RG_VMD1_TRIML_MASK 0x1F
#define MT6351_PMIC_RG_VMD1_TRIML_SHIFT 5
#define MT6351_PMIC_RG_VMD1_VSLEEP_ADDR MT6351_SMPS_ANA_CON6
#define MT6351_PMIC_RG_VMD1_VSLEEP_MASK 0x7
#define MT6351_PMIC_RG_VMD1_VSLEEP_SHIFT 10
#define MT6351_PMIC_RG_VS1_TRIMH_ADDR MT6351_SMPS_ANA_CON7
#define MT6351_PMIC_RG_VS1_TRIMH_MASK 0x1F
#define MT6351_PMIC_RG_VS1_TRIMH_SHIFT 0
#define MT6351_PMIC_RG_VS1_TRIML_ADDR MT6351_SMPS_ANA_CON7
#define MT6351_PMIC_RG_VS1_TRIML_MASK 0x1F
#define MT6351_PMIC_RG_VS1_TRIML_SHIFT 5
#define MT6351_PMIC_RG_VS1_VSLEEP_ADDR MT6351_SMPS_ANA_CON7
#define MT6351_PMIC_RG_VS1_VSLEEP_MASK 0x7
#define MT6351_PMIC_RG_VS1_VSLEEP_SHIFT 10
#define MT6351_PMIC_RG_VS2_TRIML_ADDR MT6351_SMPS_ANA_CON8
#define MT6351_PMIC_RG_VS2_TRIML_MASK 0x1F
#define MT6351_PMIC_RG_VS2_TRIML_SHIFT 0
#define MT6351_PMIC_RG_VS2_VSLEEP_ADDR MT6351_SMPS_ANA_CON8
#define MT6351_PMIC_RG_VS2_VSLEEP_MASK 0x7
#define MT6351_PMIC_RG_VS2_VSLEEP_SHIFT 5
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_TRIMH_ADDR MT6351_SMPS_ANA_CON8
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_TRIMH_MASK 0x1F
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_TRIMH_SHIFT 8
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_TRIML_ADDR MT6351_SMPS_ANA_CON9
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_TRIML_MASK 0x1F
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_TRIML_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_VSLEEP_ADDR MT6351_SMPS_ANA_CON9
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_VSLEEP_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_VSLEEP_SHIFT 5
#define MT6351_PMIC_RG_VCORE_VSLEEP_SEL_ADDR MT6351_SMPS_ANA_CON9
#define MT6351_PMIC_RG_VCORE_VSLEEP_SEL_MASK 0x3
#define MT6351_PMIC_RG_VCORE_VSLEEP_SEL_SHIFT 8
#define MT6351_PMIC_RG_VGPU_VSLEEP_SEL_ADDR MT6351_SMPS_ANA_CON9
#define MT6351_PMIC_RG_VGPU_VSLEEP_SEL_MASK 0x3
#define MT6351_PMIC_RG_VGPU_VSLEEP_SEL_SHIFT 10
#define MT6351_PMIC_RG_VSRAM_MD_VSLEEP_SEL_ADDR MT6351_SMPS_ANA_CON9
#define MT6351_PMIC_RG_VSRAM_MD_VSLEEP_SEL_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_VSLEEP_SEL_SHIFT 12
#define MT6351_PMIC_RG_VMODEM_VSLEEP_SEL_ADDR MT6351_SMPS_ANA_CON9
#define MT6351_PMIC_RG_VMODEM_VSLEEP_SEL_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_VSLEEP_SEL_SHIFT 14
#define MT6351_PMIC_RG_VMD1_VSLEEP_SEL_ADDR MT6351_SMPS_ANA_CON10
#define MT6351_PMIC_RG_VMD1_VSLEEP_SEL_MASK 0x3
#define MT6351_PMIC_RG_VMD1_VSLEEP_SEL_SHIFT 0
#define MT6351_PMIC_RG_VS1_VSLEEP_SEL_ADDR MT6351_SMPS_ANA_CON10
#define MT6351_PMIC_RG_VS1_VSLEEP_SEL_MASK 0x3
#define MT6351_PMIC_RG_VS1_VSLEEP_SEL_SHIFT 2
#define MT6351_PMIC_RG_VS2_VSLEEP_SEL_ADDR MT6351_SMPS_ANA_CON10
#define MT6351_PMIC_RG_VS2_VSLEEP_SEL_MASK 0x3
#define MT6351_PMIC_RG_VS2_VSLEEP_SEL_SHIFT 4
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_VSLEEP_SEL_ADDR MT6351_SMPS_ANA_CON10
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_VSLEEP_SEL_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_PROCESSOR_VSLEEP_SEL_SHIFT 6
#define MT6351_PMIC_RG_VOUTDET_EN_ADDR MT6351_SMPS_ANA_CON10
#define MT6351_PMIC_RG_VOUTDET_EN_MASK 0x1
#define MT6351_PMIC_RG_VOUTDET_EN_SHIFT 8
#define MT6351_PMIC_RG_VS2_TRIMH_ADDR MT6351_SMPS_ANA_CON10
#define MT6351_PMIC_RG_VS2_TRIMH_MASK 0x1F
#define MT6351_PMIC_RG_VS2_TRIMH_SHIFT 9
#define MT6351_PMIC_RG_VCORE_MODESET_ADDR MT6351_VCORE_ANA_CON0
#define MT6351_PMIC_RG_VCORE_MODESET_MASK 0x1
#define MT6351_PMIC_RG_VCORE_MODESET_SHIFT 1
#define MT6351_PMIC_RG_VCORE_NDIS_EN_ADDR MT6351_VCORE_ANA_CON0
#define MT6351_PMIC_RG_VCORE_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VCORE_NDIS_EN_SHIFT 2
#define MT6351_PMIC_RG_VCORE_VRF18_SSTART_EN_ADDR MT6351_VCORE_ANA_CON0
#define MT6351_PMIC_RG_VCORE_VRF18_SSTART_EN_MASK 0x1
#define MT6351_PMIC_RG_VCORE_VRF18_SSTART_EN_SHIFT 3
#define MT6351_PMIC_RG_VCORE_AUTO_MODE_ADDR MT6351_VCORE_ANA_CON0
#define MT6351_PMIC_RG_VCORE_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VCORE_AUTO_MODE_SHIFT 4
#define MT6351_PMIC_RG_VCORE_RZSEL0_ADDR MT6351_VCORE_ANA_CON1
#define MT6351_PMIC_RG_VCORE_RZSEL0_MASK 0x7
#define MT6351_PMIC_RG_VCORE_RZSEL0_SHIFT 0
#define MT6351_PMIC_RG_VCORE_RZSEL1_ADDR MT6351_VCORE_ANA_CON1
#define MT6351_PMIC_RG_VCORE_RZSEL1_MASK 0xF
#define MT6351_PMIC_RG_VCORE_RZSEL1_SHIFT 3
#define MT6351_PMIC_RG_VCORE_CCSEL0_ADDR MT6351_VCORE_ANA_CON1
#define MT6351_PMIC_RG_VCORE_CCSEL0_MASK 0x3
#define MT6351_PMIC_RG_VCORE_CCSEL0_SHIFT 7
#define MT6351_PMIC_RG_VCORE_CCSEL1_ADDR MT6351_VCORE_ANA_CON1
#define MT6351_PMIC_RG_VCORE_CCSEL1_MASK 0x3
#define MT6351_PMIC_RG_VCORE_CCSEL1_SHIFT 9
#define MT6351_PMIC_RG_VCORE_CSL_ADDR MT6351_VCORE_ANA_CON1
#define MT6351_PMIC_RG_VCORE_CSL_MASK 0xF
#define MT6351_PMIC_RG_VCORE_CSL_SHIFT 11
#define MT6351_PMIC_RG_VCORE_SLP_ADDR MT6351_VCORE_ANA_CON2
#define MT6351_PMIC_RG_VCORE_SLP_MASK 0x7
#define MT6351_PMIC_RG_VCORE_SLP_SHIFT 0
#define MT6351_PMIC_RG_VCORE_ADRC_FEN_ADDR MT6351_VCORE_ANA_CON2
#define MT6351_PMIC_RG_VCORE_ADRC_FEN_MASK 0x1
#define MT6351_PMIC_RG_VCORE_ADRC_FEN_SHIFT 3
#define MT6351_PMIC_RG_VCORE_VCCAP_CLAMP_FEN_ADDR MT6351_VCORE_ANA_CON2
#define MT6351_PMIC_RG_VCORE_VCCAP_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VCORE_VCCAP_CLAMP_FEN_SHIFT 4
#define MT6351_PMIC_RG_VCORE_VC_CLAMP_FEN_ADDR MT6351_VCORE_ANA_CON2
#define MT6351_PMIC_RG_VCORE_VC_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VCORE_VC_CLAMP_FEN_SHIFT 5
#define MT6351_PMIC_RG_VCORE_PREOC_SEL_ADDR MT6351_VCORE_ANA_CON2
#define MT6351_PMIC_RG_VCORE_PREOC_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCORE_PREOC_SEL_SHIFT 6
#define MT6351_PMIC_RG_VCORE_PFMOC_ADDR MT6351_VCORE_ANA_CON2
#define MT6351_PMIC_RG_VCORE_PFMOC_MASK 0x7
#define MT6351_PMIC_RG_VCORE_PFMOC_SHIFT 9
#define MT6351_PMIC_RG_VCORE_CSR_ADDR MT6351_VCORE_ANA_CON2
#define MT6351_PMIC_RG_VCORE_CSR_MASK 0x7
#define MT6351_PMIC_RG_VCORE_CSR_SHIFT 12
#define MT6351_PMIC_RG_VCORE_ZXOS_TRIM_ADDR MT6351_VCORE_ANA_CON3
#define MT6351_PMIC_RG_VCORE_ZXOS_TRIM_MASK 0xFF
#define MT6351_PMIC_RG_VCORE_ZXOS_TRIM_SHIFT 0
#define MT6351_PMIC_RG_VCORE_CSM_N_ADDR MT6351_VCORE_ANA_CON3
#define MT6351_PMIC_RG_VCORE_CSM_N_MASK 0x3F
#define MT6351_PMIC_RG_VCORE_CSM_N_SHIFT 8
#define MT6351_PMIC_RG_VCORE_CSM_P_ADDR MT6351_VCORE_ANA_CON4
#define MT6351_PMIC_RG_VCORE_CSM_P_MASK 0x3F
#define MT6351_PMIC_RG_VCORE_CSM_P_SHIFT 0
#define MT6351_PMIC_RG_VCORE_PFMSR_EH_ADDR MT6351_VCORE_ANA_CON4
#define MT6351_PMIC_RG_VCORE_PFMSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VCORE_PFMSR_EH_SHIFT 6
#define MT6351_PMIC_RG_VCORE_NLIM_GATING_ADDR MT6351_VCORE_ANA_CON4
#define MT6351_PMIC_RG_VCORE_NLIM_GATING_MASK 0x1
#define MT6351_PMIC_RG_VCORE_NLIM_GATING_SHIFT 7
#define MT6351_PMIC_RG_VCORE_PWRSR_EH_ADDR MT6351_VCORE_ANA_CON4
#define MT6351_PMIC_RG_VCORE_PWRSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VCORE_PWRSR_EH_SHIFT 8
#define MT6351_PMIC_RG_VCORE_HS_VTHDET_ADDR MT6351_VCORE_ANA_CON4
#define MT6351_PMIC_RG_VCORE_HS_VTHDET_MASK 0x1
#define MT6351_PMIC_RG_VCORE_HS_VTHDET_SHIFT 9
#define MT6351_PMIC_RG_VCORE_PG_GATING_ADDR MT6351_VCORE_ANA_CON4
#define MT6351_PMIC_RG_VCORE_PG_GATING_MASK 0x1
#define MT6351_PMIC_RG_VCORE_PG_GATING_SHIFT 10
#define MT6351_PMIC_RG_VCORE_HS_ONSPEED_EH_ADDR MT6351_VCORE_ANA_CON4
#define MT6351_PMIC_RG_VCORE_HS_ONSPEED_EH_MASK 0x1
#define MT6351_PMIC_RG_VCORE_HS_ONSPEED_EH_SHIFT 11
#define MT6351_PMIC_RG_VCORE_NLIM_TRIMMING_ADDR MT6351_VCORE_ANA_CON4
#define MT6351_PMIC_RG_VCORE_NLIM_TRIMMING_MASK 0xF
#define MT6351_PMIC_RG_VCORE_NLIM_TRIMMING_SHIFT 12
#define MT6351_PMIC_RG_VCORE_DLC_ADDR MT6351_VCORE_ANA_CON5
#define MT6351_PMIC_RG_VCORE_DLC_MASK 0x3
#define MT6351_PMIC_RG_VCORE_DLC_SHIFT 0
#define MT6351_PMIC_RG_VCORE_DLC_N_ADDR MT6351_VCORE_ANA_CON5
#define MT6351_PMIC_RG_VCORE_DLC_N_MASK 0x3
#define MT6351_PMIC_RG_VCORE_DLC_N_SHIFT 2
#define MT6351_PMIC_RG_VCORE_PFM_RIP_ADDR MT6351_VCORE_ANA_CON5
#define MT6351_PMIC_RG_VCORE_PFM_RIP_MASK 0x7
#define MT6351_PMIC_RG_VCORE_PFM_RIP_SHIFT 4
#define MT6351_PMIC_RG_VCORE_TRAN_BST_ADDR MT6351_VCORE_ANA_CON5
#define MT6351_PMIC_RG_VCORE_TRAN_BST_MASK 0x3F
#define MT6351_PMIC_RG_VCORE_TRAN_BST_SHIFT 7
#define MT6351_PMIC_RG_VCORE_DTS_ENB_ADDR MT6351_VCORE_ANA_CON5
#define MT6351_PMIC_RG_VCORE_DTS_ENB_MASK 0x1
#define MT6351_PMIC_RG_VCORE_DTS_ENB_SHIFT 13
#define MT6351_PMIC_RG_VCORE_MIN_OFF_ADDR MT6351_VCORE_ANA_CON5
#define MT6351_PMIC_RG_VCORE_MIN_OFF_MASK 0x3
#define MT6351_PMIC_RG_VCORE_MIN_OFF_SHIFT 14
#define MT6351_PMIC_RG_VCORE_1P35UP_SEL_EN_ADDR MT6351_VCORE_ANA_CON6
#define MT6351_PMIC_RG_VCORE_1P35UP_SEL_EN_MASK 0x1
#define MT6351_PMIC_RG_VCORE_1P35UP_SEL_EN_SHIFT 0
#define MT6351_PMIC_RG_VCORE_DLC_AUTO_MODE_ADDR MT6351_VCORE_ANA_CON6
#define MT6351_PMIC_RG_VCORE_DLC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VCORE_DLC_AUTO_MODE_SHIFT 1
#define MT6351_PMIC_RG_VCORE_DLC_SEL_ADDR MT6351_VCORE_ANA_CON6
#define MT6351_PMIC_RG_VCORE_DLC_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCORE_DLC_SEL_SHIFT 2
#define MT6351_PMIC_RG_VCORE_SRC_AUTO_MODE_ADDR MT6351_VCORE_ANA_CON6
#define MT6351_PMIC_RG_VCORE_SRC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VCORE_SRC_AUTO_MODE_SHIFT 5
#define MT6351_PMIC_RG_VCORE_UGP_SR_ADDR MT6351_VCORE_ANA_CON6
#define MT6351_PMIC_RG_VCORE_UGP_SR_MASK 0x3
#define MT6351_PMIC_RG_VCORE_UGP_SR_SHIFT 6
#define MT6351_PMIC_RG_VCORE_LGN_SR_ADDR MT6351_VCORE_ANA_CON6
#define MT6351_PMIC_RG_VCORE_LGN_SR_MASK 0x3
#define MT6351_PMIC_RG_VCORE_LGN_SR_SHIFT 8
#define MT6351_PMIC_RG_VCORE_UGP_SR_PFM_ADDR MT6351_VCORE_ANA_CON6
#define MT6351_PMIC_RG_VCORE_UGP_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VCORE_UGP_SR_PFM_SHIFT 10
#define MT6351_PMIC_RG_VCORE_LGN_SR_PFM_ADDR MT6351_VCORE_ANA_CON6
#define MT6351_PMIC_RG_VCORE_LGN_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VCORE_LGN_SR_PFM_SHIFT 12
#define MT6351_PMIC_RG_VCORE_UGD_VTHSEL_ADDR MT6351_VCORE_ANA_CON6
#define MT6351_PMIC_RG_VCORE_UGD_VTHSEL_MASK 0x3
#define MT6351_PMIC_RG_VCORE_UGD_VTHSEL_SHIFT 14
#define MT6351_PMIC_RG_VCORE_FNLX_SNS_ADDR MT6351_VCORE_ANA_CON7
#define MT6351_PMIC_RG_VCORE_FNLX_SNS_MASK 0x1
#define MT6351_PMIC_RG_VCORE_FNLX_SNS_SHIFT 0
#define MT6351_PMIC_RG_VCORE_VDIFF_ENLOWIQ_ADDR MT6351_VCORE_ANA_CON7
#define MT6351_PMIC_RG_VCORE_VDIFF_ENLOWIQ_MASK 0x1
#define MT6351_PMIC_RG_VCORE_VDIFF_ENLOWIQ_SHIFT 1
#define MT6351_PMIC_RG_VCORE_PFMOC_FWUPOFF_ADDR MT6351_VCORE_ANA_CON7
#define MT6351_PMIC_RG_VCORE_PFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VCORE_PFMOC_FWUPOFF_SHIFT 2
#define MT6351_PMIC_RG_VCORE_PWFMOC_FWUPOFF_ADDR MT6351_VCORE_ANA_CON7
#define MT6351_PMIC_RG_VCORE_PWFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VCORE_PWFMOC_FWUPOFF_SHIFT 3
#define MT6351_PMIC_RG_VCORE_CP_FWUPOFF_ADDR MT6351_VCORE_ANA_CON7
#define MT6351_PMIC_RG_VCORE_CP_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VCORE_CP_FWUPOFF_SHIFT 4
#define MT6351_PMIC_RG_VCORE_ZX_GATING_ADDR MT6351_VCORE_ANA_CON7
#define MT6351_PMIC_RG_VCORE_ZX_GATING_MASK 0x1
#define MT6351_PMIC_RG_VCORE_ZX_GATING_SHIFT 5
#define MT6351_PMIC_RG_VCORE_RSV_ADDR MT6351_VCORE_ANA_CON8
#define MT6351_PMIC_RG_VCORE_RSV_MASK 0xFFFF
#define MT6351_PMIC_RG_VCORE_RSV_SHIFT 0
#define MT6351_PMIC_RG_VCORE_PREOC_TRIMMING_ADDR MT6351_VCORE_ANA_CON9
#define MT6351_PMIC_RG_VCORE_PREOC_TRIMMING_MASK 0x1F
#define MT6351_PMIC_RG_VCORE_PREOC_TRIMMING_SHIFT 0
#define MT6351_PMIC_RG_VCORE_AZC_EN_ADDR MT6351_VCORE_ANA_CON9
#define MT6351_PMIC_RG_VCORE_AZC_EN_MASK 0x1
#define MT6351_PMIC_RG_VCORE_AZC_EN_SHIFT 5
#define MT6351_PMIC_RG_VCORE_AZC_DELAY_ADDR MT6351_VCORE_ANA_CON9
#define MT6351_PMIC_RG_VCORE_AZC_DELAY_MASK 0x3
#define MT6351_PMIC_RG_VCORE_AZC_DELAY_SHIFT 6
#define MT6351_PMIC_RG_VCORE_AZC_HOLD_ENB_ADDR MT6351_VCORE_ANA_CON9
#define MT6351_PMIC_RG_VCORE_AZC_HOLD_ENB_MASK 0x1
#define MT6351_PMIC_RG_VCORE_AZC_HOLD_ENB_SHIFT 8
#define MT6351_PMIC_RGS_QI_VCORE_OC_STATUS_ADDR MT6351_VCORE_ANA_CON9
#define MT6351_PMIC_RGS_QI_VCORE_OC_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_QI_VCORE_OC_STATUS_SHIFT 9
#define MT6351_PMIC_RGS_QI_VCORE_DIG_MON_ADDR MT6351_VCORE_ANA_CON9
#define MT6351_PMIC_RGS_QI_VCORE_DIG_MON_MASK 0xF
#define MT6351_PMIC_RGS_QI_VCORE_DIG_MON_SHIFT 10
#define MT6351_PMIC_RGS_VCORE_ENPWM_STATUS_ADDR MT6351_VCORE_ANA_CON9
#define MT6351_PMIC_RGS_VCORE_ENPWM_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_VCORE_ENPWM_STATUS_SHIFT 14
#define MT6351_PMIC_RGS_QI_VCORE_PREOC_ADDR MT6351_VCORE_ANA_CON9
#define MT6351_PMIC_RGS_QI_VCORE_PREOC_MASK 0x1
#define MT6351_PMIC_RGS_QI_VCORE_PREOC_SHIFT 15
#define MT6351_PMIC_RG_VGPU_MODESET_ADDR MT6351_VGPU_ANA_CON0
#define MT6351_PMIC_RG_VGPU_MODESET_MASK 0x1
#define MT6351_PMIC_RG_VGPU_MODESET_SHIFT 1
#define MT6351_PMIC_RG_VGPU_NDIS_EN_ADDR MT6351_VGPU_ANA_CON0
#define MT6351_PMIC_RG_VGPU_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VGPU_NDIS_EN_SHIFT 2
#define MT6351_PMIC_RG_VGPU_VRF18_SSTART_EN_ADDR MT6351_VGPU_ANA_CON0
#define MT6351_PMIC_RG_VGPU_VRF18_SSTART_EN_MASK 0x1
#define MT6351_PMIC_RG_VGPU_VRF18_SSTART_EN_SHIFT 3
#define MT6351_PMIC_RG_VGPU_AUTO_MODE_ADDR MT6351_VGPU_ANA_CON0
#define MT6351_PMIC_RG_VGPU_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VGPU_AUTO_MODE_SHIFT 4
#define MT6351_PMIC_RG_VGPU_RZSEL0_ADDR MT6351_VGPU_ANA_CON1
#define MT6351_PMIC_RG_VGPU_RZSEL0_MASK 0x7
#define MT6351_PMIC_RG_VGPU_RZSEL0_SHIFT 0
#define MT6351_PMIC_RG_VGPU_RZSEL1_ADDR MT6351_VGPU_ANA_CON1
#define MT6351_PMIC_RG_VGPU_RZSEL1_MASK 0xF
#define MT6351_PMIC_RG_VGPU_RZSEL1_SHIFT 3
#define MT6351_PMIC_RG_VGPU_CCSEL0_ADDR MT6351_VGPU_ANA_CON1
#define MT6351_PMIC_RG_VGPU_CCSEL0_MASK 0x3
#define MT6351_PMIC_RG_VGPU_CCSEL0_SHIFT 7
#define MT6351_PMIC_RG_VGPU_CCSEL1_ADDR MT6351_VGPU_ANA_CON1
#define MT6351_PMIC_RG_VGPU_CCSEL1_MASK 0x3
#define MT6351_PMIC_RG_VGPU_CCSEL1_SHIFT 9
#define MT6351_PMIC_RG_VGPU_CSL_ADDR MT6351_VGPU_ANA_CON1
#define MT6351_PMIC_RG_VGPU_CSL_MASK 0xF
#define MT6351_PMIC_RG_VGPU_CSL_SHIFT 11
#define MT6351_PMIC_RG_VGPU_SLP_ADDR MT6351_VGPU_ANA_CON2
#define MT6351_PMIC_RG_VGPU_SLP_MASK 0x7
#define MT6351_PMIC_RG_VGPU_SLP_SHIFT 0
#define MT6351_PMIC_RG_VGPU_ADRC_FEN_ADDR MT6351_VGPU_ANA_CON2
#define MT6351_PMIC_RG_VGPU_ADRC_FEN_MASK 0x1
#define MT6351_PMIC_RG_VGPU_ADRC_FEN_SHIFT 3
#define MT6351_PMIC_RG_VGPU_VCCAP_CLAMP_FEN_ADDR MT6351_VGPU_ANA_CON2
#define MT6351_PMIC_RG_VGPU_VCCAP_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VGPU_VCCAP_CLAMP_FEN_SHIFT 4
#define MT6351_PMIC_RG_VGPU_VC_CLAMP_FEN_ADDR MT6351_VGPU_ANA_CON2
#define MT6351_PMIC_RG_VGPU_VC_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VGPU_VC_CLAMP_FEN_SHIFT 5
#define MT6351_PMIC_RG_VGPU_PREOC_SEL_ADDR MT6351_VGPU_ANA_CON2
#define MT6351_PMIC_RG_VGPU_PREOC_SEL_MASK 0x7
#define MT6351_PMIC_RG_VGPU_PREOC_SEL_SHIFT 6
#define MT6351_PMIC_RG_VGPU_PFMOC_ADDR MT6351_VGPU_ANA_CON2
#define MT6351_PMIC_RG_VGPU_PFMOC_MASK 0x7
#define MT6351_PMIC_RG_VGPU_PFMOC_SHIFT 9
#define MT6351_PMIC_RG_VGPU_CSR_ADDR MT6351_VGPU_ANA_CON2
#define MT6351_PMIC_RG_VGPU_CSR_MASK 0x7
#define MT6351_PMIC_RG_VGPU_CSR_SHIFT 12
#define MT6351_PMIC_RG_VGPU_ZXOS_TRIM_ADDR MT6351_VGPU_ANA_CON3
#define MT6351_PMIC_RG_VGPU_ZXOS_TRIM_MASK 0xFF
#define MT6351_PMIC_RG_VGPU_ZXOS_TRIM_SHIFT 0
#define MT6351_PMIC_RG_VGPU_CSM_N_ADDR MT6351_VGPU_ANA_CON3
#define MT6351_PMIC_RG_VGPU_CSM_N_MASK 0x3F
#define MT6351_PMIC_RG_VGPU_CSM_N_SHIFT 8
#define MT6351_PMIC_RG_VGPU_CSM_P_ADDR MT6351_VGPU_ANA_CON4
#define MT6351_PMIC_RG_VGPU_CSM_P_MASK 0x3F
#define MT6351_PMIC_RG_VGPU_CSM_P_SHIFT 0
#define MT6351_PMIC_RG_VGPU_PFMSR_EH_ADDR MT6351_VGPU_ANA_CON4
#define MT6351_PMIC_RG_VGPU_PFMSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VGPU_PFMSR_EH_SHIFT 6
#define MT6351_PMIC_RG_VGPU_NLIM_GATING_ADDR MT6351_VGPU_ANA_CON4
#define MT6351_PMIC_RG_VGPU_NLIM_GATING_MASK 0x1
#define MT6351_PMIC_RG_VGPU_NLIM_GATING_SHIFT 7
#define MT6351_PMIC_RG_VGPU_PWRSR_EH_ADDR MT6351_VGPU_ANA_CON4
#define MT6351_PMIC_RG_VGPU_PWRSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VGPU_PWRSR_EH_SHIFT 8
#define MT6351_PMIC_RG_VGPU_HS_VTHDET_ADDR MT6351_VGPU_ANA_CON4
#define MT6351_PMIC_RG_VGPU_HS_VTHDET_MASK 0x1
#define MT6351_PMIC_RG_VGPU_HS_VTHDET_SHIFT 9
#define MT6351_PMIC_RG_VGPU_PG_GATING_ADDR MT6351_VGPU_ANA_CON4
#define MT6351_PMIC_RG_VGPU_PG_GATING_MASK 0x1
#define MT6351_PMIC_RG_VGPU_PG_GATING_SHIFT 10
#define MT6351_PMIC_RG_VGPU_HS_ONSPEED_EH_ADDR MT6351_VGPU_ANA_CON4
#define MT6351_PMIC_RG_VGPU_HS_ONSPEED_EH_MASK 0x1
#define MT6351_PMIC_RG_VGPU_HS_ONSPEED_EH_SHIFT 11
#define MT6351_PMIC_RG_VGPU_NLIM_TRIMMING_ADDR MT6351_VGPU_ANA_CON4
#define MT6351_PMIC_RG_VGPU_NLIM_TRIMMING_MASK 0xF
#define MT6351_PMIC_RG_VGPU_NLIM_TRIMMING_SHIFT 12
#define MT6351_PMIC_RG_VGPU_DLC_ADDR MT6351_VGPU_ANA_CON5
#define MT6351_PMIC_RG_VGPU_DLC_MASK 0x3
#define MT6351_PMIC_RG_VGPU_DLC_SHIFT 0
#define MT6351_PMIC_RG_VGPU_DLC_N_ADDR MT6351_VGPU_ANA_CON5
#define MT6351_PMIC_RG_VGPU_DLC_N_MASK 0x3
#define MT6351_PMIC_RG_VGPU_DLC_N_SHIFT 2
#define MT6351_PMIC_RG_VGPU_PFM_RIP_ADDR MT6351_VGPU_ANA_CON5
#define MT6351_PMIC_RG_VGPU_PFM_RIP_MASK 0x7
#define MT6351_PMIC_RG_VGPU_PFM_RIP_SHIFT 4
#define MT6351_PMIC_RG_VGPU_TRAN_BST_ADDR MT6351_VGPU_ANA_CON5
#define MT6351_PMIC_RG_VGPU_TRAN_BST_MASK 0x3F
#define MT6351_PMIC_RG_VGPU_TRAN_BST_SHIFT 7
#define MT6351_PMIC_RG_VGPU_DTS_ENB_ADDR MT6351_VGPU_ANA_CON5
#define MT6351_PMIC_RG_VGPU_DTS_ENB_MASK 0x1
#define MT6351_PMIC_RG_VGPU_DTS_ENB_SHIFT 13
#define MT6351_PMIC_RG_VGPU_MIN_OFF_ADDR MT6351_VGPU_ANA_CON5
#define MT6351_PMIC_RG_VGPU_MIN_OFF_MASK 0x3
#define MT6351_PMIC_RG_VGPU_MIN_OFF_SHIFT 14
#define MT6351_PMIC_RG_VGPU_1P35UP_SEL_EN_ADDR MT6351_VGPU_ANA_CON6
#define MT6351_PMIC_RG_VGPU_1P35UP_SEL_EN_MASK 0x1
#define MT6351_PMIC_RG_VGPU_1P35UP_SEL_EN_SHIFT 0
#define MT6351_PMIC_RG_VGPU_DLC_AUTO_MODE_ADDR MT6351_VGPU_ANA_CON6
#define MT6351_PMIC_RG_VGPU_DLC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VGPU_DLC_AUTO_MODE_SHIFT 1
#define MT6351_PMIC_RG_VGPU_DLC_SEL_ADDR MT6351_VGPU_ANA_CON6
#define MT6351_PMIC_RG_VGPU_DLC_SEL_MASK 0x7
#define MT6351_PMIC_RG_VGPU_DLC_SEL_SHIFT 2
#define MT6351_PMIC_RG_VGPU_SRC_AUTO_MODE_ADDR MT6351_VGPU_ANA_CON6
#define MT6351_PMIC_RG_VGPU_SRC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VGPU_SRC_AUTO_MODE_SHIFT 5
#define MT6351_PMIC_RG_VGPU_UGP_SR_ADDR MT6351_VGPU_ANA_CON6
#define MT6351_PMIC_RG_VGPU_UGP_SR_MASK 0x3
#define MT6351_PMIC_RG_VGPU_UGP_SR_SHIFT 6
#define MT6351_PMIC_RG_VGPU_LGN_SR_ADDR MT6351_VGPU_ANA_CON6
#define MT6351_PMIC_RG_VGPU_LGN_SR_MASK 0x3
#define MT6351_PMIC_RG_VGPU_LGN_SR_SHIFT 8
#define MT6351_PMIC_RG_VGPU_UGP_SR_PFM_ADDR MT6351_VGPU_ANA_CON6
#define MT6351_PMIC_RG_VGPU_UGP_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VGPU_UGP_SR_PFM_SHIFT 10
#define MT6351_PMIC_RG_VGPU_LGN_SR_PFM_ADDR MT6351_VGPU_ANA_CON6
#define MT6351_PMIC_RG_VGPU_LGN_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VGPU_LGN_SR_PFM_SHIFT 12
#define MT6351_PMIC_RG_VGPU_UGD_VTHSEL_ADDR MT6351_VGPU_ANA_CON6
#define MT6351_PMIC_RG_VGPU_UGD_VTHSEL_MASK 0x3
#define MT6351_PMIC_RG_VGPU_UGD_VTHSEL_SHIFT 14
#define MT6351_PMIC_RG_VGPU_FNLX_SNS_ADDR MT6351_VGPU_ANA_CON7
#define MT6351_PMIC_RG_VGPU_FNLX_SNS_MASK 0x1
#define MT6351_PMIC_RG_VGPU_FNLX_SNS_SHIFT 0
#define MT6351_PMIC_RG_VGPU_VDIFF_ENLOWIQ_ADDR MT6351_VGPU_ANA_CON7
#define MT6351_PMIC_RG_VGPU_VDIFF_ENLOWIQ_MASK 0x1
#define MT6351_PMIC_RG_VGPU_VDIFF_ENLOWIQ_SHIFT 1
#define MT6351_PMIC_RG_VGPU_PFMOC_FWUPOFF_ADDR MT6351_VGPU_ANA_CON7
#define MT6351_PMIC_RG_VGPU_PFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VGPU_PFMOC_FWUPOFF_SHIFT 2
#define MT6351_PMIC_RG_VGPU_PWFMOC_FWUPOFF_ADDR MT6351_VGPU_ANA_CON7
#define MT6351_PMIC_RG_VGPU_PWFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VGPU_PWFMOC_FWUPOFF_SHIFT 3
#define MT6351_PMIC_RG_VGPU_CP_FWUPOFF_ADDR MT6351_VGPU_ANA_CON7
#define MT6351_PMIC_RG_VGPU_CP_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VGPU_CP_FWUPOFF_SHIFT 4
#define MT6351_PMIC_RG_VGPU_ZX_GATING_ADDR MT6351_VGPU_ANA_CON7
#define MT6351_PMIC_RG_VGPU_ZX_GATING_MASK 0x1
#define MT6351_PMIC_RG_VGPU_ZX_GATING_SHIFT 5
#define MT6351_PMIC_RG_VGPU_RSV_ADDR MT6351_VGPU_ANA_CON8
#define MT6351_PMIC_RG_VGPU_RSV_MASK 0xFFFF
#define MT6351_PMIC_RG_VGPU_RSV_SHIFT 0
#define MT6351_PMIC_RG_VGPU_PREOC_TRIMMING_ADDR MT6351_VGPU_ANA_CON9
#define MT6351_PMIC_RG_VGPU_PREOC_TRIMMING_MASK 0x1F
#define MT6351_PMIC_RG_VGPU_PREOC_TRIMMING_SHIFT 0
#define MT6351_PMIC_RG_VGPU_AZC_EN_ADDR MT6351_VGPU_ANA_CON9
#define MT6351_PMIC_RG_VGPU_AZC_EN_MASK 0x1
#define MT6351_PMIC_RG_VGPU_AZC_EN_SHIFT 5
#define MT6351_PMIC_RG_VGPU_AZC_DELAY_ADDR MT6351_VGPU_ANA_CON9
#define MT6351_PMIC_RG_VGPU_AZC_DELAY_MASK 0x3
#define MT6351_PMIC_RG_VGPU_AZC_DELAY_SHIFT 6
#define MT6351_PMIC_RG_VGPU_AZC_HOLD_ENB_ADDR MT6351_VGPU_ANA_CON9
#define MT6351_PMIC_RG_VGPU_AZC_HOLD_ENB_MASK 0x1
#define MT6351_PMIC_RG_VGPU_AZC_HOLD_ENB_SHIFT 8
#define MT6351_PMIC_RGS_QI_VGPU_OC_STATUS_ADDR MT6351_VGPU_ANA_CON9
#define MT6351_PMIC_RGS_QI_VGPU_OC_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_QI_VGPU_OC_STATUS_SHIFT 9
#define MT6351_PMIC_RGS_QI_VGPU_DIG_MON_ADDR MT6351_VGPU_ANA_CON9
#define MT6351_PMIC_RGS_QI_VGPU_DIG_MON_MASK 0xF
#define MT6351_PMIC_RGS_QI_VGPU_DIG_MON_SHIFT 10
#define MT6351_PMIC_RGS_VGPU_ENPWM_STATUS_ADDR MT6351_VGPU_ANA_CON9
#define MT6351_PMIC_RGS_VGPU_ENPWM_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_VGPU_ENPWM_STATUS_SHIFT 14
#define MT6351_PMIC_RGS_QI_VGPU_PREOC_ADDR MT6351_VGPU_ANA_CON9
#define MT6351_PMIC_RGS_QI_VGPU_PREOC_MASK 0x1
#define MT6351_PMIC_RGS_QI_VGPU_PREOC_SHIFT 15
#define MT6351_PMIC_RG_VSRAM_MD_MODESET_ADDR MT6351_VSRAM_MD_ANA_CON0
#define MT6351_PMIC_RG_VSRAM_MD_MODESET_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_MODESET_SHIFT 1
#define MT6351_PMIC_RG_VSRAM_MD_NDIS_EN_ADDR MT6351_VSRAM_MD_ANA_CON0
#define MT6351_PMIC_RG_VSRAM_MD_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_NDIS_EN_SHIFT 2
#define MT6351_PMIC_RG_VSRAM_MD_VRF18_SSTART_EN_ADDR MT6351_VSRAM_MD_ANA_CON0
#define MT6351_PMIC_RG_VSRAM_MD_VRF18_SSTART_EN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_VRF18_SSTART_EN_SHIFT 3
#define MT6351_PMIC_RG_VSRAM_MD_AUTO_MODE_ADDR MT6351_VSRAM_MD_ANA_CON0
#define MT6351_PMIC_RG_VSRAM_MD_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_AUTO_MODE_SHIFT 4
#define MT6351_PMIC_RG_VSRAM_MD_RZSEL0_ADDR MT6351_VSRAM_MD_ANA_CON1
#define MT6351_PMIC_RG_VSRAM_MD_RZSEL0_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_MD_RZSEL0_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_MD_RZSEL1_ADDR MT6351_VSRAM_MD_ANA_CON1
#define MT6351_PMIC_RG_VSRAM_MD_RZSEL1_MASK 0xF
#define MT6351_PMIC_RG_VSRAM_MD_RZSEL1_SHIFT 3
#define MT6351_PMIC_RG_VSRAM_MD_CCSEL0_ADDR MT6351_VSRAM_MD_ANA_CON1
#define MT6351_PMIC_RG_VSRAM_MD_CCSEL0_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_CCSEL0_SHIFT 7
#define MT6351_PMIC_RG_VSRAM_MD_CCSEL1_ADDR MT6351_VSRAM_MD_ANA_CON1
#define MT6351_PMIC_RG_VSRAM_MD_CCSEL1_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_CCSEL1_SHIFT 9
#define MT6351_PMIC_RG_VSRAM_MD_CSL_ADDR MT6351_VSRAM_MD_ANA_CON1
#define MT6351_PMIC_RG_VSRAM_MD_CSL_MASK 0xF
#define MT6351_PMIC_RG_VSRAM_MD_CSL_SHIFT 11
#define MT6351_PMIC_RG_VSRAM_MD_SLP_ADDR MT6351_VSRAM_MD_ANA_CON2
#define MT6351_PMIC_RG_VSRAM_MD_SLP_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_MD_SLP_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_MD_ADRC_FEN_ADDR MT6351_VSRAM_MD_ANA_CON2
#define MT6351_PMIC_RG_VSRAM_MD_ADRC_FEN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_ADRC_FEN_SHIFT 3
#define MT6351_PMIC_RG_VSRAM_MD_VCCAP_CLAMP_FEN_ADDR MT6351_VSRAM_MD_ANA_CON2
#define MT6351_PMIC_RG_VSRAM_MD_VCCAP_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_VCCAP_CLAMP_FEN_SHIFT 4
#define MT6351_PMIC_RG_VSRAM_MD_VC_CLAMP_FEN_ADDR MT6351_VSRAM_MD_ANA_CON2
#define MT6351_PMIC_RG_VSRAM_MD_VC_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_VC_CLAMP_FEN_SHIFT 5
#define MT6351_PMIC_RG_VSRAM_MD_PFMOC_ADDR MT6351_VSRAM_MD_ANA_CON2
#define MT6351_PMIC_RG_VSRAM_MD_PFMOC_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_MD_PFMOC_SHIFT 6
#define MT6351_PMIC_RG_VSRAM_MD_CSR_ADDR MT6351_VSRAM_MD_ANA_CON2
#define MT6351_PMIC_RG_VSRAM_MD_CSR_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_MD_CSR_SHIFT 9
#define MT6351_PMIC_RG_VSRAM_MD_ZXOS_TRIM_ADDR MT6351_VSRAM_MD_ANA_CON3
#define MT6351_PMIC_RG_VSRAM_MD_ZXOS_TRIM_MASK 0xFF
#define MT6351_PMIC_RG_VSRAM_MD_ZXOS_TRIM_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_MD_PFMSR_EH_ADDR MT6351_VSRAM_MD_ANA_CON4
#define MT6351_PMIC_RG_VSRAM_MD_PFMSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_PFMSR_EH_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_MD_NLIM_GATING_ADDR MT6351_VSRAM_MD_ANA_CON4
#define MT6351_PMIC_RG_VSRAM_MD_NLIM_GATING_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_NLIM_GATING_SHIFT 1
#define MT6351_PMIC_RG_VSRAM_MD_PWRSR_EH_ADDR MT6351_VSRAM_MD_ANA_CON4
#define MT6351_PMIC_RG_VSRAM_MD_PWRSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_PWRSR_EH_SHIFT 2
#define MT6351_PMIC_RG_VSRAM_MD_HS_VTHDET_ADDR MT6351_VSRAM_MD_ANA_CON4
#define MT6351_PMIC_RG_VSRAM_MD_HS_VTHDET_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_HS_VTHDET_SHIFT 3
#define MT6351_PMIC_RG_VSRAM_MD_PG_GATING_ADDR MT6351_VSRAM_MD_ANA_CON4
#define MT6351_PMIC_RG_VSRAM_MD_PG_GATING_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_PG_GATING_SHIFT 4
#define MT6351_PMIC_RG_VSRAM_MD_HS_ONSPEED_EH_ADDR MT6351_VSRAM_MD_ANA_CON4
#define MT6351_PMIC_RG_VSRAM_MD_HS_ONSPEED_EH_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_HS_ONSPEED_EH_SHIFT 5
#define MT6351_PMIC_RG_VSRAM_MD_NLIM_TRIMMING_ADDR MT6351_VSRAM_MD_ANA_CON4
#define MT6351_PMIC_RG_VSRAM_MD_NLIM_TRIMMING_MASK 0xF
#define MT6351_PMIC_RG_VSRAM_MD_NLIM_TRIMMING_SHIFT 6
#define MT6351_PMIC_RG_VSRAM_MD_DLC_ADDR MT6351_VSRAM_MD_ANA_CON5
#define MT6351_PMIC_RG_VSRAM_MD_DLC_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_DLC_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_MD_DLC_N_ADDR MT6351_VSRAM_MD_ANA_CON5
#define MT6351_PMIC_RG_VSRAM_MD_DLC_N_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_DLC_N_SHIFT 2
#define MT6351_PMIC_RG_VSRAM_MD_PFM_RIP_ADDR MT6351_VSRAM_MD_ANA_CON5
#define MT6351_PMIC_RG_VSRAM_MD_PFM_RIP_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_MD_PFM_RIP_SHIFT 4
#define MT6351_PMIC_RG_VSRAM_MD_TRAN_BST_ADDR MT6351_VSRAM_MD_ANA_CON5
#define MT6351_PMIC_RG_VSRAM_MD_TRAN_BST_MASK 0x3F
#define MT6351_PMIC_RG_VSRAM_MD_TRAN_BST_SHIFT 7
#define MT6351_PMIC_RG_VSRAM_MD_DTS_ENB_ADDR MT6351_VSRAM_MD_ANA_CON5
#define MT6351_PMIC_RG_VSRAM_MD_DTS_ENB_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_DTS_ENB_SHIFT 13
#define MT6351_PMIC_RG_VSRAM_MD_MIN_OFF_ADDR MT6351_VSRAM_MD_ANA_CON5
#define MT6351_PMIC_RG_VSRAM_MD_MIN_OFF_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_MIN_OFF_SHIFT 14
#define MT6351_PMIC_RG_VSRAM_MD_1P35UP_SEL_EN_ADDR MT6351_VSRAM_MD_ANA_CON6
#define MT6351_PMIC_RG_VSRAM_MD_1P35UP_SEL_EN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_1P35UP_SEL_EN_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_MD_DLC_AUTO_MODE_ADDR MT6351_VSRAM_MD_ANA_CON6
#define MT6351_PMIC_RG_VSRAM_MD_DLC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_DLC_AUTO_MODE_SHIFT 1
#define MT6351_PMIC_RG_VSRAM_MD_DLC_SEL_ADDR MT6351_VSRAM_MD_ANA_CON6
#define MT6351_PMIC_RG_VSRAM_MD_DLC_SEL_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_MD_DLC_SEL_SHIFT 2
#define MT6351_PMIC_RG_VSRAM_MD_SRC_AUTO_MODE_ADDR MT6351_VSRAM_MD_ANA_CON6
#define MT6351_PMIC_RG_VSRAM_MD_SRC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_SRC_AUTO_MODE_SHIFT 5
#define MT6351_PMIC_RG_VSRAM_MD_UGP_SR_ADDR MT6351_VSRAM_MD_ANA_CON6
#define MT6351_PMIC_RG_VSRAM_MD_UGP_SR_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_UGP_SR_SHIFT 6
#define MT6351_PMIC_RG_VSRAM_MD_LGN_SR_ADDR MT6351_VSRAM_MD_ANA_CON6
#define MT6351_PMIC_RG_VSRAM_MD_LGN_SR_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_LGN_SR_SHIFT 8
#define MT6351_PMIC_RG_VSRAM_MD_UGP_SR_PFM_ADDR MT6351_VSRAM_MD_ANA_CON6
#define MT6351_PMIC_RG_VSRAM_MD_UGP_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_UGP_SR_PFM_SHIFT 10
#define MT6351_PMIC_RG_VSRAM_MD_LGN_SR_PFM_ADDR MT6351_VSRAM_MD_ANA_CON6
#define MT6351_PMIC_RG_VSRAM_MD_LGN_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_LGN_SR_PFM_SHIFT 12
#define MT6351_PMIC_RG_VSRAM_MD_UGD_VTHSEL_ADDR MT6351_VSRAM_MD_ANA_CON6
#define MT6351_PMIC_RG_VSRAM_MD_UGD_VTHSEL_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_UGD_VTHSEL_SHIFT 14
#define MT6351_PMIC_RG_VSRAM_MD_FNLX_SNS_ADDR MT6351_VSRAM_MD_ANA_CON7
#define MT6351_PMIC_RG_VSRAM_MD_FNLX_SNS_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_FNLX_SNS_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_MD_VDIFF_ENLOWIQ_ADDR MT6351_VSRAM_MD_ANA_CON7
#define MT6351_PMIC_RG_VSRAM_MD_VDIFF_ENLOWIQ_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_VDIFF_ENLOWIQ_SHIFT 1
#define MT6351_PMIC_RG_VSRAM_MD_PFMOC_FWUPOFF_ADDR MT6351_VSRAM_MD_ANA_CON7
#define MT6351_PMIC_RG_VSRAM_MD_PFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_PFMOC_FWUPOFF_SHIFT 2
#define MT6351_PMIC_RG_VSRAM_MD_PWFMOC_FWUPOFF_ADDR MT6351_VSRAM_MD_ANA_CON7
#define MT6351_PMIC_RG_VSRAM_MD_PWFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_PWFMOC_FWUPOFF_SHIFT 3
#define MT6351_PMIC_RG_VSRAM_MD_CP_FWUPOFF_ADDR MT6351_VSRAM_MD_ANA_CON7
#define MT6351_PMIC_RG_VSRAM_MD_CP_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_CP_FWUPOFF_SHIFT 4
#define MT6351_PMIC_RG_VSRAM_MD_ZX_GATING_ADDR MT6351_VSRAM_MD_ANA_CON7
#define MT6351_PMIC_RG_VSRAM_MD_ZX_GATING_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_ZX_GATING_SHIFT 5
#define MT6351_PMIC_RG_VSRAM_MD_RSV_ADDR MT6351_VSRAM_MD_ANA_CON8
#define MT6351_PMIC_RG_VSRAM_MD_RSV_MASK 0xFFFF
#define MT6351_PMIC_RG_VSRAM_MD_RSV_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_MD_AZC_EN_ADDR MT6351_VSRAM_MD_ANA_CON9
#define MT6351_PMIC_RG_VSRAM_MD_AZC_EN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_AZC_EN_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_MD_AZC_DELAY_ADDR MT6351_VSRAM_MD_ANA_CON9
#define MT6351_PMIC_RG_VSRAM_MD_AZC_DELAY_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_MD_AZC_DELAY_SHIFT 1
#define MT6351_PMIC_RG_VSRAM_MD_AZC_HOLD_ENB_ADDR MT6351_VSRAM_MD_ANA_CON9
#define MT6351_PMIC_RG_VSRAM_MD_AZC_HOLD_ENB_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_MD_AZC_HOLD_ENB_SHIFT 3
#define MT6351_PMIC_RGS_QI_VSRAM_MD_OC_STATUS_ADDR MT6351_VSRAM_MD_ANA_CON9
#define MT6351_PMIC_RGS_QI_VSRAM_MD_OC_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_QI_VSRAM_MD_OC_STATUS_SHIFT 4
#define MT6351_PMIC_RGS_QI_VSRAM_MD_DIG_MON_ADDR MT6351_VSRAM_MD_ANA_CON9
#define MT6351_PMIC_RGS_QI_VSRAM_MD_DIG_MON_MASK 0xF
#define MT6351_PMIC_RGS_QI_VSRAM_MD_DIG_MON_SHIFT 5
#define MT6351_PMIC_RGS_VSRAM_MD_ENPWM_STATUS_ADDR MT6351_VSRAM_MD_ANA_CON9
#define MT6351_PMIC_RGS_VSRAM_MD_ENPWM_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_VSRAM_MD_ENPWM_STATUS_SHIFT 9
#define MT6351_PMIC_RG_VMODEM_MODESET_ADDR MT6351_VMODEM_ANA_CON0
#define MT6351_PMIC_RG_VMODEM_MODESET_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_MODESET_SHIFT 1
#define MT6351_PMIC_RG_VMODEM_NDIS_EN_ADDR MT6351_VMODEM_ANA_CON0
#define MT6351_PMIC_RG_VMODEM_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_NDIS_EN_SHIFT 2
#define MT6351_PMIC_RG_VMODEM_VRF18_SSTART_EN_ADDR MT6351_VMODEM_ANA_CON0
#define MT6351_PMIC_RG_VMODEM_VRF18_SSTART_EN_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_VRF18_SSTART_EN_SHIFT 3
#define MT6351_PMIC_RG_VMODEM_AUTO_MODE_ADDR MT6351_VMODEM_ANA_CON0
#define MT6351_PMIC_RG_VMODEM_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_AUTO_MODE_SHIFT 4
#define MT6351_PMIC_RG_VMODEM_RZSEL0_ADDR MT6351_VMODEM_ANA_CON1
#define MT6351_PMIC_RG_VMODEM_RZSEL0_MASK 0x7
#define MT6351_PMIC_RG_VMODEM_RZSEL0_SHIFT 0
#define MT6351_PMIC_RG_VMODEM_RZSEL1_ADDR MT6351_VMODEM_ANA_CON1
#define MT6351_PMIC_RG_VMODEM_RZSEL1_MASK 0xF
#define MT6351_PMIC_RG_VMODEM_RZSEL1_SHIFT 3
#define MT6351_PMIC_RG_VMODEM_CCSEL0_ADDR MT6351_VMODEM_ANA_CON1
#define MT6351_PMIC_RG_VMODEM_CCSEL0_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_CCSEL0_SHIFT 7
#define MT6351_PMIC_RG_VMODEM_CCSEL1_ADDR MT6351_VMODEM_ANA_CON1
#define MT6351_PMIC_RG_VMODEM_CCSEL1_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_CCSEL1_SHIFT 9
#define MT6351_PMIC_RG_VMODEM_CSL_ADDR MT6351_VMODEM_ANA_CON1
#define MT6351_PMIC_RG_VMODEM_CSL_MASK 0xF
#define MT6351_PMIC_RG_VMODEM_CSL_SHIFT 11
#define MT6351_PMIC_RG_VMODEM_SLP_ADDR MT6351_VMODEM_ANA_CON2
#define MT6351_PMIC_RG_VMODEM_SLP_MASK 0x7
#define MT6351_PMIC_RG_VMODEM_SLP_SHIFT 0
#define MT6351_PMIC_RG_VMODEM_ADRC_FEN_ADDR MT6351_VMODEM_ANA_CON2
#define MT6351_PMIC_RG_VMODEM_ADRC_FEN_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_ADRC_FEN_SHIFT 3
#define MT6351_PMIC_RG_VMODEM_VCCAP_CLAMP_FEN_ADDR MT6351_VMODEM_ANA_CON2
#define MT6351_PMIC_RG_VMODEM_VCCAP_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_VCCAP_CLAMP_FEN_SHIFT 4
#define MT6351_PMIC_RG_VMODEM_VC_CLAMP_FEN_ADDR MT6351_VMODEM_ANA_CON2
#define MT6351_PMIC_RG_VMODEM_VC_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_VC_CLAMP_FEN_SHIFT 5
#define MT6351_PMIC_RG_VMODEM_PFMOC_ADDR MT6351_VMODEM_ANA_CON2
#define MT6351_PMIC_RG_VMODEM_PFMOC_MASK 0x7
#define MT6351_PMIC_RG_VMODEM_PFMOC_SHIFT 6
#define MT6351_PMIC_RG_VMODEM_CSR_ADDR MT6351_VMODEM_ANA_CON2
#define MT6351_PMIC_RG_VMODEM_CSR_MASK 0x7
#define MT6351_PMIC_RG_VMODEM_CSR_SHIFT 9
#define MT6351_PMIC_RG_VMODEM_ZXOS_TRIM_ADDR MT6351_VMODEM_ANA_CON3
#define MT6351_PMIC_RG_VMODEM_ZXOS_TRIM_MASK 0xFF
#define MT6351_PMIC_RG_VMODEM_ZXOS_TRIM_SHIFT 0
#define MT6351_PMIC_RG_VMODEM_PFMSR_EH_ADDR MT6351_VMODEM_ANA_CON4
#define MT6351_PMIC_RG_VMODEM_PFMSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_PFMSR_EH_SHIFT 0
#define MT6351_PMIC_RG_VMODEM_NLIM_GATING_ADDR MT6351_VMODEM_ANA_CON4
#define MT6351_PMIC_RG_VMODEM_NLIM_GATING_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_NLIM_GATING_SHIFT 1
#define MT6351_PMIC_RG_VMODEM_PWRSR_EH_ADDR MT6351_VMODEM_ANA_CON4
#define MT6351_PMIC_RG_VMODEM_PWRSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_PWRSR_EH_SHIFT 2
#define MT6351_PMIC_RG_VMODEM_HS_VTHDET_ADDR MT6351_VMODEM_ANA_CON4
#define MT6351_PMIC_RG_VMODEM_HS_VTHDET_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_HS_VTHDET_SHIFT 3
#define MT6351_PMIC_RG_VMODEM_PG_GATING_ADDR MT6351_VMODEM_ANA_CON4
#define MT6351_PMIC_RG_VMODEM_PG_GATING_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_PG_GATING_SHIFT 4
#define MT6351_PMIC_RG_VMODEM_HS_ONSPEED_EH_ADDR MT6351_VMODEM_ANA_CON4
#define MT6351_PMIC_RG_VMODEM_HS_ONSPEED_EH_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_HS_ONSPEED_EH_SHIFT 5
#define MT6351_PMIC_RG_VMODEM_NLIM_TRIMMING_ADDR MT6351_VMODEM_ANA_CON4
#define MT6351_PMIC_RG_VMODEM_NLIM_TRIMMING_MASK 0xF
#define MT6351_PMIC_RG_VMODEM_NLIM_TRIMMING_SHIFT 6
#define MT6351_PMIC_RG_VMODEM_DLC_ADDR MT6351_VMODEM_ANA_CON5
#define MT6351_PMIC_RG_VMODEM_DLC_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_DLC_SHIFT 0
#define MT6351_PMIC_RG_VMODEM_DLC_N_ADDR MT6351_VMODEM_ANA_CON5
#define MT6351_PMIC_RG_VMODEM_DLC_N_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_DLC_N_SHIFT 2
#define MT6351_PMIC_RG_VMODEM_PFM_RIP_ADDR MT6351_VMODEM_ANA_CON5
#define MT6351_PMIC_RG_VMODEM_PFM_RIP_MASK 0x7
#define MT6351_PMIC_RG_VMODEM_PFM_RIP_SHIFT 4
#define MT6351_PMIC_RG_VMODEM_TRAN_BST_ADDR MT6351_VMODEM_ANA_CON5
#define MT6351_PMIC_RG_VMODEM_TRAN_BST_MASK 0x3F
#define MT6351_PMIC_RG_VMODEM_TRAN_BST_SHIFT 7
#define MT6351_PMIC_RG_VMODEM_DTS_ENB_ADDR MT6351_VMODEM_ANA_CON5
#define MT6351_PMIC_RG_VMODEM_DTS_ENB_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_DTS_ENB_SHIFT 13
#define MT6351_PMIC_RG_VMODEM_MIN_OFF_ADDR MT6351_VMODEM_ANA_CON5
#define MT6351_PMIC_RG_VMODEM_MIN_OFF_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_MIN_OFF_SHIFT 14
#define MT6351_PMIC_RG_VMODEM_1P35UP_SEL_EN_ADDR MT6351_VMODEM_ANA_CON6
#define MT6351_PMIC_RG_VMODEM_1P35UP_SEL_EN_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_1P35UP_SEL_EN_SHIFT 0
#define MT6351_PMIC_RG_VMODEM_DLC_AUTO_MODE_ADDR MT6351_VMODEM_ANA_CON6
#define MT6351_PMIC_RG_VMODEM_DLC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_DLC_AUTO_MODE_SHIFT 1
#define MT6351_PMIC_RG_VMODEM_DLC_SEL_ADDR MT6351_VMODEM_ANA_CON6
#define MT6351_PMIC_RG_VMODEM_DLC_SEL_MASK 0x7
#define MT6351_PMIC_RG_VMODEM_DLC_SEL_SHIFT 2
#define MT6351_PMIC_RG_VMODEM_SRC_AUTO_MODE_ADDR MT6351_VMODEM_ANA_CON6
#define MT6351_PMIC_RG_VMODEM_SRC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_SRC_AUTO_MODE_SHIFT 5
#define MT6351_PMIC_RG_VMODEM_UGP_SR_ADDR MT6351_VMODEM_ANA_CON6
#define MT6351_PMIC_RG_VMODEM_UGP_SR_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_UGP_SR_SHIFT 6
#define MT6351_PMIC_RG_VMODEM_LGN_SR_ADDR MT6351_VMODEM_ANA_CON6
#define MT6351_PMIC_RG_VMODEM_LGN_SR_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_LGN_SR_SHIFT 8
#define MT6351_PMIC_RG_VMODEM_UGP_SR_PFM_ADDR MT6351_VMODEM_ANA_CON6
#define MT6351_PMIC_RG_VMODEM_UGP_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_UGP_SR_PFM_SHIFT 10
#define MT6351_PMIC_RG_VMODEM_LGN_SR_PFM_ADDR MT6351_VMODEM_ANA_CON6
#define MT6351_PMIC_RG_VMODEM_LGN_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_LGN_SR_PFM_SHIFT 12
#define MT6351_PMIC_RG_VMODEM_UGD_VTHSEL_ADDR MT6351_VMODEM_ANA_CON6
#define MT6351_PMIC_RG_VMODEM_UGD_VTHSEL_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_UGD_VTHSEL_SHIFT 14
#define MT6351_PMIC_RG_VMODEM_FNLX_SNS_ADDR MT6351_VMODEM_ANA_CON7
#define MT6351_PMIC_RG_VMODEM_FNLX_SNS_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_FNLX_SNS_SHIFT 0
#define MT6351_PMIC_RG_VMODEM_VDIFF_ENLOWIQ_ADDR MT6351_VMODEM_ANA_CON7
#define MT6351_PMIC_RG_VMODEM_VDIFF_ENLOWIQ_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_VDIFF_ENLOWIQ_SHIFT 1
#define MT6351_PMIC_RG_VMODEM_PFMOC_FWUPOFF_ADDR MT6351_VMODEM_ANA_CON7
#define MT6351_PMIC_RG_VMODEM_PFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_PFMOC_FWUPOFF_SHIFT 2
#define MT6351_PMIC_RG_VMODEM_PWFMOC_FWUPOFF_ADDR MT6351_VMODEM_ANA_CON7
#define MT6351_PMIC_RG_VMODEM_PWFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_PWFMOC_FWUPOFF_SHIFT 3
#define MT6351_PMIC_RG_VMODEM_CP_FWUPOFF_ADDR MT6351_VMODEM_ANA_CON7
#define MT6351_PMIC_RG_VMODEM_CP_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_CP_FWUPOFF_SHIFT 4
#define MT6351_PMIC_RG_VMODEM_ZX_GATING_ADDR MT6351_VMODEM_ANA_CON7
#define MT6351_PMIC_RG_VMODEM_ZX_GATING_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_ZX_GATING_SHIFT 5
#define MT6351_PMIC_RG_VMODEM_RSV_ADDR MT6351_VMODEM_ANA_CON8
#define MT6351_PMIC_RG_VMODEM_RSV_MASK 0xFFFF
#define MT6351_PMIC_RG_VMODEM_RSV_SHIFT 0
#define MT6351_PMIC_RG_VMODEM_AZC_EN_ADDR MT6351_VMODEM_ANA_CON9
#define MT6351_PMIC_RG_VMODEM_AZC_EN_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_AZC_EN_SHIFT 0
#define MT6351_PMIC_RG_VMODEM_AZC_DELAY_ADDR MT6351_VMODEM_ANA_CON9
#define MT6351_PMIC_RG_VMODEM_AZC_DELAY_MASK 0x3
#define MT6351_PMIC_RG_VMODEM_AZC_DELAY_SHIFT 1
#define MT6351_PMIC_RG_VMODEM_AZC_HOLD_ENB_ADDR MT6351_VMODEM_ANA_CON9
#define MT6351_PMIC_RG_VMODEM_AZC_HOLD_ENB_MASK 0x1
#define MT6351_PMIC_RG_VMODEM_AZC_HOLD_ENB_SHIFT 3
#define MT6351_PMIC_RGS_QI_VMODEM_OC_STATUS_ADDR MT6351_VMODEM_ANA_CON9
#define MT6351_PMIC_RGS_QI_VMODEM_OC_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_QI_VMODEM_OC_STATUS_SHIFT 4
#define MT6351_PMIC_RGS_QI_VMODEM_DIG_MON_ADDR MT6351_VMODEM_ANA_CON9
#define MT6351_PMIC_RGS_QI_VMODEM_DIG_MON_MASK 0xF
#define MT6351_PMIC_RGS_QI_VMODEM_DIG_MON_SHIFT 5
#define MT6351_PMIC_RGS_VMODEM_ENPWM_STATUS_ADDR MT6351_VMODEM_ANA_CON9
#define MT6351_PMIC_RGS_VMODEM_ENPWM_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_VMODEM_ENPWM_STATUS_SHIFT 9
#define MT6351_PMIC_RG_VMD1_MODESET_ADDR MT6351_VMD1_ANA_CON0
#define MT6351_PMIC_RG_VMD1_MODESET_MASK 0x1
#define MT6351_PMIC_RG_VMD1_MODESET_SHIFT 1
#define MT6351_PMIC_RG_VMD1_NDIS_EN_ADDR MT6351_VMD1_ANA_CON0
#define MT6351_PMIC_RG_VMD1_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VMD1_NDIS_EN_SHIFT 2
#define MT6351_PMIC_RG_VMD1_VRF18_SSTART_EN_ADDR MT6351_VMD1_ANA_CON0
#define MT6351_PMIC_RG_VMD1_VRF18_SSTART_EN_MASK 0x1
#define MT6351_PMIC_RG_VMD1_VRF18_SSTART_EN_SHIFT 3
#define MT6351_PMIC_RG_VMD1_AUTO_MODE_ADDR MT6351_VMD1_ANA_CON0
#define MT6351_PMIC_RG_VMD1_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VMD1_AUTO_MODE_SHIFT 4
#define MT6351_PMIC_RG_VMD1_RZSEL0_ADDR MT6351_VMD1_ANA_CON1
#define MT6351_PMIC_RG_VMD1_RZSEL0_MASK 0x7
#define MT6351_PMIC_RG_VMD1_RZSEL0_SHIFT 0
#define MT6351_PMIC_RG_VMD1_RZSEL1_ADDR MT6351_VMD1_ANA_CON1
#define MT6351_PMIC_RG_VMD1_RZSEL1_MASK 0xF
#define MT6351_PMIC_RG_VMD1_RZSEL1_SHIFT 3
#define MT6351_PMIC_RG_VMD1_CCSEL0_ADDR MT6351_VMD1_ANA_CON1
#define MT6351_PMIC_RG_VMD1_CCSEL0_MASK 0x3
#define MT6351_PMIC_RG_VMD1_CCSEL0_SHIFT 7
#define MT6351_PMIC_RG_VMD1_CCSEL1_ADDR MT6351_VMD1_ANA_CON1
#define MT6351_PMIC_RG_VMD1_CCSEL1_MASK 0x3
#define MT6351_PMIC_RG_VMD1_CCSEL1_SHIFT 9
#define MT6351_PMIC_RG_VMD1_CSL_ADDR MT6351_VMD1_ANA_CON1
#define MT6351_PMIC_RG_VMD1_CSL_MASK 0xF
#define MT6351_PMIC_RG_VMD1_CSL_SHIFT 11
#define MT6351_PMIC_RG_VMD1_SLP_ADDR MT6351_VMD1_ANA_CON2
#define MT6351_PMIC_RG_VMD1_SLP_MASK 0x7
#define MT6351_PMIC_RG_VMD1_SLP_SHIFT 0
#define MT6351_PMIC_RG_VMD1_ADRC_FEN_ADDR MT6351_VMD1_ANA_CON2
#define MT6351_PMIC_RG_VMD1_ADRC_FEN_MASK 0x1
#define MT6351_PMIC_RG_VMD1_ADRC_FEN_SHIFT 3
#define MT6351_PMIC_RG_VMD1_VCCAP_CLAMP_FEN_ADDR MT6351_VMD1_ANA_CON2
#define MT6351_PMIC_RG_VMD1_VCCAP_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VMD1_VCCAP_CLAMP_FEN_SHIFT 4
#define MT6351_PMIC_RG_VMD1_VC_CLAMP_FEN_ADDR MT6351_VMD1_ANA_CON2
#define MT6351_PMIC_RG_VMD1_VC_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VMD1_VC_CLAMP_FEN_SHIFT 5
#define MT6351_PMIC_RG_VMD1_PFMOC_ADDR MT6351_VMD1_ANA_CON2
#define MT6351_PMIC_RG_VMD1_PFMOC_MASK 0x7
#define MT6351_PMIC_RG_VMD1_PFMOC_SHIFT 6
#define MT6351_PMIC_RG_VMD1_CSR_ADDR MT6351_VMD1_ANA_CON2
#define MT6351_PMIC_RG_VMD1_CSR_MASK 0x7
#define MT6351_PMIC_RG_VMD1_CSR_SHIFT 9
#define MT6351_PMIC_RG_VMD1_ZXOS_TRIM_ADDR MT6351_VMD1_ANA_CON3
#define MT6351_PMIC_RG_VMD1_ZXOS_TRIM_MASK 0xFF
#define MT6351_PMIC_RG_VMD1_ZXOS_TRIM_SHIFT 0
#define MT6351_PMIC_RG_VMD1_PFMSR_EH_ADDR MT6351_VMD1_ANA_CON4
#define MT6351_PMIC_RG_VMD1_PFMSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VMD1_PFMSR_EH_SHIFT 0
#define MT6351_PMIC_RG_VMD1_NLIM_GATING_ADDR MT6351_VMD1_ANA_CON4
#define MT6351_PMIC_RG_VMD1_NLIM_GATING_MASK 0x1
#define MT6351_PMIC_RG_VMD1_NLIM_GATING_SHIFT 1
#define MT6351_PMIC_RG_VMD1_PWRSR_EH_ADDR MT6351_VMD1_ANA_CON4
#define MT6351_PMIC_RG_VMD1_PWRSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VMD1_PWRSR_EH_SHIFT 2
#define MT6351_PMIC_RG_VMD1_HS_VTHDET_ADDR MT6351_VMD1_ANA_CON4
#define MT6351_PMIC_RG_VMD1_HS_VTHDET_MASK 0x1
#define MT6351_PMIC_RG_VMD1_HS_VTHDET_SHIFT 3
#define MT6351_PMIC_RG_VMD1_PG_GATING_ADDR MT6351_VMD1_ANA_CON4
#define MT6351_PMIC_RG_VMD1_PG_GATING_MASK 0x1
#define MT6351_PMIC_RG_VMD1_PG_GATING_SHIFT 4
#define MT6351_PMIC_RG_VMD1_HS_ONSPEED_EH_ADDR MT6351_VMD1_ANA_CON4
#define MT6351_PMIC_RG_VMD1_HS_ONSPEED_EH_MASK 0x1
#define MT6351_PMIC_RG_VMD1_HS_ONSPEED_EH_SHIFT 5
#define MT6351_PMIC_RG_VMD1_NLIM_TRIMMING_ADDR MT6351_VMD1_ANA_CON4
#define MT6351_PMIC_RG_VMD1_NLIM_TRIMMING_MASK 0xF
#define MT6351_PMIC_RG_VMD1_NLIM_TRIMMING_SHIFT 6
#define MT6351_PMIC_RG_VMD1_DLC_ADDR MT6351_VMD1_ANA_CON5
#define MT6351_PMIC_RG_VMD1_DLC_MASK 0x3
#define MT6351_PMIC_RG_VMD1_DLC_SHIFT 0
#define MT6351_PMIC_RG_VMD1_DLC_N_ADDR MT6351_VMD1_ANA_CON5
#define MT6351_PMIC_RG_VMD1_DLC_N_MASK 0x3
#define MT6351_PMIC_RG_VMD1_DLC_N_SHIFT 2
#define MT6351_PMIC_RG_VMD1_PFM_RIP_ADDR MT6351_VMD1_ANA_CON5
#define MT6351_PMIC_RG_VMD1_PFM_RIP_MASK 0x7
#define MT6351_PMIC_RG_VMD1_PFM_RIP_SHIFT 4
#define MT6351_PMIC_RG_VMD1_TRAN_BST_ADDR MT6351_VMD1_ANA_CON5
#define MT6351_PMIC_RG_VMD1_TRAN_BST_MASK 0x3F
#define MT6351_PMIC_RG_VMD1_TRAN_BST_SHIFT 7
#define MT6351_PMIC_RG_VMD1_DTS_ENB_ADDR MT6351_VMD1_ANA_CON5
#define MT6351_PMIC_RG_VMD1_DTS_ENB_MASK 0x1
#define MT6351_PMIC_RG_VMD1_DTS_ENB_SHIFT 13
#define MT6351_PMIC_RG_VMD1_MIN_OFF_ADDR MT6351_VMD1_ANA_CON5
#define MT6351_PMIC_RG_VMD1_MIN_OFF_MASK 0x3
#define MT6351_PMIC_RG_VMD1_MIN_OFF_SHIFT 14
#define MT6351_PMIC_RG_VMD1_1P35UP_SEL_EN_ADDR MT6351_VMD1_ANA_CON6
#define MT6351_PMIC_RG_VMD1_1P35UP_SEL_EN_MASK 0x1
#define MT6351_PMIC_RG_VMD1_1P35UP_SEL_EN_SHIFT 0
#define MT6351_PMIC_RG_VMD1_DLC_AUTO_MODE_ADDR MT6351_VMD1_ANA_CON6
#define MT6351_PMIC_RG_VMD1_DLC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VMD1_DLC_AUTO_MODE_SHIFT 1
#define MT6351_PMIC_RG_VMD1_DLC_SEL_ADDR MT6351_VMD1_ANA_CON6
#define MT6351_PMIC_RG_VMD1_DLC_SEL_MASK 0x7
#define MT6351_PMIC_RG_VMD1_DLC_SEL_SHIFT 2
#define MT6351_PMIC_RG_VMD1_SRC_AUTO_MODE_ADDR MT6351_VMD1_ANA_CON6
#define MT6351_PMIC_RG_VMD1_SRC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VMD1_SRC_AUTO_MODE_SHIFT 5
#define MT6351_PMIC_RG_VMD1_UGP_SR_ADDR MT6351_VMD1_ANA_CON6
#define MT6351_PMIC_RG_VMD1_UGP_SR_MASK 0x3
#define MT6351_PMIC_RG_VMD1_UGP_SR_SHIFT 6
#define MT6351_PMIC_RG_VMD1_LGN_SR_ADDR MT6351_VMD1_ANA_CON6
#define MT6351_PMIC_RG_VMD1_LGN_SR_MASK 0x3
#define MT6351_PMIC_RG_VMD1_LGN_SR_SHIFT 8
#define MT6351_PMIC_RG_VMD1_UGP_SR_PFM_ADDR MT6351_VMD1_ANA_CON6
#define MT6351_PMIC_RG_VMD1_UGP_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VMD1_UGP_SR_PFM_SHIFT 10
#define MT6351_PMIC_RG_VMD1_LGN_SR_PFM_ADDR MT6351_VMD1_ANA_CON6
#define MT6351_PMIC_RG_VMD1_LGN_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VMD1_LGN_SR_PFM_SHIFT 12
#define MT6351_PMIC_RG_VMD1_UGD_VTHSEL_ADDR MT6351_VMD1_ANA_CON6
#define MT6351_PMIC_RG_VMD1_UGD_VTHSEL_MASK 0x3
#define MT6351_PMIC_RG_VMD1_UGD_VTHSEL_SHIFT 14
#define MT6351_PMIC_RG_VMD1_FNLX_SNS_ADDR MT6351_VMD1_ANA_CON7
#define MT6351_PMIC_RG_VMD1_FNLX_SNS_MASK 0x1
#define MT6351_PMIC_RG_VMD1_FNLX_SNS_SHIFT 0
#define MT6351_PMIC_RG_VMD1_VDIFF_ENLOWIQ_ADDR MT6351_VMD1_ANA_CON7
#define MT6351_PMIC_RG_VMD1_VDIFF_ENLOWIQ_MASK 0x1
#define MT6351_PMIC_RG_VMD1_VDIFF_ENLOWIQ_SHIFT 1
#define MT6351_PMIC_RG_VMD1_PFMOC_FWUPOFF_ADDR MT6351_VMD1_ANA_CON7
#define MT6351_PMIC_RG_VMD1_PFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VMD1_PFMOC_FWUPOFF_SHIFT 2
#define MT6351_PMIC_RG_VMD1_PWFMOC_FWUPOFF_ADDR MT6351_VMD1_ANA_CON7
#define MT6351_PMIC_RG_VMD1_PWFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VMD1_PWFMOC_FWUPOFF_SHIFT 3
#define MT6351_PMIC_RG_VMD1_CP_FWUPOFF_ADDR MT6351_VMD1_ANA_CON7
#define MT6351_PMIC_RG_VMD1_CP_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VMD1_CP_FWUPOFF_SHIFT 4
#define MT6351_PMIC_RG_VMD1_ZX_GATING_ADDR MT6351_VMD1_ANA_CON7
#define MT6351_PMIC_RG_VMD1_ZX_GATING_MASK 0x1
#define MT6351_PMIC_RG_VMD1_ZX_GATING_SHIFT 5
#define MT6351_PMIC_RG_VMD1_RSV_ADDR MT6351_VMD1_ANA_CON8
#define MT6351_PMIC_RG_VMD1_RSV_MASK 0xFFFF
#define MT6351_PMIC_RG_VMD1_RSV_SHIFT 0
#define MT6351_PMIC_RG_VMD1_AZC_EN_ADDR MT6351_VMD1_ANA_CON9
#define MT6351_PMIC_RG_VMD1_AZC_EN_MASK 0x1
#define MT6351_PMIC_RG_VMD1_AZC_EN_SHIFT 0
#define MT6351_PMIC_RG_VMD1_AZC_DELAY_ADDR MT6351_VMD1_ANA_CON9
#define MT6351_PMIC_RG_VMD1_AZC_DELAY_MASK 0x3
#define MT6351_PMIC_RG_VMD1_AZC_DELAY_SHIFT 1
#define MT6351_PMIC_RG_VMD1_AZC_HOLD_ENB_ADDR MT6351_VMD1_ANA_CON9
#define MT6351_PMIC_RG_VMD1_AZC_HOLD_ENB_MASK 0x1
#define MT6351_PMIC_RG_VMD1_AZC_HOLD_ENB_SHIFT 3
#define MT6351_PMIC_RGS_QI_VMD1_OC_STATUS_ADDR MT6351_VMD1_ANA_CON9
#define MT6351_PMIC_RGS_QI_VMD1_OC_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_QI_VMD1_OC_STATUS_SHIFT 4
#define MT6351_PMIC_RGS_QI_VMD1_DIG_MON_ADDR MT6351_VMD1_ANA_CON9
#define MT6351_PMIC_RGS_QI_VMD1_DIG_MON_MASK 0xF
#define MT6351_PMIC_RGS_QI_VMD1_DIG_MON_SHIFT 5
#define MT6351_PMIC_RGS_VMD1_ENPWM_STATUS_ADDR MT6351_VMD1_ANA_CON9
#define MT6351_PMIC_RGS_VMD1_ENPWM_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_VMD1_ENPWM_STATUS_SHIFT 9
#define MT6351_PMIC_RG_VS1_MODESET_ADDR MT6351_VS1_ANA_CON0
#define MT6351_PMIC_RG_VS1_MODESET_MASK 0x1
#define MT6351_PMIC_RG_VS1_MODESET_SHIFT 1
#define MT6351_PMIC_RG_VS1_NDIS_EN_ADDR MT6351_VS1_ANA_CON0
#define MT6351_PMIC_RG_VS1_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VS1_NDIS_EN_SHIFT 2
#define MT6351_PMIC_RG_VS1_VRF18_SSTART_EN_ADDR MT6351_VS1_ANA_CON0
#define MT6351_PMIC_RG_VS1_VRF18_SSTART_EN_MASK 0x1
#define MT6351_PMIC_RG_VS1_VRF18_SSTART_EN_SHIFT 3
#define MT6351_PMIC_RG_VS1_AUTO_MODE_ADDR MT6351_VS1_ANA_CON0
#define MT6351_PMIC_RG_VS1_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VS1_AUTO_MODE_SHIFT 4
#define MT6351_PMIC_RG_VS1_RZSEL0_ADDR MT6351_VS1_ANA_CON1
#define MT6351_PMIC_RG_VS1_RZSEL0_MASK 0x7
#define MT6351_PMIC_RG_VS1_RZSEL0_SHIFT 0
#define MT6351_PMIC_RG_VS1_RZSEL1_ADDR MT6351_VS1_ANA_CON1
#define MT6351_PMIC_RG_VS1_RZSEL1_MASK 0xF
#define MT6351_PMIC_RG_VS1_RZSEL1_SHIFT 3
#define MT6351_PMIC_RG_VS1_CCSEL0_ADDR MT6351_VS1_ANA_CON1
#define MT6351_PMIC_RG_VS1_CCSEL0_MASK 0x3
#define MT6351_PMIC_RG_VS1_CCSEL0_SHIFT 7
#define MT6351_PMIC_RG_VS1_CCSEL1_ADDR MT6351_VS1_ANA_CON1
#define MT6351_PMIC_RG_VS1_CCSEL1_MASK 0x3
#define MT6351_PMIC_RG_VS1_CCSEL1_SHIFT 9
#define MT6351_PMIC_RG_VS1_CSL_ADDR MT6351_VS1_ANA_CON1
#define MT6351_PMIC_RG_VS1_CSL_MASK 0xF
#define MT6351_PMIC_RG_VS1_CSL_SHIFT 11
#define MT6351_PMIC_RG_VS1_SLP_ADDR MT6351_VS1_ANA_CON2
#define MT6351_PMIC_RG_VS1_SLP_MASK 0x7
#define MT6351_PMIC_RG_VS1_SLP_SHIFT 0
#define MT6351_PMIC_RG_VS1_ADRC_FEN_ADDR MT6351_VS1_ANA_CON2
#define MT6351_PMIC_RG_VS1_ADRC_FEN_MASK 0x1
#define MT6351_PMIC_RG_VS1_ADRC_FEN_SHIFT 3
#define MT6351_PMIC_RG_VS1_VCCAP_CLAMP_FEN_ADDR MT6351_VS1_ANA_CON2
#define MT6351_PMIC_RG_VS1_VCCAP_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VS1_VCCAP_CLAMP_FEN_SHIFT 4
#define MT6351_PMIC_RG_VS1_VC_CLAMP_FEN_ADDR MT6351_VS1_ANA_CON2
#define MT6351_PMIC_RG_VS1_VC_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VS1_VC_CLAMP_FEN_SHIFT 5
#define MT6351_PMIC_RG_VS1_PFMOC_ADDR MT6351_VS1_ANA_CON2
#define MT6351_PMIC_RG_VS1_PFMOC_MASK 0x7
#define MT6351_PMIC_RG_VS1_PFMOC_SHIFT 6
#define MT6351_PMIC_RG_VS1_CSR_ADDR MT6351_VS1_ANA_CON2
#define MT6351_PMIC_RG_VS1_CSR_MASK 0x7
#define MT6351_PMIC_RG_VS1_CSR_SHIFT 9
#define MT6351_PMIC_RG_VS1_ZXOS_TRIM_ADDR MT6351_VS1_ANA_CON3
#define MT6351_PMIC_RG_VS1_ZXOS_TRIM_MASK 0xFF
#define MT6351_PMIC_RG_VS1_ZXOS_TRIM_SHIFT 0
#define MT6351_PMIC_RG_VS1_PFMSR_EH_ADDR MT6351_VS1_ANA_CON4
#define MT6351_PMIC_RG_VS1_PFMSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VS1_PFMSR_EH_SHIFT 0
#define MT6351_PMIC_RG_VS1_NLIM_GATING_ADDR MT6351_VS1_ANA_CON4
#define MT6351_PMIC_RG_VS1_NLIM_GATING_MASK 0x1
#define MT6351_PMIC_RG_VS1_NLIM_GATING_SHIFT 1
#define MT6351_PMIC_RG_VS1_PWRSR_EH_ADDR MT6351_VS1_ANA_CON4
#define MT6351_PMIC_RG_VS1_PWRSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VS1_PWRSR_EH_SHIFT 2
#define MT6351_PMIC_RG_VS1_HS_VTHDET_ADDR MT6351_VS1_ANA_CON4
#define MT6351_PMIC_RG_VS1_HS_VTHDET_MASK 0x1
#define MT6351_PMIC_RG_VS1_HS_VTHDET_SHIFT 3
#define MT6351_PMIC_RG_VS1_PG_GATING_ADDR MT6351_VS1_ANA_CON4
#define MT6351_PMIC_RG_VS1_PG_GATING_MASK 0x1
#define MT6351_PMIC_RG_VS1_PG_GATING_SHIFT 4
#define MT6351_PMIC_RG_VS1_HS_ONSPEED_EH_ADDR MT6351_VS1_ANA_CON4
#define MT6351_PMIC_RG_VS1_HS_ONSPEED_EH_MASK 0x1
#define MT6351_PMIC_RG_VS1_HS_ONSPEED_EH_SHIFT 5
#define MT6351_PMIC_RG_VS1_NLIM_TRIMMING_ADDR MT6351_VS1_ANA_CON4
#define MT6351_PMIC_RG_VS1_NLIM_TRIMMING_MASK 0xF
#define MT6351_PMIC_RG_VS1_NLIM_TRIMMING_SHIFT 6
#define MT6351_PMIC_RG_VS1_DLC_ADDR MT6351_VS1_ANA_CON5
#define MT6351_PMIC_RG_VS1_DLC_MASK 0x3
#define MT6351_PMIC_RG_VS1_DLC_SHIFT 0
#define MT6351_PMIC_RG_VS1_DLC_N_ADDR MT6351_VS1_ANA_CON5
#define MT6351_PMIC_RG_VS1_DLC_N_MASK 0x3
#define MT6351_PMIC_RG_VS1_DLC_N_SHIFT 2
#define MT6351_PMIC_RG_VS1_PFM_RIP_ADDR MT6351_VS1_ANA_CON5
#define MT6351_PMIC_RG_VS1_PFM_RIP_MASK 0x7
#define MT6351_PMIC_RG_VS1_PFM_RIP_SHIFT 4
#define MT6351_PMIC_RG_VS1_TRAN_BST_ADDR MT6351_VS1_ANA_CON5
#define MT6351_PMIC_RG_VS1_TRAN_BST_MASK 0x3F
#define MT6351_PMIC_RG_VS1_TRAN_BST_SHIFT 7
#define MT6351_PMIC_RG_VS1_DTS_ENB_ADDR MT6351_VS1_ANA_CON5
#define MT6351_PMIC_RG_VS1_DTS_ENB_MASK 0x1
#define MT6351_PMIC_RG_VS1_DTS_ENB_SHIFT 13
#define MT6351_PMIC_RG_VS1_MIN_OFF_ADDR MT6351_VS1_ANA_CON5
#define MT6351_PMIC_RG_VS1_MIN_OFF_MASK 0x3
#define MT6351_PMIC_RG_VS1_MIN_OFF_SHIFT 14
#define MT6351_PMIC_RG_VS1_1P35UP_SEL_EN_ADDR MT6351_VS1_ANA_CON6
#define MT6351_PMIC_RG_VS1_1P35UP_SEL_EN_MASK 0x1
#define MT6351_PMIC_RG_VS1_1P35UP_SEL_EN_SHIFT 0
#define MT6351_PMIC_RG_VS1_DLC_AUTO_MODE_ADDR MT6351_VS1_ANA_CON6
#define MT6351_PMIC_RG_VS1_DLC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VS1_DLC_AUTO_MODE_SHIFT 1
#define MT6351_PMIC_RG_VS1_DLC_SEL_ADDR MT6351_VS1_ANA_CON6
#define MT6351_PMIC_RG_VS1_DLC_SEL_MASK 0x7
#define MT6351_PMIC_RG_VS1_DLC_SEL_SHIFT 2
#define MT6351_PMIC_RG_VS1_SRC_AUTO_MODE_ADDR MT6351_VS1_ANA_CON6
#define MT6351_PMIC_RG_VS1_SRC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VS1_SRC_AUTO_MODE_SHIFT 5
#define MT6351_PMIC_RG_VS1_UGP_SR_ADDR MT6351_VS1_ANA_CON6
#define MT6351_PMIC_RG_VS1_UGP_SR_MASK 0x3
#define MT6351_PMIC_RG_VS1_UGP_SR_SHIFT 6
#define MT6351_PMIC_RG_VS1_LGN_SR_ADDR MT6351_VS1_ANA_CON6
#define MT6351_PMIC_RG_VS1_LGN_SR_MASK 0x3
#define MT6351_PMIC_RG_VS1_LGN_SR_SHIFT 8
#define MT6351_PMIC_RG_VS1_UGP_SR_PFM_ADDR MT6351_VS1_ANA_CON6
#define MT6351_PMIC_RG_VS1_UGP_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VS1_UGP_SR_PFM_SHIFT 10
#define MT6351_PMIC_RG_VS1_LGN_SR_PFM_ADDR MT6351_VS1_ANA_CON6
#define MT6351_PMIC_RG_VS1_LGN_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VS1_LGN_SR_PFM_SHIFT 12
#define MT6351_PMIC_RG_VS1_UGD_VTHSEL_ADDR MT6351_VS1_ANA_CON6
#define MT6351_PMIC_RG_VS1_UGD_VTHSEL_MASK 0x3
#define MT6351_PMIC_RG_VS1_UGD_VTHSEL_SHIFT 14
#define MT6351_PMIC_RG_VS1_FNLX_SNS_ADDR MT6351_VS1_ANA_CON7
#define MT6351_PMIC_RG_VS1_FNLX_SNS_MASK 0x1
#define MT6351_PMIC_RG_VS1_FNLX_SNS_SHIFT 0
#define MT6351_PMIC_RG_VS1_VDIFF_ENLOWIQ_ADDR MT6351_VS1_ANA_CON7
#define MT6351_PMIC_RG_VS1_VDIFF_ENLOWIQ_MASK 0x1
#define MT6351_PMIC_RG_VS1_VDIFF_ENLOWIQ_SHIFT 1
#define MT6351_PMIC_RG_VS1_PFMOC_FWUPOFF_ADDR MT6351_VS1_ANA_CON7
#define MT6351_PMIC_RG_VS1_PFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VS1_PFMOC_FWUPOFF_SHIFT 2
#define MT6351_PMIC_RG_VS1_PWFMOC_FWUPOFF_ADDR MT6351_VS1_ANA_CON7
#define MT6351_PMIC_RG_VS1_PWFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VS1_PWFMOC_FWUPOFF_SHIFT 3
#define MT6351_PMIC_RG_VS1_CP_FWUPOFF_ADDR MT6351_VS1_ANA_CON7
#define MT6351_PMIC_RG_VS1_CP_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VS1_CP_FWUPOFF_SHIFT 4
#define MT6351_PMIC_RG_VS1_ZX_GATING_ADDR MT6351_VS1_ANA_CON7
#define MT6351_PMIC_RG_VS1_ZX_GATING_MASK 0x1
#define MT6351_PMIC_RG_VS1_ZX_GATING_SHIFT 5
#define MT6351_PMIC_RG_VS1_RSV_ADDR MT6351_VS1_ANA_CON8
#define MT6351_PMIC_RG_VS1_RSV_MASK 0xFFFF
#define MT6351_PMIC_RG_VS1_RSV_SHIFT 0
#define MT6351_PMIC_RG_VS1_AZC_EN_ADDR MT6351_VS1_ANA_CON9
#define MT6351_PMIC_RG_VS1_AZC_EN_MASK 0x1
#define MT6351_PMIC_RG_VS1_AZC_EN_SHIFT 0
#define MT6351_PMIC_RG_VS1_AZC_DELAY_ADDR MT6351_VS1_ANA_CON9
#define MT6351_PMIC_RG_VS1_AZC_DELAY_MASK 0x3
#define MT6351_PMIC_RG_VS1_AZC_DELAY_SHIFT 1
#define MT6351_PMIC_RG_VS1_AZC_HOLD_ENB_ADDR MT6351_VS1_ANA_CON9
#define MT6351_PMIC_RG_VS1_AZC_HOLD_ENB_MASK 0x1
#define MT6351_PMIC_RG_VS1_AZC_HOLD_ENB_SHIFT 3
#define MT6351_PMIC_RGS_QI_VS1_OC_STATUS_ADDR MT6351_VS1_ANA_CON9
#define MT6351_PMIC_RGS_QI_VS1_OC_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_QI_VS1_OC_STATUS_SHIFT 4
#define MT6351_PMIC_RGS_QI_VS1_DIG_MON_ADDR MT6351_VS1_ANA_CON9
#define MT6351_PMIC_RGS_QI_VS1_DIG_MON_MASK 0xF
#define MT6351_PMIC_RGS_QI_VS1_DIG_MON_SHIFT 5
#define MT6351_PMIC_RGS_VS1_ENPWM_STATUS_ADDR MT6351_VS1_ANA_CON9
#define MT6351_PMIC_RGS_VS1_ENPWM_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_VS1_ENPWM_STATUS_SHIFT 9
#define MT6351_PMIC_RG_VS2_MODESET_ADDR MT6351_VS2_ANA_CON0
#define MT6351_PMIC_RG_VS2_MODESET_MASK 0x1
#define MT6351_PMIC_RG_VS2_MODESET_SHIFT 1
#define MT6351_PMIC_RG_VS2_NDIS_EN_ADDR MT6351_VS2_ANA_CON0
#define MT6351_PMIC_RG_VS2_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VS2_NDIS_EN_SHIFT 2
#define MT6351_PMIC_RG_VS2_VRF18_SSTART_EN_ADDR MT6351_VS2_ANA_CON0
#define MT6351_PMIC_RG_VS2_VRF18_SSTART_EN_MASK 0x1
#define MT6351_PMIC_RG_VS2_VRF18_SSTART_EN_SHIFT 3
#define MT6351_PMIC_RG_VS2_AUTO_MODE_ADDR MT6351_VS2_ANA_CON0
#define MT6351_PMIC_RG_VS2_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VS2_AUTO_MODE_SHIFT 4
#define MT6351_PMIC_RG_VS2_RZSEL0_ADDR MT6351_VS2_ANA_CON1
#define MT6351_PMIC_RG_VS2_RZSEL0_MASK 0x7
#define MT6351_PMIC_RG_VS2_RZSEL0_SHIFT 0
#define MT6351_PMIC_RG_VS2_RZSEL1_ADDR MT6351_VS2_ANA_CON1
#define MT6351_PMIC_RG_VS2_RZSEL1_MASK 0xF
#define MT6351_PMIC_RG_VS2_RZSEL1_SHIFT 3
#define MT6351_PMIC_RG_VS2_CCSEL0_ADDR MT6351_VS2_ANA_CON1
#define MT6351_PMIC_RG_VS2_CCSEL0_MASK 0x3
#define MT6351_PMIC_RG_VS2_CCSEL0_SHIFT 7
#define MT6351_PMIC_RG_VS2_CCSEL1_ADDR MT6351_VS2_ANA_CON1
#define MT6351_PMIC_RG_VS2_CCSEL1_MASK 0x3
#define MT6351_PMIC_RG_VS2_CCSEL1_SHIFT 9
#define MT6351_PMIC_RG_VS2_CSL_ADDR MT6351_VS2_ANA_CON1
#define MT6351_PMIC_RG_VS2_CSL_MASK 0xF
#define MT6351_PMIC_RG_VS2_CSL_SHIFT 11
#define MT6351_PMIC_RG_VS2_SLP_ADDR MT6351_VS2_ANA_CON2
#define MT6351_PMIC_RG_VS2_SLP_MASK 0x7
#define MT6351_PMIC_RG_VS2_SLP_SHIFT 0
#define MT6351_PMIC_RG_VS2_ADRC_FEN_ADDR MT6351_VS2_ANA_CON2
#define MT6351_PMIC_RG_VS2_ADRC_FEN_MASK 0x1
#define MT6351_PMIC_RG_VS2_ADRC_FEN_SHIFT 3
#define MT6351_PMIC_RG_VS2_VCCAP_CLAMP_FEN_ADDR MT6351_VS2_ANA_CON2
#define MT6351_PMIC_RG_VS2_VCCAP_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VS2_VCCAP_CLAMP_FEN_SHIFT 4
#define MT6351_PMIC_RG_VS2_VC_CLAMP_FEN_ADDR MT6351_VS2_ANA_CON2
#define MT6351_PMIC_RG_VS2_VC_CLAMP_FEN_MASK 0x1
#define MT6351_PMIC_RG_VS2_VC_CLAMP_FEN_SHIFT 5
#define MT6351_PMIC_RG_VS2_PFMOC_ADDR MT6351_VS2_ANA_CON2
#define MT6351_PMIC_RG_VS2_PFMOC_MASK 0x7
#define MT6351_PMIC_RG_VS2_PFMOC_SHIFT 6
#define MT6351_PMIC_RG_VS2_CSR_ADDR MT6351_VS2_ANA_CON2
#define MT6351_PMIC_RG_VS2_CSR_MASK 0x7
#define MT6351_PMIC_RG_VS2_CSR_SHIFT 9
#define MT6351_PMIC_RG_VS2_ZXOS_TRIM_ADDR MT6351_VS2_ANA_CON3
#define MT6351_PMIC_RG_VS2_ZXOS_TRIM_MASK 0xFF
#define MT6351_PMIC_RG_VS2_ZXOS_TRIM_SHIFT 0
#define MT6351_PMIC_RG_VS2_PFMSR_EH_ADDR MT6351_VS2_ANA_CON4
#define MT6351_PMIC_RG_VS2_PFMSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VS2_PFMSR_EH_SHIFT 0
#define MT6351_PMIC_RG_VS2_NLIM_GATING_ADDR MT6351_VS2_ANA_CON4
#define MT6351_PMIC_RG_VS2_NLIM_GATING_MASK 0x1
#define MT6351_PMIC_RG_VS2_NLIM_GATING_SHIFT 1
#define MT6351_PMIC_RG_VS2_PWRSR_EH_ADDR MT6351_VS2_ANA_CON4
#define MT6351_PMIC_RG_VS2_PWRSR_EH_MASK 0x1
#define MT6351_PMIC_RG_VS2_PWRSR_EH_SHIFT 2
#define MT6351_PMIC_RG_VS2_HS_VTHDET_ADDR MT6351_VS2_ANA_CON4
#define MT6351_PMIC_RG_VS2_HS_VTHDET_MASK 0x1
#define MT6351_PMIC_RG_VS2_HS_VTHDET_SHIFT 3
#define MT6351_PMIC_RG_VS2_PG_GATING_ADDR MT6351_VS2_ANA_CON4
#define MT6351_PMIC_RG_VS2_PG_GATING_MASK 0x1
#define MT6351_PMIC_RG_VS2_PG_GATING_SHIFT 4
#define MT6351_PMIC_RG_VS2_HS_ONSPEED_EH_ADDR MT6351_VS2_ANA_CON4
#define MT6351_PMIC_RG_VS2_HS_ONSPEED_EH_MASK 0x1
#define MT6351_PMIC_RG_VS2_HS_ONSPEED_EH_SHIFT 5
#define MT6351_PMIC_RG_VS2_NLIM_TRIMMING_ADDR MT6351_VS2_ANA_CON4
#define MT6351_PMIC_RG_VS2_NLIM_TRIMMING_MASK 0xF
#define MT6351_PMIC_RG_VS2_NLIM_TRIMMING_SHIFT 6
#define MT6351_PMIC_RG_VS2_DLC_ADDR MT6351_VS2_ANA_CON5
#define MT6351_PMIC_RG_VS2_DLC_MASK 0x3
#define MT6351_PMIC_RG_VS2_DLC_SHIFT 0
#define MT6351_PMIC_RG_VS2_DLC_N_ADDR MT6351_VS2_ANA_CON5
#define MT6351_PMIC_RG_VS2_DLC_N_MASK 0x3
#define MT6351_PMIC_RG_VS2_DLC_N_SHIFT 2
#define MT6351_PMIC_RG_VS2_PFM_RIP_ADDR MT6351_VS2_ANA_CON5
#define MT6351_PMIC_RG_VS2_PFM_RIP_MASK 0x7
#define MT6351_PMIC_RG_VS2_PFM_RIP_SHIFT 4
#define MT6351_PMIC_RG_VS2_TRAN_BST_ADDR MT6351_VS2_ANA_CON5
#define MT6351_PMIC_RG_VS2_TRAN_BST_MASK 0x3F
#define MT6351_PMIC_RG_VS2_TRAN_BST_SHIFT 7
#define MT6351_PMIC_RG_VS2_DTS_ENB_ADDR MT6351_VS2_ANA_CON5
#define MT6351_PMIC_RG_VS2_DTS_ENB_MASK 0x1
#define MT6351_PMIC_RG_VS2_DTS_ENB_SHIFT 13
#define MT6351_PMIC_RG_VS2_MIN_OFF_ADDR MT6351_VS2_ANA_CON5
#define MT6351_PMIC_RG_VS2_MIN_OFF_MASK 0x3
#define MT6351_PMIC_RG_VS2_MIN_OFF_SHIFT 14
#define MT6351_PMIC_RG_VS2_1P35UP_SEL_EN_ADDR MT6351_VS2_ANA_CON6
#define MT6351_PMIC_RG_VS2_1P35UP_SEL_EN_MASK 0x1
#define MT6351_PMIC_RG_VS2_1P35UP_SEL_EN_SHIFT 0
#define MT6351_PMIC_RG_VS2_DLC_AUTO_MODE_ADDR MT6351_VS2_ANA_CON6
#define MT6351_PMIC_RG_VS2_DLC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VS2_DLC_AUTO_MODE_SHIFT 1
#define MT6351_PMIC_RG_VS2_DLC_SEL_ADDR MT6351_VS2_ANA_CON6
#define MT6351_PMIC_RG_VS2_DLC_SEL_MASK 0x7
#define MT6351_PMIC_RG_VS2_DLC_SEL_SHIFT 2
#define MT6351_PMIC_RG_VS2_SRC_AUTO_MODE_ADDR MT6351_VS2_ANA_CON6
#define MT6351_PMIC_RG_VS2_SRC_AUTO_MODE_MASK 0x1
#define MT6351_PMIC_RG_VS2_SRC_AUTO_MODE_SHIFT 5
#define MT6351_PMIC_RG_VS2_UGP_SR_ADDR MT6351_VS2_ANA_CON6
#define MT6351_PMIC_RG_VS2_UGP_SR_MASK 0x3
#define MT6351_PMIC_RG_VS2_UGP_SR_SHIFT 6
#define MT6351_PMIC_RG_VS2_LGN_SR_ADDR MT6351_VS2_ANA_CON6
#define MT6351_PMIC_RG_VS2_LGN_SR_MASK 0x3
#define MT6351_PMIC_RG_VS2_LGN_SR_SHIFT 8
#define MT6351_PMIC_RG_VS2_UGP_SR_PFM_ADDR MT6351_VS2_ANA_CON6
#define MT6351_PMIC_RG_VS2_UGP_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VS2_UGP_SR_PFM_SHIFT 10
#define MT6351_PMIC_RG_VS2_LGN_SR_PFM_ADDR MT6351_VS2_ANA_CON6
#define MT6351_PMIC_RG_VS2_LGN_SR_PFM_MASK 0x3
#define MT6351_PMIC_RG_VS2_LGN_SR_PFM_SHIFT 12
#define MT6351_PMIC_RG_VS2_UGD_VTHSEL_ADDR MT6351_VS2_ANA_CON6
#define MT6351_PMIC_RG_VS2_UGD_VTHSEL_MASK 0x3
#define MT6351_PMIC_RG_VS2_UGD_VTHSEL_SHIFT 14
#define MT6351_PMIC_RG_VS2_FNLX_SNS_ADDR MT6351_VS2_ANA_CON7
#define MT6351_PMIC_RG_VS2_FNLX_SNS_MASK 0x1
#define MT6351_PMIC_RG_VS2_FNLX_SNS_SHIFT 0
#define MT6351_PMIC_RG_VS2_VDIFF_ENLOWIQ_ADDR MT6351_VS2_ANA_CON7
#define MT6351_PMIC_RG_VS2_VDIFF_ENLOWIQ_MASK 0x1
#define MT6351_PMIC_RG_VS2_VDIFF_ENLOWIQ_SHIFT 1
#define MT6351_PMIC_RG_VS2_PFMOC_FWUPOFF_ADDR MT6351_VS2_ANA_CON7
#define MT6351_PMIC_RG_VS2_PFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VS2_PFMOC_FWUPOFF_SHIFT 2
#define MT6351_PMIC_RG_VS2_PWFMOC_FWUPOFF_ADDR MT6351_VS2_ANA_CON7
#define MT6351_PMIC_RG_VS2_PWFMOC_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VS2_PWFMOC_FWUPOFF_SHIFT 3
#define MT6351_PMIC_RG_VS2_CP_FWUPOFF_ADDR MT6351_VS2_ANA_CON7
#define MT6351_PMIC_RG_VS2_CP_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VS2_CP_FWUPOFF_SHIFT 4
#define MT6351_PMIC_RG_VS2_ZX_GATING_ADDR MT6351_VS2_ANA_CON7
#define MT6351_PMIC_RG_VS2_ZX_GATING_MASK 0x1
#define MT6351_PMIC_RG_VS2_ZX_GATING_SHIFT 5
#define MT6351_PMIC_RG_VS2_RSV_ADDR MT6351_VS2_ANA_CON8
#define MT6351_PMIC_RG_VS2_RSV_MASK 0xFFFF
#define MT6351_PMIC_RG_VS2_RSV_SHIFT 0
#define MT6351_PMIC_RG_VS2_AZC_EN_ADDR MT6351_VS2_ANA_CON9
#define MT6351_PMIC_RG_VS2_AZC_EN_MASK 0x1
#define MT6351_PMIC_RG_VS2_AZC_EN_SHIFT 0
#define MT6351_PMIC_RG_VS2_AZC_DELAY_ADDR MT6351_VS2_ANA_CON9
#define MT6351_PMIC_RG_VS2_AZC_DELAY_MASK 0x3
#define MT6351_PMIC_RG_VS2_AZC_DELAY_SHIFT 1
#define MT6351_PMIC_RG_VS2_AZC_HOLD_ENB_ADDR MT6351_VS2_ANA_CON9
#define MT6351_PMIC_RG_VS2_AZC_HOLD_ENB_MASK 0x1
#define MT6351_PMIC_RG_VS2_AZC_HOLD_ENB_SHIFT 3
#define MT6351_PMIC_RGS_QI_VS2_OC_STATUS_ADDR MT6351_VS2_ANA_CON9
#define MT6351_PMIC_RGS_QI_VS2_OC_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_QI_VS2_OC_STATUS_SHIFT 4
#define MT6351_PMIC_RGS_QI_VS2_DIG_MON_ADDR MT6351_VS2_ANA_CON9
#define MT6351_PMIC_RGS_QI_VS2_DIG_MON_MASK 0xF
#define MT6351_PMIC_RGS_QI_VS2_DIG_MON_SHIFT 5
#define MT6351_PMIC_RGS_VS2_ENPWM_STATUS_ADDR MT6351_VS2_ANA_CON9
#define MT6351_PMIC_RGS_VS2_ENPWM_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_VS2_ENPWM_STATUS_SHIFT 9
#define MT6351_PMIC_RG_VPA_NDIS_EN_ADDR MT6351_VPA_ANA_CON0
#define MT6351_PMIC_RG_VPA_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VPA_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VPA_MODESET_ADDR MT6351_VPA_ANA_CON0
#define MT6351_PMIC_RG_VPA_MODESET_MASK 0x1
#define MT6351_PMIC_RG_VPA_MODESET_SHIFT 3
#define MT6351_PMIC_RG_VPA_CC_ADDR MT6351_VPA_ANA_CON1
#define MT6351_PMIC_RG_VPA_CC_MASK 0x3
#define MT6351_PMIC_RG_VPA_CC_SHIFT 0
#define MT6351_PMIC_RG_VPA_CSR_ADDR MT6351_VPA_ANA_CON1
#define MT6351_PMIC_RG_VPA_CSR_MASK 0x3
#define MT6351_PMIC_RG_VPA_CSR_SHIFT 2
#define MT6351_PMIC_RG_VPA_CSMIR_ADDR MT6351_VPA_ANA_CON1
#define MT6351_PMIC_RG_VPA_CSMIR_MASK 0x3
#define MT6351_PMIC_RG_VPA_CSMIR_SHIFT 4
#define MT6351_PMIC_RG_VPA_CSL_ADDR MT6351_VPA_ANA_CON1
#define MT6351_PMIC_RG_VPA_CSL_MASK 0x3
#define MT6351_PMIC_RG_VPA_CSL_SHIFT 6
#define MT6351_PMIC_RG_VPA_SLP_ADDR MT6351_VPA_ANA_CON1
#define MT6351_PMIC_RG_VPA_SLP_MASK 0x3
#define MT6351_PMIC_RG_VPA_SLP_SHIFT 8
#define MT6351_PMIC_RG_VPA_AZC_EN_ADDR MT6351_VPA_ANA_CON1
#define MT6351_PMIC_RG_VPA_AZC_EN_MASK 0x1
#define MT6351_PMIC_RG_VPA_AZC_EN_SHIFT 10
#define MT6351_PMIC_RG_VPA_CP_FWUPOFF_ADDR MT6351_VPA_ANA_CON1
#define MT6351_PMIC_RG_VPA_CP_FWUPOFF_MASK 0x1
#define MT6351_PMIC_RG_VPA_CP_FWUPOFF_SHIFT 11
#define MT6351_PMIC_RG_VPA_AZC_DELAY_ADDR MT6351_VPA_ANA_CON1
#define MT6351_PMIC_RG_VPA_AZC_DELAY_MASK 0x3
#define MT6351_PMIC_RG_VPA_AZC_DELAY_SHIFT 12
#define MT6351_PMIC_RG_VPA_RZSEL_ADDR MT6351_VPA_ANA_CON1
#define MT6351_PMIC_RG_VPA_RZSEL_MASK 0x3
#define MT6351_PMIC_RG_VPA_RZSEL_SHIFT 14
#define MT6351_PMIC_RG_VPA_ZXREF_ADDR MT6351_VPA_ANA_CON2
#define MT6351_PMIC_RG_VPA_ZXREF_MASK 0xFF
#define MT6351_PMIC_RG_VPA_ZXREF_SHIFT 0
#define MT6351_PMIC_RG_VPA_NLIM_SEL_ADDR MT6351_VPA_ANA_CON2
#define MT6351_PMIC_RG_VPA_NLIM_SEL_MASK 0xF
#define MT6351_PMIC_RG_VPA_NLIM_SEL_SHIFT 8
#define MT6351_PMIC_RG_VPA_HZP_ADDR MT6351_VPA_ANA_CON2
#define MT6351_PMIC_RG_VPA_HZP_MASK 0x1
#define MT6351_PMIC_RG_VPA_HZP_SHIFT 12
#define MT6351_PMIC_RG_VPA_BWEX_GAT_ADDR MT6351_VPA_ANA_CON2
#define MT6351_PMIC_RG_VPA_BWEX_GAT_MASK 0x1
#define MT6351_PMIC_RG_VPA_BWEX_GAT_SHIFT 13
#define MT6351_PMIC_RG_VPA_SLEW_ADDR MT6351_VPA_ANA_CON2
#define MT6351_PMIC_RG_VPA_SLEW_MASK 0x3
#define MT6351_PMIC_RG_VPA_SLEW_SHIFT 14
#define MT6351_PMIC_RG_VPA_SLEW_NMOS_ADDR MT6351_VPA_ANA_CON3
#define MT6351_PMIC_RG_VPA_SLEW_NMOS_MASK 0x3
#define MT6351_PMIC_RG_VPA_SLEW_NMOS_SHIFT 0
#define MT6351_PMIC_RG_VPA_MIN_ON_ADDR MT6351_VPA_ANA_CON3
#define MT6351_PMIC_RG_VPA_MIN_ON_MASK 0x3
#define MT6351_PMIC_RG_VPA_MIN_ON_SHIFT 2
#define MT6351_PMIC_RG_VPA_VBAT_DEL_ADDR MT6351_VPA_ANA_CON3
#define MT6351_PMIC_RG_VPA_VBAT_DEL_MASK 0x3
#define MT6351_PMIC_RG_VPA_VBAT_DEL_SHIFT 4
#define MT6351_PMIC_RGS_VPA_AZC_VOS_SEL_ADDR MT6351_VPA_ANA_CON3
#define MT6351_PMIC_RGS_VPA_AZC_VOS_SEL_MASK 0xFF
#define MT6351_PMIC_RGS_VPA_AZC_VOS_SEL_SHIFT 6
#define MT6351_PMIC_RG_VPA_MIN_PK_ADDR MT6351_VPA_ANA_CON3
#define MT6351_PMIC_RG_VPA_MIN_PK_MASK 0x3
#define MT6351_PMIC_RG_VPA_MIN_PK_SHIFT 14
#define MT6351_PMIC_RG_VPA_RSV1_ADDR MT6351_VPA_ANA_CON4
#define MT6351_PMIC_RG_VPA_RSV1_MASK 0xFF
#define MT6351_PMIC_RG_VPA_RSV1_SHIFT 0
#define MT6351_PMIC_RG_VPA_RSV2_ADDR MT6351_VPA_ANA_CON4
#define MT6351_PMIC_RG_VPA_RSV2_MASK 0xFF
#define MT6351_PMIC_RG_VPA_RSV2_SHIFT 8
#define MT6351_PMIC_RGS_QI_VPA_OC_STATUS_ADDR MT6351_VPA_ANA_CON5
#define MT6351_PMIC_RGS_QI_VPA_OC_STATUS_MASK 0x1
#define MT6351_PMIC_RGS_QI_VPA_OC_STATUS_SHIFT 0
#define MT6351_PMIC_BUCK_VCORE_EN_CTRL_ADDR MT6351_BUCK_VCORE_CON0
#define MT6351_PMIC_BUCK_VCORE_EN_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_EN_CTRL_SHIFT 0
#define MT6351_PMIC_BUCK_VCORE_VOSEL_CTRL_ADDR MT6351_BUCK_VCORE_CON0
#define MT6351_PMIC_BUCK_VCORE_VOSEL_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_VOSEL_CTRL_SHIFT 1
#define MT6351_PMIC_BUCK_VCORE_EN_SEL_ADDR MT6351_BUCK_VCORE_CON1
#define MT6351_PMIC_BUCK_VCORE_EN_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VCORE_EN_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_VCORE_VOSEL_SEL_ADDR MT6351_BUCK_VCORE_CON1
#define MT6351_PMIC_BUCK_VCORE_VOSEL_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VCORE_VOSEL_SEL_SHIFT 3
#define MT6351_PMIC_BUCK_VCORE_EN_ADDR MT6351_BUCK_VCORE_CON2
#define MT6351_PMIC_BUCK_VCORE_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_EN_SHIFT 0
#define MT6351_PMIC_BUCK_VCORE_STBTD_ADDR MT6351_BUCK_VCORE_CON2
#define MT6351_PMIC_BUCK_VCORE_STBTD_MASK 0x3
#define MT6351_PMIC_BUCK_VCORE_STBTD_SHIFT 4
#define MT6351_PMIC_DA_VCORE_STB_ADDR MT6351_BUCK_VCORE_CON2
#define MT6351_PMIC_DA_VCORE_STB_MASK 0x1
#define MT6351_PMIC_DA_VCORE_STB_SHIFT 12
#define MT6351_PMIC_DA_QI_VCORE_EN_ADDR MT6351_BUCK_VCORE_CON2
#define MT6351_PMIC_DA_QI_VCORE_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCORE_EN_SHIFT 13
#define MT6351_PMIC_BUCK_VCORE_SFCHG_FRATE_ADDR MT6351_BUCK_VCORE_CON3
#define MT6351_PMIC_BUCK_VCORE_SFCHG_FRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VCORE_SFCHG_FRATE_SHIFT 0
#define MT6351_PMIC_BUCK_VCORE_SFCHG_FEN_ADDR MT6351_BUCK_VCORE_CON3
#define MT6351_PMIC_BUCK_VCORE_SFCHG_FEN_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_SFCHG_FEN_SHIFT 7
#define MT6351_PMIC_BUCK_VCORE_SFCHG_RRATE_ADDR MT6351_BUCK_VCORE_CON3
#define MT6351_PMIC_BUCK_VCORE_SFCHG_RRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VCORE_SFCHG_RRATE_SHIFT 8
#define MT6351_PMIC_BUCK_VCORE_SFCHG_REN_ADDR MT6351_BUCK_VCORE_CON3
#define MT6351_PMIC_BUCK_VCORE_SFCHG_REN_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_SFCHG_REN_SHIFT 15
#define MT6351_PMIC_BUCK_VCORE_VOSEL_ADDR MT6351_BUCK_VCORE_CON4
#define MT6351_PMIC_BUCK_VCORE_VOSEL_MASK 0x7F
#define MT6351_PMIC_BUCK_VCORE_VOSEL_SHIFT 0
#define MT6351_PMIC_BUCK_VCORE_VOSEL_ON_ADDR MT6351_BUCK_VCORE_CON5
#define MT6351_PMIC_BUCK_VCORE_VOSEL_ON_MASK 0x7F
#define MT6351_PMIC_BUCK_VCORE_VOSEL_ON_SHIFT 0
#define MT6351_PMIC_BUCK_VCORE_VOSEL_SLEEP_ADDR MT6351_BUCK_VCORE_CON6
#define MT6351_PMIC_BUCK_VCORE_VOSEL_SLEEP_MASK 0x7F
#define MT6351_PMIC_BUCK_VCORE_VOSEL_SLEEP_SHIFT 0
#define MT6351_PMIC_DA_NI_VCORE_VOSEL_ADDR MT6351_BUCK_VCORE_CON7
#define MT6351_PMIC_DA_NI_VCORE_VOSEL_MASK 0x7F
#define MT6351_PMIC_DA_NI_VCORE_VOSEL_SHIFT 0
#define MT6351_PMIC_DA_NI_VCORE_VOSEL_SYNC_ADDR MT6351_BUCK_VCORE_CON8
#define MT6351_PMIC_DA_NI_VCORE_VOSEL_SYNC_MASK 0x7F
#define MT6351_PMIC_DA_NI_VCORE_VOSEL_SYNC_SHIFT 0
#define MT6351_PMIC_BUCK_VCORE_TRANS_TD_ADDR MT6351_BUCK_VCORE_CON9
#define MT6351_PMIC_BUCK_VCORE_TRANS_TD_MASK 0x3
#define MT6351_PMIC_BUCK_VCORE_TRANS_TD_SHIFT 0
#define MT6351_PMIC_BUCK_VCORE_TRANS_CTRL_ADDR MT6351_BUCK_VCORE_CON9
#define MT6351_PMIC_BUCK_VCORE_TRANS_CTRL_MASK 0x3
#define MT6351_PMIC_BUCK_VCORE_TRANS_CTRL_SHIFT 4
#define MT6351_PMIC_BUCK_VCORE_TRANS_ONCE_ADDR MT6351_BUCK_VCORE_CON9
#define MT6351_PMIC_BUCK_VCORE_TRANS_ONCE_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_TRANS_ONCE_SHIFT 6
#define MT6351_PMIC_DA_QI_VCORE_DVS_EN_ADDR MT6351_BUCK_VCORE_CON9
#define MT6351_PMIC_DA_QI_VCORE_DVS_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCORE_DVS_EN_SHIFT 7
#define MT6351_PMIC_BUCK_VCORE_VSLEEP_EN_ADDR MT6351_BUCK_VCORE_CON9
#define MT6351_PMIC_BUCK_VCORE_VSLEEP_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_VSLEEP_EN_SHIFT 8
#define MT6351_PMIC_BUCK_VCORE_R2R_PDN_ADDR MT6351_BUCK_VCORE_CON9
#define MT6351_PMIC_BUCK_VCORE_R2R_PDN_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_R2R_PDN_SHIFT 10
#define MT6351_PMIC_BUCK_VCORE_VSLEEP_SEL_ADDR MT6351_BUCK_VCORE_CON9
#define MT6351_PMIC_BUCK_VCORE_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VCORE_VSLEEP_SEL_SHIFT 11
#define MT6351_PMIC_DA_NI_VCORE_R2R_PDN_ADDR MT6351_BUCK_VCORE_CON9
#define MT6351_PMIC_DA_NI_VCORE_R2R_PDN_MASK 0x1
#define MT6351_PMIC_DA_NI_VCORE_R2R_PDN_SHIFT 14
#define MT6351_PMIC_DA_NI_VCORE_VSLEEP_SEL_ADDR MT6351_BUCK_VCORE_CON9
#define MT6351_PMIC_DA_NI_VCORE_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_DA_NI_VCORE_VSLEEP_SEL_SHIFT 15
#define MT6351_PMIC_BUCK_VGPU_EN_CTRL_ADDR MT6351_BUCK_VGPU_CON0
#define MT6351_PMIC_BUCK_VGPU_EN_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_EN_CTRL_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_VOSEL_CTRL_ADDR MT6351_BUCK_VGPU_CON0
#define MT6351_PMIC_BUCK_VGPU_VOSEL_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_VOSEL_CTRL_SHIFT 1
#define MT6351_PMIC_BUCK_VGPU_EN_SEL_ADDR MT6351_BUCK_VGPU_CON1
#define MT6351_PMIC_BUCK_VGPU_EN_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VGPU_EN_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_VOSEL_SEL_ADDR MT6351_BUCK_VGPU_CON1
#define MT6351_PMIC_BUCK_VGPU_VOSEL_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VGPU_VOSEL_SEL_SHIFT 3
#define MT6351_PMIC_BUCK_VGPU_EN_ADDR MT6351_BUCK_VGPU_CON2
#define MT6351_PMIC_BUCK_VGPU_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_EN_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_STBTD_ADDR MT6351_BUCK_VGPU_CON2
#define MT6351_PMIC_BUCK_VGPU_STBTD_MASK 0x3
#define MT6351_PMIC_BUCK_VGPU_STBTD_SHIFT 4
#define MT6351_PMIC_DA_VGPU_STB_ADDR MT6351_BUCK_VGPU_CON2
#define MT6351_PMIC_DA_VGPU_STB_MASK 0x1
#define MT6351_PMIC_DA_VGPU_STB_SHIFT 12
#define MT6351_PMIC_DA_QI_VGPU_EN_ADDR MT6351_BUCK_VGPU_CON2
#define MT6351_PMIC_DA_QI_VGPU_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VGPU_EN_SHIFT 13
#define MT6351_PMIC_BUCK_VGPU_SFCHG_FRATE_ADDR MT6351_BUCK_VGPU_CON3
#define MT6351_PMIC_BUCK_VGPU_SFCHG_FRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VGPU_SFCHG_FRATE_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_SFCHG_FEN_ADDR MT6351_BUCK_VGPU_CON3
#define MT6351_PMIC_BUCK_VGPU_SFCHG_FEN_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_SFCHG_FEN_SHIFT 7
#define MT6351_PMIC_BUCK_VGPU_SFCHG_RRATE_ADDR MT6351_BUCK_VGPU_CON3
#define MT6351_PMIC_BUCK_VGPU_SFCHG_RRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VGPU_SFCHG_RRATE_SHIFT 8
#define MT6351_PMIC_BUCK_VGPU_SFCHG_REN_ADDR MT6351_BUCK_VGPU_CON3
#define MT6351_PMIC_BUCK_VGPU_SFCHG_REN_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_SFCHG_REN_SHIFT 15
#define MT6351_PMIC_BUCK_VGPU_VOSEL_ADDR MT6351_BUCK_VGPU_CON4
#define MT6351_PMIC_BUCK_VGPU_VOSEL_MASK 0x7F
#define MT6351_PMIC_BUCK_VGPU_VOSEL_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_VOSEL_ON_ADDR MT6351_BUCK_VGPU_CON5
#define MT6351_PMIC_BUCK_VGPU_VOSEL_ON_MASK 0x7F
#define MT6351_PMIC_BUCK_VGPU_VOSEL_ON_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_VOSEL_SLEEP_ADDR MT6351_BUCK_VGPU_CON6
#define MT6351_PMIC_BUCK_VGPU_VOSEL_SLEEP_MASK 0x7F
#define MT6351_PMIC_BUCK_VGPU_VOSEL_SLEEP_SHIFT 0
#define MT6351_PMIC_DA_NI_VGPU_VOSEL_ADDR MT6351_BUCK_VGPU_CON7
#define MT6351_PMIC_DA_NI_VGPU_VOSEL_MASK 0x7F
#define MT6351_PMIC_DA_NI_VGPU_VOSEL_SHIFT 0
#define MT6351_PMIC_DA_NI_VGPU_VOSEL_SYNC_ADDR MT6351_BUCK_VGPU_CON8
#define MT6351_PMIC_DA_NI_VGPU_VOSEL_SYNC_MASK 0x7F
#define MT6351_PMIC_DA_NI_VGPU_VOSEL_SYNC_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_TRANS_TD_ADDR MT6351_BUCK_VGPU_CON9
#define MT6351_PMIC_BUCK_VGPU_TRANS_TD_MASK 0x3
#define MT6351_PMIC_BUCK_VGPU_TRANS_TD_SHIFT 0
#define MT6351_PMIC_BUCK_VGPU_TRANS_CTRL_ADDR MT6351_BUCK_VGPU_CON9
#define MT6351_PMIC_BUCK_VGPU_TRANS_CTRL_MASK 0x3
#define MT6351_PMIC_BUCK_VGPU_TRANS_CTRL_SHIFT 4
#define MT6351_PMIC_BUCK_VGPU_TRANS_ONCE_ADDR MT6351_BUCK_VGPU_CON9
#define MT6351_PMIC_BUCK_VGPU_TRANS_ONCE_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_TRANS_ONCE_SHIFT 6
#define MT6351_PMIC_DA_QI_VGPU_DVS_EN_ADDR MT6351_BUCK_VGPU_CON9
#define MT6351_PMIC_DA_QI_VGPU_DVS_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VGPU_DVS_EN_SHIFT 7
#define MT6351_PMIC_BUCK_VGPU_VSLEEP_EN_ADDR MT6351_BUCK_VGPU_CON9
#define MT6351_PMIC_BUCK_VGPU_VSLEEP_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_VSLEEP_EN_SHIFT 8
#define MT6351_PMIC_BUCK_VGPU_R2R_PDN_ADDR MT6351_BUCK_VGPU_CON9
#define MT6351_PMIC_BUCK_VGPU_R2R_PDN_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_R2R_PDN_SHIFT 10
#define MT6351_PMIC_BUCK_VGPU_VSLEEP_SEL_ADDR MT6351_BUCK_VGPU_CON9
#define MT6351_PMIC_BUCK_VGPU_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VGPU_VSLEEP_SEL_SHIFT 11
#define MT6351_PMIC_DA_NI_VGPU_R2R_PDN_ADDR MT6351_BUCK_VGPU_CON9
#define MT6351_PMIC_DA_NI_VGPU_R2R_PDN_MASK 0x1
#define MT6351_PMIC_DA_NI_VGPU_R2R_PDN_SHIFT 14
#define MT6351_PMIC_DA_NI_VGPU_VSLEEP_SEL_ADDR MT6351_BUCK_VGPU_CON9
#define MT6351_PMIC_DA_NI_VGPU_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_DA_NI_VGPU_VSLEEP_SEL_SHIFT 15
#define MT6351_PMIC_BUCK_VMODEM_EN_CTRL_ADDR MT6351_BUCK_VMODEM_CON0
#define MT6351_PMIC_BUCK_VMODEM_EN_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_EN_CTRL_SHIFT 0
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_CTRL_ADDR MT6351_BUCK_VMODEM_CON0
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_CTRL_SHIFT 1
#define MT6351_PMIC_BUCK_VMODEM_EN_SEL_ADDR MT6351_BUCK_VMODEM_CON1
#define MT6351_PMIC_BUCK_VMODEM_EN_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VMODEM_EN_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_SEL_ADDR MT6351_BUCK_VMODEM_CON1
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_SEL_SHIFT 3
#define MT6351_PMIC_BUCK_VMODEM_EN_ADDR MT6351_BUCK_VMODEM_CON2
#define MT6351_PMIC_BUCK_VMODEM_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_EN_SHIFT 0
#define MT6351_PMIC_BUCK_VMODEM_STBTD_ADDR MT6351_BUCK_VMODEM_CON2
#define MT6351_PMIC_BUCK_VMODEM_STBTD_MASK 0x3
#define MT6351_PMIC_BUCK_VMODEM_STBTD_SHIFT 4
#define MT6351_PMIC_DA_VMODEM_STB_ADDR MT6351_BUCK_VMODEM_CON2
#define MT6351_PMIC_DA_VMODEM_STB_MASK 0x1
#define MT6351_PMIC_DA_VMODEM_STB_SHIFT 12
#define MT6351_PMIC_DA_QI_VMODEM_EN_ADDR MT6351_BUCK_VMODEM_CON2
#define MT6351_PMIC_DA_QI_VMODEM_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VMODEM_EN_SHIFT 13
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_FRATE_ADDR MT6351_BUCK_VMODEM_CON3
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_FRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_FRATE_SHIFT 0
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_FEN_ADDR MT6351_BUCK_VMODEM_CON3
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_FEN_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_FEN_SHIFT 7
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_RRATE_ADDR MT6351_BUCK_VMODEM_CON3
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_RRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_RRATE_SHIFT 8
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_REN_ADDR MT6351_BUCK_VMODEM_CON3
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_REN_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_SFCHG_REN_SHIFT 15
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_ADDR MT6351_BUCK_VMODEM_CON4
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_MASK 0x7F
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_SHIFT 0
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_ON_ADDR MT6351_BUCK_VMODEM_CON5
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_ON_MASK 0x7F
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_ON_SHIFT 0
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_SLEEP_ADDR MT6351_BUCK_VMODEM_CON6
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_SLEEP_MASK 0x7F
#define MT6351_PMIC_BUCK_VMODEM_VOSEL_SLEEP_SHIFT 0
#define MT6351_PMIC_DA_NI_VMODEM_VOSEL_ADDR MT6351_BUCK_VMODEM_CON7
#define MT6351_PMIC_DA_NI_VMODEM_VOSEL_MASK 0x7F
#define MT6351_PMIC_DA_NI_VMODEM_VOSEL_SHIFT 0
#define MT6351_PMIC_DA_NI_VMODEM_VOSEL_SYNC_ADDR MT6351_BUCK_VMODEM_CON8
#define MT6351_PMIC_DA_NI_VMODEM_VOSEL_SYNC_MASK 0x7F
#define MT6351_PMIC_DA_NI_VMODEM_VOSEL_SYNC_SHIFT 0
#define MT6351_PMIC_BUCK_VMODEM_TRANS_TD_ADDR MT6351_BUCK_VMODEM_CON9
#define MT6351_PMIC_BUCK_VMODEM_TRANS_TD_MASK 0x3
#define MT6351_PMIC_BUCK_VMODEM_TRANS_TD_SHIFT 0
#define MT6351_PMIC_BUCK_VMODEM_TRANS_CTRL_ADDR MT6351_BUCK_VMODEM_CON9
#define MT6351_PMIC_BUCK_VMODEM_TRANS_CTRL_MASK 0x3
#define MT6351_PMIC_BUCK_VMODEM_TRANS_CTRL_SHIFT 4
#define MT6351_PMIC_BUCK_VMODEM_TRANS_ONCE_ADDR MT6351_BUCK_VMODEM_CON9
#define MT6351_PMIC_BUCK_VMODEM_TRANS_ONCE_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_TRANS_ONCE_SHIFT 6
#define MT6351_PMIC_DA_QI_VMODEM_DVS_EN_ADDR MT6351_BUCK_VMODEM_CON9
#define MT6351_PMIC_DA_QI_VMODEM_DVS_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VMODEM_DVS_EN_SHIFT 7
#define MT6351_PMIC_BUCK_VMODEM_VSLEEP_EN_ADDR MT6351_BUCK_VMODEM_CON9
#define MT6351_PMIC_BUCK_VMODEM_VSLEEP_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_VSLEEP_EN_SHIFT 8
#define MT6351_PMIC_BUCK_VMODEM_R2R_PDN_ADDR MT6351_BUCK_VMODEM_CON9
#define MT6351_PMIC_BUCK_VMODEM_R2R_PDN_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_R2R_PDN_SHIFT 10
#define MT6351_PMIC_BUCK_VMODEM_VSLEEP_SEL_ADDR MT6351_BUCK_VMODEM_CON9
#define MT6351_PMIC_BUCK_VMODEM_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VMODEM_VSLEEP_SEL_SHIFT 11
#define MT6351_PMIC_DA_NI_VMODEM_R2R_PDN_ADDR MT6351_BUCK_VMODEM_CON9
#define MT6351_PMIC_DA_NI_VMODEM_R2R_PDN_MASK 0x1
#define MT6351_PMIC_DA_NI_VMODEM_R2R_PDN_SHIFT 14
#define MT6351_PMIC_DA_NI_VMODEM_VSLEEP_SEL_ADDR MT6351_BUCK_VMODEM_CON9
#define MT6351_PMIC_DA_NI_VMODEM_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_DA_NI_VMODEM_VSLEEP_SEL_SHIFT 15
#define MT6351_PMIC_BUCK_VMD1_EN_CTRL_ADDR MT6351_BUCK_VMD1_CON0
#define MT6351_PMIC_BUCK_VMD1_EN_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_EN_CTRL_SHIFT 0
#define MT6351_PMIC_BUCK_VMD1_VOSEL_CTRL_ADDR MT6351_BUCK_VMD1_CON0
#define MT6351_PMIC_BUCK_VMD1_VOSEL_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_VOSEL_CTRL_SHIFT 1
#define MT6351_PMIC_BUCK_VMD1_EN_SEL_ADDR MT6351_BUCK_VMD1_CON1
#define MT6351_PMIC_BUCK_VMD1_EN_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VMD1_EN_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_VMD1_VOSEL_SEL_ADDR MT6351_BUCK_VMD1_CON1
#define MT6351_PMIC_BUCK_VMD1_VOSEL_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VMD1_VOSEL_SEL_SHIFT 3
#define MT6351_PMIC_BUCK_VMD1_EN_ADDR MT6351_BUCK_VMD1_CON2
#define MT6351_PMIC_BUCK_VMD1_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_EN_SHIFT 0
#define MT6351_PMIC_BUCK_VMD1_STBTD_ADDR MT6351_BUCK_VMD1_CON2
#define MT6351_PMIC_BUCK_VMD1_STBTD_MASK 0x3
#define MT6351_PMIC_BUCK_VMD1_STBTD_SHIFT 4
#define MT6351_PMIC_DA_VMD1_STB_ADDR MT6351_BUCK_VMD1_CON2
#define MT6351_PMIC_DA_VMD1_STB_MASK 0x1
#define MT6351_PMIC_DA_VMD1_STB_SHIFT 12
#define MT6351_PMIC_DA_QI_VMD1_EN_ADDR MT6351_BUCK_VMD1_CON2
#define MT6351_PMIC_DA_QI_VMD1_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VMD1_EN_SHIFT 13
#define MT6351_PMIC_BUCK_VMD1_SFCHG_FRATE_ADDR MT6351_BUCK_VMD1_CON3
#define MT6351_PMIC_BUCK_VMD1_SFCHG_FRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VMD1_SFCHG_FRATE_SHIFT 0
#define MT6351_PMIC_BUCK_VMD1_SFCHG_FEN_ADDR MT6351_BUCK_VMD1_CON3
#define MT6351_PMIC_BUCK_VMD1_SFCHG_FEN_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_SFCHG_FEN_SHIFT 7
#define MT6351_PMIC_BUCK_VMD1_SFCHG_RRATE_ADDR MT6351_BUCK_VMD1_CON3
#define MT6351_PMIC_BUCK_VMD1_SFCHG_RRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VMD1_SFCHG_RRATE_SHIFT 8
#define MT6351_PMIC_BUCK_VMD1_SFCHG_REN_ADDR MT6351_BUCK_VMD1_CON3
#define MT6351_PMIC_BUCK_VMD1_SFCHG_REN_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_SFCHG_REN_SHIFT 15
#define MT6351_PMIC_BUCK_VMD1_VOSEL_ADDR MT6351_BUCK_VMD1_CON4
#define MT6351_PMIC_BUCK_VMD1_VOSEL_MASK 0x7F
#define MT6351_PMIC_BUCK_VMD1_VOSEL_SHIFT 0
#define MT6351_PMIC_BUCK_VMD1_VOSEL_ON_ADDR MT6351_BUCK_VMD1_CON5
#define MT6351_PMIC_BUCK_VMD1_VOSEL_ON_MASK 0x7F
#define MT6351_PMIC_BUCK_VMD1_VOSEL_ON_SHIFT 0
#define MT6351_PMIC_BUCK_VMD1_VOSEL_SLEEP_ADDR MT6351_BUCK_VMD1_CON6
#define MT6351_PMIC_BUCK_VMD1_VOSEL_SLEEP_MASK 0x7F
#define MT6351_PMIC_BUCK_VMD1_VOSEL_SLEEP_SHIFT 0
#define MT6351_PMIC_DA_NI_VMD1_VOSEL_ADDR MT6351_BUCK_VMD1_CON7
#define MT6351_PMIC_DA_NI_VMD1_VOSEL_MASK 0x7F
#define MT6351_PMIC_DA_NI_VMD1_VOSEL_SHIFT 0
#define MT6351_PMIC_DA_NI_VMD1_VOSEL_SYNC_ADDR MT6351_BUCK_VMD1_CON8
#define MT6351_PMIC_DA_NI_VMD1_VOSEL_SYNC_MASK 0x7F
#define MT6351_PMIC_DA_NI_VMD1_VOSEL_SYNC_SHIFT 0
#define MT6351_PMIC_BUCK_VMD1_TRANS_TD_ADDR MT6351_BUCK_VMD1_CON9
#define MT6351_PMIC_BUCK_VMD1_TRANS_TD_MASK 0x3
#define MT6351_PMIC_BUCK_VMD1_TRANS_TD_SHIFT 0
#define MT6351_PMIC_BUCK_VMD1_TRANS_CTRL_ADDR MT6351_BUCK_VMD1_CON9
#define MT6351_PMIC_BUCK_VMD1_TRANS_CTRL_MASK 0x3
#define MT6351_PMIC_BUCK_VMD1_TRANS_CTRL_SHIFT 4
#define MT6351_PMIC_BUCK_VMD1_TRANS_ONCE_ADDR MT6351_BUCK_VMD1_CON9
#define MT6351_PMIC_BUCK_VMD1_TRANS_ONCE_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_TRANS_ONCE_SHIFT 6
#define MT6351_PMIC_DA_QI_VMD1_DVS_EN_ADDR MT6351_BUCK_VMD1_CON9
#define MT6351_PMIC_DA_QI_VMD1_DVS_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VMD1_DVS_EN_SHIFT 7
#define MT6351_PMIC_BUCK_VMD1_VSLEEP_EN_ADDR MT6351_BUCK_VMD1_CON9
#define MT6351_PMIC_BUCK_VMD1_VSLEEP_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_VSLEEP_EN_SHIFT 8
#define MT6351_PMIC_BUCK_VMD1_R2R_PDN_ADDR MT6351_BUCK_VMD1_CON9
#define MT6351_PMIC_BUCK_VMD1_R2R_PDN_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_R2R_PDN_SHIFT 10
#define MT6351_PMIC_BUCK_VMD1_VSLEEP_SEL_ADDR MT6351_BUCK_VMD1_CON9
#define MT6351_PMIC_BUCK_VMD1_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VMD1_VSLEEP_SEL_SHIFT 11
#define MT6351_PMIC_DA_NI_VMD1_R2R_PDN_ADDR MT6351_BUCK_VMD1_CON9
#define MT6351_PMIC_DA_NI_VMD1_R2R_PDN_MASK 0x1
#define MT6351_PMIC_DA_NI_VMD1_R2R_PDN_SHIFT 14
#define MT6351_PMIC_DA_NI_VMD1_VSLEEP_SEL_ADDR MT6351_BUCK_VMD1_CON9
#define MT6351_PMIC_DA_NI_VMD1_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_DA_NI_VMD1_VSLEEP_SEL_SHIFT 15
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_CTRL_ADDR MT6351_BUCK_VSRAM_MD_CON0
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_CTRL_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_CTRL_ADDR MT6351_BUCK_VSRAM_MD_CON0
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_CTRL_SHIFT 1
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_SEL_ADDR MT6351_BUCK_VSRAM_MD_CON1
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_SEL_ADDR MT6351_BUCK_VSRAM_MD_CON1
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_SEL_SHIFT 3
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_ADDR MT6351_BUCK_VSRAM_MD_CON2
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_EN_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_MD_STBTD_ADDR MT6351_BUCK_VSRAM_MD_CON2
#define MT6351_PMIC_BUCK_VSRAM_MD_STBTD_MASK 0x3
#define MT6351_PMIC_BUCK_VSRAM_MD_STBTD_SHIFT 4
#define MT6351_PMIC_DA_VSRAM_MD_STB_ADDR MT6351_BUCK_VSRAM_MD_CON2
#define MT6351_PMIC_DA_VSRAM_MD_STB_MASK 0x1
#define MT6351_PMIC_DA_VSRAM_MD_STB_SHIFT 12
#define MT6351_PMIC_DA_QI_VSRAM_MD_EN_ADDR MT6351_BUCK_VSRAM_MD_CON2
#define MT6351_PMIC_DA_QI_VSRAM_MD_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VSRAM_MD_EN_SHIFT 13
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_FRATE_ADDR MT6351_BUCK_VSRAM_MD_CON3
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_FRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_FRATE_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_FEN_ADDR MT6351_BUCK_VSRAM_MD_CON3
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_FEN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_FEN_SHIFT 7
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_RRATE_ADDR MT6351_BUCK_VSRAM_MD_CON3
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_RRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_RRATE_SHIFT 8
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_REN_ADDR MT6351_BUCK_VSRAM_MD_CON3
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_REN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_REN_SHIFT 15
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_ADDR MT6351_BUCK_VSRAM_MD_CON4
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_MASK 0x7F
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_ON_ADDR MT6351_BUCK_VSRAM_MD_CON5
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_ON_MASK 0x7F
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_ON_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_SLEEP_ADDR MT6351_BUCK_VSRAM_MD_CON6
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_SLEEP_MASK 0x7F
#define MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_SLEEP_SHIFT 0
#define MT6351_PMIC_DA_NI_VSRAM_MD_VOSEL_ADDR MT6351_BUCK_VSRAM_MD_CON7
#define MT6351_PMIC_DA_NI_VSRAM_MD_VOSEL_MASK 0x7F
#define MT6351_PMIC_DA_NI_VSRAM_MD_VOSEL_SHIFT 0
#define MT6351_PMIC_DA_NI_VSRAM_MD_VOSEL_SYNC_ADDR MT6351_BUCK_VSRAM_MD_CON8
#define MT6351_PMIC_DA_NI_VSRAM_MD_VOSEL_SYNC_MASK 0x7F
#define MT6351_PMIC_DA_NI_VSRAM_MD_VOSEL_SYNC_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_MD_TRANS_TD_ADDR MT6351_BUCK_VSRAM_MD_CON9
#define MT6351_PMIC_BUCK_VSRAM_MD_TRANS_TD_MASK 0x3
#define MT6351_PMIC_BUCK_VSRAM_MD_TRANS_TD_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_MD_TRANS_CTRL_ADDR MT6351_BUCK_VSRAM_MD_CON9
#define MT6351_PMIC_BUCK_VSRAM_MD_TRANS_CTRL_MASK 0x3
#define MT6351_PMIC_BUCK_VSRAM_MD_TRANS_CTRL_SHIFT 4
#define MT6351_PMIC_BUCK_VSRAM_MD_TRANS_ONCE_ADDR MT6351_BUCK_VSRAM_MD_CON9
#define MT6351_PMIC_BUCK_VSRAM_MD_TRANS_ONCE_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_TRANS_ONCE_SHIFT 6
#define MT6351_PMIC_DA_QI_VSRAM_MD_DVS_EN_ADDR MT6351_BUCK_VSRAM_MD_CON9
#define MT6351_PMIC_DA_QI_VSRAM_MD_DVS_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VSRAM_MD_DVS_EN_SHIFT 7
#define MT6351_PMIC_BUCK_VSRAM_MD_VSLEEP_EN_ADDR MT6351_BUCK_VSRAM_MD_CON9
#define MT6351_PMIC_BUCK_VSRAM_MD_VSLEEP_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_VSLEEP_EN_SHIFT 8
#define MT6351_PMIC_BUCK_VSRAM_MD_R2R_PDN_ADDR MT6351_BUCK_VSRAM_MD_CON9
#define MT6351_PMIC_BUCK_VSRAM_MD_R2R_PDN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_R2R_PDN_SHIFT 10
#define MT6351_PMIC_BUCK_VSRAM_MD_VSLEEP_SEL_ADDR MT6351_BUCK_VSRAM_MD_CON9
#define MT6351_PMIC_BUCK_VSRAM_MD_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_MD_VSLEEP_SEL_SHIFT 11
#define MT6351_PMIC_DA_NI_VSRAM_MD_R2R_PDN_ADDR MT6351_BUCK_VSRAM_MD_CON9
#define MT6351_PMIC_DA_NI_VSRAM_MD_R2R_PDN_MASK 0x1
#define MT6351_PMIC_DA_NI_VSRAM_MD_R2R_PDN_SHIFT 14
#define MT6351_PMIC_DA_NI_VSRAM_MD_VSLEEP_SEL_ADDR MT6351_BUCK_VSRAM_MD_CON9
#define MT6351_PMIC_DA_NI_VSRAM_MD_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_DA_NI_VSRAM_MD_VSLEEP_SEL_SHIFT 15
#define MT6351_PMIC_BUCK_VS1_EN_CTRL_ADDR MT6351_BUCK_VS1_CON0
#define MT6351_PMIC_BUCK_VS1_EN_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_EN_CTRL_SHIFT 0
#define MT6351_PMIC_BUCK_VS1_VOSEL_CTRL_ADDR MT6351_BUCK_VS1_CON0
#define MT6351_PMIC_BUCK_VS1_VOSEL_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_VOSEL_CTRL_SHIFT 1
#define MT6351_PMIC_BUCK_VS1_EN_SEL_ADDR MT6351_BUCK_VS1_CON1
#define MT6351_PMIC_BUCK_VS1_EN_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VS1_EN_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_VS1_VOSEL_SEL_ADDR MT6351_BUCK_VS1_CON1
#define MT6351_PMIC_BUCK_VS1_VOSEL_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VS1_VOSEL_SEL_SHIFT 3
#define MT6351_PMIC_BUCK_VS1_EN_ADDR MT6351_BUCK_VS1_CON2
#define MT6351_PMIC_BUCK_VS1_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_EN_SHIFT 0
#define MT6351_PMIC_BUCK_VS1_STBTD_ADDR MT6351_BUCK_VS1_CON2
#define MT6351_PMIC_BUCK_VS1_STBTD_MASK 0x3
#define MT6351_PMIC_BUCK_VS1_STBTD_SHIFT 4
#define MT6351_PMIC_DA_VS1_STB_ADDR MT6351_BUCK_VS1_CON2
#define MT6351_PMIC_DA_VS1_STB_MASK 0x1
#define MT6351_PMIC_DA_VS1_STB_SHIFT 12
#define MT6351_PMIC_DA_QI_VS1_EN_ADDR MT6351_BUCK_VS1_CON2
#define MT6351_PMIC_DA_QI_VS1_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VS1_EN_SHIFT 13
#define MT6351_PMIC_BUCK_VS1_SFCHG_FRATE_ADDR MT6351_BUCK_VS1_CON3
#define MT6351_PMIC_BUCK_VS1_SFCHG_FRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VS1_SFCHG_FRATE_SHIFT 0
#define MT6351_PMIC_BUCK_VS1_SFCHG_FEN_ADDR MT6351_BUCK_VS1_CON3
#define MT6351_PMIC_BUCK_VS1_SFCHG_FEN_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_SFCHG_FEN_SHIFT 7
#define MT6351_PMIC_BUCK_VS1_SFCHG_RRATE_ADDR MT6351_BUCK_VS1_CON3
#define MT6351_PMIC_BUCK_VS1_SFCHG_RRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VS1_SFCHG_RRATE_SHIFT 8
#define MT6351_PMIC_BUCK_VS1_SFCHG_REN_ADDR MT6351_BUCK_VS1_CON3
#define MT6351_PMIC_BUCK_VS1_SFCHG_REN_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_SFCHG_REN_SHIFT 15
#define MT6351_PMIC_BUCK_VS1_VOSEL_ADDR MT6351_BUCK_VS1_CON4
#define MT6351_PMIC_BUCK_VS1_VOSEL_MASK 0x7F
#define MT6351_PMIC_BUCK_VS1_VOSEL_SHIFT 0
#define MT6351_PMIC_BUCK_VS1_VOSEL_ON_ADDR MT6351_BUCK_VS1_CON5
#define MT6351_PMIC_BUCK_VS1_VOSEL_ON_MASK 0x7F
#define MT6351_PMIC_BUCK_VS1_VOSEL_ON_SHIFT 0
#define MT6351_PMIC_BUCK_VS1_VOSEL_SLEEP_ADDR MT6351_BUCK_VS1_CON6
#define MT6351_PMIC_BUCK_VS1_VOSEL_SLEEP_MASK 0x7F
#define MT6351_PMIC_BUCK_VS1_VOSEL_SLEEP_SHIFT 0
#define MT6351_PMIC_DA_NI_VS1_VOSEL_ADDR MT6351_BUCK_VS1_CON7
#define MT6351_PMIC_DA_NI_VS1_VOSEL_MASK 0x7F
#define MT6351_PMIC_DA_NI_VS1_VOSEL_SHIFT 0
#define MT6351_PMIC_DA_NI_VS1_VOSEL_SYNC_ADDR MT6351_BUCK_VS1_CON8
#define MT6351_PMIC_DA_NI_VS1_VOSEL_SYNC_MASK 0x7F
#define MT6351_PMIC_DA_NI_VS1_VOSEL_SYNC_SHIFT 0
#define MT6351_PMIC_BUCK_VS1_TRANS_TD_ADDR MT6351_BUCK_VS1_CON9
#define MT6351_PMIC_BUCK_VS1_TRANS_TD_MASK 0x3
#define MT6351_PMIC_BUCK_VS1_TRANS_TD_SHIFT 0
#define MT6351_PMIC_BUCK_VS1_TRANS_CTRL_ADDR MT6351_BUCK_VS1_CON9
#define MT6351_PMIC_BUCK_VS1_TRANS_CTRL_MASK 0x3
#define MT6351_PMIC_BUCK_VS1_TRANS_CTRL_SHIFT 4
#define MT6351_PMIC_BUCK_VS1_TRANS_ONCE_ADDR MT6351_BUCK_VS1_CON9
#define MT6351_PMIC_BUCK_VS1_TRANS_ONCE_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_TRANS_ONCE_SHIFT 6
#define MT6351_PMIC_DA_QI_VS1_DVS_EN_ADDR MT6351_BUCK_VS1_CON9
#define MT6351_PMIC_DA_QI_VS1_DVS_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VS1_DVS_EN_SHIFT 7
#define MT6351_PMIC_BUCK_VS1_VSLEEP_EN_ADDR MT6351_BUCK_VS1_CON9
#define MT6351_PMIC_BUCK_VS1_VSLEEP_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_VSLEEP_EN_SHIFT 8
#define MT6351_PMIC_BUCK_VS1_R2R_PDN_ADDR MT6351_BUCK_VS1_CON9
#define MT6351_PMIC_BUCK_VS1_R2R_PDN_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_R2R_PDN_SHIFT 10
#define MT6351_PMIC_BUCK_VS1_VSLEEP_SEL_ADDR MT6351_BUCK_VS1_CON9
#define MT6351_PMIC_BUCK_VS1_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VS1_VSLEEP_SEL_SHIFT 11
#define MT6351_PMIC_DA_NI_VS1_R2R_PDN_ADDR MT6351_BUCK_VS1_CON9
#define MT6351_PMIC_DA_NI_VS1_R2R_PDN_MASK 0x1
#define MT6351_PMIC_DA_NI_VS1_R2R_PDN_SHIFT 14
#define MT6351_PMIC_DA_NI_VS1_VSLEEP_SEL_ADDR MT6351_BUCK_VS1_CON9
#define MT6351_PMIC_DA_NI_VS1_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_DA_NI_VS1_VSLEEP_SEL_SHIFT 15
#define MT6351_PMIC_BUCK_VS2_EN_CTRL_ADDR MT6351_BUCK_VS2_CON0
#define MT6351_PMIC_BUCK_VS2_EN_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_EN_CTRL_SHIFT 0
#define MT6351_PMIC_BUCK_VS2_VOSEL_CTRL_ADDR MT6351_BUCK_VS2_CON0
#define MT6351_PMIC_BUCK_VS2_VOSEL_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_VOSEL_CTRL_SHIFT 1
#define MT6351_PMIC_BUCK_VS2_EN_SEL_ADDR MT6351_BUCK_VS2_CON1
#define MT6351_PMIC_BUCK_VS2_EN_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VS2_EN_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_VS2_VOSEL_SEL_ADDR MT6351_BUCK_VS2_CON1
#define MT6351_PMIC_BUCK_VS2_VOSEL_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VS2_VOSEL_SEL_SHIFT 3
#define MT6351_PMIC_BUCK_VS2_EN_ADDR MT6351_BUCK_VS2_CON2
#define MT6351_PMIC_BUCK_VS2_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_EN_SHIFT 0
#define MT6351_PMIC_BUCK_VS2_STBTD_ADDR MT6351_BUCK_VS2_CON2
#define MT6351_PMIC_BUCK_VS2_STBTD_MASK 0x3
#define MT6351_PMIC_BUCK_VS2_STBTD_SHIFT 4
#define MT6351_PMIC_DA_VS2_STB_ADDR MT6351_BUCK_VS2_CON2
#define MT6351_PMIC_DA_VS2_STB_MASK 0x1
#define MT6351_PMIC_DA_VS2_STB_SHIFT 12
#define MT6351_PMIC_DA_QI_VS2_EN_ADDR MT6351_BUCK_VS2_CON2
#define MT6351_PMIC_DA_QI_VS2_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VS2_EN_SHIFT 13
#define MT6351_PMIC_BUCK_VS2_SFCHG_FRATE_ADDR MT6351_BUCK_VS2_CON3
#define MT6351_PMIC_BUCK_VS2_SFCHG_FRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VS2_SFCHG_FRATE_SHIFT 0
#define MT6351_PMIC_BUCK_VS2_SFCHG_FEN_ADDR MT6351_BUCK_VS2_CON3
#define MT6351_PMIC_BUCK_VS2_SFCHG_FEN_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_SFCHG_FEN_SHIFT 7
#define MT6351_PMIC_BUCK_VS2_SFCHG_RRATE_ADDR MT6351_BUCK_VS2_CON3
#define MT6351_PMIC_BUCK_VS2_SFCHG_RRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VS2_SFCHG_RRATE_SHIFT 8
#define MT6351_PMIC_BUCK_VS2_SFCHG_REN_ADDR MT6351_BUCK_VS2_CON3
#define MT6351_PMIC_BUCK_VS2_SFCHG_REN_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_SFCHG_REN_SHIFT 15
#define MT6351_PMIC_BUCK_VS2_VOSEL_ADDR MT6351_BUCK_VS2_CON4
#define MT6351_PMIC_BUCK_VS2_VOSEL_MASK 0x7F
#define MT6351_PMIC_BUCK_VS2_VOSEL_SHIFT 0
#define MT6351_PMIC_BUCK_VS2_VOSEL_ON_ADDR MT6351_BUCK_VS2_CON5
#define MT6351_PMIC_BUCK_VS2_VOSEL_ON_MASK 0x7F
#define MT6351_PMIC_BUCK_VS2_VOSEL_ON_SHIFT 0
#define MT6351_PMIC_BUCK_VS2_VOSEL_SLEEP_ADDR MT6351_BUCK_VS2_CON6
#define MT6351_PMIC_BUCK_VS2_VOSEL_SLEEP_MASK 0x7F
#define MT6351_PMIC_BUCK_VS2_VOSEL_SLEEP_SHIFT 0
#define MT6351_PMIC_DA_NI_VS2_VOSEL_ADDR MT6351_BUCK_VS2_CON7
#define MT6351_PMIC_DA_NI_VS2_VOSEL_MASK 0x7F
#define MT6351_PMIC_DA_NI_VS2_VOSEL_SHIFT 0
#define MT6351_PMIC_DA_NI_VS2_VOSEL_SYNC_ADDR MT6351_BUCK_VS2_CON8
#define MT6351_PMIC_DA_NI_VS2_VOSEL_SYNC_MASK 0x7F
#define MT6351_PMIC_DA_NI_VS2_VOSEL_SYNC_SHIFT 0
#define MT6351_PMIC_BUCK_VS2_TRANS_TD_ADDR MT6351_BUCK_VS2_CON9
#define MT6351_PMIC_BUCK_VS2_TRANS_TD_MASK 0x3
#define MT6351_PMIC_BUCK_VS2_TRANS_TD_SHIFT 0
#define MT6351_PMIC_BUCK_VS2_TRANS_CTRL_ADDR MT6351_BUCK_VS2_CON9
#define MT6351_PMIC_BUCK_VS2_TRANS_CTRL_MASK 0x3
#define MT6351_PMIC_BUCK_VS2_TRANS_CTRL_SHIFT 4
#define MT6351_PMIC_BUCK_VS2_TRANS_ONCE_ADDR MT6351_BUCK_VS2_CON9
#define MT6351_PMIC_BUCK_VS2_TRANS_ONCE_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_TRANS_ONCE_SHIFT 6
#define MT6351_PMIC_DA_QI_VS2_DVS_EN_ADDR MT6351_BUCK_VS2_CON9
#define MT6351_PMIC_DA_QI_VS2_DVS_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VS2_DVS_EN_SHIFT 7
#define MT6351_PMIC_BUCK_VS2_VSLEEP_EN_ADDR MT6351_BUCK_VS2_CON9
#define MT6351_PMIC_BUCK_VS2_VSLEEP_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_VSLEEP_EN_SHIFT 8
#define MT6351_PMIC_BUCK_VS2_R2R_PDN_ADDR MT6351_BUCK_VS2_CON9
#define MT6351_PMIC_BUCK_VS2_R2R_PDN_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_R2R_PDN_SHIFT 10
#define MT6351_PMIC_BUCK_VS2_VSLEEP_SEL_ADDR MT6351_BUCK_VS2_CON9
#define MT6351_PMIC_BUCK_VS2_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VS2_VSLEEP_SEL_SHIFT 11
#define MT6351_PMIC_DA_NI_VS2_R2R_PDN_ADDR MT6351_BUCK_VS2_CON9
#define MT6351_PMIC_DA_NI_VS2_R2R_PDN_MASK 0x1
#define MT6351_PMIC_DA_NI_VS2_R2R_PDN_SHIFT 14
#define MT6351_PMIC_DA_NI_VS2_VSLEEP_SEL_ADDR MT6351_BUCK_VS2_CON9
#define MT6351_PMIC_DA_NI_VS2_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_DA_NI_VS2_VSLEEP_SEL_SHIFT 15
#define MT6351_PMIC_BUCK_VPA_EN_CTRL_ADDR MT6351_BUCK_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_EN_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_EN_CTRL_SHIFT 0
#define MT6351_PMIC_BUCK_VPA_VOSEL_CTRL_ADDR MT6351_BUCK_VPA_CON0
#define MT6351_PMIC_BUCK_VPA_VOSEL_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_VOSEL_CTRL_SHIFT 1
#define MT6351_PMIC_BUCK_VPA_EN_SEL_ADDR MT6351_BUCK_VPA_CON1
#define MT6351_PMIC_BUCK_VPA_EN_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VPA_EN_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_VPA_VOSEL_SEL_ADDR MT6351_BUCK_VPA_CON1
#define MT6351_PMIC_BUCK_VPA_VOSEL_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VPA_VOSEL_SEL_SHIFT 3
#define MT6351_PMIC_BUCK_VPA_EN_ADDR MT6351_BUCK_VPA_CON2
#define MT6351_PMIC_BUCK_VPA_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_EN_SHIFT 0
#define MT6351_PMIC_BUCK_VPA_STBTD_ADDR MT6351_BUCK_VPA_CON2
#define MT6351_PMIC_BUCK_VPA_STBTD_MASK 0x3
#define MT6351_PMIC_BUCK_VPA_STBTD_SHIFT 4
#define MT6351_PMIC_DA_VPA_STB_ADDR MT6351_BUCK_VPA_CON2
#define MT6351_PMIC_DA_VPA_STB_MASK 0x1
#define MT6351_PMIC_DA_VPA_STB_SHIFT 12
#define MT6351_PMIC_DA_QI_VPA_EN_ADDR MT6351_BUCK_VPA_CON2
#define MT6351_PMIC_DA_QI_VPA_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VPA_EN_SHIFT 13
#define MT6351_PMIC_BUCK_VPA_SFCHG_FRATE_ADDR MT6351_BUCK_VPA_CON3
#define MT6351_PMIC_BUCK_VPA_SFCHG_FRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VPA_SFCHG_FRATE_SHIFT 0
#define MT6351_PMIC_BUCK_VPA_SFCHG_FEN_ADDR MT6351_BUCK_VPA_CON3
#define MT6351_PMIC_BUCK_VPA_SFCHG_FEN_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_SFCHG_FEN_SHIFT 7
#define MT6351_PMIC_BUCK_VPA_SFCHG_RRATE_ADDR MT6351_BUCK_VPA_CON3
#define MT6351_PMIC_BUCK_VPA_SFCHG_RRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VPA_SFCHG_RRATE_SHIFT 8
#define MT6351_PMIC_BUCK_VPA_SFCHG_REN_ADDR MT6351_BUCK_VPA_CON3
#define MT6351_PMIC_BUCK_VPA_SFCHG_REN_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_SFCHG_REN_SHIFT 15
#define MT6351_PMIC_BUCK_VPA_VOSEL_ADDR MT6351_BUCK_VPA_CON4
#define MT6351_PMIC_BUCK_VPA_VOSEL_MASK 0x3F
#define MT6351_PMIC_BUCK_VPA_VOSEL_SHIFT 0
#define MT6351_PMIC_BUCK_VPA_VOSEL_ON_ADDR MT6351_BUCK_VPA_CON5
#define MT6351_PMIC_BUCK_VPA_VOSEL_ON_MASK 0x3F
#define MT6351_PMIC_BUCK_VPA_VOSEL_ON_SHIFT 0
#define MT6351_PMIC_BUCK_VPA_VOSEL_SLEEP_ADDR MT6351_BUCK_VPA_CON6
#define MT6351_PMIC_BUCK_VPA_VOSEL_SLEEP_MASK 0x3F
#define MT6351_PMIC_BUCK_VPA_VOSEL_SLEEP_SHIFT 0
#define MT6351_PMIC_DA_NI_VPA_VOSEL_GRAY_ADDR MT6351_BUCK_VPA_CON7
#define MT6351_PMIC_DA_NI_VPA_VOSEL_GRAY_MASK 0x7F
#define MT6351_PMIC_DA_NI_VPA_VOSEL_GRAY_SHIFT 0
#define MT6351_PMIC_DA_NI_VPA_VOSEL_SYNC_ADDR MT6351_BUCK_VPA_CON8
#define MT6351_PMIC_DA_NI_VPA_VOSEL_SYNC_MASK 0x7F
#define MT6351_PMIC_DA_NI_VPA_VOSEL_SYNC_SHIFT 0
#define MT6351_PMIC_BUCK_VPA_TRANS_TD_ADDR MT6351_BUCK_VPA_CON9
#define MT6351_PMIC_BUCK_VPA_TRANS_TD_MASK 0x3
#define MT6351_PMIC_BUCK_VPA_TRANS_TD_SHIFT 0
#define MT6351_PMIC_BUCK_VPA_TRANS_CTRL_ADDR MT6351_BUCK_VPA_CON9
#define MT6351_PMIC_BUCK_VPA_TRANS_CTRL_MASK 0x3
#define MT6351_PMIC_BUCK_VPA_TRANS_CTRL_SHIFT 4
#define MT6351_PMIC_BUCK_VPA_TRANS_ONCE_ADDR MT6351_BUCK_VPA_CON9
#define MT6351_PMIC_BUCK_VPA_TRANS_ONCE_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_TRANS_ONCE_SHIFT 6
#define MT6351_PMIC_DA_QI_VPA_DVS_EN_ADDR MT6351_BUCK_VPA_CON9
#define MT6351_PMIC_DA_QI_VPA_DVS_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VPA_DVS_EN_SHIFT 7
#define MT6351_PMIC_BUCK_VPA_VSLEEP_EN_ADDR MT6351_BUCK_VPA_CON9
#define MT6351_PMIC_BUCK_VPA_VSLEEP_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_VSLEEP_EN_SHIFT 8
#define MT6351_PMIC_BUCK_VPA_R2R_PDN_ADDR MT6351_BUCK_VPA_CON9
#define MT6351_PMIC_BUCK_VPA_R2R_PDN_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_R2R_PDN_SHIFT 10
#define MT6351_PMIC_BUCK_VPA_VSLEEP_SEL_ADDR MT6351_BUCK_VPA_CON9
#define MT6351_PMIC_BUCK_VPA_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VPA_VSLEEP_SEL_SHIFT 11
#define MT6351_PMIC_DA_NI_VPA_R2R_PDN_ADDR MT6351_BUCK_VPA_CON9
#define MT6351_PMIC_DA_NI_VPA_R2R_PDN_MASK 0x1
#define MT6351_PMIC_DA_NI_VPA_R2R_PDN_SHIFT 14
#define MT6351_PMIC_DA_NI_VPA_VSLEEP_SEL_ADDR MT6351_BUCK_VPA_CON9
#define MT6351_PMIC_DA_NI_VPA_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_DA_NI_VPA_VSLEEP_SEL_SHIFT 15
#define MT6351_PMIC_BUCK_VSRAM_PROC_EN_CTRL_ADDR MT6351_BUCK_VSRAM_PROC_CON0
#define MT6351_PMIC_BUCK_VSRAM_PROC_EN_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_PROC_EN_CTRL_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_CTRL_ADDR MT6351_BUCK_VSRAM_PROC_CON0
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_CTRL_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_CTRL_SHIFT 1
#define MT6351_PMIC_BUCK_VSRAM_PROC_EN_SEL_ADDR MT6351_BUCK_VSRAM_PROC_CON1
#define MT6351_PMIC_BUCK_VSRAM_PROC_EN_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VSRAM_PROC_EN_SEL_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_SEL_ADDR MT6351_BUCK_VSRAM_PROC_CON1
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_SEL_MASK 0x7
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_SEL_SHIFT 3
#define MT6351_PMIC_BUCK_VSRAM_PROC_EN_ADDR MT6351_BUCK_VSRAM_PROC_CON2
#define MT6351_PMIC_BUCK_VSRAM_PROC_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_PROC_EN_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_PROC_STBTD_ADDR MT6351_BUCK_VSRAM_PROC_CON2
#define MT6351_PMIC_BUCK_VSRAM_PROC_STBTD_MASK 0x3
#define MT6351_PMIC_BUCK_VSRAM_PROC_STBTD_SHIFT 4
#define MT6351_PMIC_DA_VSRAM_PROC_STB_ADDR MT6351_BUCK_VSRAM_PROC_CON2
#define MT6351_PMIC_DA_VSRAM_PROC_STB_MASK 0x1
#define MT6351_PMIC_DA_VSRAM_PROC_STB_SHIFT 12
#define MT6351_PMIC_DA_QI_VSRAM_PROC_EN_RSV_ADDR MT6351_BUCK_VSRAM_PROC_CON2
#define MT6351_PMIC_DA_QI_VSRAM_PROC_EN_RSV_MASK 0x1
#define MT6351_PMIC_DA_QI_VSRAM_PROC_EN_RSV_SHIFT 13
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_FRATE_ADDR MT6351_BUCK_VSRAM_PROC_CON3
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_FRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_FRATE_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_FEN_ADDR MT6351_BUCK_VSRAM_PROC_CON3
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_FEN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_FEN_SHIFT 7
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_RRATE_ADDR MT6351_BUCK_VSRAM_PROC_CON3
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_RRATE_MASK 0x7F
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_RRATE_SHIFT 8
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_REN_ADDR MT6351_BUCK_VSRAM_PROC_CON3
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_REN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_REN_SHIFT 15
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_ADDR MT6351_BUCK_VSRAM_PROC_CON4
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_MASK 0x7F
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_ON_ADDR MT6351_BUCK_VSRAM_PROC_CON5
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_ON_MASK 0x7F
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_ON_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_SLEEP_ADDR MT6351_BUCK_VSRAM_PROC_CON6
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_SLEEP_MASK 0x7F
#define MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_SLEEP_SHIFT 0
#define MT6351_PMIC_DA_NI_VSRAM_PROC_VOSEL_ADDR MT6351_BUCK_VSRAM_PROC_CON7
#define MT6351_PMIC_DA_NI_VSRAM_PROC_VOSEL_MASK 0x7F
#define MT6351_PMIC_DA_NI_VSRAM_PROC_VOSEL_SHIFT 0
#define MT6351_PMIC_DA_NI_VSRAM_PROC_VOSEL_SYNC_ADDR MT6351_BUCK_VSRAM_PROC_CON8
#define MT6351_PMIC_DA_NI_VSRAM_PROC_VOSEL_SYNC_MASK 0x7F
#define MT6351_PMIC_DA_NI_VSRAM_PROC_VOSEL_SYNC_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_TD_ADDR MT6351_BUCK_VSRAM_PROC_CON9
#define MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_TD_MASK 0x3
#define MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_TD_SHIFT 0
#define MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_CTRL_ADDR MT6351_BUCK_VSRAM_PROC_CON9
#define MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_CTRL_MASK 0x3
#define MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_CTRL_SHIFT 4
#define MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_ONCE_ADDR MT6351_BUCK_VSRAM_PROC_CON9
#define MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_ONCE_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_ONCE_SHIFT 6
#define MT6351_PMIC_DA_QI_VSRAM_PROC_DVS_EN_ADDR MT6351_BUCK_VSRAM_PROC_CON9
#define MT6351_PMIC_DA_QI_VSRAM_PROC_DVS_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VSRAM_PROC_DVS_EN_SHIFT 7
#define MT6351_PMIC_BUCK_VSRAM_PROC_VSLEEP_EN_ADDR MT6351_BUCK_VSRAM_PROC_CON9
#define MT6351_PMIC_BUCK_VSRAM_PROC_VSLEEP_EN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_PROC_VSLEEP_EN_SHIFT 8
#define MT6351_PMIC_BUCK_VSRAM_PROC_R2R_PDN_ADDR MT6351_BUCK_VSRAM_PROC_CON9
#define MT6351_PMIC_BUCK_VSRAM_PROC_R2R_PDN_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_PROC_R2R_PDN_SHIFT 10
#define MT6351_PMIC_BUCK_VSRAM_PROC_VSLEEP_SEL_ADDR MT6351_BUCK_VSRAM_PROC_CON9
#define MT6351_PMIC_BUCK_VSRAM_PROC_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_VSRAM_PROC_VSLEEP_SEL_SHIFT 11
#define MT6351_PMIC_DA_NI_VSRAM_PROC_R2R_PDN_ADDR MT6351_BUCK_VSRAM_PROC_CON9
#define MT6351_PMIC_DA_NI_VSRAM_PROC_R2R_PDN_MASK 0x1
#define MT6351_PMIC_DA_NI_VSRAM_PROC_R2R_PDN_SHIFT 14
#define MT6351_PMIC_DA_NI_VSRAM_PROC_VSLEEP_SEL_ADDR MT6351_BUCK_VSRAM_PROC_CON9
#define MT6351_PMIC_DA_NI_VSRAM_PROC_VSLEEP_SEL_MASK 0x1
#define MT6351_PMIC_DA_NI_VSRAM_PROC_VSLEEP_SEL_SHIFT 15
#define MT6351_PMIC_BUCK_K_RST_DONE_ADDR MT6351_BUCK_K_CON0
#define MT6351_PMIC_BUCK_K_RST_DONE_MASK 0x1
#define MT6351_PMIC_BUCK_K_RST_DONE_SHIFT 0
#define MT6351_PMIC_BUCK_K_MAP_SEL_ADDR MT6351_BUCK_K_CON0
#define MT6351_PMIC_BUCK_K_MAP_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_K_MAP_SEL_SHIFT 1
#define MT6351_PMIC_BUCK_K_ONCE_EN_ADDR MT6351_BUCK_K_CON0
#define MT6351_PMIC_BUCK_K_ONCE_EN_MASK 0x1
#define MT6351_PMIC_BUCK_K_ONCE_EN_SHIFT 2
#define MT6351_PMIC_BUCK_K_ONCE_ADDR MT6351_BUCK_K_CON0
#define MT6351_PMIC_BUCK_K_ONCE_MASK 0x1
#define MT6351_PMIC_BUCK_K_ONCE_SHIFT 3
#define MT6351_PMIC_BUCK_K_START_MANUAL_ADDR MT6351_BUCK_K_CON0
#define MT6351_PMIC_BUCK_K_START_MANUAL_MASK 0x1
#define MT6351_PMIC_BUCK_K_START_MANUAL_SHIFT 4
#define MT6351_PMIC_BUCK_K_SRC_SEL_ADDR MT6351_BUCK_K_CON0
#define MT6351_PMIC_BUCK_K_SRC_SEL_MASK 0x1
#define MT6351_PMIC_BUCK_K_SRC_SEL_SHIFT 5
#define MT6351_PMIC_BUCK_K_AUTO_EN_ADDR MT6351_BUCK_K_CON0
#define MT6351_PMIC_BUCK_K_AUTO_EN_MASK 0x1
#define MT6351_PMIC_BUCK_K_AUTO_EN_SHIFT 6
#define MT6351_PMIC_BUCK_K_INV_ADDR MT6351_BUCK_K_CON0
#define MT6351_PMIC_BUCK_K_INV_MASK 0x1
#define MT6351_PMIC_BUCK_K_INV_SHIFT 7
#define MT6351_PMIC_BUCK_K_CONTROL_SMPS_ADDR MT6351_BUCK_K_CON1
#define MT6351_PMIC_BUCK_K_CONTROL_SMPS_MASK 0x3F
#define MT6351_PMIC_BUCK_K_CONTROL_SMPS_SHIFT 8
#define MT6351_PMIC_K_RESULT_ADDR MT6351_BUCK_K_CON2
#define MT6351_PMIC_K_RESULT_MASK 0x1
#define MT6351_PMIC_K_RESULT_SHIFT 0
#define MT6351_PMIC_K_DONE_ADDR MT6351_BUCK_K_CON2
#define MT6351_PMIC_K_DONE_MASK 0x1
#define MT6351_PMIC_K_DONE_SHIFT 1
#define MT6351_PMIC_K_CONTROL_ADDR MT6351_BUCK_K_CON2
#define MT6351_PMIC_K_CONTROL_MASK 0x3F
#define MT6351_PMIC_K_CONTROL_SHIFT 2
#define MT6351_PMIC_DA_QI_SMPS_OSC_CAL_ADDR MT6351_BUCK_K_CON2
#define MT6351_PMIC_DA_QI_SMPS_OSC_CAL_MASK 0x3F
#define MT6351_PMIC_DA_QI_SMPS_OSC_CAL_SHIFT 8
#define MT6351_PMIC_BUCK_K_BUCK_CK_CNT_ADDR MT6351_BUCK_K_CON3
#define MT6351_PMIC_BUCK_K_BUCK_CK_CNT_MASK 0x3FF
#define MT6351_PMIC_BUCK_K_BUCK_CK_CNT_SHIFT 0
#define MT6351_PMIC_WDTDBG_CLR_ADDR MT6351_WDTDBG_CON0
#define MT6351_PMIC_WDTDBG_CLR_MASK 0x1
#define MT6351_PMIC_WDTDBG_CLR_SHIFT 0
#define MT6351_PMIC_WDTDBG_CON0_RSV0_ADDR MT6351_WDTDBG_CON0
#define MT6351_PMIC_WDTDBG_CON0_RSV0_MASK 0x1
#define MT6351_PMIC_WDTDBG_CON0_RSV0_SHIFT 1
#define MT6351_PMIC_VGPU_VOSEL_WDTDBG_ADDR MT6351_WDTDBG_CON1
#define MT6351_PMIC_VGPU_VOSEL_WDTDBG_MASK 0x7F
#define MT6351_PMIC_VGPU_VOSEL_WDTDBG_SHIFT 0
#define MT6351_PMIC_VCORE_VOSEL_WDTDBG_ADDR MT6351_WDTDBG_CON1
#define MT6351_PMIC_VCORE_VOSEL_WDTDBG_MASK 0x7F
#define MT6351_PMIC_VCORE_VOSEL_WDTDBG_SHIFT 8
#define MT6351_PMIC_VMD1_VOSEL_WDTDBG_ADDR MT6351_WDTDBG_CON2
#define MT6351_PMIC_VMD1_VOSEL_WDTDBG_MASK 0x7F
#define MT6351_PMIC_VMD1_VOSEL_WDTDBG_SHIFT 0
#define MT6351_PMIC_VMODEM_VOSEL_WDTDBG_ADDR MT6351_WDTDBG_CON2
#define MT6351_PMIC_VMODEM_VOSEL_WDTDBG_MASK 0x7F
#define MT6351_PMIC_VMODEM_VOSEL_WDTDBG_SHIFT 8
#define MT6351_PMIC_VSRAM_PROC_VOSEL_WDTDBG_ADDR MT6351_WDTDBG_CON3
#define MT6351_PMIC_VSRAM_PROC_VOSEL_WDTDBG_MASK 0x7F
#define MT6351_PMIC_VSRAM_PROC_VOSEL_WDTDBG_SHIFT 0
#define MT6351_PMIC_VSRAM_MD_VOSEL_WDTDBG_ADDR MT6351_WDTDBG_CON3
#define MT6351_PMIC_VSRAM_MD_VOSEL_WDTDBG_MASK 0x7F
#define MT6351_PMIC_VSRAM_MD_VOSEL_WDTDBG_SHIFT 8
#define MT6351_PMIC_RG_AUDZCDENABLE_ADDR MT6351_ZCD_CON0
#define MT6351_PMIC_RG_AUDZCDENABLE_MASK 0x1
#define MT6351_PMIC_RG_AUDZCDENABLE_SHIFT 0
#define MT6351_PMIC_RG_AUDZCDGAINSTEPTIME_ADDR MT6351_ZCD_CON0
#define MT6351_PMIC_RG_AUDZCDGAINSTEPTIME_MASK 0x7
#define MT6351_PMIC_RG_AUDZCDGAINSTEPTIME_SHIFT 1
#define MT6351_PMIC_RG_AUDZCDGAINSTEPSIZE_ADDR MT6351_ZCD_CON0
#define MT6351_PMIC_RG_AUDZCDGAINSTEPSIZE_MASK 0x3
#define MT6351_PMIC_RG_AUDZCDGAINSTEPSIZE_SHIFT 4
#define MT6351_PMIC_RG_AUDZCDTIMEOUTMODESEL_ADDR MT6351_ZCD_CON0
#define MT6351_PMIC_RG_AUDZCDTIMEOUTMODESEL_MASK 0x1
#define MT6351_PMIC_RG_AUDZCDTIMEOUTMODESEL_SHIFT 6
#define MT6351_PMIC_RG_AUDZCDCLKSEL_VAUDP15_ADDR MT6351_ZCD_CON0
#define MT6351_PMIC_RG_AUDZCDCLKSEL_VAUDP15_MASK 0x1
#define MT6351_PMIC_RG_AUDZCDCLKSEL_VAUDP15_SHIFT 7
#define MT6351_PMIC_RG_AUDZCDMUXSEL_VAUDP15_ADDR MT6351_ZCD_CON0
#define MT6351_PMIC_RG_AUDZCDMUXSEL_VAUDP15_MASK 0x7
#define MT6351_PMIC_RG_AUDZCDMUXSEL_VAUDP15_SHIFT 8
#define MT6351_PMIC_RG_AUDLOLGAIN_ADDR MT6351_ZCD_CON1
#define MT6351_PMIC_RG_AUDLOLGAIN_MASK 0x1F
#define MT6351_PMIC_RG_AUDLOLGAIN_SHIFT 0
#define MT6351_PMIC_RG_AUDLORGAIN_ADDR MT6351_ZCD_CON1
#define MT6351_PMIC_RG_AUDLORGAIN_MASK 0x1F
#define MT6351_PMIC_RG_AUDLORGAIN_SHIFT 7
#define MT6351_PMIC_RG_AUDHPLGAIN_ADDR MT6351_ZCD_CON2
#define MT6351_PMIC_RG_AUDHPLGAIN_MASK 0x1F
#define MT6351_PMIC_RG_AUDHPLGAIN_SHIFT 0
#define MT6351_PMIC_RG_AUDHPRGAIN_ADDR MT6351_ZCD_CON2
#define MT6351_PMIC_RG_AUDHPRGAIN_MASK 0x1F
#define MT6351_PMIC_RG_AUDHPRGAIN_SHIFT 7
#define MT6351_PMIC_RG_AUDHSGAIN_ADDR MT6351_ZCD_CON3
#define MT6351_PMIC_RG_AUDHSGAIN_MASK 0x1F
#define MT6351_PMIC_RG_AUDHSGAIN_SHIFT 0
#define MT6351_PMIC_RG_AUDIVLGAIN_ADDR MT6351_ZCD_CON4
#define MT6351_PMIC_RG_AUDIVLGAIN_MASK 0x7
#define MT6351_PMIC_RG_AUDIVLGAIN_SHIFT 0
#define MT6351_PMIC_RG_AUDIVRGAIN_ADDR MT6351_ZCD_CON4
#define MT6351_PMIC_RG_AUDIVRGAIN_MASK 0x7
#define MT6351_PMIC_RG_AUDIVRGAIN_SHIFT 8
#define MT6351_PMIC_RG_AUDINTGAIN1_ADDR MT6351_ZCD_CON5
#define MT6351_PMIC_RG_AUDINTGAIN1_MASK 0x3F
#define MT6351_PMIC_RG_AUDINTGAIN1_SHIFT 0
#define MT6351_PMIC_RG_AUDINTGAIN2_ADDR MT6351_ZCD_CON5
#define MT6351_PMIC_RG_AUDINTGAIN2_MASK 0x3F
#define MT6351_PMIC_RG_AUDINTGAIN2_SHIFT 8
#define MT6351_PMIC_RG_A_TRIM_EN_ADDR MT6351_ISINKA_ANA_CON_0
#define MT6351_PMIC_RG_A_TRIM_EN_MASK 0x1
#define MT6351_PMIC_RG_A_TRIM_EN_SHIFT 0
#define MT6351_PMIC_RG_A_TRIM_SEL_ADDR MT6351_ISINKA_ANA_CON_0
#define MT6351_PMIC_RG_A_TRIM_SEL_MASK 0x7
#define MT6351_PMIC_RG_A_TRIM_SEL_SHIFT 1
#define MT6351_PMIC_RG_A_ISINKS_RSV_ADDR MT6351_ISINKA_ANA_CON_0
#define MT6351_PMIC_RG_A_ISINKS_RSV_MASK 0xFF
#define MT6351_PMIC_RG_A_ISINKS_RSV_SHIFT 4
#define MT6351_PMIC_RG_B_TRIM_EN_ADDR MT6351_ISINKB_ANA_CON_0
#define MT6351_PMIC_RG_B_TRIM_EN_MASK 0x1
#define MT6351_PMIC_RG_B_TRIM_EN_SHIFT 0
#define MT6351_PMIC_RG_B_TRIM_SEL_ADDR MT6351_ISINKB_ANA_CON_0
#define MT6351_PMIC_RG_B_TRIM_SEL_MASK 0x7
#define MT6351_PMIC_RG_B_TRIM_SEL_SHIFT 1
#define MT6351_PMIC_RG_B_ISINKS_RSV_ADDR MT6351_ISINKB_ANA_CON_0
#define MT6351_PMIC_RG_B_ISINKS_RSV_MASK 0xFF
#define MT6351_PMIC_RG_B_ISINKS_RSV_SHIFT 4
#define MT6351_PMIC_ISINK_DIM0_FSEL_ADDR MT6351_ISINK0_CON0
#define MT6351_PMIC_ISINK_DIM0_FSEL_MASK 0xFFFF
#define MT6351_PMIC_ISINK_DIM0_FSEL_SHIFT 0
#define MT6351_PMIC_ISINK0_RSV1_ADDR MT6351_ISINK0_CON1
#define MT6351_PMIC_ISINK0_RSV1_MASK 0xF
#define MT6351_PMIC_ISINK0_RSV1_SHIFT 0
#define MT6351_PMIC_ISINK0_RSV0_ADDR MT6351_ISINK0_CON1
#define MT6351_PMIC_ISINK0_RSV0_MASK 0x7
#define MT6351_PMIC_ISINK0_RSV0_SHIFT 4
#define MT6351_PMIC_ISINK_DIM0_DUTY_ADDR MT6351_ISINK0_CON1
#define MT6351_PMIC_ISINK_DIM0_DUTY_MASK 0x1F
#define MT6351_PMIC_ISINK_DIM0_DUTY_SHIFT 7
#define MT6351_PMIC_ISINK_CH0_STEP_ADDR MT6351_ISINK0_CON1
#define MT6351_PMIC_ISINK_CH0_STEP_MASK 0x7
#define MT6351_PMIC_ISINK_CH0_STEP_SHIFT 12
#define MT6351_PMIC_ISINK_BREATH0_TF2_SEL_ADDR MT6351_ISINK0_CON2
#define MT6351_PMIC_ISINK_BREATH0_TF2_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH0_TF2_SEL_SHIFT 0
#define MT6351_PMIC_ISINK_BREATH0_TF1_SEL_ADDR MT6351_ISINK0_CON2
#define MT6351_PMIC_ISINK_BREATH0_TF1_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH0_TF1_SEL_SHIFT 4
#define MT6351_PMIC_ISINK_BREATH0_TR2_SEL_ADDR MT6351_ISINK0_CON2
#define MT6351_PMIC_ISINK_BREATH0_TR2_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH0_TR2_SEL_SHIFT 8
#define MT6351_PMIC_ISINK_BREATH0_TR1_SEL_ADDR MT6351_ISINK0_CON2
#define MT6351_PMIC_ISINK_BREATH0_TR1_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH0_TR1_SEL_SHIFT 12
#define MT6351_PMIC_ISINK_BREATH0_TOFF_SEL_ADDR MT6351_ISINK0_CON3
#define MT6351_PMIC_ISINK_BREATH0_TOFF_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH0_TOFF_SEL_SHIFT 0
#define MT6351_PMIC_ISINK_BREATH0_TON_SEL_ADDR MT6351_ISINK0_CON3
#define MT6351_PMIC_ISINK_BREATH0_TON_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH0_TON_SEL_SHIFT 8
#define MT6351_PMIC_ISINK_DIM1_FSEL_ADDR MT6351_ISINK1_CON0
#define MT6351_PMIC_ISINK_DIM1_FSEL_MASK 0xFFFF
#define MT6351_PMIC_ISINK_DIM1_FSEL_SHIFT 0
#define MT6351_PMIC_ISINK1_RSV1_ADDR MT6351_ISINK1_CON1
#define MT6351_PMIC_ISINK1_RSV1_MASK 0xF
#define MT6351_PMIC_ISINK1_RSV1_SHIFT 0
#define MT6351_PMIC_ISINK1_RSV0_ADDR MT6351_ISINK1_CON1
#define MT6351_PMIC_ISINK1_RSV0_MASK 0x7
#define MT6351_PMIC_ISINK1_RSV0_SHIFT 4
#define MT6351_PMIC_ISINK_DIM1_DUTY_ADDR MT6351_ISINK1_CON1
#define MT6351_PMIC_ISINK_DIM1_DUTY_MASK 0x1F
#define MT6351_PMIC_ISINK_DIM1_DUTY_SHIFT 7
#define MT6351_PMIC_ISINK_CH1_STEP_ADDR MT6351_ISINK1_CON1
#define MT6351_PMIC_ISINK_CH1_STEP_MASK 0x7
#define MT6351_PMIC_ISINK_CH1_STEP_SHIFT 12
#define MT6351_PMIC_ISINK_BREATH1_TF2_SEL_ADDR MT6351_ISINK1_CON2
#define MT6351_PMIC_ISINK_BREATH1_TF2_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH1_TF2_SEL_SHIFT 0
#define MT6351_PMIC_ISINK_BREATH1_TF1_SEL_ADDR MT6351_ISINK1_CON2
#define MT6351_PMIC_ISINK_BREATH1_TF1_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH1_TF1_SEL_SHIFT 4
#define MT6351_PMIC_ISINK_BREATH1_TR2_SEL_ADDR MT6351_ISINK1_CON2
#define MT6351_PMIC_ISINK_BREATH1_TR2_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH1_TR2_SEL_SHIFT 8
#define MT6351_PMIC_ISINK_BREATH1_TR1_SEL_ADDR MT6351_ISINK1_CON2
#define MT6351_PMIC_ISINK_BREATH1_TR1_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH1_TR1_SEL_SHIFT 12
#define MT6351_PMIC_ISINK_BREATH1_TOFF_SEL_ADDR MT6351_ISINK1_CON3
#define MT6351_PMIC_ISINK_BREATH1_TOFF_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH1_TOFF_SEL_SHIFT 0
#define MT6351_PMIC_ISINK_BREATH1_TON_SEL_ADDR MT6351_ISINK1_CON3
#define MT6351_PMIC_ISINK_BREATH1_TON_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH1_TON_SEL_SHIFT 8
#define MT6351_PMIC_ISINK_DIM4_FSEL_ADDR MT6351_ISINK4_CON0
#define MT6351_PMIC_ISINK_DIM4_FSEL_MASK 0xFFFF
#define MT6351_PMIC_ISINK_DIM4_FSEL_SHIFT 0
#define MT6351_PMIC_ISINK4_RSV1_ADDR MT6351_ISINK4_CON1
#define MT6351_PMIC_ISINK4_RSV1_MASK 0xF
#define MT6351_PMIC_ISINK4_RSV1_SHIFT 0
#define MT6351_PMIC_ISINK4_RSV0_ADDR MT6351_ISINK4_CON1
#define MT6351_PMIC_ISINK4_RSV0_MASK 0x7
#define MT6351_PMIC_ISINK4_RSV0_SHIFT 4
#define MT6351_PMIC_ISINK_DIM4_DUTY_ADDR MT6351_ISINK4_CON1
#define MT6351_PMIC_ISINK_DIM4_DUTY_MASK 0x1F
#define MT6351_PMIC_ISINK_DIM4_DUTY_SHIFT 7
#define MT6351_PMIC_ISINK_CH4_STEP_ADDR MT6351_ISINK4_CON1
#define MT6351_PMIC_ISINK_CH4_STEP_MASK 0x7
#define MT6351_PMIC_ISINK_CH4_STEP_SHIFT 12
#define MT6351_PMIC_ISINK_BREATH4_TF2_SEL_ADDR MT6351_ISINK4_CON2
#define MT6351_PMIC_ISINK_BREATH4_TF2_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH4_TF2_SEL_SHIFT 0
#define MT6351_PMIC_ISINK_BREATH4_TF1_SEL_ADDR MT6351_ISINK4_CON2
#define MT6351_PMIC_ISINK_BREATH4_TF1_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH4_TF1_SEL_SHIFT 4
#define MT6351_PMIC_ISINK_BREATH4_TR2_SEL_ADDR MT6351_ISINK4_CON2
#define MT6351_PMIC_ISINK_BREATH4_TR2_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH4_TR2_SEL_SHIFT 8
#define MT6351_PMIC_ISINK_BREATH4_TR1_SEL_ADDR MT6351_ISINK4_CON2
#define MT6351_PMIC_ISINK_BREATH4_TR1_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH4_TR1_SEL_SHIFT 12
#define MT6351_PMIC_ISINK_BREATH4_TOFF_SEL_ADDR MT6351_ISINK4_CON3
#define MT6351_PMIC_ISINK_BREATH4_TOFF_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH4_TOFF_SEL_SHIFT 0
#define MT6351_PMIC_ISINK_BREATH4_TON_SEL_ADDR MT6351_ISINK4_CON3
#define MT6351_PMIC_ISINK_BREATH4_TON_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH4_TON_SEL_SHIFT 8
#define MT6351_PMIC_ISINK_DIM5_FSEL_ADDR MT6351_ISINK5_CON0
#define MT6351_PMIC_ISINK_DIM5_FSEL_MASK 0xFFFF
#define MT6351_PMIC_ISINK_DIM5_FSEL_SHIFT 0
#define MT6351_PMIC_ISINK5_RSV1_ADDR MT6351_ISINK5_CON1
#define MT6351_PMIC_ISINK5_RSV1_MASK 0xF
#define MT6351_PMIC_ISINK5_RSV1_SHIFT 0
#define MT6351_PMIC_ISINK5_RSV0_ADDR MT6351_ISINK5_CON1
#define MT6351_PMIC_ISINK5_RSV0_MASK 0x7
#define MT6351_PMIC_ISINK5_RSV0_SHIFT 4
#define MT6351_PMIC_ISINK_DIM5_DUTY_ADDR MT6351_ISINK5_CON1
#define MT6351_PMIC_ISINK_DIM5_DUTY_MASK 0x1F
#define MT6351_PMIC_ISINK_DIM5_DUTY_SHIFT 7
#define MT6351_PMIC_ISINK_CH5_STEP_ADDR MT6351_ISINK5_CON1
#define MT6351_PMIC_ISINK_CH5_STEP_MASK 0x7
#define MT6351_PMIC_ISINK_CH5_STEP_SHIFT 12
#define MT6351_PMIC_ISINK_BREATH5_TF2_SEL_ADDR MT6351_ISINK5_CON2
#define MT6351_PMIC_ISINK_BREATH5_TF2_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH5_TF2_SEL_SHIFT 0
#define MT6351_PMIC_ISINK_BREATH5_TF1_SEL_ADDR MT6351_ISINK5_CON2
#define MT6351_PMIC_ISINK_BREATH5_TF1_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH5_TF1_SEL_SHIFT 4
#define MT6351_PMIC_ISINK_BREATH5_TR2_SEL_ADDR MT6351_ISINK5_CON2
#define MT6351_PMIC_ISINK_BREATH5_TR2_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH5_TR2_SEL_SHIFT 8
#define MT6351_PMIC_ISINK_BREATH5_TR1_SEL_ADDR MT6351_ISINK5_CON2
#define MT6351_PMIC_ISINK_BREATH5_TR1_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH5_TR1_SEL_SHIFT 12
#define MT6351_PMIC_ISINK_BREATH5_TOFF_SEL_ADDR MT6351_ISINK5_CON3
#define MT6351_PMIC_ISINK_BREATH5_TOFF_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH5_TOFF_SEL_SHIFT 0
#define MT6351_PMIC_ISINK_BREATH5_TON_SEL_ADDR MT6351_ISINK5_CON3
#define MT6351_PMIC_ISINK_BREATH5_TON_SEL_MASK 0xF
#define MT6351_PMIC_ISINK_BREATH5_TON_SEL_SHIFT 8
#define MT6351_PMIC_AD_NI_B_ISINK1_STATUS_ADDR MT6351_ISINK_ANA1
#define MT6351_PMIC_AD_NI_B_ISINK1_STATUS_MASK 0x1
#define MT6351_PMIC_AD_NI_B_ISINK1_STATUS_SHIFT 0
#define MT6351_PMIC_AD_NI_B_ISINK0_STATUS_ADDR MT6351_ISINK_ANA1
#define MT6351_PMIC_AD_NI_B_ISINK0_STATUS_MASK 0x1
#define MT6351_PMIC_AD_NI_B_ISINK0_STATUS_SHIFT 1
#define MT6351_PMIC_AD_NI_A_ISINK1_STATUS_ADDR MT6351_ISINK_ANA1
#define MT6351_PMIC_AD_NI_A_ISINK1_STATUS_MASK 0x1
#define MT6351_PMIC_AD_NI_A_ISINK1_STATUS_SHIFT 2
#define MT6351_PMIC_AD_NI_A_ISINK0_STATUS_ADDR MT6351_ISINK_ANA1
#define MT6351_PMIC_AD_NI_A_ISINK0_STATUS_MASK 0x1
#define MT6351_PMIC_AD_NI_A_ISINK0_STATUS_SHIFT 3
#define MT6351_PMIC_ISINK_PHASE0_DLY_EN_ADDR MT6351_ISINK_PHASE_DLY
#define MT6351_PMIC_ISINK_PHASE0_DLY_EN_MASK 0x1
#define MT6351_PMIC_ISINK_PHASE0_DLY_EN_SHIFT 0
#define MT6351_PMIC_ISINK_PHASE1_DLY_EN_ADDR MT6351_ISINK_PHASE_DLY
#define MT6351_PMIC_ISINK_PHASE1_DLY_EN_MASK 0x1
#define MT6351_PMIC_ISINK_PHASE1_DLY_EN_SHIFT 1
#define MT6351_PMIC_ISINK_PHASE4_DLY_EN_ADDR MT6351_ISINK_PHASE_DLY
#define MT6351_PMIC_ISINK_PHASE4_DLY_EN_MASK 0x1
#define MT6351_PMIC_ISINK_PHASE4_DLY_EN_SHIFT 2
#define MT6351_PMIC_ISINK_PHASE5_DLY_EN_ADDR MT6351_ISINK_PHASE_DLY
#define MT6351_PMIC_ISINK_PHASE5_DLY_EN_MASK 0x1
#define MT6351_PMIC_ISINK_PHASE5_DLY_EN_SHIFT 3
#define MT6351_PMIC_ISINK_PHASE_DLY_TC_ADDR MT6351_ISINK_PHASE_DLY
#define MT6351_PMIC_ISINK_PHASE_DLY_TC_MASK 0x3
#define MT6351_PMIC_ISINK_PHASE_DLY_TC_SHIFT 4
#define MT6351_PMIC_ISINK_CHOP0_SW_ADDR MT6351_ISINK_PHASE_DLY
#define MT6351_PMIC_ISINK_CHOP0_SW_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP0_SW_SHIFT 12
#define MT6351_PMIC_ISINK_CHOP1_SW_ADDR MT6351_ISINK_PHASE_DLY
#define MT6351_PMIC_ISINK_CHOP1_SW_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP1_SW_SHIFT 13
#define MT6351_PMIC_ISINK_CHOP4_SW_ADDR MT6351_ISINK_PHASE_DLY
#define MT6351_PMIC_ISINK_CHOP4_SW_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP4_SW_SHIFT 14
#define MT6351_PMIC_ISINK_CHOP5_SW_ADDR MT6351_ISINK_PHASE_DLY
#define MT6351_PMIC_ISINK_CHOP5_SW_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP5_SW_SHIFT 15
#define MT6351_PMIC_ISINK_SFSTR5_EN_ADDR MT6351_ISINK_SFSTR
#define MT6351_PMIC_ISINK_SFSTR5_EN_MASK 0x1
#define MT6351_PMIC_ISINK_SFSTR5_EN_SHIFT 0
#define MT6351_PMIC_ISINK_SFSTR5_TC_ADDR MT6351_ISINK_SFSTR
#define MT6351_PMIC_ISINK_SFSTR5_TC_MASK 0x3
#define MT6351_PMIC_ISINK_SFSTR5_TC_SHIFT 1
#define MT6351_PMIC_ISINK_SFSTR4_EN_ADDR MT6351_ISINK_SFSTR
#define MT6351_PMIC_ISINK_SFSTR4_EN_MASK 0x1
#define MT6351_PMIC_ISINK_SFSTR4_EN_SHIFT 4
#define MT6351_PMIC_ISINK_SFSTR4_TC_ADDR MT6351_ISINK_SFSTR
#define MT6351_PMIC_ISINK_SFSTR4_TC_MASK 0x3
#define MT6351_PMIC_ISINK_SFSTR4_TC_SHIFT 5
#define MT6351_PMIC_ISINK_SFSTR1_EN_ADDR MT6351_ISINK_SFSTR
#define MT6351_PMIC_ISINK_SFSTR1_EN_MASK 0x1
#define MT6351_PMIC_ISINK_SFSTR1_EN_SHIFT 8
#define MT6351_PMIC_ISINK_SFSTR1_TC_ADDR MT6351_ISINK_SFSTR
#define MT6351_PMIC_ISINK_SFSTR1_TC_MASK 0x3
#define MT6351_PMIC_ISINK_SFSTR1_TC_SHIFT 9
#define MT6351_PMIC_ISINK_SFSTR0_EN_ADDR MT6351_ISINK_SFSTR
#define MT6351_PMIC_ISINK_SFSTR0_EN_MASK 0x1
#define MT6351_PMIC_ISINK_SFSTR0_EN_SHIFT 12
#define MT6351_PMIC_ISINK_SFSTR0_TC_ADDR MT6351_ISINK_SFSTR
#define MT6351_PMIC_ISINK_SFSTR0_TC_MASK 0x3
#define MT6351_PMIC_ISINK_SFSTR0_TC_SHIFT 13
#define MT6351_PMIC_ISINK_CH0_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CH0_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH0_EN_SHIFT 0
#define MT6351_PMIC_ISINK_CH1_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CH1_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH1_EN_SHIFT 1
#define MT6351_PMIC_ISINK_CH4_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CH4_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH4_EN_SHIFT 2
#define MT6351_PMIC_ISINK_CH5_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CH5_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH5_EN_SHIFT 3
#define MT6351_PMIC_ISINK_CHOP0_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CHOP0_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP0_EN_SHIFT 4
#define MT6351_PMIC_ISINK_CHOP1_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CHOP1_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP1_EN_SHIFT 5
#define MT6351_PMIC_ISINK_CHOP4_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CHOP4_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP4_EN_SHIFT 6
#define MT6351_PMIC_ISINK_CHOP5_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CHOP5_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP5_EN_SHIFT 7
#define MT6351_PMIC_ISINK_CH0_BIAS_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CH0_BIAS_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH0_BIAS_EN_SHIFT 8
#define MT6351_PMIC_ISINK_CH1_BIAS_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CH1_BIAS_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH1_BIAS_EN_SHIFT 9
#define MT6351_PMIC_ISINK_CH4_BIAS_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CH4_BIAS_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH4_BIAS_EN_SHIFT 10
#define MT6351_PMIC_ISINK_CH5_BIAS_EN_ADDR MT6351_ISINK_EN_CTRL
#define MT6351_PMIC_ISINK_CH5_BIAS_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH5_BIAS_EN_SHIFT 11
#define MT6351_PMIC_ISINK_RSV_ADDR MT6351_ISINK_MODE_CTRL
#define MT6351_PMIC_ISINK_RSV_MASK 0x1F
#define MT6351_PMIC_ISINK_RSV_SHIFT 0
#define MT6351_PMIC_ISINK_CH5_MODE_ADDR MT6351_ISINK_MODE_CTRL
#define MT6351_PMIC_ISINK_CH5_MODE_MASK 0x3
#define MT6351_PMIC_ISINK_CH5_MODE_SHIFT 8
#define MT6351_PMIC_ISINK_CH4_MODE_ADDR MT6351_ISINK_MODE_CTRL
#define MT6351_PMIC_ISINK_CH4_MODE_MASK 0x3
#define MT6351_PMIC_ISINK_CH4_MODE_SHIFT 10
#define MT6351_PMIC_ISINK_CH1_MODE_ADDR MT6351_ISINK_MODE_CTRL
#define MT6351_PMIC_ISINK_CH1_MODE_MASK 0x3
#define MT6351_PMIC_ISINK_CH1_MODE_SHIFT 12
#define MT6351_PMIC_ISINK_CH0_MODE_ADDR MT6351_ISINK_MODE_CTRL
#define MT6351_PMIC_ISINK_CH0_MODE_MASK 0x3
#define MT6351_PMIC_ISINK_CH0_MODE_SHIFT 14
#define MT6351_PMIC_DA_QI_A_ISINKS_CH0_STEP_ADDR MT6351_ISINK_ANA_CON0
#define MT6351_PMIC_DA_QI_A_ISINKS_CH0_STEP_MASK 0x7
#define MT6351_PMIC_DA_QI_A_ISINKS_CH0_STEP_SHIFT 0
#define MT6351_PMIC_DA_QI_A_ISINKS_CH1_STEP_ADDR MT6351_ISINK_ANA_CON0
#define MT6351_PMIC_DA_QI_A_ISINKS_CH1_STEP_MASK 0x7
#define MT6351_PMIC_DA_QI_A_ISINKS_CH1_STEP_SHIFT 3
#define MT6351_PMIC_DA_QI_B_ISINKS_CH0_STEP_ADDR MT6351_ISINK_ANA_CON0
#define MT6351_PMIC_DA_QI_B_ISINKS_CH0_STEP_MASK 0x7
#define MT6351_PMIC_DA_QI_B_ISINKS_CH0_STEP_SHIFT 6
#define MT6351_PMIC_DA_QI_B_ISINKS_CH1_STEP_ADDR MT6351_ISINK_ANA_CON0
#define MT6351_PMIC_DA_QI_B_ISINKS_CH1_STEP_MASK 0x7
#define MT6351_PMIC_DA_QI_B_ISINKS_CH1_STEP_SHIFT 9
#define MT6351_PMIC_ISINK2_RSV1_ADDR MT6351_ISINK2_CON1
#define MT6351_PMIC_ISINK2_RSV1_MASK 0xF
#define MT6351_PMIC_ISINK2_RSV1_SHIFT 0
#define MT6351_PMIC_ISINK2_RSV0_ADDR MT6351_ISINK2_CON1
#define MT6351_PMIC_ISINK2_RSV0_MASK 0x7
#define MT6351_PMIC_ISINK2_RSV0_SHIFT 4
#define MT6351_PMIC_ISINK_CH2_STEP_ADDR MT6351_ISINK2_CON1
#define MT6351_PMIC_ISINK_CH2_STEP_MASK 0x7
#define MT6351_PMIC_ISINK_CH2_STEP_SHIFT 12
#define MT6351_PMIC_ISINK3_RSV1_ADDR MT6351_ISINK3_CON1
#define MT6351_PMIC_ISINK3_RSV1_MASK 0xF
#define MT6351_PMIC_ISINK3_RSV1_SHIFT 0
#define MT6351_PMIC_ISINK3_RSV0_ADDR MT6351_ISINK3_CON1
#define MT6351_PMIC_ISINK3_RSV0_MASK 0x7
#define MT6351_PMIC_ISINK3_RSV0_SHIFT 4
#define MT6351_PMIC_ISINK_CH3_STEP_ADDR MT6351_ISINK3_CON1
#define MT6351_PMIC_ISINK_CH3_STEP_MASK 0x7
#define MT6351_PMIC_ISINK_CH3_STEP_SHIFT 12
#define MT6351_PMIC_ISINK6_RSV1_ADDR MT6351_ISINK6_CON1
#define MT6351_PMIC_ISINK6_RSV1_MASK 0xF
#define MT6351_PMIC_ISINK6_RSV1_SHIFT 0
#define MT6351_PMIC_ISINK6_RSV0_ADDR MT6351_ISINK6_CON1
#define MT6351_PMIC_ISINK6_RSV0_MASK 0x7
#define MT6351_PMIC_ISINK6_RSV0_SHIFT 4
#define MT6351_PMIC_ISINK_CH6_STEP_ADDR MT6351_ISINK6_CON1
#define MT6351_PMIC_ISINK_CH6_STEP_MASK 0x7
#define MT6351_PMIC_ISINK_CH6_STEP_SHIFT 12
#define MT6351_PMIC_ISINK7_RSV1_ADDR MT6351_ISINK7_CON1
#define MT6351_PMIC_ISINK7_RSV1_MASK 0xF
#define MT6351_PMIC_ISINK7_RSV1_SHIFT 0
#define MT6351_PMIC_ISINK7_RSV0_ADDR MT6351_ISINK7_CON1
#define MT6351_PMIC_ISINK7_RSV0_MASK 0x7
#define MT6351_PMIC_ISINK7_RSV0_SHIFT 4
#define MT6351_PMIC_ISINK_CH7_STEP_ADDR MT6351_ISINK7_CON1
#define MT6351_PMIC_ISINK_CH7_STEP_MASK 0x7
#define MT6351_PMIC_ISINK_CH7_STEP_SHIFT 12
#define MT6351_PMIC_AD_NI_B_ISINK3_STATUS_ADDR MT6351_ISINK_ANA1_SMPL
#define MT6351_PMIC_AD_NI_B_ISINK3_STATUS_MASK 0x1
#define MT6351_PMIC_AD_NI_B_ISINK3_STATUS_SHIFT 0
#define MT6351_PMIC_AD_NI_B_ISINK2_STATUS_ADDR MT6351_ISINK_ANA1_SMPL
#define MT6351_PMIC_AD_NI_B_ISINK2_STATUS_MASK 0x1
#define MT6351_PMIC_AD_NI_B_ISINK2_STATUS_SHIFT 1
#define MT6351_PMIC_AD_NI_A_ISINK3_STATUS_ADDR MT6351_ISINK_ANA1_SMPL
#define MT6351_PMIC_AD_NI_A_ISINK3_STATUS_MASK 0x1
#define MT6351_PMIC_AD_NI_A_ISINK3_STATUS_SHIFT 2
#define MT6351_PMIC_AD_NI_A_ISINK2_STATUS_ADDR MT6351_ISINK_ANA1_SMPL
#define MT6351_PMIC_AD_NI_A_ISINK2_STATUS_MASK 0x1
#define MT6351_PMIC_AD_NI_A_ISINK2_STATUS_SHIFT 3
#define MT6351_PMIC_ISINK_CHOP7_SW_ADDR MT6351_ISINK_PHASE_DLY_SMPL
#define MT6351_PMIC_ISINK_CHOP7_SW_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP7_SW_SHIFT 12
#define MT6351_PMIC_ISINK_CHOP6_SW_ADDR MT6351_ISINK_PHASE_DLY_SMPL
#define MT6351_PMIC_ISINK_CHOP6_SW_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP6_SW_SHIFT 13
#define MT6351_PMIC_ISINK_CHOP3_SW_ADDR MT6351_ISINK_PHASE_DLY_SMPL
#define MT6351_PMIC_ISINK_CHOP3_SW_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP3_SW_SHIFT 14
#define MT6351_PMIC_ISINK_CHOP2_SW_ADDR MT6351_ISINK_PHASE_DLY_SMPL
#define MT6351_PMIC_ISINK_CHOP2_SW_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP2_SW_SHIFT 15
#define MT6351_PMIC_ISINK_CH7_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CH7_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH7_EN_SHIFT 0
#define MT6351_PMIC_ISINK_CH6_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CH6_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH6_EN_SHIFT 1
#define MT6351_PMIC_ISINK_CH3_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CH3_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH3_EN_SHIFT 2
#define MT6351_PMIC_ISINK_CH2_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CH2_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH2_EN_SHIFT 3
#define MT6351_PMIC_ISINK_CHOP7_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CHOP7_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP7_EN_SHIFT 4
#define MT6351_PMIC_ISINK_CHOP6_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CHOP6_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP6_EN_SHIFT 5
#define MT6351_PMIC_ISINK_CHOP3_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CHOP3_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP3_EN_SHIFT 6
#define MT6351_PMIC_ISINK_CHOP2_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CHOP2_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CHOP2_EN_SHIFT 7
#define MT6351_PMIC_ISINK_CH7_BIAS_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CH7_BIAS_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH7_BIAS_EN_SHIFT 8
#define MT6351_PMIC_ISINK_CH6_BIAS_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CH6_BIAS_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH6_BIAS_EN_SHIFT 9
#define MT6351_PMIC_ISINK_CH3_BIAS_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CH3_BIAS_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH3_BIAS_EN_SHIFT 10
#define MT6351_PMIC_ISINK_CH2_BIAS_EN_ADDR MT6351_ISINK_EN_CTRL_SMPL
#define MT6351_PMIC_ISINK_CH2_BIAS_EN_MASK 0x1
#define MT6351_PMIC_ISINK_CH2_BIAS_EN_SHIFT 11
#define MT6351_PMIC_CHRIND_DIM_FSEL_ADDR MT6351_CHRIND_CON0
#define MT6351_PMIC_CHRIND_DIM_FSEL_MASK 0xFFFF
#define MT6351_PMIC_CHRIND_DIM_FSEL_SHIFT 0
#define MT6351_PMIC_CHRIND_RSV1_ADDR MT6351_CHRIND_CON1
#define MT6351_PMIC_CHRIND_RSV1_MASK 0xF
#define MT6351_PMIC_CHRIND_RSV1_SHIFT 0
#define MT6351_PMIC_CHRIND_RSV0_ADDR MT6351_CHRIND_CON1
#define MT6351_PMIC_CHRIND_RSV0_MASK 0x7
#define MT6351_PMIC_CHRIND_RSV0_SHIFT 4
#define MT6351_PMIC_CHRIND_DIM_DUTY_ADDR MT6351_CHRIND_CON1
#define MT6351_PMIC_CHRIND_DIM_DUTY_MASK 0x1F
#define MT6351_PMIC_CHRIND_DIM_DUTY_SHIFT 7
#define MT6351_PMIC_CHRIND_STEP_ADDR MT6351_CHRIND_CON1
#define MT6351_PMIC_CHRIND_STEP_MASK 0x7
#define MT6351_PMIC_CHRIND_STEP_SHIFT 12
#define MT6351_PMIC_CHRIND_BREATH_TF2_SEL_ADDR MT6351_CHRIND_CON2
#define MT6351_PMIC_CHRIND_BREATH_TF2_SEL_MASK 0xF
#define MT6351_PMIC_CHRIND_BREATH_TF2_SEL_SHIFT 0
#define MT6351_PMIC_CHRIND_BREATH_TF1_SEL_ADDR MT6351_CHRIND_CON2
#define MT6351_PMIC_CHRIND_BREATH_TF1_SEL_MASK 0xF
#define MT6351_PMIC_CHRIND_BREATH_TF1_SEL_SHIFT 4
#define MT6351_PMIC_CHRIND_BREATH_TR2_SEL_ADDR MT6351_CHRIND_CON2
#define MT6351_PMIC_CHRIND_BREATH_TR2_SEL_MASK 0xF
#define MT6351_PMIC_CHRIND_BREATH_TR2_SEL_SHIFT 8
#define MT6351_PMIC_CHRIND_BREATH_TR1_SEL_ADDR MT6351_CHRIND_CON2
#define MT6351_PMIC_CHRIND_BREATH_TR1_SEL_MASK 0xF
#define MT6351_PMIC_CHRIND_BREATH_TR1_SEL_SHIFT 12
#define MT6351_PMIC_CHRIND_BREATH_TOFF_SEL_ADDR MT6351_CHRIND_CON3
#define MT6351_PMIC_CHRIND_BREATH_TOFF_SEL_MASK 0xF
#define MT6351_PMIC_CHRIND_BREATH_TOFF_SEL_SHIFT 0
#define MT6351_PMIC_CHRIND_BREATH_TON_SEL_ADDR MT6351_CHRIND_CON3
#define MT6351_PMIC_CHRIND_BREATH_TON_SEL_MASK 0xF
#define MT6351_PMIC_CHRIND_BREATH_TON_SEL_SHIFT 8
#define MT6351_PMIC_CHRIND_SFSTR_EN_ADDR MT6351_CHRIND_EN_CTRL
#define MT6351_PMIC_CHRIND_SFSTR_EN_MASK 0x1
#define MT6351_PMIC_CHRIND_SFSTR_EN_SHIFT 0
#define MT6351_PMIC_CHRIND_SFSTR_TC_ADDR MT6351_CHRIND_EN_CTRL
#define MT6351_PMIC_CHRIND_SFSTR_TC_MASK 0x3
#define MT6351_PMIC_CHRIND_SFSTR_TC_SHIFT 1
#define MT6351_PMIC_CHRIND_EN_SEL_ADDR MT6351_CHRIND_EN_CTRL
#define MT6351_PMIC_CHRIND_EN_SEL_MASK 0x1
#define MT6351_PMIC_CHRIND_EN_SEL_SHIFT 3
#define MT6351_PMIC_CHRIND_EN_ADDR MT6351_CHRIND_EN_CTRL
#define MT6351_PMIC_CHRIND_EN_MASK 0x1
#define MT6351_PMIC_CHRIND_EN_SHIFT 4
#define MT6351_PMIC_CHRIND_CHOP_EN_ADDR MT6351_CHRIND_EN_CTRL
#define MT6351_PMIC_CHRIND_CHOP_EN_MASK 0x1
#define MT6351_PMIC_CHRIND_CHOP_EN_SHIFT 5
#define MT6351_PMIC_CHRIND_MODE_ADDR MT6351_CHRIND_EN_CTRL
#define MT6351_PMIC_CHRIND_MODE_MASK 0x3
#define MT6351_PMIC_CHRIND_MODE_SHIFT 6
#define MT6351_PMIC_CHRIND_CHOP_SW_ADDR MT6351_CHRIND_EN_CTRL
#define MT6351_PMIC_CHRIND_CHOP_SW_MASK 0x1
#define MT6351_PMIC_CHRIND_CHOP_SW_SHIFT 8
#define MT6351_PMIC_CHRIND_BIAS_EN_ADDR MT6351_CHRIND_EN_CTRL
#define MT6351_PMIC_CHRIND_BIAS_EN_MASK 0x1
#define MT6351_PMIC_CHRIND_BIAS_EN_SHIFT 9
#define MT6351_PMIC_RG_VA18_MODE_SET_ADDR MT6351_LDO_VA18_CON0
#define MT6351_PMIC_RG_VA18_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VA18_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VA18_EN_ADDR MT6351_LDO_VA18_CON0
#define MT6351_PMIC_RG_VA18_EN_MASK 0x1
#define MT6351_PMIC_RG_VA18_EN_SHIFT 1
#define MT6351_PMIC_RG_VA18_MODE_CTRL_ADDR MT6351_LDO_VA18_CON0
#define MT6351_PMIC_RG_VA18_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VA18_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VA18_ON_CTRL_ADDR MT6351_LDO_VA18_CON0
#define MT6351_PMIC_RG_VA18_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VA18_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VA18_SRCLK_MODE_SEL_ADDR MT6351_LDO_VA18_CON0
#define MT6351_PMIC_RG_VA18_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VA18_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VA18_MODE_ADDR MT6351_LDO_VA18_CON0
#define MT6351_PMIC_DA_QI_VA18_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VA18_MODE_SHIFT 8
#define MT6351_PMIC_RG_VA18_STBTD_ADDR MT6351_LDO_VA18_CON0
#define MT6351_PMIC_RG_VA18_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VA18_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VA18_SRCLK_EN_SEL_ADDR MT6351_LDO_VA18_CON0
#define MT6351_PMIC_RG_VA18_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VA18_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VA18_STB_ADDR MT6351_LDO_VA18_CON0
#define MT6351_PMIC_DA_QI_VA18_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VA18_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VA18_EN_ADDR MT6351_LDO_VA18_CON0
#define MT6351_PMIC_DA_QI_VA18_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VA18_EN_SHIFT 15
#define MT6351_PMIC_RG_VA18_AUXADC_PWDB_EN_ADDR MT6351_LDO_VA18_CON1
#define MT6351_PMIC_RG_VA18_AUXADC_PWDB_EN_MASK 0x1
#define MT6351_PMIC_RG_VA18_AUXADC_PWDB_EN_SHIFT 2
#define MT6351_PMIC_RG_VA18_OCFB_EN_ADDR MT6351_LDO_VA18_CON1
#define MT6351_PMIC_RG_VA18_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VA18_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VA18_OCFB_EN_ADDR MT6351_LDO_VA18_CON1
#define MT6351_PMIC_DA_QI_VA18_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VA18_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VTCXO24_MODE_SET_ADDR MT6351_LDO_VTCXO24_CON0
#define MT6351_PMIC_RG_VTCXO24_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VTCXO24_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VTCXO24_EN_ADDR MT6351_LDO_VTCXO24_CON0
#define MT6351_PMIC_RG_VTCXO24_EN_MASK 0x1
#define MT6351_PMIC_RG_VTCXO24_EN_SHIFT 1
#define MT6351_PMIC_RG_VTCXO24_MODE_CTRL_ADDR MT6351_LDO_VTCXO24_CON0
#define MT6351_PMIC_RG_VTCXO24_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VTCXO24_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VTCXO24_ON_CTRL_ADDR MT6351_LDO_VTCXO24_CON0
#define MT6351_PMIC_RG_VTCXO24_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VTCXO24_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VTCXO24_SWITCH_ADDR MT6351_LDO_VTCXO24_CON0
#define MT6351_PMIC_RG_VTCXO24_SWITCH_MASK 0x1
#define MT6351_PMIC_RG_VTCXO24_SWITCH_SHIFT 4
#define MT6351_PMIC_RG_VTCXO24_SRCLK_MODE_SEL_ADDR MT6351_LDO_VTCXO24_CON0
#define MT6351_PMIC_RG_VTCXO24_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VTCXO24_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VTCXO24_MODE_ADDR MT6351_LDO_VTCXO24_CON0
#define MT6351_PMIC_DA_QI_VTCXO24_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VTCXO24_MODE_SHIFT 8
#define MT6351_PMIC_RG_VTCXO24_STBTD_ADDR MT6351_LDO_VTCXO24_CON0
#define MT6351_PMIC_RG_VTCXO24_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VTCXO24_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VTCXO24_SRCLK_EN_SEL_ADDR MT6351_LDO_VTCXO24_CON0
#define MT6351_PMIC_RG_VTCXO24_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VTCXO24_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VTCXO24_STB_ADDR MT6351_LDO_VTCXO24_CON0
#define MT6351_PMIC_DA_QI_VTCXO24_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VTCXO24_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VTCXO24_EN_ADDR MT6351_LDO_VTCXO24_CON0
#define MT6351_PMIC_DA_QI_VTCXO24_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VTCXO24_EN_SHIFT 15
#define MT6351_PMIC_RG_VTCXO24_OCFB_EN_ADDR MT6351_LDO_VTCXO24_CON1
#define MT6351_PMIC_RG_VTCXO24_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VTCXO24_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VTCXO24_OCFB_EN_ADDR MT6351_LDO_VTCXO24_CON1
#define MT6351_PMIC_DA_QI_VTCXO24_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VTCXO24_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VTCXO28_MODE_SET_ADDR MT6351_LDO_VTCXO28_CON0
#define MT6351_PMIC_RG_VTCXO28_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VTCXO28_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VTCXO28_EN_ADDR MT6351_LDO_VTCXO28_CON0
#define MT6351_PMIC_RG_VTCXO28_EN_MASK 0x1
#define MT6351_PMIC_RG_VTCXO28_EN_SHIFT 1
#define MT6351_PMIC_RG_VTCXO28_MODE_CTRL_ADDR MT6351_LDO_VTCXO28_CON0
#define MT6351_PMIC_RG_VTCXO28_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VTCXO28_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VTCXO28_ON_CTRL_ADDR MT6351_LDO_VTCXO28_CON0
#define MT6351_PMIC_RG_VTCXO28_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VTCXO28_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VTCXO28_SRCLK_MODE_SEL_ADDR MT6351_LDO_VTCXO28_CON0
#define MT6351_PMIC_RG_VTCXO28_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VTCXO28_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VTCXO28_MODE_ADDR MT6351_LDO_VTCXO28_CON0
#define MT6351_PMIC_DA_QI_VTCXO28_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VTCXO28_MODE_SHIFT 8
#define MT6351_PMIC_RG_VTCXO28_STBTD_ADDR MT6351_LDO_VTCXO28_CON0
#define MT6351_PMIC_RG_VTCXO28_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VTCXO28_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VTCXO28_SRCLK_EN_SEL_ADDR MT6351_LDO_VTCXO28_CON0
#define MT6351_PMIC_RG_VTCXO28_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VTCXO28_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VTCXO28_STB_ADDR MT6351_LDO_VTCXO28_CON0
#define MT6351_PMIC_DA_QI_VTCXO28_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VTCXO28_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VTCXO28_EN_ADDR MT6351_LDO_VTCXO28_CON0
#define MT6351_PMIC_DA_QI_VTCXO28_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VTCXO28_EN_SHIFT 15
#define MT6351_PMIC_RG_VTCXO28_OCFB_EN_ADDR MT6351_LDO_VTCXO28_CON1
#define MT6351_PMIC_RG_VTCXO28_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VTCXO28_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VTCXO28_OCFB_EN_ADDR MT6351_LDO_VTCXO28_CON1
#define MT6351_PMIC_DA_QI_VTCXO28_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VTCXO28_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VCN28_MODE_SET_ADDR MT6351_LDO_VCN28_CON0
#define MT6351_PMIC_RG_VCN28_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VCN28_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VCN28_EN_ADDR MT6351_LDO_VCN28_CON0
#define MT6351_PMIC_RG_VCN28_EN_MASK 0x1
#define MT6351_PMIC_RG_VCN28_EN_SHIFT 1
#define MT6351_PMIC_RG_VCN28_MODE_CTRL_ADDR MT6351_LDO_VCN28_CON0
#define MT6351_PMIC_RG_VCN28_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCN28_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VCN28_ON_CTRL_ADDR MT6351_LDO_VCN28_CON0
#define MT6351_PMIC_RG_VCN28_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCN28_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VCN28_SRCLK_MODE_SEL_ADDR MT6351_LDO_VCN28_CON0
#define MT6351_PMIC_RG_VCN28_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCN28_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VCN28_MODE_ADDR MT6351_LDO_VCN28_CON0
#define MT6351_PMIC_DA_QI_VCN28_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN28_MODE_SHIFT 8
#define MT6351_PMIC_RG_VCN28_STBTD_ADDR MT6351_LDO_VCN28_CON0
#define MT6351_PMIC_RG_VCN28_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VCN28_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VCN28_SRCLK_EN_SEL_ADDR MT6351_LDO_VCN28_CON0
#define MT6351_PMIC_RG_VCN28_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCN28_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VCN28_STB_ADDR MT6351_LDO_VCN28_CON0
#define MT6351_PMIC_DA_QI_VCN28_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN28_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VCN28_EN_ADDR MT6351_LDO_VCN28_CON0
#define MT6351_PMIC_DA_QI_VCN28_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN28_EN_SHIFT 15
#define MT6351_PMIC_RG_VCN28_OCFB_EN_ADDR MT6351_LDO_VCN28_CON1
#define MT6351_PMIC_RG_VCN28_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VCN28_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VCN28_OCFB_EN_ADDR MT6351_LDO_VCN28_CON1
#define MT6351_PMIC_DA_QI_VCN28_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN28_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_EN_ADDR MT6351_LDO_VCN28_CON2
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VCN28_CON2
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_ADDR MT6351_LDO_VCN28_CON2
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VCN28_CON2
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCN28_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VCN28_DUMMY_LOAD_ADDR MT6351_LDO_VCN28_CON2
#define MT6351_PMIC_DA_QI_VCN28_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VCN28_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VCAMA_EN_ADDR MT6351_LDO_VCAMA_CON0
#define MT6351_PMIC_RG_VCAMA_EN_MASK 0x1
#define MT6351_PMIC_RG_VCAMA_EN_SHIFT 1
#define MT6351_PMIC_RG_VCAMA_ON_CTRL_ADDR MT6351_LDO_VCAMA_CON0
#define MT6351_PMIC_RG_VCAMA_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCAMA_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VCAMA_SRCLK_MODE_SEL_ADDR MT6351_LDO_VCAMA_CON0
#define MT6351_PMIC_RG_VCAMA_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCAMA_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VCAMA_MODE_ADDR MT6351_LDO_VCAMA_CON0
#define MT6351_PMIC_DA_QI_VCAMA_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMA_MODE_SHIFT 8
#define MT6351_PMIC_RG_VCAMA_STBTD_ADDR MT6351_LDO_VCAMA_CON0
#define MT6351_PMIC_RG_VCAMA_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VCAMA_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VCAMA_SRCLK_EN_SEL_ADDR MT6351_LDO_VCAMA_CON0
#define MT6351_PMIC_RG_VCAMA_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCAMA_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VCAMA_STB_ADDR MT6351_LDO_VCAMA_CON0
#define MT6351_PMIC_DA_QI_VCAMA_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMA_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VCAMA_EN_ADDR MT6351_LDO_VCAMA_CON0
#define MT6351_PMIC_DA_QI_VCAMA_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMA_EN_SHIFT 15
#define MT6351_PMIC_RG_VCAMA_OCFB_EN_ADDR MT6351_LDO_VCAMA_CON1
#define MT6351_PMIC_RG_VCAMA_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VCAMA_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VCAMA_OCFB_EN_ADDR MT6351_LDO_VCAMA_CON1
#define MT6351_PMIC_DA_QI_VCAMA_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMA_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VUSB33_MODE_SET_ADDR MT6351_LDO_VUSB33_CON0
#define MT6351_PMIC_RG_VUSB33_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VUSB33_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VUSB33_EN_ADDR MT6351_LDO_VUSB33_CON0
#define MT6351_PMIC_RG_VUSB33_EN_MASK 0x1
#define MT6351_PMIC_RG_VUSB33_EN_SHIFT 1
#define MT6351_PMIC_RG_VUSB33_MODE_CTRL_ADDR MT6351_LDO_VUSB33_CON0
#define MT6351_PMIC_RG_VUSB33_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VUSB33_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VUSB33_ON_CTRL_ADDR MT6351_LDO_VUSB33_CON0
#define MT6351_PMIC_RG_VUSB33_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VUSB33_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VUSB33_SRCLK_MODE_SEL_ADDR MT6351_LDO_VUSB33_CON0
#define MT6351_PMIC_RG_VUSB33_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VUSB33_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VUSB33_MODE_ADDR MT6351_LDO_VUSB33_CON0
#define MT6351_PMIC_DA_QI_VUSB33_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VUSB33_MODE_SHIFT 8
#define MT6351_PMIC_RG_VUSB33_STBTD_ADDR MT6351_LDO_VUSB33_CON0
#define MT6351_PMIC_RG_VUSB33_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VUSB33_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VUSB33_SRCLK_EN_SEL_ADDR MT6351_LDO_VUSB33_CON0
#define MT6351_PMIC_RG_VUSB33_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VUSB33_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VUSB33_STB_ADDR MT6351_LDO_VUSB33_CON0
#define MT6351_PMIC_DA_QI_VUSB33_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VUSB33_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VUSB33_EN_ADDR MT6351_LDO_VUSB33_CON0
#define MT6351_PMIC_DA_QI_VUSB33_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VUSB33_EN_SHIFT 15
#define MT6351_PMIC_RG_VUSB33_OCFB_EN_ADDR MT6351_LDO_VUSB33_CON1
#define MT6351_PMIC_RG_VUSB33_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VUSB33_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VUSB33_OCFB_EN_ADDR MT6351_LDO_VUSB33_CON1
#define MT6351_PMIC_DA_QI_VUSB33_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VUSB33_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_EN_ADDR MT6351_LDO_VUSB33_CON2
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VUSB33_CON2
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_ADDR MT6351_LDO_VUSB33_CON2
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VUSB33_CON2
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VUSB33_DUMMY_LOAD_ADDR MT6351_LDO_VUSB33_CON2
#define MT6351_PMIC_DA_QI_VUSB33_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VUSB33_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VSIM1_MODE_SET_ADDR MT6351_LDO_VSIM1_CON0
#define MT6351_PMIC_RG_VSIM1_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VSIM1_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VSIM1_EN_ADDR MT6351_LDO_VSIM1_CON0
#define MT6351_PMIC_RG_VSIM1_EN_MASK 0x1
#define MT6351_PMIC_RG_VSIM1_EN_SHIFT 1
#define MT6351_PMIC_RG_VSIM1_MODE_CTRL_ADDR MT6351_LDO_VSIM1_CON0
#define MT6351_PMIC_RG_VSIM1_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VSIM1_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VSIM1_ON_CTRL_ADDR MT6351_LDO_VSIM1_CON0
#define MT6351_PMIC_RG_VSIM1_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VSIM1_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VSIM1_SRCLK_MODE_SEL_ADDR MT6351_LDO_VSIM1_CON0
#define MT6351_PMIC_RG_VSIM1_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VSIM1_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VSIM1_MODE_ADDR MT6351_LDO_VSIM1_CON0
#define MT6351_PMIC_DA_QI_VSIM1_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VSIM1_MODE_SHIFT 8
#define MT6351_PMIC_RG_VSIM1_STBTD_ADDR MT6351_LDO_VSIM1_CON0
#define MT6351_PMIC_RG_VSIM1_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VSIM1_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VSIM1_SRCLK_EN_SEL_ADDR MT6351_LDO_VSIM1_CON0
#define MT6351_PMIC_RG_VSIM1_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VSIM1_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VSIM1_STB_ADDR MT6351_LDO_VSIM1_CON0
#define MT6351_PMIC_DA_QI_VSIM1_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VSIM1_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VSIM1_EN_ADDR MT6351_LDO_VSIM1_CON0
#define MT6351_PMIC_DA_QI_VSIM1_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VSIM1_EN_SHIFT 15
#define MT6351_PMIC_RG_VSIM1_OCFB_EN_ADDR MT6351_LDO_VSIM1_CON1
#define MT6351_PMIC_RG_VSIM1_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VSIM1_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VSIM1_OCFB_EN_ADDR MT6351_LDO_VSIM1_CON1
#define MT6351_PMIC_DA_QI_VSIM1_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VSIM1_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_EN_ADDR MT6351_LDO_VSIM1_CON2
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VSIM1_CON2
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_ADDR MT6351_LDO_VSIM1_CON2
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VSIM1_CON2
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VSIM1_DUMMY_LOAD_ADDR MT6351_LDO_VSIM1_CON2
#define MT6351_PMIC_DA_QI_VSIM1_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VSIM1_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VSIM2_MODE_SET_ADDR MT6351_LDO_VSIM2_CON0
#define MT6351_PMIC_RG_VSIM2_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VSIM2_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VSIM2_EN_ADDR MT6351_LDO_VSIM2_CON0
#define MT6351_PMIC_RG_VSIM2_EN_MASK 0x1
#define MT6351_PMIC_RG_VSIM2_EN_SHIFT 1
#define MT6351_PMIC_RG_VSIM2_MODE_CTRL_ADDR MT6351_LDO_VSIM2_CON0
#define MT6351_PMIC_RG_VSIM2_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VSIM2_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VSIM2_ON_CTRL_ADDR MT6351_LDO_VSIM2_CON0
#define MT6351_PMIC_RG_VSIM2_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VSIM2_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VSIM2_SRCLK_MODE_SEL_ADDR MT6351_LDO_VSIM2_CON0
#define MT6351_PMIC_RG_VSIM2_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VSIM2_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VSIM2_MODE_ADDR MT6351_LDO_VSIM2_CON0
#define MT6351_PMIC_DA_QI_VSIM2_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VSIM2_MODE_SHIFT 8
#define MT6351_PMIC_RG_VSIM2_STBTD_ADDR MT6351_LDO_VSIM2_CON0
#define MT6351_PMIC_RG_VSIM2_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VSIM2_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VSIM2_SRCLK_EN_SEL_ADDR MT6351_LDO_VSIM2_CON0
#define MT6351_PMIC_RG_VSIM2_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VSIM2_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VSIM2_STB_ADDR MT6351_LDO_VSIM2_CON0
#define MT6351_PMIC_DA_QI_VSIM2_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VSIM2_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VSIM2_EN_ADDR MT6351_LDO_VSIM2_CON0
#define MT6351_PMIC_DA_QI_VSIM2_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VSIM2_EN_SHIFT 15
#define MT6351_PMIC_RG_VSIM2_OCFB_EN_ADDR MT6351_LDO_VSIM2_CON1
#define MT6351_PMIC_RG_VSIM2_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VSIM2_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VSIM2_OCFB_EN_ADDR MT6351_LDO_VSIM2_CON1
#define MT6351_PMIC_DA_QI_VSIM2_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VSIM2_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_EN_ADDR MT6351_LDO_VSIM2_CON2
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VSIM2_CON2
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_ADDR MT6351_LDO_VSIM2_CON2
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VSIM2_CON2
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VSIM2_DUMMY_LOAD_ADDR MT6351_LDO_VSIM2_CON2
#define MT6351_PMIC_DA_QI_VSIM2_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VSIM2_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VEMC_MODE_SET_ADDR MT6351_LDO_VEMC_CON0
#define MT6351_PMIC_RG_VEMC_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VEMC_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VEMC_EN_ADDR MT6351_LDO_VEMC_CON0
#define MT6351_PMIC_RG_VEMC_EN_MASK 0x1
#define MT6351_PMIC_RG_VEMC_EN_SHIFT 1
#define MT6351_PMIC_RG_VEMC_MODE_CTRL_ADDR MT6351_LDO_VEMC_CON0
#define MT6351_PMIC_RG_VEMC_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VEMC_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VEMC_ON_CTRL_ADDR MT6351_LDO_VEMC_CON0
#define MT6351_PMIC_RG_VEMC_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VEMC_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VEMC_SRCLK_MODE_SEL_ADDR MT6351_LDO_VEMC_CON0
#define MT6351_PMIC_RG_VEMC_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VEMC_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VEMC_MODE_ADDR MT6351_LDO_VEMC_CON0
#define MT6351_PMIC_DA_QI_VEMC_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VEMC_MODE_SHIFT 8
#define MT6351_PMIC_RG_VEMC_STBTD_ADDR MT6351_LDO_VEMC_CON0
#define MT6351_PMIC_RG_VEMC_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VEMC_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VEMC_SRCLK_EN_SEL_ADDR MT6351_LDO_VEMC_CON0
#define MT6351_PMIC_RG_VEMC_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VEMC_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VEMC_STB_ADDR MT6351_LDO_VEMC_CON0
#define MT6351_PMIC_DA_QI_VEMC_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VEMC_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VEMC_EN_ADDR MT6351_LDO_VEMC_CON0
#define MT6351_PMIC_DA_QI_VEMC_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VEMC_EN_SHIFT 15
#define MT6351_PMIC_RG_VEMC_OCFB_EN_ADDR MT6351_LDO_VEMC_CON1
#define MT6351_PMIC_RG_VEMC_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VEMC_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VEMC_OCFB_EN_ADDR MT6351_LDO_VEMC_CON1
#define MT6351_PMIC_DA_QI_VEMC_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VEMC_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_EN_ADDR MT6351_LDO_VEMC_CON2
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VEMC_CON2
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_ADDR MT6351_LDO_VEMC_CON2
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VEMC_CON2
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VEMC_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VEMC_DUMMY_LOAD_ADDR MT6351_LDO_VEMC_CON2
#define MT6351_PMIC_DA_QI_VEMC_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VEMC_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VMCH_MODE_SET_ADDR MT6351_LDO_VMCH_CON0
#define MT6351_PMIC_RG_VMCH_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VMCH_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VMCH_EN_ADDR MT6351_LDO_VMCH_CON0
#define MT6351_PMIC_RG_VMCH_EN_MASK 0x1
#define MT6351_PMIC_RG_VMCH_EN_SHIFT 1
#define MT6351_PMIC_RG_VMCH_MODE_CTRL_ADDR MT6351_LDO_VMCH_CON0
#define MT6351_PMIC_RG_VMCH_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VMCH_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VMCH_ON_CTRL_ADDR MT6351_LDO_VMCH_CON0
#define MT6351_PMIC_RG_VMCH_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VMCH_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VMCH_SRCLK_MODE_SEL_ADDR MT6351_LDO_VMCH_CON0
#define MT6351_PMIC_RG_VMCH_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VMCH_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VMCH_MODE_ADDR MT6351_LDO_VMCH_CON0
#define MT6351_PMIC_DA_QI_VMCH_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VMCH_MODE_SHIFT 8
#define MT6351_PMIC_RG_VMCH_STBTD_ADDR MT6351_LDO_VMCH_CON0
#define MT6351_PMIC_RG_VMCH_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VMCH_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VMCH_SRCLK_EN_SEL_ADDR MT6351_LDO_VMCH_CON0
#define MT6351_PMIC_RG_VMCH_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VMCH_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VMCH_STB_ADDR MT6351_LDO_VMCH_CON0
#define MT6351_PMIC_DA_QI_VMCH_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VMCH_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VMCH_EN_ADDR MT6351_LDO_VMCH_CON0
#define MT6351_PMIC_DA_QI_VMCH_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VMCH_EN_SHIFT 15
#define MT6351_PMIC_RG_VMCH_OCFB_EN_ADDR MT6351_LDO_VMCH_CON1
#define MT6351_PMIC_RG_VMCH_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VMCH_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VMCH_OCFB_EN_ADDR MT6351_LDO_VMCH_CON1
#define MT6351_PMIC_DA_QI_VMCH_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VMCH_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_EN_ADDR MT6351_LDO_VMCH_CON2
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VMCH_CON2
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_ADDR MT6351_LDO_VMCH_CON2
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VMCH_CON2
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VMCH_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VMCH_DUMMY_LOAD_ADDR MT6351_LDO_VMCH_CON2
#define MT6351_PMIC_DA_QI_VMCH_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VMCH_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VIO28_MODE_SET_ADDR MT6351_LDO_VIO28_CON0
#define MT6351_PMIC_RG_VIO28_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VIO28_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VIO28_EN_ADDR MT6351_LDO_VIO28_CON0
#define MT6351_PMIC_RG_VIO28_EN_MASK 0x1
#define MT6351_PMIC_RG_VIO28_EN_SHIFT 1
#define MT6351_PMIC_RG_VIO28_MODE_CTRL_ADDR MT6351_LDO_VIO28_CON0
#define MT6351_PMIC_RG_VIO28_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VIO28_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VIO28_ON_CTRL_ADDR MT6351_LDO_VIO28_CON0
#define MT6351_PMIC_RG_VIO28_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VIO28_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VIO28_SRCLK_MODE_SEL_ADDR MT6351_LDO_VIO28_CON0
#define MT6351_PMIC_RG_VIO28_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VIO28_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VIO28_MODE_ADDR MT6351_LDO_VIO28_CON0
#define MT6351_PMIC_DA_QI_VIO28_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VIO28_MODE_SHIFT 8
#define MT6351_PMIC_RG_VIO28_STBTD_ADDR MT6351_LDO_VIO28_CON0
#define MT6351_PMIC_RG_VIO28_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VIO28_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VIO28_SRCLK_EN_SEL_ADDR MT6351_LDO_VIO28_CON0
#define MT6351_PMIC_RG_VIO28_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VIO28_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VIO28_STB_ADDR MT6351_LDO_VIO28_CON0
#define MT6351_PMIC_DA_QI_VIO28_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VIO28_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VIO28_EN_ADDR MT6351_LDO_VIO28_CON0
#define MT6351_PMIC_DA_QI_VIO28_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VIO28_EN_SHIFT 15
#define MT6351_PMIC_RG_VIO28_OCFB_EN_ADDR MT6351_LDO_VIO28_CON1
#define MT6351_PMIC_RG_VIO28_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VIO28_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VIO28_OCFB_EN_ADDR MT6351_LDO_VIO28_CON1
#define MT6351_PMIC_DA_QI_VIO28_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VIO28_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_EN_ADDR MT6351_LDO_VIO28_CON2
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VIO28_CON2
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_ADDR MT6351_LDO_VIO28_CON2
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VIO28_CON2
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VIO28_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VIO28_DUMMY_LOAD_ADDR MT6351_LDO_VIO28_CON2
#define MT6351_PMIC_DA_QI_VIO28_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VIO28_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VIBR_MODE_SET_ADDR MT6351_LDO_VIBR_CON0
#define MT6351_PMIC_RG_VIBR_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VIBR_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VIBR_EN_ADDR MT6351_LDO_VIBR_CON0
#define MT6351_PMIC_RG_VIBR_EN_MASK 0x1
#define MT6351_PMIC_RG_VIBR_EN_SHIFT 1
#define MT6351_PMIC_RG_VIBR_MODE_CTRL_ADDR MT6351_LDO_VIBR_CON0
#define MT6351_PMIC_RG_VIBR_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VIBR_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VIBR_ON_CTRL_ADDR MT6351_LDO_VIBR_CON0
#define MT6351_PMIC_RG_VIBR_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VIBR_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VIBR_THER_SDN_EN_ADDR MT6351_LDO_VIBR_CON0
#define MT6351_PMIC_RG_VIBR_THER_SDN_EN_MASK 0x1
#define MT6351_PMIC_RG_VIBR_THER_SDN_EN_SHIFT 4
#define MT6351_PMIC_RG_VIBR_SRCLK_MODE_SEL_ADDR MT6351_LDO_VIBR_CON0
#define MT6351_PMIC_RG_VIBR_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VIBR_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VIBR_MODE_ADDR MT6351_LDO_VIBR_CON0
#define MT6351_PMIC_DA_QI_VIBR_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VIBR_MODE_SHIFT 8
#define MT6351_PMIC_RG_VIBR_STBTD_ADDR MT6351_LDO_VIBR_CON0
#define MT6351_PMIC_RG_VIBR_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VIBR_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VIBR_SRCLK_EN_SEL_ADDR MT6351_LDO_VIBR_CON0
#define MT6351_PMIC_RG_VIBR_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VIBR_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VIBR_STB_ADDR MT6351_LDO_VIBR_CON0
#define MT6351_PMIC_DA_QI_VIBR_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VIBR_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VIBR_EN_ADDR MT6351_LDO_VIBR_CON0
#define MT6351_PMIC_DA_QI_VIBR_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VIBR_EN_SHIFT 15
#define MT6351_PMIC_RG_VIBR_OCFB_EN_ADDR MT6351_LDO_VIBR_CON1
#define MT6351_PMIC_RG_VIBR_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VIBR_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VIBR_OCFB_EN_ADDR MT6351_LDO_VIBR_CON1
#define MT6351_PMIC_DA_QI_VIBR_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VIBR_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_EN_ADDR MT6351_LDO_VIBR_CON2
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VIBR_CON2
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_ADDR MT6351_LDO_VIBR_CON2
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VIBR_CON2
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VIBR_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VIBR_DUMMY_LOAD_ADDR MT6351_LDO_VIBR_CON2
#define MT6351_PMIC_DA_QI_VIBR_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VIBR_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VCAMD_MODE_SET_ADDR MT6351_LDO_VCAMD_CON0
#define MT6351_PMIC_RG_VCAMD_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VCAMD_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VCAMD_EN_ADDR MT6351_LDO_VCAMD_CON0
#define MT6351_PMIC_RG_VCAMD_EN_MASK 0x1
#define MT6351_PMIC_RG_VCAMD_EN_SHIFT 1
#define MT6351_PMIC_RG_VCAMD_MODE_CTRL_ADDR MT6351_LDO_VCAMD_CON0
#define MT6351_PMIC_RG_VCAMD_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCAMD_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VCAMD_SRCLK_MODE_SEL_ADDR MT6351_LDO_VCAMD_CON0
#define MT6351_PMIC_RG_VCAMD_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCAMD_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VCAMD_MODE_ADDR MT6351_LDO_VCAMD_CON0
#define MT6351_PMIC_DA_QI_VCAMD_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMD_MODE_SHIFT 8
#define MT6351_PMIC_RG_VCAMD_STBTD_ADDR MT6351_LDO_VCAMD_CON0
#define MT6351_PMIC_RG_VCAMD_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VCAMD_STBTD_SHIFT 9
#define MT6351_PMIC_DA_QI_VCAMD_STB_ADDR MT6351_LDO_VCAMD_CON0
#define MT6351_PMIC_DA_QI_VCAMD_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMD_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VCAMD_EN_ADDR MT6351_LDO_VCAMD_CON0
#define MT6351_PMIC_DA_QI_VCAMD_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMD_EN_SHIFT 15
#define MT6351_PMIC_RG_VCAMD_OCFB_EN_ADDR MT6351_LDO_VCAMD_CON1
#define MT6351_PMIC_RG_VCAMD_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VCAMD_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VCAMD_OCFB_EN_ADDR MT6351_LDO_VCAMD_CON1
#define MT6351_PMIC_DA_QI_VCAMD_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMD_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_EN_ADDR MT6351_LDO_VCAMD_CON2
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VCAMD_CON2
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_ADDR MT6351_LDO_VCAMD_CON2
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VCAMD_CON2
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VCAMD_DUMMY_LOAD_ADDR MT6351_LDO_VCAMD_CON2
#define MT6351_PMIC_DA_QI_VCAMD_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VCAMD_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VRF18_MODE_SET_ADDR MT6351_LDO_VRF18_CON0
#define MT6351_PMIC_RG_VRF18_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VRF18_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VRF18_EN_ADDR MT6351_LDO_VRF18_CON0
#define MT6351_PMIC_RG_VRF18_EN_MASK 0x1
#define MT6351_PMIC_RG_VRF18_EN_SHIFT 1
#define MT6351_PMIC_RG_VRF18_MODE_CTRL_ADDR MT6351_LDO_VRF18_CON0
#define MT6351_PMIC_RG_VRF18_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VRF18_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VRF18_ON_CTRL_ADDR MT6351_LDO_VRF18_CON0
#define MT6351_PMIC_RG_VRF18_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VRF18_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VRF18_SRCLK_MODE_SEL_ADDR MT6351_LDO_VRF18_CON0
#define MT6351_PMIC_RG_VRF18_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VRF18_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VRF18_MODE_ADDR MT6351_LDO_VRF18_CON0
#define MT6351_PMIC_DA_QI_VRF18_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VRF18_MODE_SHIFT 8
#define MT6351_PMIC_RG_VRF18_STBTD_ADDR MT6351_LDO_VRF18_CON0
#define MT6351_PMIC_RG_VRF18_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VRF18_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VRF18_SRCLK_EN_SEL_ADDR MT6351_LDO_VRF18_CON0
#define MT6351_PMIC_RG_VRF18_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VRF18_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VRF18_STB_ADDR MT6351_LDO_VRF18_CON0
#define MT6351_PMIC_DA_QI_VRF18_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VRF18_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VRF18_EN_ADDR MT6351_LDO_VRF18_CON0
#define MT6351_PMIC_DA_QI_VRF18_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VRF18_EN_SHIFT 15
#define MT6351_PMIC_RG_VRF18_OCFB_EN_ADDR MT6351_LDO_VRF18_CON1
#define MT6351_PMIC_RG_VRF18_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VRF18_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VRF18_OCFB_EN_ADDR MT6351_LDO_VRF18_CON1
#define MT6351_PMIC_DA_QI_VRF18_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VRF18_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_EN_ADDR MT6351_LDO_VRF18_CON2
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VRF18_CON2
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_ADDR MT6351_LDO_VRF18_CON2
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VRF18_CON2
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VRF18_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VRF18_DUMMY_LOAD_ADDR MT6351_LDO_VRF18_CON2
#define MT6351_PMIC_DA_QI_VRF18_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VRF18_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VIO18_MODE_SET_ADDR MT6351_LDO_VIO18_CON0
#define MT6351_PMIC_RG_VIO18_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VIO18_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VIO18_EN_ADDR MT6351_LDO_VIO18_CON0
#define MT6351_PMIC_RG_VIO18_EN_MASK 0x1
#define MT6351_PMIC_RG_VIO18_EN_SHIFT 1
#define MT6351_PMIC_RG_VIO18_MODE_CTRL_ADDR MT6351_LDO_VIO18_CON0
#define MT6351_PMIC_RG_VIO18_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VIO18_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VIO18_ON_CTRL_ADDR MT6351_LDO_VIO18_CON0
#define MT6351_PMIC_RG_VIO18_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VIO18_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VIO18_SRCLK_MODE_SEL_ADDR MT6351_LDO_VIO18_CON0
#define MT6351_PMIC_RG_VIO18_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VIO18_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VIO18_MODE_ADDR MT6351_LDO_VIO18_CON0
#define MT6351_PMIC_DA_QI_VIO18_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VIO18_MODE_SHIFT 8
#define MT6351_PMIC_RG_VIO18_STBTD_ADDR MT6351_LDO_VIO18_CON0
#define MT6351_PMIC_RG_VIO18_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VIO18_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VIO18_SRCLK_EN_SEL_ADDR MT6351_LDO_VIO18_CON0
#define MT6351_PMIC_RG_VIO18_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VIO18_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VIO18_STB_ADDR MT6351_LDO_VIO18_CON0
#define MT6351_PMIC_DA_QI_VIO18_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VIO18_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VIO18_EN_ADDR MT6351_LDO_VIO18_CON0
#define MT6351_PMIC_DA_QI_VIO18_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VIO18_EN_SHIFT 15
#define MT6351_PMIC_RG_VIO18_OCFB_EN_ADDR MT6351_LDO_VIO18_CON1
#define MT6351_PMIC_RG_VIO18_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VIO18_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VIO18_OCFB_EN_ADDR MT6351_LDO_VIO18_CON1
#define MT6351_PMIC_DA_QI_VIO18_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VIO18_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_EN_ADDR MT6351_LDO_VIO18_CON2
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VIO18_CON2
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_ADDR MT6351_LDO_VIO18_CON2
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VIO18_CON2
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VIO18_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VIO18_DUMMY_LOAD_ADDR MT6351_LDO_VIO18_CON2
#define MT6351_PMIC_DA_QI_VIO18_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VIO18_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VCN18_MODE_SET_ADDR MT6351_LDO_VCN18_CON0
#define MT6351_PMIC_RG_VCN18_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VCN18_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VCN18_EN_ADDR MT6351_LDO_VCN18_CON0
#define MT6351_PMIC_RG_VCN18_EN_MASK 0x1
#define MT6351_PMIC_RG_VCN18_EN_SHIFT 1
#define MT6351_PMIC_RG_VCN18_MODE_CTRL_ADDR MT6351_LDO_VCN18_CON0
#define MT6351_PMIC_RG_VCN18_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCN18_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VCN18_ON_CTRL_ADDR MT6351_LDO_VCN18_CON0
#define MT6351_PMIC_RG_VCN18_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCN18_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VCN18_SRCLK_MODE_SEL_ADDR MT6351_LDO_VCN18_CON0
#define MT6351_PMIC_RG_VCN18_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCN18_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VCN18_MODE_ADDR MT6351_LDO_VCN18_CON0
#define MT6351_PMIC_DA_QI_VCN18_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN18_MODE_SHIFT 8
#define MT6351_PMIC_RG_VCN18_STBTD_ADDR MT6351_LDO_VCN18_CON0
#define MT6351_PMIC_RG_VCN18_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VCN18_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VCN18_SRCLK_EN_SEL_ADDR MT6351_LDO_VCN18_CON0
#define MT6351_PMIC_RG_VCN18_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCN18_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VCN18_STB_ADDR MT6351_LDO_VCN18_CON0
#define MT6351_PMIC_DA_QI_VCN18_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN18_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VCN18_EN_ADDR MT6351_LDO_VCN18_CON0
#define MT6351_PMIC_DA_QI_VCN18_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN18_EN_SHIFT 15
#define MT6351_PMIC_RG_VCN18_OCFB_EN_ADDR MT6351_LDO_VCN18_CON1
#define MT6351_PMIC_RG_VCN18_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VCN18_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VCN18_OCFB_EN_ADDR MT6351_LDO_VCN18_CON1
#define MT6351_PMIC_DA_QI_VCN18_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN18_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_EN_ADDR MT6351_LDO_VCN18_CON2
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VCN18_CON2
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_ADDR MT6351_LDO_VCN18_CON2
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VCN18_CON2
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCN18_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VCN18_DUMMY_LOAD_ADDR MT6351_LDO_VCN18_CON2
#define MT6351_PMIC_DA_QI_VCN18_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VCN18_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VCAMIO_MODE_SET_ADDR MT6351_LDO_VCAMIO_CON0
#define MT6351_PMIC_RG_VCAMIO_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VCAMIO_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VCAMIO_EN_ADDR MT6351_LDO_VCAMIO_CON0
#define MT6351_PMIC_RG_VCAMIO_EN_MASK 0x1
#define MT6351_PMIC_RG_VCAMIO_EN_SHIFT 1
#define MT6351_PMIC_RG_VCAMIO_MODE_CTRL_ADDR MT6351_LDO_VCAMIO_CON0
#define MT6351_PMIC_RG_VCAMIO_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCAMIO_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VCAMIO_SRCLK_MODE_SEL_ADDR MT6351_LDO_VCAMIO_CON0
#define MT6351_PMIC_RG_VCAMIO_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCAMIO_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VCAMIO_MODE_ADDR MT6351_LDO_VCAMIO_CON0
#define MT6351_PMIC_DA_QI_VCAMIO_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMIO_MODE_SHIFT 8
#define MT6351_PMIC_RG_VCAMIO_STBTD_ADDR MT6351_LDO_VCAMIO_CON0
#define MT6351_PMIC_RG_VCAMIO_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VCAMIO_STBTD_SHIFT 9
#define MT6351_PMIC_DA_QI_VCAMIO_STB_ADDR MT6351_LDO_VCAMIO_CON0
#define MT6351_PMIC_DA_QI_VCAMIO_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMIO_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VCAMIO_EN_ADDR MT6351_LDO_VCAMIO_CON0
#define MT6351_PMIC_DA_QI_VCAMIO_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMIO_EN_SHIFT 15
#define MT6351_PMIC_RG_VCAMIO_OCFB_EN_ADDR MT6351_LDO_VCAMIO_CON1
#define MT6351_PMIC_RG_VCAMIO_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VCAMIO_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VCAMIO_OCFB_EN_ADDR MT6351_LDO_VCAMIO_CON1
#define MT6351_PMIC_DA_QI_VCAMIO_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCAMIO_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_EN_ADDR MT6351_LDO_VCAMIO_CON2
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VCAMIO_CON2
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_ADDR MT6351_LDO_VCAMIO_CON2
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VCAMIO_CON2
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VCAMIO_DUMMY_LOAD_ADDR MT6351_LDO_VCAMIO_CON2
#define MT6351_PMIC_DA_QI_VCAMIO_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VCAMIO_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VSRAM_PROC_MODE_SET_ADDR MT6351_LDO_VSRAM_PROC_CON0
#define MT6351_PMIC_RG_VSRAM_PROC_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_PROC_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_PROC_EN_ADDR MT6351_LDO_VSRAM_PROC_CON0
#define MT6351_PMIC_RG_VSRAM_PROC_EN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_PROC_EN_SHIFT 1
#define MT6351_PMIC_RG_VSRAM_PROC_MODE_CTRL_ADDR MT6351_LDO_VSRAM_PROC_CON0
#define MT6351_PMIC_RG_VSRAM_PROC_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_PROC_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VSRAM_PROC_ON_CTRL_ADDR MT6351_LDO_VSRAM_PROC_CON0
#define MT6351_PMIC_RG_VSRAM_PROC_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_PROC_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VSRAM_PROC_SRCLK_MODE_SEL_ADDR MT6351_LDO_VSRAM_PROC_CON0
#define MT6351_PMIC_RG_VSRAM_PROC_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_PROC_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VSRAM_PROC_MODE_ADDR MT6351_LDO_VSRAM_PROC_CON0
#define MT6351_PMIC_DA_QI_VSRAM_PROC_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VSRAM_PROC_MODE_SHIFT 8
#define MT6351_PMIC_RG_VSRAM_PROC_STBTD_ADDR MT6351_LDO_VSRAM_PROC_CON0
#define MT6351_PMIC_RG_VSRAM_PROC_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_PROC_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VSRAM_PROC_SRCLK_EN_SEL_ADDR MT6351_LDO_VSRAM_PROC_CON0
#define MT6351_PMIC_RG_VSRAM_PROC_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_PROC_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VSRAM_PROC_STB_ADDR MT6351_LDO_VSRAM_PROC_CON0
#define MT6351_PMIC_DA_QI_VSRAM_PROC_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VSRAM_PROC_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VSRAM_PROC_EN_ADDR MT6351_LDO_VSRAM_PROC_CON0
#define MT6351_PMIC_DA_QI_VSRAM_PROC_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VSRAM_PROC_EN_SHIFT 15
#define MT6351_PMIC_RG_VSRAM_PROC_OCFB_EN_ADDR MT6351_LDO_VSRAM_PROC_CON1
#define MT6351_PMIC_RG_VSRAM_PROC_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_PROC_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VSRAM_PROC_OCFB_EN_ADDR MT6351_LDO_VSRAM_PROC_CON1
#define MT6351_PMIC_DA_QI_VSRAM_PROC_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VSRAM_PROC_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_EN_ADDR MT6351_LDO_VSRAM_PROC_CON2
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_CTRL_ADDR                         \
	MT6351_LDO_VSRAM_PROC_CON2
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_ADDR MT6351_LDO_VSRAM_PROC_CON2
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_SRCLKEN_SEL_ADDR                  \
	MT6351_LDO_VSRAM_PROC_CON2
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VSRAM_PROC_DUMMY_LOAD_ADDR MT6351_LDO_VSRAM_PROC_CON2
#define MT6351_PMIC_DA_QI_VSRAM_PROC_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VSRAM_PROC_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VXO22_MODE_SET_ADDR MT6351_LDO_VXO22_CON0
#define MT6351_PMIC_RG_VXO22_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VXO22_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VXO22_EN_ADDR MT6351_LDO_VXO22_CON0
#define MT6351_PMIC_RG_VXO22_EN_MASK 0x1
#define MT6351_PMIC_RG_VXO22_EN_SHIFT 1
#define MT6351_PMIC_RG_VXO22_MODE_CTRL_ADDR MT6351_LDO_VXO22_CON0
#define MT6351_PMIC_RG_VXO22_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VXO22_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VXO22_ON_CTRL_ADDR MT6351_LDO_VXO22_CON0
#define MT6351_PMIC_RG_VXO22_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VXO22_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VXO22_SWITCH_ADDR MT6351_LDO_VXO22_CON0
#define MT6351_PMIC_RG_VXO22_SWITCH_MASK 0x1
#define MT6351_PMIC_RG_VXO22_SWITCH_SHIFT 4
#define MT6351_PMIC_RG_VXO22_SRCLK_MODE_SEL_ADDR MT6351_LDO_VXO22_CON0
#define MT6351_PMIC_RG_VXO22_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VXO22_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VXO22_MODE_ADDR MT6351_LDO_VXO22_CON0
#define MT6351_PMIC_DA_QI_VXO22_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VXO22_MODE_SHIFT 8
#define MT6351_PMIC_RG_VXO22_STBTD_ADDR MT6351_LDO_VXO22_CON0
#define MT6351_PMIC_RG_VXO22_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VXO22_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VXO22_SRCLK_EN_SEL_ADDR MT6351_LDO_VXO22_CON0
#define MT6351_PMIC_RG_VXO22_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VXO22_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VXO22_STB_ADDR MT6351_LDO_VXO22_CON0
#define MT6351_PMIC_DA_QI_VXO22_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VXO22_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VXO22_EN_ADDR MT6351_LDO_VXO22_CON0
#define MT6351_PMIC_DA_QI_VXO22_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VXO22_EN_SHIFT 15
#define MT6351_PMIC_RG_VXO22_OCFB_EN_ADDR MT6351_LDO_VXO22_CON1
#define MT6351_PMIC_RG_VXO22_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VXO22_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VXO22_OCFB_EN_ADDR MT6351_LDO_VXO22_CON1
#define MT6351_PMIC_DA_QI_VXO22_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VXO22_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VRF12_MODE_SET_ADDR MT6351_LDO_VRF12_CON0
#define MT6351_PMIC_RG_VRF12_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VRF12_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VRF12_EN_ADDR MT6351_LDO_VRF12_CON0
#define MT6351_PMIC_RG_VRF12_EN_MASK 0x1
#define MT6351_PMIC_RG_VRF12_EN_SHIFT 1
#define MT6351_PMIC_RG_VRF12_MODE_CTRL_ADDR MT6351_LDO_VRF12_CON0
#define MT6351_PMIC_RG_VRF12_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VRF12_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VRF12_ON_CTRL_ADDR MT6351_LDO_VRF12_CON0
#define MT6351_PMIC_RG_VRF12_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VRF12_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VRF12_SRCLK_MODE_SEL_ADDR MT6351_LDO_VRF12_CON0
#define MT6351_PMIC_RG_VRF12_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VRF12_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VRF12_MODE_ADDR MT6351_LDO_VRF12_CON0
#define MT6351_PMIC_DA_QI_VRF12_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VRF12_MODE_SHIFT 8
#define MT6351_PMIC_RG_VRF12_STBTD_ADDR MT6351_LDO_VRF12_CON0
#define MT6351_PMIC_RG_VRF12_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VRF12_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VRF12_SRCLK_EN_SEL_ADDR MT6351_LDO_VRF12_CON0
#define MT6351_PMIC_RG_VRF12_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VRF12_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VRF12_STB_ADDR MT6351_LDO_VRF12_CON0
#define MT6351_PMIC_DA_QI_VRF12_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VRF12_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VRF12_EN_ADDR MT6351_LDO_VRF12_CON0
#define MT6351_PMIC_DA_QI_VRF12_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VRF12_EN_SHIFT 15
#define MT6351_PMIC_RG_VRF12_OCFB_EN_ADDR MT6351_LDO_VRF12_CON1
#define MT6351_PMIC_RG_VRF12_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VRF12_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VRF12_OCFB_EN_ADDR MT6351_LDO_VRF12_CON1
#define MT6351_PMIC_DA_QI_VRF12_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VRF12_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_EN_ADDR MT6351_LDO_VRF12_CON2
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VRF12_CON2
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_ADDR MT6351_LDO_VRF12_CON2
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VRF12_CON2
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VRF12_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VRF12_DUMMY_LOAD_ADDR MT6351_LDO_VRF12_CON2
#define MT6351_PMIC_DA_QI_VRF12_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VRF12_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VA10_MODE_SET_ADDR MT6351_LDO_VA10_CON0
#define MT6351_PMIC_RG_VA10_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VA10_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VA10_EN_ADDR MT6351_LDO_VA10_CON0
#define MT6351_PMIC_RG_VA10_EN_MASK 0x1
#define MT6351_PMIC_RG_VA10_EN_SHIFT 1
#define MT6351_PMIC_RG_VA10_MODE_CTRL_ADDR MT6351_LDO_VA10_CON0
#define MT6351_PMIC_RG_VA10_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VA10_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VA10_ON_CTRL_ADDR MT6351_LDO_VA10_CON0
#define MT6351_PMIC_RG_VA10_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VA10_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VA10_SRCLK_MODE_SEL_ADDR MT6351_LDO_VA10_CON0
#define MT6351_PMIC_RG_VA10_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VA10_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VA10_MODE_ADDR MT6351_LDO_VA10_CON0
#define MT6351_PMIC_DA_QI_VA10_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VA10_MODE_SHIFT 8
#define MT6351_PMIC_RG_VA10_STBTD_ADDR MT6351_LDO_VA10_CON0
#define MT6351_PMIC_RG_VA10_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VA10_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VA10_SRCLK_EN_SEL_ADDR MT6351_LDO_VA10_CON0
#define MT6351_PMIC_RG_VA10_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VA10_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VA10_STB_ADDR MT6351_LDO_VA10_CON0
#define MT6351_PMIC_DA_QI_VA10_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VA10_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VA10_EN_ADDR MT6351_LDO_VA10_CON0
#define MT6351_PMIC_DA_QI_VA10_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VA10_EN_SHIFT 15
#define MT6351_PMIC_RG_VA10_OCFB_EN_ADDR MT6351_LDO_VA10_CON1
#define MT6351_PMIC_RG_VA10_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VA10_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VA10_OCFB_EN_ADDR MT6351_LDO_VA10_CON1
#define MT6351_PMIC_DA_QI_VA10_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VA10_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_EN_ADDR MT6351_LDO_VA10_CON2
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VA10_CON2
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_ADDR MT6351_LDO_VA10_CON2
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VA10_CON2
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VA10_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VA10_DUMMY_LOAD_ADDR MT6351_LDO_VA10_CON2
#define MT6351_PMIC_DA_QI_VA10_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VA10_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VDRAM_MODE_SET_ADDR MT6351_LDO_VDRAM_CON0
#define MT6351_PMIC_RG_VDRAM_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VDRAM_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VDRAM_EN_ADDR MT6351_LDO_VDRAM_CON0
#define MT6351_PMIC_RG_VDRAM_EN_MASK 0x1
#define MT6351_PMIC_RG_VDRAM_EN_SHIFT 1
#define MT6351_PMIC_RG_VDRAM_MODE_CTRL_ADDR MT6351_LDO_VDRAM_CON0
#define MT6351_PMIC_RG_VDRAM_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VDRAM_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VDRAM_ON_CTRL_ADDR MT6351_LDO_VDRAM_CON0
#define MT6351_PMIC_RG_VDRAM_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VDRAM_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VDRAM_SRCLK_MODE_SEL_ADDR MT6351_LDO_VDRAM_CON0
#define MT6351_PMIC_RG_VDRAM_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VDRAM_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VDRAM_MODE_ADDR MT6351_LDO_VDRAM_CON0
#define MT6351_PMIC_DA_QI_VDRAM_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VDRAM_MODE_SHIFT 8
#define MT6351_PMIC_RG_VDRAM_STBTD_ADDR MT6351_LDO_VDRAM_CON0
#define MT6351_PMIC_RG_VDRAM_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VDRAM_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VDRAM_SRCLK_EN_SEL_ADDR MT6351_LDO_VDRAM_CON0
#define MT6351_PMIC_RG_VDRAM_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VDRAM_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VDRAM_STB_ADDR MT6351_LDO_VDRAM_CON0
#define MT6351_PMIC_DA_QI_VDRAM_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VDRAM_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VDRAM_EN_ADDR MT6351_LDO_VDRAM_CON0
#define MT6351_PMIC_DA_QI_VDRAM_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VDRAM_EN_SHIFT 15
#define MT6351_PMIC_RG_VDRAM_OCFB_EN_ADDR MT6351_LDO_VDRAM_CON1
#define MT6351_PMIC_RG_VDRAM_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VDRAM_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VDRAM_OCFB_EN_ADDR MT6351_LDO_VDRAM_CON1
#define MT6351_PMIC_DA_QI_VDRAM_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VDRAM_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_EN_ADDR MT6351_LDO_VDRAM_CON2
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VDRAM_CON2
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_ADDR MT6351_LDO_VDRAM_CON2
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VDRAM_CON2
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VDRAM_DUMMY_LOAD_ADDR MT6351_LDO_VDRAM_CON2
#define MT6351_PMIC_DA_QI_VDRAM_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VDRAM_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VMIPI_MODE_SET_ADDR MT6351_LDO_VMIPI_CON0
#define MT6351_PMIC_RG_VMIPI_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VMIPI_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VMIPI_EN_ADDR MT6351_LDO_VMIPI_CON0
#define MT6351_PMIC_RG_VMIPI_EN_MASK 0x1
#define MT6351_PMIC_RG_VMIPI_EN_SHIFT 1
#define MT6351_PMIC_RG_VMIPI_MODE_CTRL_ADDR MT6351_LDO_VMIPI_CON0
#define MT6351_PMIC_RG_VMIPI_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VMIPI_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VMIPI_ON_CTRL_ADDR MT6351_LDO_VMIPI_CON0
#define MT6351_PMIC_RG_VMIPI_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VMIPI_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VMIPI_SRCLK_MODE_SEL_ADDR MT6351_LDO_VMIPI_CON0
#define MT6351_PMIC_RG_VMIPI_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VMIPI_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VMIPI_MODE_ADDR MT6351_LDO_VMIPI_CON0
#define MT6351_PMIC_DA_QI_VMIPI_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VMIPI_MODE_SHIFT 8
#define MT6351_PMIC_RG_VMIPI_STBTD_ADDR MT6351_LDO_VMIPI_CON0
#define MT6351_PMIC_RG_VMIPI_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VMIPI_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VMIPI_SRCLK_EN_SEL_ADDR MT6351_LDO_VMIPI_CON0
#define MT6351_PMIC_RG_VMIPI_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VMIPI_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VMIPI_STB_ADDR MT6351_LDO_VMIPI_CON0
#define MT6351_PMIC_DA_QI_VMIPI_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VMIPI_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VMIPI_EN_ADDR MT6351_LDO_VMIPI_CON0
#define MT6351_PMIC_DA_QI_VMIPI_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VMIPI_EN_SHIFT 15
#define MT6351_PMIC_RG_VMIPI_OCFB_EN_ADDR MT6351_LDO_VMIPI_CON1
#define MT6351_PMIC_RG_VMIPI_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VMIPI_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VMIPI_OCFB_EN_ADDR MT6351_LDO_VMIPI_CON1
#define MT6351_PMIC_DA_QI_VMIPI_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VMIPI_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_EN_ADDR MT6351_LDO_VMIPI_CON2
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VMIPI_CON2
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_ADDR MT6351_LDO_VMIPI_CON2
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VMIPI_CON2
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VMIPI_DUMMY_LOAD_ADDR MT6351_LDO_VMIPI_CON2
#define MT6351_PMIC_DA_QI_VMIPI_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VMIPI_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VGP3_MODE_SET_ADDR MT6351_LDO_VGP3_CON0
#define MT6351_PMIC_RG_VGP3_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VGP3_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VGP3_EN_ADDR MT6351_LDO_VGP3_CON0
#define MT6351_PMIC_RG_VGP3_EN_MASK 0x1
#define MT6351_PMIC_RG_VGP3_EN_SHIFT 1
#define MT6351_PMIC_RG_VGP3_MODE_CTRL_ADDR MT6351_LDO_VGP3_CON0
#define MT6351_PMIC_RG_VGP3_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VGP3_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VGP3_ON_CTRL_ADDR MT6351_LDO_VGP3_CON0
#define MT6351_PMIC_RG_VGP3_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VGP3_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VGP3_SRCLK_MODE_SEL_ADDR MT6351_LDO_VGP3_CON0
#define MT6351_PMIC_RG_VGP3_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VGP3_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VGP3_MODE_ADDR MT6351_LDO_VGP3_CON0
#define MT6351_PMIC_DA_QI_VGP3_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VGP3_MODE_SHIFT 8
#define MT6351_PMIC_RG_VGP3_STBTD_ADDR MT6351_LDO_VGP3_CON0
#define MT6351_PMIC_RG_VGP3_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VGP3_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VGP3_SRCLK_EN_SEL_ADDR MT6351_LDO_VGP3_CON0
#define MT6351_PMIC_RG_VGP3_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VGP3_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VGP3_STB_ADDR MT6351_LDO_VGP3_CON0
#define MT6351_PMIC_DA_QI_VGP3_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VGP3_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VGP3_EN_ADDR MT6351_LDO_VGP3_CON0
#define MT6351_PMIC_DA_QI_VGP3_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VGP3_EN_SHIFT 15
#define MT6351_PMIC_RG_VGP3_OCFB_EN_ADDR MT6351_LDO_VGP3_CON1
#define MT6351_PMIC_RG_VGP3_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VGP3_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VGP3_OCFB_EN_ADDR MT6351_LDO_VGP3_CON1
#define MT6351_PMIC_DA_QI_VGP3_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VGP3_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_EN_ADDR MT6351_LDO_VGP3_CON2
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VGP3_CON2
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_ADDR MT6351_LDO_VGP3_CON2
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VGP3_CON2
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VGP3_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VGP3_DUMMY_LOAD_ADDR MT6351_LDO_VGP3_CON2
#define MT6351_PMIC_DA_QI_VGP3_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VGP3_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VBIF28_MODE_SET_ADDR MT6351_LDO_VBIF28_CON0
#define MT6351_PMIC_RG_VBIF28_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VBIF28_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VBIF28_EN_ADDR MT6351_LDO_VBIF28_CON0
#define MT6351_PMIC_RG_VBIF28_EN_MASK 0x1
#define MT6351_PMIC_RG_VBIF28_EN_SHIFT 1
#define MT6351_PMIC_RG_VBIF28_MODE_CTRL_ADDR MT6351_LDO_VBIF28_CON0
#define MT6351_PMIC_RG_VBIF28_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VBIF28_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VBIF28_ON_CTRL_ADDR MT6351_LDO_VBIF28_CON0
#define MT6351_PMIC_RG_VBIF28_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VBIF28_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VBIF28_SRCLK_MODE_SEL_ADDR MT6351_LDO_VBIF28_CON0
#define MT6351_PMIC_RG_VBIF28_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VBIF28_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VBIF28_MODE_ADDR MT6351_LDO_VBIF28_CON0
#define MT6351_PMIC_DA_QI_VBIF28_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VBIF28_MODE_SHIFT 8
#define MT6351_PMIC_RG_VBIF28_STBTD_ADDR MT6351_LDO_VBIF28_CON0
#define MT6351_PMIC_RG_VBIF28_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VBIF28_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VBIF28_SRCLK_EN_SEL_ADDR MT6351_LDO_VBIF28_CON0
#define MT6351_PMIC_RG_VBIF28_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VBIF28_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VBIF28_STB_ADDR MT6351_LDO_VBIF28_CON0
#define MT6351_PMIC_DA_QI_VBIF28_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VBIF28_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VBIF28_EN_ADDR MT6351_LDO_VBIF28_CON0
#define MT6351_PMIC_DA_QI_VBIF28_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VBIF28_EN_SHIFT 15
#define MT6351_PMIC_RG_VBIF28_OCFB_EN_ADDR MT6351_LDO_VBIF28_CON1
#define MT6351_PMIC_RG_VBIF28_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VBIF28_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VBIF28_OCFB_EN_ADDR MT6351_LDO_VBIF28_CON1
#define MT6351_PMIC_DA_QI_VBIF28_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VBIF28_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_EN_ADDR MT6351_LDO_VBIF28_CON2
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VBIF28_CON2
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_ADDR MT6351_LDO_VBIF28_CON2
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VBIF28_CON2
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VBIF28_DUMMY_LOAD_ADDR MT6351_LDO_VBIF28_CON2
#define MT6351_PMIC_DA_QI_VBIF28_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VBIF28_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VEFUSE_MODE_SET_ADDR MT6351_LDO_VEFUSE_CON0
#define MT6351_PMIC_RG_VEFUSE_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VEFUSE_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VEFUSE_EN_ADDR MT6351_LDO_VEFUSE_CON0
#define MT6351_PMIC_RG_VEFUSE_EN_MASK 0x1
#define MT6351_PMIC_RG_VEFUSE_EN_SHIFT 1
#define MT6351_PMIC_RG_VEFUSE_MODE_CTRL_ADDR MT6351_LDO_VEFUSE_CON0
#define MT6351_PMIC_RG_VEFUSE_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VEFUSE_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VEFUSE_SRCLK_MODE_SEL_ADDR MT6351_LDO_VEFUSE_CON0
#define MT6351_PMIC_RG_VEFUSE_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VEFUSE_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VEFUSE_MODE_ADDR MT6351_LDO_VEFUSE_CON0
#define MT6351_PMIC_DA_QI_VEFUSE_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VEFUSE_MODE_SHIFT 8
#define MT6351_PMIC_RG_VEFUSE_STBTD_ADDR MT6351_LDO_VEFUSE_CON0
#define MT6351_PMIC_RG_VEFUSE_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VEFUSE_STBTD_SHIFT 9
#define MT6351_PMIC_DA_QI_VEFUSE_STB_ADDR MT6351_LDO_VEFUSE_CON0
#define MT6351_PMIC_DA_QI_VEFUSE_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VEFUSE_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VEFUSE_EN_ADDR MT6351_LDO_VEFUSE_CON0
#define MT6351_PMIC_DA_QI_VEFUSE_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VEFUSE_EN_SHIFT 15
#define MT6351_PMIC_RG_VEFUSE_OCFB_EN_ADDR MT6351_LDO_VEFUSE_CON1
#define MT6351_PMIC_RG_VEFUSE_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VEFUSE_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VEFUSE_OCFB_EN_ADDR MT6351_LDO_VEFUSE_CON1
#define MT6351_PMIC_DA_QI_VEFUSE_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VEFUSE_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_EN_ADDR MT6351_LDO_VEFUSE_CON2
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VEFUSE_CON2
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_ADDR MT6351_LDO_VEFUSE_CON2
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VEFUSE_CON2
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VEFUSE_DUMMY_LOAD_ADDR MT6351_LDO_VEFUSE_CON2
#define MT6351_PMIC_DA_QI_VEFUSE_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VEFUSE_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VCN33_MODE_SET_ADDR MT6351_LDO_VCN33_CON0
#define MT6351_PMIC_RG_VCN33_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VCN33_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VCN33_MODE_CTRL_ADDR MT6351_LDO_VCN33_CON0
#define MT6351_PMIC_RG_VCN33_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCN33_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VCN33_SRCLK_MODE_SEL_ADDR MT6351_LDO_VCN33_CON0
#define MT6351_PMIC_RG_VCN33_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCN33_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VCN33_MODE_ADDR MT6351_LDO_VCN33_CON0
#define MT6351_PMIC_DA_QI_VCN33_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN33_MODE_SHIFT 8
#define MT6351_PMIC_RG_VCN33_STBTD_ADDR MT6351_LDO_VCN33_CON0
#define MT6351_PMIC_RG_VCN33_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VCN33_STBTD_SHIFT 9
#define MT6351_PMIC_DA_QI_VCN33_STB_ADDR MT6351_LDO_VCN33_CON0
#define MT6351_PMIC_DA_QI_VCN33_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN33_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VCN33_EN_ADDR MT6351_LDO_VCN33_CON0
#define MT6351_PMIC_DA_QI_VCN33_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN33_EN_SHIFT 15
#define MT6351_PMIC_RG_VCN33_OCFB_EN_ADDR MT6351_LDO_VCN33_CON1
#define MT6351_PMIC_RG_VCN33_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VCN33_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VCN33_OCFB_EN_ADDR MT6351_LDO_VCN33_CON1
#define MT6351_PMIC_DA_QI_VCN33_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VCN33_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_EN_ADDR MT6351_LDO_VCN33_CON2
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VCN33_CON2
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_ADDR MT6351_LDO_VCN33_CON2
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VCN33_CON2
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VCN33_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VCN33_DUMMY_LOAD_ADDR MT6351_LDO_VCN33_CON2
#define MT6351_PMIC_DA_QI_VCN33_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VCN33_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VCN33_EN_BT_ADDR MT6351_LDO_VCN33_CON3
#define MT6351_PMIC_RG_VCN33_EN_BT_MASK 0x1
#define MT6351_PMIC_RG_VCN33_EN_BT_SHIFT 1
#define MT6351_PMIC_RG_VCN33_ON_CTRL_BT_ADDR MT6351_LDO_VCN33_CON3
#define MT6351_PMIC_RG_VCN33_ON_CTRL_BT_MASK 0x1
#define MT6351_PMIC_RG_VCN33_ON_CTRL_BT_SHIFT 3
#define MT6351_PMIC_RG_VCN33_SRCLK_EN_SEL_BT_ADDR MT6351_LDO_VCN33_CON3
#define MT6351_PMIC_RG_VCN33_SRCLK_EN_SEL_BT_MASK 0x7
#define MT6351_PMIC_RG_VCN33_SRCLK_EN_SEL_BT_SHIFT 11
#define MT6351_PMIC_RG_VCN33_EN_WIFI_ADDR MT6351_LDO_VCN33_CON4
#define MT6351_PMIC_RG_VCN33_EN_WIFI_MASK 0x1
#define MT6351_PMIC_RG_VCN33_EN_WIFI_SHIFT 1
#define MT6351_PMIC_RG_VCN33_ON_CTRL_WIFI_ADDR MT6351_LDO_VCN33_CON4
#define MT6351_PMIC_RG_VCN33_ON_CTRL_WIFI_MASK 0x1
#define MT6351_PMIC_RG_VCN33_ON_CTRL_WIFI_SHIFT 3
#define MT6351_PMIC_RG_VCN33_SRCLK_EN_SEL_WIFI_ADDR MT6351_LDO_VCN33_CON4
#define MT6351_PMIC_RG_VCN33_SRCLK_EN_SEL_WIFI_MASK 0x7
#define MT6351_PMIC_RG_VCN33_SRCLK_EN_SEL_WIFI_SHIFT 11
#define MT6351_PMIC_RG_VLDO28_MODE_SET_ADDR MT6351_LDO_VLDO28_CON0
#define MT6351_PMIC_RG_VLDO28_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VLDO28_MODE_CTRL_ADDR MT6351_LDO_VLDO28_CON0
#define MT6351_PMIC_RG_VLDO28_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VLDO28_ON_CTRL_ADDR MT6351_LDO_VLDO28_CON0
#define MT6351_PMIC_RG_VLDO28_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VLDO28_SRCLK_MODE_SEL_ADDR MT6351_LDO_VLDO28_CON0
#define MT6351_PMIC_RG_VLDO28_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VLDO28_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VLDO28_MODE_ADDR MT6351_LDO_VLDO28_CON0
#define MT6351_PMIC_DA_QI_VLDO28_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VLDO28_MODE_SHIFT 8
#define MT6351_PMIC_RG_VLDO28_STBTD_ADDR MT6351_LDO_VLDO28_CON0
#define MT6351_PMIC_RG_VLDO28_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VLDO28_STBTD_SHIFT 9
#define MT6351_PMIC_DA_QI_VLDO28_STB_ADDR MT6351_LDO_VLDO28_CON0
#define MT6351_PMIC_DA_QI_VLDO28_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VLDO28_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VLDO28_EN_ADDR MT6351_LDO_VLDO28_CON0
#define MT6351_PMIC_DA_QI_VLDO28_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VLDO28_EN_SHIFT 15
#define MT6351_PMIC_RG_VLDO28_OCFB_EN_ADDR MT6351_LDO_VLDO28_CON1
#define MT6351_PMIC_RG_VLDO28_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VLDO28_OCFB_EN_ADDR MT6351_LDO_VLDO28_CON1
#define MT6351_PMIC_DA_QI_VLDO28_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VLDO28_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_EN_ADDR MT6351_LDO_VLDO28_CON2
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VLDO28_CON2
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_ADDR MT6351_LDO_VLDO28_CON2
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VLDO28_CON2
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VLDO28_DUMMY_LOAD_ADDR MT6351_LDO_VLDO28_CON2
#define MT6351_PMIC_DA_QI_VLDO28_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VLDO28_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VLDO28_EN_0_ADDR MT6351_LDO_VLDO28_CON3
#define MT6351_PMIC_RG_VLDO28_EN_0_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_EN_0_SHIFT 1
#define MT6351_PMIC_RG_VLDO28_ON_CTRL_0_ADDR MT6351_LDO_VLDO28_CON3
#define MT6351_PMIC_RG_VLDO28_ON_CTRL_0_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_ON_CTRL_0_SHIFT 3
#define MT6351_PMIC_RG_VLDO28_SRCLK_EN_SEL_0_ADDR MT6351_LDO_VLDO28_CON3
#define MT6351_PMIC_RG_VLDO28_SRCLK_EN_SEL_0_MASK 0x7
#define MT6351_PMIC_RG_VLDO28_SRCLK_EN_SEL_0_SHIFT 11
#define MT6351_PMIC_RG_VLDO28_EN_1_ADDR MT6351_LDO_VLDO28_CON4
#define MT6351_PMIC_RG_VLDO28_EN_1_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_EN_1_SHIFT 1
#define MT6351_PMIC_RG_VLDO28_ON_CTRL_1_ADDR MT6351_LDO_VLDO28_CON4
#define MT6351_PMIC_RG_VLDO28_ON_CTRL_1_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_ON_CTRL_1_SHIFT 3
#define MT6351_PMIC_RG_VLDO28_SRCLK_EN_SEL_1_ADDR MT6351_LDO_VLDO28_CON4
#define MT6351_PMIC_RG_VLDO28_SRCLK_EN_SEL_1_MASK 0x7
#define MT6351_PMIC_RG_VLDO28_SRCLK_EN_SEL_1_SHIFT 11
#define MT6351_PMIC_RG_LDO_RSV1_ADDR MT6351_LDO_RSV_CON0
#define MT6351_PMIC_RG_LDO_RSV1_MASK 0x3FF
#define MT6351_PMIC_RG_LDO_RSV1_SHIFT 0
#define MT6351_PMIC_RG_LDO_RSV0_ADDR MT6351_LDO_RSV_CON0
#define MT6351_PMIC_RG_LDO_RSV0_MASK 0x3F
#define MT6351_PMIC_RG_LDO_RSV0_SHIFT 10
#define MT6351_PMIC_RG_LDO_RSV2_ADDR MT6351_LDO_RSV_CON1
#define MT6351_PMIC_RG_LDO_RSV2_MASK 0xFFFF
#define MT6351_PMIC_RG_LDO_RSV2_SHIFT 0
#define MT6351_PMIC_RG_VMC_MODE_SET_ADDR MT6351_LDO_VMC_CON0
#define MT6351_PMIC_RG_VMC_MODE_SET_MASK 0x1
#define MT6351_PMIC_RG_VMC_MODE_SET_SHIFT 0
#define MT6351_PMIC_RG_VMC_EN_ADDR MT6351_LDO_VMC_CON0
#define MT6351_PMIC_RG_VMC_EN_MASK 0x1
#define MT6351_PMIC_RG_VMC_EN_SHIFT 1
#define MT6351_PMIC_RG_VMC_MODE_CTRL_ADDR MT6351_LDO_VMC_CON0
#define MT6351_PMIC_RG_VMC_MODE_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VMC_MODE_CTRL_SHIFT 2
#define MT6351_PMIC_RG_VMC_ON_CTRL_ADDR MT6351_LDO_VMC_CON0
#define MT6351_PMIC_RG_VMC_ON_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VMC_ON_CTRL_SHIFT 3
#define MT6351_PMIC_RG_VMC_SRCLK_MODE_SEL_ADDR MT6351_LDO_VMC_CON0
#define MT6351_PMIC_RG_VMC_SRCLK_MODE_SEL_MASK 0x7
#define MT6351_PMIC_RG_VMC_SRCLK_MODE_SEL_SHIFT 5
#define MT6351_PMIC_DA_QI_VMC_MODE_ADDR MT6351_LDO_VMC_CON0
#define MT6351_PMIC_DA_QI_VMC_MODE_MASK 0x1
#define MT6351_PMIC_DA_QI_VMC_MODE_SHIFT 8
#define MT6351_PMIC_RG_VMC_STBTD_ADDR MT6351_LDO_VMC_CON0
#define MT6351_PMIC_RG_VMC_STBTD_MASK 0x3
#define MT6351_PMIC_RG_VMC_STBTD_SHIFT 9
#define MT6351_PMIC_RG_VMC_SRCLK_EN_SEL_ADDR MT6351_LDO_VMC_CON0
#define MT6351_PMIC_RG_VMC_SRCLK_EN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VMC_SRCLK_EN_SEL_SHIFT 11
#define MT6351_PMIC_DA_QI_VMC_STB_ADDR MT6351_LDO_VMC_CON0
#define MT6351_PMIC_DA_QI_VMC_STB_MASK 0x1
#define MT6351_PMIC_DA_QI_VMC_STB_SHIFT 14
#define MT6351_PMIC_DA_QI_VMC_EN_ADDR MT6351_LDO_VMC_CON0
#define MT6351_PMIC_DA_QI_VMC_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VMC_EN_SHIFT 15
#define MT6351_PMIC_RG_VMC_OCFB_EN_ADDR MT6351_LDO_VMC_CON1
#define MT6351_PMIC_RG_VMC_OCFB_EN_MASK 0x1
#define MT6351_PMIC_RG_VMC_OCFB_EN_SHIFT 9
#define MT6351_PMIC_DA_QI_VMC_OCFB_EN_ADDR MT6351_LDO_VMC_CON1
#define MT6351_PMIC_DA_QI_VMC_OCFB_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VMC_OCFB_EN_SHIFT 10
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_EN_ADDR MT6351_LDO_VMC_CON2
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_EN_MASK 0x1
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_EN_SHIFT 0
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_CTRL_ADDR MT6351_LDO_VMC_CON2
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_CTRL_MASK 0x1
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_ADDR MT6351_LDO_VMC_CON2
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_MASK 0x7
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_SHIFT 4
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_SRCLKEN_SEL_ADDR MT6351_LDO_VMC_CON2
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_SRCLKEN_SEL_MASK 0x7
#define MT6351_PMIC_RG_VMC_DUMMY_LOAD_SRCLKEN_SEL_SHIFT 8
#define MT6351_PMIC_DA_QI_VMC_DUMMY_LOAD_ADDR MT6351_LDO_VMC_CON2
#define MT6351_PMIC_DA_QI_VMC_DUMMY_LOAD_MASK 0x1F
#define MT6351_PMIC_DA_QI_VMC_DUMMY_LOAD_SHIFT 11
#define MT6351_PMIC_RG_VMC_TRANS_EN_ADDR MT6351_LDO_VMC_CON3
#define MT6351_PMIC_RG_VMC_TRANS_EN_MASK 0x1
#define MT6351_PMIC_RG_VMC_TRANS_EN_SHIFT 0
#define MT6351_PMIC_RG_VMC_TRANS_CTRL_ADDR MT6351_LDO_VMC_CON3
#define MT6351_PMIC_RG_VMC_TRANS_CTRL_MASK 0x3
#define MT6351_PMIC_RG_VMC_TRANS_CTRL_SHIFT 1
#define MT6351_PMIC_RG_VMC_TRANS_ONCE_ADDR MT6351_LDO_VMC_CON3
#define MT6351_PMIC_RG_VMC_TRANS_ONCE_MASK 0x1
#define MT6351_PMIC_RG_VMC_TRANS_ONCE_SHIFT 3
#define MT6351_PMIC_RG_VMC_INT_DIS_SEL_ADDR MT6351_LDO_VMC_CON3
#define MT6351_PMIC_RG_VMC_INT_DIS_SEL_MASK 0x3
#define MT6351_PMIC_RG_VMC_INT_DIS_SEL_SHIFT 4
#define MT6351_PMIC_DA_QI_VMC_INT_DIS_ADDR MT6351_LDO_VMC_CON3
#define MT6351_PMIC_DA_QI_VMC_INT_DIS_MASK 0x1
#define MT6351_PMIC_DA_QI_VMC_INT_DIS_SHIFT 15
#define MT6351_PMIC_RG_LDO_MANUAL_OFS_SEL_ADDR MT6351_LDO_K_CON0
#define MT6351_PMIC_RG_LDO_MANUAL_OFS_SEL_MASK 0x1F
#define MT6351_PMIC_RG_LDO_MANUAL_OFS_SEL_SHIFT 0
#define MT6351_PMIC_RG_LDO_MANUAL_OFS_EN_ADDR MT6351_LDO_K_CON0
#define MT6351_PMIC_RG_LDO_MANUAL_OFS_EN_MASK 0x1
#define MT6351_PMIC_RG_LDO_MANUAL_OFS_EN_SHIFT 7
#define MT6351_PMIC_RG_LDO_CALI_RSV_ADDR MT6351_LDO_K_CON0
#define MT6351_PMIC_RG_LDO_CALI_RSV_MASK 0x1F
#define MT6351_PMIC_RG_LDO_CALI_RSV_SHIFT 8
#define MT6351_PMIC_RG_LDO_CALI_MODE_SEL_ADDR MT6351_LDO_K_CON0
#define MT6351_PMIC_RG_LDO_CALI_MODE_SEL_MASK 0x1
#define MT6351_PMIC_RG_LDO_CALI_MODE_SEL_SHIFT 13
#define MT6351_PMIC_RG_LDO_MANUAL_MODE_ADDR MT6351_LDO_K_CON0
#define MT6351_PMIC_RG_LDO_MANUAL_MODE_MASK 0x1
#define MT6351_PMIC_RG_LDO_MANUAL_MODE_SHIFT 14
#define MT6351_PMIC_RG_LDO_AUTO_START_ADDR MT6351_LDO_K_CON0
#define MT6351_PMIC_RG_LDO_AUTO_START_MASK 0x1
#define MT6351_PMIC_RG_LDO_AUTO_START_SHIFT 15
#define MT6351_PMIC_RG_LDO_CALI_CLR_ADDR MT6351_LDO_K_CON1
#define MT6351_PMIC_RG_LDO_CALI_CLR_MASK 0x1
#define MT6351_PMIC_RG_LDO_CALI_CLR_SHIFT 0
#define MT6351_PMIC_LDO_CALI_INC_COUNT_ADDR MT6351_LDO_K_CON1
#define MT6351_PMIC_LDO_CALI_INC_COUNT_MASK 0x3
#define MT6351_PMIC_LDO_CALI_INC_COUNT_SHIFT 1
#define MT6351_PMIC_LDO_K_START_ADDR MT6351_LDO_K_CON1
#define MT6351_PMIC_LDO_K_START_MASK 0x1
#define MT6351_PMIC_LDO_K_START_SHIFT 3
#define MT6351_PMIC_LDO_CALI_DONE_ADDR MT6351_LDO_K_CON1
#define MT6351_PMIC_LDO_CALI_DONE_MASK 0x1
#define MT6351_PMIC_LDO_CALI_DONE_SHIFT 4
#define MT6351_PMIC_LDO_CALI_CNT_ADDR MT6351_LDO_K_CON1
#define MT6351_PMIC_LDO_CALI_CNT_MASK 0x7
#define MT6351_PMIC_LDO_CALI_CNT_SHIFT 5
#define MT6351_PMIC_LDO_CALI_EFUSE_EN_ADDR MT6351_LDO_K_CON1
#define MT6351_PMIC_LDO_CALI_EFUSE_EN_MASK 0x1
#define MT6351_PMIC_LDO_CALI_EFUSE_EN_SHIFT 8
#define MT6351_PMIC_DA_QI_VIO18_OFS_CAL_EN_ADDR MT6351_LDO_K_CON2
#define MT6351_PMIC_DA_QI_VIO18_OFS_CAL_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VIO18_OFS_CAL_EN_SHIFT 0
#define MT6351_PMIC_AD_QI_VIO18_CAL_INDI_ADDR MT6351_LDO_K_CON2
#define MT6351_PMIC_AD_QI_VIO18_CAL_INDI_MASK 0x1
#define MT6351_PMIC_AD_QI_VIO18_CAL_INDI_SHIFT 1
#define MT6351_PMIC_DA_QI_VIO18_OFS_SEL_ADDR MT6351_LDO_K_CON2
#define MT6351_PMIC_DA_QI_VIO18_OFS_SEL_MASK 0x1F
#define MT6351_PMIC_DA_QI_VIO18_OFS_SEL_SHIFT 11
#define MT6351_PMIC_LDO_DEGTD_SEL_ADDR MT6351_LDO_OCFB0
#define MT6351_PMIC_LDO_DEGTD_SEL_MASK 0x3
#define MT6351_PMIC_LDO_DEGTD_SEL_SHIFT 14
#define MT6351_PMIC_RG_VRTC_EN_ADDR MT6351_VRTC_CON0
#define MT6351_PMIC_RG_VRTC_EN_MASK 0x1
#define MT6351_PMIC_RG_VRTC_EN_SHIFT 1
#define MT6351_PMIC_DA_QI_VRTC_EN_ADDR MT6351_VRTC_CON0
#define MT6351_PMIC_DA_QI_VRTC_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_VRTC_EN_SHIFT 15
#define MT6351_PMIC_RG_ALDO_RESEV_ADDR MT6351_ALDO_ANA_CON0
#define MT6351_PMIC_RG_ALDO_RESEV_MASK 0x7F
#define MT6351_PMIC_RG_ALDO_RESEV_SHIFT 0
#define MT6351_PMIC_RG_DLDO_RESEV_ADDR MT6351_DLDO_ANA_CON0
#define MT6351_PMIC_RG_DLDO_RESEV_MASK 0xFF
#define MT6351_PMIC_RG_DLDO_RESEV_SHIFT 0
#define MT6351_PMIC_RG_SLDO_RESEV195_ADDR MT6351_SLDO20_ANA_CON0
#define MT6351_PMIC_RG_SLDO_RESEV195_MASK 0x7F
#define MT6351_PMIC_RG_SLDO_RESEV195_SHIFT 0
#define MT6351_PMIC_RG_SLDO_2_RESEV195_ADDR MT6351_SLDO20_ANA_CON0
#define MT6351_PMIC_RG_SLDO_2_RESEV195_MASK 0x7F
#define MT6351_PMIC_RG_SLDO_2_RESEV195_SHIFT 7
#define MT6351_PMIC_RG_SLDO_RESEV135_ADDR MT6351_SLDO14_ANA_CON0
#define MT6351_PMIC_RG_SLDO_RESEV135_MASK 0x7F
#define MT6351_PMIC_RG_SLDO_RESEV135_SHIFT 0
#define MT6351_PMIC_RG_SLDO_2_RESEV135_ADDR MT6351_SLDO14_ANA_CON0
#define MT6351_PMIC_RG_SLDO_2_RESEV135_MASK 0x7F
#define MT6351_PMIC_RG_SLDO_2_RESEV135_SHIFT 7
#define MT6351_PMIC_RG_VXO22_CAL_ADDR MT6351_VXO22_ANA_CON0
#define MT6351_PMIC_RG_VXO22_CAL_MASK 0xF
#define MT6351_PMIC_RG_VXO22_CAL_SHIFT 0
#define MT6351_PMIC_RG_VXO22_VOSEL_ADDR MT6351_VXO22_ANA_CON0
#define MT6351_PMIC_RG_VXO22_VOSEL_MASK 0x3
#define MT6351_PMIC_RG_VXO22_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VXO22_NDIS_EN_ADDR MT6351_VXO22_ANA_CON0
#define MT6351_PMIC_RG_VXO22_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VXO22_NDIS_EN_SHIFT 11
#define MT6351_PMIC_RG_VTCXO28_CAL_ADDR MT6351_VTCXO28_ANA_CON0
#define MT6351_PMIC_RG_VTCXO28_CAL_MASK 0xF
#define MT6351_PMIC_RG_VTCXO28_CAL_SHIFT 0
#define MT6351_PMIC_RG_VTCXO28_VOSEL_ADDR MT6351_VTCXO28_ANA_CON0
#define MT6351_PMIC_RG_VTCXO28_VOSEL_MASK 0x3
#define MT6351_PMIC_RG_VTCXO28_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VTCXO28_NDIS_EN_ADDR MT6351_VTCXO28_ANA_CON0
#define MT6351_PMIC_RG_VTCXO28_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VTCXO28_NDIS_EN_SHIFT 11
#define MT6351_PMIC_RG_VTCXO24_CAL_ADDR MT6351_VTCXO24_ANA_CON0
#define MT6351_PMIC_RG_VTCXO24_CAL_MASK 0xF
#define MT6351_PMIC_RG_VTCXO24_CAL_SHIFT 0
#define MT6351_PMIC_RG_VTCXO24_VOSEL_ADDR MT6351_VTCXO24_ANA_CON0
#define MT6351_PMIC_RG_VTCXO24_VOSEL_MASK 0x3
#define MT6351_PMIC_RG_VTCXO24_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VTCXO24_NDIS_EN_ADDR MT6351_VTCXO24_ANA_CON0
#define MT6351_PMIC_RG_VTCXO24_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VTCXO24_NDIS_EN_SHIFT 11
#define MT6351_PMIC_RG_VBIF28_CAL_ADDR MT6351_VBIF28_ANA_CON0
#define MT6351_PMIC_RG_VBIF28_CAL_MASK 0xF
#define MT6351_PMIC_RG_VBIF28_CAL_SHIFT 0
#define MT6351_PMIC_RG_VBIF28_VOSEL_ADDR MT6351_VBIF28_ANA_CON0
#define MT6351_PMIC_RG_VBIF28_VOSEL_MASK 0x3
#define MT6351_PMIC_RG_VBIF28_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VBIF28_NDIS_EN_ADDR MT6351_VBIF28_ANA_CON0
#define MT6351_PMIC_RG_VBIF28_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VBIF28_NDIS_EN_SHIFT 11
#define MT6351_PMIC_RG_VCN28_CAL_ADDR MT6351_VCN28_ANA_CON0
#define MT6351_PMIC_RG_VCN28_CAL_MASK 0xF
#define MT6351_PMIC_RG_VCN28_CAL_SHIFT 0
#define MT6351_PMIC_RG_VCN28_VOSEL_ADDR MT6351_VCN28_ANA_CON0
#define MT6351_PMIC_RG_VCN28_VOSEL_MASK 0x3
#define MT6351_PMIC_RG_VCN28_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VCN28_NDIS_EN_ADDR MT6351_VCN28_ANA_CON0
#define MT6351_PMIC_RG_VCN28_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VCN28_NDIS_EN_SHIFT 11
#define MT6351_PMIC_RG_VMCH_CAL_ADDR MT6351_VMCH_ANA_CON0
#define MT6351_PMIC_RG_VMCH_CAL_MASK 0x1F
#define MT6351_PMIC_RG_VMCH_CAL_SHIFT 0
#define MT6351_PMIC_RG_VMCH_VOSEL_ADDR MT6351_VMCH_ANA_CON0
#define MT6351_PMIC_RG_VMCH_VOSEL_MASK 0x1
#define MT6351_PMIC_RG_VMCH_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VMCH_NDIS_EN_ADDR MT6351_VMCH_ANA_CON1
#define MT6351_PMIC_RG_VMCH_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VMCH_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VMCH_OC_TRIM_ADDR MT6351_VMCH_ANA_CON1
#define MT6351_PMIC_RG_VMCH_OC_TRIM_MASK 0x3F
#define MT6351_PMIC_RG_VMCH_OC_TRIM_SHIFT 2
#define MT6351_PMIC_RG_VMCH_N2LP_EHC_V18_ADDR MT6351_VMCH_ANA_CON1
#define MT6351_PMIC_RG_VMCH_N2LP_EHC_V18_MASK 0x1
#define MT6351_PMIC_RG_VMCH_N2LP_EHC_V18_SHIFT 8
#define MT6351_PMIC_RG_VEMC_CAL_ADDR MT6351_VEMC_ANA_CON0
#define MT6351_PMIC_RG_VEMC_CAL_MASK 0x1F
#define MT6351_PMIC_RG_VEMC_CAL_SHIFT 0
#define MT6351_PMIC_RG_VEMC_VOSEL_ADDR MT6351_VEMC_ANA_CON0
#define MT6351_PMIC_RG_VEMC_VOSEL_MASK 0x1
#define MT6351_PMIC_RG_VEMC_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VEMC_NDIS_EN_ADDR MT6351_VEMC_ANA_CON1
#define MT6351_PMIC_RG_VEMC_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VEMC_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VEMC_OC_TRIM_ADDR MT6351_VEMC_ANA_CON1
#define MT6351_PMIC_RG_VEMC_OC_TRIM_MASK 0x3F
#define MT6351_PMIC_RG_VEMC_OC_TRIM_SHIFT 2
#define MT6351_PMIC_RG_VEMC_N2LP_EHC_V18_ADDR MT6351_VEMC_ANA_CON1
#define MT6351_PMIC_RG_VEMC_N2LP_EHC_V18_MASK 0x1
#define MT6351_PMIC_RG_VEMC_N2LP_EHC_V18_SHIFT 8
#define MT6351_PMIC_RG_VCAMA_CAL_ADDR MT6351_VCAMA_ANA_CON0
#define MT6351_PMIC_RG_VCAMA_CAL_MASK 0xF
#define MT6351_PMIC_RG_VCAMA_CAL_SHIFT 0
#define MT6351_PMIC_RG_VCAMA_VOSEL_ADDR MT6351_VCAMA_ANA_CON0
#define MT6351_PMIC_RG_VCAMA_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VCAMA_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VCAMA_NDIS_EN_ADDR MT6351_VCAMA_ANA_CON1
#define MT6351_PMIC_RG_VCAMA_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VCAMA_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VCAMA_FBSEL_ADDR MT6351_VCAMA_ANA_CON1
#define MT6351_PMIC_RG_VCAMA_FBSEL_MASK 0x3
#define MT6351_PMIC_RG_VCAMA_FBSEL_SHIFT 2
#define MT6351_PMIC_RG_VCN33_CAL_ADDR MT6351_VCN33_ANA_CON0
#define MT6351_PMIC_RG_VCN33_CAL_MASK 0x1F
#define MT6351_PMIC_RG_VCN33_CAL_SHIFT 0
#define MT6351_PMIC_RG_VCN33_VOSEL_ADDR MT6351_VCN33_ANA_CON0
#define MT6351_PMIC_RG_VCN33_VOSEL_MASK 0x3
#define MT6351_PMIC_RG_VCN33_VOSEL_SHIFT 9
#define MT6351_PMIC_RG_VCN33_NDIS_EN_ADDR MT6351_VCN33_ANA_CON1
#define MT6351_PMIC_RG_VCN33_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VCN33_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VCN33_N2LP_EHC_V18_ADDR MT6351_VCN33_ANA_CON1
#define MT6351_PMIC_RG_VCN33_N2LP_EHC_V18_MASK 0x1
#define MT6351_PMIC_RG_VCN33_N2LP_EHC_V18_SHIFT 2
#define MT6351_PMIC_RG_VIO28_CAL_ADDR MT6351_VIO28_ANA_CON0
#define MT6351_PMIC_RG_VIO28_CAL_MASK 0xF
#define MT6351_PMIC_RG_VIO28_CAL_SHIFT 0
#define MT6351_PMIC_RG_VIO28_VOSEL_ADDR MT6351_VIO28_ANA_CON0
#define MT6351_PMIC_RG_VIO28_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VIO28_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VIO28_NDIS_EN_ADDR MT6351_VIO28_ANA_CON1
#define MT6351_PMIC_RG_VIO28_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VIO28_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VIO28_LP_HIGH_SPEED_ENB_ADDR MT6351_VIO28_ANA_CON1
#define MT6351_PMIC_RG_VIO28_LP_HIGH_SPEED_ENB_MASK 0x1
#define MT6351_PMIC_RG_VIO28_LP_HIGH_SPEED_ENB_SHIFT 2
#define MT6351_PMIC_RG_VMC_CAL_ADDR MT6351_VMC_ANA_CON0
#define MT6351_PMIC_RG_VMC_CAL_MASK 0x1F
#define MT6351_PMIC_RG_VMC_CAL_SHIFT 0
#define MT6351_PMIC_RG_VMC_VOSEL_ADDR MT6351_VMC_ANA_CON0
#define MT6351_PMIC_RG_VMC_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VMC_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VMC_NDIS_EN_ADDR MT6351_VMC_ANA_CON1
#define MT6351_PMIC_RG_VMC_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VMC_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VMC_LP_HIGH_SPEED_ENB_ADDR MT6351_VMC_ANA_CON1
#define MT6351_PMIC_RG_VMC_LP_HIGH_SPEED_ENB_MASK 0x1
#define MT6351_PMIC_RG_VMC_LP_HIGH_SPEED_ENB_SHIFT 2
#define MT6351_PMIC_RG_VIBR_CAL_ADDR MT6351_VIBR_ANA_CON0
#define MT6351_PMIC_RG_VIBR_CAL_MASK 0xF
#define MT6351_PMIC_RG_VIBR_CAL_SHIFT 0
#define MT6351_PMIC_RG_VIBR_VOSEL_ADDR MT6351_VIBR_ANA_CON0
#define MT6351_PMIC_RG_VIBR_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VIBR_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VIBR_NDIS_EN_ADDR MT6351_VIBR_ANA_CON1
#define MT6351_PMIC_RG_VIBR_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VIBR_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VIBR_LP_HIGH_SPEED_ENB_ADDR MT6351_VIBR_ANA_CON1
#define MT6351_PMIC_RG_VIBR_LP_HIGH_SPEED_ENB_MASK 0x1
#define MT6351_PMIC_RG_VIBR_LP_HIGH_SPEED_ENB_SHIFT 2
#define MT6351_PMIC_RG_VUSB33_CAL_ADDR MT6351_VUSB33_ANA_CON0
#define MT6351_PMIC_RG_VUSB33_CAL_MASK 0xF
#define MT6351_PMIC_RG_VUSB33_CAL_SHIFT 0
#define MT6351_PMIC_RG_VUSB33_NDIS_EN_ADDR MT6351_VUSB33_ANA_CON1
#define MT6351_PMIC_RG_VUSB33_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VUSB33_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VUSB33_OC_TRIM_ADDR MT6351_VUSB33_ANA_CON1
#define MT6351_PMIC_RG_VUSB33_OC_TRIM_MASK 0x3F
#define MT6351_PMIC_RG_VUSB33_OC_TRIM_SHIFT 2
#define MT6351_PMIC_RG_VSIM1_CAL_ADDR MT6351_VSIM1_ANA_CON0
#define MT6351_PMIC_RG_VSIM1_CAL_MASK 0xF
#define MT6351_PMIC_RG_VSIM1_CAL_SHIFT 0
#define MT6351_PMIC_RG_VSIM1_VOSEL_ADDR MT6351_VSIM1_ANA_CON0
#define MT6351_PMIC_RG_VSIM1_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VSIM1_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VSIM1_NDIS_EN_ADDR MT6351_VSIM1_ANA_CON1
#define MT6351_PMIC_RG_VSIM1_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VSIM1_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VSIM1_STB_CAL_ADDR MT6351_VSIM1_ANA_CON1
#define MT6351_PMIC_RG_VSIM1_STB_CAL_MASK 0x3
#define MT6351_PMIC_RG_VSIM1_STB_CAL_SHIFT 6
#define MT6351_PMIC_RG_VSIM1_STB_SEL_ADDR MT6351_VSIM1_ANA_CON1
#define MT6351_PMIC_RG_VSIM1_STB_SEL_MASK 0x1
#define MT6351_PMIC_RG_VSIM1_STB_SEL_SHIFT 8
#define MT6351_PMIC_RG_VSIM1_OC_TRIM_ADDR MT6351_VSIM1_ANA_CON1
#define MT6351_PMIC_RG_VSIM1_OC_TRIM_MASK 0xF
#define MT6351_PMIC_RG_VSIM1_OC_TRIM_SHIFT 9
#define MT6351_PMIC_RG_VSIM1_NDIS_EN_INT_ADDR MT6351_VSIM1_ANA_CON1
#define MT6351_PMIC_RG_VSIM1_NDIS_EN_INT_MASK 0x1
#define MT6351_PMIC_RG_VSIM1_NDIS_EN_INT_SHIFT 13
#define MT6351_PMIC_RG_EFUSE_SIM1_MODE_ADDR MT6351_VSIM1_ANA_CON1
#define MT6351_PMIC_RG_EFUSE_SIM1_MODE_MASK 0x1
#define MT6351_PMIC_RG_EFUSE_SIM1_MODE_SHIFT 14
#define MT6351_PMIC_RG_VSIM1_LP_HIGH_SPEED_ENB_ADDR MT6351_VSIM1_ANA_CON1
#define MT6351_PMIC_RG_VSIM1_LP_HIGH_SPEED_ENB_MASK 0x1
#define MT6351_PMIC_RG_VSIM1_LP_HIGH_SPEED_ENB_SHIFT 15
#define MT6351_PMIC_RG_VSIM2_CAL_ADDR MT6351_VSIM2_ANA_CON0
#define MT6351_PMIC_RG_VSIM2_CAL_MASK 0xF
#define MT6351_PMIC_RG_VSIM2_CAL_SHIFT 0
#define MT6351_PMIC_RG_VSIM2_VOSEL_ADDR MT6351_VSIM2_ANA_CON0
#define MT6351_PMIC_RG_VSIM2_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VSIM2_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VSIM2_NDIS_EN_ADDR MT6351_VSIM2_ANA_CON1
#define MT6351_PMIC_RG_VSIM2_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VSIM2_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VSIM2_STB_CAL_ADDR MT6351_VSIM2_ANA_CON1
#define MT6351_PMIC_RG_VSIM2_STB_CAL_MASK 0x3
#define MT6351_PMIC_RG_VSIM2_STB_CAL_SHIFT 6
#define MT6351_PMIC_RG_VSIM2_STB_SEL_ADDR MT6351_VSIM2_ANA_CON1
#define MT6351_PMIC_RG_VSIM2_STB_SEL_MASK 0x1
#define MT6351_PMIC_RG_VSIM2_STB_SEL_SHIFT 8
#define MT6351_PMIC_RG_VSIM2_OC_TRIM_ADDR MT6351_VSIM2_ANA_CON1
#define MT6351_PMIC_RG_VSIM2_OC_TRIM_MASK 0xF
#define MT6351_PMIC_RG_VSIM2_OC_TRIM_SHIFT 9
#define MT6351_PMIC_RG_VSIM2_NDIS_EN_INT_ADDR MT6351_VSIM2_ANA_CON1
#define MT6351_PMIC_RG_VSIM2_NDIS_EN_INT_MASK 0x1
#define MT6351_PMIC_RG_VSIM2_NDIS_EN_INT_SHIFT 13
#define MT6351_PMIC_RG_EFUSE_VSIM2_MODE_ADDR MT6351_VSIM2_ANA_CON1
#define MT6351_PMIC_RG_EFUSE_VSIM2_MODE_MASK 0x1
#define MT6351_PMIC_RG_EFUSE_VSIM2_MODE_SHIFT 14
#define MT6351_PMIC_RG_VSIM2_LP_HIGH_SPEED_ENB_ADDR MT6351_VSIM2_ANA_CON1
#define MT6351_PMIC_RG_VSIM2_LP_HIGH_SPEED_ENB_MASK 0x1
#define MT6351_PMIC_RG_VSIM2_LP_HIGH_SPEED_ENB_SHIFT 15
#define MT6351_PMIC_RG_VEFUSE_CAL_ADDR MT6351_VEFUSE_ANA_CON0
#define MT6351_PMIC_RG_VEFUSE_CAL_MASK 0xF
#define MT6351_PMIC_RG_VEFUSE_CAL_SHIFT 0
#define MT6351_PMIC_RG_VEFUSE_VOSEL_ADDR MT6351_VEFUSE_ANA_CON0
#define MT6351_PMIC_RG_VEFUSE_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VEFUSE_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VEFUSE_NDIS_EN_ADDR MT6351_VEFUSE_ANA_CON1
#define MT6351_PMIC_RG_VEFUSE_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VEFUSE_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VEFUSE_STB_CAL_ADDR MT6351_VEFUSE_ANA_CON1
#define MT6351_PMIC_RG_VEFUSE_STB_CAL_MASK 0x3
#define MT6351_PMIC_RG_VEFUSE_STB_CAL_SHIFT 6
#define MT6351_PMIC_RG_VEFUSE_STB_SEL_ADDR MT6351_VEFUSE_ANA_CON1
#define MT6351_PMIC_RG_VEFUSE_STB_SEL_MASK 0x1
#define MT6351_PMIC_RG_VEFUSE_STB_SEL_SHIFT 8
#define MT6351_PMIC_RG_VEFUSE_OC_TRIM_ADDR MT6351_VEFUSE_ANA_CON1
#define MT6351_PMIC_RG_VEFUSE_OC_TRIM_MASK 0xF
#define MT6351_PMIC_RG_VEFUSE_OC_TRIM_SHIFT 9
#define MT6351_PMIC_RG_VEFUSE_NDIS_EN_INT_ADDR MT6351_VEFUSE_ANA_CON1
#define MT6351_PMIC_RG_VEFUSE_NDIS_EN_INT_MASK 0x1
#define MT6351_PMIC_RG_VEFUSE_NDIS_EN_INT_SHIFT 13
#define MT6351_PMIC_RG_EFUSE_MODE_1_ADDR MT6351_VEFUSE_ANA_CON1
#define MT6351_PMIC_RG_EFUSE_MODE_1_MASK 0x1
#define MT6351_PMIC_RG_EFUSE_MODE_1_SHIFT 14
#define MT6351_PMIC_RG_VEFUSE_LP_HIGH_SPEED_ENB_ADDR MT6351_VEFUSE_ANA_CON1
#define MT6351_PMIC_RG_VEFUSE_LP_HIGH_SPEED_ENB_MASK 0x1
#define MT6351_PMIC_RG_VEFUSE_LP_HIGH_SPEED_ENB_SHIFT 15
#define MT6351_PMIC_RG_VA18_CAL_ADDR MT6351_VA18_ANA_CON0
#define MT6351_PMIC_RG_VA18_CAL_MASK 0xF
#define MT6351_PMIC_RG_VA18_CAL_SHIFT 0
#define MT6351_PMIC_RG_VA18_VOSEL_ADDR MT6351_VA18_ANA_CON0
#define MT6351_PMIC_RG_VA18_VOSEL_MASK 0x3
#define MT6351_PMIC_RG_VA18_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VA18_NDIS_EN_ADDR MT6351_VA18_ANA_CON0
#define MT6351_PMIC_RG_VA18_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VA18_NDIS_EN_SHIFT 11
#define MT6351_PMIC_RG_VGP3_CAL_ADDR MT6351_VGP3_ANA_CON0
#define MT6351_PMIC_RG_VGP3_CAL_MASK 0xF
#define MT6351_PMIC_RG_VGP3_CAL_SHIFT 0
#define MT6351_PMIC_RG_VGP3_VOSEL_ADDR MT6351_VGP3_ANA_CON0
#define MT6351_PMIC_RG_VGP3_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VGP3_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VGP3_NDIS_EN_ADDR MT6351_VGP3_ANA_CON1
#define MT6351_PMIC_RG_VGP3_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VGP3_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VGP3_FT_DNMC_EN_ADDR MT6351_VGP3_ANA_CON1
#define MT6351_PMIC_RG_VGP3_FT_DNMC_EN_MASK 0x1
#define MT6351_PMIC_RG_VGP3_FT_DNMC_EN_SHIFT 4
#define MT6351_PMIC_RG_VCAMD_CAL_ADDR MT6351_VCAMD_ANA_CON0
#define MT6351_PMIC_RG_VCAMD_CAL_MASK 0x1F
#define MT6351_PMIC_RG_VCAMD_CAL_SHIFT 0
#define MT6351_PMIC_RG_VCAMD_VOSEL_ADDR MT6351_VCAMD_ANA_CON0
#define MT6351_PMIC_RG_VCAMD_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VCAMD_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VCAMD_NDIS_EN_ADDR MT6351_VCAMD_ANA_CON1
#define MT6351_PMIC_RG_VCAMD_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VCAMD_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VCAMD_RSV_ADDR MT6351_VCAMD_ANA_CON1
#define MT6351_PMIC_RG_VCAMD_RSV_MASK 0xFF
#define MT6351_PMIC_RG_VCAMD_RSV_SHIFT 2
#define MT6351_PMIC_RG_VCAMD_OC_TRIM_ADDR MT6351_VCAMD_ANA_CON1
#define MT6351_PMIC_RG_VCAMD_OC_TRIM_MASK 0xF
#define MT6351_PMIC_RG_VCAMD_OC_TRIM_SHIFT 10
#define MT6351_PMIC_RG_VIO18_CAL_ADDR MT6351_VIO18_ANA_CON0
#define MT6351_PMIC_RG_VIO18_CAL_MASK 0xF
#define MT6351_PMIC_RG_VIO18_CAL_SHIFT 0
#define MT6351_PMIC_RG_VIO18_NDIS_EN_ADDR MT6351_VIO18_ANA_CON1
#define MT6351_PMIC_RG_VIO18_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VIO18_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VIO18_FT_DNMC_EN_ADDR MT6351_VIO18_ANA_CON1
#define MT6351_PMIC_RG_VIO18_FT_DNMC_EN_MASK 0x1
#define MT6351_PMIC_RG_VIO18_FT_DNMC_EN_SHIFT 4
#define MT6351_PMIC_RG_VRF18_CAL_ADDR MT6351_VRF18_ANA_CON0
#define MT6351_PMIC_RG_VRF18_CAL_MASK 0xF
#define MT6351_PMIC_RG_VRF18_CAL_SHIFT 0
#define MT6351_PMIC_RG_VRF18_VOSEL_ADDR MT6351_VRF18_ANA_CON0
#define MT6351_PMIC_RG_VRF18_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VRF18_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VRF18_NDIS_EN_ADDR MT6351_VRF18_ANA_CON1
#define MT6351_PMIC_RG_VRF18_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VRF18_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VRF18_FT_DNMC_EN_ADDR MT6351_VRF18_ANA_CON1
#define MT6351_PMIC_RG_VRF18_FT_DNMC_EN_MASK 0x1
#define MT6351_PMIC_RG_VRF18_FT_DNMC_EN_SHIFT 4
#define MT6351_PMIC_RG_VRF12_CAL_ADDR MT6351_VRF12_ANA_CON0
#define MT6351_PMIC_RG_VRF12_CAL_MASK 0xF
#define MT6351_PMIC_RG_VRF12_CAL_SHIFT 0
#define MT6351_PMIC_RG_VRF12_VOSEL_ADDR MT6351_VRF12_ANA_CON0
#define MT6351_PMIC_RG_VRF12_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VRF12_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VRF12_NDIS_EN_ADDR MT6351_VRF12_ANA_CON1
#define MT6351_PMIC_RG_VRF12_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VRF12_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VRF12_STB_SEL_ADDR MT6351_VRF12_ANA_CON1
#define MT6351_PMIC_RG_VRF12_STB_SEL_MASK 0x1
#define MT6351_PMIC_RG_VRF12_STB_SEL_SHIFT 2
#define MT6351_PMIC_RG_VA10_CAL_ADDR MT6351_VA10_ANA_CON0
#define MT6351_PMIC_RG_VA10_CAL_MASK 0xF
#define MT6351_PMIC_RG_VA10_CAL_SHIFT 0
#define MT6351_PMIC_RG_VA10_VOSEL_ADDR MT6351_VA10_ANA_CON0
#define MT6351_PMIC_RG_VA10_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VA10_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VA10_NDIS_EN_ADDR MT6351_VA10_ANA_CON1
#define MT6351_PMIC_RG_VA10_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VA10_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VA10_STB_SEL_ADDR MT6351_VA10_ANA_CON1
#define MT6351_PMIC_RG_VA10_STB_SEL_MASK 0x1
#define MT6351_PMIC_RG_VA10_STB_SEL_SHIFT 2
#define MT6351_PMIC_RG_VCAMIO_CAL_ADDR MT6351_VCAMIO_ANA_CON0
#define MT6351_PMIC_RG_VCAMIO_CAL_MASK 0xF
#define MT6351_PMIC_RG_VCAMIO_CAL_SHIFT 0
#define MT6351_PMIC_RG_VCAMIO_VOSEL_ADDR MT6351_VCAMIO_ANA_CON0
#define MT6351_PMIC_RG_VCAMIO_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VCAMIO_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VCAMIO_NDIS_EN_ADDR MT6351_VCAMIO_ANA_CON1
#define MT6351_PMIC_RG_VCAMIO_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VCAMIO_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VCAMIO_STB_SEL_ADDR MT6351_VCAMIO_ANA_CON1
#define MT6351_PMIC_RG_VCAMIO_STB_SEL_MASK 0x1
#define MT6351_PMIC_RG_VCAMIO_STB_SEL_SHIFT 2
#define MT6351_PMIC_RG_VCN18_CAL_ADDR MT6351_VCN18_ANA_CON0
#define MT6351_PMIC_RG_VCN18_CAL_MASK 0xF
#define MT6351_PMIC_RG_VCN18_CAL_SHIFT 0
#define MT6351_PMIC_RG_VCN18_VOSEL_ADDR MT6351_VCN18_ANA_CON0
#define MT6351_PMIC_RG_VCN18_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VCN18_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VCN18_NDIS_EN_ADDR MT6351_VCN18_ANA_CON1
#define MT6351_PMIC_RG_VCN18_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VCN18_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VCN18_STB_SEL_ADDR MT6351_VCN18_ANA_CON1
#define MT6351_PMIC_RG_VCN18_STB_SEL_MASK 0x1
#define MT6351_PMIC_RG_VCN18_STB_SEL_SHIFT 2
#define MT6351_PMIC_RG_VMIPI_CAL_ADDR MT6351_VMIPI_ANA_CON0
#define MT6351_PMIC_RG_VMIPI_CAL_MASK 0xF
#define MT6351_PMIC_RG_VMIPI_CAL_SHIFT 0
#define MT6351_PMIC_RG_VMIPI_VOSEL_ADDR MT6351_VMIPI_ANA_CON0
#define MT6351_PMIC_RG_VMIPI_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VMIPI_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VMIPI_NDIS_EN_ADDR MT6351_VMIPI_ANA_CON1
#define MT6351_PMIC_RG_VMIPI_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VMIPI_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VMIPI_STB_SEL_ADDR MT6351_VMIPI_ANA_CON1
#define MT6351_PMIC_RG_VMIPI_STB_SEL_MASK 0x1
#define MT6351_PMIC_RG_VMIPI_STB_SEL_SHIFT 2
#define MT6351_PMIC_RG_VSRAM_PROC_NDIS_EN_ADDR MT6351_VSRAM_PROC_ANA_CON1
#define MT6351_PMIC_RG_VSRAM_PROC_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_PROC_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VSRAM_PROC_NDIS_PLCUR_ADDR MT6351_VSRAM_PROC_ANA_CON1
#define MT6351_PMIC_RG_VSRAM_PROC_NDIS_PLCUR_MASK 0x3
#define MT6351_PMIC_RG_VSRAM_PROC_NDIS_PLCUR_SHIFT 2
#define MT6351_PMIC_RG_VSRAM_PROC_STB_SEL_ADDR MT6351_VSRAM_PROC_ANA_CON1
#define MT6351_PMIC_RG_VSRAM_PROC_STB_SEL_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_PROC_STB_SEL_SHIFT 4
#define MT6351_PMIC_RG_VSRAM_PROC_PLCUR_EN_ADDR MT6351_VSRAM_PROC_ANA_CON1
#define MT6351_PMIC_RG_VSRAM_PROC_PLCUR_EN_MASK 0x1
#define MT6351_PMIC_RG_VSRAM_PROC_PLCUR_EN_SHIFT 5
#define MT6351_PMIC_RG_VDRAM_CAL_ADDR MT6351_VDRAM_ANA_CON0
#define MT6351_PMIC_RG_VDRAM_CAL_MASK 0x1F
#define MT6351_PMIC_RG_VDRAM_CAL_SHIFT 0
#define MT6351_PMIC_RG_VDRAM_VOSEL_ADDR MT6351_VDRAM_ANA_CON0
#define MT6351_PMIC_RG_VDRAM_VOSEL_MASK 0x7
#define MT6351_PMIC_RG_VDRAM_VOSEL_SHIFT 8
#define MT6351_PMIC_RG_VDRAM_NDIS_EN_ADDR MT6351_VDRAM_ANA_CON1
#define MT6351_PMIC_RG_VDRAM_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VDRAM_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VDRAM_RSV_ADDR MT6351_VDRAM_ANA_CON1
#define MT6351_PMIC_RG_VDRAM_RSV_MASK 0xFF
#define MT6351_PMIC_RG_VDRAM_RSV_SHIFT 2
#define MT6351_PMIC_RG_VDRAM_OC_TRIM_ADDR MT6351_VDRAM_ANA_CON1
#define MT6351_PMIC_RG_VDRAM_OC_TRIM_MASK 0xF
#define MT6351_PMIC_RG_VDRAM_OC_TRIM_SHIFT 10
#define MT6351_PMIC_RG_VLDO28_CAL_ADDR MT6351_VLDO28_ANA_CON0
#define MT6351_PMIC_RG_VLDO28_CAL_MASK 0x1F
#define MT6351_PMIC_RG_VLDO28_CAL_SHIFT 0
#define MT6351_PMIC_RG_VLDO28_NDIS_EN_ADDR MT6351_VLDO28_ANA_CON1
#define MT6351_PMIC_RG_VLDO28_NDIS_EN_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_NDIS_EN_SHIFT 1
#define MT6351_PMIC_RG_VLDO28_OC_TRIM_ADDR MT6351_VLDO28_ANA_CON1
#define MT6351_PMIC_RG_VLDO28_OC_TRIM_MASK 0x3F
#define MT6351_PMIC_RG_VLDO28_OC_TRIM_SHIFT 2
#define MT6351_PMIC_RG_VLDO28_N2LP_EHC_V18_ADDR MT6351_VLDO28_ANA_CON1
#define MT6351_PMIC_RG_VLDO28_N2LP_EHC_V18_MASK 0x1
#define MT6351_PMIC_RG_VLDO28_N2LP_EHC_V18_SHIFT 8
#define MT6351_PMIC_BIF_COMMAND_0_ADDR MT6351_BIF_CON0
#define MT6351_PMIC_BIF_COMMAND_0_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_0_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_1_ADDR MT6351_BIF_CON1
#define MT6351_PMIC_BIF_COMMAND_1_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_1_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_2_ADDR MT6351_BIF_CON2
#define MT6351_PMIC_BIF_COMMAND_2_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_2_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_3_ADDR MT6351_BIF_CON3
#define MT6351_PMIC_BIF_COMMAND_3_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_3_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_4_ADDR MT6351_BIF_CON4
#define MT6351_PMIC_BIF_COMMAND_4_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_4_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_5_ADDR MT6351_BIF_CON5
#define MT6351_PMIC_BIF_COMMAND_5_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_5_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_6_ADDR MT6351_BIF_CON6
#define MT6351_PMIC_BIF_COMMAND_6_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_6_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_7_ADDR MT6351_BIF_CON7
#define MT6351_PMIC_BIF_COMMAND_7_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_7_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_8_ADDR MT6351_BIF_CON8
#define MT6351_PMIC_BIF_COMMAND_8_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_8_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_9_ADDR MT6351_BIF_CON9
#define MT6351_PMIC_BIF_COMMAND_9_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_9_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_10_ADDR MT6351_BIF_CON10
#define MT6351_PMIC_BIF_COMMAND_10_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_10_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_11_ADDR MT6351_BIF_CON11
#define MT6351_PMIC_BIF_COMMAND_11_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_11_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_12_ADDR MT6351_BIF_CON12
#define MT6351_PMIC_BIF_COMMAND_12_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_12_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_13_ADDR MT6351_BIF_CON13
#define MT6351_PMIC_BIF_COMMAND_13_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_13_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_14_ADDR MT6351_BIF_CON14
#define MT6351_PMIC_BIF_COMMAND_14_MASK 0x7FF
#define MT6351_PMIC_BIF_COMMAND_14_SHIFT 0
#define MT6351_PMIC_BIF_RSV_ADDR MT6351_BIF_CON15
#define MT6351_PMIC_BIF_RSV_MASK 0x7F
#define MT6351_PMIC_BIF_RSV_SHIFT 0
#define MT6351_PMIC_BIF_COMMAND_TYPE_ADDR MT6351_BIF_CON15
#define MT6351_PMIC_BIF_COMMAND_TYPE_MASK 0x3
#define MT6351_PMIC_BIF_COMMAND_TYPE_SHIFT 8
#define MT6351_PMIC_BIF_TRASFER_NUM_ADDR MT6351_BIF_CON15
#define MT6351_PMIC_BIF_TRASFER_NUM_MASK 0xF
#define MT6351_PMIC_BIF_TRASFER_NUM_SHIFT 12
#define MT6351_PMIC_BIF_LOGIC_0_SET_ADDR MT6351_BIF_CON16
#define MT6351_PMIC_BIF_LOGIC_0_SET_MASK 0xF
#define MT6351_PMIC_BIF_LOGIC_0_SET_SHIFT 0
#define MT6351_PMIC_BIF_LOGIC_1_SET_ADDR MT6351_BIF_CON16
#define MT6351_PMIC_BIF_LOGIC_1_SET_MASK 0x1F
#define MT6351_PMIC_BIF_LOGIC_1_SET_SHIFT 4
#define MT6351_PMIC_BIF_STOP_SET_ADDR MT6351_BIF_CON16
#define MT6351_PMIC_BIF_STOP_SET_MASK 0x3F
#define MT6351_PMIC_BIF_STOP_SET_SHIFT 10
#define MT6351_PMIC_BIF_DEBOUNCE_WND_ADDR MT6351_BIF_CON17
#define MT6351_PMIC_BIF_DEBOUNCE_WND_MASK 0x3
#define MT6351_PMIC_BIF_DEBOUNCE_WND_SHIFT 0
#define MT6351_PMIC_BIF_DEBOUNCE_THD_ADDR MT6351_BIF_CON17
#define MT6351_PMIC_BIF_DEBOUNCE_THD_MASK 0x3
#define MT6351_PMIC_BIF_DEBOUNCE_THD_SHIFT 2
#define MT6351_PMIC_BIF_DEBOUNCE_EN_ADDR MT6351_BIF_CON17
#define MT6351_PMIC_BIF_DEBOUNCE_EN_MASK 0x1
#define MT6351_PMIC_BIF_DEBOUNCE_EN_SHIFT 4
#define MT6351_PMIC_BIF_READ_EXPECT_NUM_ADDR MT6351_BIF_CON17
#define MT6351_PMIC_BIF_READ_EXPECT_NUM_MASK 0xF
#define MT6351_PMIC_BIF_READ_EXPECT_NUM_SHIFT 12
#define MT6351_PMIC_BIF_TRASACT_TRIGGER_ADDR MT6351_BIF_CON18
#define MT6351_PMIC_BIF_TRASACT_TRIGGER_MASK 0x1
#define MT6351_PMIC_BIF_TRASACT_TRIGGER_SHIFT 0
#define MT6351_PMIC_BIF_DATA_NUM_ADDR MT6351_BIF_CON19
#define MT6351_PMIC_BIF_DATA_NUM_MASK 0xF
#define MT6351_PMIC_BIF_DATA_NUM_SHIFT 0
#define MT6351_PMIC_BIF_RESPONSE_ADDR MT6351_BIF_CON19
#define MT6351_PMIC_BIF_RESPONSE_MASK 0x1
#define MT6351_PMIC_BIF_RESPONSE_SHIFT 12
#define MT6351_PMIC_BIF_DATA_0_ADDR MT6351_BIF_CON20
#define MT6351_PMIC_BIF_DATA_0_MASK 0xFF
#define MT6351_PMIC_BIF_DATA_0_SHIFT 0
#define MT6351_PMIC_BIF_ACK_0_ADDR MT6351_BIF_CON20
#define MT6351_PMIC_BIF_ACK_0_MASK 0x1
#define MT6351_PMIC_BIF_ACK_0_SHIFT 8
#define MT6351_PMIC_BIF_ERROR_0_ADDR MT6351_BIF_CON20
#define MT6351_PMIC_BIF_ERROR_0_MASK 0x1
#define MT6351_PMIC_BIF_ERROR_0_SHIFT 15
#define MT6351_PMIC_BIF_DATA_1_ADDR MT6351_BIF_CON21
#define MT6351_PMIC_BIF_DATA_1_MASK 0xFF
#define MT6351_PMIC_BIF_DATA_1_SHIFT 0
#define MT6351_PMIC_BIF_ACK_1_ADDR MT6351_BIF_CON21
#define MT6351_PMIC_BIF_ACK_1_MASK 0x1
#define MT6351_PMIC_BIF_ACK_1_SHIFT 8
#define MT6351_PMIC_BIF_ERROR_1_ADDR MT6351_BIF_CON21
#define MT6351_PMIC_BIF_ERROR_1_MASK 0x1
#define MT6351_PMIC_BIF_ERROR_1_SHIFT 15
#define MT6351_PMIC_BIF_DATA_2_ADDR MT6351_BIF_CON22
#define MT6351_PMIC_BIF_DATA_2_MASK 0xFF
#define MT6351_PMIC_BIF_DATA_2_SHIFT 0
#define MT6351_PMIC_BIF_ACK_2_ADDR MT6351_BIF_CON22
#define MT6351_PMIC_BIF_ACK_2_MASK 0x1
#define MT6351_PMIC_BIF_ACK_2_SHIFT 8
#define MT6351_PMIC_BIF_ERROR_2_ADDR MT6351_BIF_CON22
#define MT6351_PMIC_BIF_ERROR_2_MASK 0x1
#define MT6351_PMIC_BIF_ERROR_2_SHIFT 15
#define MT6351_PMIC_BIF_DATA_3_ADDR MT6351_BIF_CON23
#define MT6351_PMIC_BIF_DATA_3_MASK 0xFF
#define MT6351_PMIC_BIF_DATA_3_SHIFT 0
#define MT6351_PMIC_BIF_ACK_3_ADDR MT6351_BIF_CON23
#define MT6351_PMIC_BIF_ACK_3_MASK 0x1
#define MT6351_PMIC_BIF_ACK_3_SHIFT 8
#define MT6351_PMIC_BIF_ERROR_3_ADDR MT6351_BIF_CON23
#define MT6351_PMIC_BIF_ERROR_3_MASK 0x1
#define MT6351_PMIC_BIF_ERROR_3_SHIFT 15
#define MT6351_PMIC_BIF_DATA_4_ADDR MT6351_BIF_CON24
#define MT6351_PMIC_BIF_DATA_4_MASK 0xFF
#define MT6351_PMIC_BIF_DATA_4_SHIFT 0
#define MT6351_PMIC_BIF_ACK_4_ADDR MT6351_BIF_CON24
#define MT6351_PMIC_BIF_ACK_4_MASK 0x1
#define MT6351_PMIC_BIF_ACK_4_SHIFT 8
#define MT6351_PMIC_BIF_ERROR_4_ADDR MT6351_BIF_CON24
#define MT6351_PMIC_BIF_ERROR_4_MASK 0x1
#define MT6351_PMIC_BIF_ERROR_4_SHIFT 15
#define MT6351_PMIC_BIF_DATA_5_ADDR MT6351_BIF_CON25
#define MT6351_PMIC_BIF_DATA_5_MASK 0xFF
#define MT6351_PMIC_BIF_DATA_5_SHIFT 0
#define MT6351_PMIC_BIF_ACK_5_ADDR MT6351_BIF_CON25
#define MT6351_PMIC_BIF_ACK_5_MASK 0x1
#define MT6351_PMIC_BIF_ACK_5_SHIFT 8
#define MT6351_PMIC_BIF_ERROR_5_ADDR MT6351_BIF_CON25
#define MT6351_PMIC_BIF_ERROR_5_MASK 0x1
#define MT6351_PMIC_BIF_ERROR_5_SHIFT 15
#define MT6351_PMIC_BIF_DATA_6_ADDR MT6351_BIF_CON26
#define MT6351_PMIC_BIF_DATA_6_MASK 0xFF
#define MT6351_PMIC_BIF_DATA_6_SHIFT 0
#define MT6351_PMIC_BIF_ACK_6_ADDR MT6351_BIF_CON26
#define MT6351_PMIC_BIF_ACK_6_MASK 0x1
#define MT6351_PMIC_BIF_ACK_6_SHIFT 8
#define MT6351_PMIC_BIF_ERROR_6_ADDR MT6351_BIF_CON26
#define MT6351_PMIC_BIF_ERROR_6_MASK 0x1
#define MT6351_PMIC_BIF_ERROR_6_SHIFT 15
#define MT6351_PMIC_BIF_DATA_7_ADDR MT6351_BIF_CON27
#define MT6351_PMIC_BIF_DATA_7_MASK 0xFF
#define MT6351_PMIC_BIF_DATA_7_SHIFT 0
#define MT6351_PMIC_BIF_ACK_7_ADDR MT6351_BIF_CON27
#define MT6351_PMIC_BIF_ACK_7_MASK 0x1
#define MT6351_PMIC_BIF_ACK_7_SHIFT 8
#define MT6351_PMIC_BIF_ERROR_7_ADDR MT6351_BIF_CON27
#define MT6351_PMIC_BIF_ERROR_7_MASK 0x1
#define MT6351_PMIC_BIF_ERROR_7_SHIFT 15
#define MT6351_PMIC_BIF_DATA_8_ADDR MT6351_BIF_CON28
#define MT6351_PMIC_BIF_DATA_8_MASK 0xFF
#define MT6351_PMIC_BIF_DATA_8_SHIFT 0
#define MT6351_PMIC_BIF_ACK_8_ADDR MT6351_BIF_CON28
#define MT6351_PMIC_BIF_ACK_8_MASK 0x1
#define MT6351_PMIC_BIF_ACK_8_SHIFT 8
#define MT6351_PMIC_BIF_ERROR_8_ADDR MT6351_BIF_CON28
#define MT6351_PMIC_BIF_ERROR_8_MASK 0x1
#define MT6351_PMIC_BIF_ERROR_8_SHIFT 15
#define MT6351_PMIC_BIF_DATA_9_ADDR MT6351_BIF_CON29
#define MT6351_PMIC_BIF_DATA_9_MASK 0xFF
#define MT6351_PMIC_BIF_DATA_9_SHIFT 0
#define MT6351_PMIC_BIF_ACK_9_ADDR MT6351_BIF_CON29
#define MT6351_PMIC_BIF_ACK_9_MASK 0x1
#define MT6351_PMIC_BIF_ACK_9_SHIFT 8
#define MT6351_PMIC_BIF_ERROR_9_ADDR MT6351_BIF_CON29
#define MT6351_PMIC_BIF_ERROR_9_MASK 0x1
#define MT6351_PMIC_BIF_ERROR_9_SHIFT 15
#define MT6351_PMIC_BIF_TEST_MODE0_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_TEST_MODE0_MASK 0x1
#define MT6351_PMIC_BIF_TEST_MODE0_SHIFT 0
#define MT6351_PMIC_BIF_TEST_MODE1_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_TEST_MODE1_MASK 0x1
#define MT6351_PMIC_BIF_TEST_MODE1_SHIFT 1
#define MT6351_PMIC_BIF_TEST_MODE2_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_TEST_MODE2_MASK 0x1
#define MT6351_PMIC_BIF_TEST_MODE2_SHIFT 2
#define MT6351_PMIC_BIF_TEST_MODE3_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_TEST_MODE3_MASK 0x1
#define MT6351_PMIC_BIF_TEST_MODE3_SHIFT 3
#define MT6351_PMIC_BIF_TEST_MODE4_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_TEST_MODE4_MASK 0x1
#define MT6351_PMIC_BIF_TEST_MODE4_SHIFT 4
#define MT6351_PMIC_BIF_TEST_MODE5_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_TEST_MODE5_MASK 0x1
#define MT6351_PMIC_BIF_TEST_MODE5_SHIFT 5
#define MT6351_PMIC_BIF_TEST_MODE6_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_TEST_MODE6_MASK 0x1
#define MT6351_PMIC_BIF_TEST_MODE6_SHIFT 6
#define MT6351_PMIC_BIF_TEST_MODE7_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_TEST_MODE7_MASK 0x1
#define MT6351_PMIC_BIF_TEST_MODE7_SHIFT 7
#define MT6351_PMIC_BIF_TEST_MODE8_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_TEST_MODE8_MASK 0x1
#define MT6351_PMIC_BIF_TEST_MODE8_SHIFT 8
#define MT6351_PMIC_BIF_BAT_LOST_SW_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_BAT_LOST_SW_MASK 0x1
#define MT6351_PMIC_BIF_BAT_LOST_SW_SHIFT 11
#define MT6351_PMIC_BIF_RX_DATA_SW_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_RX_DATA_SW_MASK 0x1
#define MT6351_PMIC_BIF_RX_DATA_SW_SHIFT 12
#define MT6351_PMIC_BIF_TX_DATA_SW_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_TX_DATA_SW_MASK 0x1
#define MT6351_PMIC_BIF_TX_DATA_SW_SHIFT 13
#define MT6351_PMIC_BIF_RX_EN_SW_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_RX_EN_SW_MASK 0x1
#define MT6351_PMIC_BIF_RX_EN_SW_SHIFT 14
#define MT6351_PMIC_BIF_TX_EN_SW_ADDR MT6351_BIF_CON30
#define MT6351_PMIC_BIF_TX_EN_SW_MASK 0x1
#define MT6351_PMIC_BIF_TX_EN_SW_SHIFT 15
#define MT6351_PMIC_BIF_BACK_NORMAL_ADDR MT6351_BIF_CON31
#define MT6351_PMIC_BIF_BACK_NORMAL_MASK 0x1
#define MT6351_PMIC_BIF_BACK_NORMAL_SHIFT 0
#define MT6351_PMIC_BIF_IRQ_CLR_ADDR MT6351_BIF_CON31
#define MT6351_PMIC_BIF_IRQ_CLR_MASK 0x1
#define MT6351_PMIC_BIF_IRQ_CLR_SHIFT 1
#define MT6351_PMIC_BIF_BAT_LOST_GATED_ADDR MT6351_BIF_CON31
#define MT6351_PMIC_BIF_BAT_LOST_GATED_MASK 0x1
#define MT6351_PMIC_BIF_BAT_LOST_GATED_SHIFT 10
#define MT6351_PMIC_BIF_IRQ_ADDR MT6351_BIF_CON31
#define MT6351_PMIC_BIF_IRQ_MASK 0x1
#define MT6351_PMIC_BIF_IRQ_SHIFT 11
#define MT6351_PMIC_BIF_TIMEOUT_ADDR MT6351_BIF_CON31
#define MT6351_PMIC_BIF_TIMEOUT_MASK 0x1
#define MT6351_PMIC_BIF_TIMEOUT_SHIFT 12
#define MT6351_PMIC_BIF_BAT_LOST_ADDR MT6351_BIF_CON31
#define MT6351_PMIC_BIF_BAT_LOST_MASK 0x1
#define MT6351_PMIC_BIF_BAT_LOST_SHIFT 13
#define MT6351_PMIC_BIF_TOTAL_VALID_ADDR MT6351_BIF_CON31
#define MT6351_PMIC_BIF_TOTAL_VALID_MASK 0x1
#define MT6351_PMIC_BIF_TOTAL_VALID_SHIFT 14
#define MT6351_PMIC_BIF_BUS_STATUS_ADDR MT6351_BIF_CON31
#define MT6351_PMIC_BIF_BUS_STATUS_MASK 0x1
#define MT6351_PMIC_BIF_BUS_STATUS_SHIFT 15
#define MT6351_PMIC_BIF_POWER_UP_COUNT_ADDR MT6351_BIF_CON32
#define MT6351_PMIC_BIF_POWER_UP_COUNT_MASK 0x1F
#define MT6351_PMIC_BIF_POWER_UP_COUNT_SHIFT 0
#define MT6351_PMIC_BIF_POWER_UP_ADDR MT6351_BIF_CON32
#define MT6351_PMIC_BIF_POWER_UP_MASK 0x1
#define MT6351_PMIC_BIF_POWER_UP_SHIFT 15
#define MT6351_PMIC_BIF_RX_ERROR_UNKNOWN_ADDR MT6351_BIF_CON33
#define MT6351_PMIC_BIF_RX_ERROR_UNKNOWN_MASK 0x1
#define MT6351_PMIC_BIF_RX_ERROR_UNKNOWN_SHIFT 2
#define MT6351_PMIC_BIF_RX_ERROR_INSUFF_ADDR MT6351_BIF_CON33
#define MT6351_PMIC_BIF_RX_ERROR_INSUFF_MASK 0x1
#define MT6351_PMIC_BIF_RX_ERROR_INSUFF_SHIFT 3
#define MT6351_PMIC_BIF_RX_ERROR_LOWPHASE_ADDR MT6351_BIF_CON33
#define MT6351_PMIC_BIF_RX_ERROR_LOWPHASE_MASK 0x1
#define MT6351_PMIC_BIF_RX_ERROR_LOWPHASE_SHIFT 4
#define MT6351_PMIC_BIF_RX_STATE_ADDR MT6351_BIF_CON33
#define MT6351_PMIC_BIF_RX_STATE_MASK 0x7
#define MT6351_PMIC_BIF_RX_STATE_SHIFT 5
#define MT6351_PMIC_BIF_FLOW_CTL_STATE_ADDR MT6351_BIF_CON33
#define MT6351_PMIC_BIF_FLOW_CTL_STATE_MASK 0x3
#define MT6351_PMIC_BIF_FLOW_CTL_STATE_SHIFT 8
#define MT6351_PMIC_BIF_TX_STATE_ADDR MT6351_BIF_CON33
#define MT6351_PMIC_BIF_TX_STATE_MASK 0x3
#define MT6351_PMIC_BIF_TX_STATE_SHIFT 10
#define MT6351_PMIC_AD_QI_BIF_RX_DATA_ADDR MT6351_BIF_CON33
#define MT6351_PMIC_AD_QI_BIF_RX_DATA_MASK 0x1
#define MT6351_PMIC_AD_QI_BIF_RX_DATA_SHIFT 12
#define MT6351_PMIC_DA_QI_BIF_RX_EN_ADDR MT6351_BIF_CON33
#define MT6351_PMIC_DA_QI_BIF_RX_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_BIF_RX_EN_SHIFT 13
#define MT6351_PMIC_DA_QI_BIF_TX_DATA_ADDR MT6351_BIF_CON33
#define MT6351_PMIC_DA_QI_BIF_TX_DATA_MASK 0x1
#define MT6351_PMIC_DA_QI_BIF_TX_DATA_SHIFT 14
#define MT6351_PMIC_DA_QI_BIF_TX_EN_ADDR MT6351_BIF_CON33
#define MT6351_PMIC_DA_QI_BIF_TX_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_BIF_TX_EN_SHIFT 15
#define MT6351_PMIC_BIF_TX_DATA_FIANL_ADDR MT6351_BIF_CON34
#define MT6351_PMIC_BIF_TX_DATA_FIANL_MASK 0xFFFF
#define MT6351_PMIC_BIF_TX_DATA_FIANL_SHIFT 0
#define MT6351_PMIC_BIF_RX_DATA_SAMPLING_ADDR MT6351_BIF_CON35
#define MT6351_PMIC_BIF_RX_DATA_SAMPLING_MASK 0xFFFF
#define MT6351_PMIC_BIF_RX_DATA_SAMPLING_SHIFT 0
#define MT6351_PMIC_BIF_RX_DATA_RECOVERY_ADDR MT6351_BIF_CON36
#define MT6351_PMIC_BIF_RX_DATA_RECOVERY_MASK 0x3FFF
#define MT6351_PMIC_BIF_RX_DATA_RECOVERY_SHIFT 0
#define MT6351_PMIC_RG_BATON_HT_EN_ADDR MT6351_BIF_BAT_CON0
#define MT6351_PMIC_RG_BATON_HT_EN_MASK 0x1
#define MT6351_PMIC_RG_BATON_HT_EN_SHIFT 0
#define MT6351_PMIC_RG_BATON_HT_EN_DLY_TIME_ADDR MT6351_BIF_BAT_CON0
#define MT6351_PMIC_RG_BATON_HT_EN_DLY_TIME_MASK 0x1
#define MT6351_PMIC_RG_BATON_HT_EN_DLY_TIME_SHIFT 4
#define MT6351_PMIC_DA_QI_BATON_HT_EN_ADDR MT6351_BIF_BAT_CON0
#define MT6351_PMIC_DA_QI_BATON_HT_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_BATON_HT_EN_SHIFT 5
#define MT6351_PMIC_BIF_TIMEOUT_SET_ADDR MT6351_BIF_CON37
#define MT6351_PMIC_BIF_TIMEOUT_SET_MASK 0xFFFF
#define MT6351_PMIC_BIF_TIMEOUT_SET_SHIFT 0
#define MT6351_PMIC_BIF_RX_DEG_WND_ADDR MT6351_BIF_CON38
#define MT6351_PMIC_BIF_RX_DEG_WND_MASK 0x3FF
#define MT6351_PMIC_BIF_RX_DEG_WND_SHIFT 0
#define MT6351_PMIC_BIF_RX_DEG_EN_ADDR MT6351_BIF_CON38
#define MT6351_PMIC_BIF_RX_DEG_EN_MASK 0x1
#define MT6351_PMIC_BIF_RX_DEG_EN_SHIFT 15
#define MT6351_PMIC_BIF_RSV1_ADDR MT6351_BIF_CON39
#define MT6351_PMIC_BIF_RSV1_MASK 0xFF
#define MT6351_PMIC_BIF_RSV1_SHIFT 0
#define MT6351_PMIC_BIF_RSV0_ADDR MT6351_BIF_CON39
#define MT6351_PMIC_BIF_RSV0_MASK 0xFF
#define MT6351_PMIC_BIF_RSV0_SHIFT 8
#define MT6351_PMIC_RG_OTP_PA_ADDR MT6351_OTP_CON0
#define MT6351_PMIC_RG_OTP_PA_MASK 0x3F
#define MT6351_PMIC_RG_OTP_PA_SHIFT 0
#define MT6351_PMIC_RG_OTP_PDIN_ADDR MT6351_OTP_CON1
#define MT6351_PMIC_RG_OTP_PDIN_MASK 0xFF
#define MT6351_PMIC_RG_OTP_PDIN_SHIFT 0
#define MT6351_PMIC_RG_OTP_PTM_ADDR MT6351_OTP_CON2
#define MT6351_PMIC_RG_OTP_PTM_MASK 0x3
#define MT6351_PMIC_RG_OTP_PTM_SHIFT 0
#define MT6351_PMIC_RG_OTP_PWE_ADDR MT6351_OTP_CON3
#define MT6351_PMIC_RG_OTP_PWE_MASK 0x3
#define MT6351_PMIC_RG_OTP_PWE_SHIFT 0
#define MT6351_PMIC_RG_OTP_PPROG_ADDR MT6351_OTP_CON4
#define MT6351_PMIC_RG_OTP_PPROG_MASK 0x1
#define MT6351_PMIC_RG_OTP_PPROG_SHIFT 0
#define MT6351_PMIC_RG_OTP_PWE_SRC_ADDR MT6351_OTP_CON5
#define MT6351_PMIC_RG_OTP_PWE_SRC_MASK 0x1
#define MT6351_PMIC_RG_OTP_PWE_SRC_SHIFT 0
#define MT6351_PMIC_RG_OTP_PROG_PKEY_ADDR MT6351_OTP_CON6
#define MT6351_PMIC_RG_OTP_PROG_PKEY_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_PROG_PKEY_SHIFT 0
#define MT6351_PMIC_RG_OTP_RD_PKEY_ADDR MT6351_OTP_CON7
#define MT6351_PMIC_RG_OTP_RD_PKEY_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_RD_PKEY_SHIFT 0
#define MT6351_PMIC_RG_OTP_RD_TRIG_ADDR MT6351_OTP_CON8
#define MT6351_PMIC_RG_OTP_RD_TRIG_MASK 0x1
#define MT6351_PMIC_RG_OTP_RD_TRIG_SHIFT 0
#define MT6351_PMIC_RG_RD_RDY_BYPASS_ADDR MT6351_OTP_CON9
#define MT6351_PMIC_RG_RD_RDY_BYPASS_MASK 0x1
#define MT6351_PMIC_RG_RD_RDY_BYPASS_SHIFT 0
#define MT6351_PMIC_RG_SKIP_OTP_OUT_ADDR MT6351_OTP_CON10
#define MT6351_PMIC_RG_SKIP_OTP_OUT_MASK 0x1
#define MT6351_PMIC_RG_SKIP_OTP_OUT_SHIFT 0
#define MT6351_PMIC_RG_OTP_RD_SW_ADDR MT6351_OTP_CON11
#define MT6351_PMIC_RG_OTP_RD_SW_MASK 0x1
#define MT6351_PMIC_RG_OTP_RD_SW_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_SW_ADDR MT6351_OTP_CON12
#define MT6351_PMIC_RG_OTP_DOUT_SW_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_SW_SHIFT 0
#define MT6351_PMIC_RG_OTP_RD_BUSY_ADDR MT6351_OTP_CON13
#define MT6351_PMIC_RG_OTP_RD_BUSY_MASK 0x1
#define MT6351_PMIC_RG_OTP_RD_BUSY_SHIFT 0
#define MT6351_PMIC_RG_OTP_RD_ACK_ADDR MT6351_OTP_CON13
#define MT6351_PMIC_RG_OTP_RD_ACK_MASK 0x1
#define MT6351_PMIC_RG_OTP_RD_ACK_SHIFT 2
#define MT6351_PMIC_RG_OTP_PA_SW_ADDR MT6351_OTP_CON14
#define MT6351_PMIC_RG_OTP_PA_SW_MASK 0x1F
#define MT6351_PMIC_RG_OTP_PA_SW_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_0_15_ADDR MT6351_OTP_DOUT_0_15
#define MT6351_PMIC_RG_OTP_DOUT_0_15_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_0_15_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_16_31_ADDR MT6351_OTP_DOUT_16_31
#define MT6351_PMIC_RG_OTP_DOUT_16_31_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_16_31_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_32_47_ADDR MT6351_OTP_DOUT_32_47
#define MT6351_PMIC_RG_OTP_DOUT_32_47_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_32_47_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_48_63_ADDR MT6351_OTP_DOUT_48_63
#define MT6351_PMIC_RG_OTP_DOUT_48_63_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_48_63_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_64_79_ADDR MT6351_OTP_DOUT_64_79
#define MT6351_PMIC_RG_OTP_DOUT_64_79_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_64_79_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_80_95_ADDR MT6351_OTP_DOUT_80_95
#define MT6351_PMIC_RG_OTP_DOUT_80_95_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_80_95_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_96_111_ADDR MT6351_OTP_DOUT_96_111
#define MT6351_PMIC_RG_OTP_DOUT_96_111_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_96_111_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_112_127_ADDR MT6351_OTP_DOUT_112_127
#define MT6351_PMIC_RG_OTP_DOUT_112_127_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_112_127_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_128_143_ADDR MT6351_OTP_DOUT_128_143
#define MT6351_PMIC_RG_OTP_DOUT_128_143_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_128_143_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_144_159_ADDR MT6351_OTP_DOUT_144_159
#define MT6351_PMIC_RG_OTP_DOUT_144_159_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_144_159_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_160_175_ADDR MT6351_OTP_DOUT_160_175
#define MT6351_PMIC_RG_OTP_DOUT_160_175_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_160_175_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_176_191_ADDR MT6351_OTP_DOUT_176_191
#define MT6351_PMIC_RG_OTP_DOUT_176_191_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_176_191_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_192_207_ADDR MT6351_OTP_DOUT_192_207
#define MT6351_PMIC_RG_OTP_DOUT_192_207_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_192_207_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_208_223_ADDR MT6351_OTP_DOUT_208_223
#define MT6351_PMIC_RG_OTP_DOUT_208_223_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_208_223_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_224_239_ADDR MT6351_OTP_DOUT_224_239
#define MT6351_PMIC_RG_OTP_DOUT_224_239_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_224_239_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_240_255_ADDR MT6351_OTP_DOUT_240_255
#define MT6351_PMIC_RG_OTP_DOUT_240_255_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_240_255_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_256_271_ADDR MT6351_OTP_DOUT_256_271
#define MT6351_PMIC_RG_OTP_DOUT_256_271_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_256_271_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_272_287_ADDR MT6351_OTP_DOUT_272_287
#define MT6351_PMIC_RG_OTP_DOUT_272_287_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_272_287_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_288_303_ADDR MT6351_OTP_DOUT_288_303
#define MT6351_PMIC_RG_OTP_DOUT_288_303_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_288_303_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_304_319_ADDR MT6351_OTP_DOUT_304_319
#define MT6351_PMIC_RG_OTP_DOUT_304_319_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_304_319_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_320_335_ADDR MT6351_OTP_DOUT_320_335
#define MT6351_PMIC_RG_OTP_DOUT_320_335_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_320_335_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_336_351_ADDR MT6351_OTP_DOUT_336_351
#define MT6351_PMIC_RG_OTP_DOUT_336_351_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_336_351_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_352_367_ADDR MT6351_OTP_DOUT_352_367
#define MT6351_PMIC_RG_OTP_DOUT_352_367_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_352_367_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_368_383_ADDR MT6351_OTP_DOUT_368_383
#define MT6351_PMIC_RG_OTP_DOUT_368_383_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_368_383_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_384_399_ADDR MT6351_OTP_DOUT_384_399
#define MT6351_PMIC_RG_OTP_DOUT_384_399_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_384_399_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_400_415_ADDR MT6351_OTP_DOUT_400_415
#define MT6351_PMIC_RG_OTP_DOUT_400_415_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_400_415_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_416_431_ADDR MT6351_OTP_DOUT_416_431
#define MT6351_PMIC_RG_OTP_DOUT_416_431_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_416_431_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_432_447_ADDR MT6351_OTP_DOUT_432_447
#define MT6351_PMIC_RG_OTP_DOUT_432_447_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_432_447_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_448_463_ADDR MT6351_OTP_DOUT_448_463
#define MT6351_PMIC_RG_OTP_DOUT_448_463_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_448_463_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_464_479_ADDR MT6351_OTP_DOUT_464_479
#define MT6351_PMIC_RG_OTP_DOUT_464_479_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_464_479_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_480_495_ADDR MT6351_OTP_DOUT_480_495
#define MT6351_PMIC_RG_OTP_DOUT_480_495_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_480_495_SHIFT 0
#define MT6351_PMIC_RG_OTP_DOUT_496_511_ADDR MT6351_OTP_DOUT_496_511
#define MT6351_PMIC_RG_OTP_DOUT_496_511_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_DOUT_496_511_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_0_15_ADDR MT6351_OTP_VAL_0_15
#define MT6351_PMIC_RG_OTP_VAL_0_15_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_0_15_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_16_31_ADDR MT6351_OTP_VAL_16_31
#define MT6351_PMIC_RG_OTP_VAL_16_31_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_16_31_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_32_47_ADDR MT6351_OTP_VAL_32_47
#define MT6351_PMIC_RG_OTP_VAL_32_47_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_32_47_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_48_63_ADDR MT6351_OTP_VAL_48_63
#define MT6351_PMIC_RG_OTP_VAL_48_63_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_48_63_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_64_79_ADDR MT6351_OTP_VAL_64_79
#define MT6351_PMIC_RG_OTP_VAL_64_79_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_64_79_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_80_95_ADDR MT6351_OTP_VAL_80_95
#define MT6351_PMIC_RG_OTP_VAL_80_95_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_80_95_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_96_111_ADDR MT6351_OTP_VAL_96_111
#define MT6351_PMIC_RG_OTP_VAL_96_111_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_96_111_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_112_127_ADDR MT6351_OTP_VAL_112_127
#define MT6351_PMIC_RG_OTP_VAL_112_127_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_112_127_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_128_143_ADDR MT6351_OTP_VAL_128_143
#define MT6351_PMIC_RG_OTP_VAL_128_143_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_128_143_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_144_159_ADDR MT6351_OTP_VAL_144_159
#define MT6351_PMIC_RG_OTP_VAL_144_159_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_144_159_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_160_175_ADDR MT6351_OTP_VAL_160_175
#define MT6351_PMIC_RG_OTP_VAL_160_175_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_160_175_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_176_191_ADDR MT6351_OTP_VAL_176_191
#define MT6351_PMIC_RG_OTP_VAL_176_191_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_176_191_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_192_207_ADDR MT6351_OTP_VAL_192_207
#define MT6351_PMIC_RG_OTP_VAL_192_207_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_192_207_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_208_223_ADDR MT6351_OTP_VAL_208_223
#define MT6351_PMIC_RG_OTP_VAL_208_223_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_208_223_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_224_239_ADDR MT6351_OTP_VAL_224_239
#define MT6351_PMIC_RG_OTP_VAL_224_239_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_224_239_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_240_255_ADDR MT6351_OTP_VAL_240_255
#define MT6351_PMIC_RG_OTP_VAL_240_255_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_240_255_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_256_271_ADDR MT6351_OTP_VAL_256_271
#define MT6351_PMIC_RG_OTP_VAL_256_271_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_256_271_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_272_287_ADDR MT6351_OTP_VAL_272_287
#define MT6351_PMIC_RG_OTP_VAL_272_287_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_272_287_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_288_303_ADDR MT6351_OTP_VAL_288_303
#define MT6351_PMIC_RG_OTP_VAL_288_303_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_288_303_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_304_319_ADDR MT6351_OTP_VAL_304_319
#define MT6351_PMIC_RG_OTP_VAL_304_319_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_304_319_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_320_335_ADDR MT6351_OTP_VAL_320_335
#define MT6351_PMIC_RG_OTP_VAL_320_335_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_320_335_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_336_351_ADDR MT6351_OTP_VAL_336_351
#define MT6351_PMIC_RG_OTP_VAL_336_351_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_336_351_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_352_367_ADDR MT6351_OTP_VAL_352_367
#define MT6351_PMIC_RG_OTP_VAL_352_367_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_352_367_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_368_383_ADDR MT6351_OTP_VAL_368_383
#define MT6351_PMIC_RG_OTP_VAL_368_383_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_368_383_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_384_399_ADDR MT6351_OTP_VAL_384_399
#define MT6351_PMIC_RG_OTP_VAL_384_399_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_384_399_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_400_415_ADDR MT6351_OTP_VAL_400_415
#define MT6351_PMIC_RG_OTP_VAL_400_415_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_400_415_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_416_431_ADDR MT6351_OTP_VAL_416_431
#define MT6351_PMIC_RG_OTP_VAL_416_431_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_416_431_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_432_447_ADDR MT6351_OTP_VAL_432_447
#define MT6351_PMIC_RG_OTP_VAL_432_447_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_432_447_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_448_463_ADDR MT6351_OTP_VAL_448_463
#define MT6351_PMIC_RG_OTP_VAL_448_463_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_448_463_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_464_479_ADDR MT6351_OTP_VAL_464_479
#define MT6351_PMIC_RG_OTP_VAL_464_479_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_464_479_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_480_495_ADDR MT6351_OTP_VAL_480_495
#define MT6351_PMIC_RG_OTP_VAL_480_495_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_480_495_SHIFT 0
#define MT6351_PMIC_RG_OTP_VAL_496_511_ADDR MT6351_OTP_VAL_496_511
#define MT6351_PMIC_RG_OTP_VAL_496_511_MASK 0xFFFF
#define MT6351_PMIC_RG_OTP_VAL_496_511_SHIFT 0
#define MT6351_PMIC_MIX_EOSC32_STP_LPDTB_ADDR MT6351_RTC_MIX_CON0
#define MT6351_PMIC_MIX_EOSC32_STP_LPDTB_MASK 0x1
#define MT6351_PMIC_MIX_EOSC32_STP_LPDTB_SHIFT 1
#define MT6351_PMIC_MIX_EOSC32_STP_LPDEN_ADDR MT6351_RTC_MIX_CON0
#define MT6351_PMIC_MIX_EOSC32_STP_LPDEN_MASK 0x1
#define MT6351_PMIC_MIX_EOSC32_STP_LPDEN_SHIFT 2
#define MT6351_PMIC_MIX_XOSC32_STP_PWDB_ADDR MT6351_RTC_MIX_CON0
#define MT6351_PMIC_MIX_XOSC32_STP_PWDB_MASK 0x1
#define MT6351_PMIC_MIX_XOSC32_STP_PWDB_SHIFT 3
#define MT6351_PMIC_MIX_XOSC32_STP_LPDTB_ADDR MT6351_RTC_MIX_CON0
#define MT6351_PMIC_MIX_XOSC32_STP_LPDTB_MASK 0x1
#define MT6351_PMIC_MIX_XOSC32_STP_LPDTB_SHIFT 4
#define MT6351_PMIC_MIX_XOSC32_STP_LPDEN_ADDR MT6351_RTC_MIX_CON0
#define MT6351_PMIC_MIX_XOSC32_STP_LPDEN_MASK 0x1
#define MT6351_PMIC_MIX_XOSC32_STP_LPDEN_SHIFT 5
#define MT6351_PMIC_MIX_XOSC32_STP_LPDRST_ADDR MT6351_RTC_MIX_CON0
#define MT6351_PMIC_MIX_XOSC32_STP_LPDRST_MASK 0x1
#define MT6351_PMIC_MIX_XOSC32_STP_LPDRST_SHIFT 6
#define MT6351_PMIC_MIX_XOSC32_STP_CALI_ADDR MT6351_RTC_MIX_CON0
#define MT6351_PMIC_MIX_XOSC32_STP_CALI_MASK 0x1F
#define MT6351_PMIC_MIX_XOSC32_STP_CALI_SHIFT 7
#define MT6351_PMIC_STMP_MODE_ADDR MT6351_RTC_MIX_CON0
#define MT6351_PMIC_STMP_MODE_MASK 0x1
#define MT6351_PMIC_STMP_MODE_SHIFT 12
#define MT6351_PMIC_MIX_EOSC32_STP_CHOP_EN_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_EOSC32_STP_CHOP_EN_MASK 0x1
#define MT6351_PMIC_MIX_EOSC32_STP_CHOP_EN_SHIFT 0
#define MT6351_PMIC_MIX_DCXO_STP_LVSH_EN_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_DCXO_STP_LVSH_EN_MASK 0x1
#define MT6351_PMIC_MIX_DCXO_STP_LVSH_EN_SHIFT 1
#define MT6351_PMIC_MIX_PMU_STP_DDLO_VRTC_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_PMU_STP_DDLO_VRTC_MASK 0x1
#define MT6351_PMIC_MIX_PMU_STP_DDLO_VRTC_SHIFT 2
#define MT6351_PMIC_MIX_PMU_STP_DDLO_VRTC_EN_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_PMU_STP_DDLO_VRTC_EN_MASK 0x1
#define MT6351_PMIC_MIX_PMU_STP_DDLO_VRTC_EN_SHIFT 3
#define MT6351_PMIC_MIX_RTC_STP_XOSC32_ENB_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_RTC_STP_XOSC32_ENB_MASK 0x1
#define MT6351_PMIC_MIX_RTC_STP_XOSC32_ENB_SHIFT 4
#define MT6351_PMIC_MIX_DCXO_STP_TEST_DEGLITCH_MODE_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_DCXO_STP_TEST_DEGLITCH_MODE_MASK 0x1
#define MT6351_PMIC_MIX_DCXO_STP_TEST_DEGLITCH_MODE_SHIFT 5
#define MT6351_PMIC_MIX_EOSC32_STP_RSV_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_EOSC32_STP_RSV_MASK 0x3
#define MT6351_PMIC_MIX_EOSC32_STP_RSV_SHIFT 6
#define MT6351_PMIC_MIX_EOSC32_VCT_EN_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_EOSC32_VCT_EN_MASK 0x1
#define MT6351_PMIC_MIX_EOSC32_VCT_EN_SHIFT 8
#define MT6351_PMIC_MIX_EOSC32_OPT_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_EOSC32_OPT_MASK 0x3
#define MT6351_PMIC_MIX_EOSC32_OPT_SHIFT 9
#define MT6351_PMIC_MIX_DCXO_STP_LVSH_EN_INT_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_DCXO_STP_LVSH_EN_INT_MASK 0x1
#define MT6351_PMIC_MIX_DCXO_STP_LVSH_EN_INT_SHIFT 11
#define MT6351_PMIC_MIX_RTC_GPIO_COREDETB_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_RTC_GPIO_COREDETB_MASK 0x1
#define MT6351_PMIC_MIX_RTC_GPIO_COREDETB_SHIFT 12
#define MT6351_PMIC_MIX_RTC_GPIO_F32KOB_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_RTC_GPIO_F32KOB_MASK 0x1
#define MT6351_PMIC_MIX_RTC_GPIO_F32KOB_SHIFT 13
#define MT6351_PMIC_MIX_RTC_GPIO_GPO_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_RTC_GPIO_GPO_MASK 0x1
#define MT6351_PMIC_MIX_RTC_GPIO_GPO_SHIFT 14
#define MT6351_PMIC_MIX_RTC_GPIO_OE_ADDR MT6351_RTC_MIX_CON1
#define MT6351_PMIC_MIX_RTC_GPIO_OE_MASK 0x1
#define MT6351_PMIC_MIX_RTC_GPIO_OE_SHIFT 15
#define MT6351_PMIC_MIX_RTC_STP_DEBUG_OUT_ADDR MT6351_RTC_MIX_CON2
#define MT6351_PMIC_MIX_RTC_STP_DEBUG_OUT_MASK 0x3
#define MT6351_PMIC_MIX_RTC_STP_DEBUG_OUT_SHIFT 0
#define MT6351_PMIC_MIX_RTC_STP_DEBUG_SEL_ADDR MT6351_RTC_MIX_CON2
#define MT6351_PMIC_MIX_RTC_STP_DEBUG_SEL_MASK 0x3
#define MT6351_PMIC_MIX_RTC_STP_DEBUG_SEL_SHIFT 4
#define MT6351_PMIC_MIX_RTC_STP_K_EOSC32_EN_ADDR MT6351_RTC_MIX_CON2
#define MT6351_PMIC_MIX_RTC_STP_K_EOSC32_EN_MASK 0x1
#define MT6351_PMIC_MIX_RTC_STP_K_EOSC32_EN_SHIFT 7
#define MT6351_PMIC_MIX_RTC_STP_EMBCK_SEL_ADDR MT6351_RTC_MIX_CON2
#define MT6351_PMIC_MIX_RTC_STP_EMBCK_SEL_MASK 0x1
#define MT6351_PMIC_MIX_RTC_STP_EMBCK_SEL_SHIFT 8
#define MT6351_PMIC_MIX_STP_BBWAKEUP_ADDR MT6351_RTC_MIX_CON2
#define MT6351_PMIC_MIX_STP_BBWAKEUP_MASK 0x1
#define MT6351_PMIC_MIX_STP_BBWAKEUP_SHIFT 9
#define MT6351_PMIC_MIX_STP_RTC_DDLO_ADDR MT6351_RTC_MIX_CON2
#define MT6351_PMIC_MIX_STP_RTC_DDLO_MASK 0x1
#define MT6351_PMIC_MIX_STP_RTC_DDLO_SHIFT 10
#define MT6351_PMIC_MIX_RTC_XOSC32_ENB_ADDR MT6351_RTC_MIX_CON2
#define MT6351_PMIC_MIX_RTC_XOSC32_ENB_MASK 0x1
#define MT6351_PMIC_MIX_RTC_XOSC32_ENB_SHIFT 11
#define MT6351_PMIC_MIX_EFUSE_XOSC32_ENB_OPT_ADDR MT6351_RTC_MIX_CON2
#define MT6351_PMIC_MIX_EFUSE_XOSC32_ENB_OPT_MASK 0x1
#define MT6351_PMIC_MIX_EFUSE_XOSC32_ENB_OPT_SHIFT 12
#define MT6351_PMIC_FG_ON_ADDR MT6351_FGADC_CON0
#define MT6351_PMIC_FG_ON_MASK 0x1
#define MT6351_PMIC_FG_ON_SHIFT 0
#define MT6351_PMIC_FG_CAL_ADDR MT6351_FGADC_CON0
#define MT6351_PMIC_FG_CAL_MASK 0x3
#define MT6351_PMIC_FG_CAL_SHIFT 2
#define MT6351_PMIC_FG_AUTOCALRATE_ADDR MT6351_FGADC_CON0
#define MT6351_PMIC_FG_AUTOCALRATE_MASK 0x7
#define MT6351_PMIC_FG_AUTOCALRATE_SHIFT 4
#define MT6351_PMIC_FG_SW_CR_ADDR MT6351_FGADC_CON0
#define MT6351_PMIC_FG_SW_CR_MASK 0x1
#define MT6351_PMIC_FG_SW_CR_SHIFT 8
#define MT6351_PMIC_FG_SW_READ_PRE_ADDR MT6351_FGADC_CON0
#define MT6351_PMIC_FG_SW_READ_PRE_MASK 0x1
#define MT6351_PMIC_FG_SW_READ_PRE_SHIFT 9
#define MT6351_PMIC_FG_LATCHDATA_ST_ADDR MT6351_FGADC_CON0
#define MT6351_PMIC_FG_LATCHDATA_ST_MASK 0x1
#define MT6351_PMIC_FG_LATCHDATA_ST_SHIFT 10
#define MT6351_PMIC_FG_SW_CLEAR_ADDR MT6351_FGADC_CON0
#define MT6351_PMIC_FG_SW_CLEAR_MASK 0x1
#define MT6351_PMIC_FG_SW_CLEAR_SHIFT 11
#define MT6351_PMIC_FG_OFFSET_RST_ADDR MT6351_FGADC_CON0
#define MT6351_PMIC_FG_OFFSET_RST_MASK 0x1
#define MT6351_PMIC_FG_OFFSET_RST_SHIFT 12
#define MT6351_PMIC_FG_TIME_RST_ADDR MT6351_FGADC_CON0
#define MT6351_PMIC_FG_TIME_RST_MASK 0x1
#define MT6351_PMIC_FG_TIME_RST_SHIFT 13
#define MT6351_PMIC_FG_CHARGE_RST_ADDR MT6351_FGADC_CON0
#define MT6351_PMIC_FG_CHARGE_RST_MASK 0x1
#define MT6351_PMIC_FG_CHARGE_RST_SHIFT 14
#define MT6351_PMIC_FG_SW_RSTCLR_ADDR MT6351_FGADC_CON0
#define MT6351_PMIC_FG_SW_RSTCLR_MASK 0x1
#define MT6351_PMIC_FG_SW_RSTCLR_SHIFT 15
#define MT6351_PMIC_FG_CAR_34_19_ADDR MT6351_FGADC_CON1
#define MT6351_PMIC_FG_CAR_34_19_MASK 0xFFFF
#define MT6351_PMIC_FG_CAR_34_19_SHIFT 0
#define MT6351_PMIC_FG_CAR_18_03_ADDR MT6351_FGADC_CON2
#define MT6351_PMIC_FG_CAR_18_03_MASK 0xFFFF
#define MT6351_PMIC_FG_CAR_18_03_SHIFT 0
#define MT6351_PMIC_FG_CAR_02_00_ADDR MT6351_FGADC_CON3
#define MT6351_PMIC_FG_CAR_02_00_MASK 0x7
#define MT6351_PMIC_FG_CAR_02_00_SHIFT 0
#define MT6351_PMIC_FG_NTER_32_17_ADDR MT6351_FGADC_CON4
#define MT6351_PMIC_FG_NTER_32_17_MASK 0xFFFF
#define MT6351_PMIC_FG_NTER_32_17_SHIFT 0
#define MT6351_PMIC_FG_NTER_16_01_ADDR MT6351_FGADC_CON5
#define MT6351_PMIC_FG_NTER_16_01_MASK 0xFFFF
#define MT6351_PMIC_FG_NTER_16_01_SHIFT 0
#define MT6351_PMIC_FG_NTER_00_ADDR MT6351_FGADC_CON6
#define MT6351_PMIC_FG_NTER_00_MASK 0x1
#define MT6351_PMIC_FG_NTER_00_SHIFT 0
#define MT6351_PMIC_FG_BLTR_31_16_ADDR MT6351_FGADC_CON7
#define MT6351_PMIC_FG_BLTR_31_16_MASK 0xFFFF
#define MT6351_PMIC_FG_BLTR_31_16_SHIFT 0
#define MT6351_PMIC_FG_BLTR_15_00_ADDR MT6351_FGADC_CON8
#define MT6351_PMIC_FG_BLTR_15_00_MASK 0xFFFF
#define MT6351_PMIC_FG_BLTR_15_00_SHIFT 0
#define MT6351_PMIC_FG_BFTR_31_16_ADDR MT6351_FGADC_CON9
#define MT6351_PMIC_FG_BFTR_31_16_MASK 0xFFFF
#define MT6351_PMIC_FG_BFTR_31_16_SHIFT 0
#define MT6351_PMIC_FG_BFTR_15_00_ADDR MT6351_FGADC_CON10
#define MT6351_PMIC_FG_BFTR_15_00_MASK 0xFFFF
#define MT6351_PMIC_FG_BFTR_15_00_SHIFT 0
#define MT6351_PMIC_FG_CURRENT_OUT_ADDR MT6351_FGADC_CON11
#define MT6351_PMIC_FG_CURRENT_OUT_MASK 0xFFFF
#define MT6351_PMIC_FG_CURRENT_OUT_SHIFT 0
#define MT6351_PMIC_FG_ADJUST_OFFSET_VALUE_ADDR MT6351_FGADC_CON12
#define MT6351_PMIC_FG_ADJUST_OFFSET_VALUE_MASK 0xFFFF
#define MT6351_PMIC_FG_ADJUST_OFFSET_VALUE_SHIFT 0
#define MT6351_PMIC_FG_OFFSET_ADDR MT6351_FGADC_CON13
#define MT6351_PMIC_FG_OFFSET_MASK 0xFFFF
#define MT6351_PMIC_FG_OFFSET_SHIFT 0
#define MT6351_PMIC_RG_FGANALOGTEST_ADDR MT6351_FGADC_CON14
#define MT6351_PMIC_RG_FGANALOGTEST_MASK 0xF
#define MT6351_PMIC_RG_FGANALOGTEST_SHIFT 0
#define MT6351_PMIC_RG_FGRINTMODE_ADDR MT6351_FGADC_CON14
#define MT6351_PMIC_RG_FGRINTMODE_MASK 0x1
#define MT6351_PMIC_RG_FGRINTMODE_SHIFT 4
#define MT6351_PMIC_RG_SPARE_ADDR MT6351_FGADC_CON14
#define MT6351_PMIC_RG_SPARE_MASK 0xFF
#define MT6351_PMIC_RG_SPARE_SHIFT 5
#define MT6351_PMIC_FG_OSR_ADDR MT6351_FGADC_CON15
#define MT6351_PMIC_FG_OSR_MASK 0xF
#define MT6351_PMIC_FG_OSR_SHIFT 0
#define MT6351_PMIC_FG_ADJ_OFFSET_EN_ADDR MT6351_FGADC_CON15
#define MT6351_PMIC_FG_ADJ_OFFSET_EN_MASK 0x1
#define MT6351_PMIC_FG_ADJ_OFFSET_EN_SHIFT 8
#define MT6351_PMIC_FG_ADC_AUTORST_ADDR MT6351_FGADC_CON15
#define MT6351_PMIC_FG_ADC_AUTORST_MASK 0x1
#define MT6351_PMIC_FG_ADC_AUTORST_SHIFT 9
#define MT6351_PMIC_FG_FIR1BYPASS_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_FG_FIR1BYPASS_MASK 0x1
#define MT6351_PMIC_FG_FIR1BYPASS_SHIFT 0
#define MT6351_PMIC_FG_FIR2BYPASS_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_FG_FIR2BYPASS_MASK 0x1
#define MT6351_PMIC_FG_FIR2BYPASS_SHIFT 1
#define MT6351_PMIC_FG_L_CUR_INT_STS_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_FG_L_CUR_INT_STS_MASK 0x1
#define MT6351_PMIC_FG_L_CUR_INT_STS_SHIFT 2
#define MT6351_PMIC_FG_H_CUR_INT_STS_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_FG_H_CUR_INT_STS_MASK 0x1
#define MT6351_PMIC_FG_H_CUR_INT_STS_SHIFT 3
#define MT6351_PMIC_FG_L_INT_STS_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_FG_L_INT_STS_MASK 0x1
#define MT6351_PMIC_FG_L_INT_STS_SHIFT 4
#define MT6351_PMIC_FG_H_INT_STS_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_FG_H_INT_STS_MASK 0x1
#define MT6351_PMIC_FG_H_INT_STS_SHIFT 5
#define MT6351_PMIC_FG_ADC_RSTDETECT_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_FG_ADC_RSTDETECT_MASK 0x1
#define MT6351_PMIC_FG_ADC_RSTDETECT_SHIFT 7
#define MT6351_PMIC_FG_SLP_EN_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_FG_SLP_EN_MASK 0x1
#define MT6351_PMIC_FG_SLP_EN_SHIFT 8
#define MT6351_PMIC_FG_ZCV_DET_EN_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_FG_ZCV_DET_EN_MASK 0x1
#define MT6351_PMIC_FG_ZCV_DET_EN_SHIFT 9
#define MT6351_PMIC_RG_FG_AUXADC_R_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_RG_FG_AUXADC_R_MASK 0x1
#define MT6351_PMIC_RG_FG_AUXADC_R_SHIFT 10
#define MT6351_PMIC_DA_FGADC_EN_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_DA_FGADC_EN_MASK 0x1
#define MT6351_PMIC_DA_FGADC_EN_SHIFT 12
#define MT6351_PMIC_DA_FGCAL_EN_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_DA_FGCAL_EN_MASK 0x1
#define MT6351_PMIC_DA_FGCAL_EN_SHIFT 13
#define MT6351_PMIC_DA_FG_RST_ADDR MT6351_FGADC_CON16
#define MT6351_PMIC_DA_FG_RST_MASK 0x1
#define MT6351_PMIC_DA_FG_RST_SHIFT 14
#define MT6351_PMIC_FG_CIC2_ADDR MT6351_FGADC_CON17
#define MT6351_PMIC_FG_CIC2_MASK 0xFFFF
#define MT6351_PMIC_FG_CIC2_SHIFT 0
#define MT6351_PMIC_FG_SLP_CUR_TH_ADDR MT6351_FGADC_CON18
#define MT6351_PMIC_FG_SLP_CUR_TH_MASK 0xFFFF
#define MT6351_PMIC_FG_SLP_CUR_TH_SHIFT 0
#define MT6351_PMIC_FG_SLP_TIME_ADDR MT6351_FGADC_CON19
#define MT6351_PMIC_FG_SLP_TIME_MASK 0xFF
#define MT6351_PMIC_FG_SLP_TIME_SHIFT 0
#define MT6351_PMIC_FG_SRCVOLTEN_FTIME_ADDR MT6351_FGADC_CON20
#define MT6351_PMIC_FG_SRCVOLTEN_FTIME_MASK 0xFF
#define MT6351_PMIC_FG_SRCVOLTEN_FTIME_SHIFT 0
#define MT6351_PMIC_FG_DET_TIME_ADDR MT6351_FGADC_CON20
#define MT6351_PMIC_FG_DET_TIME_MASK 0xFF
#define MT6351_PMIC_FG_DET_TIME_SHIFT 8
#define MT6351_PMIC_FG_ZCV_CAR_34_19_ADDR MT6351_FGADC_CON21
#define MT6351_PMIC_FG_ZCV_CAR_34_19_MASK 0xFFFF
#define MT6351_PMIC_FG_ZCV_CAR_34_19_SHIFT 0
#define MT6351_PMIC_FG_ZCV_CAR_18_03_ADDR MT6351_FGADC_CON22
#define MT6351_PMIC_FG_ZCV_CAR_18_03_MASK 0xFFFF
#define MT6351_PMIC_FG_ZCV_CAR_18_03_SHIFT 0
#define MT6351_PMIC_FG_ZCV_CAR_02_00_ADDR MT6351_FGADC_CON23
#define MT6351_PMIC_FG_ZCV_CAR_02_00_MASK 0x7
#define MT6351_PMIC_FG_ZCV_CAR_02_00_SHIFT 0
#define MT6351_PMIC_FG_ZCV_CURR_ADDR MT6351_FGADC_CON24
#define MT6351_PMIC_FG_ZCV_CURR_MASK 0xFFFF
#define MT6351_PMIC_FG_ZCV_CURR_SHIFT 0
#define MT6351_PMIC_FG_R_CURR_ADDR MT6351_FGADC_CON25
#define MT6351_PMIC_FG_R_CURR_MASK 0xFFFF
#define MT6351_PMIC_FG_R_CURR_SHIFT 0
#define MT6351_PMIC_FG_MODE_ADDR MT6351_FGADC_CON26
#define MT6351_PMIC_FG_MODE_MASK 0x1
#define MT6351_PMIC_FG_MODE_SHIFT 0
#define MT6351_PMIC_FG_RST_SW_ADDR MT6351_FGADC_CON26
#define MT6351_PMIC_FG_RST_SW_MASK 0x1
#define MT6351_PMIC_FG_RST_SW_SHIFT 1
#define MT6351_PMIC_FG_FGCAL_EN_SW_ADDR MT6351_FGADC_CON26
#define MT6351_PMIC_FG_FGCAL_EN_SW_MASK 0x1
#define MT6351_PMIC_FG_FGCAL_EN_SW_SHIFT 2
#define MT6351_PMIC_FG_FGADC_EN_SW_ADDR MT6351_FGADC_CON26
#define MT6351_PMIC_FG_FGADC_EN_SW_MASK 0x1
#define MT6351_PMIC_FG_FGADC_EN_SW_SHIFT 3
#define MT6351_PMIC_FG_RSV1_ADDR MT6351_FGADC_CON26
#define MT6351_PMIC_FG_RSV1_MASK 0xF
#define MT6351_PMIC_FG_RSV1_SHIFT 4
#define MT6351_PMIC_FG_TEST_MODE0_ADDR MT6351_FGADC_CON26
#define MT6351_PMIC_FG_TEST_MODE0_MASK 0x1
#define MT6351_PMIC_FG_TEST_MODE0_SHIFT 14
#define MT6351_PMIC_FG_TEST_MODE1_ADDR MT6351_FGADC_CON26
#define MT6351_PMIC_FG_TEST_MODE1_MASK 0x1
#define MT6351_PMIC_FG_TEST_MODE1_SHIFT 15
#define MT6351_PMIC_FG_GAIN_ADDR MT6351_FGADC_CON27
#define MT6351_PMIC_FG_GAIN_MASK 0x1FFF
#define MT6351_PMIC_FG_GAIN_SHIFT 0
#define MT6351_PMIC_FG_CUR_HTH_ADDR MT6351_FGADC_CON28
#define MT6351_PMIC_FG_CUR_HTH_MASK 0xFFFF
#define MT6351_PMIC_FG_CUR_HTH_SHIFT 0
#define MT6351_PMIC_FG_CUR_LTH_ADDR MT6351_FGADC_CON29
#define MT6351_PMIC_FG_CUR_LTH_MASK 0xFFFF
#define MT6351_PMIC_FG_CUR_LTH_SHIFT 0
#define MT6351_PMIC_FG_ZCV_DET_TIME_ADDR MT6351_FGADC_CON30
#define MT6351_PMIC_FG_ZCV_DET_TIME_MASK 0x3F
#define MT6351_PMIC_FG_ZCV_DET_TIME_SHIFT 0
#define MT6351_PMIC_FG_ZCV_CAR_TH_33_19_ADDR MT6351_FGADC_CON31
#define MT6351_PMIC_FG_ZCV_CAR_TH_33_19_MASK 0x7FFF
#define MT6351_PMIC_FG_ZCV_CAR_TH_33_19_SHIFT 0
#define MT6351_PMIC_FG_ZCV_CAR_TH_18_03_ADDR MT6351_FGADC_CON32
#define MT6351_PMIC_FG_ZCV_CAR_TH_18_03_MASK 0xFFFF
#define MT6351_PMIC_FG_ZCV_CAR_TH_18_03_SHIFT 0
#define MT6351_PMIC_FG_ZCV_CAR_TH_02_00_ADDR MT6351_FGADC_CON33
#define MT6351_PMIC_FG_ZCV_CAR_TH_02_00_MASK 0x7
#define MT6351_PMIC_FG_ZCV_CAR_TH_02_00_SHIFT 0
#define MT6351_PMIC_SYSTEM_INFO_CON0_ADDR MT6351_SYSTEM_INFO_CON0
#define MT6351_PMIC_SYSTEM_INFO_CON0_MASK 0xFFFF
#define MT6351_PMIC_SYSTEM_INFO_CON0_SHIFT 0
#define MT6351_PMIC_SYSTEM_INFO_CON1_ADDR MT6351_SYSTEM_INFO_CON1
#define MT6351_PMIC_SYSTEM_INFO_CON1_MASK 0xFFFF
#define MT6351_PMIC_SYSTEM_INFO_CON1_SHIFT 0
#define MT6351_PMIC_SYSTEM_INFO_CON2_ADDR MT6351_SYSTEM_INFO_CON2
#define MT6351_PMIC_SYSTEM_INFO_CON2_MASK 0xFFFF
#define MT6351_PMIC_SYSTEM_INFO_CON2_SHIFT 0
#define MT6351_PMIC_SYSTEM_INFO_CON3_ADDR MT6351_SYSTEM_INFO_CON3
#define MT6351_PMIC_SYSTEM_INFO_CON3_MASK 0xFFFF
#define MT6351_PMIC_SYSTEM_INFO_CON3_SHIFT 0
#define MT6351_PMIC_SYSTEM_INFO_CON4_ADDR MT6351_SYSTEM_INFO_CON4
#define MT6351_PMIC_SYSTEM_INFO_CON4_MASK 0xFFFF
#define MT6351_PMIC_SYSTEM_INFO_CON4_SHIFT 0
#define MT6351_PMIC_RG_AUDDACLPWRUP_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUDDACLPWRUP_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDDACLPWRUP_VAUDP32_SHIFT 0
#define MT6351_PMIC_RG_AUDDACRPWRUP_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUDDACRPWRUP_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDDACRPWRUP_VAUDP32_SHIFT 1
#define MT6351_PMIC_RG_AUD_DAC_PWR_UP_VA32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUD_DAC_PWR_UP_VA32_MASK 0x1
#define MT6351_PMIC_RG_AUD_DAC_PWR_UP_VA32_SHIFT 2
#define MT6351_PMIC_RG_AUD_DAC_PWL_UP_VA32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUD_DAC_PWL_UP_VA32_MASK 0x1
#define MT6351_PMIC_RG_AUD_DAC_PWL_UP_VA32_SHIFT 3
#define MT6351_PMIC_RG_AUDHSPWRUP_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUDHSPWRUP_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHSPWRUP_VAUDP32_SHIFT 4
#define MT6351_PMIC_RG_AUDHPLPWRUP_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUDHPLPWRUP_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHPLPWRUP_VAUDP32_SHIFT 5
#define MT6351_PMIC_RG_AUDHPRPWRUP_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUDHPRPWRUP_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHPRPWRUP_VAUDP32_SHIFT 6
#define MT6351_PMIC_RG_AUDHSMUXINPUTSEL_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUDHSMUXINPUTSEL_VAUDP32_MASK 0x3
#define MT6351_PMIC_RG_AUDHSMUXINPUTSEL_VAUDP32_SHIFT 7
#define MT6351_PMIC_RG_AUDHPLMUXINPUTSEL_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUDHPLMUXINPUTSEL_VAUDP32_MASK 0x3
#define MT6351_PMIC_RG_AUDHPLMUXINPUTSEL_VAUDP32_SHIFT 9
#define MT6351_PMIC_RG_AUDHPRMUXINPUTSEL_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUDHPRMUXINPUTSEL_VAUDP32_MASK 0x3
#define MT6351_PMIC_RG_AUDHPRMUXINPUTSEL_VAUDP32_SHIFT 11
#define MT6351_PMIC_RG_AUDHSSCDISABLE_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUDHSSCDISABLE_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHSSCDISABLE_VAUDP32_SHIFT 13
#define MT6351_PMIC_RG_AUDHPLSCDISABLE_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUDHPLSCDISABLE_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHPLSCDISABLE_VAUDP32_SHIFT 14
#define MT6351_PMIC_RG_AUDHPRSCDISABLE_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON0
#define MT6351_PMIC_RG_AUDHPRSCDISABLE_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHPRSCDISABLE_VAUDP32_SHIFT 15
#define MT6351_PMIC_RG_AUDHSBSCCURRENT_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_AUDHSBSCCURRENT_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHSBSCCURRENT_VAUDP32_SHIFT 0
#define MT6351_PMIC_RG_AUDHPLBSCCURRENT_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_AUDHPLBSCCURRENT_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHPLBSCCURRENT_VAUDP32_SHIFT 1
#define MT6351_PMIC_RG_AUDHPRBSCCURRENT_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_AUDHPRBSCCURRENT_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHPRBSCCURRENT_VAUDP32_SHIFT 2
#define MT6351_PMIC_RG_AUDHSSTARTUP_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_AUDHSSTARTUP_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHSSTARTUP_VAUDP32_SHIFT 3
#define MT6351_PMIC_RG_AUDHPSTARTUP_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_AUDHPSTARTUP_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHPSTARTUP_VAUDP32_SHIFT 4
#define MT6351_PMIC_RG_AUDBGBON_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_AUDBGBON_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDBGBON_VAUDP32_SHIFT 5
#define MT6351_PMIC_RG_PRECHARGEBUF_EN_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_PRECHARGEBUF_EN_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_PRECHARGEBUF_EN_VAUDP32_SHIFT 6
#define MT6351_PMIC_RG_HSINPUTSTBENH_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_HSINPUTSTBENH_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_HSINPUTSTBENH_VAUDP32_SHIFT 7
#define MT6351_PMIC_RG_HSOUTPUTSTBENH_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_HSOUTPUTSTBENH_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_HSOUTPUTSTBENH_VAUDP32_SHIFT 8
#define MT6351_PMIC_RG_HSINPUTRESET0_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_HSINPUTRESET0_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_HSINPUTRESET0_VAUDP32_SHIFT 9
#define MT6351_PMIC_RG_HSOUTPUTRESET0_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_HSOUTPUTRESET0_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_HSOUTPUTRESET0_VAUDP32_SHIFT 10
#define MT6351_PMIC_RG_HSOUT_SHORTVCM_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_HSOUT_SHORTVCM_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_HSOUT_SHORTVCM_VAUDP32_SHIFT 11
#define MT6351_PMIC_RG_HPINPUTSTBENH_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_HPINPUTSTBENH_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_HPINPUTSTBENH_VAUDP32_SHIFT 12
#define MT6351_PMIC_RG_HPOUTPUTSTBENH_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_HPOUTPUTSTBENH_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_HPOUTPUTSTBENH_VAUDP32_SHIFT 13
#define MT6351_PMIC_RG_HPINPUTRESET0_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_HPINPUTRESET0_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_HPINPUTRESET0_VAUDP32_SHIFT 14
#define MT6351_PMIC_RG_HPOUTPUTRESET0_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON1
#define MT6351_PMIC_RG_HPOUTPUTRESET0_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_HPOUTPUTRESET0_VAUDP32_SHIFT 15
#define MT6351_PMIC_RG_HPOUT_SHORTVCM_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON2
#define MT6351_PMIC_RG_HPOUT_SHORTVCM_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_HPOUT_SHORTVCM_VAUDP32_SHIFT 0
#define MT6351_PMIC_RG_HPOUTSTB_RSEL_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON2
#define MT6351_PMIC_RG_HPOUTSTB_RSEL_VAUDP32_MASK 0x7
#define MT6351_PMIC_RG_HPOUTSTB_RSEL_VAUDP32_SHIFT 1
#define MT6351_PMIC_RG_LINENOISEENH_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON2
#define MT6351_PMIC_RG_LINENOISEENH_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_LINENOISEENH_VAUDP32_SHIFT 4
#define MT6351_PMIC_RG_AUDHPLTRIM_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON2
#define MT6351_PMIC_RG_AUDHPLTRIM_VAUDP32_MASK 0xF
#define MT6351_PMIC_RG_AUDHPLTRIM_VAUDP32_SHIFT 5
#define MT6351_PMIC_RG_AUDHPRTRIM_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON2
#define MT6351_PMIC_RG_AUDHPRTRIM_VAUDP32_MASK 0xF
#define MT6351_PMIC_RG_AUDHPRTRIM_VAUDP32_SHIFT 9
#define MT6351_PMIC_RG_AUDHPTRIM_EN_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON2
#define MT6351_PMIC_RG_AUDHPTRIM_EN_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHPTRIM_EN_VAUDP32_SHIFT 13
#define MT6351_PMIC_RG_AUDHPLFINETRIM_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON2
#define MT6351_PMIC_RG_AUDHPLFINETRIM_VAUDP32_MASK 0x3
#define MT6351_PMIC_RG_AUDHPLFINETRIM_VAUDP32_SHIFT 14
#define MT6351_PMIC_RG_AUDHPRFINETRIM_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_AUDHPRFINETRIM_VAUDP32_MASK 0x3
#define MT6351_PMIC_RG_AUDHPRFINETRIM_VAUDP32_SHIFT 0
#define MT6351_PMIC_RG_AUDLOLPWRUP_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_AUDLOLPWRUP_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDLOLPWRUP_VAUDP32_SHIFT 2
#define MT6351_PMIC_RG_AUDLOLMUXINPUTSEL_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_AUDLOLMUXINPUTSEL_VAUDP32_MASK 0x3
#define MT6351_PMIC_RG_AUDLOLMUXINPUTSEL_VAUDP32_SHIFT 3
#define MT6351_PMIC_RG_AUDLOLSCDISABLE_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_AUDLOLSCDISABLE_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDLOLSCDISABLE_VAUDP32_SHIFT 5
#define MT6351_PMIC_RG_AUDLOLBSCCURRENT_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_AUDLOLBSCCURRENT_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDLOLBSCCURRENT_VAUDP32_SHIFT 6
#define MT6351_PMIC_RG_AUDLOSTARTUP_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_AUDLOSTARTUP_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDLOSTARTUP_VAUDP32_SHIFT 7
#define MT6351_PMIC_RG_LOINPUTSTBENH_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_LOINPUTSTBENH_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_LOINPUTSTBENH_VAUDP32_SHIFT 8
#define MT6351_PMIC_RG_LOOUTPUTSTBENH_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_LOOUTPUTSTBENH_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_LOOUTPUTSTBENH_VAUDP32_SHIFT 9
#define MT6351_PMIC_RG_LOINPUTRESET0_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_LOINPUTRESET0_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_LOINPUTRESET0_VAUDP32_SHIFT 10
#define MT6351_PMIC_RG_LOOUTPUTRESET0_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_LOOUTPUTRESET0_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_LOOUTPUTRESET0_VAUDP32_SHIFT 11
#define MT6351_PMIC_RG_LOOUT_SHORTVCM_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_LOOUT_SHORTVCM_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_LOOUT_SHORTVCM_VAUDP32_SHIFT 12
#define MT6351_PMIC_RG_LOOUTSTB_RSEL_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON3
#define MT6351_PMIC_RG_LOOUTSTB_RSEL_VAUDP32_MASK 0x7
#define MT6351_PMIC_RG_LOOUTSTB_RSEL_VAUDP32_SHIFT 13
#define MT6351_PMIC_RG_AUDLOLTRIM_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON4
#define MT6351_PMIC_RG_AUDLOLTRIM_VAUDP32_MASK 0xF
#define MT6351_PMIC_RG_AUDLOLTRIM_VAUDP32_SHIFT 0
#define MT6351_PMIC_RG_AUDLOTRIM_EN_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON4
#define MT6351_PMIC_RG_AUDLOTRIM_EN_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDLOTRIM_EN_VAUDP32_SHIFT 4
#define MT6351_PMIC_RG_AUDLOLFINETRIM_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON4
#define MT6351_PMIC_RG_AUDLOLFINETRIM_VAUDP32_MASK 0x3
#define MT6351_PMIC_RG_AUDLOLFINETRIM_VAUDP32_SHIFT 5
#define MT6351_PMIC_RG_AUDTRIMBUF_EN_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON4
#define MT6351_PMIC_RG_AUDTRIMBUF_EN_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDTRIMBUF_EN_VAUDP32_SHIFT 7
#define MT6351_PMIC_RG_AUDTRIMBUF_INPUTMUXSEL_VAUDP32_ADDR                     \
	MT6351_AUDDEC_ANA_CON4
#define MT6351_PMIC_RG_AUDTRIMBUF_INPUTMUXSEL_VAUDP32_MASK 0xF
#define MT6351_PMIC_RG_AUDTRIMBUF_INPUTMUXSEL_VAUDP32_SHIFT 8
#define MT6351_PMIC_RG_AUDTRIMBUF_GAINSEL_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON4
#define MT6351_PMIC_RG_AUDTRIMBUF_GAINSEL_VAUDP32_MASK 0x3
#define MT6351_PMIC_RG_AUDTRIMBUF_GAINSEL_VAUDP32_SHIFT 12
#define MT6351_PMIC_RG_AUDHPSPKDET_EN_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON4
#define MT6351_PMIC_RG_AUDHPSPKDET_EN_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDHPSPKDET_EN_VAUDP32_SHIFT 14
#define MT6351_PMIC_RG_AUDHPSPKDET_INPUTMUXSEL_VAUDP32_ADDR                    \
	MT6351_AUDDEC_ANA_CON5
#define MT6351_PMIC_RG_AUDHPSPKDET_INPUTMUXSEL_VAUDP32_MASK 0x3
#define MT6351_PMIC_RG_AUDHPSPKDET_INPUTMUXSEL_VAUDP32_SHIFT 0
#define MT6351_PMIC_RG_AUDHPSPKDET_OUTPUTMUXSEL_VAUDP32_ADDR                   \
	MT6351_AUDDEC_ANA_CON5
#define MT6351_PMIC_RG_AUDHPSPKDET_OUTPUTMUXSEL_VAUDP32_MASK 0x3
#define MT6351_PMIC_RG_AUDHPSPKDET_OUTPUTMUXSEL_VAUDP32_SHIFT 2
#define MT6351_PMIC_RG_ABIDEC_RSVD0_VA32_ADDR MT6351_AUDDEC_ANA_CON5
#define MT6351_PMIC_RG_ABIDEC_RSVD0_VA32_MASK 0xFF
#define MT6351_PMIC_RG_ABIDEC_RSVD0_VA32_SHIFT 4
#define MT6351_PMIC_RG_ABIDEC_RSVD1_VA32_ADDR MT6351_AUDDEC_ANA_CON6
#define MT6351_PMIC_RG_ABIDEC_RSVD1_VA32_MASK 0xFF
#define MT6351_PMIC_RG_ABIDEC_RSVD1_VA32_SHIFT 0
#define MT6351_PMIC_RG_ABIDEC_RSVD0_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON6
#define MT6351_PMIC_RG_ABIDEC_RSVD0_VAUDP32_MASK 0xFF
#define MT6351_PMIC_RG_ABIDEC_RSVD0_VAUDP32_SHIFT 8
#define MT6351_PMIC_RG_ABIDEC_RSVD1_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON7
#define MT6351_PMIC_RG_ABIDEC_RSVD1_VAUDP32_MASK 0xFF
#define MT6351_PMIC_RG_ABIDEC_RSVD1_VAUDP32_SHIFT 0
#define MT6351_PMIC_RG_AUDZCDMUXSEL_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON7
#define MT6351_PMIC_RG_AUDZCDMUXSEL_VAUDP32_MASK 0x7
#define MT6351_PMIC_RG_AUDZCDMUXSEL_VAUDP32_SHIFT 8
#define MT6351_PMIC_RG_AUDZCDCLKSEL_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON7
#define MT6351_PMIC_RG_AUDZCDCLKSEL_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDZCDCLKSEL_VAUDP32_SHIFT 11
#define MT6351_PMIC_RG_AUDBIASADJ_0_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON8
#define MT6351_PMIC_RG_AUDBIASADJ_0_VAUDP32_MASK 0x1FF
#define MT6351_PMIC_RG_AUDBIASADJ_0_VAUDP32_SHIFT 0
#define MT6351_PMIC_RG_AUDBIASADJ_1_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON9
#define MT6351_PMIC_RG_AUDBIASADJ_1_VAUDP32_MASK 0xFF
#define MT6351_PMIC_RG_AUDBIASADJ_1_VAUDP32_SHIFT 0
#define MT6351_PMIC_RG_AUDIBIASPWRDN_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON9
#define MT6351_PMIC_RG_AUDIBIASPWRDN_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_AUDIBIASPWRDN_VAUDP32_SHIFT 8
#define MT6351_PMIC_RG_RSTB_DECODER_VA32_ADDR MT6351_AUDDEC_ANA_CON9
#define MT6351_PMIC_RG_RSTB_DECODER_VA32_MASK 0x1
#define MT6351_PMIC_RG_RSTB_DECODER_VA32_SHIFT 9
#define MT6351_PMIC_RG_SEL_DECODER_96K_VA32_ADDR MT6351_AUDDEC_ANA_CON9
#define MT6351_PMIC_RG_SEL_DECODER_96K_VA32_MASK 0x1
#define MT6351_PMIC_RG_SEL_DECODER_96K_VA32_SHIFT 10
#define MT6351_PMIC_RG_SEL_DELAY_VCORE_ADDR MT6351_AUDDEC_ANA_CON9
#define MT6351_PMIC_RG_SEL_DELAY_VCORE_MASK 0x1
#define MT6351_PMIC_RG_SEL_DELAY_VCORE_SHIFT 11
#define MT6351_PMIC_RG_AUDGLB_PWRDN_VA32_ADDR MT6351_AUDDEC_ANA_CON9
#define MT6351_PMIC_RG_AUDGLB_PWRDN_VA32_MASK 0x1
#define MT6351_PMIC_RG_AUDGLB_PWRDN_VA32_SHIFT 12
#define MT6351_PMIC_RG_LCLDO_DEC_EN_VA32_ADDR MT6351_AUDDEC_ANA_CON9
#define MT6351_PMIC_RG_LCLDO_DEC_EN_VA32_MASK 0x1
#define MT6351_PMIC_RG_LCLDO_DEC_EN_VA32_SHIFT 13
#define MT6351_PMIC_RG_LCLDO_DEC_PDDIS_EN_VA18_ADDR MT6351_AUDDEC_ANA_CON9
#define MT6351_PMIC_RG_LCLDO_DEC_PDDIS_EN_VA18_MASK 0x1
#define MT6351_PMIC_RG_LCLDO_DEC_PDDIS_EN_VA18_SHIFT 14
#define MT6351_PMIC_RG_LCLDO_DEC_REMOTE_SENSE_VA18_ADDR MT6351_AUDDEC_ANA_CON9
#define MT6351_PMIC_RG_LCLDO_DEC_REMOTE_SENSE_VA18_MASK 0x1
#define MT6351_PMIC_RG_LCLDO_DEC_REMOTE_SENSE_VA18_SHIFT 15
#define MT6351_PMIC_RG_AUDPMU_RSVD_VA18_ADDR MT6351_AUDDEC_ANA_CON10
#define MT6351_PMIC_RG_AUDPMU_RSVD_VA18_MASK 0xFF
#define MT6351_PMIC_RG_AUDPMU_RSVD_VA18_SHIFT 0
#define MT6351_PMIC_RG_NVREG_EN_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON10
#define MT6351_PMIC_RG_NVREG_EN_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_NVREG_EN_VAUDP32_SHIFT 8
#define MT6351_PMIC_RG_NVREG_PULL0V_VAUDP32_ADDR MT6351_AUDDEC_ANA_CON10
#define MT6351_PMIC_RG_NVREG_PULL0V_VAUDP32_MASK 0x1
#define MT6351_PMIC_RG_NVREG_PULL0V_VAUDP32_SHIFT 9
#define MT6351_PMIC_RG_AUDGLB_LP2_VOW_EN_VA32_ADDR MT6351_AUDDEC_ANA_CON10
#define MT6351_PMIC_RG_AUDGLB_LP2_VOW_EN_VA32_MASK 0x1
#define MT6351_PMIC_RG_AUDGLB_LP2_VOW_EN_VA32_SHIFT 10
#define MT6351_PMIC_RG_AUDPREAMPLON_ADDR MT6351_AUDENC_ANA_CON0
#define MT6351_PMIC_RG_AUDPREAMPLON_MASK 0x1
#define MT6351_PMIC_RG_AUDPREAMPLON_SHIFT 0
#define MT6351_PMIC_RG_AUDPREAMPLDCCEN_ADDR MT6351_AUDENC_ANA_CON0
#define MT6351_PMIC_RG_AUDPREAMPLDCCEN_MASK 0x1
#define MT6351_PMIC_RG_AUDPREAMPLDCCEN_SHIFT 1
#define MT6351_PMIC_RG_AUDPREAMPLDCPRECHARGE_ADDR MT6351_AUDENC_ANA_CON0
#define MT6351_PMIC_RG_AUDPREAMPLDCPRECHARGE_MASK 0x1
#define MT6351_PMIC_RG_AUDPREAMPLDCPRECHARGE_SHIFT 2
#define MT6351_PMIC_RG_AUDPREAMPLPGATEST_ADDR MT6351_AUDENC_ANA_CON0
#define MT6351_PMIC_RG_AUDPREAMPLPGATEST_MASK 0x1
#define MT6351_PMIC_RG_AUDPREAMPLPGATEST_SHIFT 3
#define MT6351_PMIC_RG_AUDPREAMPLINPUTSEL_ADDR MT6351_AUDENC_ANA_CON0
#define MT6351_PMIC_RG_AUDPREAMPLINPUTSEL_MASK 0x3
#define MT6351_PMIC_RG_AUDPREAMPLINPUTSEL_SHIFT 4
#define MT6351_PMIC_RG_AUDPREAMPLVSCALE_ADDR MT6351_AUDENC_ANA_CON0
#define MT6351_PMIC_RG_AUDPREAMPLVSCALE_MASK 0x3
#define MT6351_PMIC_RG_AUDPREAMPLVSCALE_SHIFT 6
#define MT6351_PMIC_RG_AUDPREAMPLGAIN_ADDR MT6351_AUDENC_ANA_CON0
#define MT6351_PMIC_RG_AUDPREAMPLGAIN_MASK 0x7
#define MT6351_PMIC_RG_AUDPREAMPLGAIN_SHIFT 8
#define MT6351_PMIC_RG_AUDADCLPWRUP_ADDR MT6351_AUDENC_ANA_CON0
#define MT6351_PMIC_RG_AUDADCLPWRUP_MASK 0x1
#define MT6351_PMIC_RG_AUDADCLPWRUP_SHIFT 12
#define MT6351_PMIC_RG_AUDADCLINPUTSEL_ADDR MT6351_AUDENC_ANA_CON0
#define MT6351_PMIC_RG_AUDADCLINPUTSEL_MASK 0x3
#define MT6351_PMIC_RG_AUDADCLINPUTSEL_SHIFT 13
#define MT6351_PMIC_RG_AUDPREAMPRON_ADDR MT6351_AUDENC_ANA_CON1
#define MT6351_PMIC_RG_AUDPREAMPRON_MASK 0x1
#define MT6351_PMIC_RG_AUDPREAMPRON_SHIFT 0
#define MT6351_PMIC_RG_AUDPREAMPRDCCEN_ADDR MT6351_AUDENC_ANA_CON1
#define MT6351_PMIC_RG_AUDPREAMPRDCCEN_MASK 0x1
#define MT6351_PMIC_RG_AUDPREAMPRDCCEN_SHIFT 1
#define MT6351_PMIC_RG_AUDPREAMPRDCPRECHARGE_ADDR MT6351_AUDENC_ANA_CON1
#define MT6351_PMIC_RG_AUDPREAMPRDCPRECHARGE_MASK 0x1
#define MT6351_PMIC_RG_AUDPREAMPRDCPRECHARGE_SHIFT 2
#define MT6351_PMIC_RG_AUDPREAMPRPGATEST_ADDR MT6351_AUDENC_ANA_CON1
#define MT6351_PMIC_RG_AUDPREAMPRPGATEST_MASK 0x1
#define MT6351_PMIC_RG_AUDPREAMPRPGATEST_SHIFT 3
#define MT6351_PMIC_RG_AUDPREAMPRINPUTSEL_ADDR MT6351_AUDENC_ANA_CON1
#define MT6351_PMIC_RG_AUDPREAMPRINPUTSEL_MASK 0x3
#define MT6351_PMIC_RG_AUDPREAMPRINPUTSEL_SHIFT 4
#define MT6351_PMIC_RG_AUDPREAMPRVSCALE_ADDR MT6351_AUDENC_ANA_CON1
#define MT6351_PMIC_RG_AUDPREAMPRVSCALE_MASK 0x3
#define MT6351_PMIC_RG_AUDPREAMPRVSCALE_SHIFT 6
#define MT6351_PMIC_RG_AUDPREAMPRGAIN_ADDR MT6351_AUDENC_ANA_CON1
#define MT6351_PMIC_RG_AUDPREAMPRGAIN_MASK 0x7
#define MT6351_PMIC_RG_AUDPREAMPRGAIN_SHIFT 8
#define MT6351_PMIC_RG_AUDADCRPWRUP_ADDR MT6351_AUDENC_ANA_CON1
#define MT6351_PMIC_RG_AUDADCRPWRUP_MASK 0x1
#define MT6351_PMIC_RG_AUDADCRPWRUP_SHIFT 12
#define MT6351_PMIC_RG_AUDADCRINPUTSEL_ADDR MT6351_AUDENC_ANA_CON1
#define MT6351_PMIC_RG_AUDADCRINPUTSEL_MASK 0x3
#define MT6351_PMIC_RG_AUDADCRINPUTSEL_SHIFT 13
#define MT6351_PMIC_RG_AUDULHALFBIAS_ADDR MT6351_AUDENC_ANA_CON2
#define MT6351_PMIC_RG_AUDULHALFBIAS_MASK 0x1
#define MT6351_PMIC_RG_AUDULHALFBIAS_SHIFT 0
#define MT6351_PMIC_RG_AUDGLBVOWLPWEN_ADDR MT6351_AUDENC_ANA_CON2
#define MT6351_PMIC_RG_AUDGLBVOWLPWEN_MASK 0x1
#define MT6351_PMIC_RG_AUDGLBVOWLPWEN_SHIFT 1
#define MT6351_PMIC_RG_AUDPREAMPLPEN_ADDR MT6351_AUDENC_ANA_CON2
#define MT6351_PMIC_RG_AUDPREAMPLPEN_MASK 0x1
#define MT6351_PMIC_RG_AUDPREAMPLPEN_SHIFT 2
#define MT6351_PMIC_RG_AUDADC1STSTAGELPEN_ADDR MT6351_AUDENC_ANA_CON2
#define MT6351_PMIC_RG_AUDADC1STSTAGELPEN_MASK 0x1
#define MT6351_PMIC_RG_AUDADC1STSTAGELPEN_SHIFT 3
#define MT6351_PMIC_RG_AUDADC2NDSTAGELPEN_ADDR MT6351_AUDENC_ANA_CON2
#define MT6351_PMIC_RG_AUDADC2NDSTAGELPEN_MASK 0x1
#define MT6351_PMIC_RG_AUDADC2NDSTAGELPEN_SHIFT 4
#define MT6351_PMIC_RG_AUDADCFLASHLPEN_ADDR MT6351_AUDENC_ANA_CON2
#define MT6351_PMIC_RG_AUDADCFLASHLPEN_MASK 0x1
#define MT6351_PMIC_RG_AUDADCFLASHLPEN_SHIFT 5
#define MT6351_PMIC_RG_AUDPREAMPIDDTEST_ADDR MT6351_AUDENC_ANA_CON2
#define MT6351_PMIC_RG_AUDPREAMPIDDTEST_MASK 0x3
#define MT6351_PMIC_RG_AUDPREAMPIDDTEST_SHIFT 6
#define MT6351_PMIC_RG_AUDADC1STSTAGEIDDTEST_ADDR MT6351_AUDENC_ANA_CON2
#define MT6351_PMIC_RG_AUDADC1STSTAGEIDDTEST_MASK 0x3
#define MT6351_PMIC_RG_AUDADC1STSTAGEIDDTEST_SHIFT 8
#define MT6351_PMIC_RG_AUDADC2NDSTAGEIDDTEST_ADDR MT6351_AUDENC_ANA_CON2
#define MT6351_PMIC_RG_AUDADC2NDSTAGEIDDTEST_MASK 0x3
#define MT6351_PMIC_RG_AUDADC2NDSTAGEIDDTEST_SHIFT 10
#define MT6351_PMIC_RG_AUDADCREFBUFIDDTEST_ADDR MT6351_AUDENC_ANA_CON2
#define MT6351_PMIC_RG_AUDADCREFBUFIDDTEST_MASK 0x3
#define MT6351_PMIC_RG_AUDADCREFBUFIDDTEST_SHIFT 12
#define MT6351_PMIC_RG_AUDADCFLASHIDDTEST_ADDR MT6351_AUDENC_ANA_CON2
#define MT6351_PMIC_RG_AUDADCFLASHIDDTEST_MASK 0x3
#define MT6351_PMIC_RG_AUDADCFLASHIDDTEST_SHIFT 14
#define MT6351_PMIC_RG_AUDADCDAC0P25FS_ADDR MT6351_AUDENC_ANA_CON3
#define MT6351_PMIC_RG_AUDADCDAC0P25FS_MASK 0x1
#define MT6351_PMIC_RG_AUDADCDAC0P25FS_SHIFT 0
#define MT6351_PMIC_RG_AUDADCCLKSEL_ADDR MT6351_AUDENC_ANA_CON3
#define MT6351_PMIC_RG_AUDADCCLKSEL_MASK 0x1
#define MT6351_PMIC_RG_AUDADCCLKSEL_SHIFT 1
#define MT6351_PMIC_RG_AUDADCCLKSOURCE_ADDR MT6351_AUDENC_ANA_CON3
#define MT6351_PMIC_RG_AUDADCCLKSOURCE_MASK 0x3
#define MT6351_PMIC_RG_AUDADCCLKSOURCE_SHIFT 2
#define MT6351_PMIC_RG_AUDADCCLKGENMODE_ADDR MT6351_AUDENC_ANA_CON3
#define MT6351_PMIC_RG_AUDADCCLKGENMODE_MASK 0x3
#define MT6351_PMIC_RG_AUDADCCLKGENMODE_SHIFT 4
#define MT6351_PMIC_RG_AUDADCCLKRSTB_ADDR MT6351_AUDENC_ANA_CON3
#define MT6351_PMIC_RG_AUDADCCLKRSTB_MASK 0x1
#define MT6351_PMIC_RG_AUDADCCLKRSTB_SHIFT 6
#define MT6351_PMIC_RG_AUDPREAMPAAFEN_ADDR MT6351_AUDENC_ANA_CON3
#define MT6351_PMIC_RG_AUDPREAMPAAFEN_MASK 0x1
#define MT6351_PMIC_RG_AUDPREAMPAAFEN_SHIFT 8
#define MT6351_PMIC_RG_DCCVCMBUFLPMODSEL_ADDR MT6351_AUDENC_ANA_CON3
#define MT6351_PMIC_RG_DCCVCMBUFLPMODSEL_MASK 0x1
#define MT6351_PMIC_RG_DCCVCMBUFLPMODSEL_SHIFT 9
#define MT6351_PMIC_RG_DCCVCMBUFLPSWEN_ADDR MT6351_AUDENC_ANA_CON3
#define MT6351_PMIC_RG_DCCVCMBUFLPSWEN_MASK 0x1
#define MT6351_PMIC_RG_DCCVCMBUFLPSWEN_SHIFT 10
#define MT6351_PMIC_RG_AUDSPAREPGA_ADDR MT6351_AUDENC_ANA_CON3
#define MT6351_PMIC_RG_AUDSPAREPGA_MASK 0x1F
#define MT6351_PMIC_RG_AUDSPAREPGA_SHIFT 11
#define MT6351_PMIC_RG_AUDADC1STSTAGESDENB_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADC1STSTAGESDENB_MASK 0x1
#define MT6351_PMIC_RG_AUDADC1STSTAGESDENB_SHIFT 0
#define MT6351_PMIC_RG_AUDADC2NDSTAGERESET_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADC2NDSTAGERESET_MASK 0x1
#define MT6351_PMIC_RG_AUDADC2NDSTAGERESET_SHIFT 1
#define MT6351_PMIC_RG_AUDADC3RDSTAGERESET_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADC3RDSTAGERESET_MASK 0x1
#define MT6351_PMIC_RG_AUDADC3RDSTAGERESET_SHIFT 2
#define MT6351_PMIC_RG_AUDADCFSRESET_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADCFSRESET_MASK 0x1
#define MT6351_PMIC_RG_AUDADCFSRESET_SHIFT 3
#define MT6351_PMIC_RG_AUDADCWIDECM_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADCWIDECM_MASK 0x1
#define MT6351_PMIC_RG_AUDADCWIDECM_SHIFT 4
#define MT6351_PMIC_RG_AUDADCNOPATEST_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADCNOPATEST_MASK 0x1
#define MT6351_PMIC_RG_AUDADCNOPATEST_SHIFT 5
#define MT6351_PMIC_RG_AUDADCBYPASS_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADCBYPASS_MASK 0x1
#define MT6351_PMIC_RG_AUDADCBYPASS_SHIFT 6
#define MT6351_PMIC_RG_AUDADCFFBYPASS_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADCFFBYPASS_MASK 0x1
#define MT6351_PMIC_RG_AUDADCFFBYPASS_SHIFT 7
#define MT6351_PMIC_RG_AUDADCDACFBCURRENT_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADCDACFBCURRENT_MASK 0x1
#define MT6351_PMIC_RG_AUDADCDACFBCURRENT_SHIFT 8
#define MT6351_PMIC_RG_AUDADCDACIDDTEST_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADCDACIDDTEST_MASK 0x3
#define MT6351_PMIC_RG_AUDADCDACIDDTEST_SHIFT 9
#define MT6351_PMIC_RG_AUDADCDACNRZ_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADCDACNRZ_MASK 0x1
#define MT6351_PMIC_RG_AUDADCDACNRZ_SHIFT 11
#define MT6351_PMIC_RG_AUDADCNODEM_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADCNODEM_MASK 0x1
#define MT6351_PMIC_RG_AUDADCNODEM_SHIFT 12
#define MT6351_PMIC_RG_AUDADCDACTEST_ADDR MT6351_AUDENC_ANA_CON4
#define MT6351_PMIC_RG_AUDADCDACTEST_MASK 0x1
#define MT6351_PMIC_RG_AUDADCDACTEST_SHIFT 13
#define MT6351_PMIC_RG_AUDADCTESTDATA_ADDR MT6351_AUDENC_ANA_CON5
#define MT6351_PMIC_RG_AUDADCTESTDATA_MASK 0xFFFF
#define MT6351_PMIC_RG_AUDADCTESTDATA_SHIFT 0
#define MT6351_PMIC_RG_AUDRCTUNEL_ADDR MT6351_AUDENC_ANA_CON6
#define MT6351_PMIC_RG_AUDRCTUNEL_MASK 0x1F
#define MT6351_PMIC_RG_AUDRCTUNEL_SHIFT 0
#define MT6351_PMIC_RG_AUDRCTUNELSEL_ADDR MT6351_AUDENC_ANA_CON6
#define MT6351_PMIC_RG_AUDRCTUNELSEL_MASK 0x1
#define MT6351_PMIC_RG_AUDRCTUNELSEL_SHIFT 5
#define MT6351_PMIC_RG_AUDRCTUNER_ADDR MT6351_AUDENC_ANA_CON6
#define MT6351_PMIC_RG_AUDRCTUNER_MASK 0x1F
#define MT6351_PMIC_RG_AUDRCTUNER_SHIFT 8
#define MT6351_PMIC_RG_AUDRCTUNERSEL_ADDR MT6351_AUDENC_ANA_CON6
#define MT6351_PMIC_RG_AUDRCTUNERSEL_MASK 0x1
#define MT6351_PMIC_RG_AUDRCTUNERSEL_SHIFT 13
#define MT6351_PMIC_RG_AUDSPAREVA30_ADDR MT6351_AUDENC_ANA_CON7
#define MT6351_PMIC_RG_AUDSPAREVA30_MASK 0xFF
#define MT6351_PMIC_RG_AUDSPAREVA30_SHIFT 0
#define MT6351_PMIC_RG_AUDSPAREVA18_ADDR MT6351_AUDENC_ANA_CON7
#define MT6351_PMIC_RG_AUDSPAREVA18_MASK 0xFF
#define MT6351_PMIC_RG_AUDSPAREVA18_SHIFT 8
#define MT6351_PMIC_RG_AUDDIGMICEN_ADDR MT6351_AUDENC_ANA_CON8
#define MT6351_PMIC_RG_AUDDIGMICEN_MASK 0x1
#define MT6351_PMIC_RG_AUDDIGMICEN_SHIFT 0
#define MT6351_PMIC_RG_AUDDIGMICBIAS_ADDR MT6351_AUDENC_ANA_CON8
#define MT6351_PMIC_RG_AUDDIGMICBIAS_MASK 0x3
#define MT6351_PMIC_RG_AUDDIGMICBIAS_SHIFT 1
#define MT6351_PMIC_RG_DMICHPCLKEN_ADDR MT6351_AUDENC_ANA_CON8
#define MT6351_PMIC_RG_DMICHPCLKEN_MASK 0x1
#define MT6351_PMIC_RG_DMICHPCLKEN_SHIFT 3
#define MT6351_PMIC_RG_AUDDIGMICPDUTY_ADDR MT6351_AUDENC_ANA_CON8
#define MT6351_PMIC_RG_AUDDIGMICPDUTY_MASK 0x3
#define MT6351_PMIC_RG_AUDDIGMICPDUTY_SHIFT 4
#define MT6351_PMIC_RG_AUDDIGMICNDUTY_ADDR MT6351_AUDENC_ANA_CON8
#define MT6351_PMIC_RG_AUDDIGMICNDUTY_MASK 0x3
#define MT6351_PMIC_RG_AUDDIGMICNDUTY_SHIFT 6
#define MT6351_PMIC_RG_DMICMONEN_ADDR MT6351_AUDENC_ANA_CON8
#define MT6351_PMIC_RG_DMICMONEN_MASK 0x1
#define MT6351_PMIC_RG_DMICMONEN_SHIFT 8
#define MT6351_PMIC_RG_DMICMONSEL_ADDR MT6351_AUDENC_ANA_CON8
#define MT6351_PMIC_RG_DMICMONSEL_MASK 0x7
#define MT6351_PMIC_RG_DMICMONSEL_SHIFT 9
#define MT6351_PMIC_RG_AUDSPAREVMIC_ADDR MT6351_AUDENC_ANA_CON8
#define MT6351_PMIC_RG_AUDSPAREVMIC_MASK 0xF
#define MT6351_PMIC_RG_AUDSPAREVMIC_SHIFT 12
#define MT6351_PMIC_RG_AUDPWDBMICBIAS0_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDPWDBMICBIAS0_MASK 0x1
#define MT6351_PMIC_RG_AUDPWDBMICBIAS0_SHIFT 0
#define MT6351_PMIC_RG_AUDMICBIAS0DCSW0P1EN_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDMICBIAS0DCSW0P1EN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS0DCSW0P1EN_SHIFT 1
#define MT6351_PMIC_RG_AUDMICBIAS0DCSW0P2EN_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDMICBIAS0DCSW0P2EN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS0DCSW0P2EN_SHIFT 2
#define MT6351_PMIC_RG_AUDMICBIAS0DCSW0NEN_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDMICBIAS0DCSW0NEN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS0DCSW0NEN_SHIFT 3
#define MT6351_PMIC_RG_AUDMICBIAS0VREF_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDMICBIAS0VREF_MASK 0x7
#define MT6351_PMIC_RG_AUDMICBIAS0VREF_SHIFT 4
#define MT6351_PMIC_RG_AUDMICBIAS0LOWPEN_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDMICBIAS0LOWPEN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS0LOWPEN_SHIFT 7
#define MT6351_PMIC_RG_AUDPWDBMICBIAS2_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDPWDBMICBIAS2_MASK 0x1
#define MT6351_PMIC_RG_AUDPWDBMICBIAS2_SHIFT 8
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW2P1EN_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW2P1EN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW2P1EN_SHIFT 9
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW2P2EN_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW2P2EN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW2P2EN_SHIFT 10
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW2NEN_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW2NEN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW2NEN_SHIFT 11
#define MT6351_PMIC_RG_AUDMICBIAS2VREF_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDMICBIAS2VREF_MASK 0x7
#define MT6351_PMIC_RG_AUDMICBIAS2VREF_SHIFT 12
#define MT6351_PMIC_RG_AUDMICBIAS2LOWPEN_ADDR MT6351_AUDENC_ANA_CON9
#define MT6351_PMIC_RG_AUDMICBIAS2LOWPEN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS2LOWPEN_SHIFT 15
#define MT6351_PMIC_RG_AUDPWDBMICBIAS1_ADDR MT6351_AUDENC_ANA_CON10
#define MT6351_PMIC_RG_AUDPWDBMICBIAS1_MASK 0x1
#define MT6351_PMIC_RG_AUDPWDBMICBIAS1_SHIFT 0
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW1PEN_ADDR MT6351_AUDENC_ANA_CON10
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW1PEN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW1PEN_SHIFT 1
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW1NEN_ADDR MT6351_AUDENC_ANA_CON10
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW1NEN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW1NEN_SHIFT 2
#define MT6351_PMIC_RG_AUDMICBIAS1VREF_ADDR MT6351_AUDENC_ANA_CON10
#define MT6351_PMIC_RG_AUDMICBIAS1VREF_MASK 0x7
#define MT6351_PMIC_RG_AUDMICBIAS1VREF_SHIFT 4
#define MT6351_PMIC_RG_AUDMICBIAS1LOWPEN_ADDR MT6351_AUDENC_ANA_CON10
#define MT6351_PMIC_RG_AUDMICBIAS1LOWPEN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS1LOWPEN_SHIFT 7
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW3PEN_ADDR MT6351_AUDENC_ANA_CON10
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW3PEN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW3PEN_SHIFT 8
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW3NEN_ADDR MT6351_AUDENC_ANA_CON10
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW3NEN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS1DCSW3NEN_SHIFT 9
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW3PEN_ADDR MT6351_AUDENC_ANA_CON10
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW3PEN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW3PEN_SHIFT 10
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW3NEN_ADDR MT6351_AUDENC_ANA_CON10
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW3NEN_MASK 0x1
#define MT6351_PMIC_RG_AUDMICBIAS2DCSW3NEN_SHIFT 11
#define MT6351_PMIC_RG_BANDGAPGEN_ADDR MT6351_AUDENC_ANA_CON10
#define MT6351_PMIC_RG_BANDGAPGEN_MASK 0x1
#define MT6351_PMIC_RG_BANDGAPGEN_SHIFT 12
#define MT6351_PMIC_RG_AUDACCDETMICBIAS0PULLLOW_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_AUDACCDETMICBIAS0PULLLOW_MASK 0x1
#define MT6351_PMIC_RG_AUDACCDETMICBIAS0PULLLOW_SHIFT 0
#define MT6351_PMIC_RG_AUDACCDETMICBIAS1PULLLOW_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_AUDACCDETMICBIAS1PULLLOW_MASK 0x1
#define MT6351_PMIC_RG_AUDACCDETMICBIAS1PULLLOW_SHIFT 1
#define MT6351_PMIC_RG_AUDACCDETMICBIAS2PULLLOW_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_AUDACCDETMICBIAS2PULLLOW_MASK 0x1
#define MT6351_PMIC_RG_AUDACCDETMICBIAS2PULLLOW_SHIFT 2
#define MT6351_PMIC_RG_AUDACCDETVIN1PULLLOW_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_AUDACCDETVIN1PULLLOW_MASK 0x1
#define MT6351_PMIC_RG_AUDACCDETVIN1PULLLOW_SHIFT 3
#define MT6351_PMIC_RG_AUDACCDETVTHACAL_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_AUDACCDETVTHACAL_MASK 0x1
#define MT6351_PMIC_RG_AUDACCDETVTHACAL_SHIFT 4
#define MT6351_PMIC_RG_AUDACCDETVTHBCAL_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_AUDACCDETVTHBCAL_MASK 0x1
#define MT6351_PMIC_RG_AUDACCDETVTHBCAL_SHIFT 5
#define MT6351_PMIC_RG_ACCDET1SEL_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_ACCDET1SEL_MASK 0x1
#define MT6351_PMIC_RG_ACCDET1SEL_SHIFT 6
#define MT6351_PMIC_RG_ACCDET2SEL_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_ACCDET2SEL_MASK 0x1
#define MT6351_PMIC_RG_ACCDET2SEL_SHIFT 7
#define MT6351_PMIC_RG_SWBUFMODSEL_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_SWBUFMODSEL_MASK 0x1
#define MT6351_PMIC_RG_SWBUFMODSEL_SHIFT 8
#define MT6351_PMIC_RG_SWBUFSWEN_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_SWBUFSWEN_MASK 0x1
#define MT6351_PMIC_RG_SWBUFSWEN_SHIFT 9
#define MT6351_PMIC_RG_EINTCOMPVTH_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_EINTCOMPVTH_MASK 0x1
#define MT6351_PMIC_RG_EINTCOMPVTH_SHIFT 10
#define MT6351_PMIC_RG_EINTCONFIGACCDET_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_EINTCONFIGACCDET_MASK 0x1
#define MT6351_PMIC_RG_EINTCONFIGACCDET_SHIFT 11
#define MT6351_PMIC_RG_NVDETCMPEN_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_NVDETCMPEN_MASK 0x1
#define MT6351_PMIC_RG_NVDETCMPEN_SHIFT 12
#define MT6351_PMIC_RG_NVDETVTH_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_NVDETVTH_MASK 0x1
#define MT6351_PMIC_RG_NVDETVTH_SHIFT 13
#define MT6351_PMIC_RG_NVMODSEL_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_NVMODSEL_MASK 0x1
#define MT6351_PMIC_RG_NVMODSEL_SHIFT 14
#define MT6351_PMIC_RG_NVCMPSWEN_ADDR MT6351_AUDENC_ANA_CON11
#define MT6351_PMIC_RG_NVCMPSWEN_MASK 0x1
#define MT6351_PMIC_RG_NVCMPSWEN_SHIFT 15
#define MT6351_PMIC_RG_AUDENCSPAREVA30_ADDR MT6351_AUDENC_ANA_CON12
#define MT6351_PMIC_RG_AUDENCSPAREVA30_MASK 0xFF
#define MT6351_PMIC_RG_AUDENCSPAREVA30_SHIFT 0
#define MT6351_PMIC_RG_AUDENCSPAREVA18_ADDR MT6351_AUDENC_ANA_CON12
#define MT6351_PMIC_RG_AUDENCSPAREVA18_MASK 0xFF
#define MT6351_PMIC_RG_AUDENCSPAREVA18_SHIFT 8
#define MT6351_PMIC_RG_PLL_EN_ADDR MT6351_AUDENC_ANA_CON13
#define MT6351_PMIC_RG_PLL_EN_MASK 0x1
#define MT6351_PMIC_RG_PLL_EN_SHIFT 0
#define MT6351_PMIC_RG_PLLBS_RST_ADDR MT6351_AUDENC_ANA_CON13
#define MT6351_PMIC_RG_PLLBS_RST_MASK 0x1
#define MT6351_PMIC_RG_PLLBS_RST_SHIFT 1
#define MT6351_PMIC_RG_PLL_DCKO_SEL_ADDR MT6351_AUDENC_ANA_CON13
#define MT6351_PMIC_RG_PLL_DCKO_SEL_MASK 0x3
#define MT6351_PMIC_RG_PLL_DCKO_SEL_SHIFT 2
#define MT6351_PMIC_RG_PLL_DIV1_ADDR MT6351_AUDENC_ANA_CON13
#define MT6351_PMIC_RG_PLL_DIV1_MASK 0x3F
#define MT6351_PMIC_RG_PLL_DIV1_SHIFT 4
#define MT6351_PMIC_RG_PLL_RLATCH_EN_ADDR MT6351_AUDENC_ANA_CON13
#define MT6351_PMIC_RG_PLL_RLATCH_EN_MASK 0x1
#define MT6351_PMIC_RG_PLL_RLATCH_EN_SHIFT 10
#define MT6351_PMIC_RG_PLL_PDIV1_EN_ADDR MT6351_AUDENC_ANA_CON13
#define MT6351_PMIC_RG_PLL_PDIV1_EN_MASK 0x1
#define MT6351_PMIC_RG_PLL_PDIV1_EN_SHIFT 11
#define MT6351_PMIC_RG_PLL_PDIV1_ADDR MT6351_AUDENC_ANA_CON13
#define MT6351_PMIC_RG_PLL_PDIV1_MASK 0xF
#define MT6351_PMIC_RG_PLL_PDIV1_SHIFT 12
#define MT6351_PMIC_RG_PLL_BC_ADDR MT6351_AUDENC_ANA_CON14
#define MT6351_PMIC_RG_PLL_BC_MASK 0x3
#define MT6351_PMIC_RG_PLL_BC_SHIFT 0
#define MT6351_PMIC_RG_PLL_BP_ADDR MT6351_AUDENC_ANA_CON14
#define MT6351_PMIC_RG_PLL_BP_MASK 0x3
#define MT6351_PMIC_RG_PLL_BP_SHIFT 2
#define MT6351_PMIC_RG_PLL_BR_ADDR MT6351_AUDENC_ANA_CON14
#define MT6351_PMIC_RG_PLL_BR_MASK 0x3
#define MT6351_PMIC_RG_PLL_BR_SHIFT 4
#define MT6351_PMIC_RG_CKO_SEL_ADDR MT6351_AUDENC_ANA_CON14
#define MT6351_PMIC_RG_CKO_SEL_MASK 0x3
#define MT6351_PMIC_RG_CKO_SEL_SHIFT 6
#define MT6351_PMIC_RG_PLL_IBSEL_ADDR MT6351_AUDENC_ANA_CON14
#define MT6351_PMIC_RG_PLL_IBSEL_MASK 0x3
#define MT6351_PMIC_RG_PLL_IBSEL_SHIFT 8
#define MT6351_PMIC_RG_PLL_CKT_SEL_ADDR MT6351_AUDENC_ANA_CON14
#define MT6351_PMIC_RG_PLL_CKT_SEL_MASK 0x3
#define MT6351_PMIC_RG_PLL_CKT_SEL_SHIFT 10
#define MT6351_PMIC_RG_PLL_VCT_EN_ADDR MT6351_AUDENC_ANA_CON14
#define MT6351_PMIC_RG_PLL_VCT_EN_MASK 0x1
#define MT6351_PMIC_RG_PLL_VCT_EN_SHIFT 12
#define MT6351_PMIC_RG_PLL_CKT_EN_ADDR MT6351_AUDENC_ANA_CON14
#define MT6351_PMIC_RG_PLL_CKT_EN_MASK 0x1
#define MT6351_PMIC_RG_PLL_CKT_EN_SHIFT 13
#define MT6351_PMIC_RG_PLL_HPM_EN_ADDR MT6351_AUDENC_ANA_CON14
#define MT6351_PMIC_RG_PLL_HPM_EN_MASK 0x1
#define MT6351_PMIC_RG_PLL_HPM_EN_SHIFT 14
#define MT6351_PMIC_RG_PLL_DCHP_EN_ADDR MT6351_AUDENC_ANA_CON14
#define MT6351_PMIC_RG_PLL_DCHP_EN_MASK 0x1
#define MT6351_PMIC_RG_PLL_DCHP_EN_SHIFT 15
#define MT6351_PMIC_RG_PLL_CDIV_ADDR MT6351_AUDENC_ANA_CON15
#define MT6351_PMIC_RG_PLL_CDIV_MASK 0x7
#define MT6351_PMIC_RG_PLL_CDIV_SHIFT 0
#define MT6351_PMIC_RG_VCOBAND_ADDR MT6351_AUDENC_ANA_CON15
#define MT6351_PMIC_RG_VCOBAND_MASK 0x7
#define MT6351_PMIC_RG_VCOBAND_SHIFT 3
#define MT6351_PMIC_RG_CKDRV_EN_ADDR MT6351_AUDENC_ANA_CON15
#define MT6351_PMIC_RG_CKDRV_EN_MASK 0x1
#define MT6351_PMIC_RG_CKDRV_EN_SHIFT 6
#define MT6351_PMIC_RG_PLL_DCHP_AEN_ADDR MT6351_AUDENC_ANA_CON15
#define MT6351_PMIC_RG_PLL_DCHP_AEN_MASK 0x1
#define MT6351_PMIC_RG_PLL_DCHP_AEN_SHIFT 7
#define MT6351_PMIC_RG_PLL_RSVA_ADDR MT6351_AUDENC_ANA_CON15
#define MT6351_PMIC_RG_PLL_RSVA_MASK 0xFF
#define MT6351_PMIC_RG_PLL_RSVA_SHIFT 8
#define MT6351_PMIC_RGS_AUDRCTUNELREAD_ADDR MT6351_AUDENC_ANA_CON16
#define MT6351_PMIC_RGS_AUDRCTUNELREAD_MASK 0x1F
#define MT6351_PMIC_RGS_AUDRCTUNELREAD_SHIFT 0
#define MT6351_PMIC_RGS_AUDRCTUNERREAD_ADDR MT6351_AUDENC_ANA_CON16
#define MT6351_PMIC_RGS_AUDRCTUNERREAD_MASK 0x1F
#define MT6351_PMIC_RGS_AUDRCTUNERREAD_SHIFT 8
#define MT6351_PMIC_RG_DIVCKS_CHG_ADDR MT6351_AUDNCP_CLKDIV_CON0
#define MT6351_PMIC_RG_DIVCKS_CHG_MASK 0x1
#define MT6351_PMIC_RG_DIVCKS_CHG_SHIFT 0
#define MT6351_PMIC_RG_DIVCKS_ON_ADDR MT6351_AUDNCP_CLKDIV_CON1
#define MT6351_PMIC_RG_DIVCKS_ON_MASK 0x1
#define MT6351_PMIC_RG_DIVCKS_ON_SHIFT 0
#define MT6351_PMIC_RG_DIVCKS_PRG_ADDR MT6351_AUDNCP_CLKDIV_CON2
#define MT6351_PMIC_RG_DIVCKS_PRG_MASK 0x1FF
#define MT6351_PMIC_RG_DIVCKS_PRG_SHIFT 0
#define MT6351_PMIC_RG_DIVCKS_PWD_NCP_ADDR MT6351_AUDNCP_CLKDIV_CON3
#define MT6351_PMIC_RG_DIVCKS_PWD_NCP_MASK 0x1
#define MT6351_PMIC_RG_DIVCKS_PWD_NCP_SHIFT 0
#define MT6351_PMIC_RG_DIVCKS_PWD_NCP_ST_SEL_ADDR MT6351_AUDNCP_CLKDIV_CON4
#define MT6351_PMIC_RG_DIVCKS_PWD_NCP_ST_SEL_MASK 0x3
#define MT6351_PMIC_RG_DIVCKS_PWD_NCP_ST_SEL_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_OUT_CH0_ADDR MT6351_AUXADC_ADC0
#define MT6351_PMIC_AUXADC_ADC_OUT_CH0_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH0_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH0_ADDR MT6351_AUXADC_ADC0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH0_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH0_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH1_ADDR MT6351_AUXADC_ADC1
#define MT6351_PMIC_AUXADC_ADC_OUT_CH1_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH1_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH1_ADDR MT6351_AUXADC_ADC1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH1_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH1_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH2_ADDR MT6351_AUXADC_ADC2
#define MT6351_PMIC_AUXADC_ADC_OUT_CH2_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH2_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH2_ADDR MT6351_AUXADC_ADC2
#define MT6351_PMIC_AUXADC_ADC_RDY_CH2_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH2_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH3_ADDR MT6351_AUXADC_ADC3
#define MT6351_PMIC_AUXADC_ADC_OUT_CH3_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH3_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH3_ADDR MT6351_AUXADC_ADC3
#define MT6351_PMIC_AUXADC_ADC_RDY_CH3_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH3_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH4_ADDR MT6351_AUXADC_ADC4
#define MT6351_PMIC_AUXADC_ADC_OUT_CH4_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH4_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH4_ADDR MT6351_AUXADC_ADC4
#define MT6351_PMIC_AUXADC_ADC_RDY_CH4_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH4_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH5_ADDR MT6351_AUXADC_ADC5
#define MT6351_PMIC_AUXADC_ADC_OUT_CH5_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH5_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH5_ADDR MT6351_AUXADC_ADC5
#define MT6351_PMIC_AUXADC_ADC_RDY_CH5_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH5_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH6_ADDR MT6351_AUXADC_ADC6
#define MT6351_PMIC_AUXADC_ADC_OUT_CH6_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH6_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH6_ADDR MT6351_AUXADC_ADC6
#define MT6351_PMIC_AUXADC_ADC_RDY_CH6_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH6_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_ADDR MT6351_AUXADC_ADC7
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_ADDR MT6351_AUXADC_ADC7
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH8_ADDR MT6351_AUXADC_ADC8
#define MT6351_PMIC_AUXADC_ADC_OUT_CH8_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH8_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH8_ADDR MT6351_AUXADC_ADC8
#define MT6351_PMIC_AUXADC_ADC_RDY_CH8_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH8_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH9_ADDR MT6351_AUXADC_ADC9
#define MT6351_PMIC_AUXADC_ADC_OUT_CH9_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH9_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH9_ADDR MT6351_AUXADC_ADC9
#define MT6351_PMIC_AUXADC_ADC_RDY_CH9_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH9_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH10_ADDR MT6351_AUXADC_ADC10
#define MT6351_PMIC_AUXADC_ADC_OUT_CH10_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH10_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH10_ADDR MT6351_AUXADC_ADC10
#define MT6351_PMIC_AUXADC_ADC_RDY_CH10_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH10_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH11_ADDR MT6351_AUXADC_ADC11
#define MT6351_PMIC_AUXADC_ADC_OUT_CH11_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH11_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH11_ADDR MT6351_AUXADC_ADC11
#define MT6351_PMIC_AUXADC_ADC_RDY_CH11_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH11_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH12_15_ADDR MT6351_AUXADC_ADC12
#define MT6351_PMIC_AUXADC_ADC_OUT_CH12_15_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH12_15_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH12_15_ADDR MT6351_AUXADC_ADC12
#define MT6351_PMIC_AUXADC_ADC_RDY_CH12_15_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH12_15_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_THR_HW_ADDR MT6351_AUXADC_ADC13
#define MT6351_PMIC_AUXADC_ADC_OUT_THR_HW_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_THR_HW_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_THR_HW_ADDR MT6351_AUXADC_ADC13
#define MT6351_PMIC_AUXADC_ADC_RDY_THR_HW_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_THR_HW_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_LBAT_ADDR MT6351_AUXADC_ADC14
#define MT6351_PMIC_AUXADC_ADC_OUT_LBAT_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_LBAT_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_LBAT_ADDR MT6351_AUXADC_ADC14
#define MT6351_PMIC_AUXADC_ADC_RDY_LBAT_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_LBAT_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_LBAT2_ADDR MT6351_AUXADC_ADC15
#define MT6351_PMIC_AUXADC_ADC_OUT_LBAT2_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_LBAT2_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_LBAT2_ADDR MT6351_AUXADC_ADC15
#define MT6351_PMIC_AUXADC_ADC_RDY_LBAT2_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_LBAT2_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_GPS_ADDR MT6351_AUXADC_ADC16
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_GPS_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_GPS_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_GPS_ADDR MT6351_AUXADC_ADC16
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_GPS_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_GPS_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_MD_ADDR MT6351_AUXADC_ADC17
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_MD_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_MD_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_MD_ADDR MT6351_AUXADC_ADC17
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_MD_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_AP_ADDR MT6351_AUXADC_ADC18
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_AP_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_AP_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_AP_ADDR MT6351_AUXADC_ADC18
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_AP_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_AP_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH4_BY_MD_ADDR MT6351_AUXADC_ADC19
#define MT6351_PMIC_AUXADC_ADC_OUT_CH4_BY_MD_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH4_BY_MD_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH4_BY_MD_ADDR MT6351_AUXADC_ADC19
#define MT6351_PMIC_AUXADC_ADC_RDY_CH4_BY_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH4_BY_MD_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_WAKEUP_PCHR_ADDR MT6351_AUXADC_ADC20
#define MT6351_PMIC_AUXADC_ADC_OUT_WAKEUP_PCHR_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_WAKEUP_PCHR_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_PCHR_ADDR MT6351_AUXADC_ADC20
#define MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_PCHR_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_PCHR_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_WAKEUP_SWCHR_ADDR MT6351_AUXADC_ADC21
#define MT6351_PMIC_AUXADC_ADC_OUT_WAKEUP_SWCHR_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_WAKEUP_SWCHR_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_SWCHR_ADDR MT6351_AUXADC_ADC21
#define MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_SWCHR_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_SWCHR_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH0_BY_MD_ADDR MT6351_AUXADC_ADC22
#define MT6351_PMIC_AUXADC_ADC_OUT_CH0_BY_MD_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH0_BY_MD_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH0_BY_MD_ADDR MT6351_AUXADC_ADC22
#define MT6351_PMIC_AUXADC_ADC_RDY_CH0_BY_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH0_BY_MD_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH0_BY_AP_ADDR MT6351_AUXADC_ADC23
#define MT6351_PMIC_AUXADC_ADC_OUT_CH0_BY_AP_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH0_BY_AP_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH0_BY_AP_ADDR MT6351_AUXADC_ADC23
#define MT6351_PMIC_AUXADC_ADC_RDY_CH0_BY_AP_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH0_BY_AP_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH1_BY_MD_ADDR MT6351_AUXADC_ADC24
#define MT6351_PMIC_AUXADC_ADC_OUT_CH1_BY_MD_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH1_BY_MD_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH1_BY_MD_ADDR MT6351_AUXADC_ADC24
#define MT6351_PMIC_AUXADC_ADC_RDY_CH1_BY_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH1_BY_MD_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_CH1_BY_AP_ADDR MT6351_AUXADC_ADC25
#define MT6351_PMIC_AUXADC_ADC_OUT_CH1_BY_AP_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_CH1_BY_AP_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_CH1_BY_AP_ADDR MT6351_AUXADC_ADC25
#define MT6351_PMIC_AUXADC_ADC_RDY_CH1_BY_AP_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_CH1_BY_AP_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_VISMPS0_ADDR MT6351_AUXADC_ADC26
#define MT6351_PMIC_AUXADC_ADC_OUT_VISMPS0_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_VISMPS0_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_VISMPS0_ADDR MT6351_AUXADC_ADC26
#define MT6351_PMIC_AUXADC_ADC_RDY_VISMPS0_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_VISMPS0_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_FGADC1_ADDR MT6351_AUXADC_ADC27
#define MT6351_PMIC_AUXADC_ADC_OUT_FGADC1_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_FGADC1_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_FGADC1_ADDR MT6351_AUXADC_ADC27
#define MT6351_PMIC_AUXADC_ADC_RDY_FGADC1_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_FGADC1_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_FGADC2_ADDR MT6351_AUXADC_ADC28
#define MT6351_PMIC_AUXADC_ADC_OUT_FGADC2_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_FGADC2_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_FGADC2_ADDR MT6351_AUXADC_ADC28
#define MT6351_PMIC_AUXADC_ADC_RDY_FGADC2_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_FGADC2_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_IMP_ADDR MT6351_AUXADC_ADC29
#define MT6351_PMIC_AUXADC_ADC_OUT_IMP_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_IMP_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_IMP_ADDR MT6351_AUXADC_ADC29
#define MT6351_PMIC_AUXADC_ADC_RDY_IMP_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_IMP_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_IMP_AVG_ADDR MT6351_AUXADC_ADC30
#define MT6351_PMIC_AUXADC_ADC_OUT_IMP_AVG_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_IMP_AVG_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_IMP_AVG_ADDR MT6351_AUXADC_ADC30
#define MT6351_PMIC_AUXADC_ADC_RDY_IMP_AVG_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_IMP_AVG_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_RAW_ADDR MT6351_AUXADC_ADC31
#define MT6351_PMIC_AUXADC_ADC_OUT_RAW_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_RAW_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_OUT_MDRT_ADDR MT6351_AUXADC_ADC32
#define MT6351_PMIC_AUXADC_ADC_OUT_MDRT_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_MDRT_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_MDRT_ADDR MT6351_AUXADC_ADC32
#define MT6351_PMIC_AUXADC_ADC_RDY_MDRT_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_MDRT_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_MDBG_ADDR MT6351_AUXADC_ADC33
#define MT6351_PMIC_AUXADC_ADC_OUT_MDBG_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_MDBG_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_MDBG_ADDR MT6351_AUXADC_ADC33
#define MT6351_PMIC_AUXADC_ADC_RDY_MDBG_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_MDBG_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_JEITA_ADDR MT6351_AUXADC_ADC34
#define MT6351_PMIC_AUXADC_ADC_OUT_JEITA_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_JEITA_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_JEITA_ADDR MT6351_AUXADC_ADC34
#define MT6351_PMIC_AUXADC_ADC_RDY_JEITA_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_JEITA_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_GPS_ADDR MT6351_AUXADC_ADC35
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_GPS_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_GPS_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_GPS_ADDR MT6351_AUXADC_ADC35
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_GPS_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_GPS_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_MD_ADDR MT6351_AUXADC_ADC36
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_MD_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_MD_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_MD_ADDR MT6351_AUXADC_ADC36
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_MD_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_AP_ADDR MT6351_AUXADC_ADC37
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_AP_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_AP_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_AP_ADDR MT6351_AUXADC_ADC37
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_AP_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_AP_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_MDRT_ADDR MT6351_AUXADC_ADC38
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_MDRT_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_OUT_DCXO_MDRT_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_MDRT_ADDR MT6351_AUXADC_ADC38
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_MDRT_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_DCXO_MDRT_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_OUT_NAG_ADDR MT6351_AUXADC_ADC39
#define MT6351_PMIC_AUXADC_ADC_OUT_NAG_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_ADC_OUT_NAG_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_RDY_NAG_ADDR MT6351_AUXADC_ADC39
#define MT6351_PMIC_AUXADC_ADC_RDY_NAG_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_NAG_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_00_ADDR MT6351_AUXADC_BUF0
#define MT6351_PMIC_AUXADC_BUF_OUT_00_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_00_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_00_ADDR MT6351_AUXADC_BUF0
#define MT6351_PMIC_AUXADC_BUF_RDY_00_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_00_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_01_ADDR MT6351_AUXADC_BUF1
#define MT6351_PMIC_AUXADC_BUF_OUT_01_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_01_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_01_ADDR MT6351_AUXADC_BUF1
#define MT6351_PMIC_AUXADC_BUF_RDY_01_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_01_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_02_ADDR MT6351_AUXADC_BUF2
#define MT6351_PMIC_AUXADC_BUF_OUT_02_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_02_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_02_ADDR MT6351_AUXADC_BUF2
#define MT6351_PMIC_AUXADC_BUF_RDY_02_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_02_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_03_ADDR MT6351_AUXADC_BUF3
#define MT6351_PMIC_AUXADC_BUF_OUT_03_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_03_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_03_ADDR MT6351_AUXADC_BUF3
#define MT6351_PMIC_AUXADC_BUF_RDY_03_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_03_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_04_ADDR MT6351_AUXADC_BUF4
#define MT6351_PMIC_AUXADC_BUF_OUT_04_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_04_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_04_ADDR MT6351_AUXADC_BUF4
#define MT6351_PMIC_AUXADC_BUF_RDY_04_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_04_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_05_ADDR MT6351_AUXADC_BUF5
#define MT6351_PMIC_AUXADC_BUF_OUT_05_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_05_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_05_ADDR MT6351_AUXADC_BUF5
#define MT6351_PMIC_AUXADC_BUF_RDY_05_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_05_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_06_ADDR MT6351_AUXADC_BUF6
#define MT6351_PMIC_AUXADC_BUF_OUT_06_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_06_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_06_ADDR MT6351_AUXADC_BUF6
#define MT6351_PMIC_AUXADC_BUF_RDY_06_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_06_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_07_ADDR MT6351_AUXADC_BUF7
#define MT6351_PMIC_AUXADC_BUF_OUT_07_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_07_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_07_ADDR MT6351_AUXADC_BUF7
#define MT6351_PMIC_AUXADC_BUF_RDY_07_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_07_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_08_ADDR MT6351_AUXADC_BUF8
#define MT6351_PMIC_AUXADC_BUF_OUT_08_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_08_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_08_ADDR MT6351_AUXADC_BUF8
#define MT6351_PMIC_AUXADC_BUF_RDY_08_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_08_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_09_ADDR MT6351_AUXADC_BUF9
#define MT6351_PMIC_AUXADC_BUF_OUT_09_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_09_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_09_ADDR MT6351_AUXADC_BUF9
#define MT6351_PMIC_AUXADC_BUF_RDY_09_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_09_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_10_ADDR MT6351_AUXADC_BUF10
#define MT6351_PMIC_AUXADC_BUF_OUT_10_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_10_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_10_ADDR MT6351_AUXADC_BUF10
#define MT6351_PMIC_AUXADC_BUF_RDY_10_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_10_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_11_ADDR MT6351_AUXADC_BUF11
#define MT6351_PMIC_AUXADC_BUF_OUT_11_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_11_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_11_ADDR MT6351_AUXADC_BUF11
#define MT6351_PMIC_AUXADC_BUF_RDY_11_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_11_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_12_ADDR MT6351_AUXADC_BUF12
#define MT6351_PMIC_AUXADC_BUF_OUT_12_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_12_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_12_ADDR MT6351_AUXADC_BUF12
#define MT6351_PMIC_AUXADC_BUF_RDY_12_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_12_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_13_ADDR MT6351_AUXADC_BUF13
#define MT6351_PMIC_AUXADC_BUF_OUT_13_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_13_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_13_ADDR MT6351_AUXADC_BUF13
#define MT6351_PMIC_AUXADC_BUF_RDY_13_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_13_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_14_ADDR MT6351_AUXADC_BUF14
#define MT6351_PMIC_AUXADC_BUF_OUT_14_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_14_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_14_ADDR MT6351_AUXADC_BUF14
#define MT6351_PMIC_AUXADC_BUF_RDY_14_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_14_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_15_ADDR MT6351_AUXADC_BUF15
#define MT6351_PMIC_AUXADC_BUF_OUT_15_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_15_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_15_ADDR MT6351_AUXADC_BUF15
#define MT6351_PMIC_AUXADC_BUF_RDY_15_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_15_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_16_ADDR MT6351_AUXADC_BUF16
#define MT6351_PMIC_AUXADC_BUF_OUT_16_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_16_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_16_ADDR MT6351_AUXADC_BUF16
#define MT6351_PMIC_AUXADC_BUF_RDY_16_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_16_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_17_ADDR MT6351_AUXADC_BUF17
#define MT6351_PMIC_AUXADC_BUF_OUT_17_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_17_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_17_ADDR MT6351_AUXADC_BUF17
#define MT6351_PMIC_AUXADC_BUF_RDY_17_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_17_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_18_ADDR MT6351_AUXADC_BUF18
#define MT6351_PMIC_AUXADC_BUF_OUT_18_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_18_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_18_ADDR MT6351_AUXADC_BUF18
#define MT6351_PMIC_AUXADC_BUF_RDY_18_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_18_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_19_ADDR MT6351_AUXADC_BUF19
#define MT6351_PMIC_AUXADC_BUF_OUT_19_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_19_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_19_ADDR MT6351_AUXADC_BUF19
#define MT6351_PMIC_AUXADC_BUF_RDY_19_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_19_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_20_ADDR MT6351_AUXADC_BUF20
#define MT6351_PMIC_AUXADC_BUF_OUT_20_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_20_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_20_ADDR MT6351_AUXADC_BUF20
#define MT6351_PMIC_AUXADC_BUF_RDY_20_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_20_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_21_ADDR MT6351_AUXADC_BUF21
#define MT6351_PMIC_AUXADC_BUF_OUT_21_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_21_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_21_ADDR MT6351_AUXADC_BUF21
#define MT6351_PMIC_AUXADC_BUF_RDY_21_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_21_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_22_ADDR MT6351_AUXADC_BUF22
#define MT6351_PMIC_AUXADC_BUF_OUT_22_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_22_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_22_ADDR MT6351_AUXADC_BUF22
#define MT6351_PMIC_AUXADC_BUF_RDY_22_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_22_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_23_ADDR MT6351_AUXADC_BUF23
#define MT6351_PMIC_AUXADC_BUF_OUT_23_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_23_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_23_ADDR MT6351_AUXADC_BUF23
#define MT6351_PMIC_AUXADC_BUF_RDY_23_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_23_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_24_ADDR MT6351_AUXADC_BUF24
#define MT6351_PMIC_AUXADC_BUF_OUT_24_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_24_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_24_ADDR MT6351_AUXADC_BUF24
#define MT6351_PMIC_AUXADC_BUF_RDY_24_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_24_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_25_ADDR MT6351_AUXADC_BUF25
#define MT6351_PMIC_AUXADC_BUF_OUT_25_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_25_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_25_ADDR MT6351_AUXADC_BUF25
#define MT6351_PMIC_AUXADC_BUF_RDY_25_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_25_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_26_ADDR MT6351_AUXADC_BUF26
#define MT6351_PMIC_AUXADC_BUF_OUT_26_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_26_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_26_ADDR MT6351_AUXADC_BUF26
#define MT6351_PMIC_AUXADC_BUF_RDY_26_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_26_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_27_ADDR MT6351_AUXADC_BUF27
#define MT6351_PMIC_AUXADC_BUF_OUT_27_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_27_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_27_ADDR MT6351_AUXADC_BUF27
#define MT6351_PMIC_AUXADC_BUF_RDY_27_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_27_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_28_ADDR MT6351_AUXADC_BUF28
#define MT6351_PMIC_AUXADC_BUF_OUT_28_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_28_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_28_ADDR MT6351_AUXADC_BUF28
#define MT6351_PMIC_AUXADC_BUF_RDY_28_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_28_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_29_ADDR MT6351_AUXADC_BUF29
#define MT6351_PMIC_AUXADC_BUF_OUT_29_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_29_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_29_ADDR MT6351_AUXADC_BUF29
#define MT6351_PMIC_AUXADC_BUF_RDY_29_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_29_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_30_ADDR MT6351_AUXADC_BUF30
#define MT6351_PMIC_AUXADC_BUF_OUT_30_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_30_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_30_ADDR MT6351_AUXADC_BUF30
#define MT6351_PMIC_AUXADC_BUF_RDY_30_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_30_SHIFT 15
#define MT6351_PMIC_AUXADC_BUF_OUT_31_ADDR MT6351_AUXADC_BUF31
#define MT6351_PMIC_AUXADC_BUF_OUT_31_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_BUF_OUT_31_SHIFT 0
#define MT6351_PMIC_AUXADC_BUF_RDY_31_ADDR MT6351_AUXADC_BUF31
#define MT6351_PMIC_AUXADC_BUF_RDY_31_MASK 0x1
#define MT6351_PMIC_AUXADC_BUF_RDY_31_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_ADDR MT6351_AUXADC_STA0
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_MASK 0xFFF
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_LBAT_ADDR MT6351_AUXADC_STA0
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_LBAT_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_LBAT_SHIFT 12
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_LBAT2_ADDR MT6351_AUXADC_STA0
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_LBAT2_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_LBAT2_SHIFT 13
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_VISMPS0_ADDR MT6351_AUXADC_STA0
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_VISMPS0_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_VISMPS0_SHIFT 14
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_WAKEUP_ADDR MT6351_AUXADC_STA0
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_WAKEUP_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_WAKEUP_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_MDRT_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_MDRT_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_MDRT_SHIFT 0
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP_SHIFT 1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD_SHIFT 2
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_SHIFT 3
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_JEITA_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_JEITA_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_JEITA_SHIFT 4
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_MDRT_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_MDRT_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_MDRT_SHIFT 5
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_MDBG_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_MDBG_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_MDBG_SHIFT 6
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_SHARE_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_SHARE_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_SHARE_SHIFT 7
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_IMP_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_IMP_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_IMP_SHIFT 8
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_FGADC1_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_FGADC1_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_FGADC1_SHIFT 9
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_FGADC2_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_FGADC2_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_FGADC2_SHIFT 10
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_AP_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_AP_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_AP_SHIFT 11
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_MD_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_MD_SHIFT 12
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_SHIFT 13
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_THR_HW_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_THR_HW_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_THR_HW_SHIFT 14
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_THR_MD_ADDR MT6351_AUXADC_STA1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_THR_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_THR_MD_SHIFT 15
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_NAG_ADDR MT6351_AUXADC_STA2
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_NAG_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_BUSY_IN_NAG_SHIFT 15
#define MT6351_PMIC_AUXADC_RQST_CH0_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH0_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH0_SHIFT 0
#define MT6351_PMIC_AUXADC_RQST_CH1_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH1_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH1_SHIFT 1
#define MT6351_PMIC_AUXADC_RQST_CH2_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH2_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH2_SHIFT 2
#define MT6351_PMIC_AUXADC_RQST_CH3_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH3_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH3_SHIFT 3
#define MT6351_PMIC_AUXADC_RQST_CH4_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH4_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH4_SHIFT 4
#define MT6351_PMIC_AUXADC_RQST_CH5_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH5_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH5_SHIFT 5
#define MT6351_PMIC_AUXADC_RQST_CH6_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH6_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH6_SHIFT 6
#define MT6351_PMIC_AUXADC_RQST_CH7_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH7_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH7_SHIFT 7
#define MT6351_PMIC_AUXADC_RQST_CH8_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH8_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH8_SHIFT 8
#define MT6351_PMIC_AUXADC_RQST_CH9_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH9_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH9_SHIFT 9
#define MT6351_PMIC_AUXADC_RQST_CH10_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH10_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH10_SHIFT 10
#define MT6351_PMIC_AUXADC_RQST_CH11_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH11_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH11_SHIFT 11
#define MT6351_PMIC_AUXADC_RQST_CH12_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH12_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH12_SHIFT 12
#define MT6351_PMIC_AUXADC_RQST_CH13_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH13_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH13_SHIFT 13
#define MT6351_PMIC_AUXADC_RQST_CH14_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH14_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH14_SHIFT 14
#define MT6351_PMIC_AUXADC_RQST_CH15_ADDR MT6351_AUXADC_RQST0
#define MT6351_PMIC_AUXADC_RQST_CH15_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH15_SHIFT 15
#define MT6351_PMIC_AUXADC_RQST0_SET_ADDR MT6351_AUXADC_RQST0_SET
#define MT6351_PMIC_AUXADC_RQST0_SET_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_RQST0_SET_SHIFT 0
#define MT6351_PMIC_AUXADC_RQST0_CLR_ADDR MT6351_AUXADC_RQST0_CLR
#define MT6351_PMIC_AUXADC_RQST0_CLR_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_RQST0_CLR_SHIFT 0
#define MT6351_PMIC_AUXADC_RQST_CH0_BY_MD_ADDR MT6351_AUXADC_RQST1
#define MT6351_PMIC_AUXADC_RQST_CH0_BY_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH0_BY_MD_SHIFT 0
#define MT6351_PMIC_AUXADC_RQST_CH1_BY_MD_ADDR MT6351_AUXADC_RQST1
#define MT6351_PMIC_AUXADC_RQST_CH1_BY_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH1_BY_MD_SHIFT 1
#define MT6351_PMIC_AUXADC_RQST_RSV0_ADDR MT6351_AUXADC_RQST1
#define MT6351_PMIC_AUXADC_RQST_RSV0_MASK 0x3
#define MT6351_PMIC_AUXADC_RQST_RSV0_SHIFT 2
#define MT6351_PMIC_AUXADC_RQST_CH4_BY_MD_ADDR MT6351_AUXADC_RQST1
#define MT6351_PMIC_AUXADC_RQST_CH4_BY_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH4_BY_MD_SHIFT 4
#define MT6351_PMIC_AUXADC_RQST_CH7_BY_MD_ADDR MT6351_AUXADC_RQST1
#define MT6351_PMIC_AUXADC_RQST_CH7_BY_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH7_BY_MD_SHIFT 7
#define MT6351_PMIC_AUXADC_RQST_CH7_BY_GPS_ADDR MT6351_AUXADC_RQST1
#define MT6351_PMIC_AUXADC_RQST_CH7_BY_GPS_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_CH7_BY_GPS_SHIFT 8
#define MT6351_PMIC_AUXADC_RQST_DCXO_BY_MD_ADDR MT6351_AUXADC_RQST1
#define MT6351_PMIC_AUXADC_RQST_DCXO_BY_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_DCXO_BY_MD_SHIFT 9
#define MT6351_PMIC_AUXADC_RQST_DCXO_BY_GPS_ADDR MT6351_AUXADC_RQST1
#define MT6351_PMIC_AUXADC_RQST_DCXO_BY_GPS_MASK 0x1
#define MT6351_PMIC_AUXADC_RQST_DCXO_BY_GPS_SHIFT 10
#define MT6351_PMIC_AUXADC_RQST_RSV1_ADDR MT6351_AUXADC_RQST1
#define MT6351_PMIC_AUXADC_RQST_RSV1_MASK 0x1F
#define MT6351_PMIC_AUXADC_RQST_RSV1_SHIFT 11
#define MT6351_PMIC_AUXADC_RQST1_SET_ADDR MT6351_AUXADC_RQST1_SET
#define MT6351_PMIC_AUXADC_RQST1_SET_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_RQST1_SET_SHIFT 0
#define MT6351_PMIC_AUXADC_RQST1_CLR_ADDR MT6351_AUXADC_RQST1_CLR
#define MT6351_PMIC_AUXADC_RQST1_CLR_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_RQST1_CLR_SHIFT 0
#define MT6351_PMIC_AUXADC_CK_ON_EXTD_ADDR MT6351_AUXADC_CON0
#define MT6351_PMIC_AUXADC_CK_ON_EXTD_MASK 0x3F
#define MT6351_PMIC_AUXADC_CK_ON_EXTD_SHIFT 0
#define MT6351_PMIC_AUXADC_SRCLKEN_SRC_SEL_ADDR MT6351_AUXADC_CON0
#define MT6351_PMIC_AUXADC_SRCLKEN_SRC_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_SRCLKEN_SRC_SEL_SHIFT 6
#define MT6351_PMIC_AUXADC_ADC_PWDB_ADDR MT6351_AUXADC_CON0
#define MT6351_PMIC_AUXADC_ADC_PWDB_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_PWDB_SHIFT 8
#define MT6351_PMIC_AUXADC_ADC_PWDB_SWCTRL_ADDR MT6351_AUXADC_CON0
#define MT6351_PMIC_AUXADC_ADC_PWDB_SWCTRL_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_PWDB_SWCTRL_SHIFT 9
#define MT6351_PMIC_AUXADC_STRUP_CK_ON_ENB_ADDR MT6351_AUXADC_CON0
#define MT6351_PMIC_AUXADC_STRUP_CK_ON_ENB_MASK 0x1
#define MT6351_PMIC_AUXADC_STRUP_CK_ON_ENB_SHIFT 10
#define MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_CLR_ADDR MT6351_AUXADC_CON0
#define MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_CLR_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_CLR_SHIFT 11
#define MT6351_PMIC_AUXADC_SRCLKEN_CK_EN_ADDR MT6351_AUXADC_CON0
#define MT6351_PMIC_AUXADC_SRCLKEN_CK_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_SRCLKEN_CK_EN_SHIFT 12
#define MT6351_PMIC_AUXADC_CK_AON_GPS_ADDR MT6351_AUXADC_CON0
#define MT6351_PMIC_AUXADC_CK_AON_GPS_MASK 0x1
#define MT6351_PMIC_AUXADC_CK_AON_GPS_SHIFT 13
#define MT6351_PMIC_AUXADC_CK_AON_MD_ADDR MT6351_AUXADC_CON0
#define MT6351_PMIC_AUXADC_CK_AON_MD_MASK 0x1
#define MT6351_PMIC_AUXADC_CK_AON_MD_SHIFT 14
#define MT6351_PMIC_AUXADC_CK_AON_ADDR MT6351_AUXADC_CON0
#define MT6351_PMIC_AUXADC_CK_AON_MASK 0x1
#define MT6351_PMIC_AUXADC_CK_AON_SHIFT 15
#define MT6351_PMIC_AUXADC_CON0_SET_ADDR MT6351_AUXADC_CON0_SET
#define MT6351_PMIC_AUXADC_CON0_SET_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_CON0_SET_SHIFT 0
#define MT6351_PMIC_AUXADC_CON0_CLR_ADDR MT6351_AUXADC_CON0_CLR
#define MT6351_PMIC_AUXADC_CON0_CLR_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_CON0_CLR_SHIFT 0
#define MT6351_PMIC_AUXADC_AVG_NUM_SMALL_ADDR MT6351_AUXADC_CON1
#define MT6351_PMIC_AUXADC_AVG_NUM_SMALL_MASK 0x7
#define MT6351_PMIC_AUXADC_AVG_NUM_SMALL_SHIFT 0
#define MT6351_PMIC_AUXADC_AVG_NUM_LARGE_ADDR MT6351_AUXADC_CON1
#define MT6351_PMIC_AUXADC_AVG_NUM_LARGE_MASK 0x7
#define MT6351_PMIC_AUXADC_AVG_NUM_LARGE_SHIFT 3
#define MT6351_PMIC_AUXADC_SPL_NUM_ADDR MT6351_AUXADC_CON1
#define MT6351_PMIC_AUXADC_SPL_NUM_MASK 0x3FF
#define MT6351_PMIC_AUXADC_SPL_NUM_SHIFT 6
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_ADDR MT6351_AUXADC_CON2
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_MASK 0xFFF
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_SHIFT 0
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_SHARE_ADDR MT6351_AUXADC_CON2
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_SHARE_MASK 0x1
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_SHARE_SHIFT 12
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_LBAT_ADDR MT6351_AUXADC_CON2
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_LBAT_MASK 0x1
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_LBAT_SHIFT 13
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_VISMPS_ADDR MT6351_AUXADC_CON2
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_VISMPS_MASK 0x1
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_VISMPS_SHIFT 14
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_WAKEUP_ADDR MT6351_AUXADC_CON2
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_WAKEUP_MASK 0x1
#define MT6351_PMIC_AUXADC_AVG_NUM_SEL_WAKEUP_SHIFT 15
#define MT6351_PMIC_AUXADC_SPL_NUM_LARGE_ADDR MT6351_AUXADC_CON3
#define MT6351_PMIC_AUXADC_SPL_NUM_LARGE_MASK 0x3FF
#define MT6351_PMIC_AUXADC_SPL_NUM_LARGE_SHIFT 0
#define MT6351_PMIC_AUXADC_SPL_NUM_SLEEP_ADDR MT6351_AUXADC_CON4
#define MT6351_PMIC_AUXADC_SPL_NUM_SLEEP_MASK 0x3FF
#define MT6351_PMIC_AUXADC_SPL_NUM_SLEEP_SHIFT 0
#define MT6351_PMIC_AUXADC_SPL_NUM_SLEEP_SEL_ADDR MT6351_AUXADC_CON4
#define MT6351_PMIC_AUXADC_SPL_NUM_SLEEP_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_SPL_NUM_SLEEP_SEL_SHIFT 15
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_ADDR MT6351_AUXADC_CON5
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_MASK 0xFFF
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_SHIFT 0
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_SHARE_ADDR MT6351_AUXADC_CON5
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_SHARE_MASK 0x1
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_SHARE_SHIFT 12
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_LBAT_ADDR MT6351_AUXADC_CON5
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_LBAT_MASK 0x1
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_LBAT_SHIFT 13
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_VISMPS_ADDR MT6351_AUXADC_CON5
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_VISMPS_MASK 0x1
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_VISMPS_SHIFT 14
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_WAKEUP_ADDR MT6351_AUXADC_CON5
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_WAKEUP_MASK 0x1
#define MT6351_PMIC_AUXADC_SPL_NUM_SEL_WAKEUP_SHIFT 15
#define MT6351_PMIC_AUXADC_TRIM_CH0_SEL_ADDR MT6351_AUXADC_CON6
#define MT6351_PMIC_AUXADC_TRIM_CH0_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH0_SEL_SHIFT 0
#define MT6351_PMIC_AUXADC_TRIM_CH1_SEL_ADDR MT6351_AUXADC_CON6
#define MT6351_PMIC_AUXADC_TRIM_CH1_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH1_SEL_SHIFT 2
#define MT6351_PMIC_AUXADC_TRIM_CH2_SEL_ADDR MT6351_AUXADC_CON6
#define MT6351_PMIC_AUXADC_TRIM_CH2_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH2_SEL_SHIFT 4
#define MT6351_PMIC_AUXADC_TRIM_CH3_SEL_ADDR MT6351_AUXADC_CON6
#define MT6351_PMIC_AUXADC_TRIM_CH3_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH3_SEL_SHIFT 6
#define MT6351_PMIC_AUXADC_TRIM_CH4_SEL_ADDR MT6351_AUXADC_CON6
#define MT6351_PMIC_AUXADC_TRIM_CH4_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH4_SEL_SHIFT 8
#define MT6351_PMIC_AUXADC_TRIM_CH5_SEL_ADDR MT6351_AUXADC_CON6
#define MT6351_PMIC_AUXADC_TRIM_CH5_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH5_SEL_SHIFT 10
#define MT6351_PMIC_AUXADC_TRIM_CH6_SEL_ADDR MT6351_AUXADC_CON6
#define MT6351_PMIC_AUXADC_TRIM_CH6_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH6_SEL_SHIFT 12
#define MT6351_PMIC_AUXADC_TRIM_CH7_SEL_ADDR MT6351_AUXADC_CON6
#define MT6351_PMIC_AUXADC_TRIM_CH7_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH7_SEL_SHIFT 14
#define MT6351_PMIC_AUXADC_TRIM_CH8_SEL_ADDR MT6351_AUXADC_CON7
#define MT6351_PMIC_AUXADC_TRIM_CH8_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH8_SEL_SHIFT 0
#define MT6351_PMIC_AUXADC_TRIM_CH9_SEL_ADDR MT6351_AUXADC_CON7
#define MT6351_PMIC_AUXADC_TRIM_CH9_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH9_SEL_SHIFT 2
#define MT6351_PMIC_AUXADC_TRIM_CH10_SEL_ADDR MT6351_AUXADC_CON7
#define MT6351_PMIC_AUXADC_TRIM_CH10_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH10_SEL_SHIFT 4
#define MT6351_PMIC_AUXADC_TRIM_CH11_SEL_ADDR MT6351_AUXADC_CON7
#define MT6351_PMIC_AUXADC_TRIM_CH11_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_TRIM_CH11_SEL_SHIFT 6
#define MT6351_PMIC_AUXADC_ADC_2S_COMP_ENB_ADDR MT6351_AUXADC_CON7
#define MT6351_PMIC_AUXADC_ADC_2S_COMP_ENB_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_2S_COMP_ENB_SHIFT 14
#define MT6351_PMIC_AUXADC_ADC_TRIM_COMP_ADDR MT6351_AUXADC_CON7
#define MT6351_PMIC_AUXADC_ADC_TRIM_COMP_MASK 0x1
#define MT6351_PMIC_AUXADC_ADC_TRIM_COMP_SHIFT 15
#define MT6351_PMIC_AUXADC_SW_GAIN_TRIM_ADDR MT6351_AUXADC_CON8
#define MT6351_PMIC_AUXADC_SW_GAIN_TRIM_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_SW_GAIN_TRIM_SHIFT 0
#define MT6351_PMIC_AUXADC_SW_OFFSET_TRIM_ADDR MT6351_AUXADC_CON9
#define MT6351_PMIC_AUXADC_SW_OFFSET_TRIM_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_SW_OFFSET_TRIM_SHIFT 0
#define MT6351_PMIC_AUXADC_RNG_EN_ADDR MT6351_AUXADC_CON10
#define MT6351_PMIC_AUXADC_RNG_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_RNG_EN_SHIFT 0
#define MT6351_PMIC_AUXADC_DATA_REUSE_SEL_ADDR MT6351_AUXADC_CON10
#define MT6351_PMIC_AUXADC_DATA_REUSE_SEL_MASK 0x3
#define MT6351_PMIC_AUXADC_DATA_REUSE_SEL_SHIFT 1
#define MT6351_PMIC_AUXADC_TEST_MODE_ADDR MT6351_AUXADC_CON10
#define MT6351_PMIC_AUXADC_TEST_MODE_MASK 0x1
#define MT6351_PMIC_AUXADC_TEST_MODE_SHIFT 3
#define MT6351_PMIC_AUXADC_BIT_SEL_ADDR MT6351_AUXADC_CON10
#define MT6351_PMIC_AUXADC_BIT_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_BIT_SEL_SHIFT 4
#define MT6351_PMIC_AUXADC_START_SW_ADDR MT6351_AUXADC_CON10
#define MT6351_PMIC_AUXADC_START_SW_MASK 0x1
#define MT6351_PMIC_AUXADC_START_SW_SHIFT 5
#define MT6351_PMIC_AUXADC_START_SWCTRL_ADDR MT6351_AUXADC_CON10
#define MT6351_PMIC_AUXADC_START_SWCTRL_MASK 0x1
#define MT6351_PMIC_AUXADC_START_SWCTRL_SHIFT 6
#define MT6351_PMIC_AUXADC_TS_VBE_SEL_ADDR MT6351_AUXADC_CON10
#define MT6351_PMIC_AUXADC_TS_VBE_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_TS_VBE_SEL_SHIFT 7
#define MT6351_PMIC_AUXADC_TS_VBE_SEL_SWCTRL_ADDR MT6351_AUXADC_CON10
#define MT6351_PMIC_AUXADC_TS_VBE_SEL_SWCTRL_MASK 0x1
#define MT6351_PMIC_AUXADC_TS_VBE_SEL_SWCTRL_SHIFT 8
#define MT6351_PMIC_AUXADC_VBUF_EN_ADDR MT6351_AUXADC_CON10
#define MT6351_PMIC_AUXADC_VBUF_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_VBUF_EN_SHIFT 9
#define MT6351_PMIC_AUXADC_VBUF_EN_SWCTRL_ADDR MT6351_AUXADC_CON10
#define MT6351_PMIC_AUXADC_VBUF_EN_SWCTRL_MASK 0x1
#define MT6351_PMIC_AUXADC_VBUF_EN_SWCTRL_SHIFT 10
#define MT6351_PMIC_AUXADC_OUT_SEL_ADDR MT6351_AUXADC_CON10
#define MT6351_PMIC_AUXADC_OUT_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_OUT_SEL_SHIFT 11
#define MT6351_PMIC_AUXADC_DA_DAC_ADDR MT6351_AUXADC_CON11
#define MT6351_PMIC_AUXADC_DA_DAC_MASK 0xFFF
#define MT6351_PMIC_AUXADC_DA_DAC_SHIFT 0
#define MT6351_PMIC_AUXADC_DA_DAC_SWCTRL_ADDR MT6351_AUXADC_CON11
#define MT6351_PMIC_AUXADC_DA_DAC_SWCTRL_MASK 0x1
#define MT6351_PMIC_AUXADC_DA_DAC_SWCTRL_SHIFT 12
#define MT6351_PMIC_AD_AUXADC_COMP_ADDR MT6351_AUXADC_CON11
#define MT6351_PMIC_AD_AUXADC_COMP_MASK 0x1
#define MT6351_PMIC_AD_AUXADC_COMP_SHIFT 15
#define MT6351_PMIC_RG_VBUF_EXTEN_ADDR MT6351_AUXADC_CON12
#define MT6351_PMIC_RG_VBUF_EXTEN_MASK 0x1
#define MT6351_PMIC_RG_VBUF_EXTEN_SHIFT 0
#define MT6351_PMIC_RG_VBUF_CALEN_ADDR MT6351_AUXADC_CON12
#define MT6351_PMIC_RG_VBUF_CALEN_MASK 0x1
#define MT6351_PMIC_RG_VBUF_CALEN_SHIFT 1
#define MT6351_PMIC_RG_VBUF_BYP_ADDR MT6351_AUXADC_CON12
#define MT6351_PMIC_RG_VBUF_BYP_MASK 0x1
#define MT6351_PMIC_RG_VBUF_BYP_SHIFT 2
#define MT6351_PMIC_RG_AUX_RSV_ADDR MT6351_AUXADC_CON12
#define MT6351_PMIC_RG_AUX_RSV_MASK 0xF
#define MT6351_PMIC_RG_AUX_RSV_SHIFT 3
#define MT6351_PMIC_RG_AUXADC_CALI_ADDR MT6351_AUXADC_CON12
#define MT6351_PMIC_RG_AUXADC_CALI_MASK 0xF
#define MT6351_PMIC_RG_AUXADC_CALI_SHIFT 7
#define MT6351_PMIC_AUXADC_ADCIN_VSEN_EN_ADDR MT6351_AUXADC_CON13
#define MT6351_PMIC_AUXADC_ADCIN_VSEN_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_ADCIN_VSEN_EN_SHIFT 0
#define MT6351_PMIC_AUXADC_ADCIN_VBAT_EN_ADDR MT6351_AUXADC_CON13
#define MT6351_PMIC_AUXADC_ADCIN_VBAT_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_ADCIN_VBAT_EN_SHIFT 1
#define MT6351_PMIC_AUXADC_ADCIN_VSEN_MUX_EN_ADDR MT6351_AUXADC_CON13
#define MT6351_PMIC_AUXADC_ADCIN_VSEN_MUX_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_ADCIN_VSEN_MUX_EN_SHIFT 2
#define MT6351_PMIC_AUXADC_ADCIN_VSEN_EXT_BATON_EN_ADDR MT6351_AUXADC_CON13
#define MT6351_PMIC_AUXADC_ADCIN_VSEN_EXT_BATON_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_ADCIN_VSEN_EXT_BATON_EN_SHIFT 3
#define MT6351_PMIC_AUXADC_ADCIN_CHR_EN_ADDR MT6351_AUXADC_CON13
#define MT6351_PMIC_AUXADC_ADCIN_CHR_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_ADCIN_CHR_EN_SHIFT 4
#define MT6351_PMIC_AUXADC_ADCIN_BATON_TDET_EN_ADDR MT6351_AUXADC_CON13
#define MT6351_PMIC_AUXADC_ADCIN_BATON_TDET_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_ADCIN_BATON_TDET_EN_SHIFT 5
#define MT6351_PMIC_AUXADC_ACCDET_ANASWCTRL_EN_ADDR MT6351_AUXADC_CON13
#define MT6351_PMIC_AUXADC_ACCDET_ANASWCTRL_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_ACCDET_ANASWCTRL_EN_SHIFT 6
#define MT6351_PMIC_AUXADC_DIG0_RSV0_ADDR MT6351_AUXADC_CON13
#define MT6351_PMIC_AUXADC_DIG0_RSV0_MASK 0xF
#define MT6351_PMIC_AUXADC_DIG0_RSV0_SHIFT 7
#define MT6351_PMIC_AUXADC_CHSEL_ADDR MT6351_AUXADC_CON13
#define MT6351_PMIC_AUXADC_CHSEL_MASK 0xF
#define MT6351_PMIC_AUXADC_CHSEL_SHIFT 11
#define MT6351_PMIC_AUXADC_SWCTRL_EN_ADDR MT6351_AUXADC_CON13
#define MT6351_PMIC_AUXADC_SWCTRL_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_SWCTRL_EN_SHIFT 15
#define MT6351_PMIC_AUXADC_SOURCE_LBAT_SEL_ADDR MT6351_AUXADC_CON14
#define MT6351_PMIC_AUXADC_SOURCE_LBAT_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_SOURCE_LBAT_SEL_SHIFT 0
#define MT6351_PMIC_AUXADC_SOURCE_LBAT2_SEL_ADDR MT6351_AUXADC_CON14
#define MT6351_PMIC_AUXADC_SOURCE_LBAT2_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_SOURCE_LBAT2_SEL_SHIFT 1
#define MT6351_PMIC_AUXADC_DIG0_RSV2_ADDR MT6351_AUXADC_CON14
#define MT6351_PMIC_AUXADC_DIG0_RSV2_MASK 0x7
#define MT6351_PMIC_AUXADC_DIG0_RSV2_SHIFT 2
#define MT6351_PMIC_AUXADC_DIG1_RSV2_ADDR MT6351_AUXADC_CON14
#define MT6351_PMIC_AUXADC_DIG1_RSV2_MASK 0xF
#define MT6351_PMIC_AUXADC_DIG1_RSV2_SHIFT 5
#define MT6351_PMIC_AUXADC_DAC_EXTD_ADDR MT6351_AUXADC_CON14
#define MT6351_PMIC_AUXADC_DAC_EXTD_MASK 0xF
#define MT6351_PMIC_AUXADC_DAC_EXTD_SHIFT 11
#define MT6351_PMIC_AUXADC_DAC_EXTD_EN_ADDR MT6351_AUXADC_CON14
#define MT6351_PMIC_AUXADC_DAC_EXTD_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_DAC_EXTD_EN_SHIFT 15
#define MT6351_PMIC_AUXADC_PMU_THR_PDN_SW_ADDR MT6351_AUXADC_CON15
#define MT6351_PMIC_AUXADC_PMU_THR_PDN_SW_MASK 0x1
#define MT6351_PMIC_AUXADC_PMU_THR_PDN_SW_SHIFT 10
#define MT6351_PMIC_AUXADC_PMU_THR_PDN_SEL_ADDR MT6351_AUXADC_CON15
#define MT6351_PMIC_AUXADC_PMU_THR_PDN_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_PMU_THR_PDN_SEL_SHIFT 11
#define MT6351_PMIC_AUXADC_PMU_THR_PDN_STATUS_ADDR MT6351_AUXADC_CON15
#define MT6351_PMIC_AUXADC_PMU_THR_PDN_STATUS_MASK 0x1
#define MT6351_PMIC_AUXADC_PMU_THR_PDN_STATUS_SHIFT 12
#define MT6351_PMIC_AUXADC_DIG0_RSV1_ADDR MT6351_AUXADC_CON15
#define MT6351_PMIC_AUXADC_DIG0_RSV1_MASK 0x7
#define MT6351_PMIC_AUXADC_DIG0_RSV1_SHIFT 13
#define MT6351_PMIC_AUXADC_START_SHADE_NUM_ADDR MT6351_AUXADC_CON16
#define MT6351_PMIC_AUXADC_START_SHADE_NUM_MASK 0x3FF
#define MT6351_PMIC_AUXADC_START_SHADE_NUM_SHIFT 0
#define MT6351_PMIC_AUXADC_START_SHADE_EN_ADDR MT6351_AUXADC_CON16
#define MT6351_PMIC_AUXADC_START_SHADE_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_START_SHADE_EN_SHIFT 14
#define MT6351_PMIC_AUXADC_START_SHADE_SEL_ADDR MT6351_AUXADC_CON16
#define MT6351_PMIC_AUXADC_START_SHADE_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_START_SHADE_SEL_SHIFT 15
#define MT6351_PMIC_AUXADC_AUTORPT_PRD_ADDR MT6351_AUXADC_AUTORPT0
#define MT6351_PMIC_AUXADC_AUTORPT_PRD_MASK 0x3FF
#define MT6351_PMIC_AUXADC_AUTORPT_PRD_SHIFT 0
#define MT6351_PMIC_AUXADC_AUTORPT_EN_ADDR MT6351_AUXADC_AUTORPT0
#define MT6351_PMIC_AUXADC_AUTORPT_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_AUTORPT_EN_SHIFT 15
#define MT6351_PMIC_AUXADC_LBAT_DEBT_MAX_ADDR MT6351_AUXADC_LBAT0
#define MT6351_PMIC_AUXADC_LBAT_DEBT_MAX_MASK 0xFF
#define MT6351_PMIC_AUXADC_LBAT_DEBT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT_DEBT_MIN_ADDR MT6351_AUXADC_LBAT0
#define MT6351_PMIC_AUXADC_LBAT_DEBT_MIN_MASK 0xFF
#define MT6351_PMIC_AUXADC_LBAT_DEBT_MIN_SHIFT 8
#define MT6351_PMIC_AUXADC_LBAT_DET_PRD_15_0_ADDR MT6351_AUXADC_LBAT1
#define MT6351_PMIC_AUXADC_LBAT_DET_PRD_15_0_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_LBAT_DET_PRD_15_0_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT_DET_PRD_19_16_ADDR MT6351_AUXADC_LBAT2
#define MT6351_PMIC_AUXADC_LBAT_DET_PRD_19_16_MASK 0xF
#define MT6351_PMIC_AUXADC_LBAT_DET_PRD_19_16_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT_VOLT_MAX_ADDR MT6351_AUXADC_LBAT3
#define MT6351_PMIC_AUXADC_LBAT_VOLT_MAX_MASK 0xFFF
#define MT6351_PMIC_AUXADC_LBAT_VOLT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT_IRQ_EN_MAX_ADDR MT6351_AUXADC_LBAT3
#define MT6351_PMIC_AUXADC_LBAT_IRQ_EN_MAX_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT_IRQ_EN_MAX_SHIFT 12
#define MT6351_PMIC_AUXADC_LBAT_EN_MAX_ADDR MT6351_AUXADC_LBAT3
#define MT6351_PMIC_AUXADC_LBAT_EN_MAX_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT_EN_MAX_SHIFT 13
#define MT6351_PMIC_AUXADC_LBAT_MAX_IRQ_B_ADDR MT6351_AUXADC_LBAT3
#define MT6351_PMIC_AUXADC_LBAT_MAX_IRQ_B_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT_MAX_IRQ_B_SHIFT 15
#define MT6351_PMIC_AUXADC_LBAT_VOLT_MIN_ADDR MT6351_AUXADC_LBAT4
#define MT6351_PMIC_AUXADC_LBAT_VOLT_MIN_MASK 0xFFF
#define MT6351_PMIC_AUXADC_LBAT_VOLT_MIN_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT_IRQ_EN_MIN_ADDR MT6351_AUXADC_LBAT4
#define MT6351_PMIC_AUXADC_LBAT_IRQ_EN_MIN_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT_IRQ_EN_MIN_SHIFT 12
#define MT6351_PMIC_AUXADC_LBAT_EN_MIN_ADDR MT6351_AUXADC_LBAT4
#define MT6351_PMIC_AUXADC_LBAT_EN_MIN_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT_EN_MIN_SHIFT 13
#define MT6351_PMIC_AUXADC_LBAT_MIN_IRQ_B_ADDR MT6351_AUXADC_LBAT4
#define MT6351_PMIC_AUXADC_LBAT_MIN_IRQ_B_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT_MIN_IRQ_B_SHIFT 15
#define MT6351_PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MAX_ADDR MT6351_AUXADC_LBAT5
#define MT6351_PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MAX_MASK 0x1FF
#define MT6351_PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MIN_ADDR MT6351_AUXADC_LBAT6
#define MT6351_PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MIN_MASK 0x1FF
#define MT6351_PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MIN_SHIFT 0
#define MT6351_PMIC_AUXADC_ACCDET_AUTO_SPL_ADDR MT6351_AUXADC_ACCDET
#define MT6351_PMIC_AUXADC_ACCDET_AUTO_SPL_MASK 0x1
#define MT6351_PMIC_AUXADC_ACCDET_AUTO_SPL_SHIFT 0
#define MT6351_PMIC_AUXADC_ACCDET_AUTO_RQST_CLR_ADDR MT6351_AUXADC_ACCDET
#define MT6351_PMIC_AUXADC_ACCDET_AUTO_RQST_CLR_MASK 0x1
#define MT6351_PMIC_AUXADC_ACCDET_AUTO_RQST_CLR_SHIFT 1
#define MT6351_PMIC_AUXADC_ACCDET_DIG1_RSV0_ADDR MT6351_AUXADC_ACCDET
#define MT6351_PMIC_AUXADC_ACCDET_DIG1_RSV0_MASK 0x3F
#define MT6351_PMIC_AUXADC_ACCDET_DIG1_RSV0_SHIFT 2
#define MT6351_PMIC_AUXADC_ACCDET_DIG0_RSV0_ADDR MT6351_AUXADC_ACCDET
#define MT6351_PMIC_AUXADC_ACCDET_DIG0_RSV0_MASK 0xFF
#define MT6351_PMIC_AUXADC_ACCDET_DIG0_RSV0_SHIFT 8
#define MT6351_PMIC_AUXADC_THR_DEBT_MAX_ADDR MT6351_AUXADC_THR0
#define MT6351_PMIC_AUXADC_THR_DEBT_MAX_MASK 0xFF
#define MT6351_PMIC_AUXADC_THR_DEBT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_THR_DEBT_MIN_ADDR MT6351_AUXADC_THR0
#define MT6351_PMIC_AUXADC_THR_DEBT_MIN_MASK 0xFF
#define MT6351_PMIC_AUXADC_THR_DEBT_MIN_SHIFT 8
#define MT6351_PMIC_AUXADC_THR_DET_PRD_15_0_ADDR MT6351_AUXADC_THR1
#define MT6351_PMIC_AUXADC_THR_DET_PRD_15_0_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_THR_DET_PRD_15_0_SHIFT 0
#define MT6351_PMIC_AUXADC_THR_DET_PRD_19_16_ADDR MT6351_AUXADC_THR2
#define MT6351_PMIC_AUXADC_THR_DET_PRD_19_16_MASK 0xF
#define MT6351_PMIC_AUXADC_THR_DET_PRD_19_16_SHIFT 0
#define MT6351_PMIC_AUXADC_THR_VOLT_MAX_ADDR MT6351_AUXADC_THR3
#define MT6351_PMIC_AUXADC_THR_VOLT_MAX_MASK 0xFFF
#define MT6351_PMIC_AUXADC_THR_VOLT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_THR_IRQ_EN_MAX_ADDR MT6351_AUXADC_THR3
#define MT6351_PMIC_AUXADC_THR_IRQ_EN_MAX_MASK 0x1
#define MT6351_PMIC_AUXADC_THR_IRQ_EN_MAX_SHIFT 12
#define MT6351_PMIC_AUXADC_THR_EN_MAX_ADDR MT6351_AUXADC_THR3
#define MT6351_PMIC_AUXADC_THR_EN_MAX_MASK 0x1
#define MT6351_PMIC_AUXADC_THR_EN_MAX_SHIFT 13
#define MT6351_PMIC_AUXADC_THR_MAX_IRQ_B_ADDR MT6351_AUXADC_THR3
#define MT6351_PMIC_AUXADC_THR_MAX_IRQ_B_MASK 0x1
#define MT6351_PMIC_AUXADC_THR_MAX_IRQ_B_SHIFT 15
#define MT6351_PMIC_AUXADC_THR_VOLT_MIN_ADDR MT6351_AUXADC_THR4
#define MT6351_PMIC_AUXADC_THR_VOLT_MIN_MASK 0xFFF
#define MT6351_PMIC_AUXADC_THR_VOLT_MIN_SHIFT 0
#define MT6351_PMIC_AUXADC_THR_IRQ_EN_MIN_ADDR MT6351_AUXADC_THR4
#define MT6351_PMIC_AUXADC_THR_IRQ_EN_MIN_MASK 0x1
#define MT6351_PMIC_AUXADC_THR_IRQ_EN_MIN_SHIFT 12
#define MT6351_PMIC_AUXADC_THR_EN_MIN_ADDR MT6351_AUXADC_THR4
#define MT6351_PMIC_AUXADC_THR_EN_MIN_MASK 0x1
#define MT6351_PMIC_AUXADC_THR_EN_MIN_SHIFT 13
#define MT6351_PMIC_AUXADC_THR_MIN_IRQ_B_ADDR MT6351_AUXADC_THR4
#define MT6351_PMIC_AUXADC_THR_MIN_IRQ_B_MASK 0x1
#define MT6351_PMIC_AUXADC_THR_MIN_IRQ_B_SHIFT 15
#define MT6351_PMIC_AUXADC_THR_DEBOUNCE_COUNT_MAX_ADDR MT6351_AUXADC_THR5
#define MT6351_PMIC_AUXADC_THR_DEBOUNCE_COUNT_MAX_MASK 0x1FF
#define MT6351_PMIC_AUXADC_THR_DEBOUNCE_COUNT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_THR_DEBOUNCE_COUNT_MIN_ADDR MT6351_AUXADC_THR6
#define MT6351_PMIC_AUXADC_THR_DEBOUNCE_COUNT_MIN_MASK 0x1FF
#define MT6351_PMIC_AUXADC_THR_DEBOUNCE_COUNT_MIN_SHIFT 0
#define MT6351_PMIC_EFUSE_GAIN_CH4_TRIM_ADDR MT6351_AUXADC_EFUSE0
#define MT6351_PMIC_EFUSE_GAIN_CH4_TRIM_MASK 0xFFF
#define MT6351_PMIC_EFUSE_GAIN_CH4_TRIM_SHIFT 0
#define MT6351_PMIC_EFUSE_OFFSET_CH4_TRIM_ADDR MT6351_AUXADC_EFUSE1
#define MT6351_PMIC_EFUSE_OFFSET_CH4_TRIM_MASK 0x7FF
#define MT6351_PMIC_EFUSE_OFFSET_CH4_TRIM_SHIFT 0
#define MT6351_PMIC_EFUSE_GAIN_CH0_TRIM_ADDR MT6351_AUXADC_EFUSE2
#define MT6351_PMIC_EFUSE_GAIN_CH0_TRIM_MASK 0xFFF
#define MT6351_PMIC_EFUSE_GAIN_CH0_TRIM_SHIFT 0
#define MT6351_PMIC_EFUSE_OFFSET_CH0_TRIM_ADDR MT6351_AUXADC_EFUSE3
#define MT6351_PMIC_EFUSE_OFFSET_CH0_TRIM_MASK 0x7FF
#define MT6351_PMIC_EFUSE_OFFSET_CH0_TRIM_SHIFT 0
#define MT6351_PMIC_EFUSE_GAIN_CH7_TRIM_ADDR MT6351_AUXADC_EFUSE4
#define MT6351_PMIC_EFUSE_GAIN_CH7_TRIM_MASK 0xFFF
#define MT6351_PMIC_EFUSE_GAIN_CH7_TRIM_SHIFT 0
#define MT6351_PMIC_EFUSE_OFFSET_CH7_TRIM_ADDR MT6351_AUXADC_EFUSE5
#define MT6351_PMIC_EFUSE_OFFSET_CH7_TRIM_MASK 0x7FF
#define MT6351_PMIC_EFUSE_OFFSET_CH7_TRIM_SHIFT 0
#define MT6351_PMIC_AUXADC_FGADC_START_SW_ADDR MT6351_AUXADC_DBG0
#define MT6351_PMIC_AUXADC_FGADC_START_SW_MASK 0x1
#define MT6351_PMIC_AUXADC_FGADC_START_SW_SHIFT 0
#define MT6351_PMIC_AUXADC_FGADC_START_SEL_ADDR MT6351_AUXADC_DBG0
#define MT6351_PMIC_AUXADC_FGADC_START_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_FGADC_START_SEL_SHIFT 1
#define MT6351_PMIC_AUXADC_FGADC_R_SW_ADDR MT6351_AUXADC_DBG0
#define MT6351_PMIC_AUXADC_FGADC_R_SW_MASK 0x1
#define MT6351_PMIC_AUXADC_FGADC_R_SW_SHIFT 2
#define MT6351_PMIC_AUXADC_FGADC_R_SEL_ADDR MT6351_AUXADC_DBG0
#define MT6351_PMIC_AUXADC_FGADC_R_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_FGADC_R_SEL_SHIFT 3
#define MT6351_PMIC_AUXADC_DBG_DIG0_RSV2_ADDR MT6351_AUXADC_DBG0
#define MT6351_PMIC_AUXADC_DBG_DIG0_RSV2_MASK 0x3F
#define MT6351_PMIC_AUXADC_DBG_DIG0_RSV2_SHIFT 4
#define MT6351_PMIC_AUXADC_DBG_DIG1_RSV2_ADDR MT6351_AUXADC_DBG0
#define MT6351_PMIC_AUXADC_DBG_DIG1_RSV2_MASK 0x3F
#define MT6351_PMIC_AUXADC_DBG_DIG1_RSV2_SHIFT 10
#define MT6351_PMIC_AUXADC_IMPEDANCE_CNT_ADDR MT6351_AUXADC_IMP0
#define MT6351_PMIC_AUXADC_IMPEDANCE_CNT_MASK 0x3F
#define MT6351_PMIC_AUXADC_IMPEDANCE_CNT_SHIFT 0
#define MT6351_PMIC_AUXADC_IMPEDANCE_CHSEL_ADDR MT6351_AUXADC_IMP0
#define MT6351_PMIC_AUXADC_IMPEDANCE_CHSEL_MASK 0x1
#define MT6351_PMIC_AUXADC_IMPEDANCE_CHSEL_SHIFT 6
#define MT6351_PMIC_AUXADC_IMPEDANCE_IRQ_CLR_ADDR MT6351_AUXADC_IMP0
#define MT6351_PMIC_AUXADC_IMPEDANCE_IRQ_CLR_MASK 0x1
#define MT6351_PMIC_AUXADC_IMPEDANCE_IRQ_CLR_SHIFT 7
#define MT6351_PMIC_AUXADC_IMPEDANCE_IRQ_STATUS_ADDR MT6351_AUXADC_IMP0
#define MT6351_PMIC_AUXADC_IMPEDANCE_IRQ_STATUS_MASK 0x1
#define MT6351_PMIC_AUXADC_IMPEDANCE_IRQ_STATUS_SHIFT 8
#define MT6351_PMIC_AUXADC_CLR_IMP_CNT_STOP_ADDR MT6351_AUXADC_IMP0
#define MT6351_PMIC_AUXADC_CLR_IMP_CNT_STOP_MASK 0x1
#define MT6351_PMIC_AUXADC_CLR_IMP_CNT_STOP_SHIFT 14
#define MT6351_PMIC_AUXADC_IMPEDANCE_MODE_ADDR MT6351_AUXADC_IMP0
#define MT6351_PMIC_AUXADC_IMPEDANCE_MODE_MASK 0x1
#define MT6351_PMIC_AUXADC_IMPEDANCE_MODE_SHIFT 15
#define MT6351_PMIC_AUXADC_IMP_AUTORPT_PRD_ADDR MT6351_AUXADC_IMP1
#define MT6351_PMIC_AUXADC_IMP_AUTORPT_PRD_MASK 0x3FF
#define MT6351_PMIC_AUXADC_IMP_AUTORPT_PRD_SHIFT 0
#define MT6351_PMIC_AUXADC_IMP_AUTORPT_EN_ADDR MT6351_AUXADC_IMP1
#define MT6351_PMIC_AUXADC_IMP_AUTORPT_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_IMP_AUTORPT_EN_SHIFT 15
#define MT6351_PMIC_AUXADC_VISMPS0_DEBT_MAX_ADDR MT6351_AUXADC_VISMPS0_1
#define MT6351_PMIC_AUXADC_VISMPS0_DEBT_MAX_MASK 0xFF
#define MT6351_PMIC_AUXADC_VISMPS0_DEBT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_VISMPS0_DEBT_MIN_ADDR MT6351_AUXADC_VISMPS0_1
#define MT6351_PMIC_AUXADC_VISMPS0_DEBT_MIN_MASK 0xFF
#define MT6351_PMIC_AUXADC_VISMPS0_DEBT_MIN_SHIFT 8
#define MT6351_PMIC_AUXADC_VISMPS0_DET_PRD_15_0_ADDR MT6351_AUXADC_VISMPS0_2
#define MT6351_PMIC_AUXADC_VISMPS0_DET_PRD_15_0_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_VISMPS0_DET_PRD_15_0_SHIFT 0
#define MT6351_PMIC_AUXADC_VISMPS0_DET_PRD_19_16_ADDR MT6351_AUXADC_VISMPS0_3
#define MT6351_PMIC_AUXADC_VISMPS0_DET_PRD_19_16_MASK 0xF
#define MT6351_PMIC_AUXADC_VISMPS0_DET_PRD_19_16_SHIFT 0
#define MT6351_PMIC_AUXADC_VISMPS0_VOLT_MAX_ADDR MT6351_AUXADC_VISMPS0_4
#define MT6351_PMIC_AUXADC_VISMPS0_VOLT_MAX_MASK 0xFFF
#define MT6351_PMIC_AUXADC_VISMPS0_VOLT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_VISMPS0_IRQ_EN_MAX_ADDR MT6351_AUXADC_VISMPS0_4
#define MT6351_PMIC_AUXADC_VISMPS0_IRQ_EN_MAX_MASK 0x1
#define MT6351_PMIC_AUXADC_VISMPS0_IRQ_EN_MAX_SHIFT 12
#define MT6351_PMIC_AUXADC_VISMPS0_EN_MAX_ADDR MT6351_AUXADC_VISMPS0_4
#define MT6351_PMIC_AUXADC_VISMPS0_EN_MAX_MASK 0x1
#define MT6351_PMIC_AUXADC_VISMPS0_EN_MAX_SHIFT 13
#define MT6351_PMIC_AUXADC_VISMPS0_MAX_IRQ_B_ADDR MT6351_AUXADC_VISMPS0_4
#define MT6351_PMIC_AUXADC_VISMPS0_MAX_IRQ_B_MASK 0x1
#define MT6351_PMIC_AUXADC_VISMPS0_MAX_IRQ_B_SHIFT 15
#define MT6351_PMIC_AUXADC_VISMPS0_VOLT_MIN_ADDR MT6351_AUXADC_VISMPS0_5
#define MT6351_PMIC_AUXADC_VISMPS0_VOLT_MIN_MASK 0xFFF
#define MT6351_PMIC_AUXADC_VISMPS0_VOLT_MIN_SHIFT 0
#define MT6351_PMIC_AUXADC_VISMPS0_IRQ_EN_MIN_ADDR MT6351_AUXADC_VISMPS0_5
#define MT6351_PMIC_AUXADC_VISMPS0_IRQ_EN_MIN_MASK 0x1
#define MT6351_PMIC_AUXADC_VISMPS0_IRQ_EN_MIN_SHIFT 12
#define MT6351_PMIC_AUXADC_VISMPS0_EN_MIN_ADDR MT6351_AUXADC_VISMPS0_5
#define MT6351_PMIC_AUXADC_VISMPS0_EN_MIN_MASK 0x1
#define MT6351_PMIC_AUXADC_VISMPS0_EN_MIN_SHIFT 13
#define MT6351_PMIC_AUXADC_VISMPS0_MIN_IRQ_B_ADDR MT6351_AUXADC_VISMPS0_5
#define MT6351_PMIC_AUXADC_VISMPS0_MIN_IRQ_B_MASK 0x1
#define MT6351_PMIC_AUXADC_VISMPS0_MIN_IRQ_B_SHIFT 15
#define MT6351_PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MAX_ADDR                     \
	MT6351_AUXADC_VISMPS0_6
#define MT6351_PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MAX_MASK 0x1FF
#define MT6351_PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MIN_ADDR                     \
	MT6351_AUXADC_VISMPS0_7
#define MT6351_PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MIN_MASK 0x1FF
#define MT6351_PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MIN_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT2_DEBT_MAX_ADDR MT6351_AUXADC_LBAT2_1
#define MT6351_PMIC_AUXADC_LBAT2_DEBT_MAX_MASK 0xFF
#define MT6351_PMIC_AUXADC_LBAT2_DEBT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT2_DEBT_MIN_ADDR MT6351_AUXADC_LBAT2_1
#define MT6351_PMIC_AUXADC_LBAT2_DEBT_MIN_MASK 0xFF
#define MT6351_PMIC_AUXADC_LBAT2_DEBT_MIN_SHIFT 8
#define MT6351_PMIC_AUXADC_LBAT2_DET_PRD_15_0_ADDR MT6351_AUXADC_LBAT2_2
#define MT6351_PMIC_AUXADC_LBAT2_DET_PRD_15_0_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_LBAT2_DET_PRD_15_0_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT2_DET_PRD_19_16_ADDR MT6351_AUXADC_LBAT2_3
#define MT6351_PMIC_AUXADC_LBAT2_DET_PRD_19_16_MASK 0xF
#define MT6351_PMIC_AUXADC_LBAT2_DET_PRD_19_16_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT2_VOLT_MAX_ADDR MT6351_AUXADC_LBAT2_4
#define MT6351_PMIC_AUXADC_LBAT2_VOLT_MAX_MASK 0xFFF
#define MT6351_PMIC_AUXADC_LBAT2_VOLT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT2_IRQ_EN_MAX_ADDR MT6351_AUXADC_LBAT2_4
#define MT6351_PMIC_AUXADC_LBAT2_IRQ_EN_MAX_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT2_IRQ_EN_MAX_SHIFT 12
#define MT6351_PMIC_AUXADC_LBAT2_EN_MAX_ADDR MT6351_AUXADC_LBAT2_4
#define MT6351_PMIC_AUXADC_LBAT2_EN_MAX_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT2_EN_MAX_SHIFT 13
#define MT6351_PMIC_AUXADC_LBAT2_MAX_IRQ_B_ADDR MT6351_AUXADC_LBAT2_4
#define MT6351_PMIC_AUXADC_LBAT2_MAX_IRQ_B_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT2_MAX_IRQ_B_SHIFT 15
#define MT6351_PMIC_AUXADC_LBAT2_VOLT_MIN_ADDR MT6351_AUXADC_LBAT2_5
#define MT6351_PMIC_AUXADC_LBAT2_VOLT_MIN_MASK 0xFFF
#define MT6351_PMIC_AUXADC_LBAT2_VOLT_MIN_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT2_IRQ_EN_MIN_ADDR MT6351_AUXADC_LBAT2_5
#define MT6351_PMIC_AUXADC_LBAT2_IRQ_EN_MIN_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT2_IRQ_EN_MIN_SHIFT 12
#define MT6351_PMIC_AUXADC_LBAT2_EN_MIN_ADDR MT6351_AUXADC_LBAT2_5
#define MT6351_PMIC_AUXADC_LBAT2_EN_MIN_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT2_EN_MIN_SHIFT 13
#define MT6351_PMIC_AUXADC_LBAT2_MIN_IRQ_B_ADDR MT6351_AUXADC_LBAT2_5
#define MT6351_PMIC_AUXADC_LBAT2_MIN_IRQ_B_MASK 0x1
#define MT6351_PMIC_AUXADC_LBAT2_MIN_IRQ_B_SHIFT 15
#define MT6351_PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MAX_ADDR MT6351_AUXADC_LBAT2_6
#define MT6351_PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MAX_MASK 0x1FF
#define MT6351_PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MAX_SHIFT 0
#define MT6351_PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MIN_ADDR MT6351_AUXADC_LBAT2_7
#define MT6351_PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MIN_MASK 0x1FF
#define MT6351_PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MIN_SHIFT 0
#define MT6351_PMIC_AUXADC_MDBG_DET_PRD_ADDR MT6351_AUXADC_MDBG_0
#define MT6351_PMIC_AUXADC_MDBG_DET_PRD_MASK 0x3FF
#define MT6351_PMIC_AUXADC_MDBG_DET_PRD_SHIFT 0
#define MT6351_PMIC_AUXADC_MDBG_DET_EN_ADDR MT6351_AUXADC_MDBG_0
#define MT6351_PMIC_AUXADC_MDBG_DET_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_MDBG_DET_EN_SHIFT 15
#define MT6351_PMIC_AUXADC_MDBG_R_PTR_ADDR MT6351_AUXADC_MDBG_1
#define MT6351_PMIC_AUXADC_MDBG_R_PTR_MASK 0x3F
#define MT6351_PMIC_AUXADC_MDBG_R_PTR_SHIFT 0
#define MT6351_PMIC_AUXADC_MDBG_W_PTR_ADDR MT6351_AUXADC_MDBG_1
#define MT6351_PMIC_AUXADC_MDBG_W_PTR_MASK 0x3F
#define MT6351_PMIC_AUXADC_MDBG_W_PTR_SHIFT 8
#define MT6351_PMIC_AUXADC_MDBG_BUF_LENGTH_ADDR MT6351_AUXADC_MDBG_2
#define MT6351_PMIC_AUXADC_MDBG_BUF_LENGTH_MASK 0x3F
#define MT6351_PMIC_AUXADC_MDBG_BUF_LENGTH_SHIFT 0
#define MT6351_PMIC_AUXADC_MDRT_DET_PRD_ADDR MT6351_AUXADC_MDRT_0
#define MT6351_PMIC_AUXADC_MDRT_DET_PRD_MASK 0x3FF
#define MT6351_PMIC_AUXADC_MDRT_DET_PRD_SHIFT 0
#define MT6351_PMIC_AUXADC_MDRT_DET_EN_ADDR MT6351_AUXADC_MDRT_0
#define MT6351_PMIC_AUXADC_MDRT_DET_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_MDRT_DET_EN_SHIFT 15
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_CNT_ADDR MT6351_AUXADC_MDRT_1
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_CNT_MASK 0xFFF
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_CNT_SHIFT 0
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_CLR_ADDR MT6351_AUXADC_MDRT_1
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_CLR_MASK 0x1
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_CLR_SHIFT 15
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_ADDR MT6351_AUXADC_MDRT_2
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_MASK 0x1
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_SHIFT 0
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_SEL_ADDR MT6351_AUXADC_MDRT_2
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_SEL_SHIFT 1
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_EN_ADDR MT6351_AUXADC_MDRT_2
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_MDRT_DET_WKUP_EN_SHIFT 2
#define MT6351_PMIC_AUXADC_MDRT_DET_SRCLKEN_IND_ADDR MT6351_AUXADC_MDRT_2
#define MT6351_PMIC_AUXADC_MDRT_DET_SRCLKEN_IND_MASK 0x1
#define MT6351_PMIC_AUXADC_MDRT_DET_SRCLKEN_IND_SHIFT 3
#define MT6351_PMIC_AUXADC_JEITA_IRQ_EN_ADDR MT6351_AUXADC_JEITA_0
#define MT6351_PMIC_AUXADC_JEITA_IRQ_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_JEITA_IRQ_EN_SHIFT 0
#define MT6351_PMIC_AUXADC_JEITA_EN_ADDR MT6351_AUXADC_JEITA_0
#define MT6351_PMIC_AUXADC_JEITA_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_JEITA_EN_SHIFT 1
#define MT6351_PMIC_AUXADC_JEITA_DET_PRD_ADDR MT6351_AUXADC_JEITA_0
#define MT6351_PMIC_AUXADC_JEITA_DET_PRD_MASK 0xF
#define MT6351_PMIC_AUXADC_JEITA_DET_PRD_SHIFT 2
#define MT6351_PMIC_AUXADC_JEITA_DEBT_ADDR MT6351_AUXADC_JEITA_0
#define MT6351_PMIC_AUXADC_JEITA_DEBT_MASK 0xF
#define MT6351_PMIC_AUXADC_JEITA_DEBT_SHIFT 6
#define MT6351_PMIC_AUXADC_JEITA_MIPI_DIS_ADDR MT6351_AUXADC_JEITA_0
#define MT6351_PMIC_AUXADC_JEITA_MIPI_DIS_MASK 0x1
#define MT6351_PMIC_AUXADC_JEITA_MIPI_DIS_SHIFT 10
#define MT6351_PMIC_AUXADC_JEITA_VOLT_HOT_ADDR MT6351_AUXADC_JEITA_1
#define MT6351_PMIC_AUXADC_JEITA_VOLT_HOT_MASK 0xFFF
#define MT6351_PMIC_AUXADC_JEITA_VOLT_HOT_SHIFT 0
#define MT6351_PMIC_AUXADC_JEITA_HOT_IRQ_ADDR MT6351_AUXADC_JEITA_1
#define MT6351_PMIC_AUXADC_JEITA_HOT_IRQ_MASK 0x1
#define MT6351_PMIC_AUXADC_JEITA_HOT_IRQ_SHIFT 15
#define MT6351_PMIC_AUXADC_JEITA_VOLT_WARM_ADDR MT6351_AUXADC_JEITA_2
#define MT6351_PMIC_AUXADC_JEITA_VOLT_WARM_MASK 0xFFF
#define MT6351_PMIC_AUXADC_JEITA_VOLT_WARM_SHIFT 0
#define MT6351_PMIC_AUXADC_JEITA_WARM_IRQ_ADDR MT6351_AUXADC_JEITA_2
#define MT6351_PMIC_AUXADC_JEITA_WARM_IRQ_MASK 0x1
#define MT6351_PMIC_AUXADC_JEITA_WARM_IRQ_SHIFT 15
#define MT6351_PMIC_AUXADC_JEITA_VOLT_COOL_ADDR MT6351_AUXADC_JEITA_3
#define MT6351_PMIC_AUXADC_JEITA_VOLT_COOL_MASK 0xFFF
#define MT6351_PMIC_AUXADC_JEITA_VOLT_COOL_SHIFT 0
#define MT6351_PMIC_AUXADC_JEITA_COOL_IRQ_ADDR MT6351_AUXADC_JEITA_3
#define MT6351_PMIC_AUXADC_JEITA_COOL_IRQ_MASK 0x1
#define MT6351_PMIC_AUXADC_JEITA_COOL_IRQ_SHIFT 15
#define MT6351_PMIC_AUXADC_JEITA_VOLT_COLD_ADDR MT6351_AUXADC_JEITA_4
#define MT6351_PMIC_AUXADC_JEITA_VOLT_COLD_MASK 0xFFF
#define MT6351_PMIC_AUXADC_JEITA_VOLT_COLD_SHIFT 0
#define MT6351_PMIC_AUXADC_JEITA_COLD_IRQ_ADDR MT6351_AUXADC_JEITA_4
#define MT6351_PMIC_AUXADC_JEITA_COLD_IRQ_MASK 0x1
#define MT6351_PMIC_AUXADC_JEITA_COLD_IRQ_SHIFT 15
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COLD_ADDR MT6351_AUXADC_JEITA_5
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COLD_MASK 0xF
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COLD_SHIFT 0
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COOL_ADDR MT6351_AUXADC_JEITA_5
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COOL_MASK 0xF
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COOL_SHIFT 4
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_WARM_ADDR MT6351_AUXADC_JEITA_5
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_WARM_MASK 0xF
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_WARM_SHIFT 8
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_HOT_ADDR MT6351_AUXADC_JEITA_5
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_HOT_MASK 0xF
#define MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_HOT_SHIFT 12
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_PRD_ADDR MT6351_AUXADC_DCXO_MDRT_0
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_PRD_MASK 0x3FF
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_PRD_SHIFT 0
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_EN_ADDR MT6351_AUXADC_DCXO_MDRT_0
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_EN_SHIFT 15
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT_ADDR                   \
	MT6351_AUXADC_DCXO_MDRT_1
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT_MASK 0xFFF
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT_SHIFT 0
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR_ADDR                   \
	MT6351_AUXADC_DCXO_MDRT_1
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR_MASK 0x1
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR_SHIFT 15
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_EN_ADDR MT6351_AUXADC_DCXO_MDRT_2
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_EN_SHIFT 0
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL_ADDR                   \
	MT6351_AUXADC_DCXO_MDRT_2
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL_SHIFT 1
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_ADDR                       \
	MT6351_AUXADC_DCXO_MDRT_2
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_MASK 0x1
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SHIFT 2
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_SRCLKEN_IND_ADDR                      \
	MT6351_AUXADC_DCXO_MDRT_2
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_SRCLKEN_IND_MASK 0x1
#define MT6351_PMIC_AUXADC_DCXO_MDRT_DET_SRCLKEN_IND_SHIFT 3
#define MT6351_PMIC_AUXADC_DCXO_CH4_MUX_AP_SEL_ADDR MT6351_AUXADC_DCXO_MDRT_2
#define MT6351_PMIC_AUXADC_DCXO_CH4_MUX_AP_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_DCXO_CH4_MUX_AP_SEL_SHIFT 4
#define MT6351_PMIC_AUXADC_NAG_EN_ADDR MT6351_AUXADC_NAG_0
#define MT6351_PMIC_AUXADC_NAG_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_NAG_EN_SHIFT 0
#define MT6351_PMIC_AUXADC_NAG_CLR_ADDR MT6351_AUXADC_NAG_0
#define MT6351_PMIC_AUXADC_NAG_CLR_MASK 0x1
#define MT6351_PMIC_AUXADC_NAG_CLR_SHIFT 1
#define MT6351_PMIC_AUXADC_NAG_VBAT1_SEL_ADDR MT6351_AUXADC_NAG_0
#define MT6351_PMIC_AUXADC_NAG_VBAT1_SEL_MASK 0x1
#define MT6351_PMIC_AUXADC_NAG_VBAT1_SEL_SHIFT 2
#define MT6351_PMIC_AUXADC_NAG_PRD_ADDR MT6351_AUXADC_NAG_0
#define MT6351_PMIC_AUXADC_NAG_PRD_MASK 0x7F
#define MT6351_PMIC_AUXADC_NAG_PRD_SHIFT 3
#define MT6351_PMIC_AUXADC_NAG_IRQ_EN_ADDR MT6351_AUXADC_NAG_0
#define MT6351_PMIC_AUXADC_NAG_IRQ_EN_MASK 0x1
#define MT6351_PMIC_AUXADC_NAG_IRQ_EN_SHIFT 10
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_IRQ_ADDR MT6351_AUXADC_NAG_0
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_IRQ_MASK 0x1
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_IRQ_SHIFT 15
#define MT6351_PMIC_AUXADC_NAG_ZCV_ADDR MT6351_AUXADC_NAG_1
#define MT6351_PMIC_AUXADC_NAG_ZCV_MASK 0x7FFF
#define MT6351_PMIC_AUXADC_NAG_ZCV_SHIFT 0
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_TH_15_0_ADDR MT6351_AUXADC_NAG_2
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_TH_15_0_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_TH_15_0_SHIFT 0
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_TH_26_16_ADDR MT6351_AUXADC_NAG_3
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_TH_26_16_MASK 0x7FF
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_TH_26_16_SHIFT 0
#define MT6351_PMIC_AUXADC_NAG_CNT_15_0_ADDR MT6351_AUXADC_NAG_4
#define MT6351_PMIC_AUXADC_NAG_CNT_15_0_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_NAG_CNT_15_0_SHIFT 0
#define MT6351_PMIC_AUXADC_NAG_CNT_25_16_ADDR MT6351_AUXADC_NAG_5
#define MT6351_PMIC_AUXADC_NAG_CNT_25_16_MASK 0x3FF
#define MT6351_PMIC_AUXADC_NAG_CNT_25_16_SHIFT 0
#define MT6351_PMIC_AUXADC_NAG_DLTV_ADDR MT6351_AUXADC_NAG_6
#define MT6351_PMIC_AUXADC_NAG_DLTV_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_NAG_DLTV_SHIFT 0
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_15_0_ADDR MT6351_AUXADC_NAG_7
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_15_0_MASK 0xFFFF
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_15_0_SHIFT 0
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_26_16_ADDR MT6351_AUXADC_NAG_8
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_26_16_MASK 0x7FF
#define MT6351_PMIC_AUXADC_NAG_C_DLTV_26_16_SHIFT 0
#define MT6351_PMIC_AD_AUDACCDETCMPOC_ADDR MT6351_ACCDET_CON0
#define MT6351_PMIC_AD_AUDACCDETCMPOC_MASK 0x1
#define MT6351_PMIC_AD_AUDACCDETCMPOC_SHIFT 0
#define MT6351_PMIC_RG_AUDACCDETANASWCTRLENB_ADDR MT6351_ACCDET_CON0
#define MT6351_PMIC_RG_AUDACCDETANASWCTRLENB_MASK 0x1
#define MT6351_PMIC_RG_AUDACCDETANASWCTRLENB_SHIFT 2
#define MT6351_PMIC_RG_ACCDETSEL_ADDR MT6351_ACCDET_CON0
#define MT6351_PMIC_RG_ACCDETSEL_MASK 0x1
#define MT6351_PMIC_RG_ACCDETSEL_SHIFT 3
#define MT6351_PMIC_RG_AUDACCDETSWCTRL_ADDR MT6351_ACCDET_CON0
#define MT6351_PMIC_RG_AUDACCDETSWCTRL_MASK 0x7
#define MT6351_PMIC_RG_AUDACCDETSWCTRL_SHIFT 4
#define MT6351_PMIC_RG_AUDACCDETTVDET_ADDR MT6351_ACCDET_CON0
#define MT6351_PMIC_RG_AUDACCDETTVDET_MASK 0x1
#define MT6351_PMIC_RG_AUDACCDETTVDET_SHIFT 8
#define MT6351_PMIC_AUDACCDETAUXADCSWCTRL_ADDR MT6351_ACCDET_CON0
#define MT6351_PMIC_AUDACCDETAUXADCSWCTRL_MASK 0x1
#define MT6351_PMIC_AUDACCDETAUXADCSWCTRL_SHIFT 10
#define MT6351_PMIC_AUDACCDETAUXADCSWCTRL_SEL_ADDR MT6351_ACCDET_CON0
#define MT6351_PMIC_AUDACCDETAUXADCSWCTRL_SEL_MASK 0x1
#define MT6351_PMIC_AUDACCDETAUXADCSWCTRL_SEL_SHIFT 11
#define MT6351_PMIC_RG_AUDACCDETRSV_ADDR MT6351_ACCDET_CON0
#define MT6351_PMIC_RG_AUDACCDETRSV_MASK 0x3
#define MT6351_PMIC_RG_AUDACCDETRSV_SHIFT 13
#define MT6351_PMIC_ACCDET_EN_ADDR MT6351_ACCDET_CON1
#define MT6351_PMIC_ACCDET_EN_MASK 0x1
#define MT6351_PMIC_ACCDET_EN_SHIFT 0
#define MT6351_PMIC_ACCDET_SEQ_INIT_ADDR MT6351_ACCDET_CON1
#define MT6351_PMIC_ACCDET_SEQ_INIT_MASK 0x1
#define MT6351_PMIC_ACCDET_SEQ_INIT_SHIFT 1
#define MT6351_PMIC_ACCDET_EINTDET_EN_ADDR MT6351_ACCDET_CON1
#define MT6351_PMIC_ACCDET_EINTDET_EN_MASK 0x1
#define MT6351_PMIC_ACCDET_EINTDET_EN_SHIFT 2
#define MT6351_PMIC_ACCDET_EINT_SEQ_INIT_ADDR MT6351_ACCDET_CON1
#define MT6351_PMIC_ACCDET_EINT_SEQ_INIT_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_SEQ_INIT_SHIFT 3
#define MT6351_PMIC_ACCDET_NEGVDET_EN_ADDR MT6351_ACCDET_CON1
#define MT6351_PMIC_ACCDET_NEGVDET_EN_MASK 0x1
#define MT6351_PMIC_ACCDET_NEGVDET_EN_SHIFT 4
#define MT6351_PMIC_ACCDET_NEGVDET_EN_CTRL_ADDR MT6351_ACCDET_CON1
#define MT6351_PMIC_ACCDET_NEGVDET_EN_CTRL_MASK 0x1
#define MT6351_PMIC_ACCDET_NEGVDET_EN_CTRL_SHIFT 5
#define MT6351_PMIC_ACCDET_ANASWCTRL_SEL_ADDR MT6351_ACCDET_CON1
#define MT6351_PMIC_ACCDET_ANASWCTRL_SEL_MASK 0x1
#define MT6351_PMIC_ACCDET_ANASWCTRL_SEL_SHIFT 6
#define MT6351_PMIC_ACCDET_CMP_PWM_EN_ADDR MT6351_ACCDET_CON2
#define MT6351_PMIC_ACCDET_CMP_PWM_EN_MASK 0x1
#define MT6351_PMIC_ACCDET_CMP_PWM_EN_SHIFT 0
#define MT6351_PMIC_ACCDET_VTH_PWM_EN_ADDR MT6351_ACCDET_CON2
#define MT6351_PMIC_ACCDET_VTH_PWM_EN_MASK 0x1
#define MT6351_PMIC_ACCDET_VTH_PWM_EN_SHIFT 1
#define MT6351_PMIC_ACCDET_MBIAS_PWM_EN_ADDR MT6351_ACCDET_CON2
#define MT6351_PMIC_ACCDET_MBIAS_PWM_EN_MASK 0x1
#define MT6351_PMIC_ACCDET_MBIAS_PWM_EN_SHIFT 2
#define MT6351_PMIC_ACCDET_EINT_PWM_EN_ADDR MT6351_ACCDET_CON2
#define MT6351_PMIC_ACCDET_EINT_PWM_EN_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_PWM_EN_SHIFT 3
#define MT6351_PMIC_ACCDET_CMP_PWM_IDLE_ADDR MT6351_ACCDET_CON2
#define MT6351_PMIC_ACCDET_CMP_PWM_IDLE_MASK 0x1
#define MT6351_PMIC_ACCDET_CMP_PWM_IDLE_SHIFT 4
#define MT6351_PMIC_ACCDET_VTH_PWM_IDLE_ADDR MT6351_ACCDET_CON2
#define MT6351_PMIC_ACCDET_VTH_PWM_IDLE_MASK 0x1
#define MT6351_PMIC_ACCDET_VTH_PWM_IDLE_SHIFT 5
#define MT6351_PMIC_ACCDET_MBIAS_PWM_IDLE_ADDR MT6351_ACCDET_CON2
#define MT6351_PMIC_ACCDET_MBIAS_PWM_IDLE_MASK 0x1
#define MT6351_PMIC_ACCDET_MBIAS_PWM_IDLE_SHIFT 6
#define MT6351_PMIC_ACCDET_EINT_PWM_IDLE_ADDR MT6351_ACCDET_CON2
#define MT6351_PMIC_ACCDET_EINT_PWM_IDLE_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_PWM_IDLE_SHIFT 7
#define MT6351_PMIC_ACCDET_PWM_WIDTH_ADDR MT6351_ACCDET_CON3
#define MT6351_PMIC_ACCDET_PWM_WIDTH_MASK 0xFFFF
#define MT6351_PMIC_ACCDET_PWM_WIDTH_SHIFT 0
#define MT6351_PMIC_ACCDET_PWM_THRESH_ADDR MT6351_ACCDET_CON4
#define MT6351_PMIC_ACCDET_PWM_THRESH_MASK 0xFFFF
#define MT6351_PMIC_ACCDET_PWM_THRESH_SHIFT 0
#define MT6351_PMIC_ACCDET_RISE_DELAY_ADDR MT6351_ACCDET_CON5
#define MT6351_PMIC_ACCDET_RISE_DELAY_MASK 0x7FFF
#define MT6351_PMIC_ACCDET_RISE_DELAY_SHIFT 0
#define MT6351_PMIC_ACCDET_FALL_DELAY_ADDR MT6351_ACCDET_CON5
#define MT6351_PMIC_ACCDET_FALL_DELAY_MASK 0x1
#define MT6351_PMIC_ACCDET_FALL_DELAY_SHIFT 15
#define MT6351_PMIC_ACCDET_DEBOUNCE0_ADDR MT6351_ACCDET_CON6
#define MT6351_PMIC_ACCDET_DEBOUNCE0_MASK 0xFFFF
#define MT6351_PMIC_ACCDET_DEBOUNCE0_SHIFT 0
#define MT6351_PMIC_ACCDET_DEBOUNCE1_ADDR MT6351_ACCDET_CON7
#define MT6351_PMIC_ACCDET_DEBOUNCE1_MASK 0xFFFF
#define MT6351_PMIC_ACCDET_DEBOUNCE1_SHIFT 0
#define MT6351_PMIC_ACCDET_DEBOUNCE2_ADDR MT6351_ACCDET_CON8
#define MT6351_PMIC_ACCDET_DEBOUNCE2_MASK 0xFFFF
#define MT6351_PMIC_ACCDET_DEBOUNCE2_SHIFT 0
#define MT6351_PMIC_ACCDET_DEBOUNCE3_ADDR MT6351_ACCDET_CON9
#define MT6351_PMIC_ACCDET_DEBOUNCE3_MASK 0xFFFF
#define MT6351_PMIC_ACCDET_DEBOUNCE3_SHIFT 0
#define MT6351_PMIC_ACCDET_DEBOUNCE4_ADDR MT6351_ACCDET_CON10
#define MT6351_PMIC_ACCDET_DEBOUNCE4_MASK 0xFFFF
#define MT6351_PMIC_ACCDET_DEBOUNCE4_SHIFT 0
#define MT6351_PMIC_ACCDET_IVAL_CUR_IN_ADDR MT6351_ACCDET_CON11
#define MT6351_PMIC_ACCDET_IVAL_CUR_IN_MASK 0x3
#define MT6351_PMIC_ACCDET_IVAL_CUR_IN_SHIFT 0
#define MT6351_PMIC_ACCDET_EINT_IVAL_CUR_IN_ADDR MT6351_ACCDET_CON11
#define MT6351_PMIC_ACCDET_EINT_IVAL_CUR_IN_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_IVAL_CUR_IN_SHIFT 2
#define MT6351_PMIC_ACCDET_IVAL_SAM_IN_ADDR MT6351_ACCDET_CON11
#define MT6351_PMIC_ACCDET_IVAL_SAM_IN_MASK 0x3
#define MT6351_PMIC_ACCDET_IVAL_SAM_IN_SHIFT 4
#define MT6351_PMIC_ACCDET_EINT_IVAL_SAM_IN_ADDR MT6351_ACCDET_CON11
#define MT6351_PMIC_ACCDET_EINT_IVAL_SAM_IN_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_IVAL_SAM_IN_SHIFT 6
#define MT6351_PMIC_ACCDET_IVAL_MEM_IN_ADDR MT6351_ACCDET_CON11
#define MT6351_PMIC_ACCDET_IVAL_MEM_IN_MASK 0x3
#define MT6351_PMIC_ACCDET_IVAL_MEM_IN_SHIFT 8
#define MT6351_PMIC_ACCDET_EINT_IVAL_MEM_IN_ADDR MT6351_ACCDET_CON11
#define MT6351_PMIC_ACCDET_EINT_IVAL_MEM_IN_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_IVAL_MEM_IN_SHIFT 10
#define MT6351_PMIC_ACCDET_EINT_IVAL_SEL_ADDR MT6351_ACCDET_CON11
#define MT6351_PMIC_ACCDET_EINT_IVAL_SEL_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_IVAL_SEL_SHIFT 14
#define MT6351_PMIC_ACCDET_IVAL_SEL_ADDR MT6351_ACCDET_CON11
#define MT6351_PMIC_ACCDET_IVAL_SEL_MASK 0x1
#define MT6351_PMIC_ACCDET_IVAL_SEL_SHIFT 15
#define MT6351_PMIC_ACCDET_IRQ_ADDR MT6351_ACCDET_CON12
#define MT6351_PMIC_ACCDET_IRQ_MASK 0x1
#define MT6351_PMIC_ACCDET_IRQ_SHIFT 0
#define MT6351_PMIC_ACCDET_NEGV_IRQ_ADDR MT6351_ACCDET_CON12
#define MT6351_PMIC_ACCDET_NEGV_IRQ_MASK 0x1
#define MT6351_PMIC_ACCDET_NEGV_IRQ_SHIFT 1
#define MT6351_PMIC_ACCDET_EINT_IRQ_ADDR MT6351_ACCDET_CON12
#define MT6351_PMIC_ACCDET_EINT_IRQ_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_IRQ_SHIFT 2
#define MT6351_PMIC_ACCDET_IRQ_CLR_ADDR MT6351_ACCDET_CON12
#define MT6351_PMIC_ACCDET_IRQ_CLR_MASK 0x1
#define MT6351_PMIC_ACCDET_IRQ_CLR_SHIFT 8
#define MT6351_PMIC_ACCDET_NEGV_IRQ_CLR_ADDR MT6351_ACCDET_CON12
#define MT6351_PMIC_ACCDET_NEGV_IRQ_CLR_MASK 0x1
#define MT6351_PMIC_ACCDET_NEGV_IRQ_CLR_SHIFT 9
#define MT6351_PMIC_ACCDET_EINT_IRQ_CLR_ADDR MT6351_ACCDET_CON12
#define MT6351_PMIC_ACCDET_EINT_IRQ_CLR_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_IRQ_CLR_SHIFT 10
#define MT6351_PMIC_ACCDET_EINT_IRQ_POLARITY_ADDR MT6351_ACCDET_CON12
#define MT6351_PMIC_ACCDET_EINT_IRQ_POLARITY_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_IRQ_POLARITY_SHIFT 15
#define MT6351_PMIC_ACCDET_TEST_MODE0_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_TEST_MODE0_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE0_SHIFT 0
#define MT6351_PMIC_ACCDET_TEST_MODE1_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_TEST_MODE1_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE1_SHIFT 1
#define MT6351_PMIC_ACCDET_TEST_MODE2_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_TEST_MODE2_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE2_SHIFT 2
#define MT6351_PMIC_ACCDET_TEST_MODE3_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_TEST_MODE3_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE3_SHIFT 3
#define MT6351_PMIC_ACCDET_TEST_MODE4_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_TEST_MODE4_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE4_SHIFT 4
#define MT6351_PMIC_ACCDET_TEST_MODE5_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_TEST_MODE5_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE5_SHIFT 5
#define MT6351_PMIC_ACCDET_PWM_SEL_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_PWM_SEL_MASK 0x3
#define MT6351_PMIC_ACCDET_PWM_SEL_SHIFT 6
#define MT6351_PMIC_ACCDET_IN_SW_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_IN_SW_MASK 0x3
#define MT6351_PMIC_ACCDET_IN_SW_SHIFT 8
#define MT6351_PMIC_ACCDET_CMP_EN_SW_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_CMP_EN_SW_MASK 0x1
#define MT6351_PMIC_ACCDET_CMP_EN_SW_SHIFT 12
#define MT6351_PMIC_ACCDET_VTH_EN_SW_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_VTH_EN_SW_MASK 0x1
#define MT6351_PMIC_ACCDET_VTH_EN_SW_SHIFT 13
#define MT6351_PMIC_ACCDET_MBIAS_EN_SW_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_MBIAS_EN_SW_MASK 0x1
#define MT6351_PMIC_ACCDET_MBIAS_EN_SW_SHIFT 14
#define MT6351_PMIC_ACCDET_PWM_EN_SW_ADDR MT6351_ACCDET_CON13
#define MT6351_PMIC_ACCDET_PWM_EN_SW_MASK 0x1
#define MT6351_PMIC_ACCDET_PWM_EN_SW_SHIFT 15
#define MT6351_PMIC_ACCDET_IN_ADDR MT6351_ACCDET_CON14
#define MT6351_PMIC_ACCDET_IN_MASK 0x3
#define MT6351_PMIC_ACCDET_IN_SHIFT 0
#define MT6351_PMIC_ACCDET_CUR_IN_ADDR MT6351_ACCDET_CON14
#define MT6351_PMIC_ACCDET_CUR_IN_MASK 0x3
#define MT6351_PMIC_ACCDET_CUR_IN_SHIFT 2
#define MT6351_PMIC_ACCDET_SAM_IN_ADDR MT6351_ACCDET_CON14
#define MT6351_PMIC_ACCDET_SAM_IN_MASK 0x3
#define MT6351_PMIC_ACCDET_SAM_IN_SHIFT 4
#define MT6351_PMIC_ACCDET_MEM_IN_ADDR MT6351_ACCDET_CON14
#define MT6351_PMIC_ACCDET_MEM_IN_MASK 0x3
#define MT6351_PMIC_ACCDET_MEM_IN_SHIFT 6
#define MT6351_PMIC_ACCDET_STATE_ADDR MT6351_ACCDET_CON14
#define MT6351_PMIC_ACCDET_STATE_MASK 0x7
#define MT6351_PMIC_ACCDET_STATE_SHIFT 8
#define MT6351_PMIC_ACCDET_MBIAS_CLK_ADDR MT6351_ACCDET_CON14
#define MT6351_PMIC_ACCDET_MBIAS_CLK_MASK 0x1
#define MT6351_PMIC_ACCDET_MBIAS_CLK_SHIFT 12
#define MT6351_PMIC_ACCDET_VTH_CLK_ADDR MT6351_ACCDET_CON14
#define MT6351_PMIC_ACCDET_VTH_CLK_MASK 0x1
#define MT6351_PMIC_ACCDET_VTH_CLK_SHIFT 13
#define MT6351_PMIC_ACCDET_CMP_CLK_ADDR MT6351_ACCDET_CON14
#define MT6351_PMIC_ACCDET_CMP_CLK_MASK 0x1
#define MT6351_PMIC_ACCDET_CMP_CLK_SHIFT 14
#define MT6351_PMIC_DA_NI_AUDACCDETAUXADCSWCTRL_ADDR MT6351_ACCDET_CON14
#define MT6351_PMIC_DA_NI_AUDACCDETAUXADCSWCTRL_MASK 0x1
#define MT6351_PMIC_DA_NI_AUDACCDETAUXADCSWCTRL_SHIFT 15
#define MT6351_PMIC_ACCDET_EINT_DEB_SEL_ADDR MT6351_ACCDET_CON15
#define MT6351_PMIC_ACCDET_EINT_DEB_SEL_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_DEB_SEL_SHIFT 0
#define MT6351_PMIC_ACCDET_EINT_DEBOUNCE_ADDR MT6351_ACCDET_CON15
#define MT6351_PMIC_ACCDET_EINT_DEBOUNCE_MASK 0x7
#define MT6351_PMIC_ACCDET_EINT_DEBOUNCE_SHIFT 4
#define MT6351_PMIC_ACCDET_EINT_PWM_THRESH_ADDR MT6351_ACCDET_CON15
#define MT6351_PMIC_ACCDET_EINT_PWM_THRESH_MASK 0x7
#define MT6351_PMIC_ACCDET_EINT_PWM_THRESH_SHIFT 8
#define MT6351_PMIC_ACCDET_EINT_PWM_WIDTH_ADDR MT6351_ACCDET_CON15
#define MT6351_PMIC_ACCDET_EINT_PWM_WIDTH_MASK 0x3
#define MT6351_PMIC_ACCDET_EINT_PWM_WIDTH_SHIFT 12
#define MT6351_PMIC_ACCDET_NEGV_THRESH_ADDR MT6351_ACCDET_CON16
#define MT6351_PMIC_ACCDET_NEGV_THRESH_MASK 0x1F
#define MT6351_PMIC_ACCDET_NEGV_THRESH_SHIFT 0
#define MT6351_PMIC_ACCDET_EINT_PWM_FALL_DELAY_ADDR MT6351_ACCDET_CON16
#define MT6351_PMIC_ACCDET_EINT_PWM_FALL_DELAY_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_PWM_FALL_DELAY_SHIFT 5
#define MT6351_PMIC_ACCDET_EINT_PWM_RISE_DELAY_ADDR MT6351_ACCDET_CON16
#define MT6351_PMIC_ACCDET_EINT_PWM_RISE_DELAY_MASK 0x3FF
#define MT6351_PMIC_ACCDET_EINT_PWM_RISE_DELAY_SHIFT 6
#define MT6351_PMIC_ACCDET_TEST_MODE13_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_TEST_MODE13_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE13_SHIFT 1
#define MT6351_PMIC_ACCDET_TEST_MODE12_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_TEST_MODE12_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE12_SHIFT 2
#define MT6351_PMIC_ACCDET_NVDETECTOUT_SW_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_NVDETECTOUT_SW_MASK 0x1
#define MT6351_PMIC_ACCDET_NVDETECTOUT_SW_SHIFT 3
#define MT6351_PMIC_ACCDET_TEST_MODE11_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_TEST_MODE11_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE11_SHIFT 5
#define MT6351_PMIC_ACCDET_TEST_MODE10_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_TEST_MODE10_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE10_SHIFT 6
#define MT6351_PMIC_ACCDET_EINTCMPOUT_SW_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_EINTCMPOUT_SW_MASK 0x1
#define MT6351_PMIC_ACCDET_EINTCMPOUT_SW_SHIFT 7
#define MT6351_PMIC_ACCDET_TEST_MODE9_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_TEST_MODE9_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE9_SHIFT 9
#define MT6351_PMIC_ACCDET_TEST_MODE8_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_TEST_MODE8_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE8_SHIFT 10
#define MT6351_PMIC_ACCDET_AUXADC_CTRL_SW_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_AUXADC_CTRL_SW_MASK 0x1
#define MT6351_PMIC_ACCDET_AUXADC_CTRL_SW_SHIFT 11
#define MT6351_PMIC_ACCDET_TEST_MODE7_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_TEST_MODE7_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE7_SHIFT 13
#define MT6351_PMIC_ACCDET_TEST_MODE6_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_TEST_MODE6_MASK 0x1
#define MT6351_PMIC_ACCDET_TEST_MODE6_SHIFT 14
#define MT6351_PMIC_ACCDET_EINTCMP_EN_SW_ADDR MT6351_ACCDET_CON17
#define MT6351_PMIC_ACCDET_EINTCMP_EN_SW_MASK 0x1
#define MT6351_PMIC_ACCDET_EINTCMP_EN_SW_SHIFT 15
#define MT6351_PMIC_ACCDET_EINT_STATE_ADDR MT6351_ACCDET_CON19
#define MT6351_PMIC_ACCDET_EINT_STATE_MASK 0x7
#define MT6351_PMIC_ACCDET_EINT_STATE_SHIFT 0
#define MT6351_PMIC_ACCDET_AUXADC_DEBOUNCE_END_ADDR MT6351_ACCDET_CON19
#define MT6351_PMIC_ACCDET_AUXADC_DEBOUNCE_END_MASK 0x1
#define MT6351_PMIC_ACCDET_AUXADC_DEBOUNCE_END_SHIFT 3
#define MT6351_PMIC_ACCDET_AUXADC_CONNECT_PRE_ADDR MT6351_ACCDET_CON19
#define MT6351_PMIC_ACCDET_AUXADC_CONNECT_PRE_MASK 0x1
#define MT6351_PMIC_ACCDET_AUXADC_CONNECT_PRE_SHIFT 4
#define MT6351_PMIC_ACCDET_EINT_CUR_IN_ADDR MT6351_ACCDET_CON19
#define MT6351_PMIC_ACCDET_EINT_CUR_IN_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_CUR_IN_SHIFT 8
#define MT6351_PMIC_ACCDET_EINT_SAM_IN_ADDR MT6351_ACCDET_CON19
#define MT6351_PMIC_ACCDET_EINT_SAM_IN_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_SAM_IN_SHIFT 9
#define MT6351_PMIC_ACCDET_EINT_MEM_IN_ADDR MT6351_ACCDET_CON19
#define MT6351_PMIC_ACCDET_EINT_MEM_IN_MASK 0x1
#define MT6351_PMIC_ACCDET_EINT_MEM_IN_SHIFT 10
#define MT6351_PMIC_AD_NVDETECTOUT_ADDR MT6351_ACCDET_CON19
#define MT6351_PMIC_AD_NVDETECTOUT_MASK 0x1
#define MT6351_PMIC_AD_NVDETECTOUT_SHIFT 13
#define MT6351_PMIC_AD_EINTCMPOUT_ADDR MT6351_ACCDET_CON19
#define MT6351_PMIC_AD_EINTCMPOUT_MASK 0x1
#define MT6351_PMIC_AD_EINTCMPOUT_SHIFT 14
#define MT6351_PMIC_DA_NI_EINTCMPEN_ADDR MT6351_ACCDET_CON19
#define MT6351_PMIC_DA_NI_EINTCMPEN_MASK 0x1
#define MT6351_PMIC_DA_NI_EINTCMPEN_SHIFT 15
#define MT6351_PMIC_ACCDET_NEGV_COUNT_IN_ADDR MT6351_ACCDET_CON20
#define MT6351_PMIC_ACCDET_NEGV_COUNT_IN_MASK 0x3F
#define MT6351_PMIC_ACCDET_NEGV_COUNT_IN_SHIFT 0
#define MT6351_PMIC_ACCDET_NEGV_EN_FINAL_ADDR MT6351_ACCDET_CON20
#define MT6351_PMIC_ACCDET_NEGV_EN_FINAL_MASK 0x1
#define MT6351_PMIC_ACCDET_NEGV_EN_FINAL_SHIFT 6
#define MT6351_PMIC_ACCDET_NEGV_COUNT_END_ADDR MT6351_ACCDET_CON20
#define MT6351_PMIC_ACCDET_NEGV_COUNT_END_MASK 0x1
#define MT6351_PMIC_ACCDET_NEGV_COUNT_END_SHIFT 12
#define MT6351_PMIC_ACCDET_NEGV_MINU_ADDR MT6351_ACCDET_CON20
#define MT6351_PMIC_ACCDET_NEGV_MINU_MASK 0x1
#define MT6351_PMIC_ACCDET_NEGV_MINU_SHIFT 13
#define MT6351_PMIC_ACCDET_NEGV_ADD_ADDR MT6351_ACCDET_CON20
#define MT6351_PMIC_ACCDET_NEGV_ADD_MASK 0x1
#define MT6351_PMIC_ACCDET_NEGV_ADD_SHIFT 14
#define MT6351_PMIC_ACCDET_NEGV_CMP_ADDR MT6351_ACCDET_CON20
#define MT6351_PMIC_ACCDET_NEGV_CMP_MASK 0x1
#define MT6351_PMIC_ACCDET_NEGV_CMP_SHIFT 15
#define MT6351_PMIC_ACCDET_CUR_DEB_ADDR MT6351_ACCDET_CON21
#define MT6351_PMIC_ACCDET_CUR_DEB_MASK 0xFFFF
#define MT6351_PMIC_ACCDET_CUR_DEB_SHIFT 0
#define MT6351_PMIC_ACCDET_EINT_CUR_DEB_ADDR MT6351_ACCDET_CON22
#define MT6351_PMIC_ACCDET_EINT_CUR_DEB_MASK 0x7FFF
#define MT6351_PMIC_ACCDET_EINT_CUR_DEB_SHIFT 0
#define MT6351_PMIC_ACCDET_RSV_CON0_ADDR MT6351_ACCDET_CON23
#define MT6351_PMIC_ACCDET_RSV_CON0_MASK 0xFFFF
#define MT6351_PMIC_ACCDET_RSV_CON0_SHIFT 0
#define MT6351_PMIC_ACCDET_RSV_CON1_ADDR MT6351_ACCDET_CON24
#define MT6351_PMIC_ACCDET_RSV_CON1_MASK 0xFFFF
#define MT6351_PMIC_ACCDET_RSV_CON1_SHIFT 0
#define MT6351_PMIC_ACCDET_AUXADC_CONNECT_TIME_ADDR MT6351_ACCDET_CON25
#define MT6351_PMIC_ACCDET_AUXADC_CONNECT_TIME_MASK 0xFFFF
#define MT6351_PMIC_ACCDET_AUXADC_CONNECT_TIME_SHIFT 0
#define MT6351_PMIC_RG_VCDT_HV_EN_ADDR MT6351_CHR_CON0
#define MT6351_PMIC_RG_VCDT_HV_EN_MASK 0x1
#define MT6351_PMIC_RG_VCDT_HV_EN_SHIFT 0
#define MT6351_PMIC_RGS_CHR_LDO_DET_ADDR MT6351_CHR_CON0
#define MT6351_PMIC_RGS_CHR_LDO_DET_MASK 0x1
#define MT6351_PMIC_RGS_CHR_LDO_DET_SHIFT 1
#define MT6351_PMIC_RG_PCHR_AUTOMODE_ADDR MT6351_CHR_CON0
#define MT6351_PMIC_RG_PCHR_AUTOMODE_MASK 0x1
#define MT6351_PMIC_RG_PCHR_AUTOMODE_SHIFT 2
#define MT6351_PMIC_RG_CSDAC_EN_ADDR MT6351_CHR_CON0
#define MT6351_PMIC_RG_CSDAC_EN_MASK 0x1
#define MT6351_PMIC_RG_CSDAC_EN_SHIFT 3
#define MT6351_PMIC_RG_NORM_CHR_EN_ADDR MT6351_CHR_CON0
#define MT6351_PMIC_RG_NORM_CHR_EN_MASK 0x1
#define MT6351_PMIC_RG_NORM_CHR_EN_SHIFT 4
#define MT6351_PMIC_RGS_CHRDET_ADDR MT6351_CHR_CON0
#define MT6351_PMIC_RGS_CHRDET_MASK 0x1
#define MT6351_PMIC_RGS_CHRDET_SHIFT 5
#define MT6351_PMIC_RGS_VCDT_LV_DET_ADDR MT6351_CHR_CON0
#define MT6351_PMIC_RGS_VCDT_LV_DET_MASK 0x1
#define MT6351_PMIC_RGS_VCDT_LV_DET_SHIFT 6
#define MT6351_PMIC_RGS_VCDT_HV_DET_ADDR MT6351_CHR_CON0
#define MT6351_PMIC_RGS_VCDT_HV_DET_MASK 0x1
#define MT6351_PMIC_RGS_VCDT_HV_DET_SHIFT 7
#define MT6351_PMIC_RG_VCDT_LV_VTH_ADDR MT6351_CHR_CON1
#define MT6351_PMIC_RG_VCDT_LV_VTH_MASK 0xF
#define MT6351_PMIC_RG_VCDT_LV_VTH_SHIFT 0
#define MT6351_PMIC_RG_VCDT_HV_VTH_ADDR MT6351_CHR_CON1
#define MT6351_PMIC_RG_VCDT_HV_VTH_MASK 0xF
#define MT6351_PMIC_RG_VCDT_HV_VTH_SHIFT 4
#define MT6351_PMIC_RG_VBAT_CV_EN_ADDR MT6351_CHR_CON2
#define MT6351_PMIC_RG_VBAT_CV_EN_MASK 0x1
#define MT6351_PMIC_RG_VBAT_CV_EN_SHIFT 1
#define MT6351_PMIC_RG_VBAT_CC_EN_ADDR MT6351_CHR_CON2
#define MT6351_PMIC_RG_VBAT_CC_EN_MASK 0x1
#define MT6351_PMIC_RG_VBAT_CC_EN_SHIFT 2
#define MT6351_PMIC_RG_CS_EN_ADDR MT6351_CHR_CON2
#define MT6351_PMIC_RG_CS_EN_MASK 0x1
#define MT6351_PMIC_RG_CS_EN_SHIFT 3
#define MT6351_PMIC_RGS_CS_DET_ADDR MT6351_CHR_CON2
#define MT6351_PMIC_RGS_CS_DET_MASK 0x1
#define MT6351_PMIC_RGS_CS_DET_SHIFT 5
#define MT6351_PMIC_RGS_VBAT_CV_DET_ADDR MT6351_CHR_CON2
#define MT6351_PMIC_RGS_VBAT_CV_DET_MASK 0x1
#define MT6351_PMIC_RGS_VBAT_CV_DET_SHIFT 6
#define MT6351_PMIC_RGS_VBAT_CC_DET_ADDR MT6351_CHR_CON2
#define MT6351_PMIC_RGS_VBAT_CC_DET_MASK 0x1
#define MT6351_PMIC_RGS_VBAT_CC_DET_SHIFT 7
#define MT6351_PMIC_RG_VBAT_NORM_CV_VTH_ADDR MT6351_CHR_CON3
#define MT6351_PMIC_RG_VBAT_NORM_CV_VTH_MASK 0x3F
#define MT6351_PMIC_RG_VBAT_NORM_CV_VTH_SHIFT 0
#define MT6351_PMIC_RG_VBAT_CC_VTH_ADDR MT6351_CHR_CON3
#define MT6351_PMIC_RG_VBAT_CC_VTH_MASK 0x3
#define MT6351_PMIC_RG_VBAT_CC_VTH_SHIFT 6
#define MT6351_PMIC_RG_NORM_CS_VTH_ADDR MT6351_CHR_CON4
#define MT6351_PMIC_RG_NORM_CS_VTH_MASK 0xF
#define MT6351_PMIC_RG_NORM_CS_VTH_SHIFT 0
#define MT6351_PMIC_RG_PCHR_TOHTC_ADDR MT6351_CHR_CON5
#define MT6351_PMIC_RG_PCHR_TOHTC_MASK 0x7
#define MT6351_PMIC_RG_PCHR_TOHTC_SHIFT 0
#define MT6351_PMIC_RG_PCHR_TOLTC_ADDR MT6351_CHR_CON5
#define MT6351_PMIC_RG_PCHR_TOLTC_MASK 0x7
#define MT6351_PMIC_RG_PCHR_TOLTC_SHIFT 4
#define MT6351_PMIC_RG_VBAT_OV_EN_ADDR MT6351_CHR_CON6
#define MT6351_PMIC_RG_VBAT_OV_EN_MASK 0x1
#define MT6351_PMIC_RG_VBAT_OV_EN_SHIFT 0
#define MT6351_PMIC_RG_VBAT_OV_VTH_ADDR MT6351_CHR_CON6
#define MT6351_PMIC_RG_VBAT_OV_VTH_MASK 0xF
#define MT6351_PMIC_RG_VBAT_OV_VTH_SHIFT 1
#define MT6351_PMIC_RG_VBAT_OV_DEG_ADDR MT6351_CHR_CON6
#define MT6351_PMIC_RG_VBAT_OV_DEG_MASK 0x1
#define MT6351_PMIC_RG_VBAT_OV_DEG_SHIFT 5
#define MT6351_PMIC_RGS_VBAT_OV_DET_ADDR MT6351_CHR_CON6
#define MT6351_PMIC_RGS_VBAT_OV_DET_MASK 0x1
#define MT6351_PMIC_RGS_VBAT_OV_DET_SHIFT 6
#define MT6351_PMIC_RG_BATON_EN_ADDR MT6351_CHR_CON7
#define MT6351_PMIC_RG_BATON_EN_MASK 0x1
#define MT6351_PMIC_RG_BATON_EN_SHIFT 0
#define MT6351_PMIC_RG_BATON_HT_EN_RSV0_ADDR MT6351_CHR_CON7
#define MT6351_PMIC_RG_BATON_HT_EN_RSV0_MASK 0x1
#define MT6351_PMIC_RG_BATON_HT_EN_RSV0_SHIFT 1
#define MT6351_PMIC_BATON_TDET_EN_ADDR MT6351_CHR_CON7
#define MT6351_PMIC_BATON_TDET_EN_MASK 0x1
#define MT6351_PMIC_BATON_TDET_EN_SHIFT 2
#define MT6351_PMIC_RG_BATON_HT_TRIM_ADDR MT6351_CHR_CON7
#define MT6351_PMIC_RG_BATON_HT_TRIM_MASK 0x7
#define MT6351_PMIC_RG_BATON_HT_TRIM_SHIFT 4
#define MT6351_PMIC_RG_BATON_HT_TRIM_SET_ADDR MT6351_CHR_CON7
#define MT6351_PMIC_RG_BATON_HT_TRIM_SET_MASK 0x1
#define MT6351_PMIC_RG_BATON_HT_TRIM_SET_SHIFT 7
#define MT6351_PMIC_RG_BATON_TDET_EN_ADDR MT6351_CHR_CON7
#define MT6351_PMIC_RG_BATON_TDET_EN_MASK 0x1
#define MT6351_PMIC_RG_BATON_TDET_EN_SHIFT 8
#define MT6351_PMIC_RG_CSDAC_DATA_ADDR MT6351_CHR_CON8
#define MT6351_PMIC_RG_CSDAC_DATA_MASK 0x3FF
#define MT6351_PMIC_RG_CSDAC_DATA_SHIFT 0
#define MT6351_PMIC_RG_FRC_CSVTH_USBDL_ADDR MT6351_CHR_CON9
#define MT6351_PMIC_RG_FRC_CSVTH_USBDL_MASK 0x1
#define MT6351_PMIC_RG_FRC_CSVTH_USBDL_SHIFT 0
#define MT6351_PMIC_RGS_PCHR_FLAG_OUT_ADDR MT6351_CHR_CON10
#define MT6351_PMIC_RGS_PCHR_FLAG_OUT_MASK 0xF
#define MT6351_PMIC_RGS_PCHR_FLAG_OUT_SHIFT 0
#define MT6351_PMIC_RG_PCHR_FLAG_EN_ADDR MT6351_CHR_CON10
#define MT6351_PMIC_RG_PCHR_FLAG_EN_MASK 0x1
#define MT6351_PMIC_RG_PCHR_FLAG_EN_SHIFT 4
#define MT6351_PMIC_RG_OTG_BVALID_EN_ADDR MT6351_CHR_CON10
#define MT6351_PMIC_RG_OTG_BVALID_EN_MASK 0x1
#define MT6351_PMIC_RG_OTG_BVALID_EN_SHIFT 5
#define MT6351_PMIC_RGS_OTG_BVALID_DET_ADDR MT6351_CHR_CON10
#define MT6351_PMIC_RGS_OTG_BVALID_DET_MASK 0x1
#define MT6351_PMIC_RGS_OTG_BVALID_DET_SHIFT 6
#define MT6351_PMIC_RG_PCHR_FLAG_SEL_ADDR MT6351_CHR_CON11
#define MT6351_PMIC_RG_PCHR_FLAG_SEL_MASK 0x3F
#define MT6351_PMIC_RG_PCHR_FLAG_SEL_SHIFT 0
#define MT6351_PMIC_RG_PCHR_TESTMODE_ADDR MT6351_CHR_CON12
#define MT6351_PMIC_RG_PCHR_TESTMODE_MASK 0x1
#define MT6351_PMIC_RG_PCHR_TESTMODE_SHIFT 0
#define MT6351_PMIC_RG_CSDAC_TESTMODE_ADDR MT6351_CHR_CON12
#define MT6351_PMIC_RG_CSDAC_TESTMODE_MASK 0x1
#define MT6351_PMIC_RG_CSDAC_TESTMODE_SHIFT 1
#define MT6351_PMIC_RG_PCHR_RST_ADDR MT6351_CHR_CON12
#define MT6351_PMIC_RG_PCHR_RST_MASK 0x1
#define MT6351_PMIC_RG_PCHR_RST_SHIFT 2
#define MT6351_PMIC_RG_PCHR_FT_CTRL_ADDR MT6351_CHR_CON12
#define MT6351_PMIC_RG_PCHR_FT_CTRL_MASK 0x7
#define MT6351_PMIC_RG_PCHR_FT_CTRL_SHIFT 4
#define MT6351_PMIC_RG_CHRWDT_TD_ADDR MT6351_CHR_CON13
#define MT6351_PMIC_RG_CHRWDT_TD_MASK 0xF
#define MT6351_PMIC_RG_CHRWDT_TD_SHIFT 0
#define MT6351_PMIC_RG_CHRWDT_EN_ADDR MT6351_CHR_CON13
#define MT6351_PMIC_RG_CHRWDT_EN_MASK 0x1
#define MT6351_PMIC_RG_CHRWDT_EN_SHIFT 4
#define MT6351_PMIC_RG_CHRWDT_WR_ADDR MT6351_CHR_CON13
#define MT6351_PMIC_RG_CHRWDT_WR_MASK 0x1
#define MT6351_PMIC_RG_CHRWDT_WR_SHIFT 8
#define MT6351_PMIC_RG_PCHR_RV_ADDR MT6351_CHR_CON14
#define MT6351_PMIC_RG_PCHR_RV_MASK 0xFF
#define MT6351_PMIC_RG_PCHR_RV_SHIFT 0
#define MT6351_PMIC_RG_CHRWDT_INT_EN_ADDR MT6351_CHR_CON15
#define MT6351_PMIC_RG_CHRWDT_INT_EN_MASK 0x1
#define MT6351_PMIC_RG_CHRWDT_INT_EN_SHIFT 0
#define MT6351_PMIC_RG_CHRWDT_FLAG_WR_ADDR MT6351_CHR_CON15
#define MT6351_PMIC_RG_CHRWDT_FLAG_WR_MASK 0x1
#define MT6351_PMIC_RG_CHRWDT_FLAG_WR_SHIFT 1
#define MT6351_PMIC_RGS_CHRWDT_OUT_ADDR MT6351_CHR_CON15
#define MT6351_PMIC_RGS_CHRWDT_OUT_MASK 0x1
#define MT6351_PMIC_RGS_CHRWDT_OUT_SHIFT 2
#define MT6351_PMIC_RG_USBDL_RST_ADDR MT6351_CHR_CON16
#define MT6351_PMIC_RG_USBDL_RST_MASK 0x1
#define MT6351_PMIC_RG_USBDL_RST_SHIFT 2
#define MT6351_PMIC_RG_USBDL_SET_ADDR MT6351_CHR_CON16
#define MT6351_PMIC_RG_USBDL_SET_MASK 0x1
#define MT6351_PMIC_RG_USBDL_SET_SHIFT 3
#define MT6351_PMIC_RG_ADCIN_VSEN_MUX_EN_ADDR MT6351_CHR_CON16
#define MT6351_PMIC_RG_ADCIN_VSEN_MUX_EN_MASK 0x1
#define MT6351_PMIC_RG_ADCIN_VSEN_MUX_EN_SHIFT 8
#define MT6351_PMIC_RG_ADCIN_VSEN_EXT_BATON_EN_ADDR MT6351_CHR_CON16
#define MT6351_PMIC_RG_ADCIN_VSEN_EXT_BATON_EN_MASK 0x1
#define MT6351_PMIC_RG_ADCIN_VSEN_EXT_BATON_EN_SHIFT 9
#define MT6351_PMIC_RG_ADCIN_VBAT_EN_ADDR MT6351_CHR_CON16
#define MT6351_PMIC_RG_ADCIN_VBAT_EN_MASK 0x1
#define MT6351_PMIC_RG_ADCIN_VBAT_EN_SHIFT 10
#define MT6351_PMIC_RG_ADCIN_VSEN_EN_ADDR MT6351_CHR_CON16
#define MT6351_PMIC_RG_ADCIN_VSEN_EN_MASK 0x1
#define MT6351_PMIC_RG_ADCIN_VSEN_EN_SHIFT 11
#define MT6351_PMIC_RG_ADCIN_CHR_EN_ADDR MT6351_CHR_CON16
#define MT6351_PMIC_RG_ADCIN_CHR_EN_MASK 0x1
#define MT6351_PMIC_RG_ADCIN_CHR_EN_SHIFT 12
#define MT6351_PMIC_RG_UVLO_VTHL_ADDR MT6351_CHR_CON17
#define MT6351_PMIC_RG_UVLO_VTHL_MASK 0x1F
#define MT6351_PMIC_RG_UVLO_VTHL_SHIFT 0
#define MT6351_PMIC_RG_UVLO_VH_LAT_ADDR MT6351_CHR_CON17
#define MT6351_PMIC_RG_UVLO_VH_LAT_MASK 0x1
#define MT6351_PMIC_RG_UVLO_VH_LAT_SHIFT 7
#define MT6351_PMIC_RG_LBAT_INT_VTH_ADDR MT6351_CHR_CON18
#define MT6351_PMIC_RG_LBAT_INT_VTH_MASK 0x1F
#define MT6351_PMIC_RG_LBAT_INT_VTH_SHIFT 0
#define MT6351_PMIC_RG_BGR_RSEL_ADDR MT6351_CHR_CON19
#define MT6351_PMIC_RG_BGR_RSEL_MASK 0x7
#define MT6351_PMIC_RG_BGR_RSEL_SHIFT 0
#define MT6351_PMIC_RG_BGR_UNCHOP_PH_ADDR MT6351_CHR_CON19
#define MT6351_PMIC_RG_BGR_UNCHOP_PH_MASK 0x1
#define MT6351_PMIC_RG_BGR_UNCHOP_PH_SHIFT 4
#define MT6351_PMIC_RG_BGR_UNCHOP_ADDR MT6351_CHR_CON19
#define MT6351_PMIC_RG_BGR_UNCHOP_MASK 0x1
#define MT6351_PMIC_RG_BGR_UNCHOP_SHIFT 5
#define MT6351_PMIC_RG_BC11_BB_CTRL_ADDR MT6351_CHR_CON20
#define MT6351_PMIC_RG_BC11_BB_CTRL_MASK 0x1
#define MT6351_PMIC_RG_BC11_BB_CTRL_SHIFT 0
#define MT6351_PMIC_RG_BC11_RST_ADDR MT6351_CHR_CON20
#define MT6351_PMIC_RG_BC11_RST_MASK 0x1
#define MT6351_PMIC_RG_BC11_RST_SHIFT 1
#define MT6351_PMIC_RG_BC11_VSRC_EN_ADDR MT6351_CHR_CON20
#define MT6351_PMIC_RG_BC11_VSRC_EN_MASK 0x3
#define MT6351_PMIC_RG_BC11_VSRC_EN_SHIFT 2
#define MT6351_PMIC_RGS_BC11_CMP_OUT_ADDR MT6351_CHR_CON20
#define MT6351_PMIC_RGS_BC11_CMP_OUT_MASK 0x1
#define MT6351_PMIC_RGS_BC11_CMP_OUT_SHIFT 7
#define MT6351_PMIC_RG_BC11_VREF_VTH_ADDR MT6351_CHR_CON21
#define MT6351_PMIC_RG_BC11_VREF_VTH_MASK 0x3
#define MT6351_PMIC_RG_BC11_VREF_VTH_SHIFT 0
#define MT6351_PMIC_RG_BC11_CMP_EN_ADDR MT6351_CHR_CON21
#define MT6351_PMIC_RG_BC11_CMP_EN_MASK 0x3
#define MT6351_PMIC_RG_BC11_CMP_EN_SHIFT 2
#define MT6351_PMIC_RG_BC11_IPD_EN_ADDR MT6351_CHR_CON21
#define MT6351_PMIC_RG_BC11_IPD_EN_MASK 0x3
#define MT6351_PMIC_RG_BC11_IPD_EN_SHIFT 4
#define MT6351_PMIC_RG_BC11_IPU_EN_ADDR MT6351_CHR_CON21
#define MT6351_PMIC_RG_BC11_IPU_EN_MASK 0x3
#define MT6351_PMIC_RG_BC11_IPU_EN_SHIFT 6
#define MT6351_PMIC_RG_BC11_BIAS_EN_ADDR MT6351_CHR_CON21
#define MT6351_PMIC_RG_BC11_BIAS_EN_MASK 0x1
#define MT6351_PMIC_RG_BC11_BIAS_EN_SHIFT 8
#define MT6351_PMIC_RG_CSDAC_STP_INC_ADDR MT6351_CHR_CON22
#define MT6351_PMIC_RG_CSDAC_STP_INC_MASK 0x7
#define MT6351_PMIC_RG_CSDAC_STP_INC_SHIFT 0
#define MT6351_PMIC_RG_CSDAC_STP_DEC_ADDR MT6351_CHR_CON22
#define MT6351_PMIC_RG_CSDAC_STP_DEC_MASK 0x7
#define MT6351_PMIC_RG_CSDAC_STP_DEC_SHIFT 4
#define MT6351_PMIC_RG_CSDAC_DLY_ADDR MT6351_CHR_CON23
#define MT6351_PMIC_RG_CSDAC_DLY_MASK 0x7
#define MT6351_PMIC_RG_CSDAC_DLY_SHIFT 0
#define MT6351_PMIC_RG_CSDAC_STP_ADDR MT6351_CHR_CON23
#define MT6351_PMIC_RG_CSDAC_STP_MASK 0x7
#define MT6351_PMIC_RG_CSDAC_STP_SHIFT 4
#define MT6351_PMIC_RG_LOW_ICH_DB_ADDR MT6351_CHR_CON24
#define MT6351_PMIC_RG_LOW_ICH_DB_MASK 0x3F
#define MT6351_PMIC_RG_LOW_ICH_DB_SHIFT 0
#define MT6351_PMIC_RG_CHRIND_ON_ADDR MT6351_CHR_CON24
#define MT6351_PMIC_RG_CHRIND_ON_MASK 0x1
#define MT6351_PMIC_RG_CHRIND_ON_SHIFT 6
#define MT6351_PMIC_RG_CHRIND_DIMMING_ADDR MT6351_CHR_CON24
#define MT6351_PMIC_RG_CHRIND_DIMMING_MASK 0x1
#define MT6351_PMIC_RG_CHRIND_DIMMING_SHIFT 7
#define MT6351_PMIC_RG_CV_MODE_ADDR MT6351_CHR_CON25
#define MT6351_PMIC_RG_CV_MODE_MASK 0x1
#define MT6351_PMIC_RG_CV_MODE_SHIFT 0
#define MT6351_PMIC_RG_VCDT_MODE_ADDR MT6351_CHR_CON25
#define MT6351_PMIC_RG_VCDT_MODE_MASK 0x1
#define MT6351_PMIC_RG_VCDT_MODE_SHIFT 1
#define MT6351_PMIC_RG_CSDAC_MODE_ADDR MT6351_CHR_CON25
#define MT6351_PMIC_RG_CSDAC_MODE_MASK 0x1
#define MT6351_PMIC_RG_CSDAC_MODE_SHIFT 2
#define MT6351_PMIC_RG_TRACKING_EN_ADDR MT6351_CHR_CON25
#define MT6351_PMIC_RG_TRACKING_EN_MASK 0x1
#define MT6351_PMIC_RG_TRACKING_EN_SHIFT 4
#define MT6351_PMIC_RG_HWCV_EN_ADDR MT6351_CHR_CON25
#define MT6351_PMIC_RG_HWCV_EN_MASK 0x1
#define MT6351_PMIC_RG_HWCV_EN_SHIFT 6
#define MT6351_PMIC_RG_ULC_DET_EN_ADDR MT6351_CHR_CON25
#define MT6351_PMIC_RG_ULC_DET_EN_MASK 0x1
#define MT6351_PMIC_RG_ULC_DET_EN_SHIFT 7
#define MT6351_PMIC_RG_BGR_TRIM_EN_ADDR MT6351_CHR_CON26
#define MT6351_PMIC_RG_BGR_TRIM_EN_MASK 0x1
#define MT6351_PMIC_RG_BGR_TRIM_EN_SHIFT 0
#define MT6351_PMIC_RG_ICHRG_TRIM_ADDR MT6351_CHR_CON26
#define MT6351_PMIC_RG_ICHRG_TRIM_MASK 0xF
#define MT6351_PMIC_RG_ICHRG_TRIM_SHIFT 4
#define MT6351_PMIC_RG_BGR_TRIM_ADDR MT6351_CHR_CON27
#define MT6351_PMIC_RG_BGR_TRIM_MASK 0x1F
#define MT6351_PMIC_RG_BGR_TRIM_SHIFT 0
#define MT6351_PMIC_RG_OVP_TRIM_ADDR MT6351_CHR_CON28
#define MT6351_PMIC_RG_OVP_TRIM_MASK 0xF
#define MT6351_PMIC_RG_OVP_TRIM_SHIFT 0
#define MT6351_PMIC_RG_CHR_OSC_TRIM_ADDR MT6351_CHR_CON29
#define MT6351_PMIC_RG_CHR_OSC_TRIM_MASK 0x1F
#define MT6351_PMIC_RG_CHR_OSC_TRIM_SHIFT 0
#define MT6351_PMIC_DA_QI_BGR_EXT_BUF_EN_ADDR MT6351_CHR_CON29
#define MT6351_PMIC_DA_QI_BGR_EXT_BUF_EN_MASK 0x1
#define MT6351_PMIC_DA_QI_BGR_EXT_BUF_EN_SHIFT 5
#define MT6351_PMIC_RG_BGR_TEST_EN_ADDR MT6351_CHR_CON29
#define MT6351_PMIC_RG_BGR_TEST_EN_MASK 0x1
#define MT6351_PMIC_RG_BGR_TEST_EN_SHIFT 6
#define MT6351_PMIC_RG_BGR_TEST_RSTB_ADDR MT6351_CHR_CON29
#define MT6351_PMIC_RG_BGR_TEST_RSTB_MASK 0x1
#define MT6351_PMIC_RG_BGR_TEST_RSTB_SHIFT 7
#define MT6351_PMIC_RG_DAC_USBDL_MAX_ADDR MT6351_CHR_CON30
#define MT6351_PMIC_RG_DAC_USBDL_MAX_MASK 0x3FF
#define MT6351_PMIC_RG_DAC_USBDL_MAX_SHIFT 0
#define MT6351_PMIC_RG_CM_VDEC_TRIG_ADDR MT6351_CHR_CON31
#define MT6351_PMIC_RG_CM_VDEC_TRIG_MASK 0x1
#define MT6351_PMIC_RG_CM_VDEC_TRIG_SHIFT 0
#define MT6351_PMIC_PCHR_CM_VDEC_STATUS_ADDR MT6351_CHR_CON31
#define MT6351_PMIC_PCHR_CM_VDEC_STATUS_MASK 0x1
#define MT6351_PMIC_PCHR_CM_VDEC_STATUS_SHIFT 4
#define MT6351_PMIC_RG_CM_VINC_TRIG_ADDR MT6351_CHR_CON32
#define MT6351_PMIC_RG_CM_VINC_TRIG_MASK 0x1
#define MT6351_PMIC_RG_CM_VINC_TRIG_SHIFT 0
#define MT6351_PMIC_PCHR_CM_VINC_STATUS_ADDR MT6351_CHR_CON32
#define MT6351_PMIC_PCHR_CM_VINC_STATUS_MASK 0x1
#define MT6351_PMIC_PCHR_CM_VINC_STATUS_SHIFT 4
#define MT6351_PMIC_RG_CM_VDEC_HPRD1_ADDR MT6351_CHR_CON33
#define MT6351_PMIC_RG_CM_VDEC_HPRD1_MASK 0x3F
#define MT6351_PMIC_RG_CM_VDEC_HPRD1_SHIFT 0
#define MT6351_PMIC_RG_CM_VDEC_HPRD2_ADDR MT6351_CHR_CON33
#define MT6351_PMIC_RG_CM_VDEC_HPRD2_MASK 0x3F
#define MT6351_PMIC_RG_CM_VDEC_HPRD2_SHIFT 8
#define MT6351_PMIC_RG_CM_VDEC_HPRD3_ADDR MT6351_CHR_CON34
#define MT6351_PMIC_RG_CM_VDEC_HPRD3_MASK 0x3F
#define MT6351_PMIC_RG_CM_VDEC_HPRD3_SHIFT 0
#define MT6351_PMIC_RG_CM_VDEC_HPRD4_ADDR MT6351_CHR_CON34
#define MT6351_PMIC_RG_CM_VDEC_HPRD4_MASK 0x3F
#define MT6351_PMIC_RG_CM_VDEC_HPRD4_SHIFT 8
#define MT6351_PMIC_RG_CM_VDEC_HPRD5_ADDR MT6351_CHR_CON35
#define MT6351_PMIC_RG_CM_VDEC_HPRD5_MASK 0x3F
#define MT6351_PMIC_RG_CM_VDEC_HPRD5_SHIFT 0
#define MT6351_PMIC_RG_CM_VDEC_HPRD6_ADDR MT6351_CHR_CON35
#define MT6351_PMIC_RG_CM_VDEC_HPRD6_MASK 0x3F
#define MT6351_PMIC_RG_CM_VDEC_HPRD6_SHIFT 8
#define MT6351_PMIC_RG_CM_VINC_HPRD1_ADDR MT6351_CHR_CON36
#define MT6351_PMIC_RG_CM_VINC_HPRD1_MASK 0x3F
#define MT6351_PMIC_RG_CM_VINC_HPRD1_SHIFT 0
#define MT6351_PMIC_RG_CM_VINC_HPRD2_ADDR MT6351_CHR_CON36
#define MT6351_PMIC_RG_CM_VINC_HPRD2_MASK 0x3F
#define MT6351_PMIC_RG_CM_VINC_HPRD2_SHIFT 8
#define MT6351_PMIC_RG_CM_VINC_HPRD3_ADDR MT6351_CHR_CON37
#define MT6351_PMIC_RG_CM_VINC_HPRD3_MASK 0x3F
#define MT6351_PMIC_RG_CM_VINC_HPRD3_SHIFT 0
#define MT6351_PMIC_RG_CM_VINC_HPRD4_ADDR MT6351_CHR_CON37
#define MT6351_PMIC_RG_CM_VINC_HPRD4_MASK 0x3F
#define MT6351_PMIC_RG_CM_VINC_HPRD4_SHIFT 8
#define MT6351_PMIC_RG_CM_VINC_HPRD5_ADDR MT6351_CHR_CON38
#define MT6351_PMIC_RG_CM_VINC_HPRD5_MASK 0x3F
#define MT6351_PMIC_RG_CM_VINC_HPRD5_SHIFT 0
#define MT6351_PMIC_RG_CM_VINC_HPRD6_ADDR MT6351_CHR_CON38
#define MT6351_PMIC_RG_CM_VINC_HPRD6_MASK 0x3F
#define MT6351_PMIC_RG_CM_VINC_HPRD6_SHIFT 8
#define MT6351_PMIC_RG_CM_LPRD_ADDR MT6351_CHR_CON39
#define MT6351_PMIC_RG_CM_LPRD_MASK 0x3F
#define MT6351_PMIC_RG_CM_LPRD_SHIFT 0
#define MT6351_PMIC_RG_CM_CS_VTHL_ADDR MT6351_CHR_CON40
#define MT6351_PMIC_RG_CM_CS_VTHL_MASK 0xF
#define MT6351_PMIC_RG_CM_CS_VTHL_SHIFT 0
#define MT6351_PMIC_RG_CM_CS_VTHH_ADDR MT6351_CHR_CON40
#define MT6351_PMIC_RG_CM_CS_VTHH_MASK 0xF
#define MT6351_PMIC_RG_CM_CS_VTHH_SHIFT 4
#define MT6351_PMIC_RG_PCHR_RSV_ADDR MT6351_CHR_CON41
#define MT6351_PMIC_RG_PCHR_RSV_MASK 0xFF
#define MT6351_PMIC_RG_PCHR_RSV_SHIFT 0
#define MT6351_PMIC_RG_ENVTEM_D_ADDR MT6351_CHR_CON42
#define MT6351_PMIC_RG_ENVTEM_D_MASK 0x1
#define MT6351_PMIC_RG_ENVTEM_D_SHIFT 0
#define MT6351_PMIC_RG_ENVTEM_EN_ADDR MT6351_CHR_CON42
#define MT6351_PMIC_RG_ENVTEM_EN_MASK 0x1
#define MT6351_PMIC_RG_ENVTEM_EN_SHIFT 1
#define MT6351_PMIC_RGS_BATON_HV_ADDR MT6351_BATON_CON0
#define MT6351_PMIC_RGS_BATON_HV_MASK 0x1
#define MT6351_PMIC_RGS_BATON_HV_SHIFT 6
#define MT6351_PMIC_RG_HW_VTH_CTRL_ADDR MT6351_BATON_CON0
#define MT6351_PMIC_RG_HW_VTH_CTRL_MASK 0x1
#define MT6351_PMIC_RG_HW_VTH_CTRL_SHIFT 11
#define MT6351_PMIC_RG_HW_VTH2_ADDR MT6351_BATON_CON0
#define MT6351_PMIC_RG_HW_VTH2_MASK 0x3
#define MT6351_PMIC_RG_HW_VTH2_SHIFT 12
#define MT6351_PMIC_RG_HW_VTH1_ADDR MT6351_BATON_CON0
#define MT6351_PMIC_RG_HW_VTH1_MASK 0x3
#define MT6351_PMIC_RG_HW_VTH1_SHIFT 14
#define MT6351_PMIC_RG_CM_VDEC_INT_EN_ADDR MT6351_CHR_CON43
#define MT6351_PMIC_RG_CM_VDEC_INT_EN_MASK 0x1
#define MT6351_PMIC_RG_CM_VDEC_INT_EN_SHIFT 9
#define MT6351_PMIC_RG_CM_VINC_INT_EN_ADDR MT6351_CHR_CON43
#define MT6351_PMIC_RG_CM_VINC_INT_EN_MASK 0x1
#define MT6351_PMIC_RG_CM_VINC_INT_EN_SHIFT 11
#define MT6351_PMIC_RG_QI_BATON_LT_EN_ADDR MT6351_CHR_CON44
#define MT6351_PMIC_RG_QI_BATON_LT_EN_MASK 0x1
#define MT6351_PMIC_RG_QI_BATON_LT_EN_SHIFT 0
#define MT6351_PMIC_RGS_BATON_UNDET_ADDR MT6351_CHR_CON44
#define MT6351_PMIC_RGS_BATON_UNDET_MASK 0x1
#define MT6351_PMIC_RGS_BATON_UNDET_SHIFT 1
#define MT6351_PMIC_RG_JW_CS_VTH_ADDR MT6351_CHR_CON45
#define MT6351_PMIC_RG_JW_CS_VTH_MASK 0xF
#define MT6351_PMIC_RG_JW_CS_VTH_SHIFT 0
#define MT6351_PMIC_RG_JW_CV_VTH_ADDR MT6351_CHR_CON45
#define MT6351_PMIC_RG_JW_CV_VTH_MASK 0x3F
#define MT6351_PMIC_RG_JW_CV_VTH_SHIFT 8
#define MT6351_PMIC_RG_JC_CS_VTH_ADDR MT6351_CHR_CON46
#define MT6351_PMIC_RG_JC_CS_VTH_MASK 0xF
#define MT6351_PMIC_RG_JC_CS_VTH_SHIFT 0
#define MT6351_PMIC_RG_JC_CV_VTH_ADDR MT6351_CHR_CON46
#define MT6351_PMIC_RG_JC_CV_VTH_MASK 0x3F
#define MT6351_PMIC_RG_JC_CV_VTH_SHIFT 8
#define MT6351_PMIC_RG_BC11_ACA_EN_ADDR MT6351_CHR_CON47
#define MT6351_PMIC_RG_BC11_ACA_EN_MASK 0x1
#define MT6351_PMIC_RG_BC11_ACA_EN_SHIFT 0
#define MT6351_PMIC_RG_JEITA_EN_ADDR MT6351_CHR_CON47
#define MT6351_PMIC_RG_JEITA_EN_MASK 0x1
#define MT6351_PMIC_RG_JEITA_EN_SHIFT 1
#define MT6351_PMIC_RG_VCDT_TRIM_ADDR MT6351_CHR_CON48
#define MT6351_PMIC_RG_VCDT_TRIM_MASK 0xF
#define MT6351_PMIC_RG_VCDT_TRIM_SHIFT 0
#define MT6351_PMIC_RGS_BC11_ID_FLOAT_ADDR MT6351_CHR_CON48
#define MT6351_PMIC_RGS_BC11_ID_FLOAT_MASK 0x1
#define MT6351_PMIC_RGS_BC11_ID_FLOAT_SHIFT 4
#define MT6351_PMIC_RGS_BC11_ID_A_ADDR MT6351_CHR_CON48
#define MT6351_PMIC_RGS_BC11_ID_A_MASK 0x1
#define MT6351_PMIC_RGS_BC11_ID_A_SHIFT 5
#define MT6351_PMIC_RGS_BC11_ID_B_ADDR MT6351_CHR_CON48
#define MT6351_PMIC_RGS_BC11_ID_B_MASK 0x1
#define MT6351_PMIC_RGS_BC11_ID_B_SHIFT 6
#define MT6351_PMIC_RGS_BC11_ID_C_ADDR MT6351_CHR_CON48
#define MT6351_PMIC_RGS_BC11_ID_C_MASK 0x1
#define MT6351_PMIC_RGS_BC11_ID_C_SHIFT 7
#define MT6351_PMIC_RGS_BC11_ID_GND_ADDR MT6351_CHR_CON48
#define MT6351_PMIC_RGS_BC11_ID_GND_MASK 0x1
#define MT6351_PMIC_RGS_BC11_ID_GND_SHIFT 8
#define MT6351_PMIC_RGS_BC11_ACA_OTG_DET_ADDR MT6351_CHR_CON48
#define MT6351_PMIC_RGS_BC11_ACA_OTG_DET_MASK 0x1
#define MT6351_PMIC_RGS_BC11_ACA_OTG_DET_SHIFT 9
#define MT6351_PMIC_RG_INDICATOR_TRIM_ADDR MT6351_CHR_CON48
#define MT6351_PMIC_RG_INDICATOR_TRIM_MASK 0x7
#define MT6351_PMIC_RG_INDICATOR_TRIM_SHIFT 10
#define MT6351_PMIC_EOSC_CALI_START_ADDR MT6351_EOSC_CALI_CON0
#define MT6351_PMIC_EOSC_CALI_START_MASK 0x1
#define MT6351_PMIC_EOSC_CALI_START_SHIFT 0
#define MT6351_PMIC_EOSC_CALI_TD_ADDR MT6351_EOSC_CALI_CON0
#define MT6351_PMIC_EOSC_CALI_TD_MASK 0x7
#define MT6351_PMIC_EOSC_CALI_TD_SHIFT 5
#define MT6351_PMIC_EOSC_CALI_TEST_ADDR MT6351_EOSC_CALI_CON0
#define MT6351_PMIC_EOSC_CALI_TEST_MASK 0xF
#define MT6351_PMIC_EOSC_CALI_TEST_SHIFT 9
#define MT6351_PMIC_EOSC_CALI_DCXO_RDY_TD_ADDR MT6351_EOSC_CALI_CON1
#define MT6351_PMIC_EOSC_CALI_DCXO_RDY_TD_MASK 0x7
#define MT6351_PMIC_EOSC_CALI_DCXO_RDY_TD_SHIFT 0
#define MT6351_PMIC_FRC_VTCXO0_ON_ADDR MT6351_EOSC_CALI_CON1
#define MT6351_PMIC_FRC_VTCXO0_ON_MASK 0x1
#define MT6351_PMIC_FRC_VTCXO0_ON_SHIFT 8
#define MT6351_PMIC_EOSC_CALI_RSV_ADDR MT6351_EOSC_CALI_CON1
#define MT6351_PMIC_EOSC_CALI_RSV_MASK 0xF
#define MT6351_PMIC_EOSC_CALI_RSV_SHIFT 11
#define MT6351_PMIC_VRTC_PWM_MODE_ADDR MT6351_VRTC_PWM_CON0
#define MT6351_PMIC_VRTC_PWM_MODE_MASK 0x1
#define MT6351_PMIC_VRTC_PWM_MODE_SHIFT 0
#define MT6351_PMIC_VRTC_PWM_RSV_ADDR MT6351_VRTC_PWM_CON0
#define MT6351_PMIC_VRTC_PWM_RSV_MASK 0x7
#define MT6351_PMIC_VRTC_PWM_RSV_SHIFT 1
#define MT6351_PMIC_VRTC_PWM_L_DUTY_ADDR MT6351_VRTC_PWM_CON0
#define MT6351_PMIC_VRTC_PWM_L_DUTY_MASK 0xF
#define MT6351_PMIC_VRTC_PWM_L_DUTY_SHIFT 4
#define MT6351_PMIC_VRTC_PWM_H_DUTY_ADDR MT6351_VRTC_PWM_CON0
#define MT6351_PMIC_VRTC_PWM_H_DUTY_MASK 0xF
#define MT6351_PMIC_VRTC_PWM_H_DUTY_SHIFT 8
#define MT6351_PMIC_VRTC_CAP_SEL_ADDR MT6351_VRTC_PWM_CON0
#define MT6351_PMIC_VRTC_CAP_SEL_MASK 0x1
#define MT6351_PMIC_VRTC_CAP_SEL_SHIFT 12

enum MT6351_FLAGS_LIST_ENUM {
	MT6351_PMIC_THR_DET_DIS,
	MT6351_PMIC_THR_TEST,
	MT6351_PMIC_THR_HWPDN_EN,
	MT6351_PMIC_STRUP_THERMAL_DEB_SEL,
	MT6351_PMIC_USBDL,
	MT6351_PMIC_PMU_THERMAL_DEB,
	MT6351_PMIC_PMU_THR_DEB,
	MT6351_PMIC_PMU_THR_STATUS,
	MT6351_PMIC_STRUP_THER_DEB_RMAX,
	MT6351_PMIC_STRUP_THER_DEB_FMAX,
	MT6351_PMIC_DDUVLO_DEB_EN,
	MT6351_PMIC_PWRBB_DEB_EN,
	MT6351_PMIC_STRUP_OSC_EN,
	MT6351_PMIC_STRUP_OSC_EN_SEL,
	MT6351_PMIC_STRUP_FT_CTRL,
	MT6351_PMIC_STRUP_PWRON_FORCE,
	MT6351_PMIC_BIAS_GEN_EN_FORCE,
	MT6351_PMIC_STRUP_PWRON,
	MT6351_PMIC_STRUP_PWRON_SEL,
	MT6351_PMIC_BIAS_GEN_EN,
	MT6351_PMIC_BIAS_GEN_EN_SEL,
	MT6351_PMIC_RTC_XOSC32_ENB_SW,
	MT6351_PMIC_RTC_XOSC32_ENB_SEL,
	MT6351_PMIC_STRUP_DIG_IO_PG_FORCE,
	MT6351_PMIC_RG_STRUP_VUSB33_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VGPU_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VDRAM_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VA10_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VEMC_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VS2_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VMODEM_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VMD1_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VCORE_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VA18_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VS1_PG_H2L_EN,
	MT6351_PMIC_RG_STRUP_VTCXO24_PG_ENB,
	MT6351_PMIC_RG_STRUP_VUSB33_PG_ENB,
	MT6351_PMIC_RG_STRUP_VGPU_PG_ENB,
	MT6351_PMIC_RG_STRUP_VDRAM_PG_ENB,
	MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_ENB,
	MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_ENB,
	MT6351_PMIC_RG_STRUP_VIO28_PG_ENB,
	MT6351_PMIC_RG_STRUP_VA10_PG_ENB,
	MT6351_PMIC_RG_STRUP_VEMC_PG_ENB,
	MT6351_PMIC_RG_STRUP_VIO18_PG_ENB,
	MT6351_PMIC_RG_STRUP_VS2_PG_ENB,
	MT6351_PMIC_RG_STRUP_VMODEM_PG_ENB,
	MT6351_PMIC_RG_STRUP_VMD1_PG_ENB,
	MT6351_PMIC_RG_STRUP_VCORE_PG_ENB,
	MT6351_PMIC_RG_STRUP_VA18_PG_ENB,
	MT6351_PMIC_RG_STRUP_VS1_PG_ENB,
	MT6351_PMIC_RG_STRUP_VXO22_PG_ENB,
	MT6351_PMIC_RG_STRUP_VGPU_OC_H2L_EN,
	MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_H2L_EN,
	MT6351_PMIC_RG_STRUP_VS2_OC_H2L_EN,
	MT6351_PMIC_RG_STRUP_VMODEM_OC_H2L_EN,
	MT6351_PMIC_RG_STRUP_VMD1_OC_H2L_EN,
	MT6351_PMIC_RG_STRUP_VCORE_OC_H2L_EN,
	MT6351_PMIC_RG_STRUP_VS1_OC_H2L_EN,
	MT6351_PMIC_RG_STRUP_VGPU_OC_ENB,
	MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_ENB,
	MT6351_PMIC_RG_STRUP_VS2_OC_ENB,
	MT6351_PMIC_RG_STRUP_VMODEM_OC_ENB,
	MT6351_PMIC_RG_STRUP_VMD1_OC_ENB,
	MT6351_PMIC_RG_STRUP_VCORE_OC_ENB,
	MT6351_PMIC_RG_STRUP_VS1_OC_ENB,
	MT6351_PMIC_RG_STRUP_VDRAM_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VXO22_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VGPU_OC_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VS2_OC_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VMODEM_OC_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VMD1_OC_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VCORE_OC_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VS1_OC_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VTCXO24_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VUSB33_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VGPU_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VSRAM_DRAM_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VIO28_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VA10_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VEMC_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VIO18_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VS2_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VMODEM_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VMD1_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VCORE_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VA18_PG_DEB_BYPASS,
	MT6351_PMIC_RG_STRUP_VS1_PG_DEB_BYPASS,
	MT6351_PMIC_CLR_JUST_RST,
	MT6351_PMIC_UVLO_L2H_DEB_EN,
	MT6351_PMIC_JUST_PWRKEY_RST,
	MT6351_PMIC_DA_QI_OSC_EN,
	MT6351_PMIC_STRUP_EXT_PMIC_EN,
	MT6351_PMIC_STRUP_EXT_PMIC_SEL,
	MT6351_PMIC_STRUP_CON8_RSV0,
	MT6351_PMIC_DA_QI_EXT_PMIC_EN,
	MT6351_PMIC_STRUP_AUXADC_START_SW,
	MT6351_PMIC_STRUP_AUXADC_RSTB_SW,
	MT6351_PMIC_STRUP_AUXADC_START_SEL,
	MT6351_PMIC_STRUP_AUXADC_RSTB_SEL,
	MT6351_PMIC_STRUP_PWROFF_SEQ_EN,
	MT6351_PMIC_STRUP_PWROFF_PREOFF_EN,
	MT6351_PMIC_STRUP_PP_EN,
	MT6351_PMIC_STRUP_PP_EN_SEL,
	MT6351_PMIC_STRUP_DIG0_RSV0,
	MT6351_PMIC_STRUP_DIG1_RSV0,
	MT6351_PMIC_RG_RSV_SWREG,
	MT6351_PMIC_STRUP_PP_EN_PWROFF_CNT,
	MT6351_PMIC_STRUP_UVLO_U1U2_SEL,
	MT6351_PMIC_STRUP_UVLO_U1U2_SEL_SWCTRL,
	MT6351_PMIC_STRUP_AUXADC_RPCNT_MAX,
	MT6351_PMIC_RG_STRUP_THR_OVER_110_CLR,
	MT6351_PMIC_RG_STRUP_THR_110_CLR,
	MT6351_PMIC_RG_STRUP_THR_125_CLR,
	MT6351_PMIC_RG_STRUP_THR_CLR,
	MT6351_PMIC_RG_STRUP_THR_OVER_110_IRQ_EN,
	MT6351_PMIC_RG_STRUP_THR_110_IRQ_EN,
	MT6351_PMIC_RG_STRUP_THR_125_IRQ_EN,
	MT6351_PMIC_RG_STRUP_THR_OVER_110_IRQ_STATUS,
	MT6351_PMIC_RG_STRUP_THR_110_IRQ_STATUS,
	MT6351_PMIC_RG_STRUP_THR_125_IRQ_STATUS,
	MT6351_PMIC_STRUP_PG_STATUS_CLR,
	MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_SEL,
	MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_TD,
	MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_EN,
	MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL,
	MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_PWRKY_CTRL,
	MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_PWRBB_CTRL,
	MT6351_PMIC_RG_STRUP_ENVTEM,
	MT6351_PMIC_RG_STRUP_ENVTEM_CTRL,
	MT6351_PMIC_RG_STRUP_PWRKEY_COUNT_RESET,
	MT6351_PMIC_RGS_ANA_CHIP_ID,
	MT6351_PMIC_RG_PP_EN_DRVSEL,
	MT6351_PMIC_RG_FCHR_PU_EN,
	MT6351_PMIC_RG_PMU_RSV,
	MT6351_PMIC_RG_FCHR_KEYDET_EN,
	MT6351_PMIC_RG_EN_DRVSEL,
	MT6351_PMIC_RG_RST_DRVSEL,
	MT6351_PMIC_RG_STRUP_IREF_TRIM,
	MT6351_PMIC_RG_VREF_BG,
	MT6351_PMIC_RG_THR_TMODE,
	MT6351_PMIC_RG_STRUP_THR_SEL,
	MT6351_PMIC_RG_THRDET_SEL,
	MT6351_PMIC_HWCID,
	MT6351_PMIC_SWCID,
	MT6351_PMIC_RG_SRCLKEN_IN0_EN,
	MT6351_PMIC_RG_SRCLKEN_IN1_EN,
	MT6351_PMIC_RG_OSC_SEL,
	MT6351_PMIC_RG_SRCLKEN_IN2_EN,
	MT6351_PMIC_RG_SRCLKEN_IN0_HW_MODE,
	MT6351_PMIC_RG_SRCLKEN_IN1_HW_MODE,
	MT6351_PMIC_RG_OSC_SEL_HW_MODE,
	MT6351_PMIC_RG_SRCLKEN_IN_SYNC_EN,
	MT6351_PMIC_RG_OSC_EN_AUTO_OFF,
	MT6351_PMIC_TEST_OUT,
	MT6351_PMIC_RG_MON_FLAG_SEL,
	MT6351_PMIC_RG_MON_GRP_SEL,
	MT6351_PMIC_RG_NANDTREE_MODE,
	MT6351_PMIC_RG_TEST_AUXADC,
	MT6351_PMIC_RG_EFUSE_MODE,
	MT6351_PMIC_RG_TEST_STRUP,
	MT6351_PMIC_TESTMODE_SW,
	MT6351_PMIC_EN_STATUS_VLDO28,
	MT6351_PMIC_EN_STATUS_VIO28,
	MT6351_PMIC_EN_STATUS_VMCH,
	MT6351_PMIC_EN_STATUS_VMC,
	MT6351_PMIC_EN_STATUS_VEMC,
	MT6351_PMIC_EN_STATUS_VSIM2,
	MT6351_PMIC_EN_STATUS_VSIM1,
	MT6351_PMIC_EN_STATUS_VEFUSE,
	MT6351_PMIC_EN_STATUS_VUSB33,
	MT6351_PMIC_EN_STATUS_VCN33,
	MT6351_PMIC_EN_STATUS_VCAMA,
	MT6351_PMIC_EN_STATUS_VCN28,
	MT6351_PMIC_EN_STATUS_VTCXO24,
	MT6351_PMIC_EN_STATUS_VTCXO28,
	MT6351_PMIC_EN_STATUS_VA18,
	MT6351_PMIC_EN_STATUS_VRTC,
	MT6351_PMIC_EN_STATUS_VBIF28,
	MT6351_PMIC_EN_STATUS_VGP3,
	MT6351_PMIC_EN_STATUS_VMIPI,
	MT6351_PMIC_EN_STATUS_VDRAM,
	MT6351_PMIC_EN_STATUS_VA10,
	MT6351_PMIC_EN_STATUS_VRF12,
	MT6351_PMIC_EN_STATUS_VXO22,
	MT6351_PMIC_EN_STATUS_VSRAM_PROC,
	MT6351_PMIC_EN_STATUS_VCAMIO,
	MT6351_PMIC_EN_STATUS_VCN18,
	MT6351_PMIC_EN_STATUS_VIO18,
	MT6351_PMIC_EN_STATUS_VRF18,
	MT6351_PMIC_EN_STATUS_VCAMD,
	MT6351_PMIC_EN_STATUS_VIBR,
	MT6351_PMIC_OC_STATUS_VIBR,
	MT6351_PMIC_OC_STATUS_VLDO28,
	MT6351_PMIC_OC_STATUS_VIO28,
	MT6351_PMIC_OC_STATUS_VMC,
	MT6351_PMIC_OC_STATUS_VMCH,
	MT6351_PMIC_OC_STATUS_VEMC,
	MT6351_PMIC_OC_STATUS_VSIM2,
	MT6351_PMIC_OC_STATUS_VSIM1,
	MT6351_PMIC_OC_STATUS_VEFUSE,
	MT6351_PMIC_OC_STATUS_VUSB33,
	MT6351_PMIC_OC_STATUS_VCN33,
	MT6351_PMIC_OC_STATUS_VCAMA,
	MT6351_PMIC_OC_STATUS_VCN28,
	MT6351_PMIC_OC_STATUS_VTCXO24,
	MT6351_PMIC_OC_STATUS_VTCXO28,
	MT6351_PMIC_OC_STATUS_VA18,
	MT6351_PMIC_OC_STATUS_VBIF28,
	MT6351_PMIC_OC_STATUS_VGP3,
	MT6351_PMIC_OC_STATUS_VMIPI,
	MT6351_PMIC_OC_STATUS_VDRAM,
	MT6351_PMIC_OC_STATUS_VA10,
	MT6351_PMIC_OC_STATUS_VRF12,
	MT6351_PMIC_OC_STATUS_VXO22,
	MT6351_PMIC_OC_STATUS_VSRAM_PROC,
	MT6351_PMIC_OC_STATUS_VCAMIO,
	MT6351_PMIC_OC_STATUS_VCN18,
	MT6351_PMIC_OC_STATUS_VIO18,
	MT6351_PMIC_OC_STATUS_VRF18,
	MT6351_PMIC_OC_STATUS_VCAMD,
	MT6351_PMIC_VA18_PG_DEB,
	MT6351_PMIC_VCORE_PG_DEB,
	MT6351_PMIC_VMD1_PG_DEB,
	MT6351_PMIC_VMODEM_PG_DEB,
	MT6351_PMIC_VS2_PG_DEB,
	MT6351_PMIC_VIO18_PG_DEB,
	MT6351_PMIC_VEMC_PG_DEB,
	MT6351_PMIC_VA10_PG_DEB,
	MT6351_PMIC_VIO28_PG_DEB,
	MT6351_PMIC_VSRAM_MD_PG_DEB,
	MT6351_PMIC_VSRAM_PROC_PG_DEB,
	MT6351_PMIC_VDRAM_PG_DEB,
	MT6351_PMIC_VGPU_PG_DEB,
	MT6351_PMIC_VUSB33_PG_DEB,
	MT6351_PMIC_VXO22_PG_DEB,
	MT6351_PMIC_VTCXO24_PG_DEB,
	MT6351_PMIC_VS1_PG_DEB,
	MT6351_PMIC_STRUP_VA18_PG_STATUS,
	MT6351_PMIC_STRUP_VCORE_PG_STATUS,
	MT6351_PMIC_STRUP_VMD1_PG_STATUS,
	MT6351_PMIC_STRUP_VMODEM_PG_STATUS,
	MT6351_PMIC_STRUP_VS2_PG_STATUS,
	MT6351_PMIC_STRUP_VIO18_PG_STATUS,
	MT6351_PMIC_STRUP_VEMC_PG_STATUS,
	MT6351_PMIC_STRUP_VA10_PG_STATUS,
	MT6351_PMIC_STRUP_VIO28_PG_STATUS,
	MT6351_PMIC_STRUP_VSRAM_MD_PG_STATUS,
	MT6351_PMIC_STRUP_VSRAM_PROC_PG_STATUS,
	MT6351_PMIC_STRUP_VDRAM_PG_STATUS,
	MT6351_PMIC_STRUP_VGPU_PG_STATUS,
	MT6351_PMIC_STRUP_VUSB33_PG_STATUS,
	MT6351_PMIC_STRUP_VXO22_PG_STATUS,
	MT6351_PMIC_STRUP_VTCXO24_PG_STATUS,
	MT6351_PMIC_STRUP_VS1_PG_STATUS,
	MT6351_PMIC_THERMAL_BACK110,
	MT6351_PMIC_THERMAL_OVER110,
	MT6351_PMIC_THERMAL_OVER125,
	MT6351_PMIC_STRUP_THERMAL_STATUS,
	MT6351_PMIC_PMU_TEST_MODE_SCAN,
	MT6351_PMIC_PWRKEY_DEB,
	MT6351_PMIC_HOMEKEY_DEB,
	MT6351_PMIC_RTC_XTAL_DET_DONE,
	MT6351_PMIC_XOSC32_ENB_DET,
	MT6351_PMIC_RTC_XTAL_DET_RSV,
	MT6351_PMIC_RG_PMU_TDSEL,
	MT6351_PMIC_RG_SPI_TDSEL,
	MT6351_PMIC_RG_AUD_TDSEL,
	MT6351_PMIC_RG_E32CAL_TDSEL,
	MT6351_PMIC_RG_PMU_RDSEL,
	MT6351_PMIC_RG_SPI_RDSEL,
	MT6351_PMIC_RG_AUD_RDSEL,
	MT6351_PMIC_RG_E32CAL_RDSEL,
	MT6351_PMIC_RG_SMT_WDTRSTB_IN,
	MT6351_PMIC_RG_SMT_HOMEKEY,
	MT6351_PMIC_RG_SMT_SRCLKEN_IN0,
	MT6351_PMIC_RG_SMT_SRCLKEN_IN1,
	MT6351_PMIC_RG_SMT_RTC_32K1V8_0,
	MT6351_PMIC_RG_SMT_RTC_32K1V8_1,
	MT6351_PMIC_RG_SMT_SPI_CLK,
	MT6351_PMIC_RG_SMT_SPI_CSN,
	MT6351_PMIC_RG_SMT_SPI_MOSI,
	MT6351_PMIC_RG_SMT_SPI_MISO,
	MT6351_PMIC_RG_SMT_AUD_CLK,
	MT6351_PMIC_RG_SMT_AUD_DAT_MOSI,
	MT6351_PMIC_RG_SMT_AUD_DAT_MISO,
	MT6351_PMIC_RG_SMT_ANC_DAT_MOSI,
	MT6351_PMIC_RG_SMT_VOW_CLK_MISO,
	MT6351_PMIC_RG_SMT_ENBB,
	MT6351_PMIC_RG_SMT_XOSC_EN,
	MT6351_PMIC_RG_OCTL_SRCLKEN_IN0,
	MT6351_PMIC_RG_OCTL_SRCLKEN_IN1,
	MT6351_PMIC_RG_OCTL_RTC_32K1V8_0,
	MT6351_PMIC_RG_OCTL_RTC_32K1V8_1,
	MT6351_PMIC_RG_OCTL_SPI_CLK,
	MT6351_PMIC_RG_OCTL_SPI_CSN,
	MT6351_PMIC_RG_OCTL_SPI_MOSI,
	MT6351_PMIC_RG_OCTL_SPI_MISO,
	MT6351_PMIC_RG_OCTL_AUD_DAT_MOSI,
	MT6351_PMIC_RG_OCTL_AUD_DAT_MISO,
	MT6351_PMIC_RG_OCTL_AUD_CLK,
	MT6351_PMIC_RG_OCTL_ANC_DAT_MOSI,
	MT6351_PMIC_RG_OCTL_HOMEKEY,
	MT6351_PMIC_RG_OCTL_ENBB,
	MT6351_PMIC_RG_OCTL_XOSC_EN,
	MT6351_PMIC_RG_OCTL_VOW_CLK_MISO,
	MT6351_PMIC_TOP_STATUS,
	MT6351_PMIC_TOP_STATUS_SET,
	MT6351_PMIC_TOP_STATUS_CLR,
	MT6351_PMIC_RG_G_SMPS_PD_CK_PDN,
	MT6351_PMIC_RG_G_SMPS_AUD_CK_PDN,
	MT6351_PMIC_RG_G_DRV_2M_CK_PDN,
	MT6351_PMIC_RG_DRV_32K_CK_PDN,
	MT6351_PMIC_RG_DRV_ISINK0_CK_PDN,
	MT6351_PMIC_RG_DRV_ISINK1_CK_PDN,
	MT6351_PMIC_RG_DRV_ISINK2_CK_PDN,
	MT6351_PMIC_RG_DRV_ISINK3_CK_PDN,
	MT6351_PMIC_RG_AUXADC_1M_CK_PDN,
	MT6351_PMIC_RG_AUXADC_SMPS_CK_PDN,
	MT6351_PMIC_RG_AUXADC_RNG_CK_PDN,
	MT6351_PMIC_RG_AUXADC_26M_CK_PDN,
	MT6351_PMIC_RG_AUDNCP_CK_PDN,
	MT6351_PMIC_RG_AUDIF_CK_PDN,
	MT6351_PMIC_RG_AUD_CK_PDN,
	MT6351_PMIC_RG_ZCD13M_CK_PDN,
	MT6351_PMIC_TOP_CKPDN_CON0_SET,
	MT6351_PMIC_TOP_CKPDN_CON0_CLR,
	MT6351_PMIC_RG_RTC_32K_CK_PDN,
	MT6351_PMIC_RG_RTC_MCLK_PDN,
	MT6351_PMIC_RG_RTC_75K_CK_PDN,
	MT6351_PMIC_RG_RTCDET_CK_PDN,
	MT6351_PMIC_RG_RTC32K_1V8_0_O_PDN,
	MT6351_PMIC_RG_RTC32K_1V8_1_O_PDN,
	MT6351_PMIC_RG_RTC_2SEC_OFF_DET_PDN,
	MT6351_PMIC_RG_FQMTR_CK_PDN,
	MT6351_PMIC_RG_STB_1M_CK_PDN,
	MT6351_PMIC_RG_BUCK_1M_CK_PDN,
	MT6351_PMIC_RG_AUXADC_CK_PDN,
	MT6351_PMIC_RG_PWMOC_6M_CK_PDN,
	MT6351_PMIC_RG_PWMOC_AUD_6M_CK_PDN,
	MT6351_PMIC_TOP_CKPDN_CON1_SET,
	MT6351_PMIC_TOP_CKPDN_CON1_CLR,
	MT6351_PMIC_RG_FGADC_ANA_CK_PDN,
	MT6351_PMIC_RG_FGADC_DIG_CK_PDN,
	MT6351_PMIC_RG_BIF_X72_CK_PDN,
	MT6351_PMIC_RG_BIF_X4_CK_PDN,
	MT6351_PMIC_RG_BIF_X1_CK_PDN,
	MT6351_PMIC_RG_PCHR_32K_CK_PDN,
	MT6351_PMIC_RG_ACCDET_CK_PDN,
	MT6351_PMIC_RG_FQMTR_32K_CK_PDN,
	MT6351_PMIC_RG_INTRP_CK_PDN,
	MT6351_PMIC_RG_RTC_26M_CK_PDN,
	MT6351_PMIC_RG_RTC_EOSC32_CK_PDN,
	MT6351_PMIC_RG_TRIM_75K_CK_PDN,
	MT6351_PMIC_RG_STRUP_LBAT_SEL_CK_PDN,
	MT6351_PMIC_TOP_CKPDN_CON2_SET,
	MT6351_PMIC_TOP_CKPDN_CON2_CLR,
	MT6351_PMIC_RG_STRUP_75K_CK_PDN,
	MT6351_PMIC_RG_STRUP_32K_CK_PDN,
	MT6351_PMIC_RG_EFUSE_CK_PDN,
	MT6351_PMIC_RG_SMPS_CK_DIV_PDN,
	MT6351_PMIC_RG_SPI_CK_PDN,
	MT6351_PMIC_RG_BGR_TEST_CK_PDN,
	MT6351_PMIC_RG_FGADC_FT_CK_PDN,
	MT6351_PMIC_RG_PCHR_TEST_CK_PDN,
	MT6351_PMIC_RG_BUCK_32K_CK_PDN,
	MT6351_PMIC_RG_BUCK_ANA_CK_PDN,
	MT6351_PMIC_RG_EOSC_CALI_TEST_CK_PDN,
	MT6351_PMIC_RG_G_SMPS_TEST_CK_PDN,
	MT6351_PMIC_TOP_CKPDN_CON3_RSV,
	MT6351_PMIC_TOP_CKPDN_CON3_SET,
	MT6351_PMIC_TOP_CKPDN_CON3_CLR,
	MT6351_PMIC_RG_BUCK_9M_CK_PDN,
	MT6351_PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN,
	MT6351_PMIC_RG_BUCK_VPA_9M_CK_PDN,
	MT6351_PMIC_RG_BUCK_VMODEM_9M_CK_PDN,
	MT6351_PMIC_RG_BUCK_VCORE_9M_CK_PDN,
	MT6351_PMIC_RG_BUCK_VGPU_9M_CK_PDN,
	MT6351_PMIC_TOP_CKPDN_CON4_RSV,
	MT6351_PMIC_TOP_CKPDN_CON4_SET,
	MT6351_PMIC_TOP_CKPDN_CON4_CLR,
	MT6351_PMIC_RG_LDO_CALI_75K_CK_PDN,
	MT6351_PMIC_RG_INTRP_PRE_OC_CK_PDN,
	MT6351_PMIC_RG_BUCK_VS2_9M_CK_PDN,
	MT6351_PMIC_RG_BUCK_VS1_9M_CK_PDN,
	MT6351_PMIC_RG_BUCK_VMD1_9M_CK_PDN,
	MT6351_PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN,
	MT6351_PMIC_RG_VOW32K_CK_PDN,
	MT6351_PMIC_RG_VOW12M_CK_PDN,
	MT6351_PMIC_RG_AUD18M_CK_PDN,
	MT6351_PMIC_RG_DRV_ISINK4_CK_PDN,
	MT6351_PMIC_RG_DRV_ISINK5_CK_PDN,
	MT6351_PMIC_RG_DRV_ISINK6_CK_PDN,
	MT6351_PMIC_RG_DRV_ISINK7_CK_PDN,
	MT6351_PMIC_RG_DRV_CHRIND_CK_PDN,
	MT6351_PMIC_RG_BUCK_AUD_1M_CK_PDN,
	MT6351_PMIC_RG_STB_AUD_1M_CK_PDN,
	MT6351_PMIC_TOP_CKPDN_CON5_SET,
	MT6351_PMIC_TOP_CKPDN_CON5_CLR,
	MT6351_PMIC_RG_AUDIF_CK_CKSEL,
	MT6351_PMIC_RG_AUD_CK_CKSEL,
	MT6351_PMIC_RG_DRV_ISINK0_CK_CKSEL,
	MT6351_PMIC_RG_DRV_ISINK1_CK_CKSEL,
	MT6351_PMIC_RG_DRV_ISINK2_CK_CKSEL,
	MT6351_PMIC_RG_DRV_ISINK3_CK_CKSEL,
	MT6351_PMIC_RG_FQMTR_CK_CKSEL,
	MT6351_PMIC_RG_75K_32K_SEL,
	MT6351_PMIC_RG_AUXADC_CK_CKSEL,
	MT6351_PMIC_RG_OSC_SEL_HW_SRC_SEL,
	MT6351_PMIC_RG_SRCLKEN_SRC_SEL,
	MT6351_PMIC_TOP_CKSEL_CON_SET,
	MT6351_PMIC_TOP_CKSEL_CON_CLR,
	MT6351_PMIC_RG_STRUP_75K_CK_CKSEL,
	MT6351_PMIC_RG_BGR_TEST_CK_CKSEL,
	MT6351_PMIC_RG_PCHR_TEST_CK_CKSEL,
	MT6351_PMIC_RG_FGADC_ANA_CK_CKSEL,
	MT6351_PMIC_RG_DRV_ISINK4_CK_CKSEL,
	MT6351_PMIC_RG_DRV_ISINK5_CK_CKSEL,
	MT6351_PMIC_RG_DRV_ISINK6_CK_CKSEL,
	MT6351_PMIC_RG_DRV_ISINK7_CK_CKSEL,
	MT6351_PMIC_RG_DRV_CHRIND_CK_CKSEL,
	MT6351_PMIC_RG_TOP_CKSEL_CON1_RSV,
	MT6351_PMIC_TOP_CKSEL_CON1_SET,
	MT6351_PMIC_TOP_CKSEL_CON1_CLR,
	MT6351_PMIC_RG_SRCVOLTEN_SW,
	MT6351_PMIC_RG_BUCK_OSC_SEL_SW,
	MT6351_PMIC_RG_VOWEN_SW,
	MT6351_PMIC_RG_SRCVOLTEN_MODE,
	MT6351_PMIC_RG_BUCK_OSC_SEL_MODE,
	MT6351_PMIC_RG_VOWEN_MODE,
	MT6351_PMIC_RG_TOP_CKSEL_CON2_RSV,
	MT6351_PMIC_RG_BUCK_VMD1_OSC_SEL_SW,
	MT6351_PMIC_RG_BUCK_VMD1_OSC_SEL_MODE,
	MT6351_PMIC_TOP_CKSEL_CON2_SET,
	MT6351_PMIC_TOP_CKSEL_CON2_CLR,
	MT6351_PMIC_RG_BUCK_VCORE_OSC_SEL_SW,
	MT6351_PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_SW,
	MT6351_PMIC_RG_BUCK_VPA_OSC_SEL_SW,
	MT6351_PMIC_RG_BUCK_VMODEM_OSC_SEL_SW,
	MT6351_PMIC_RG_BUCK_VGPU_OSC_SEL_SW,
	MT6351_PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_SW,
	MT6351_PMIC_RG_BUCK_VS2_OSC_SEL_SW,
	MT6351_PMIC_RG_BUCK_VS1_OSC_SEL_SW,
	MT6351_PMIC_RG_BUCK_VCORE_OSC_SEL_MODE,
	MT6351_PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_MODE,
	MT6351_PMIC_RG_BUCK_VPA_OSC_SEL_MODE,
	MT6351_PMIC_RG_BUCK_VMODEM_OSC_SEL_MODE,
	MT6351_PMIC_RG_BUCK_VGPU_OSC_SEL_MODE,
	MT6351_PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_MODE,
	MT6351_PMIC_RG_BUCK_VS2_OSC_SEL_MODE,
	MT6351_PMIC_RG_BUCK_VS1_OSC_SEL_MODE,
	MT6351_PMIC_TOP_CKSEL_CON3_SET,
	MT6351_PMIC_TOP_CKSEL_CON3_CLR,
	MT6351_PMIC_RG_STRUP_LBAT_SEL_CK_DIVSEL,
	MT6351_PMIC_TOP_CKDIVSEL_CON_RSV,
	MT6351_PMIC_RG_BIF_X4_CK_DIVSEL,
	MT6351_PMIC_RG_REG_CK_DIVSEL,
	MT6351_PMIC_TOP_CKDIVSEL_CON0_RSV,
	MT6351_PMIC_TOP_CKDIVSEL_CON0_SET,
	MT6351_PMIC_TOP_CKDIVSEL_CON0_CLR,
	MT6351_PMIC_RG_AUXADC_SMPS_CK_DIVSEL,
	MT6351_PMIC_RG_AUXADC_26M_CK_DIVSEL,
	MT6351_PMIC_RG_BUCK_9M_CK_DIVSEL,
	MT6351_PMIC_TOP_CKDIVSEL_CON1_SET,
	MT6351_PMIC_TOP_CKDIVSEL_CON1_CLR,
	MT6351_PMIC_RG_G_SMPS_PD_CK_PDN_HWEN,
	MT6351_PMIC_RG_G_SMPS_AUD_CK_PDN_HWEN,
	MT6351_PMIC_RG_G_DRV_2M_CK_PDN_HWEN,
	MT6351_PMIC_RG_AUXADC_CK_PDN_HWEN,
	MT6351_PMIC_RG_AUXADC_SMPS_CK_PDN_HWEN,
	MT6351_PMIC_RG_BUCK_1M_CK_PDN_HWEN,
	MT6351_PMIC_RG_EFUSE_CK_PDN_HWEN,
	MT6351_PMIC_RG_RTC_26M_CK_PDN_HWEN,
	MT6351_PMIC_RG_AUXADC_26M_CK_PDN_HWEN,
	MT6351_PMIC_RG_AUXADC_CK_CKSEL_HWEN,
	MT6351_PMIC_TOP_CKHWEN_CON0_RSV,
	MT6351_PMIC_TOP_CKHWEN_CON0_SET,
	MT6351_PMIC_TOP_CKHWEN_CON0_CLR,
	MT6351_PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN_HWEN,
	MT6351_PMIC_RG_BUCK_VPA_9M_CK_PDN_HWEN,
	MT6351_PMIC_RG_BUCK_VMODEM_9M_CK_PDN_HWEN,
	MT6351_PMIC_RG_BUCK_VCORE_9M_CK_PDN_HWEN,
	MT6351_PMIC_RG_BUCK_VGPU_9M_CK_PDN_HWEN,
	MT6351_PMIC_TOP_CKHWEN_CON1_RSV,
	MT6351_PMIC_TOP_CKHWEN_CON1_SET,
	MT6351_PMIC_TOP_CKHWEN_CON1_CLR,
	MT6351_PMIC_RG_BUCK_VS2_9M_CK_PDN_HWEN,
	MT6351_PMIC_RG_BUCK_VS1_9M_CK_PDN_HWEN,
	MT6351_PMIC_RG_BUCK_VMD1_9M_CK_PDN_HWEN,
	MT6351_PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN_HWEN,
	MT6351_PMIC_RG_AUD18M_CK_PDN_HWEN,
	MT6351_PMIC_RG_BUCK_AUD_1M_CK_PDN_HWEN,
	MT6351_PMIC_TOP_CKHWEN_CON2_RSV,
	MT6351_PMIC_TOP_CKHWEN_CON2_SET,
	MT6351_PMIC_TOP_CKHWEN_CON2_CLR,
	MT6351_PMIC_RG_PMU75K_CK_TST_DIS,
	MT6351_PMIC_RG_SMPS_CK_TST_DIS,
	MT6351_PMIC_RG_AUD26M_CK_TST_DIS,
	MT6351_PMIC_RG_RTC32K_CK_TST_DIS,
	MT6351_PMIC_RG_FG_CK_TST_DIS,
	MT6351_PMIC_RG_RTC26M_CK_TST_DIS,
	MT6351_PMIC_RG_VOW12M_CK_TST_DIS,
	MT6351_PMIC_TOP_CKTST_CON0_RSV,
	MT6351_PMIC_RG_BUCK_ANA_AUTO_OFF_DIS,
	MT6351_PMIC_RG_DRV_ISINK0_CK_TSTSEL,
	MT6351_PMIC_RG_DRV_ISINK1_CK_TSTSEL,
	MT6351_PMIC_RG_DRV_ISINK2_CK_TSTSEL,
	MT6351_PMIC_RG_DRV_ISINK3_CK_TSTSEL,
	MT6351_PMIC_RG_FQMTR_CK_TSTSEL,
	MT6351_PMIC_RG_RTCDET_CK_TSTSEL,
	MT6351_PMIC_RG_PMU75K_CK_TSTSEL,
	MT6351_PMIC_RG_SMPS_CK_TSTSEL,
	MT6351_PMIC_RG_AUD26M_CK_TSTSEL,
	MT6351_PMIC_RG_AUDIF_CK_TSTSEL,
	MT6351_PMIC_RG_AUD_CK_TSTSEL,
	MT6351_PMIC_RG_STRUP_75K_CK_TSTSEL,
	MT6351_PMIC_RG_RTC32K_CK_TSTSEL,
	MT6351_PMIC_RG_PCHR_TEST_CK_TSTSEL,
	MT6351_PMIC_RG_BGR_TEST_CK_TSTSEL,
	MT6351_PMIC_RG_FG_CK_TSTSEL,
	MT6351_PMIC_RG_FGADC_ANA_CK_TSTSEL,
	MT6351_PMIC_RG_RTC26M_CK_TSTSEL,
	MT6351_PMIC_RG_RTC_EOSC32_CK_TSTSEL,
	MT6351_PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL,
	MT6351_PMIC_RG_AUXADC_CK_TSTSEL,
	MT6351_PMIC_RG_AUXADC_SMPS_CK_TSTSEL,
	MT6351_PMIC_RG_AUXADC_26M_CK_TSTSEL,
	MT6351_PMIC_RG_VOW12M_CK_TSTSEL,
	MT6351_PMIC_RG_DRV_ISINK4_CK_TSTSEL,
	MT6351_PMIC_RG_DRV_ISINK5_CK_TSTSEL,
	MT6351_PMIC_RG_DRV_ISINK6_CK_TSTSEL,
	MT6351_PMIC_RG_DRV_ISINK7_CK_TSTSEL,
	MT6351_PMIC_RG_DRV_CHRIND_CK_TSTSEL,
	MT6351_PMIC_TOP_CKTST_CON2_RSV,
	MT6351_PMIC_RG_CLKSQ_EN_AUD,
	MT6351_PMIC_RG_CLKSQ_EN_FQR,
	MT6351_PMIC_RG_CLKSQ_EN_AUX_AP,
	MT6351_PMIC_RG_CLKSQ_EN_AUX_MD,
	MT6351_PMIC_RG_CLKSQ_EN_AUX_GPS,
	MT6351_PMIC_RG_CLKSQ_EN_AUX_RSV,
	MT6351_PMIC_RG_CLKSQ_EN_AUX_AP_MODE,
	MT6351_PMIC_RG_CLKSQ_EN_AUX_MD_MODE,
	MT6351_PMIC_RG_CLKSQ_IN_SEL_VA18,
	MT6351_PMIC_RG_CLKSQ_IN_SEL_VA18_SWCTRL,
	MT6351_PMIC_TOP_CLKSQ_RSV,
	MT6351_PMIC_DA_CLKSQ_EN_VA18,
	MT6351_PMIC_TOP_CLKSQ_SET,
	MT6351_PMIC_TOP_CLKSQ_CLR,
	MT6351_PMIC_RG_CLKSQ_RTC_EN,
	MT6351_PMIC_RG_CLKSQ_RTC_EN_HW_MODE,
	MT6351_PMIC_TOP_CLKSQ_RTC_RSV0,
	MT6351_PMIC_RG_ENBB_SEL,
	MT6351_PMIC_RG_XOSC_EN_SEL,
	MT6351_PMIC_TOP_CLKSQ_RTC_RSV1,
	MT6351_PMIC_DA_CLKSQ_EN_VDIG18,
	MT6351_PMIC_TOP_CLKSQ_RTC_SET,
	MT6351_PMIC_TOP_CLKSQ_RTC_CLR,
	MT6351_PMIC_OSC_75K_TRIM,
	MT6351_PMIC_RG_OSC_75K_TRIM_EN,
	MT6351_PMIC_RG_OSC_75K_TRIM_RATE,
	MT6351_PMIC_DA_OSC_75K_TRIM,
	MT6351_PMIC_RG_EFUSE_MAN_RST,
	MT6351_PMIC_RG_AUXADC_RST,
	MT6351_PMIC_RG_AUXADC_REG_RST,
	MT6351_PMIC_RG_AUDIO_RST,
	MT6351_PMIC_RG_ACCDET_RST,
	MT6351_PMIC_RG_BIF_RST,
	MT6351_PMIC_RG_DRIVER_RST,
	MT6351_PMIC_RG_FGADC_RST,
	MT6351_PMIC_RG_FQMTR_RST,
	MT6351_PMIC_RG_RTC_RST,
	MT6351_PMIC_RG_CHRWDT_RST,
	MT6351_PMIC_RG_ZCD_RST,
	MT6351_PMIC_RG_AUDNCP_RST,
	MT6351_PMIC_RG_CLK_TRIM_RST,
	MT6351_PMIC_RG_LDO_CALI_RST,
	MT6351_PMIC_TOP_RST_CON0_SET,
	MT6351_PMIC_TOP_RST_CON0_CLR,
	MT6351_PMIC_RG_STRUP_LONG_PRESS_RST,
	MT6351_PMIC_TOP_RST_CON1_RSV,
	MT6351_PMIC_TOP_RST_CON1_SET,
	MT6351_PMIC_TOP_RST_CON1_CLR,
	MT6351_PMIC_RG_CHR_LDO_DET_MODE,
	MT6351_PMIC_RG_CHR_LDO_DET_SW,
	MT6351_PMIC_RG_CHRWDT_FLAG_MODE,
	MT6351_PMIC_RG_CHRWDT_FLAG_SW,
	MT6351_PMIC_TOP_RST_CON2_RSV,
	MT6351_PMIC_RG_WDTRSTB_EN,
	MT6351_PMIC_RG_WDTRSTB_MODE,
	MT6351_PMIC_WDTRSTB_STATUS,
	MT6351_PMIC_WDTRSTB_STATUS_CLR,
	MT6351_PMIC_RG_WDTRSTB_FB_EN,
	MT6351_PMIC_RG_WDTRSTB_DEB,
	MT6351_PMIC_RG_HOMEKEY_RST_EN,
	MT6351_PMIC_RG_PWRKEY_RST_EN,
	MT6351_PMIC_RG_PWRRST_TMR_DIS,
	MT6351_PMIC_RG_PWRKEY_RST_TD,
	MT6351_PMIC_TOP_RST_MISC_RSV,
	MT6351_PMIC_TOP_RST_MISC_SET,
	MT6351_PMIC_TOP_RST_MISC_CLR,
	MT6351_PMIC_VPWRIN_RSTB_STATUS,
	MT6351_PMIC_DDLO_RSTB_STATUS,
	MT6351_PMIC_UVLO_RSTB_STATUS,
	MT6351_PMIC_RTC_DDLO_RSTB_STATUS,
	MT6351_PMIC_CHRWDT_REG_RSTB_STATUS,
	MT6351_PMIC_CHRDET_REG_RSTB_STATUS,
	MT6351_PMIC_TOP_RST_STATUS_RSV,
	MT6351_PMIC_TOP_RST_STATUS_SET,
	MT6351_PMIC_TOP_RST_STATUS_CLR,
	MT6351_PMIC_RG_INT_EN_PWRKEY,
	MT6351_PMIC_RG_INT_EN_HOMEKEY,
	MT6351_PMIC_RG_INT_EN_PWRKEY_R,
	MT6351_PMIC_RG_INT_EN_HOMEKEY_R,
	MT6351_PMIC_RG_INT_EN_THR_H,
	MT6351_PMIC_RG_INT_EN_THR_L,
	MT6351_PMIC_RG_INT_EN_BAT_H,
	MT6351_PMIC_RG_INT_EN_BAT_L,
	MT6351_PMIC_RG_INT_EN_RTC,
	MT6351_PMIC_RG_INT_EN_AUDIO,
	MT6351_PMIC_RG_INT_EN_MAD,
	MT6351_PMIC_RG_INT_EN_ACCDET,
	MT6351_PMIC_RG_INT_EN_ACCDET_EINT,
	MT6351_PMIC_RG_INT_EN_ACCDET_NEGV,
	MT6351_PMIC_RG_INT_EN_NI_LBAT_INT,
	MT6351_PMIC_INT_CON0_SET,
	MT6351_PMIC_INT_CON0_CLR,
	MT6351_PMIC_RG_INT_EN_VCORE_OC,
	MT6351_PMIC_RG_INT_EN_VGPU_OC,
	MT6351_PMIC_RG_INT_EN_VSRAM_MD_OC,
	MT6351_PMIC_RG_INT_EN_VMODEM_OC,
	MT6351_PMIC_RG_INT_EN_VM1_OC,
	MT6351_PMIC_RG_INT_EN_VS1_OC,
	MT6351_PMIC_RG_INT_EN_VS2_OC,
	MT6351_PMIC_RG_INT_EN_VPA_OC,
	MT6351_PMIC_RG_INT_EN_VCORE_PREOC,
	MT6351_PMIC_RG_INT_EN_VGPU_PREOC,
	MT6351_PMIC_RG_INT_EN_VSRAM_MD_PREOC,
	MT6351_PMIC_RG_INT_EN_VMODEM_PREOC,
	MT6351_PMIC_RG_INT_EN_VM1_PREOC,
	MT6351_PMIC_RG_INT_EN_VS1_PREOC,
	MT6351_PMIC_RG_INT_EN_VS2_PREOC,
	MT6351_PMIC_RG_INT_EN_LDO_OC,
	MT6351_PMIC_INT_CON1_SET,
	MT6351_PMIC_INT_CON1_CLR,
	MT6351_PMIC_RG_INT_EN_JEITA_HOT,
	MT6351_PMIC_RG_INT_EN_JEITA_WARM,
	MT6351_PMIC_RG_INT_EN_JEITA_COOL,
	MT6351_PMIC_RG_INT_EN_JEITA_COLD,
	MT6351_PMIC_RG_INT_EN_AUXADC_IMP,
	MT6351_PMIC_RG_INT_EN_NAG_C_DLTV,
	MT6351_PMIC_RG_INT_EN_OV,
	MT6351_PMIC_RG_INT_EN_BVALID_DET,
	MT6351_PMIC_RG_INT_EN_RGS_BATON_HV,
	MT6351_PMIC_RG_INT_EN_VBATON_UNDET,
	MT6351_PMIC_RG_INT_EN_WATCHDOG,
	MT6351_PMIC_RG_INT_EN_PCHR_CM_VDEC,
	MT6351_PMIC_RG_INT_EN_CHRDET,
	MT6351_PMIC_RG_INT_EN_PCHR_CM_VINC,
	MT6351_PMIC_INT_CON2_SET,
	MT6351_PMIC_INT_CON2_CLR,
	MT6351_PMIC_RG_INT_EN_FG_BAT_H,
	MT6351_PMIC_RG_INT_EN_FG_BAT_L,
	MT6351_PMIC_RG_INT_EN_FG_CUR_H,
	MT6351_PMIC_RG_INT_EN_FG_CUR_L,
	MT6351_PMIC_RG_INT_EN_FG_ZCV,
	MT6351_PMIC_INT_CON3_SET,
	MT6351_PMIC_INT_CON3_CLR,
	MT6351_PMIC_POLARITY,
	MT6351_PMIC_RG_HOMEKEY_INT_SEL,
	MT6351_PMIC_RG_PWRKEY_INT_SEL,
	MT6351_PMIC_RG_CHRDET_INT_SEL,
	MT6351_PMIC_RG_PCHR_CM_VINC_POLARITY_RSV,
	MT6351_PMIC_RG_PCHR_CM_VDEC_POLARITY_RSV,
	MT6351_PMIC_INT_MISC_CON_SET,
	MT6351_PMIC_INT_MISC_CON_CLR,
	MT6351_PMIC_RG_INT_STATUS_PWRKEY,
	MT6351_PMIC_RG_INT_STATUS_HOMEKEY,
	MT6351_PMIC_RG_INT_STATUS_PWRKEY_R,
	MT6351_PMIC_RG_INT_STATUS_HOMEKEY_R,
	MT6351_PMIC_RG_INT_STATUS_THR_H,
	MT6351_PMIC_RG_INT_STATUS_THR_L,
	MT6351_PMIC_RG_INT_STATUS_BAT_H,
	MT6351_PMIC_RG_INT_STATUS_BAT_L,
	MT6351_PMIC_RG_INT_STATUS_RTC,
	MT6351_PMIC_RG_INT_STATUS_AUDIO,
	MT6351_PMIC_RG_INT_STATUS_MAD,
	MT6351_PMIC_RG_INT_STATUS_ACCDET,
	MT6351_PMIC_RG_INT_STATUS_ACCDET_EINT,
	MT6351_PMIC_RG_INT_STATUS_ACCDET_NEGV,
	MT6351_PMIC_RG_INT_STATUS_NI_LBAT_INT,
	MT6351_PMIC_RG_INT_STATUS_VCORE_OC,
	MT6351_PMIC_RG_INT_STATUS_VGPU_OC,
	MT6351_PMIC_RG_INT_STATUS_VSRAM_MD_OC,
	MT6351_PMIC_RG_INT_STATUS_VMODEM_OC,
	MT6351_PMIC_RG_INT_STATUS_VM1_OC,
	MT6351_PMIC_RG_INT_STATUS_VS1_OC,
	MT6351_PMIC_RG_INT_STATUS_VS2_OC,
	MT6351_PMIC_RG_INT_STATUS_VPA_OC,
	MT6351_PMIC_RG_INT_STATUS_VCORE_PREOC,
	MT6351_PMIC_RG_INT_STATUS_VGPU_PREOC,
	MT6351_PMIC_RG_INT_STATUS_VSRAM_MD_PREOC,
	MT6351_PMIC_RG_INT_STATUS_VMODEM_PREOC,
	MT6351_PMIC_RG_INT_STATUS_VM1_PREOC,
	MT6351_PMIC_RG_INT_STATUS_VS1_PREOC,
	MT6351_PMIC_RG_INT_STATUS_VS2_PREOC,
	MT6351_PMIC_RG_INT_STATUS_LDO_OC,
	MT6351_PMIC_RG_INT_STATUS_JEITA_HOT,
	MT6351_PMIC_RG_INT_STATUS_JEITA_WARM,
	MT6351_PMIC_RG_INT_STATUS_JEITA_COOL,
	MT6351_PMIC_RG_INT_STATUS_JEITA_COLD,
	MT6351_PMIC_RG_INT_STATUS_AUXADC_IMP,
	MT6351_PMIC_RG_INT_STATUS_NAG_C_DLTV,
	MT6351_PMIC_RG_INT_STATUS_OV,
	MT6351_PMIC_RG_INT_STATUS_BVALID_DET,
	MT6351_PMIC_RG_INT_STATUS_RGS_BATON_HV,
	MT6351_PMIC_RG_INT_STATUS_VBATON_UNDET,
	MT6351_PMIC_RG_INT_STATUS_WATCHDOG,
	MT6351_PMIC_RG_INT_STATUS_PCHR_CM_VDEC,
	MT6351_PMIC_RG_INT_STATUS_CHRDET,
	MT6351_PMIC_RG_INT_STATUS_PCHR_CM_VINC,
	MT6351_PMIC_RG_INT_STATUS_FG_BAT_H,
	MT6351_PMIC_RG_INT_STATUS_FG_BAT_L,
	MT6351_PMIC_RG_INT_STATUS_FG_CUR_H,
	MT6351_PMIC_RG_INT_STATUS_FG_CUR_L,
	MT6351_PMIC_RG_INT_STATUS_FG_ZCV,
	MT6351_PMIC_OC_GEAR_LDO,
	MT6351_PMIC_FQMTR_TCKSEL,
	MT6351_PMIC_FQMTR_BUSY,
	MT6351_PMIC_FQMTR_EN,
	MT6351_PMIC_FQMTR_WINSET,
	MT6351_PMIC_FQMTR_DATA,
	MT6351_PMIC_RG_SLP_RW_EN,
	MT6351_PMIC_RG_SPI_RSV,
	MT6351_PMIC_DEW_DIO_EN,
	MT6351_PMIC_DEW_READ_TEST,
	MT6351_PMIC_DEW_WRITE_TEST,
	MT6351_PMIC_DEW_CRC_SWRST,
	MT6351_PMIC_DEW_CRC_EN,
	MT6351_PMIC_DEW_CRC_VAL,
	MT6351_PMIC_DEW_DBG_MON_SEL,
	MT6351_PMIC_DEW_CIPHER_KEY_SEL,
	MT6351_PMIC_DEW_CIPHER_IV_SEL,
	MT6351_PMIC_DEW_CIPHER_EN,
	MT6351_PMIC_DEW_CIPHER_RDY,
	MT6351_PMIC_DEW_CIPHER_MODE,
	MT6351_PMIC_DEW_CIPHER_SWRST,
	MT6351_PMIC_DEW_RDDMY_NO,
	MT6351_PMIC_INT_TYPE_CON0,
	MT6351_PMIC_INT_TYPE_CON0_SET,
	MT6351_PMIC_INT_TYPE_CON0_CLR,
	MT6351_PMIC_INT_TYPE_CON1,
	MT6351_PMIC_INT_TYPE_CON1_SET,
	MT6351_PMIC_INT_TYPE_CON1_CLR,
	MT6351_PMIC_INT_TYPE_CON2,
	MT6351_PMIC_INT_TYPE_CON2_SET,
	MT6351_PMIC_INT_TYPE_CON2_CLR,
	MT6351_PMIC_INT_TYPE_CON3,
	MT6351_PMIC_INT_TYPE_CON3_SET,
	MT6351_PMIC_INT_TYPE_CON3_CLR,
	MT6351_PMIC_CPU_INT_STA,
	MT6351_PMIC_MD32_INT_STA,
	MT6351_PMIC_BUCK_LDO_FT_TESTMODE_EN,
	MT6351_PMIC_BUCK_ALL_CON0_RSV1,
	MT6351_PMIC_BUCK_ALL_CON0_RSV0,
	MT6351_PMIC_BUCK_BUCK_RSV,
	MT6351_PMIC_BUCK_BUCK_OSC_SEL_SRCLKEN_SEL,
	MT6351_PMIC_BUCK_BUCK_R2R_PDN_SRCLKEN_SEL,
	MT6351_PMIC_BUCK_BUCK_VSLEEP_SRCLKEN_SEL,
	MT6351_PMIC_BUCK_ALL_CON2_RSV0,
	MT6351_PMIC_BUCK_VSLEEP_SRC0,
	MT6351_PMIC_BUCK_VSLEEP_SRC1,
	MT6351_PMIC_BUCK_R2R_SRC0,
	MT6351_PMIC_BUCK_R2R_SRC1,
	MT6351_PMIC_BUCK_BUCK_OSC_SEL_SRC0,
	MT6351_PMIC_BUCK_SRCLKEN_DLY_SRC1,
	MT6351_PMIC_BUCK_VSRAM_PROC_BIN2GRAY_MAP_ENB,
	MT6351_PMIC_BUCK_VS2_BIN2GRAY_MAP_ENB,
	MT6351_PMIC_BUCK_VS1_BIN2GRAY_MAP_ENB,
	MT6351_PMIC_BUCK_VSRAM_MD_BIN2GRAY_MAP_ENB,
	MT6351_PMIC_BUCK_VMD1_BIN2GRAY_MAP_ENB,
	MT6351_PMIC_BUCK_VPA_BIN2GRAY_MAP_ENB,
	MT6351_PMIC_BUCK_VMODEM_BIN2GRAY_MAP_ENB,
	MT6351_PMIC_BUCK_VGPU_BIN2GRAY_MAP_ENB,
	MT6351_PMIC_BUCK_VCORE_BIN2GRAY_MAP_ENB,
	MT6351_PMIC_BUCK_VPA_VOSEL_DLC011,
	MT6351_PMIC_BUCK_VPA_VOSEL_DLC111,
	MT6351_PMIC_BUCK_VPA_DLC_MAP_EN,
	MT6351_PMIC_BUCK_VPA_VOSEL_DLC001,
	MT6351_PMIC_BUCK_VPA_DLC,
	MT6351_PMIC_DA_NI_VPA_DLC,
	MT6351_PMIC_BUCK_VPA_DVS_TRANS_TD,
	MT6351_PMIC_BUCK_VPA_DVS_TRANS_CTRL,
	MT6351_PMIC_BUCK_VPA_DVS_TRANS_ONCE,
	MT6351_PMIC_DA_NI_VPA_DVS_TRANST,
	MT6351_PMIC_BUCK_VPA_DIG0_RSV5,
	MT6351_PMIC_BUCK_VPA_DIG1_RSV5,
	MT6351_PMIC_BUCK_VCORE_VOSEL_AUD,
	MT6351_PMIC_BUCK_VCORE_DVFS_DONE,
	MT6351_PMIC_BUCK_VCORE_DVFS_DONE_SW,
	MT6351_PMIC_BUCK_VCORE_DVFS_DONE_STA,
	MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_AUD,
	MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE,
	MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_SW,
	MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_STA,
	MT6351_PMIC_BUCK_VCORE_OC_STATUS,
	MT6351_PMIC_BUCK_VGPU_OC_STATUS,
	MT6351_PMIC_BUCK_VMODEM_OC_STATUS,
	MT6351_PMIC_BUCK_VMD1_OC_STATUS,
	MT6351_PMIC_BUCK_VSRAM_MD_OC_STATUS,
	MT6351_PMIC_BUCK_VS1_OC_STATUS,
	MT6351_PMIC_BUCK_VS2_OC_STATUS,
	MT6351_PMIC_BUCK_VPA_OC_STATUS,
	MT6351_PMIC_BUCK_VCORE_OC_INT_EN,
	MT6351_PMIC_BUCK_VGPU_OC_INT_EN,
	MT6351_PMIC_BUCK_VMODEM_OC_INT_EN,
	MT6351_PMIC_BUCK_VMD1_OC_INT_EN,
	MT6351_PMIC_BUCK_VSRAM_MD_OC_INT_EN,
	MT6351_PMIC_BUCK_VS1_OC_INT_EN,
	MT6351_PMIC_BUCK_VS2_OC_INT_EN,
	MT6351_PMIC_BUCK_VPA_OC_INT_EN,
	MT6351_PMIC_BUCK_VCORE_EN_OC_SDN_SEL,
	MT6351_PMIC_BUCK_VGPU_EN_OC_SDN_SEL,
	MT6351_PMIC_BUCK_VMODEM_EN_OC_SDN_SEL,
	MT6351_PMIC_BUCK_VMD1_EN_OC_SDN_SEL,
	MT6351_PMIC_BUCK_VSRAM_MD_EN_OC_SDN_SEL,
	MT6351_PMIC_BUCK_VS1_EN_OC_SDN_SEL,
	MT6351_PMIC_BUCK_VS2_EN_OC_SDN_SEL,
	MT6351_PMIC_BUCK_VPA_EN_OC_SDN_SEL,
	MT6351_PMIC_BUCK_VCORE_OC_FLAG_CLR,
	MT6351_PMIC_BUCK_VGPU_OC_FLAG_CLR,
	MT6351_PMIC_BUCK_VMODEM_OC_FLAG_CLR,
	MT6351_PMIC_BUCK_VMD1_OC_FLAG_CLR,
	MT6351_PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR,
	MT6351_PMIC_BUCK_VS1_OC_FLAG_CLR,
	MT6351_PMIC_BUCK_VS2_OC_FLAG_CLR,
	MT6351_PMIC_BUCK_VPA_OC_FLAG_CLR,
	MT6351_PMIC_BUCK_VCORE_OC_FLAG_CLR_SEL,
	MT6351_PMIC_BUCK_VGPU_OC_FLAG_CLR_SEL,
	MT6351_PMIC_BUCK_VMODEM_OC_FLAG_CLR_SEL,
	MT6351_PMIC_BUCK_VMD1_OC_FLAG_CLR_SEL,
	MT6351_PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR_SEL,
	MT6351_PMIC_BUCK_VS1_OC_FLAG_CLR_SEL,
	MT6351_PMIC_BUCK_VS2_OC_FLAG_CLR_SEL,
	MT6351_PMIC_BUCK_VPA_OC_FLAG_CLR_SEL,
	MT6351_PMIC_BUCK_VCORE_OC_DEG_EN,
	MT6351_PMIC_BUCK_VCORE_OC_WND,
	MT6351_PMIC_BUCK_VCORE_OC_THD,
	MT6351_PMIC_BUCK_VGPU_OC_DEG_EN,
	MT6351_PMIC_BUCK_VGPU_OC_WND,
	MT6351_PMIC_BUCK_VGPU_OC_THD,
	MT6351_PMIC_BUCK_VMODEM_OC_DEG_EN,
	MT6351_PMIC_BUCK_VMODEM_OC_WND,
	MT6351_PMIC_BUCK_VMODEM_OC_THD,
	MT6351_PMIC_BUCK_VMD1_OC_DEG_EN,
	MT6351_PMIC_BUCK_VMD1_OC_WND,
	MT6351_PMIC_BUCK_VMD1_OC_THD,
	MT6351_PMIC_BUCK_VSRAM_MD_OC_DEG_EN,
	MT6351_PMIC_BUCK_VSRAM_MD_OC_WND,
	MT6351_PMIC_BUCK_VSRAM_MD_OC_THD,
	MT6351_PMIC_BUCK_VS1_OC_DEG_EN,
	MT6351_PMIC_BUCK_VS1_OC_WND,
	MT6351_PMIC_BUCK_VS1_OC_THD,
	MT6351_PMIC_BUCK_VS2_OC_DEG_EN,
	MT6351_PMIC_BUCK_VS2_OC_WND,
	MT6351_PMIC_BUCK_VS2_OC_THD,
	MT6351_PMIC_BUCK_VPA_OC_DEG_EN,
	MT6351_PMIC_BUCK_VPA_OC_WND,
	MT6351_PMIC_BUCK_VPA_OC_THD,
	MT6351_PMIC_RG_SMPS_TESTMODE_B,
	MT6351_PMIC_RG_VPA_BURSTH,
	MT6351_PMIC_RG_VPA_BURSTL,
	MT6351_PMIC_RG_VPA_TRIMH,
	MT6351_PMIC_RG_VPA_TRIML,
	MT6351_PMIC_RG_VPA_TRIM_REF,
	MT6351_PMIC_RG_VCORE_TRIMH,
	MT6351_PMIC_RG_VCORE_TRIML,
	MT6351_PMIC_RG_VCORE_VSLEEP,
	MT6351_PMIC_RG_VGPU_TRIMH,
	MT6351_PMIC_RG_VGPU_TRIML,
	MT6351_PMIC_RG_VGPU_VSLEEP,
	MT6351_PMIC_RG_VSRAM_MD_TRIMH,
	MT6351_PMIC_RG_VSRAM_MD_TRIML,
	MT6351_PMIC_RG_VSRAM_MD_VSLEEP,
	MT6351_PMIC_RG_VMODEM_TRIMH,
	MT6351_PMIC_RG_VMODEM_TRIML,
	MT6351_PMIC_RG_VMODEM_VSLEEP,
	MT6351_PMIC_RG_VMD1_TRIMH,
	MT6351_PMIC_RG_VMD1_TRIML,
	MT6351_PMIC_RG_VMD1_VSLEEP,
	MT6351_PMIC_RG_VS1_TRIMH,
	MT6351_PMIC_RG_VS1_TRIML,
	MT6351_PMIC_RG_VS1_VSLEEP,
	MT6351_PMIC_RG_VS2_TRIML,
	MT6351_PMIC_RG_VS2_VSLEEP,
	MT6351_PMIC_RG_VSRAM_PROCESSOR_TRIMH,
	MT6351_PMIC_RG_VSRAM_PROCESSOR_TRIML,
	MT6351_PMIC_RG_VSRAM_PROCESSOR_VSLEEP,
	MT6351_PMIC_RG_VCORE_VSLEEP_SEL,
	MT6351_PMIC_RG_VGPU_VSLEEP_SEL,
	MT6351_PMIC_RG_VSRAM_MD_VSLEEP_SEL,
	MT6351_PMIC_RG_VMODEM_VSLEEP_SEL,
	MT6351_PMIC_RG_VMD1_VSLEEP_SEL,
	MT6351_PMIC_RG_VS1_VSLEEP_SEL,
	MT6351_PMIC_RG_VS2_VSLEEP_SEL,
	MT6351_PMIC_RG_VSRAM_PROCESSOR_VSLEEP_SEL,
	MT6351_PMIC_RG_VOUTDET_EN,
	MT6351_PMIC_RG_VS2_TRIMH,
	MT6351_PMIC_RG_VCORE_MODESET,
	MT6351_PMIC_RG_VCORE_NDIS_EN,
	MT6351_PMIC_RG_VCORE_VRF18_SSTART_EN,
	MT6351_PMIC_RG_VCORE_AUTO_MODE,
	MT6351_PMIC_RG_VCORE_RZSEL0,
	MT6351_PMIC_RG_VCORE_RZSEL1,
	MT6351_PMIC_RG_VCORE_CCSEL0,
	MT6351_PMIC_RG_VCORE_CCSEL1,
	MT6351_PMIC_RG_VCORE_CSL,
	MT6351_PMIC_RG_VCORE_SLP,
	MT6351_PMIC_RG_VCORE_ADRC_FEN,
	MT6351_PMIC_RG_VCORE_VCCAP_CLAMP_FEN,
	MT6351_PMIC_RG_VCORE_VC_CLAMP_FEN,
	MT6351_PMIC_RG_VCORE_PREOC_SEL,
	MT6351_PMIC_RG_VCORE_PFMOC,
	MT6351_PMIC_RG_VCORE_CSR,
	MT6351_PMIC_RG_VCORE_ZXOS_TRIM,
	MT6351_PMIC_RG_VCORE_CSM_N,
	MT6351_PMIC_RG_VCORE_CSM_P,
	MT6351_PMIC_RG_VCORE_PFMSR_EH,
	MT6351_PMIC_RG_VCORE_NLIM_GATING,
	MT6351_PMIC_RG_VCORE_PWRSR_EH,
	MT6351_PMIC_RG_VCORE_HS_VTHDET,
	MT6351_PMIC_RG_VCORE_PG_GATING,
	MT6351_PMIC_RG_VCORE_HS_ONSPEED_EH,
	MT6351_PMIC_RG_VCORE_NLIM_TRIMMING,
	MT6351_PMIC_RG_VCORE_DLC,
	MT6351_PMIC_RG_VCORE_DLC_N,
	MT6351_PMIC_RG_VCORE_PFM_RIP,
	MT6351_PMIC_RG_VCORE_TRAN_BST,
	MT6351_PMIC_RG_VCORE_DTS_ENB,
	MT6351_PMIC_RG_VCORE_MIN_OFF,
	MT6351_PMIC_RG_VCORE_1P35UP_SEL_EN,
	MT6351_PMIC_RG_VCORE_DLC_AUTO_MODE,
	MT6351_PMIC_RG_VCORE_DLC_SEL,
	MT6351_PMIC_RG_VCORE_SRC_AUTO_MODE,
	MT6351_PMIC_RG_VCORE_UGP_SR,
	MT6351_PMIC_RG_VCORE_LGN_SR,
	MT6351_PMIC_RG_VCORE_UGP_SR_PFM,
	MT6351_PMIC_RG_VCORE_LGN_SR_PFM,
	MT6351_PMIC_RG_VCORE_UGD_VTHSEL,
	MT6351_PMIC_RG_VCORE_FNLX_SNS,
	MT6351_PMIC_RG_VCORE_VDIFF_ENLOWIQ,
	MT6351_PMIC_RG_VCORE_PFMOC_FWUPOFF,
	MT6351_PMIC_RG_VCORE_PWFMOC_FWUPOFF,
	MT6351_PMIC_RG_VCORE_CP_FWUPOFF,
	MT6351_PMIC_RG_VCORE_ZX_GATING,
	MT6351_PMIC_RG_VCORE_RSV,
	MT6351_PMIC_RG_VCORE_PREOC_TRIMMING,
	MT6351_PMIC_RG_VCORE_AZC_EN,
	MT6351_PMIC_RG_VCORE_AZC_DELAY,
	MT6351_PMIC_RG_VCORE_AZC_HOLD_ENB,
	MT6351_PMIC_RGS_QI_VCORE_OC_STATUS,
	MT6351_PMIC_RGS_QI_VCORE_DIG_MON,
	MT6351_PMIC_RGS_VCORE_ENPWM_STATUS,
	MT6351_PMIC_RGS_QI_VCORE_PREOC,
	MT6351_PMIC_RG_VGPU_MODESET,
	MT6351_PMIC_RG_VGPU_NDIS_EN,
	MT6351_PMIC_RG_VGPU_VRF18_SSTART_EN,
	MT6351_PMIC_RG_VGPU_AUTO_MODE,
	MT6351_PMIC_RG_VGPU_RZSEL0,
	MT6351_PMIC_RG_VGPU_RZSEL1,
	MT6351_PMIC_RG_VGPU_CCSEL0,
	MT6351_PMIC_RG_VGPU_CCSEL1,
	MT6351_PMIC_RG_VGPU_CSL,
	MT6351_PMIC_RG_VGPU_SLP,
	MT6351_PMIC_RG_VGPU_ADRC_FEN,
	MT6351_PMIC_RG_VGPU_VCCAP_CLAMP_FEN,
	MT6351_PMIC_RG_VGPU_VC_CLAMP_FEN,
	MT6351_PMIC_RG_VGPU_PREOC_SEL,
	MT6351_PMIC_RG_VGPU_PFMOC,
	MT6351_PMIC_RG_VGPU_CSR,
	MT6351_PMIC_RG_VGPU_ZXOS_TRIM,
	MT6351_PMIC_RG_VGPU_CSM_N,
	MT6351_PMIC_RG_VGPU_CSM_P,
	MT6351_PMIC_RG_VGPU_PFMSR_EH,
	MT6351_PMIC_RG_VGPU_NLIM_GATING,
	MT6351_PMIC_RG_VGPU_PWRSR_EH,
	MT6351_PMIC_RG_VGPU_HS_VTHDET,
	MT6351_PMIC_RG_VGPU_PG_GATING,
	MT6351_PMIC_RG_VGPU_HS_ONSPEED_EH,
	MT6351_PMIC_RG_VGPU_NLIM_TRIMMING,
	MT6351_PMIC_RG_VGPU_DLC,
	MT6351_PMIC_RG_VGPU_DLC_N,
	MT6351_PMIC_RG_VGPU_PFM_RIP,
	MT6351_PMIC_RG_VGPU_TRAN_BST,
	MT6351_PMIC_RG_VGPU_DTS_ENB,
	MT6351_PMIC_RG_VGPU_MIN_OFF,
	MT6351_PMIC_RG_VGPU_1P35UP_SEL_EN,
	MT6351_PMIC_RG_VGPU_DLC_AUTO_MODE,
	MT6351_PMIC_RG_VGPU_DLC_SEL,
	MT6351_PMIC_RG_VGPU_SRC_AUTO_MODE,
	MT6351_PMIC_RG_VGPU_UGP_SR,
	MT6351_PMIC_RG_VGPU_LGN_SR,
	MT6351_PMIC_RG_VGPU_UGP_SR_PFM,
	MT6351_PMIC_RG_VGPU_LGN_SR_PFM,
	MT6351_PMIC_RG_VGPU_UGD_VTHSEL,
	MT6351_PMIC_RG_VGPU_FNLX_SNS,
	MT6351_PMIC_RG_VGPU_VDIFF_ENLOWIQ,
	MT6351_PMIC_RG_VGPU_PFMOC_FWUPOFF,
	MT6351_PMIC_RG_VGPU_PWFMOC_FWUPOFF,
	MT6351_PMIC_RG_VGPU_CP_FWUPOFF,
	MT6351_PMIC_RG_VGPU_ZX_GATING,
	MT6351_PMIC_RG_VGPU_RSV,
	MT6351_PMIC_RG_VGPU_PREOC_TRIMMING,
	MT6351_PMIC_RG_VGPU_AZC_EN,
	MT6351_PMIC_RG_VGPU_AZC_DELAY,
	MT6351_PMIC_RG_VGPU_AZC_HOLD_ENB,
	MT6351_PMIC_RGS_QI_VGPU_OC_STATUS,
	MT6351_PMIC_RGS_QI_VGPU_DIG_MON,
	MT6351_PMIC_RGS_VGPU_ENPWM_STATUS,
	MT6351_PMIC_RGS_QI_VGPU_PREOC,
	MT6351_PMIC_RG_VSRAM_MD_MODESET,
	MT6351_PMIC_RG_VSRAM_MD_NDIS_EN,
	MT6351_PMIC_RG_VSRAM_MD_VRF18_SSTART_EN,
	MT6351_PMIC_RG_VSRAM_MD_AUTO_MODE,
	MT6351_PMIC_RG_VSRAM_MD_RZSEL0,
	MT6351_PMIC_RG_VSRAM_MD_RZSEL1,
	MT6351_PMIC_RG_VSRAM_MD_CCSEL0,
	MT6351_PMIC_RG_VSRAM_MD_CCSEL1,
	MT6351_PMIC_RG_VSRAM_MD_CSL,
	MT6351_PMIC_RG_VSRAM_MD_SLP,
	MT6351_PMIC_RG_VSRAM_MD_ADRC_FEN,
	MT6351_PMIC_RG_VSRAM_MD_VCCAP_CLAMP_FEN,
	MT6351_PMIC_RG_VSRAM_MD_VC_CLAMP_FEN,
	MT6351_PMIC_RG_VSRAM_MD_PFMOC,
	MT6351_PMIC_RG_VSRAM_MD_CSR,
	MT6351_PMIC_RG_VSRAM_MD_ZXOS_TRIM,
	MT6351_PMIC_RG_VSRAM_MD_PFMSR_EH,
	MT6351_PMIC_RG_VSRAM_MD_NLIM_GATING,
	MT6351_PMIC_RG_VSRAM_MD_PWRSR_EH,
	MT6351_PMIC_RG_VSRAM_MD_HS_VTHDET,
	MT6351_PMIC_RG_VSRAM_MD_PG_GATING,
	MT6351_PMIC_RG_VSRAM_MD_HS_ONSPEED_EH,
	MT6351_PMIC_RG_VSRAM_MD_NLIM_TRIMMING,
	MT6351_PMIC_RG_VSRAM_MD_DLC,
	MT6351_PMIC_RG_VSRAM_MD_DLC_N,
	MT6351_PMIC_RG_VSRAM_MD_PFM_RIP,
	MT6351_PMIC_RG_VSRAM_MD_TRAN_BST,
	MT6351_PMIC_RG_VSRAM_MD_DTS_ENB,
	MT6351_PMIC_RG_VSRAM_MD_MIN_OFF,
	MT6351_PMIC_RG_VSRAM_MD_1P35UP_SEL_EN,
	MT6351_PMIC_RG_VSRAM_MD_DLC_AUTO_MODE,
	MT6351_PMIC_RG_VSRAM_MD_DLC_SEL,
	MT6351_PMIC_RG_VSRAM_MD_SRC_AUTO_MODE,
	MT6351_PMIC_RG_VSRAM_MD_UGP_SR,
	MT6351_PMIC_RG_VSRAM_MD_LGN_SR,
	MT6351_PMIC_RG_VSRAM_MD_UGP_SR_PFM,
	MT6351_PMIC_RG_VSRAM_MD_LGN_SR_PFM,
	MT6351_PMIC_RG_VSRAM_MD_UGD_VTHSEL,
	MT6351_PMIC_RG_VSRAM_MD_FNLX_SNS,
	MT6351_PMIC_RG_VSRAM_MD_VDIFF_ENLOWIQ,
	MT6351_PMIC_RG_VSRAM_MD_PFMOC_FWUPOFF,
	MT6351_PMIC_RG_VSRAM_MD_PWFMOC_FWUPOFF,
	MT6351_PMIC_RG_VSRAM_MD_CP_FWUPOFF,
	MT6351_PMIC_RG_VSRAM_MD_ZX_GATING,
	MT6351_PMIC_RG_VSRAM_MD_RSV,
	MT6351_PMIC_RG_VSRAM_MD_AZC_EN,
	MT6351_PMIC_RG_VSRAM_MD_AZC_DELAY,
	MT6351_PMIC_RG_VSRAM_MD_AZC_HOLD_ENB,
	MT6351_PMIC_RGS_QI_VSRAM_MD_OC_STATUS,
	MT6351_PMIC_RGS_QI_VSRAM_MD_DIG_MON,
	MT6351_PMIC_RGS_VSRAM_MD_ENPWM_STATUS,
	MT6351_PMIC_RG_VMODEM_MODESET,
	MT6351_PMIC_RG_VMODEM_NDIS_EN,
	MT6351_PMIC_RG_VMODEM_VRF18_SSTART_EN,
	MT6351_PMIC_RG_VMODEM_AUTO_MODE,
	MT6351_PMIC_RG_VMODEM_RZSEL0,
	MT6351_PMIC_RG_VMODEM_RZSEL1,
	MT6351_PMIC_RG_VMODEM_CCSEL0,
	MT6351_PMIC_RG_VMODEM_CCSEL1,
	MT6351_PMIC_RG_VMODEM_CSL,
	MT6351_PMIC_RG_VMODEM_SLP,
	MT6351_PMIC_RG_VMODEM_ADRC_FEN,
	MT6351_PMIC_RG_VMODEM_VCCAP_CLAMP_FEN,
	MT6351_PMIC_RG_VMODEM_VC_CLAMP_FEN,
	MT6351_PMIC_RG_VMODEM_PFMOC,
	MT6351_PMIC_RG_VMODEM_CSR,
	MT6351_PMIC_RG_VMODEM_ZXOS_TRIM,
	MT6351_PMIC_RG_VMODEM_PFMSR_EH,
	MT6351_PMIC_RG_VMODEM_NLIM_GATING,
	MT6351_PMIC_RG_VMODEM_PWRSR_EH,
	MT6351_PMIC_RG_VMODEM_HS_VTHDET,
	MT6351_PMIC_RG_VMODEM_PG_GATING,
	MT6351_PMIC_RG_VMODEM_HS_ONSPEED_EH,
	MT6351_PMIC_RG_VMODEM_NLIM_TRIMMING,
	MT6351_PMIC_RG_VMODEM_DLC,
	MT6351_PMIC_RG_VMODEM_DLC_N,
	MT6351_PMIC_RG_VMODEM_PFM_RIP,
	MT6351_PMIC_RG_VMODEM_TRAN_BST,
	MT6351_PMIC_RG_VMODEM_DTS_ENB,
	MT6351_PMIC_RG_VMODEM_MIN_OFF,
	MT6351_PMIC_RG_VMODEM_1P35UP_SEL_EN,
	MT6351_PMIC_RG_VMODEM_DLC_AUTO_MODE,
	MT6351_PMIC_RG_VMODEM_DLC_SEL,
	MT6351_PMIC_RG_VMODEM_SRC_AUTO_MODE,
	MT6351_PMIC_RG_VMODEM_UGP_SR,
	MT6351_PMIC_RG_VMODEM_LGN_SR,
	MT6351_PMIC_RG_VMODEM_UGP_SR_PFM,
	MT6351_PMIC_RG_VMODEM_LGN_SR_PFM,
	MT6351_PMIC_RG_VMODEM_UGD_VTHSEL,
	MT6351_PMIC_RG_VMODEM_FNLX_SNS,
	MT6351_PMIC_RG_VMODEM_VDIFF_ENLOWIQ,
	MT6351_PMIC_RG_VMODEM_PFMOC_FWUPOFF,
	MT6351_PMIC_RG_VMODEM_PWFMOC_FWUPOFF,
	MT6351_PMIC_RG_VMODEM_CP_FWUPOFF,
	MT6351_PMIC_RG_VMODEM_ZX_GATING,
	MT6351_PMIC_RG_VMODEM_RSV,
	MT6351_PMIC_RG_VMODEM_AZC_EN,
	MT6351_PMIC_RG_VMODEM_AZC_DELAY,
	MT6351_PMIC_RG_VMODEM_AZC_HOLD_ENB,
	MT6351_PMIC_RGS_QI_VMODEM_OC_STATUS,
	MT6351_PMIC_RGS_QI_VMODEM_DIG_MON,
	MT6351_PMIC_RGS_VMODEM_ENPWM_STATUS,
	MT6351_PMIC_RG_VMD1_MODESET,
	MT6351_PMIC_RG_VMD1_NDIS_EN,
	MT6351_PMIC_RG_VMD1_VRF18_SSTART_EN,
	MT6351_PMIC_RG_VMD1_AUTO_MODE,
	MT6351_PMIC_RG_VMD1_RZSEL0,
	MT6351_PMIC_RG_VMD1_RZSEL1,
	MT6351_PMIC_RG_VMD1_CCSEL0,
	MT6351_PMIC_RG_VMD1_CCSEL1,
	MT6351_PMIC_RG_VMD1_CSL,
	MT6351_PMIC_RG_VMD1_SLP,
	MT6351_PMIC_RG_VMD1_ADRC_FEN,
	MT6351_PMIC_RG_VMD1_VCCAP_CLAMP_FEN,
	MT6351_PMIC_RG_VMD1_VC_CLAMP_FEN,
	MT6351_PMIC_RG_VMD1_PFMOC,
	MT6351_PMIC_RG_VMD1_CSR,
	MT6351_PMIC_RG_VMD1_ZXOS_TRIM,
	MT6351_PMIC_RG_VMD1_PFMSR_EH,
	MT6351_PMIC_RG_VMD1_NLIM_GATING,
	MT6351_PMIC_RG_VMD1_PWRSR_EH,
	MT6351_PMIC_RG_VMD1_HS_VTHDET,
	MT6351_PMIC_RG_VMD1_PG_GATING,
	MT6351_PMIC_RG_VMD1_HS_ONSPEED_EH,
	MT6351_PMIC_RG_VMD1_NLIM_TRIMMING,
	MT6351_PMIC_RG_VMD1_DLC,
	MT6351_PMIC_RG_VMD1_DLC_N,
	MT6351_PMIC_RG_VMD1_PFM_RIP,
	MT6351_PMIC_RG_VMD1_TRAN_BST,
	MT6351_PMIC_RG_VMD1_DTS_ENB,
	MT6351_PMIC_RG_VMD1_MIN_OFF,
	MT6351_PMIC_RG_VMD1_1P35UP_SEL_EN,
	MT6351_PMIC_RG_VMD1_DLC_AUTO_MODE,
	MT6351_PMIC_RG_VMD1_DLC_SEL,
	MT6351_PMIC_RG_VMD1_SRC_AUTO_MODE,
	MT6351_PMIC_RG_VMD1_UGP_SR,
	MT6351_PMIC_RG_VMD1_LGN_SR,
	MT6351_PMIC_RG_VMD1_UGP_SR_PFM,
	MT6351_PMIC_RG_VMD1_LGN_SR_PFM,
	MT6351_PMIC_RG_VMD1_UGD_VTHSEL,
	MT6351_PMIC_RG_VMD1_FNLX_SNS,
	MT6351_PMIC_RG_VMD1_VDIFF_ENLOWIQ,
	MT6351_PMIC_RG_VMD1_PFMOC_FWUPOFF,
	MT6351_PMIC_RG_VMD1_PWFMOC_FWUPOFF,
	MT6351_PMIC_RG_VMD1_CP_FWUPOFF,
	MT6351_PMIC_RG_VMD1_ZX_GATING,
	MT6351_PMIC_RG_VMD1_RSV,
	MT6351_PMIC_RG_VMD1_AZC_EN,
	MT6351_PMIC_RG_VMD1_AZC_DELAY,
	MT6351_PMIC_RG_VMD1_AZC_HOLD_ENB,
	MT6351_PMIC_RGS_QI_VMD1_OC_STATUS,
	MT6351_PMIC_RGS_QI_VMD1_DIG_MON,
	MT6351_PMIC_RGS_VMD1_ENPWM_STATUS,
	MT6351_PMIC_RG_VS1_MODESET,
	MT6351_PMIC_RG_VS1_NDIS_EN,
	MT6351_PMIC_RG_VS1_VRF18_SSTART_EN,
	MT6351_PMIC_RG_VS1_AUTO_MODE,
	MT6351_PMIC_RG_VS1_RZSEL0,
	MT6351_PMIC_RG_VS1_RZSEL1,
	MT6351_PMIC_RG_VS1_CCSEL0,
	MT6351_PMIC_RG_VS1_CCSEL1,
	MT6351_PMIC_RG_VS1_CSL,
	MT6351_PMIC_RG_VS1_SLP,
	MT6351_PMIC_RG_VS1_ADRC_FEN,
	MT6351_PMIC_RG_VS1_VCCAP_CLAMP_FEN,
	MT6351_PMIC_RG_VS1_VC_CLAMP_FEN,
	MT6351_PMIC_RG_VS1_PFMOC,
	MT6351_PMIC_RG_VS1_CSR,
	MT6351_PMIC_RG_VS1_ZXOS_TRIM,
	MT6351_PMIC_RG_VS1_PFMSR_EH,
	MT6351_PMIC_RG_VS1_NLIM_GATING,
	MT6351_PMIC_RG_VS1_PWRSR_EH,
	MT6351_PMIC_RG_VS1_HS_VTHDET,
	MT6351_PMIC_RG_VS1_PG_GATING,
	MT6351_PMIC_RG_VS1_HS_ONSPEED_EH,
	MT6351_PMIC_RG_VS1_NLIM_TRIMMING,
	MT6351_PMIC_RG_VS1_DLC,
	MT6351_PMIC_RG_VS1_DLC_N,
	MT6351_PMIC_RG_VS1_PFM_RIP,
	MT6351_PMIC_RG_VS1_TRAN_BST,
	MT6351_PMIC_RG_VS1_DTS_ENB,
	MT6351_PMIC_RG_VS1_MIN_OFF,
	MT6351_PMIC_RG_VS1_1P35UP_SEL_EN,
	MT6351_PMIC_RG_VS1_DLC_AUTO_MODE,
	MT6351_PMIC_RG_VS1_DLC_SEL,
	MT6351_PMIC_RG_VS1_SRC_AUTO_MODE,
	MT6351_PMIC_RG_VS1_UGP_SR,
	MT6351_PMIC_RG_VS1_LGN_SR,
	MT6351_PMIC_RG_VS1_UGP_SR_PFM,
	MT6351_PMIC_RG_VS1_LGN_SR_PFM,
	MT6351_PMIC_RG_VS1_UGD_VTHSEL,
	MT6351_PMIC_RG_VS1_FNLX_SNS,
	MT6351_PMIC_RG_VS1_VDIFF_ENLOWIQ,
	MT6351_PMIC_RG_VS1_PFMOC_FWUPOFF,
	MT6351_PMIC_RG_VS1_PWFMOC_FWUPOFF,
	MT6351_PMIC_RG_VS1_CP_FWUPOFF,
	MT6351_PMIC_RG_VS1_ZX_GATING,
	MT6351_PMIC_RG_VS1_RSV,
	MT6351_PMIC_RG_VS1_AZC_EN,
	MT6351_PMIC_RG_VS1_AZC_DELAY,
	MT6351_PMIC_RG_VS1_AZC_HOLD_ENB,
	MT6351_PMIC_RGS_QI_VS1_OC_STATUS,
	MT6351_PMIC_RGS_QI_VS1_DIG_MON,
	MT6351_PMIC_RGS_VS1_ENPWM_STATUS,
	MT6351_PMIC_RG_VS2_MODESET,
	MT6351_PMIC_RG_VS2_NDIS_EN,
	MT6351_PMIC_RG_VS2_VRF18_SSTART_EN,
	MT6351_PMIC_RG_VS2_AUTO_MODE,
	MT6351_PMIC_RG_VS2_RZSEL0,
	MT6351_PMIC_RG_VS2_RZSEL1,
	MT6351_PMIC_RG_VS2_CCSEL0,
	MT6351_PMIC_RG_VS2_CCSEL1,
	MT6351_PMIC_RG_VS2_CSL,
	MT6351_PMIC_RG_VS2_SLP,
	MT6351_PMIC_RG_VS2_ADRC_FEN,
	MT6351_PMIC_RG_VS2_VCCAP_CLAMP_FEN,
	MT6351_PMIC_RG_VS2_VC_CLAMP_FEN,
	MT6351_PMIC_RG_VS2_PFMOC,
	MT6351_PMIC_RG_VS2_CSR,
	MT6351_PMIC_RG_VS2_ZXOS_TRIM,
	MT6351_PMIC_RG_VS2_PFMSR_EH,
	MT6351_PMIC_RG_VS2_NLIM_GATING,
	MT6351_PMIC_RG_VS2_PWRSR_EH,
	MT6351_PMIC_RG_VS2_HS_VTHDET,
	MT6351_PMIC_RG_VS2_PG_GATING,
	MT6351_PMIC_RG_VS2_HS_ONSPEED_EH,
	MT6351_PMIC_RG_VS2_NLIM_TRIMMING,
	MT6351_PMIC_RG_VS2_DLC,
	MT6351_PMIC_RG_VS2_DLC_N,
	MT6351_PMIC_RG_VS2_PFM_RIP,
	MT6351_PMIC_RG_VS2_TRAN_BST,
	MT6351_PMIC_RG_VS2_DTS_ENB,
	MT6351_PMIC_RG_VS2_MIN_OFF,
	MT6351_PMIC_RG_VS2_1P35UP_SEL_EN,
	MT6351_PMIC_RG_VS2_DLC_AUTO_MODE,
	MT6351_PMIC_RG_VS2_DLC_SEL,
	MT6351_PMIC_RG_VS2_SRC_AUTO_MODE,
	MT6351_PMIC_RG_VS2_UGP_SR,
	MT6351_PMIC_RG_VS2_LGN_SR,
	MT6351_PMIC_RG_VS2_UGP_SR_PFM,
	MT6351_PMIC_RG_VS2_LGN_SR_PFM,
	MT6351_PMIC_RG_VS2_UGD_VTHSEL,
	MT6351_PMIC_RG_VS2_FNLX_SNS,
	MT6351_PMIC_RG_VS2_VDIFF_ENLOWIQ,
	MT6351_PMIC_RG_VS2_PFMOC_FWUPOFF,
	MT6351_PMIC_RG_VS2_PWFMOC_FWUPOFF,
	MT6351_PMIC_RG_VS2_CP_FWUPOFF,
	MT6351_PMIC_RG_VS2_ZX_GATING,
	MT6351_PMIC_RG_VS2_RSV,
	MT6351_PMIC_RG_VS2_AZC_EN,
	MT6351_PMIC_RG_VS2_AZC_DELAY,
	MT6351_PMIC_RG_VS2_AZC_HOLD_ENB,
	MT6351_PMIC_RGS_QI_VS2_OC_STATUS,
	MT6351_PMIC_RGS_QI_VS2_DIG_MON,
	MT6351_PMIC_RGS_VS2_ENPWM_STATUS,
	MT6351_PMIC_RG_VPA_NDIS_EN,
	MT6351_PMIC_RG_VPA_MODESET,
	MT6351_PMIC_RG_VPA_CC,
	MT6351_PMIC_RG_VPA_CSR,
	MT6351_PMIC_RG_VPA_CSMIR,
	MT6351_PMIC_RG_VPA_CSL,
	MT6351_PMIC_RG_VPA_SLP,
	MT6351_PMIC_RG_VPA_AZC_EN,
	MT6351_PMIC_RG_VPA_CP_FWUPOFF,
	MT6351_PMIC_RG_VPA_AZC_DELAY,
	MT6351_PMIC_RG_VPA_RZSEL,
	MT6351_PMIC_RG_VPA_ZXREF,
	MT6351_PMIC_RG_VPA_NLIM_SEL,
	MT6351_PMIC_RG_VPA_HZP,
	MT6351_PMIC_RG_VPA_BWEX_GAT,
	MT6351_PMIC_RG_VPA_SLEW,
	MT6351_PMIC_RG_VPA_SLEW_NMOS,
	MT6351_PMIC_RG_VPA_MIN_ON,
	MT6351_PMIC_RG_VPA_VBAT_DEL,
	MT6351_PMIC_RGS_VPA_AZC_VOS_SEL,
	MT6351_PMIC_RG_VPA_MIN_PK,
	MT6351_PMIC_RG_VPA_RSV1,
	MT6351_PMIC_RG_VPA_RSV2,
	MT6351_PMIC_RGS_QI_VPA_OC_STATUS,
	MT6351_PMIC_BUCK_VCORE_EN_CTRL,
	MT6351_PMIC_BUCK_VCORE_VOSEL_CTRL,
	MT6351_PMIC_BUCK_VCORE_EN_SEL,
	MT6351_PMIC_BUCK_VCORE_VOSEL_SEL,
	MT6351_PMIC_BUCK_VCORE_EN,
	MT6351_PMIC_BUCK_VCORE_STBTD,
	MT6351_PMIC_DA_VCORE_STB,
	MT6351_PMIC_DA_QI_VCORE_EN,
	MT6351_PMIC_BUCK_VCORE_SFCHG_FRATE,
	MT6351_PMIC_BUCK_VCORE_SFCHG_FEN,
	MT6351_PMIC_BUCK_VCORE_SFCHG_RRATE,
	MT6351_PMIC_BUCK_VCORE_SFCHG_REN,
	MT6351_PMIC_BUCK_VCORE_VOSEL,
	MT6351_PMIC_BUCK_VCORE_VOSEL_ON,
	MT6351_PMIC_BUCK_VCORE_VOSEL_SLEEP,
	MT6351_PMIC_DA_NI_VCORE_VOSEL,
	MT6351_PMIC_DA_NI_VCORE_VOSEL_SYNC,
	MT6351_PMIC_BUCK_VCORE_TRANS_TD,
	MT6351_PMIC_BUCK_VCORE_TRANS_CTRL,
	MT6351_PMIC_BUCK_VCORE_TRANS_ONCE,
	MT6351_PMIC_DA_QI_VCORE_DVS_EN,
	MT6351_PMIC_BUCK_VCORE_VSLEEP_EN,
	MT6351_PMIC_BUCK_VCORE_R2R_PDN,
	MT6351_PMIC_BUCK_VCORE_VSLEEP_SEL,
	MT6351_PMIC_DA_NI_VCORE_R2R_PDN,
	MT6351_PMIC_DA_NI_VCORE_VSLEEP_SEL,
	MT6351_PMIC_BUCK_VGPU_EN_CTRL,
	MT6351_PMIC_BUCK_VGPU_VOSEL_CTRL,
	MT6351_PMIC_BUCK_VGPU_EN_SEL,
	MT6351_PMIC_BUCK_VGPU_VOSEL_SEL,
	MT6351_PMIC_BUCK_VGPU_EN,
	MT6351_PMIC_BUCK_VGPU_STBTD,
	MT6351_PMIC_DA_VGPU_STB,
	MT6351_PMIC_DA_QI_VGPU_EN,
	MT6351_PMIC_BUCK_VGPU_SFCHG_FRATE,
	MT6351_PMIC_BUCK_VGPU_SFCHG_FEN,
	MT6351_PMIC_BUCK_VGPU_SFCHG_RRATE,
	MT6351_PMIC_BUCK_VGPU_SFCHG_REN,
	MT6351_PMIC_BUCK_VGPU_VOSEL,
	MT6351_PMIC_BUCK_VGPU_VOSEL_ON,
	MT6351_PMIC_BUCK_VGPU_VOSEL_SLEEP,
	MT6351_PMIC_DA_NI_VGPU_VOSEL,
	MT6351_PMIC_DA_NI_VGPU_VOSEL_SYNC,
	MT6351_PMIC_BUCK_VGPU_TRANS_TD,
	MT6351_PMIC_BUCK_VGPU_TRANS_CTRL,
	MT6351_PMIC_BUCK_VGPU_TRANS_ONCE,
	MT6351_PMIC_DA_QI_VGPU_DVS_EN,
	MT6351_PMIC_BUCK_VGPU_VSLEEP_EN,
	MT6351_PMIC_BUCK_VGPU_R2R_PDN,
	MT6351_PMIC_BUCK_VGPU_VSLEEP_SEL,
	MT6351_PMIC_DA_NI_VGPU_R2R_PDN,
	MT6351_PMIC_DA_NI_VGPU_VSLEEP_SEL,
	MT6351_PMIC_BUCK_VMODEM_EN_CTRL,
	MT6351_PMIC_BUCK_VMODEM_VOSEL_CTRL,
	MT6351_PMIC_BUCK_VMODEM_EN_SEL,
	MT6351_PMIC_BUCK_VMODEM_VOSEL_SEL,
	MT6351_PMIC_BUCK_VMODEM_EN,
	MT6351_PMIC_BUCK_VMODEM_STBTD,
	MT6351_PMIC_DA_VMODEM_STB,
	MT6351_PMIC_DA_QI_VMODEM_EN,
	MT6351_PMIC_BUCK_VMODEM_SFCHG_FRATE,
	MT6351_PMIC_BUCK_VMODEM_SFCHG_FEN,
	MT6351_PMIC_BUCK_VMODEM_SFCHG_RRATE,
	MT6351_PMIC_BUCK_VMODEM_SFCHG_REN,
	MT6351_PMIC_BUCK_VMODEM_VOSEL,
	MT6351_PMIC_BUCK_VMODEM_VOSEL_ON,
	MT6351_PMIC_BUCK_VMODEM_VOSEL_SLEEP,
	MT6351_PMIC_DA_NI_VMODEM_VOSEL,
	MT6351_PMIC_DA_NI_VMODEM_VOSEL_SYNC,
	MT6351_PMIC_BUCK_VMODEM_TRANS_TD,
	MT6351_PMIC_BUCK_VMODEM_TRANS_CTRL,
	MT6351_PMIC_BUCK_VMODEM_TRANS_ONCE,
	MT6351_PMIC_DA_QI_VMODEM_DVS_EN,
	MT6351_PMIC_BUCK_VMODEM_VSLEEP_EN,
	MT6351_PMIC_BUCK_VMODEM_R2R_PDN,
	MT6351_PMIC_BUCK_VMODEM_VSLEEP_SEL,
	MT6351_PMIC_DA_NI_VMODEM_R2R_PDN,
	MT6351_PMIC_DA_NI_VMODEM_VSLEEP_SEL,
	MT6351_PMIC_BUCK_VMD1_EN_CTRL,
	MT6351_PMIC_BUCK_VMD1_VOSEL_CTRL,
	MT6351_PMIC_BUCK_VMD1_EN_SEL,
	MT6351_PMIC_BUCK_VMD1_VOSEL_SEL,
	MT6351_PMIC_BUCK_VMD1_EN,
	MT6351_PMIC_BUCK_VMD1_STBTD,
	MT6351_PMIC_DA_VMD1_STB,
	MT6351_PMIC_DA_QI_VMD1_EN,
	MT6351_PMIC_BUCK_VMD1_SFCHG_FRATE,
	MT6351_PMIC_BUCK_VMD1_SFCHG_FEN,
	MT6351_PMIC_BUCK_VMD1_SFCHG_RRATE,
	MT6351_PMIC_BUCK_VMD1_SFCHG_REN,
	MT6351_PMIC_BUCK_VMD1_VOSEL,
	MT6351_PMIC_BUCK_VMD1_VOSEL_ON,
	MT6351_PMIC_BUCK_VMD1_VOSEL_SLEEP,
	MT6351_PMIC_DA_NI_VMD1_VOSEL,
	MT6351_PMIC_DA_NI_VMD1_VOSEL_SYNC,
	MT6351_PMIC_BUCK_VMD1_TRANS_TD,
	MT6351_PMIC_BUCK_VMD1_TRANS_CTRL,
	MT6351_PMIC_BUCK_VMD1_TRANS_ONCE,
	MT6351_PMIC_DA_QI_VMD1_DVS_EN,
	MT6351_PMIC_BUCK_VMD1_VSLEEP_EN,
	MT6351_PMIC_BUCK_VMD1_R2R_PDN,
	MT6351_PMIC_BUCK_VMD1_VSLEEP_SEL,
	MT6351_PMIC_DA_NI_VMD1_R2R_PDN,
	MT6351_PMIC_DA_NI_VMD1_VSLEEP_SEL,
	MT6351_PMIC_BUCK_VSRAM_MD_EN_CTRL,
	MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_CTRL,
	MT6351_PMIC_BUCK_VSRAM_MD_EN_SEL,
	MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_SEL,
	MT6351_PMIC_BUCK_VSRAM_MD_EN,
	MT6351_PMIC_BUCK_VSRAM_MD_STBTD,
	MT6351_PMIC_DA_VSRAM_MD_STB,
	MT6351_PMIC_DA_QI_VSRAM_MD_EN,
	MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_FRATE,
	MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_FEN,
	MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_RRATE,
	MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_REN,
	MT6351_PMIC_BUCK_VSRAM_MD_VOSEL,
	MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_ON,
	MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_SLEEP,
	MT6351_PMIC_DA_NI_VSRAM_MD_VOSEL,
	MT6351_PMIC_DA_NI_VSRAM_MD_VOSEL_SYNC,
	MT6351_PMIC_BUCK_VSRAM_MD_TRANS_TD,
	MT6351_PMIC_BUCK_VSRAM_MD_TRANS_CTRL,
	MT6351_PMIC_BUCK_VSRAM_MD_TRANS_ONCE,
	MT6351_PMIC_DA_QI_VSRAM_MD_DVS_EN,
	MT6351_PMIC_BUCK_VSRAM_MD_VSLEEP_EN,
	MT6351_PMIC_BUCK_VSRAM_MD_R2R_PDN,
	MT6351_PMIC_BUCK_VSRAM_MD_VSLEEP_SEL,
	MT6351_PMIC_DA_NI_VSRAM_MD_R2R_PDN,
	MT6351_PMIC_DA_NI_VSRAM_MD_VSLEEP_SEL,
	MT6351_PMIC_BUCK_VS1_EN_CTRL,
	MT6351_PMIC_BUCK_VS1_VOSEL_CTRL,
	MT6351_PMIC_BUCK_VS1_EN_SEL,
	MT6351_PMIC_BUCK_VS1_VOSEL_SEL,
	MT6351_PMIC_BUCK_VS1_EN,
	MT6351_PMIC_BUCK_VS1_STBTD,
	MT6351_PMIC_DA_VS1_STB,
	MT6351_PMIC_DA_QI_VS1_EN,
	MT6351_PMIC_BUCK_VS1_SFCHG_FRATE,
	MT6351_PMIC_BUCK_VS1_SFCHG_FEN,
	MT6351_PMIC_BUCK_VS1_SFCHG_RRATE,
	MT6351_PMIC_BUCK_VS1_SFCHG_REN,
	MT6351_PMIC_BUCK_VS1_VOSEL,
	MT6351_PMIC_BUCK_VS1_VOSEL_ON,
	MT6351_PMIC_BUCK_VS1_VOSEL_SLEEP,
	MT6351_PMIC_DA_NI_VS1_VOSEL,
	MT6351_PMIC_DA_NI_VS1_VOSEL_SYNC,
	MT6351_PMIC_BUCK_VS1_TRANS_TD,
	MT6351_PMIC_BUCK_VS1_TRANS_CTRL,
	MT6351_PMIC_BUCK_VS1_TRANS_ONCE,
	MT6351_PMIC_DA_QI_VS1_DVS_EN,
	MT6351_PMIC_BUCK_VS1_VSLEEP_EN,
	MT6351_PMIC_BUCK_VS1_R2R_PDN,
	MT6351_PMIC_BUCK_VS1_VSLEEP_SEL,
	MT6351_PMIC_DA_NI_VS1_R2R_PDN,
	MT6351_PMIC_DA_NI_VS1_VSLEEP_SEL,
	MT6351_PMIC_BUCK_VS2_EN_CTRL,
	MT6351_PMIC_BUCK_VS2_VOSEL_CTRL,
	MT6351_PMIC_BUCK_VS2_EN_SEL,
	MT6351_PMIC_BUCK_VS2_VOSEL_SEL,
	MT6351_PMIC_BUCK_VS2_EN,
	MT6351_PMIC_BUCK_VS2_STBTD,
	MT6351_PMIC_DA_VS2_STB,
	MT6351_PMIC_DA_QI_VS2_EN,
	MT6351_PMIC_BUCK_VS2_SFCHG_FRATE,
	MT6351_PMIC_BUCK_VS2_SFCHG_FEN,
	MT6351_PMIC_BUCK_VS2_SFCHG_RRATE,
	MT6351_PMIC_BUCK_VS2_SFCHG_REN,
	MT6351_PMIC_BUCK_VS2_VOSEL,
	MT6351_PMIC_BUCK_VS2_VOSEL_ON,
	MT6351_PMIC_BUCK_VS2_VOSEL_SLEEP,
	MT6351_PMIC_DA_NI_VS2_VOSEL,
	MT6351_PMIC_DA_NI_VS2_VOSEL_SYNC,
	MT6351_PMIC_BUCK_VS2_TRANS_TD,
	MT6351_PMIC_BUCK_VS2_TRANS_CTRL,
	MT6351_PMIC_BUCK_VS2_TRANS_ONCE,
	MT6351_PMIC_DA_QI_VS2_DVS_EN,
	MT6351_PMIC_BUCK_VS2_VSLEEP_EN,
	MT6351_PMIC_BUCK_VS2_R2R_PDN,
	MT6351_PMIC_BUCK_VS2_VSLEEP_SEL,
	MT6351_PMIC_DA_NI_VS2_R2R_PDN,
	MT6351_PMIC_DA_NI_VS2_VSLEEP_SEL,
	MT6351_PMIC_BUCK_VPA_EN_CTRL,
	MT6351_PMIC_BUCK_VPA_VOSEL_CTRL,
	MT6351_PMIC_BUCK_VPA_EN_SEL,
	MT6351_PMIC_BUCK_VPA_VOSEL_SEL,
	MT6351_PMIC_BUCK_VPA_EN,
	MT6351_PMIC_BUCK_VPA_STBTD,
	MT6351_PMIC_DA_VPA_STB,
	MT6351_PMIC_DA_QI_VPA_EN,
	MT6351_PMIC_BUCK_VPA_SFCHG_FRATE,
	MT6351_PMIC_BUCK_VPA_SFCHG_FEN,
	MT6351_PMIC_BUCK_VPA_SFCHG_RRATE,
	MT6351_PMIC_BUCK_VPA_SFCHG_REN,
	MT6351_PMIC_BUCK_VPA_VOSEL,
	MT6351_PMIC_BUCK_VPA_VOSEL_ON,
	MT6351_PMIC_BUCK_VPA_VOSEL_SLEEP,
	MT6351_PMIC_DA_NI_VPA_VOSEL_GRAY,
	MT6351_PMIC_DA_NI_VPA_VOSEL_SYNC,
	MT6351_PMIC_BUCK_VPA_TRANS_TD,
	MT6351_PMIC_BUCK_VPA_TRANS_CTRL,
	MT6351_PMIC_BUCK_VPA_TRANS_ONCE,
	MT6351_PMIC_DA_QI_VPA_DVS_EN,
	MT6351_PMIC_BUCK_VPA_VSLEEP_EN,
	MT6351_PMIC_BUCK_VPA_R2R_PDN,
	MT6351_PMIC_BUCK_VPA_VSLEEP_SEL,
	MT6351_PMIC_DA_NI_VPA_R2R_PDN,
	MT6351_PMIC_DA_NI_VPA_VSLEEP_SEL,
	MT6351_PMIC_BUCK_VSRAM_PROC_EN_CTRL,
	MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_CTRL,
	MT6351_PMIC_BUCK_VSRAM_PROC_EN_SEL,
	MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_SEL,
	MT6351_PMIC_BUCK_VSRAM_PROC_EN,
	MT6351_PMIC_BUCK_VSRAM_PROC_STBTD,
	MT6351_PMIC_DA_VSRAM_PROC_STB,
	MT6351_PMIC_DA_QI_VSRAM_PROC_EN_RSV,
	MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_FRATE,
	MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_FEN,
	MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_RRATE,
	MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_REN,
	MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL,
	MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_ON,
	MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_SLEEP,
	MT6351_PMIC_DA_NI_VSRAM_PROC_VOSEL,
	MT6351_PMIC_DA_NI_VSRAM_PROC_VOSEL_SYNC,
	MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_TD,
	MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_CTRL,
	MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_ONCE,
	MT6351_PMIC_DA_QI_VSRAM_PROC_DVS_EN,
	MT6351_PMIC_BUCK_VSRAM_PROC_VSLEEP_EN,
	MT6351_PMIC_BUCK_VSRAM_PROC_R2R_PDN,
	MT6351_PMIC_BUCK_VSRAM_PROC_VSLEEP_SEL,
	MT6351_PMIC_DA_NI_VSRAM_PROC_R2R_PDN,
	MT6351_PMIC_DA_NI_VSRAM_PROC_VSLEEP_SEL,
	MT6351_PMIC_BUCK_K_RST_DONE,
	MT6351_PMIC_BUCK_K_MAP_SEL,
	MT6351_PMIC_BUCK_K_ONCE_EN,
	MT6351_PMIC_BUCK_K_ONCE,
	MT6351_PMIC_BUCK_K_START_MANUAL,
	MT6351_PMIC_BUCK_K_SRC_SEL,
	MT6351_PMIC_BUCK_K_AUTO_EN,
	MT6351_PMIC_BUCK_K_INV,
	MT6351_PMIC_BUCK_K_CONTROL_SMPS,
	MT6351_PMIC_K_RESULT,
	MT6351_PMIC_K_DONE,
	MT6351_PMIC_K_CONTROL,
	MT6351_PMIC_DA_QI_SMPS_OSC_CAL,
	MT6351_PMIC_BUCK_K_BUCK_CK_CNT,
	MT6351_PMIC_WDTDBG_CLR,
	MT6351_PMIC_WDTDBG_CON0_RSV0,
	MT6351_PMIC_VGPU_VOSEL_WDTDBG,
	MT6351_PMIC_VCORE_VOSEL_WDTDBG,
	MT6351_PMIC_VMD1_VOSEL_WDTDBG,
	MT6351_PMIC_VMODEM_VOSEL_WDTDBG,
	MT6351_PMIC_VSRAM_PROC_VOSEL_WDTDBG,
	MT6351_PMIC_VSRAM_MD_VOSEL_WDTDBG,
	MT6351_PMIC_RG_AUDZCDENABLE,
	MT6351_PMIC_RG_AUDZCDGAINSTEPTIME,
	MT6351_PMIC_RG_AUDZCDGAINSTEPSIZE,
	MT6351_PMIC_RG_AUDZCDTIMEOUTMODESEL,
	MT6351_PMIC_RG_AUDZCDCLKSEL_VAUDP15,
	MT6351_PMIC_RG_AUDZCDMUXSEL_VAUDP15,
	MT6351_PMIC_RG_AUDLOLGAIN,
	MT6351_PMIC_RG_AUDLORGAIN,
	MT6351_PMIC_RG_AUDHPLGAIN,
	MT6351_PMIC_RG_AUDHPRGAIN,
	MT6351_PMIC_RG_AUDHSGAIN,
	MT6351_PMIC_RG_AUDIVLGAIN,
	MT6351_PMIC_RG_AUDIVRGAIN,
	MT6351_PMIC_RG_AUDINTGAIN1,
	MT6351_PMIC_RG_AUDINTGAIN2,
	MT6351_PMIC_RG_A_TRIM_EN,
	MT6351_PMIC_RG_A_TRIM_SEL,
	MT6351_PMIC_RG_A_ISINKS_RSV,
	MT6351_PMIC_RG_B_TRIM_EN,
	MT6351_PMIC_RG_B_TRIM_SEL,
	MT6351_PMIC_RG_B_ISINKS_RSV,
	MT6351_PMIC_ISINK_DIM0_FSEL,
	MT6351_PMIC_ISINK0_RSV1,
	MT6351_PMIC_ISINK0_RSV0,
	MT6351_PMIC_ISINK_DIM0_DUTY,
	MT6351_PMIC_ISINK_CH0_STEP,
	MT6351_PMIC_ISINK_BREATH0_TF2_SEL,
	MT6351_PMIC_ISINK_BREATH0_TF1_SEL,
	MT6351_PMIC_ISINK_BREATH0_TR2_SEL,
	MT6351_PMIC_ISINK_BREATH0_TR1_SEL,
	MT6351_PMIC_ISINK_BREATH0_TOFF_SEL,
	MT6351_PMIC_ISINK_BREATH0_TON_SEL,
	MT6351_PMIC_ISINK_DIM1_FSEL,
	MT6351_PMIC_ISINK1_RSV1,
	MT6351_PMIC_ISINK1_RSV0,
	MT6351_PMIC_ISINK_DIM1_DUTY,
	MT6351_PMIC_ISINK_CH1_STEP,
	MT6351_PMIC_ISINK_BREATH1_TF2_SEL,
	MT6351_PMIC_ISINK_BREATH1_TF1_SEL,
	MT6351_PMIC_ISINK_BREATH1_TR2_SEL,
	MT6351_PMIC_ISINK_BREATH1_TR1_SEL,
	MT6351_PMIC_ISINK_BREATH1_TOFF_SEL,
	MT6351_PMIC_ISINK_BREATH1_TON_SEL,
	MT6351_PMIC_ISINK_DIM4_FSEL,
	MT6351_PMIC_ISINK4_RSV1,
	MT6351_PMIC_ISINK4_RSV0,
	MT6351_PMIC_ISINK_DIM4_DUTY,
	MT6351_PMIC_ISINK_CH4_STEP,
	MT6351_PMIC_ISINK_BREATH4_TF2_SEL,
	MT6351_PMIC_ISINK_BREATH4_TF1_SEL,
	MT6351_PMIC_ISINK_BREATH4_TR2_SEL,
	MT6351_PMIC_ISINK_BREATH4_TR1_SEL,
	MT6351_PMIC_ISINK_BREATH4_TOFF_SEL,
	MT6351_PMIC_ISINK_BREATH4_TON_SEL,
	MT6351_PMIC_ISINK_DIM5_FSEL,
	MT6351_PMIC_ISINK5_RSV1,
	MT6351_PMIC_ISINK5_RSV0,
	MT6351_PMIC_ISINK_DIM5_DUTY,
	MT6351_PMIC_ISINK_CH5_STEP,
	MT6351_PMIC_ISINK_BREATH5_TF2_SEL,
	MT6351_PMIC_ISINK_BREATH5_TF1_SEL,
	MT6351_PMIC_ISINK_BREATH5_TR2_SEL,
	MT6351_PMIC_ISINK_BREATH5_TR1_SEL,
	MT6351_PMIC_ISINK_BREATH5_TOFF_SEL,
	MT6351_PMIC_ISINK_BREATH5_TON_SEL,
	MT6351_PMIC_AD_NI_B_ISINK1_STATUS,
	MT6351_PMIC_AD_NI_B_ISINK0_STATUS,
	MT6351_PMIC_AD_NI_A_ISINK1_STATUS,
	MT6351_PMIC_AD_NI_A_ISINK0_STATUS,
	MT6351_PMIC_ISINK_PHASE0_DLY_EN,
	MT6351_PMIC_ISINK_PHASE1_DLY_EN,
	MT6351_PMIC_ISINK_PHASE4_DLY_EN,
	MT6351_PMIC_ISINK_PHASE5_DLY_EN,
	MT6351_PMIC_ISINK_PHASE_DLY_TC,
	MT6351_PMIC_ISINK_CHOP0_SW,
	MT6351_PMIC_ISINK_CHOP1_SW,
	MT6351_PMIC_ISINK_CHOP4_SW,
	MT6351_PMIC_ISINK_CHOP5_SW,
	MT6351_PMIC_ISINK_SFSTR5_EN,
	MT6351_PMIC_ISINK_SFSTR5_TC,
	MT6351_PMIC_ISINK_SFSTR4_EN,
	MT6351_PMIC_ISINK_SFSTR4_TC,
	MT6351_PMIC_ISINK_SFSTR1_EN,
	MT6351_PMIC_ISINK_SFSTR1_TC,
	MT6351_PMIC_ISINK_SFSTR0_EN,
	MT6351_PMIC_ISINK_SFSTR0_TC,
	MT6351_PMIC_ISINK_CH0_EN,
	MT6351_PMIC_ISINK_CH1_EN,
	MT6351_PMIC_ISINK_CH4_EN,
	MT6351_PMIC_ISINK_CH5_EN,
	MT6351_PMIC_ISINK_CHOP0_EN,
	MT6351_PMIC_ISINK_CHOP1_EN,
	MT6351_PMIC_ISINK_CHOP4_EN,
	MT6351_PMIC_ISINK_CHOP5_EN,
	MT6351_PMIC_ISINK_CH0_BIAS_EN,
	MT6351_PMIC_ISINK_CH1_BIAS_EN,
	MT6351_PMIC_ISINK_CH4_BIAS_EN,
	MT6351_PMIC_ISINK_CH5_BIAS_EN,
	MT6351_PMIC_ISINK_RSV,
	MT6351_PMIC_ISINK_CH5_MODE,
	MT6351_PMIC_ISINK_CH4_MODE,
	MT6351_PMIC_ISINK_CH1_MODE,
	MT6351_PMIC_ISINK_CH0_MODE,
	MT6351_PMIC_DA_QI_A_ISINKS_CH0_STEP,
	MT6351_PMIC_DA_QI_A_ISINKS_CH1_STEP,
	MT6351_PMIC_DA_QI_B_ISINKS_CH0_STEP,
	MT6351_PMIC_DA_QI_B_ISINKS_CH1_STEP,
	MT6351_PMIC_ISINK2_RSV1,
	MT6351_PMIC_ISINK2_RSV0,
	MT6351_PMIC_ISINK_CH2_STEP,
	MT6351_PMIC_ISINK3_RSV1,
	MT6351_PMIC_ISINK3_RSV0,
	MT6351_PMIC_ISINK_CH3_STEP,
	MT6351_PMIC_ISINK6_RSV1,
	MT6351_PMIC_ISINK6_RSV0,
	MT6351_PMIC_ISINK_CH6_STEP,
	MT6351_PMIC_ISINK7_RSV1,
	MT6351_PMIC_ISINK7_RSV0,
	MT6351_PMIC_ISINK_CH7_STEP,
	MT6351_PMIC_AD_NI_B_ISINK3_STATUS,
	MT6351_PMIC_AD_NI_B_ISINK2_STATUS,
	MT6351_PMIC_AD_NI_A_ISINK3_STATUS,
	MT6351_PMIC_AD_NI_A_ISINK2_STATUS,
	MT6351_PMIC_ISINK_CHOP7_SW,
	MT6351_PMIC_ISINK_CHOP6_SW,
	MT6351_PMIC_ISINK_CHOP3_SW,
	MT6351_PMIC_ISINK_CHOP2_SW,
	MT6351_PMIC_ISINK_CH7_EN,
	MT6351_PMIC_ISINK_CH6_EN,
	MT6351_PMIC_ISINK_CH3_EN,
	MT6351_PMIC_ISINK_CH2_EN,
	MT6351_PMIC_ISINK_CHOP7_EN,
	MT6351_PMIC_ISINK_CHOP6_EN,
	MT6351_PMIC_ISINK_CHOP3_EN,
	MT6351_PMIC_ISINK_CHOP2_EN,
	MT6351_PMIC_ISINK_CH7_BIAS_EN,
	MT6351_PMIC_ISINK_CH6_BIAS_EN,
	MT6351_PMIC_ISINK_CH3_BIAS_EN,
	MT6351_PMIC_ISINK_CH2_BIAS_EN,
	MT6351_PMIC_CHRIND_DIM_FSEL,
	MT6351_PMIC_CHRIND_RSV1,
	MT6351_PMIC_CHRIND_RSV0,
	MT6351_PMIC_CHRIND_DIM_DUTY,
	MT6351_PMIC_CHRIND_STEP,
	MT6351_PMIC_CHRIND_BREATH_TF2_SEL,
	MT6351_PMIC_CHRIND_BREATH_TF1_SEL,
	MT6351_PMIC_CHRIND_BREATH_TR2_SEL,
	MT6351_PMIC_CHRIND_BREATH_TR1_SEL,
	MT6351_PMIC_CHRIND_BREATH_TOFF_SEL,
	MT6351_PMIC_CHRIND_BREATH_TON_SEL,
	MT6351_PMIC_CHRIND_SFSTR_EN,
	MT6351_PMIC_CHRIND_SFSTR_TC,
	MT6351_PMIC_CHRIND_EN_SEL,
	MT6351_PMIC_CHRIND_EN,
	MT6351_PMIC_CHRIND_CHOP_EN,
	MT6351_PMIC_CHRIND_MODE,
	MT6351_PMIC_CHRIND_CHOP_SW,
	MT6351_PMIC_CHRIND_BIAS_EN,
	MT6351_PMIC_RG_VA18_MODE_SET,
	MT6351_PMIC_RG_VA18_EN,
	MT6351_PMIC_RG_VA18_MODE_CTRL,
	MT6351_PMIC_RG_VA18_ON_CTRL,
	MT6351_PMIC_RG_VA18_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VA18_MODE,
	MT6351_PMIC_RG_VA18_STBTD,
	MT6351_PMIC_RG_VA18_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VA18_STB,
	MT6351_PMIC_DA_QI_VA18_EN,
	MT6351_PMIC_RG_VA18_AUXADC_PWDB_EN,
	MT6351_PMIC_RG_VA18_OCFB_EN,
	MT6351_PMIC_DA_QI_VA18_OCFB_EN,
	MT6351_PMIC_RG_VTCXO24_MODE_SET,
	MT6351_PMIC_RG_VTCXO24_EN,
	MT6351_PMIC_RG_VTCXO24_MODE_CTRL,
	MT6351_PMIC_RG_VTCXO24_ON_CTRL,
	MT6351_PMIC_RG_VTCXO24_SWITCH,
	MT6351_PMIC_RG_VTCXO24_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VTCXO24_MODE,
	MT6351_PMIC_RG_VTCXO24_STBTD,
	MT6351_PMIC_RG_VTCXO24_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VTCXO24_STB,
	MT6351_PMIC_DA_QI_VTCXO24_EN,
	MT6351_PMIC_RG_VTCXO24_OCFB_EN,
	MT6351_PMIC_DA_QI_VTCXO24_OCFB_EN,
	MT6351_PMIC_RG_VTCXO28_MODE_SET,
	MT6351_PMIC_RG_VTCXO28_EN,
	MT6351_PMIC_RG_VTCXO28_MODE_CTRL,
	MT6351_PMIC_RG_VTCXO28_ON_CTRL,
	MT6351_PMIC_RG_VTCXO28_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VTCXO28_MODE,
	MT6351_PMIC_RG_VTCXO28_STBTD,
	MT6351_PMIC_RG_VTCXO28_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VTCXO28_STB,
	MT6351_PMIC_DA_QI_VTCXO28_EN,
	MT6351_PMIC_RG_VTCXO28_OCFB_EN,
	MT6351_PMIC_DA_QI_VTCXO28_OCFB_EN,
	MT6351_PMIC_RG_VCN28_MODE_SET,
	MT6351_PMIC_RG_VCN28_EN,
	MT6351_PMIC_RG_VCN28_MODE_CTRL,
	MT6351_PMIC_RG_VCN28_ON_CTRL,
	MT6351_PMIC_RG_VCN28_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VCN28_MODE,
	MT6351_PMIC_RG_VCN28_STBTD,
	MT6351_PMIC_RG_VCN28_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VCN28_STB,
	MT6351_PMIC_DA_QI_VCN28_EN,
	MT6351_PMIC_RG_VCN28_OCFB_EN,
	MT6351_PMIC_DA_QI_VCN28_OCFB_EN,
	MT6351_PMIC_RG_VCN28_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VCN28_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VCN28_DUMMY_LOAD,
	MT6351_PMIC_RG_VCN28_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VCN28_DUMMY_LOAD,
	MT6351_PMIC_RG_VCAMA_EN,
	MT6351_PMIC_RG_VCAMA_ON_CTRL,
	MT6351_PMIC_RG_VCAMA_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VCAMA_MODE,
	MT6351_PMIC_RG_VCAMA_STBTD,
	MT6351_PMIC_RG_VCAMA_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VCAMA_STB,
	MT6351_PMIC_DA_QI_VCAMA_EN,
	MT6351_PMIC_RG_VCAMA_OCFB_EN,
	MT6351_PMIC_DA_QI_VCAMA_OCFB_EN,
	MT6351_PMIC_RG_VUSB33_MODE_SET,
	MT6351_PMIC_RG_VUSB33_EN,
	MT6351_PMIC_RG_VUSB33_MODE_CTRL,
	MT6351_PMIC_RG_VUSB33_ON_CTRL,
	MT6351_PMIC_RG_VUSB33_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VUSB33_MODE,
	MT6351_PMIC_RG_VUSB33_STBTD,
	MT6351_PMIC_RG_VUSB33_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VUSB33_STB,
	MT6351_PMIC_DA_QI_VUSB33_EN,
	MT6351_PMIC_RG_VUSB33_OCFB_EN,
	MT6351_PMIC_DA_QI_VUSB33_OCFB_EN,
	MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VUSB33_DUMMY_LOAD,
	MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VUSB33_DUMMY_LOAD,
	MT6351_PMIC_RG_VSIM1_MODE_SET,
	MT6351_PMIC_RG_VSIM1_EN,
	MT6351_PMIC_RG_VSIM1_MODE_CTRL,
	MT6351_PMIC_RG_VSIM1_ON_CTRL,
	MT6351_PMIC_RG_VSIM1_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VSIM1_MODE,
	MT6351_PMIC_RG_VSIM1_STBTD,
	MT6351_PMIC_RG_VSIM1_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VSIM1_STB,
	MT6351_PMIC_DA_QI_VSIM1_EN,
	MT6351_PMIC_RG_VSIM1_OCFB_EN,
	MT6351_PMIC_DA_QI_VSIM1_OCFB_EN,
	MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VSIM1_DUMMY_LOAD,
	MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VSIM1_DUMMY_LOAD,
	MT6351_PMIC_RG_VSIM2_MODE_SET,
	MT6351_PMIC_RG_VSIM2_EN,
	MT6351_PMIC_RG_VSIM2_MODE_CTRL,
	MT6351_PMIC_RG_VSIM2_ON_CTRL,
	MT6351_PMIC_RG_VSIM2_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VSIM2_MODE,
	MT6351_PMIC_RG_VSIM2_STBTD,
	MT6351_PMIC_RG_VSIM2_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VSIM2_STB,
	MT6351_PMIC_DA_QI_VSIM2_EN,
	MT6351_PMIC_RG_VSIM2_OCFB_EN,
	MT6351_PMIC_DA_QI_VSIM2_OCFB_EN,
	MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VSIM2_DUMMY_LOAD,
	MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VSIM2_DUMMY_LOAD,
	MT6351_PMIC_RG_VEMC_MODE_SET,
	MT6351_PMIC_RG_VEMC_EN,
	MT6351_PMIC_RG_VEMC_MODE_CTRL,
	MT6351_PMIC_RG_VEMC_ON_CTRL,
	MT6351_PMIC_RG_VEMC_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VEMC_MODE,
	MT6351_PMIC_RG_VEMC_STBTD,
	MT6351_PMIC_RG_VEMC_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VEMC_STB,
	MT6351_PMIC_DA_QI_VEMC_EN,
	MT6351_PMIC_RG_VEMC_OCFB_EN,
	MT6351_PMIC_DA_QI_VEMC_OCFB_EN,
	MT6351_PMIC_RG_VEMC_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VEMC_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VEMC_DUMMY_LOAD,
	MT6351_PMIC_RG_VEMC_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VEMC_DUMMY_LOAD,
	MT6351_PMIC_RG_VMCH_MODE_SET,
	MT6351_PMIC_RG_VMCH_EN,
	MT6351_PMIC_RG_VMCH_MODE_CTRL,
	MT6351_PMIC_RG_VMCH_ON_CTRL,
	MT6351_PMIC_RG_VMCH_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VMCH_MODE,
	MT6351_PMIC_RG_VMCH_STBTD,
	MT6351_PMIC_RG_VMCH_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VMCH_STB,
	MT6351_PMIC_DA_QI_VMCH_EN,
	MT6351_PMIC_RG_VMCH_OCFB_EN,
	MT6351_PMIC_DA_QI_VMCH_OCFB_EN,
	MT6351_PMIC_RG_VMCH_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VMCH_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VMCH_DUMMY_LOAD,
	MT6351_PMIC_RG_VMCH_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VMCH_DUMMY_LOAD,
	MT6351_PMIC_RG_VIO28_MODE_SET,
	MT6351_PMIC_RG_VIO28_EN,
	MT6351_PMIC_RG_VIO28_MODE_CTRL,
	MT6351_PMIC_RG_VIO28_ON_CTRL,
	MT6351_PMIC_RG_VIO28_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VIO28_MODE,
	MT6351_PMIC_RG_VIO28_STBTD,
	MT6351_PMIC_RG_VIO28_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VIO28_STB,
	MT6351_PMIC_DA_QI_VIO28_EN,
	MT6351_PMIC_RG_VIO28_OCFB_EN,
	MT6351_PMIC_DA_QI_VIO28_OCFB_EN,
	MT6351_PMIC_RG_VIO28_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VIO28_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VIO28_DUMMY_LOAD,
	MT6351_PMIC_RG_VIO28_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VIO28_DUMMY_LOAD,
	MT6351_PMIC_RG_VIBR_MODE_SET,
	MT6351_PMIC_RG_VIBR_EN,
	MT6351_PMIC_RG_VIBR_MODE_CTRL,
	MT6351_PMIC_RG_VIBR_ON_CTRL,
	MT6351_PMIC_RG_VIBR_THER_SDN_EN,
	MT6351_PMIC_RG_VIBR_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VIBR_MODE,
	MT6351_PMIC_RG_VIBR_STBTD,
	MT6351_PMIC_RG_VIBR_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VIBR_STB,
	MT6351_PMIC_DA_QI_VIBR_EN,
	MT6351_PMIC_RG_VIBR_OCFB_EN,
	MT6351_PMIC_DA_QI_VIBR_OCFB_EN,
	MT6351_PMIC_RG_VIBR_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VIBR_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VIBR_DUMMY_LOAD,
	MT6351_PMIC_RG_VIBR_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VIBR_DUMMY_LOAD,
	MT6351_PMIC_RG_VCAMD_MODE_SET,
	MT6351_PMIC_RG_VCAMD_EN,
	MT6351_PMIC_RG_VCAMD_MODE_CTRL,
	MT6351_PMIC_RG_VCAMD_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VCAMD_MODE,
	MT6351_PMIC_RG_VCAMD_STBTD,
	MT6351_PMIC_DA_QI_VCAMD_STB,
	MT6351_PMIC_DA_QI_VCAMD_EN,
	MT6351_PMIC_RG_VCAMD_OCFB_EN,
	MT6351_PMIC_DA_QI_VCAMD_OCFB_EN,
	MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VCAMD_DUMMY_LOAD,
	MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VCAMD_DUMMY_LOAD,
	MT6351_PMIC_RG_VRF18_MODE_SET,
	MT6351_PMIC_RG_VRF18_EN,
	MT6351_PMIC_RG_VRF18_MODE_CTRL,
	MT6351_PMIC_RG_VRF18_ON_CTRL,
	MT6351_PMIC_RG_VRF18_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VRF18_MODE,
	MT6351_PMIC_RG_VRF18_STBTD,
	MT6351_PMIC_RG_VRF18_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VRF18_STB,
	MT6351_PMIC_DA_QI_VRF18_EN,
	MT6351_PMIC_RG_VRF18_OCFB_EN,
	MT6351_PMIC_DA_QI_VRF18_OCFB_EN,
	MT6351_PMIC_RG_VRF18_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VRF18_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VRF18_DUMMY_LOAD,
	MT6351_PMIC_RG_VRF18_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VRF18_DUMMY_LOAD,
	MT6351_PMIC_RG_VIO18_MODE_SET,
	MT6351_PMIC_RG_VIO18_EN,
	MT6351_PMIC_RG_VIO18_MODE_CTRL,
	MT6351_PMIC_RG_VIO18_ON_CTRL,
	MT6351_PMIC_RG_VIO18_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VIO18_MODE,
	MT6351_PMIC_RG_VIO18_STBTD,
	MT6351_PMIC_RG_VIO18_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VIO18_STB,
	MT6351_PMIC_DA_QI_VIO18_EN,
	MT6351_PMIC_RG_VIO18_OCFB_EN,
	MT6351_PMIC_DA_QI_VIO18_OCFB_EN,
	MT6351_PMIC_RG_VIO18_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VIO18_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VIO18_DUMMY_LOAD,
	MT6351_PMIC_RG_VIO18_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VIO18_DUMMY_LOAD,
	MT6351_PMIC_RG_VCN18_MODE_SET,
	MT6351_PMIC_RG_VCN18_EN,
	MT6351_PMIC_RG_VCN18_MODE_CTRL,
	MT6351_PMIC_RG_VCN18_ON_CTRL,
	MT6351_PMIC_RG_VCN18_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VCN18_MODE,
	MT6351_PMIC_RG_VCN18_STBTD,
	MT6351_PMIC_RG_VCN18_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VCN18_STB,
	MT6351_PMIC_DA_QI_VCN18_EN,
	MT6351_PMIC_RG_VCN18_OCFB_EN,
	MT6351_PMIC_DA_QI_VCN18_OCFB_EN,
	MT6351_PMIC_RG_VCN18_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VCN18_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VCN18_DUMMY_LOAD,
	MT6351_PMIC_RG_VCN18_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VCN18_DUMMY_LOAD,
	MT6351_PMIC_RG_VCAMIO_MODE_SET,
	MT6351_PMIC_RG_VCAMIO_EN,
	MT6351_PMIC_RG_VCAMIO_MODE_CTRL,
	MT6351_PMIC_RG_VCAMIO_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VCAMIO_MODE,
	MT6351_PMIC_RG_VCAMIO_STBTD,
	MT6351_PMIC_DA_QI_VCAMIO_STB,
	MT6351_PMIC_DA_QI_VCAMIO_EN,
	MT6351_PMIC_RG_VCAMIO_OCFB_EN,
	MT6351_PMIC_DA_QI_VCAMIO_OCFB_EN,
	MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD,
	MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VCAMIO_DUMMY_LOAD,
	MT6351_PMIC_RG_VSRAM_PROC_MODE_SET,
	MT6351_PMIC_RG_VSRAM_PROC_EN,
	MT6351_PMIC_RG_VSRAM_PROC_MODE_CTRL,
	MT6351_PMIC_RG_VSRAM_PROC_ON_CTRL,
	MT6351_PMIC_RG_VSRAM_PROC_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VSRAM_PROC_MODE,
	MT6351_PMIC_RG_VSRAM_PROC_STBTD,
	MT6351_PMIC_RG_VSRAM_PROC_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VSRAM_PROC_STB,
	MT6351_PMIC_DA_QI_VSRAM_PROC_EN,
	MT6351_PMIC_RG_VSRAM_PROC_OCFB_EN,
	MT6351_PMIC_DA_QI_VSRAM_PROC_OCFB_EN,
	MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD,
	MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VSRAM_PROC_DUMMY_LOAD,
	MT6351_PMIC_RG_VXO22_MODE_SET,
	MT6351_PMIC_RG_VXO22_EN,
	MT6351_PMIC_RG_VXO22_MODE_CTRL,
	MT6351_PMIC_RG_VXO22_ON_CTRL,
	MT6351_PMIC_RG_VXO22_SWITCH,
	MT6351_PMIC_RG_VXO22_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VXO22_MODE,
	MT6351_PMIC_RG_VXO22_STBTD,
	MT6351_PMIC_RG_VXO22_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VXO22_STB,
	MT6351_PMIC_DA_QI_VXO22_EN,
	MT6351_PMIC_RG_VXO22_OCFB_EN,
	MT6351_PMIC_DA_QI_VXO22_OCFB_EN,
	MT6351_PMIC_RG_VRF12_MODE_SET,
	MT6351_PMIC_RG_VRF12_EN,
	MT6351_PMIC_RG_VRF12_MODE_CTRL,
	MT6351_PMIC_RG_VRF12_ON_CTRL,
	MT6351_PMIC_RG_VRF12_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VRF12_MODE,
	MT6351_PMIC_RG_VRF12_STBTD,
	MT6351_PMIC_RG_VRF12_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VRF12_STB,
	MT6351_PMIC_DA_QI_VRF12_EN,
	MT6351_PMIC_RG_VRF12_OCFB_EN,
	MT6351_PMIC_DA_QI_VRF12_OCFB_EN,
	MT6351_PMIC_RG_VRF12_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VRF12_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VRF12_DUMMY_LOAD,
	MT6351_PMIC_RG_VRF12_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VRF12_DUMMY_LOAD,
	MT6351_PMIC_RG_VA10_MODE_SET,
	MT6351_PMIC_RG_VA10_EN,
	MT6351_PMIC_RG_VA10_MODE_CTRL,
	MT6351_PMIC_RG_VA10_ON_CTRL,
	MT6351_PMIC_RG_VA10_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VA10_MODE,
	MT6351_PMIC_RG_VA10_STBTD,
	MT6351_PMIC_RG_VA10_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VA10_STB,
	MT6351_PMIC_DA_QI_VA10_EN,
	MT6351_PMIC_RG_VA10_OCFB_EN,
	MT6351_PMIC_DA_QI_VA10_OCFB_EN,
	MT6351_PMIC_RG_VA10_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VA10_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VA10_DUMMY_LOAD,
	MT6351_PMIC_RG_VA10_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VA10_DUMMY_LOAD,
	MT6351_PMIC_RG_VDRAM_MODE_SET,
	MT6351_PMIC_RG_VDRAM_EN,
	MT6351_PMIC_RG_VDRAM_MODE_CTRL,
	MT6351_PMIC_RG_VDRAM_ON_CTRL,
	MT6351_PMIC_RG_VDRAM_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VDRAM_MODE,
	MT6351_PMIC_RG_VDRAM_STBTD,
	MT6351_PMIC_RG_VDRAM_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VDRAM_STB,
	MT6351_PMIC_DA_QI_VDRAM_EN,
	MT6351_PMIC_RG_VDRAM_OCFB_EN,
	MT6351_PMIC_DA_QI_VDRAM_OCFB_EN,
	MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VDRAM_DUMMY_LOAD,
	MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VDRAM_DUMMY_LOAD,
	MT6351_PMIC_RG_VMIPI_MODE_SET,
	MT6351_PMIC_RG_VMIPI_EN,
	MT6351_PMIC_RG_VMIPI_MODE_CTRL,
	MT6351_PMIC_RG_VMIPI_ON_CTRL,
	MT6351_PMIC_RG_VMIPI_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VMIPI_MODE,
	MT6351_PMIC_RG_VMIPI_STBTD,
	MT6351_PMIC_RG_VMIPI_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VMIPI_STB,
	MT6351_PMIC_DA_QI_VMIPI_EN,
	MT6351_PMIC_RG_VMIPI_OCFB_EN,
	MT6351_PMIC_DA_QI_VMIPI_OCFB_EN,
	MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VMIPI_DUMMY_LOAD,
	MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VMIPI_DUMMY_LOAD,
	MT6351_PMIC_RG_VGP3_MODE_SET,
	MT6351_PMIC_RG_VGP3_EN,
	MT6351_PMIC_RG_VGP3_MODE_CTRL,
	MT6351_PMIC_RG_VGP3_ON_CTRL,
	MT6351_PMIC_RG_VGP3_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VGP3_MODE,
	MT6351_PMIC_RG_VGP3_STBTD,
	MT6351_PMIC_RG_VGP3_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VGP3_STB,
	MT6351_PMIC_DA_QI_VGP3_EN,
	MT6351_PMIC_RG_VGP3_OCFB_EN,
	MT6351_PMIC_DA_QI_VGP3_OCFB_EN,
	MT6351_PMIC_RG_VGP3_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VGP3_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VGP3_DUMMY_LOAD,
	MT6351_PMIC_RG_VGP3_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VGP3_DUMMY_LOAD,
	MT6351_PMIC_RG_VBIF28_MODE_SET,
	MT6351_PMIC_RG_VBIF28_EN,
	MT6351_PMIC_RG_VBIF28_MODE_CTRL,
	MT6351_PMIC_RG_VBIF28_ON_CTRL,
	MT6351_PMIC_RG_VBIF28_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VBIF28_MODE,
	MT6351_PMIC_RG_VBIF28_STBTD,
	MT6351_PMIC_RG_VBIF28_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VBIF28_STB,
	MT6351_PMIC_DA_QI_VBIF28_EN,
	MT6351_PMIC_RG_VBIF28_OCFB_EN,
	MT6351_PMIC_DA_QI_VBIF28_OCFB_EN,
	MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VBIF28_DUMMY_LOAD,
	MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VBIF28_DUMMY_LOAD,
	MT6351_PMIC_RG_VEFUSE_MODE_SET,
	MT6351_PMIC_RG_VEFUSE_EN,
	MT6351_PMIC_RG_VEFUSE_MODE_CTRL,
	MT6351_PMIC_RG_VEFUSE_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VEFUSE_MODE,
	MT6351_PMIC_RG_VEFUSE_STBTD,
	MT6351_PMIC_DA_QI_VEFUSE_STB,
	MT6351_PMIC_DA_QI_VEFUSE_EN,
	MT6351_PMIC_RG_VEFUSE_OCFB_EN,
	MT6351_PMIC_DA_QI_VEFUSE_OCFB_EN,
	MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD,
	MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VEFUSE_DUMMY_LOAD,
	MT6351_PMIC_RG_VCN33_MODE_SET,
	MT6351_PMIC_RG_VCN33_MODE_CTRL,
	MT6351_PMIC_RG_VCN33_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VCN33_MODE,
	MT6351_PMIC_RG_VCN33_STBTD,
	MT6351_PMIC_DA_QI_VCN33_STB,
	MT6351_PMIC_DA_QI_VCN33_EN,
	MT6351_PMIC_RG_VCN33_OCFB_EN,
	MT6351_PMIC_DA_QI_VCN33_OCFB_EN,
	MT6351_PMIC_RG_VCN33_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VCN33_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VCN33_DUMMY_LOAD,
	MT6351_PMIC_RG_VCN33_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VCN33_DUMMY_LOAD,
	MT6351_PMIC_RG_VCN33_EN_BT,
	MT6351_PMIC_RG_VCN33_ON_CTRL_BT,
	MT6351_PMIC_RG_VCN33_SRCLK_EN_SEL_BT,
	MT6351_PMIC_RG_VCN33_EN_WIFI,
	MT6351_PMIC_RG_VCN33_ON_CTRL_WIFI,
	MT6351_PMIC_RG_VCN33_SRCLK_EN_SEL_WIFI,
	MT6351_PMIC_RG_VLDO28_MODE_SET,
	MT6351_PMIC_RG_VLDO28_MODE_CTRL,
	MT6351_PMIC_RG_VLDO28_ON_CTRL,
	MT6351_PMIC_RG_VLDO28_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VLDO28_MODE,
	MT6351_PMIC_RG_VLDO28_STBTD,
	MT6351_PMIC_DA_QI_VLDO28_STB,
	MT6351_PMIC_DA_QI_VLDO28_EN,
	MT6351_PMIC_RG_VLDO28_OCFB_EN,
	MT6351_PMIC_DA_QI_VLDO28_OCFB_EN,
	MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VLDO28_DUMMY_LOAD,
	MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VLDO28_DUMMY_LOAD,
	MT6351_PMIC_RG_VLDO28_EN_0,
	MT6351_PMIC_RG_VLDO28_ON_CTRL_0,
	MT6351_PMIC_RG_VLDO28_SRCLK_EN_SEL_0,
	MT6351_PMIC_RG_VLDO28_EN_1,
	MT6351_PMIC_RG_VLDO28_ON_CTRL_1,
	MT6351_PMIC_RG_VLDO28_SRCLK_EN_SEL_1,
	MT6351_PMIC_RG_LDO_RSV1,
	MT6351_PMIC_RG_LDO_RSV0,
	MT6351_PMIC_RG_LDO_RSV2,
	MT6351_PMIC_RG_VMC_MODE_SET,
	MT6351_PMIC_RG_VMC_EN,
	MT6351_PMIC_RG_VMC_MODE_CTRL,
	MT6351_PMIC_RG_VMC_ON_CTRL,
	MT6351_PMIC_RG_VMC_SRCLK_MODE_SEL,
	MT6351_PMIC_DA_QI_VMC_MODE,
	MT6351_PMIC_RG_VMC_STBTD,
	MT6351_PMIC_RG_VMC_SRCLK_EN_SEL,
	MT6351_PMIC_DA_QI_VMC_STB,
	MT6351_PMIC_DA_QI_VMC_EN,
	MT6351_PMIC_RG_VMC_OCFB_EN,
	MT6351_PMIC_DA_QI_VMC_OCFB_EN,
	MT6351_PMIC_RG_VMC_DUMMY_LOAD_EN,
	MT6351_PMIC_RG_VMC_DUMMY_LOAD_CTRL,
	MT6351_PMIC_RG_VMC_DUMMY_LOAD,
	MT6351_PMIC_RG_VMC_DUMMY_LOAD_SRCLKEN_SEL,
	MT6351_PMIC_DA_QI_VMC_DUMMY_LOAD,
	MT6351_PMIC_RG_VMC_TRANS_EN,
	MT6351_PMIC_RG_VMC_TRANS_CTRL,
	MT6351_PMIC_RG_VMC_TRANS_ONCE,
	MT6351_PMIC_RG_VMC_INT_DIS_SEL,
	MT6351_PMIC_DA_QI_VMC_INT_DIS,
	MT6351_PMIC_RG_LDO_MANUAL_OFS_SEL,
	MT6351_PMIC_RG_LDO_MANUAL_OFS_EN,
	MT6351_PMIC_RG_LDO_CALI_RSV,
	MT6351_PMIC_RG_LDO_CALI_MODE_SEL,
	MT6351_PMIC_RG_LDO_MANUAL_MODE,
	MT6351_PMIC_RG_LDO_AUTO_START,
	MT6351_PMIC_RG_LDO_CALI_CLR,
	MT6351_PMIC_LDO_CALI_INC_COUNT,
	MT6351_PMIC_LDO_K_START,
	MT6351_PMIC_LDO_CALI_DONE,
	MT6351_PMIC_LDO_CALI_CNT,
	MT6351_PMIC_LDO_CALI_EFUSE_EN,
	MT6351_PMIC_DA_QI_VIO18_OFS_CAL_EN,
	MT6351_PMIC_AD_QI_VIO18_CAL_INDI,
	MT6351_PMIC_DA_QI_VIO18_OFS_SEL,
	MT6351_PMIC_LDO_DEGTD_SEL,
	MT6351_PMIC_RG_VRTC_EN,
	MT6351_PMIC_DA_QI_VRTC_EN,
	MT6351_PMIC_RG_ALDO_RESEV,
	MT6351_PMIC_RG_DLDO_RESEV,
	MT6351_PMIC_RG_SLDO_RESEV195,
	MT6351_PMIC_RG_SLDO_2_RESEV195,
	MT6351_PMIC_RG_SLDO_RESEV135,
	MT6351_PMIC_RG_SLDO_2_RESEV135,
	MT6351_PMIC_RG_VXO22_CAL,
	MT6351_PMIC_RG_VXO22_VOSEL,
	MT6351_PMIC_RG_VXO22_NDIS_EN,
	MT6351_PMIC_RG_VTCXO28_CAL,
	MT6351_PMIC_RG_VTCXO28_VOSEL,
	MT6351_PMIC_RG_VTCXO28_NDIS_EN,
	MT6351_PMIC_RG_VTCXO24_CAL,
	MT6351_PMIC_RG_VTCXO24_VOSEL,
	MT6351_PMIC_RG_VTCXO24_NDIS_EN,
	MT6351_PMIC_RG_VBIF28_CAL,
	MT6351_PMIC_RG_VBIF28_VOSEL,
	MT6351_PMIC_RG_VBIF28_NDIS_EN,
	MT6351_PMIC_RG_VCN28_CAL,
	MT6351_PMIC_RG_VCN28_VOSEL,
	MT6351_PMIC_RG_VCN28_NDIS_EN,
	MT6351_PMIC_RG_VMCH_CAL,
	MT6351_PMIC_RG_VMCH_VOSEL,
	MT6351_PMIC_RG_VMCH_NDIS_EN,
	MT6351_PMIC_RG_VMCH_OC_TRIM,
	MT6351_PMIC_RG_VMCH_N2LP_EHC_V18,
	MT6351_PMIC_RG_VEMC_CAL,
	MT6351_PMIC_RG_VEMC_VOSEL,
	MT6351_PMIC_RG_VEMC_NDIS_EN,
	MT6351_PMIC_RG_VEMC_OC_TRIM,
	MT6351_PMIC_RG_VEMC_N2LP_EHC_V18,
	MT6351_PMIC_RG_VCAMA_CAL,
	MT6351_PMIC_RG_VCAMA_VOSEL,
	MT6351_PMIC_RG_VCAMA_NDIS_EN,
	MT6351_PMIC_RG_VCAMA_FBSEL,
	MT6351_PMIC_RG_VCN33_CAL,
	MT6351_PMIC_RG_VCN33_VOSEL,
	MT6351_PMIC_RG_VCN33_NDIS_EN,
	MT6351_PMIC_RG_VCN33_N2LP_EHC_V18,
	MT6351_PMIC_RG_VIO28_CAL,
	MT6351_PMIC_RG_VIO28_VOSEL,
	MT6351_PMIC_RG_VIO28_NDIS_EN,
	MT6351_PMIC_RG_VIO28_LP_HIGH_SPEED_ENB,
	MT6351_PMIC_RG_VMC_CAL,
	MT6351_PMIC_RG_VMC_VOSEL,
	MT6351_PMIC_RG_VMC_NDIS_EN,
	MT6351_PMIC_RG_VMC_LP_HIGH_SPEED_ENB,
	MT6351_PMIC_RG_VIBR_CAL,
	MT6351_PMIC_RG_VIBR_VOSEL,
	MT6351_PMIC_RG_VIBR_NDIS_EN,
	MT6351_PMIC_RG_VIBR_LP_HIGH_SPEED_ENB,
	MT6351_PMIC_RG_VUSB33_CAL,
	MT6351_PMIC_RG_VUSB33_NDIS_EN,
	MT6351_PMIC_RG_VUSB33_OC_TRIM,
	MT6351_PMIC_RG_VSIM1_CAL,
	MT6351_PMIC_RG_VSIM1_VOSEL,
	MT6351_PMIC_RG_VSIM1_NDIS_EN,
	MT6351_PMIC_RG_VSIM1_STB_CAL,
	MT6351_PMIC_RG_VSIM1_STB_SEL,
	MT6351_PMIC_RG_VSIM1_OC_TRIM,
	MT6351_PMIC_RG_VSIM1_NDIS_EN_INT,
	MT6351_PMIC_RG_EFUSE_SIM1_MODE,
	MT6351_PMIC_RG_VSIM1_LP_HIGH_SPEED_ENB,
	MT6351_PMIC_RG_VSIM2_CAL,
	MT6351_PMIC_RG_VSIM2_VOSEL,
	MT6351_PMIC_RG_VSIM2_NDIS_EN,
	MT6351_PMIC_RG_VSIM2_STB_CAL,
	MT6351_PMIC_RG_VSIM2_STB_SEL,
	MT6351_PMIC_RG_VSIM2_OC_TRIM,
	MT6351_PMIC_RG_VSIM2_NDIS_EN_INT,
	MT6351_PMIC_RG_EFUSE_VSIM2_MODE,
	MT6351_PMIC_RG_VSIM2_LP_HIGH_SPEED_ENB,
	MT6351_PMIC_RG_VEFUSE_CAL,
	MT6351_PMIC_RG_VEFUSE_VOSEL,
	MT6351_PMIC_RG_VEFUSE_NDIS_EN,
	MT6351_PMIC_RG_VEFUSE_STB_CAL,
	MT6351_PMIC_RG_VEFUSE_STB_SEL,
	MT6351_PMIC_RG_VEFUSE_OC_TRIM,
	MT6351_PMIC_RG_VEFUSE_NDIS_EN_INT,
	MT6351_PMIC_RG_EFUSE_MODE_1,
	MT6351_PMIC_RG_VEFUSE_LP_HIGH_SPEED_ENB,
	MT6351_PMIC_RG_VA18_CAL,
	MT6351_PMIC_RG_VA18_VOSEL,
	MT6351_PMIC_RG_VA18_NDIS_EN,
	MT6351_PMIC_RG_VGP3_CAL,
	MT6351_PMIC_RG_VGP3_VOSEL,
	MT6351_PMIC_RG_VGP3_NDIS_EN,
	MT6351_PMIC_RG_VGP3_FT_DNMC_EN,
	MT6351_PMIC_RG_VCAMD_CAL,
	MT6351_PMIC_RG_VCAMD_VOSEL,
	MT6351_PMIC_RG_VCAMD_NDIS_EN,
	MT6351_PMIC_RG_VCAMD_RSV,
	MT6351_PMIC_RG_VCAMD_OC_TRIM,
	MT6351_PMIC_RG_VIO18_CAL,
	MT6351_PMIC_RG_VIO18_NDIS_EN,
	MT6351_PMIC_RG_VIO18_FT_DNMC_EN,
	MT6351_PMIC_RG_VRF18_CAL,
	MT6351_PMIC_RG_VRF18_VOSEL,
	MT6351_PMIC_RG_VRF18_NDIS_EN,
	MT6351_PMIC_RG_VRF18_FT_DNMC_EN,
	MT6351_PMIC_RG_VRF12_CAL,
	MT6351_PMIC_RG_VRF12_VOSEL,
	MT6351_PMIC_RG_VRF12_NDIS_EN,
	MT6351_PMIC_RG_VRF12_STB_SEL,
	MT6351_PMIC_RG_VA10_CAL,
	MT6351_PMIC_RG_VA10_VOSEL,
	MT6351_PMIC_RG_VA10_NDIS_EN,
	MT6351_PMIC_RG_VA10_STB_SEL,
	MT6351_PMIC_RG_VCAMIO_CAL,
	MT6351_PMIC_RG_VCAMIO_VOSEL,
	MT6351_PMIC_RG_VCAMIO_NDIS_EN,
	MT6351_PMIC_RG_VCAMIO_STB_SEL,
	MT6351_PMIC_RG_VCN18_CAL,
	MT6351_PMIC_RG_VCN18_VOSEL,
	MT6351_PMIC_RG_VCN18_NDIS_EN,
	MT6351_PMIC_RG_VCN18_STB_SEL,
	MT6351_PMIC_RG_VMIPI_CAL,
	MT6351_PMIC_RG_VMIPI_VOSEL,
	MT6351_PMIC_RG_VMIPI_NDIS_EN,
	MT6351_PMIC_RG_VMIPI_STB_SEL,
	MT6351_PMIC_RG_VSRAM_PROC_NDIS_EN,
	MT6351_PMIC_RG_VSRAM_PROC_NDIS_PLCUR,
	MT6351_PMIC_RG_VSRAM_PROC_STB_SEL,
	MT6351_PMIC_RG_VSRAM_PROC_PLCUR_EN,
	MT6351_PMIC_RG_VDRAM_CAL,
	MT6351_PMIC_RG_VDRAM_VOSEL,
	MT6351_PMIC_RG_VDRAM_NDIS_EN,
	MT6351_PMIC_RG_VDRAM_RSV,
	MT6351_PMIC_RG_VDRAM_OC_TRIM,
	MT6351_PMIC_RG_VLDO28_CAL,
	MT6351_PMIC_RG_VLDO28_NDIS_EN,
	MT6351_PMIC_RG_VLDO28_OC_TRIM,
	MT6351_PMIC_RG_VLDO28_N2LP_EHC_V18,
	MT6351_PMIC_BIF_COMMAND_0,
	MT6351_PMIC_BIF_COMMAND_1,
	MT6351_PMIC_BIF_COMMAND_2,
	MT6351_PMIC_BIF_COMMAND_3,
	MT6351_PMIC_BIF_COMMAND_4,
	MT6351_PMIC_BIF_COMMAND_5,
	MT6351_PMIC_BIF_COMMAND_6,
	MT6351_PMIC_BIF_COMMAND_7,
	MT6351_PMIC_BIF_COMMAND_8,
	MT6351_PMIC_BIF_COMMAND_9,
	MT6351_PMIC_BIF_COMMAND_10,
	MT6351_PMIC_BIF_COMMAND_11,
	MT6351_PMIC_BIF_COMMAND_12,
	MT6351_PMIC_BIF_COMMAND_13,
	MT6351_PMIC_BIF_COMMAND_14,
	MT6351_PMIC_BIF_RSV,
	MT6351_PMIC_BIF_COMMAND_TYPE,
	MT6351_PMIC_BIF_TRASFER_NUM,
	MT6351_PMIC_BIF_LOGIC_0_SET,
	MT6351_PMIC_BIF_LOGIC_1_SET,
	MT6351_PMIC_BIF_STOP_SET,
	MT6351_PMIC_BIF_DEBOUNCE_WND,
	MT6351_PMIC_BIF_DEBOUNCE_THD,
	MT6351_PMIC_BIF_DEBOUNCE_EN,
	MT6351_PMIC_BIF_READ_EXPECT_NUM,
	MT6351_PMIC_BIF_TRASACT_TRIGGER,
	MT6351_PMIC_BIF_DATA_NUM,
	MT6351_PMIC_BIF_RESPONSE,
	MT6351_PMIC_BIF_DATA_0,
	MT6351_PMIC_BIF_ACK_0,
	MT6351_PMIC_BIF_ERROR_0,
	MT6351_PMIC_BIF_DATA_1,
	MT6351_PMIC_BIF_ACK_1,
	MT6351_PMIC_BIF_ERROR_1,
	MT6351_PMIC_BIF_DATA_2,
	MT6351_PMIC_BIF_ACK_2,
	MT6351_PMIC_BIF_ERROR_2,
	MT6351_PMIC_BIF_DATA_3,
	MT6351_PMIC_BIF_ACK_3,
	MT6351_PMIC_BIF_ERROR_3,
	MT6351_PMIC_BIF_DATA_4,
	MT6351_PMIC_BIF_ACK_4,
	MT6351_PMIC_BIF_ERROR_4,
	MT6351_PMIC_BIF_DATA_5,
	MT6351_PMIC_BIF_ACK_5,
	MT6351_PMIC_BIF_ERROR_5,
	MT6351_PMIC_BIF_DATA_6,
	MT6351_PMIC_BIF_ACK_6,
	MT6351_PMIC_BIF_ERROR_6,
	MT6351_PMIC_BIF_DATA_7,
	MT6351_PMIC_BIF_ACK_7,
	MT6351_PMIC_BIF_ERROR_7,
	MT6351_PMIC_BIF_DATA_8,
	MT6351_PMIC_BIF_ACK_8,
	MT6351_PMIC_BIF_ERROR_8,
	MT6351_PMIC_BIF_DATA_9,
	MT6351_PMIC_BIF_ACK_9,
	MT6351_PMIC_BIF_ERROR_9,
	MT6351_PMIC_BIF_TEST_MODE0,
	MT6351_PMIC_BIF_TEST_MODE1,
	MT6351_PMIC_BIF_TEST_MODE2,
	MT6351_PMIC_BIF_TEST_MODE3,
	MT6351_PMIC_BIF_TEST_MODE4,
	MT6351_PMIC_BIF_TEST_MODE5,
	MT6351_PMIC_BIF_TEST_MODE6,
	MT6351_PMIC_BIF_TEST_MODE7,
	MT6351_PMIC_BIF_TEST_MODE8,
	MT6351_PMIC_BIF_BAT_LOST_SW,
	MT6351_PMIC_BIF_RX_DATA_SW,
	MT6351_PMIC_BIF_TX_DATA_SW,
	MT6351_PMIC_BIF_RX_EN_SW,
	MT6351_PMIC_BIF_TX_EN_SW,
	MT6351_PMIC_BIF_BACK_NORMAL,
	MT6351_PMIC_BIF_IRQ_CLR,
	MT6351_PMIC_BIF_BAT_LOST_GATED,
	MT6351_PMIC_BIF_IRQ,
	MT6351_PMIC_BIF_TIMEOUT,
	MT6351_PMIC_BIF_BAT_LOST,
	MT6351_PMIC_BIF_TOTAL_VALID,
	MT6351_PMIC_BIF_BUS_STATUS,
	MT6351_PMIC_BIF_POWER_UP_COUNT,
	MT6351_PMIC_BIF_POWER_UP,
	MT6351_PMIC_BIF_RX_ERROR_UNKNOWN,
	MT6351_PMIC_BIF_RX_ERROR_INSUFF,
	MT6351_PMIC_BIF_RX_ERROR_LOWPHASE,
	MT6351_PMIC_BIF_RX_STATE,
	MT6351_PMIC_BIF_FLOW_CTL_STATE,
	MT6351_PMIC_BIF_TX_STATE,
	MT6351_PMIC_AD_QI_BIF_RX_DATA,
	MT6351_PMIC_DA_QI_BIF_RX_EN,
	MT6351_PMIC_DA_QI_BIF_TX_DATA,
	MT6351_PMIC_DA_QI_BIF_TX_EN,
	MT6351_PMIC_BIF_TX_DATA_FIANL,
	MT6351_PMIC_BIF_RX_DATA_SAMPLING,
	MT6351_PMIC_BIF_RX_DATA_RECOVERY,
	MT6351_PMIC_RG_BATON_HT_EN,
	MT6351_PMIC_RG_BATON_HT_EN_DLY_TIME,
	MT6351_PMIC_DA_QI_BATON_HT_EN,
	MT6351_PMIC_BIF_TIMEOUT_SET,
	MT6351_PMIC_BIF_RX_DEG_WND,
	MT6351_PMIC_BIF_RX_DEG_EN,
	MT6351_PMIC_BIF_RSV1,
	MT6351_PMIC_BIF_RSV0,
	MT6351_PMIC_RG_OTP_PA,
	MT6351_PMIC_RG_OTP_PDIN,
	MT6351_PMIC_RG_OTP_PTM,
	MT6351_PMIC_RG_OTP_PWE,
	MT6351_PMIC_RG_OTP_PPROG,
	MT6351_PMIC_RG_OTP_PWE_SRC,
	MT6351_PMIC_RG_OTP_PROG_PKEY,
	MT6351_PMIC_RG_OTP_RD_PKEY,
	MT6351_PMIC_RG_OTP_RD_TRIG,
	MT6351_PMIC_RG_RD_RDY_BYPASS,
	MT6351_PMIC_RG_SKIP_OTP_OUT,
	MT6351_PMIC_RG_OTP_RD_SW,
	MT6351_PMIC_RG_OTP_DOUT_SW,
	MT6351_PMIC_RG_OTP_RD_BUSY,
	MT6351_PMIC_RG_OTP_RD_ACK,
	MT6351_PMIC_RG_OTP_PA_SW,
	MT6351_PMIC_RG_OTP_DOUT_0_15,
	MT6351_PMIC_RG_OTP_DOUT_16_31,
	MT6351_PMIC_RG_OTP_DOUT_32_47,
	MT6351_PMIC_RG_OTP_DOUT_48_63,
	MT6351_PMIC_RG_OTP_DOUT_64_79,
	MT6351_PMIC_RG_OTP_DOUT_80_95,
	MT6351_PMIC_RG_OTP_DOUT_96_111,
	MT6351_PMIC_RG_OTP_DOUT_112_127,
	MT6351_PMIC_RG_OTP_DOUT_128_143,
	MT6351_PMIC_RG_OTP_DOUT_144_159,
	MT6351_PMIC_RG_OTP_DOUT_160_175,
	MT6351_PMIC_RG_OTP_DOUT_176_191,
	MT6351_PMIC_RG_OTP_DOUT_192_207,
	MT6351_PMIC_RG_OTP_DOUT_208_223,
	MT6351_PMIC_RG_OTP_DOUT_224_239,
	MT6351_PMIC_RG_OTP_DOUT_240_255,
	MT6351_PMIC_RG_OTP_DOUT_256_271,
	MT6351_PMIC_RG_OTP_DOUT_272_287,
	MT6351_PMIC_RG_OTP_DOUT_288_303,
	MT6351_PMIC_RG_OTP_DOUT_304_319,
	MT6351_PMIC_RG_OTP_DOUT_320_335,
	MT6351_PMIC_RG_OTP_DOUT_336_351,
	MT6351_PMIC_RG_OTP_DOUT_352_367,
	MT6351_PMIC_RG_OTP_DOUT_368_383,
	MT6351_PMIC_RG_OTP_DOUT_384_399,
	MT6351_PMIC_RG_OTP_DOUT_400_415,
	MT6351_PMIC_RG_OTP_DOUT_416_431,
	MT6351_PMIC_RG_OTP_DOUT_432_447,
	MT6351_PMIC_RG_OTP_DOUT_448_463,
	MT6351_PMIC_RG_OTP_DOUT_464_479,
	MT6351_PMIC_RG_OTP_DOUT_480_495,
	MT6351_PMIC_RG_OTP_DOUT_496_511,
	MT6351_PMIC_RG_OTP_VAL_0_15,
	MT6351_PMIC_RG_OTP_VAL_16_31,
	MT6351_PMIC_RG_OTP_VAL_32_47,
	MT6351_PMIC_RG_OTP_VAL_48_63,
	MT6351_PMIC_RG_OTP_VAL_64_79,
	MT6351_PMIC_RG_OTP_VAL_80_95,
	MT6351_PMIC_RG_OTP_VAL_96_111,
	MT6351_PMIC_RG_OTP_VAL_112_127,
	MT6351_PMIC_RG_OTP_VAL_128_143,
	MT6351_PMIC_RG_OTP_VAL_144_159,
	MT6351_PMIC_RG_OTP_VAL_160_175,
	MT6351_PMIC_RG_OTP_VAL_176_191,
	MT6351_PMIC_RG_OTP_VAL_192_207,
	MT6351_PMIC_RG_OTP_VAL_208_223,
	MT6351_PMIC_RG_OTP_VAL_224_239,
	MT6351_PMIC_RG_OTP_VAL_240_255,
	MT6351_PMIC_RG_OTP_VAL_256_271,
	MT6351_PMIC_RG_OTP_VAL_272_287,
	MT6351_PMIC_RG_OTP_VAL_288_303,
	MT6351_PMIC_RG_OTP_VAL_304_319,
	MT6351_PMIC_RG_OTP_VAL_320_335,
	MT6351_PMIC_RG_OTP_VAL_336_351,
	MT6351_PMIC_RG_OTP_VAL_352_367,
	MT6351_PMIC_RG_OTP_VAL_368_383,
	MT6351_PMIC_RG_OTP_VAL_384_399,
	MT6351_PMIC_RG_OTP_VAL_400_415,
	MT6351_PMIC_RG_OTP_VAL_416_431,
	MT6351_PMIC_RG_OTP_VAL_432_447,
	MT6351_PMIC_RG_OTP_VAL_448_463,
	MT6351_PMIC_RG_OTP_VAL_464_479,
	MT6351_PMIC_RG_OTP_VAL_480_495,
	MT6351_PMIC_RG_OTP_VAL_496_511,
	MT6351_PMIC_MIX_EOSC32_STP_LPDTB,
	MT6351_PMIC_MIX_EOSC32_STP_LPDEN,
	MT6351_PMIC_MIX_XOSC32_STP_PWDB,
	MT6351_PMIC_MIX_XOSC32_STP_LPDTB,
	MT6351_PMIC_MIX_XOSC32_STP_LPDEN,
	MT6351_PMIC_MIX_XOSC32_STP_LPDRST,
	MT6351_PMIC_MIX_XOSC32_STP_CALI,
	MT6351_PMIC_STMP_MODE,
	MT6351_PMIC_MIX_EOSC32_STP_CHOP_EN,
	MT6351_PMIC_MIX_DCXO_STP_LVSH_EN,
	MT6351_PMIC_MIX_PMU_STP_DDLO_VRTC,
	MT6351_PMIC_MIX_PMU_STP_DDLO_VRTC_EN,
	MT6351_PMIC_MIX_RTC_STP_XOSC32_ENB,
	MT6351_PMIC_MIX_DCXO_STP_TEST_DEGLITCH_MODE,
	MT6351_PMIC_MIX_EOSC32_STP_RSV,
	MT6351_PMIC_MIX_EOSC32_VCT_EN,
	MT6351_PMIC_MIX_EOSC32_OPT,
	MT6351_PMIC_MIX_DCXO_STP_LVSH_EN_INT,
	MT6351_PMIC_MIX_RTC_GPIO_COREDETB,
	MT6351_PMIC_MIX_RTC_GPIO_F32KOB,
	MT6351_PMIC_MIX_RTC_GPIO_GPO,
	MT6351_PMIC_MIX_RTC_GPIO_OE,
	MT6351_PMIC_MIX_RTC_STP_DEBUG_OUT,
	MT6351_PMIC_MIX_RTC_STP_DEBUG_SEL,
	MT6351_PMIC_MIX_RTC_STP_K_EOSC32_EN,
	MT6351_PMIC_MIX_RTC_STP_EMBCK_SEL,
	MT6351_PMIC_MIX_STP_BBWAKEUP,
	MT6351_PMIC_MIX_STP_RTC_DDLO,
	MT6351_PMIC_MIX_RTC_XOSC32_ENB,
	MT6351_PMIC_MIX_EFUSE_XOSC32_ENB_OPT,
	MT6351_PMIC_FG_ON,
	MT6351_PMIC_FG_CAL,
	MT6351_PMIC_FG_AUTOCALRATE,
	MT6351_PMIC_FG_SW_CR,
	MT6351_PMIC_FG_SW_READ_PRE,
	MT6351_PMIC_FG_LATCHDATA_ST,
	MT6351_PMIC_FG_SW_CLEAR,
	MT6351_PMIC_FG_OFFSET_RST,
	MT6351_PMIC_FG_TIME_RST,
	MT6351_PMIC_FG_CHARGE_RST,
	MT6351_PMIC_FG_SW_RSTCLR,
	MT6351_PMIC_FG_CAR_34_19,
	MT6351_PMIC_FG_CAR_18_03,
	MT6351_PMIC_FG_CAR_02_00,
	MT6351_PMIC_FG_NTER_32_17,
	MT6351_PMIC_FG_NTER_16_01,
	MT6351_PMIC_FG_NTER_00,
	MT6351_PMIC_FG_BLTR_31_16,
	MT6351_PMIC_FG_BLTR_15_00,
	MT6351_PMIC_FG_BFTR_31_16,
	MT6351_PMIC_FG_BFTR_15_00,
	MT6351_PMIC_FG_CURRENT_OUT,
	MT6351_PMIC_FG_ADJUST_OFFSET_VALUE,
	MT6351_PMIC_FG_OFFSET,
	MT6351_PMIC_RG_FGANALOGTEST,
	MT6351_PMIC_RG_FGRINTMODE,
	MT6351_PMIC_RG_SPARE,
	MT6351_PMIC_FG_OSR,
	MT6351_PMIC_FG_ADJ_OFFSET_EN,
	MT6351_PMIC_FG_ADC_AUTORST,
	MT6351_PMIC_FG_FIR1BYPASS,
	MT6351_PMIC_FG_FIR2BYPASS,
	MT6351_PMIC_FG_L_CUR_INT_STS,
	MT6351_PMIC_FG_H_CUR_INT_STS,
	MT6351_PMIC_FG_L_INT_STS,
	MT6351_PMIC_FG_H_INT_STS,
	MT6351_PMIC_FG_ADC_RSTDETECT,
	MT6351_PMIC_FG_SLP_EN,
	MT6351_PMIC_FG_ZCV_DET_EN,
	MT6351_PMIC_RG_FG_AUXADC_R,
	MT6351_PMIC_DA_FGADC_EN,
	MT6351_PMIC_DA_FGCAL_EN,
	MT6351_PMIC_DA_FG_RST,
	MT6351_PMIC_FG_CIC2,
	MT6351_PMIC_FG_SLP_CUR_TH,
	MT6351_PMIC_FG_SLP_TIME,
	MT6351_PMIC_FG_SRCVOLTEN_FTIME,
	MT6351_PMIC_FG_DET_TIME,
	MT6351_PMIC_FG_ZCV_CAR_34_19,
	MT6351_PMIC_FG_ZCV_CAR_18_03,
	MT6351_PMIC_FG_ZCV_CAR_02_00,
	MT6351_PMIC_FG_ZCV_CURR,
	MT6351_PMIC_FG_R_CURR,
	MT6351_PMIC_FG_MODE,
	MT6351_PMIC_FG_RST_SW,
	MT6351_PMIC_FG_FGCAL_EN_SW,
	MT6351_PMIC_FG_FGADC_EN_SW,
	MT6351_PMIC_FG_RSV1,
	MT6351_PMIC_FG_TEST_MODE0,
	MT6351_PMIC_FG_TEST_MODE1,
	MT6351_PMIC_FG_GAIN,
	MT6351_PMIC_FG_CUR_HTH,
	MT6351_PMIC_FG_CUR_LTH,
	MT6351_PMIC_FG_ZCV_DET_TIME,
	MT6351_PMIC_FG_ZCV_CAR_TH_33_19,
	MT6351_PMIC_FG_ZCV_CAR_TH_18_03,
	MT6351_PMIC_FG_ZCV_CAR_TH_02_00,
	MT6351_PMIC_SYSTEM_INFO_CON0,
	MT6351_PMIC_SYSTEM_INFO_CON1,
	MT6351_PMIC_SYSTEM_INFO_CON2,
	MT6351_PMIC_SYSTEM_INFO_CON3,
	MT6351_PMIC_SYSTEM_INFO_CON4,
	MT6351_PMIC_RG_AUDDACLPWRUP_VAUDP32,
	MT6351_PMIC_RG_AUDDACRPWRUP_VAUDP32,
	MT6351_PMIC_RG_AUD_DAC_PWR_UP_VA32,
	MT6351_PMIC_RG_AUD_DAC_PWL_UP_VA32,
	MT6351_PMIC_RG_AUDHSPWRUP_VAUDP32,
	MT6351_PMIC_RG_AUDHPLPWRUP_VAUDP32,
	MT6351_PMIC_RG_AUDHPRPWRUP_VAUDP32,
	MT6351_PMIC_RG_AUDHSMUXINPUTSEL_VAUDP32,
	MT6351_PMIC_RG_AUDHPLMUXINPUTSEL_VAUDP32,
	MT6351_PMIC_RG_AUDHPRMUXINPUTSEL_VAUDP32,
	MT6351_PMIC_RG_AUDHSSCDISABLE_VAUDP32,
	MT6351_PMIC_RG_AUDHPLSCDISABLE_VAUDP32,
	MT6351_PMIC_RG_AUDHPRSCDISABLE_VAUDP32,
	MT6351_PMIC_RG_AUDHSBSCCURRENT_VAUDP32,
	MT6351_PMIC_RG_AUDHPLBSCCURRENT_VAUDP32,
	MT6351_PMIC_RG_AUDHPRBSCCURRENT_VAUDP32,
	MT6351_PMIC_RG_AUDHSSTARTUP_VAUDP32,
	MT6351_PMIC_RG_AUDHPSTARTUP_VAUDP32,
	MT6351_PMIC_RG_AUDBGBON_VAUDP32,
	MT6351_PMIC_RG_PRECHARGEBUF_EN_VAUDP32,
	MT6351_PMIC_RG_HSINPUTSTBENH_VAUDP32,
	MT6351_PMIC_RG_HSOUTPUTSTBENH_VAUDP32,
	MT6351_PMIC_RG_HSINPUTRESET0_VAUDP32,
	MT6351_PMIC_RG_HSOUTPUTRESET0_VAUDP32,
	MT6351_PMIC_RG_HSOUT_SHORTVCM_VAUDP32,
	MT6351_PMIC_RG_HPINPUTSTBENH_VAUDP32,
	MT6351_PMIC_RG_HPOUTPUTSTBENH_VAUDP32,
	MT6351_PMIC_RG_HPINPUTRESET0_VAUDP32,
	MT6351_PMIC_RG_HPOUTPUTRESET0_VAUDP32,
	MT6351_PMIC_RG_HPOUT_SHORTVCM_VAUDP32,
	MT6351_PMIC_RG_HPOUTSTB_RSEL_VAUDP32,
	MT6351_PMIC_RG_LINENOISEENH_VAUDP32,
	MT6351_PMIC_RG_AUDHPLTRIM_VAUDP32,
	MT6351_PMIC_RG_AUDHPRTRIM_VAUDP32,
	MT6351_PMIC_RG_AUDHPTRIM_EN_VAUDP32,
	MT6351_PMIC_RG_AUDHPLFINETRIM_VAUDP32,
	MT6351_PMIC_RG_AUDHPRFINETRIM_VAUDP32,
	MT6351_PMIC_RG_AUDLOLPWRUP_VAUDP32,
	MT6351_PMIC_RG_AUDLOLMUXINPUTSEL_VAUDP32,
	MT6351_PMIC_RG_AUDLOLSCDISABLE_VAUDP32,
	MT6351_PMIC_RG_AUDLOLBSCCURRENT_VAUDP32,
	MT6351_PMIC_RG_AUDLOSTARTUP_VAUDP32,
	MT6351_PMIC_RG_LOINPUTSTBENH_VAUDP32,
	MT6351_PMIC_RG_LOOUTPUTSTBENH_VAUDP32,
	MT6351_PMIC_RG_LOINPUTRESET0_VAUDP32,
	MT6351_PMIC_RG_LOOUTPUTRESET0_VAUDP32,
	MT6351_PMIC_RG_LOOUT_SHORTVCM_VAUDP32,
	MT6351_PMIC_RG_LOOUTSTB_RSEL_VAUDP32,
	MT6351_PMIC_RG_AUDLOLTRIM_VAUDP32,
	MT6351_PMIC_RG_AUDLOTRIM_EN_VAUDP32,
	MT6351_PMIC_RG_AUDLOLFINETRIM_VAUDP32,
	MT6351_PMIC_RG_AUDTRIMBUF_EN_VAUDP32,
	MT6351_PMIC_RG_AUDTRIMBUF_INPUTMUXSEL_VAUDP32,
	MT6351_PMIC_RG_AUDTRIMBUF_GAINSEL_VAUDP32,
	MT6351_PMIC_RG_AUDHPSPKDET_EN_VAUDP32,
	MT6351_PMIC_RG_AUDHPSPKDET_INPUTMUXSEL_VAUDP32,
	MT6351_PMIC_RG_AUDHPSPKDET_OUTPUTMUXSEL_VAUDP32,
	MT6351_PMIC_RG_ABIDEC_RSVD0_VA32,
	MT6351_PMIC_RG_ABIDEC_RSVD1_VA32,
	MT6351_PMIC_RG_ABIDEC_RSVD0_VAUDP32,
	MT6351_PMIC_RG_ABIDEC_RSVD1_VAUDP32,
	MT6351_PMIC_RG_AUDZCDMUXSEL_VAUDP32,
	MT6351_PMIC_RG_AUDZCDCLKSEL_VAUDP32,
	MT6351_PMIC_RG_AUDBIASADJ_0_VAUDP32,
	MT6351_PMIC_RG_AUDBIASADJ_1_VAUDP32,
	MT6351_PMIC_RG_AUDIBIASPWRDN_VAUDP32,
	MT6351_PMIC_RG_RSTB_DECODER_VA32,
	MT6351_PMIC_RG_SEL_DECODER_96K_VA32,
	MT6351_PMIC_RG_SEL_DELAY_VCORE,
	MT6351_PMIC_RG_AUDGLB_PWRDN_VA32,
	MT6351_PMIC_RG_LCLDO_DEC_EN_VA32,
	MT6351_PMIC_RG_LCLDO_DEC_PDDIS_EN_VA18,
	MT6351_PMIC_RG_LCLDO_DEC_REMOTE_SENSE_VA18,
	MT6351_PMIC_RG_AUDPMU_RSVD_VA18,
	MT6351_PMIC_RG_NVREG_EN_VAUDP32,
	MT6351_PMIC_RG_NVREG_PULL0V_VAUDP32,
	MT6351_PMIC_RG_AUDGLB_LP2_VOW_EN_VA32,
	MT6351_PMIC_RG_AUDPREAMPLON,
	MT6351_PMIC_RG_AUDPREAMPLDCCEN,
	MT6351_PMIC_RG_AUDPREAMPLDCPRECHARGE,
	MT6351_PMIC_RG_AUDPREAMPLPGATEST,
	MT6351_PMIC_RG_AUDPREAMPLINPUTSEL,
	MT6351_PMIC_RG_AUDPREAMPLVSCALE,
	MT6351_PMIC_RG_AUDPREAMPLGAIN,
	MT6351_PMIC_RG_AUDADCLPWRUP,
	MT6351_PMIC_RG_AUDADCLINPUTSEL,
	MT6351_PMIC_RG_AUDPREAMPRON,
	MT6351_PMIC_RG_AUDPREAMPRDCCEN,
	MT6351_PMIC_RG_AUDPREAMPRDCPRECHARGE,
	MT6351_PMIC_RG_AUDPREAMPRPGATEST,
	MT6351_PMIC_RG_AUDPREAMPRINPUTSEL,
	MT6351_PMIC_RG_AUDPREAMPRVSCALE,
	MT6351_PMIC_RG_AUDPREAMPRGAIN,
	MT6351_PMIC_RG_AUDADCRPWRUP,
	MT6351_PMIC_RG_AUDADCRINPUTSEL,
	MT6351_PMIC_RG_AUDULHALFBIAS,
	MT6351_PMIC_RG_AUDGLBVOWLPWEN,
	MT6351_PMIC_RG_AUDPREAMPLPEN,
	MT6351_PMIC_RG_AUDADC1STSTAGELPEN,
	MT6351_PMIC_RG_AUDADC2NDSTAGELPEN,
	MT6351_PMIC_RG_AUDADCFLASHLPEN,
	MT6351_PMIC_RG_AUDPREAMPIDDTEST,
	MT6351_PMIC_RG_AUDADC1STSTAGEIDDTEST,
	MT6351_PMIC_RG_AUDADC2NDSTAGEIDDTEST,
	MT6351_PMIC_RG_AUDADCREFBUFIDDTEST,
	MT6351_PMIC_RG_AUDADCFLASHIDDTEST,
	MT6351_PMIC_RG_AUDADCDAC0P25FS,
	MT6351_PMIC_RG_AUDADCCLKSEL,
	MT6351_PMIC_RG_AUDADCCLKSOURCE,
	MT6351_PMIC_RG_AUDADCCLKGENMODE,
	MT6351_PMIC_RG_AUDADCCLKRSTB,
	MT6351_PMIC_RG_AUDPREAMPAAFEN,
	MT6351_PMIC_RG_DCCVCMBUFLPMODSEL,
	MT6351_PMIC_RG_DCCVCMBUFLPSWEN,
	MT6351_PMIC_RG_AUDSPAREPGA,
	MT6351_PMIC_RG_AUDADC1STSTAGESDENB,
	MT6351_PMIC_RG_AUDADC2NDSTAGERESET,
	MT6351_PMIC_RG_AUDADC3RDSTAGERESET,
	MT6351_PMIC_RG_AUDADCFSRESET,
	MT6351_PMIC_RG_AUDADCWIDECM,
	MT6351_PMIC_RG_AUDADCNOPATEST,
	MT6351_PMIC_RG_AUDADCBYPASS,
	MT6351_PMIC_RG_AUDADCFFBYPASS,
	MT6351_PMIC_RG_AUDADCDACFBCURRENT,
	MT6351_PMIC_RG_AUDADCDACIDDTEST,
	MT6351_PMIC_RG_AUDADCDACNRZ,
	MT6351_PMIC_RG_AUDADCNODEM,
	MT6351_PMIC_RG_AUDADCDACTEST,
	MT6351_PMIC_RG_AUDADCTESTDATA,
	MT6351_PMIC_RG_AUDRCTUNEL,
	MT6351_PMIC_RG_AUDRCTUNELSEL,
	MT6351_PMIC_RG_AUDRCTUNER,
	MT6351_PMIC_RG_AUDRCTUNERSEL,
	MT6351_PMIC_RG_AUDSPAREVA30,
	MT6351_PMIC_RG_AUDSPAREVA18,
	MT6351_PMIC_RG_AUDDIGMICEN,
	MT6351_PMIC_RG_AUDDIGMICBIAS,
	MT6351_PMIC_RG_DMICHPCLKEN,
	MT6351_PMIC_RG_AUDDIGMICPDUTY,
	MT6351_PMIC_RG_AUDDIGMICNDUTY,
	MT6351_PMIC_RG_DMICMONEN,
	MT6351_PMIC_RG_DMICMONSEL,
	MT6351_PMIC_RG_AUDSPAREVMIC,
	MT6351_PMIC_RG_AUDPWDBMICBIAS0,
	MT6351_PMIC_RG_AUDMICBIAS0DCSW0P1EN,
	MT6351_PMIC_RG_AUDMICBIAS0DCSW0P2EN,
	MT6351_PMIC_RG_AUDMICBIAS0DCSW0NEN,
	MT6351_PMIC_RG_AUDMICBIAS0VREF,
	MT6351_PMIC_RG_AUDMICBIAS0LOWPEN,
	MT6351_PMIC_RG_AUDPWDBMICBIAS2,
	MT6351_PMIC_RG_AUDMICBIAS2DCSW2P1EN,
	MT6351_PMIC_RG_AUDMICBIAS2DCSW2P2EN,
	MT6351_PMIC_RG_AUDMICBIAS2DCSW2NEN,
	MT6351_PMIC_RG_AUDMICBIAS2VREF,
	MT6351_PMIC_RG_AUDMICBIAS2LOWPEN,
	MT6351_PMIC_RG_AUDPWDBMICBIAS1,
	MT6351_PMIC_RG_AUDMICBIAS1DCSW1PEN,
	MT6351_PMIC_RG_AUDMICBIAS1DCSW1NEN,
	MT6351_PMIC_RG_AUDMICBIAS1VREF,
	MT6351_PMIC_RG_AUDMICBIAS1LOWPEN,
	MT6351_PMIC_RG_AUDMICBIAS1DCSW3PEN,
	MT6351_PMIC_RG_AUDMICBIAS1DCSW3NEN,
	MT6351_PMIC_RG_AUDMICBIAS2DCSW3PEN,
	MT6351_PMIC_RG_AUDMICBIAS2DCSW3NEN,
	MT6351_PMIC_RG_BANDGAPGEN,
	MT6351_PMIC_RG_AUDACCDETMICBIAS0PULLLOW,
	MT6351_PMIC_RG_AUDACCDETMICBIAS1PULLLOW,
	MT6351_PMIC_RG_AUDACCDETMICBIAS2PULLLOW,
	MT6351_PMIC_RG_AUDACCDETVIN1PULLLOW,
	MT6351_PMIC_RG_AUDACCDETVTHACAL,
	MT6351_PMIC_RG_AUDACCDETVTHBCAL,
	MT6351_PMIC_RG_ACCDET1SEL,
	MT6351_PMIC_RG_ACCDET2SEL,
	MT6351_PMIC_RG_SWBUFMODSEL,
	MT6351_PMIC_RG_SWBUFSWEN,
	MT6351_PMIC_RG_EINTCOMPVTH,
	MT6351_PMIC_RG_EINTCONFIGACCDET,
	MT6351_PMIC_RG_NVDETCMPEN,
	MT6351_PMIC_RG_NVDETVTH,
	MT6351_PMIC_RG_NVMODSEL,
	MT6351_PMIC_RG_NVCMPSWEN,
	MT6351_PMIC_RG_AUDENCSPAREVA30,
	MT6351_PMIC_RG_AUDENCSPAREVA18,
	MT6351_PMIC_RG_PLL_EN,
	MT6351_PMIC_RG_PLLBS_RST,
	MT6351_PMIC_RG_PLL_DCKO_SEL,
	MT6351_PMIC_RG_PLL_DIV1,
	MT6351_PMIC_RG_PLL_RLATCH_EN,
	MT6351_PMIC_RG_PLL_PDIV1_EN,
	MT6351_PMIC_RG_PLL_PDIV1,
	MT6351_PMIC_RG_PLL_BC,
	MT6351_PMIC_RG_PLL_BP,
	MT6351_PMIC_RG_PLL_BR,
	MT6351_PMIC_RG_CKO_SEL,
	MT6351_PMIC_RG_PLL_IBSEL,
	MT6351_PMIC_RG_PLL_CKT_SEL,
	MT6351_PMIC_RG_PLL_VCT_EN,
	MT6351_PMIC_RG_PLL_CKT_EN,
	MT6351_PMIC_RG_PLL_HPM_EN,
	MT6351_PMIC_RG_PLL_DCHP_EN,
	MT6351_PMIC_RG_PLL_CDIV,
	MT6351_PMIC_RG_VCOBAND,
	MT6351_PMIC_RG_CKDRV_EN,
	MT6351_PMIC_RG_PLL_DCHP_AEN,
	MT6351_PMIC_RG_PLL_RSVA,
	MT6351_PMIC_RGS_AUDRCTUNELREAD,
	MT6351_PMIC_RGS_AUDRCTUNERREAD,
	MT6351_PMIC_RG_DIVCKS_CHG,
	MT6351_PMIC_RG_DIVCKS_ON,
	MT6351_PMIC_RG_DIVCKS_PRG,
	MT6351_PMIC_RG_DIVCKS_PWD_NCP,
	MT6351_PMIC_RG_DIVCKS_PWD_NCP_ST_SEL,
	MT6351_PMIC_AUXADC_ADC_OUT_CH0,
	MT6351_PMIC_AUXADC_ADC_RDY_CH0,
	MT6351_PMIC_AUXADC_ADC_OUT_CH1,
	MT6351_PMIC_AUXADC_ADC_RDY_CH1,
	MT6351_PMIC_AUXADC_ADC_OUT_CH2,
	MT6351_PMIC_AUXADC_ADC_RDY_CH2,
	MT6351_PMIC_AUXADC_ADC_OUT_CH3,
	MT6351_PMIC_AUXADC_ADC_RDY_CH3,
	MT6351_PMIC_AUXADC_ADC_OUT_CH4,
	MT6351_PMIC_AUXADC_ADC_RDY_CH4,
	MT6351_PMIC_AUXADC_ADC_OUT_CH5,
	MT6351_PMIC_AUXADC_ADC_RDY_CH5,
	MT6351_PMIC_AUXADC_ADC_OUT_CH6,
	MT6351_PMIC_AUXADC_ADC_RDY_CH6,
	MT6351_PMIC_AUXADC_ADC_OUT_CH7,
	MT6351_PMIC_AUXADC_ADC_RDY_CH7,
	MT6351_PMIC_AUXADC_ADC_OUT_CH8,
	MT6351_PMIC_AUXADC_ADC_RDY_CH8,
	MT6351_PMIC_AUXADC_ADC_OUT_CH9,
	MT6351_PMIC_AUXADC_ADC_RDY_CH9,
	MT6351_PMIC_AUXADC_ADC_OUT_CH10,
	MT6351_PMIC_AUXADC_ADC_RDY_CH10,
	MT6351_PMIC_AUXADC_ADC_OUT_CH11,
	MT6351_PMIC_AUXADC_ADC_RDY_CH11,
	MT6351_PMIC_AUXADC_ADC_OUT_CH12_15,
	MT6351_PMIC_AUXADC_ADC_RDY_CH12_15,
	MT6351_PMIC_AUXADC_ADC_OUT_THR_HW,
	MT6351_PMIC_AUXADC_ADC_RDY_THR_HW,
	MT6351_PMIC_AUXADC_ADC_OUT_LBAT,
	MT6351_PMIC_AUXADC_ADC_RDY_LBAT,
	MT6351_PMIC_AUXADC_ADC_OUT_LBAT2,
	MT6351_PMIC_AUXADC_ADC_RDY_LBAT2,
	MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_GPS,
	MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_GPS,
	MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_MD,
	MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_MD,
	MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_AP,
	MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_AP,
	MT6351_PMIC_AUXADC_ADC_OUT_CH4_BY_MD,
	MT6351_PMIC_AUXADC_ADC_RDY_CH4_BY_MD,
	MT6351_PMIC_AUXADC_ADC_OUT_WAKEUP_PCHR,
	MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_PCHR,
	MT6351_PMIC_AUXADC_ADC_OUT_WAKEUP_SWCHR,
	MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_SWCHR,
	MT6351_PMIC_AUXADC_ADC_OUT_CH0_BY_MD,
	MT6351_PMIC_AUXADC_ADC_RDY_CH0_BY_MD,
	MT6351_PMIC_AUXADC_ADC_OUT_CH0_BY_AP,
	MT6351_PMIC_AUXADC_ADC_RDY_CH0_BY_AP,
	MT6351_PMIC_AUXADC_ADC_OUT_CH1_BY_MD,
	MT6351_PMIC_AUXADC_ADC_RDY_CH1_BY_MD,
	MT6351_PMIC_AUXADC_ADC_OUT_CH1_BY_AP,
	MT6351_PMIC_AUXADC_ADC_RDY_CH1_BY_AP,
	MT6351_PMIC_AUXADC_ADC_OUT_VISMPS0,
	MT6351_PMIC_AUXADC_ADC_RDY_VISMPS0,
	MT6351_PMIC_AUXADC_ADC_OUT_FGADC1,
	MT6351_PMIC_AUXADC_ADC_RDY_FGADC1,
	MT6351_PMIC_AUXADC_ADC_OUT_FGADC2,
	MT6351_PMIC_AUXADC_ADC_RDY_FGADC2,
	MT6351_PMIC_AUXADC_ADC_OUT_IMP,
	MT6351_PMIC_AUXADC_ADC_RDY_IMP,
	MT6351_PMIC_AUXADC_ADC_OUT_IMP_AVG,
	MT6351_PMIC_AUXADC_ADC_RDY_IMP_AVG,
	MT6351_PMIC_AUXADC_ADC_OUT_RAW,
	MT6351_PMIC_AUXADC_ADC_OUT_MDRT,
	MT6351_PMIC_AUXADC_ADC_RDY_MDRT,
	MT6351_PMIC_AUXADC_ADC_OUT_MDBG,
	MT6351_PMIC_AUXADC_ADC_RDY_MDBG,
	MT6351_PMIC_AUXADC_ADC_OUT_JEITA,
	MT6351_PMIC_AUXADC_ADC_RDY_JEITA,
	MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_GPS,
	MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_GPS,
	MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_MD,
	MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_MD,
	MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_AP,
	MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_AP,
	MT6351_PMIC_AUXADC_ADC_OUT_DCXO_MDRT,
	MT6351_PMIC_AUXADC_ADC_RDY_DCXO_MDRT,
	MT6351_PMIC_AUXADC_ADC_OUT_NAG,
	MT6351_PMIC_AUXADC_ADC_RDY_NAG,
	MT6351_PMIC_AUXADC_BUF_OUT_00,
	MT6351_PMIC_AUXADC_BUF_RDY_00,
	MT6351_PMIC_AUXADC_BUF_OUT_01,
	MT6351_PMIC_AUXADC_BUF_RDY_01,
	MT6351_PMIC_AUXADC_BUF_OUT_02,
	MT6351_PMIC_AUXADC_BUF_RDY_02,
	MT6351_PMIC_AUXADC_BUF_OUT_03,
	MT6351_PMIC_AUXADC_BUF_RDY_03,
	MT6351_PMIC_AUXADC_BUF_OUT_04,
	MT6351_PMIC_AUXADC_BUF_RDY_04,
	MT6351_PMIC_AUXADC_BUF_OUT_05,
	MT6351_PMIC_AUXADC_BUF_RDY_05,
	MT6351_PMIC_AUXADC_BUF_OUT_06,
	MT6351_PMIC_AUXADC_BUF_RDY_06,
	MT6351_PMIC_AUXADC_BUF_OUT_07,
	MT6351_PMIC_AUXADC_BUF_RDY_07,
	MT6351_PMIC_AUXADC_BUF_OUT_08,
	MT6351_PMIC_AUXADC_BUF_RDY_08,
	MT6351_PMIC_AUXADC_BUF_OUT_09,
	MT6351_PMIC_AUXADC_BUF_RDY_09,
	MT6351_PMIC_AUXADC_BUF_OUT_10,
	MT6351_PMIC_AUXADC_BUF_RDY_10,
	MT6351_PMIC_AUXADC_BUF_OUT_11,
	MT6351_PMIC_AUXADC_BUF_RDY_11,
	MT6351_PMIC_AUXADC_BUF_OUT_12,
	MT6351_PMIC_AUXADC_BUF_RDY_12,
	MT6351_PMIC_AUXADC_BUF_OUT_13,
	MT6351_PMIC_AUXADC_BUF_RDY_13,
	MT6351_PMIC_AUXADC_BUF_OUT_14,
	MT6351_PMIC_AUXADC_BUF_RDY_14,
	MT6351_PMIC_AUXADC_BUF_OUT_15,
	MT6351_PMIC_AUXADC_BUF_RDY_15,
	MT6351_PMIC_AUXADC_BUF_OUT_16,
	MT6351_PMIC_AUXADC_BUF_RDY_16,
	MT6351_PMIC_AUXADC_BUF_OUT_17,
	MT6351_PMIC_AUXADC_BUF_RDY_17,
	MT6351_PMIC_AUXADC_BUF_OUT_18,
	MT6351_PMIC_AUXADC_BUF_RDY_18,
	MT6351_PMIC_AUXADC_BUF_OUT_19,
	MT6351_PMIC_AUXADC_BUF_RDY_19,
	MT6351_PMIC_AUXADC_BUF_OUT_20,
	MT6351_PMIC_AUXADC_BUF_RDY_20,
	MT6351_PMIC_AUXADC_BUF_OUT_21,
	MT6351_PMIC_AUXADC_BUF_RDY_21,
	MT6351_PMIC_AUXADC_BUF_OUT_22,
	MT6351_PMIC_AUXADC_BUF_RDY_22,
	MT6351_PMIC_AUXADC_BUF_OUT_23,
	MT6351_PMIC_AUXADC_BUF_RDY_23,
	MT6351_PMIC_AUXADC_BUF_OUT_24,
	MT6351_PMIC_AUXADC_BUF_RDY_24,
	MT6351_PMIC_AUXADC_BUF_OUT_25,
	MT6351_PMIC_AUXADC_BUF_RDY_25,
	MT6351_PMIC_AUXADC_BUF_OUT_26,
	MT6351_PMIC_AUXADC_BUF_RDY_26,
	MT6351_PMIC_AUXADC_BUF_OUT_27,
	MT6351_PMIC_AUXADC_BUF_RDY_27,
	MT6351_PMIC_AUXADC_BUF_OUT_28,
	MT6351_PMIC_AUXADC_BUF_RDY_28,
	MT6351_PMIC_AUXADC_BUF_OUT_29,
	MT6351_PMIC_AUXADC_BUF_RDY_29,
	MT6351_PMIC_AUXADC_BUF_OUT_30,
	MT6351_PMIC_AUXADC_BUF_RDY_30,
	MT6351_PMIC_AUXADC_BUF_OUT_31,
	MT6351_PMIC_AUXADC_BUF_RDY_31,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_LBAT,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_LBAT2,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_VISMPS0,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_WAKEUP,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_MDRT,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_JEITA,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_MDRT,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_MDBG,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_SHARE,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_IMP,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_FGADC1,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_FGADC2,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_AP,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_MD,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_THR_HW,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_THR_MD,
	MT6351_PMIC_AUXADC_ADC_BUSY_IN_NAG,
	MT6351_PMIC_AUXADC_RQST_CH0,
	MT6351_PMIC_AUXADC_RQST_CH1,
	MT6351_PMIC_AUXADC_RQST_CH2,
	MT6351_PMIC_AUXADC_RQST_CH3,
	MT6351_PMIC_AUXADC_RQST_CH4,
	MT6351_PMIC_AUXADC_RQST_CH5,
	MT6351_PMIC_AUXADC_RQST_CH6,
	MT6351_PMIC_AUXADC_RQST_CH7,
	MT6351_PMIC_AUXADC_RQST_CH8,
	MT6351_PMIC_AUXADC_RQST_CH9,
	MT6351_PMIC_AUXADC_RQST_CH10,
	MT6351_PMIC_AUXADC_RQST_CH11,
	MT6351_PMIC_AUXADC_RQST_CH12,
	MT6351_PMIC_AUXADC_RQST_CH13,
	MT6351_PMIC_AUXADC_RQST_CH14,
	MT6351_PMIC_AUXADC_RQST_CH15,
	MT6351_PMIC_AUXADC_RQST0_SET,
	MT6351_PMIC_AUXADC_RQST0_CLR,
	MT6351_PMIC_AUXADC_RQST_CH0_BY_MD,
	MT6351_PMIC_AUXADC_RQST_CH1_BY_MD,
	MT6351_PMIC_AUXADC_RQST_RSV0,
	MT6351_PMIC_AUXADC_RQST_CH4_BY_MD,
	MT6351_PMIC_AUXADC_RQST_CH7_BY_MD,
	MT6351_PMIC_AUXADC_RQST_CH7_BY_GPS,
	MT6351_PMIC_AUXADC_RQST_DCXO_BY_MD,
	MT6351_PMIC_AUXADC_RQST_DCXO_BY_GPS,
	MT6351_PMIC_AUXADC_RQST_RSV1,
	MT6351_PMIC_AUXADC_RQST1_SET,
	MT6351_PMIC_AUXADC_RQST1_CLR,
	MT6351_PMIC_AUXADC_CK_ON_EXTD,
	MT6351_PMIC_AUXADC_SRCLKEN_SRC_SEL,
	MT6351_PMIC_AUXADC_ADC_PWDB,
	MT6351_PMIC_AUXADC_ADC_PWDB_SWCTRL,
	MT6351_PMIC_AUXADC_STRUP_CK_ON_ENB,
	MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_CLR,
	MT6351_PMIC_AUXADC_SRCLKEN_CK_EN,
	MT6351_PMIC_AUXADC_CK_AON_GPS,
	MT6351_PMIC_AUXADC_CK_AON_MD,
	MT6351_PMIC_AUXADC_CK_AON,
	MT6351_PMIC_AUXADC_CON0_SET,
	MT6351_PMIC_AUXADC_CON0_CLR,
	MT6351_PMIC_AUXADC_AVG_NUM_SMALL,
	MT6351_PMIC_AUXADC_AVG_NUM_LARGE,
	MT6351_PMIC_AUXADC_SPL_NUM,
	MT6351_PMIC_AUXADC_AVG_NUM_SEL,
	MT6351_PMIC_AUXADC_AVG_NUM_SEL_SHARE,
	MT6351_PMIC_AUXADC_AVG_NUM_SEL_LBAT,
	MT6351_PMIC_AUXADC_AVG_NUM_SEL_VISMPS,
	MT6351_PMIC_AUXADC_AVG_NUM_SEL_WAKEUP,
	MT6351_PMIC_AUXADC_SPL_NUM_LARGE,
	MT6351_PMIC_AUXADC_SPL_NUM_SLEEP,
	MT6351_PMIC_AUXADC_SPL_NUM_SLEEP_SEL,
	MT6351_PMIC_AUXADC_SPL_NUM_SEL,
	MT6351_PMIC_AUXADC_SPL_NUM_SEL_SHARE,
	MT6351_PMIC_AUXADC_SPL_NUM_SEL_LBAT,
	MT6351_PMIC_AUXADC_SPL_NUM_SEL_VISMPS,
	MT6351_PMIC_AUXADC_SPL_NUM_SEL_WAKEUP,
	MT6351_PMIC_AUXADC_TRIM_CH0_SEL,
	MT6351_PMIC_AUXADC_TRIM_CH1_SEL,
	MT6351_PMIC_AUXADC_TRIM_CH2_SEL,
	MT6351_PMIC_AUXADC_TRIM_CH3_SEL,
	MT6351_PMIC_AUXADC_TRIM_CH4_SEL,
	MT6351_PMIC_AUXADC_TRIM_CH5_SEL,
	MT6351_PMIC_AUXADC_TRIM_CH6_SEL,
	MT6351_PMIC_AUXADC_TRIM_CH7_SEL,
	MT6351_PMIC_AUXADC_TRIM_CH8_SEL,
	MT6351_PMIC_AUXADC_TRIM_CH9_SEL,
	MT6351_PMIC_AUXADC_TRIM_CH10_SEL,
	MT6351_PMIC_AUXADC_TRIM_CH11_SEL,
	MT6351_PMIC_AUXADC_ADC_2S_COMP_ENB,
	MT6351_PMIC_AUXADC_ADC_TRIM_COMP,
	MT6351_PMIC_AUXADC_SW_GAIN_TRIM,
	MT6351_PMIC_AUXADC_SW_OFFSET_TRIM,
	MT6351_PMIC_AUXADC_RNG_EN,
	MT6351_PMIC_AUXADC_DATA_REUSE_SEL,
	MT6351_PMIC_AUXADC_TEST_MODE,
	MT6351_PMIC_AUXADC_BIT_SEL,
	MT6351_PMIC_AUXADC_START_SW,
	MT6351_PMIC_AUXADC_START_SWCTRL,
	MT6351_PMIC_AUXADC_TS_VBE_SEL,
	MT6351_PMIC_AUXADC_TS_VBE_SEL_SWCTRL,
	MT6351_PMIC_AUXADC_VBUF_EN,
	MT6351_PMIC_AUXADC_VBUF_EN_SWCTRL,
	MT6351_PMIC_AUXADC_OUT_SEL,
	MT6351_PMIC_AUXADC_DA_DAC,
	MT6351_PMIC_AUXADC_DA_DAC_SWCTRL,
	MT6351_PMIC_AD_AUXADC_COMP,
	MT6351_PMIC_RG_VBUF_EXTEN,
	MT6351_PMIC_RG_VBUF_CALEN,
	MT6351_PMIC_RG_VBUF_BYP,
	MT6351_PMIC_RG_AUX_RSV,
	MT6351_PMIC_RG_AUXADC_CALI,
	MT6351_PMIC_AUXADC_ADCIN_VSEN_EN,
	MT6351_PMIC_AUXADC_ADCIN_VBAT_EN,
	MT6351_PMIC_AUXADC_ADCIN_VSEN_MUX_EN,
	MT6351_PMIC_AUXADC_ADCIN_VSEN_EXT_BATON_EN,
	MT6351_PMIC_AUXADC_ADCIN_CHR_EN,
	MT6351_PMIC_AUXADC_ADCIN_BATON_TDET_EN,
	MT6351_PMIC_AUXADC_ACCDET_ANASWCTRL_EN,
	MT6351_PMIC_AUXADC_DIG0_RSV0,
	MT6351_PMIC_AUXADC_CHSEL,
	MT6351_PMIC_AUXADC_SWCTRL_EN,
	MT6351_PMIC_AUXADC_SOURCE_LBAT_SEL,
	MT6351_PMIC_AUXADC_SOURCE_LBAT2_SEL,
	MT6351_PMIC_AUXADC_DIG0_RSV2,
	MT6351_PMIC_AUXADC_DIG1_RSV2,
	MT6351_PMIC_AUXADC_DAC_EXTD,
	MT6351_PMIC_AUXADC_DAC_EXTD_EN,
	MT6351_PMIC_AUXADC_PMU_THR_PDN_SW,
	MT6351_PMIC_AUXADC_PMU_THR_PDN_SEL,
	MT6351_PMIC_AUXADC_PMU_THR_PDN_STATUS,
	MT6351_PMIC_AUXADC_DIG0_RSV1,
	MT6351_PMIC_AUXADC_START_SHADE_NUM,
	MT6351_PMIC_AUXADC_START_SHADE_EN,
	MT6351_PMIC_AUXADC_START_SHADE_SEL,
	MT6351_PMIC_AUXADC_AUTORPT_PRD,
	MT6351_PMIC_AUXADC_AUTORPT_EN,
	MT6351_PMIC_AUXADC_LBAT_DEBT_MAX,
	MT6351_PMIC_AUXADC_LBAT_DEBT_MIN,
	MT6351_PMIC_AUXADC_LBAT_DET_PRD_15_0,
	MT6351_PMIC_AUXADC_LBAT_DET_PRD_19_16,
	MT6351_PMIC_AUXADC_LBAT_VOLT_MAX,
	MT6351_PMIC_AUXADC_LBAT_IRQ_EN_MAX,
	MT6351_PMIC_AUXADC_LBAT_EN_MAX,
	MT6351_PMIC_AUXADC_LBAT_MAX_IRQ_B,
	MT6351_PMIC_AUXADC_LBAT_VOLT_MIN,
	MT6351_PMIC_AUXADC_LBAT_IRQ_EN_MIN,
	MT6351_PMIC_AUXADC_LBAT_EN_MIN,
	MT6351_PMIC_AUXADC_LBAT_MIN_IRQ_B,
	MT6351_PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MAX,
	MT6351_PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MIN,
	MT6351_PMIC_AUXADC_ACCDET_AUTO_SPL,
	MT6351_PMIC_AUXADC_ACCDET_AUTO_RQST_CLR,
	MT6351_PMIC_AUXADC_ACCDET_DIG1_RSV0,
	MT6351_PMIC_AUXADC_ACCDET_DIG0_RSV0,
	MT6351_PMIC_AUXADC_THR_DEBT_MAX,
	MT6351_PMIC_AUXADC_THR_DEBT_MIN,
	MT6351_PMIC_AUXADC_THR_DET_PRD_15_0,
	MT6351_PMIC_AUXADC_THR_DET_PRD_19_16,
	MT6351_PMIC_AUXADC_THR_VOLT_MAX,
	MT6351_PMIC_AUXADC_THR_IRQ_EN_MAX,
	MT6351_PMIC_AUXADC_THR_EN_MAX,
	MT6351_PMIC_AUXADC_THR_MAX_IRQ_B,
	MT6351_PMIC_AUXADC_THR_VOLT_MIN,
	MT6351_PMIC_AUXADC_THR_IRQ_EN_MIN,
	MT6351_PMIC_AUXADC_THR_EN_MIN,
	MT6351_PMIC_AUXADC_THR_MIN_IRQ_B,
	MT6351_PMIC_AUXADC_THR_DEBOUNCE_COUNT_MAX,
	MT6351_PMIC_AUXADC_THR_DEBOUNCE_COUNT_MIN,
	MT6351_PMIC_EFUSE_GAIN_CH4_TRIM,
	MT6351_PMIC_EFUSE_OFFSET_CH4_TRIM,
	MT6351_PMIC_EFUSE_GAIN_CH0_TRIM,
	MT6351_PMIC_EFUSE_OFFSET_CH0_TRIM,
	MT6351_PMIC_EFUSE_GAIN_CH7_TRIM,
	MT6351_PMIC_EFUSE_OFFSET_CH7_TRIM,
	MT6351_PMIC_AUXADC_FGADC_START_SW,
	MT6351_PMIC_AUXADC_FGADC_START_SEL,
	MT6351_PMIC_AUXADC_FGADC_R_SW,
	MT6351_PMIC_AUXADC_FGADC_R_SEL,
	MT6351_PMIC_AUXADC_DBG_DIG0_RSV2,
	MT6351_PMIC_AUXADC_DBG_DIG1_RSV2,
	MT6351_PMIC_AUXADC_IMPEDANCE_CNT,
	MT6351_PMIC_AUXADC_IMPEDANCE_CHSEL,
	MT6351_PMIC_AUXADC_IMPEDANCE_IRQ_CLR,
	MT6351_PMIC_AUXADC_IMPEDANCE_IRQ_STATUS,
	MT6351_PMIC_AUXADC_CLR_IMP_CNT_STOP,
	MT6351_PMIC_AUXADC_IMPEDANCE_MODE,
	MT6351_PMIC_AUXADC_IMP_AUTORPT_PRD,
	MT6351_PMIC_AUXADC_IMP_AUTORPT_EN,
	MT6351_PMIC_AUXADC_VISMPS0_DEBT_MAX,
	MT6351_PMIC_AUXADC_VISMPS0_DEBT_MIN,
	MT6351_PMIC_AUXADC_VISMPS0_DET_PRD_15_0,
	MT6351_PMIC_AUXADC_VISMPS0_DET_PRD_19_16,
	MT6351_PMIC_AUXADC_VISMPS0_VOLT_MAX,
	MT6351_PMIC_AUXADC_VISMPS0_IRQ_EN_MAX,
	MT6351_PMIC_AUXADC_VISMPS0_EN_MAX,
	MT6351_PMIC_AUXADC_VISMPS0_MAX_IRQ_B,
	MT6351_PMIC_AUXADC_VISMPS0_VOLT_MIN,
	MT6351_PMIC_AUXADC_VISMPS0_IRQ_EN_MIN,
	MT6351_PMIC_AUXADC_VISMPS0_EN_MIN,
	MT6351_PMIC_AUXADC_VISMPS0_MIN_IRQ_B,
	MT6351_PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MAX,
	MT6351_PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MIN,
	MT6351_PMIC_AUXADC_LBAT2_DEBT_MAX,
	MT6351_PMIC_AUXADC_LBAT2_DEBT_MIN,
	MT6351_PMIC_AUXADC_LBAT2_DET_PRD_15_0,
	MT6351_PMIC_AUXADC_LBAT2_DET_PRD_19_16,
	MT6351_PMIC_AUXADC_LBAT2_VOLT_MAX,
	MT6351_PMIC_AUXADC_LBAT2_IRQ_EN_MAX,
	MT6351_PMIC_AUXADC_LBAT2_EN_MAX,
	MT6351_PMIC_AUXADC_LBAT2_MAX_IRQ_B,
	MT6351_PMIC_AUXADC_LBAT2_VOLT_MIN,
	MT6351_PMIC_AUXADC_LBAT2_IRQ_EN_MIN,
	MT6351_PMIC_AUXADC_LBAT2_EN_MIN,
	MT6351_PMIC_AUXADC_LBAT2_MIN_IRQ_B,
	MT6351_PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MAX,
	MT6351_PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MIN,
	MT6351_PMIC_AUXADC_MDBG_DET_PRD,
	MT6351_PMIC_AUXADC_MDBG_DET_EN,
	MT6351_PMIC_AUXADC_MDBG_R_PTR,
	MT6351_PMIC_AUXADC_MDBG_W_PTR,
	MT6351_PMIC_AUXADC_MDBG_BUF_LENGTH,
	MT6351_PMIC_AUXADC_MDRT_DET_PRD,
	MT6351_PMIC_AUXADC_MDRT_DET_EN,
	MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_CNT,
	MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_CLR,
	MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START,
	MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_SEL,
	MT6351_PMIC_AUXADC_MDRT_DET_WKUP_EN,
	MT6351_PMIC_AUXADC_MDRT_DET_SRCLKEN_IND,
	MT6351_PMIC_AUXADC_JEITA_IRQ_EN,
	MT6351_PMIC_AUXADC_JEITA_EN,
	MT6351_PMIC_AUXADC_JEITA_DET_PRD,
	MT6351_PMIC_AUXADC_JEITA_DEBT,
	MT6351_PMIC_AUXADC_JEITA_MIPI_DIS,
	MT6351_PMIC_AUXADC_JEITA_VOLT_HOT,
	MT6351_PMIC_AUXADC_JEITA_HOT_IRQ,
	MT6351_PMIC_AUXADC_JEITA_VOLT_WARM,
	MT6351_PMIC_AUXADC_JEITA_WARM_IRQ,
	MT6351_PMIC_AUXADC_JEITA_VOLT_COOL,
	MT6351_PMIC_AUXADC_JEITA_COOL_IRQ,
	MT6351_PMIC_AUXADC_JEITA_VOLT_COLD,
	MT6351_PMIC_AUXADC_JEITA_COLD_IRQ,
	MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COLD,
	MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COOL,
	MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_WARM,
	MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_HOT,
	MT6351_PMIC_AUXADC_DCXO_MDRT_DET_PRD,
	MT6351_PMIC_AUXADC_DCXO_MDRT_DET_EN,
	MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT,
	MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR,
	MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_EN,
	MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL,
	MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START,
	MT6351_PMIC_AUXADC_DCXO_MDRT_DET_SRCLKEN_IND,
	MT6351_PMIC_AUXADC_DCXO_CH4_MUX_AP_SEL,
	MT6351_PMIC_AUXADC_NAG_EN,
	MT6351_PMIC_AUXADC_NAG_CLR,
	MT6351_PMIC_AUXADC_NAG_VBAT1_SEL,
	MT6351_PMIC_AUXADC_NAG_PRD,
	MT6351_PMIC_AUXADC_NAG_IRQ_EN,
	MT6351_PMIC_AUXADC_NAG_C_DLTV_IRQ,
	MT6351_PMIC_AUXADC_NAG_ZCV,
	MT6351_PMIC_AUXADC_NAG_C_DLTV_TH_15_0,
	MT6351_PMIC_AUXADC_NAG_C_DLTV_TH_26_16,
	MT6351_PMIC_AUXADC_NAG_CNT_15_0,
	MT6351_PMIC_AUXADC_NAG_CNT_25_16,
	MT6351_PMIC_AUXADC_NAG_DLTV,
	MT6351_PMIC_AUXADC_NAG_C_DLTV_15_0,
	MT6351_PMIC_AUXADC_NAG_C_DLTV_26_16,
	MT6351_PMIC_AD_AUDACCDETCMPOC,
	MT6351_PMIC_RG_AUDACCDETANASWCTRLENB,
	MT6351_PMIC_RG_ACCDETSEL,
	MT6351_PMIC_RG_AUDACCDETSWCTRL,
	MT6351_PMIC_RG_AUDACCDETTVDET,
	MT6351_PMIC_AUDACCDETAUXADCSWCTRL,
	MT6351_PMIC_AUDACCDETAUXADCSWCTRL_SEL,
	MT6351_PMIC_RG_AUDACCDETRSV,
	MT6351_PMIC_ACCDET_EN,
	MT6351_PMIC_ACCDET_SEQ_INIT,
	MT6351_PMIC_ACCDET_EINTDET_EN,
	MT6351_PMIC_ACCDET_EINT_SEQ_INIT,
	MT6351_PMIC_ACCDET_NEGVDET_EN,
	MT6351_PMIC_ACCDET_NEGVDET_EN_CTRL,
	MT6351_PMIC_ACCDET_ANASWCTRL_SEL,
	MT6351_PMIC_ACCDET_CMP_PWM_EN,
	MT6351_PMIC_ACCDET_VTH_PWM_EN,
	MT6351_PMIC_ACCDET_MBIAS_PWM_EN,
	MT6351_PMIC_ACCDET_EINT_PWM_EN,
	MT6351_PMIC_ACCDET_CMP_PWM_IDLE,
	MT6351_PMIC_ACCDET_VTH_PWM_IDLE,
	MT6351_PMIC_ACCDET_MBIAS_PWM_IDLE,
	MT6351_PMIC_ACCDET_EINT_PWM_IDLE,
	MT6351_PMIC_ACCDET_PWM_WIDTH,
	MT6351_PMIC_ACCDET_PWM_THRESH,
	MT6351_PMIC_ACCDET_RISE_DELAY,
	MT6351_PMIC_ACCDET_FALL_DELAY,
	MT6351_PMIC_ACCDET_DEBOUNCE0,
	MT6351_PMIC_ACCDET_DEBOUNCE1,
	MT6351_PMIC_ACCDET_DEBOUNCE2,
	MT6351_PMIC_ACCDET_DEBOUNCE3,
	MT6351_PMIC_ACCDET_DEBOUNCE4,
	MT6351_PMIC_ACCDET_IVAL_CUR_IN,
	MT6351_PMIC_ACCDET_EINT_IVAL_CUR_IN,
	MT6351_PMIC_ACCDET_IVAL_SAM_IN,
	MT6351_PMIC_ACCDET_EINT_IVAL_SAM_IN,
	MT6351_PMIC_ACCDET_IVAL_MEM_IN,
	MT6351_PMIC_ACCDET_EINT_IVAL_MEM_IN,
	MT6351_PMIC_ACCDET_EINT_IVAL_SEL,
	MT6351_PMIC_ACCDET_IVAL_SEL,
	MT6351_PMIC_ACCDET_IRQ,
	MT6351_PMIC_ACCDET_NEGV_IRQ,
	MT6351_PMIC_ACCDET_EINT_IRQ,
	MT6351_PMIC_ACCDET_IRQ_CLR,
	MT6351_PMIC_ACCDET_NEGV_IRQ_CLR,
	MT6351_PMIC_ACCDET_EINT_IRQ_CLR,
	MT6351_PMIC_ACCDET_EINT_IRQ_POLARITY,
	MT6351_PMIC_ACCDET_TEST_MODE0,
	MT6351_PMIC_ACCDET_TEST_MODE1,
	MT6351_PMIC_ACCDET_TEST_MODE2,
	MT6351_PMIC_ACCDET_TEST_MODE3,
	MT6351_PMIC_ACCDET_TEST_MODE4,
	MT6351_PMIC_ACCDET_TEST_MODE5,
	MT6351_PMIC_ACCDET_PWM_SEL,
	MT6351_PMIC_ACCDET_IN_SW,
	MT6351_PMIC_ACCDET_CMP_EN_SW,
	MT6351_PMIC_ACCDET_VTH_EN_SW,
	MT6351_PMIC_ACCDET_MBIAS_EN_SW,
	MT6351_PMIC_ACCDET_PWM_EN_SW,
	MT6351_PMIC_ACCDET_IN,
	MT6351_PMIC_ACCDET_CUR_IN,
	MT6351_PMIC_ACCDET_SAM_IN,
	MT6351_PMIC_ACCDET_MEM_IN,
	MT6351_PMIC_ACCDET_STATE,
	MT6351_PMIC_ACCDET_MBIAS_CLK,
	MT6351_PMIC_ACCDET_VTH_CLK,
	MT6351_PMIC_ACCDET_CMP_CLK,
	MT6351_PMIC_DA_NI_AUDACCDETAUXADCSWCTRL,
	MT6351_PMIC_ACCDET_EINT_DEB_SEL,
	MT6351_PMIC_ACCDET_EINT_DEBOUNCE,
	MT6351_PMIC_ACCDET_EINT_PWM_THRESH,
	MT6351_PMIC_ACCDET_EINT_PWM_WIDTH,
	MT6351_PMIC_ACCDET_NEGV_THRESH,
	MT6351_PMIC_ACCDET_EINT_PWM_FALL_DELAY,
	MT6351_PMIC_ACCDET_EINT_PWM_RISE_DELAY,
	MT6351_PMIC_ACCDET_TEST_MODE13,
	MT6351_PMIC_ACCDET_TEST_MODE12,
	MT6351_PMIC_ACCDET_NVDETECTOUT_SW,
	MT6351_PMIC_ACCDET_TEST_MODE11,
	MT6351_PMIC_ACCDET_TEST_MODE10,
	MT6351_PMIC_ACCDET_EINTCMPOUT_SW,
	MT6351_PMIC_ACCDET_TEST_MODE9,
	MT6351_PMIC_ACCDET_TEST_MODE8,
	MT6351_PMIC_ACCDET_AUXADC_CTRL_SW,
	MT6351_PMIC_ACCDET_TEST_MODE7,
	MT6351_PMIC_ACCDET_TEST_MODE6,
	MT6351_PMIC_ACCDET_EINTCMP_EN_SW,
	MT6351_PMIC_ACCDET_EINT_STATE,
	MT6351_PMIC_ACCDET_AUXADC_DEBOUNCE_END,
	MT6351_PMIC_ACCDET_AUXADC_CONNECT_PRE,
	MT6351_PMIC_ACCDET_EINT_CUR_IN,
	MT6351_PMIC_ACCDET_EINT_SAM_IN,
	MT6351_PMIC_ACCDET_EINT_MEM_IN,
	MT6351_PMIC_AD_NVDETECTOUT,
	MT6351_PMIC_AD_EINTCMPOUT,
	MT6351_PMIC_DA_NI_EINTCMPEN,
	MT6351_PMIC_ACCDET_NEGV_COUNT_IN,
	MT6351_PMIC_ACCDET_NEGV_EN_FINAL,
	MT6351_PMIC_ACCDET_NEGV_COUNT_END,
	MT6351_PMIC_ACCDET_NEGV_MINU,
	MT6351_PMIC_ACCDET_NEGV_ADD,
	MT6351_PMIC_ACCDET_NEGV_CMP,
	MT6351_PMIC_ACCDET_CUR_DEB,
	MT6351_PMIC_ACCDET_EINT_CUR_DEB,
	MT6351_PMIC_ACCDET_RSV_CON0,
	MT6351_PMIC_ACCDET_RSV_CON1,
	MT6351_PMIC_ACCDET_AUXADC_CONNECT_TIME,
	MT6351_PMIC_RG_VCDT_HV_EN,
	MT6351_PMIC_RGS_CHR_LDO_DET,
	MT6351_PMIC_RG_PCHR_AUTOMODE,
	MT6351_PMIC_RG_CSDAC_EN,
	MT6351_PMIC_RG_NORM_CHR_EN,
	MT6351_PMIC_RGS_CHRDET,
	MT6351_PMIC_RGS_VCDT_LV_DET,
	MT6351_PMIC_RGS_VCDT_HV_DET,
	MT6351_PMIC_RG_VCDT_LV_VTH,
	MT6351_PMIC_RG_VCDT_HV_VTH,
	MT6351_PMIC_RG_VBAT_CV_EN,
	MT6351_PMIC_RG_VBAT_CC_EN,
	MT6351_PMIC_RG_CS_EN,
	MT6351_PMIC_RGS_CS_DET,
	MT6351_PMIC_RGS_VBAT_CV_DET,
	MT6351_PMIC_RGS_VBAT_CC_DET,
	MT6351_PMIC_RG_VBAT_NORM_CV_VTH,
	MT6351_PMIC_RG_VBAT_CC_VTH,
	MT6351_PMIC_RG_NORM_CS_VTH,
	MT6351_PMIC_RG_PCHR_TOHTC,
	MT6351_PMIC_RG_PCHR_TOLTC,
	MT6351_PMIC_RG_VBAT_OV_EN,
	MT6351_PMIC_RG_VBAT_OV_VTH,
	MT6351_PMIC_RG_VBAT_OV_DEG,
	MT6351_PMIC_RGS_VBAT_OV_DET,
	MT6351_PMIC_RG_BATON_EN,
	MT6351_PMIC_RG_BATON_HT_EN_RSV0,
	MT6351_PMIC_BATON_TDET_EN,
	MT6351_PMIC_RG_BATON_HT_TRIM,
	MT6351_PMIC_RG_BATON_HT_TRIM_SET,
	MT6351_PMIC_RG_BATON_TDET_EN,
	MT6351_PMIC_RG_CSDAC_DATA,
	MT6351_PMIC_RG_FRC_CSVTH_USBDL,
	MT6351_PMIC_RGS_PCHR_FLAG_OUT,
	MT6351_PMIC_RG_PCHR_FLAG_EN,
	MT6351_PMIC_RG_OTG_BVALID_EN,
	MT6351_PMIC_RGS_OTG_BVALID_DET,
	MT6351_PMIC_RG_PCHR_FLAG_SEL,
	MT6351_PMIC_RG_PCHR_TESTMODE,
	MT6351_PMIC_RG_CSDAC_TESTMODE,
	MT6351_PMIC_RG_PCHR_RST,
	MT6351_PMIC_RG_PCHR_FT_CTRL,
	MT6351_PMIC_RG_CHRWDT_TD,
	MT6351_PMIC_RG_CHRWDT_EN,
	MT6351_PMIC_RG_CHRWDT_WR,
	MT6351_PMIC_RG_PCHR_RV,
	MT6351_PMIC_RG_CHRWDT_INT_EN,
	MT6351_PMIC_RG_CHRWDT_FLAG_WR,
	MT6351_PMIC_RGS_CHRWDT_OUT,
	MT6351_PMIC_RG_USBDL_RST,
	MT6351_PMIC_RG_USBDL_SET,
	MT6351_PMIC_RG_ADCIN_VSEN_MUX_EN,
	MT6351_PMIC_RG_ADCIN_VSEN_EXT_BATON_EN,
	MT6351_PMIC_RG_ADCIN_VBAT_EN,
	MT6351_PMIC_RG_ADCIN_VSEN_EN,
	MT6351_PMIC_RG_ADCIN_CHR_EN,
	MT6351_PMIC_RG_UVLO_VTHL,
	MT6351_PMIC_RG_UVLO_VH_LAT,
	MT6351_PMIC_RG_LBAT_INT_VTH,
	MT6351_PMIC_RG_BGR_RSEL,
	MT6351_PMIC_RG_BGR_UNCHOP_PH,
	MT6351_PMIC_RG_BGR_UNCHOP,
	MT6351_PMIC_RG_BC11_BB_CTRL,
	MT6351_PMIC_RG_BC11_RST,
	MT6351_PMIC_RG_BC11_VSRC_EN,
	MT6351_PMIC_RGS_BC11_CMP_OUT,
	MT6351_PMIC_RG_BC11_VREF_VTH,
	MT6351_PMIC_RG_BC11_CMP_EN,
	MT6351_PMIC_RG_BC11_IPD_EN,
	MT6351_PMIC_RG_BC11_IPU_EN,
	MT6351_PMIC_RG_BC11_BIAS_EN,
	MT6351_PMIC_RG_CSDAC_STP_INC,
	MT6351_PMIC_RG_CSDAC_STP_DEC,
	MT6351_PMIC_RG_CSDAC_DLY,
	MT6351_PMIC_RG_CSDAC_STP,
	MT6351_PMIC_RG_LOW_ICH_DB,
	MT6351_PMIC_RG_CHRIND_ON,
	MT6351_PMIC_RG_CHRIND_DIMMING,
	MT6351_PMIC_RG_CV_MODE,
	MT6351_PMIC_RG_VCDT_MODE,
	MT6351_PMIC_RG_CSDAC_MODE,
	MT6351_PMIC_RG_TRACKING_EN,
	MT6351_PMIC_RG_HWCV_EN,
	MT6351_PMIC_RG_ULC_DET_EN,
	MT6351_PMIC_RG_BGR_TRIM_EN,
	MT6351_PMIC_RG_ICHRG_TRIM,
	MT6351_PMIC_RG_BGR_TRIM,
	MT6351_PMIC_RG_OVP_TRIM,
	MT6351_PMIC_RG_CHR_OSC_TRIM,
	MT6351_PMIC_DA_QI_BGR_EXT_BUF_EN,
	MT6351_PMIC_RG_BGR_TEST_EN,
	MT6351_PMIC_RG_BGR_TEST_RSTB,
	MT6351_PMIC_RG_DAC_USBDL_MAX,
	MT6351_PMIC_RG_CM_VDEC_TRIG,
	MT6351_PMIC_PCHR_CM_VDEC_STATUS,
	MT6351_PMIC_RG_CM_VINC_TRIG,
	MT6351_PMIC_PCHR_CM_VINC_STATUS,
	MT6351_PMIC_RG_CM_VDEC_HPRD1,
	MT6351_PMIC_RG_CM_VDEC_HPRD2,
	MT6351_PMIC_RG_CM_VDEC_HPRD3,
	MT6351_PMIC_RG_CM_VDEC_HPRD4,
	MT6351_PMIC_RG_CM_VDEC_HPRD5,
	MT6351_PMIC_RG_CM_VDEC_HPRD6,
	MT6351_PMIC_RG_CM_VINC_HPRD1,
	MT6351_PMIC_RG_CM_VINC_HPRD2,
	MT6351_PMIC_RG_CM_VINC_HPRD3,
	MT6351_PMIC_RG_CM_VINC_HPRD4,
	MT6351_PMIC_RG_CM_VINC_HPRD5,
	MT6351_PMIC_RG_CM_VINC_HPRD6,
	MT6351_PMIC_RG_CM_LPRD,
	MT6351_PMIC_RG_CM_CS_VTHL,
	MT6351_PMIC_RG_CM_CS_VTHH,
	MT6351_PMIC_RG_PCHR_RSV,
	MT6351_PMIC_RG_ENVTEM_D,
	MT6351_PMIC_RG_ENVTEM_EN,
	MT6351_PMIC_RGS_BATON_HV,
	MT6351_PMIC_RG_HW_VTH_CTRL,
	MT6351_PMIC_RG_HW_VTH2,
	MT6351_PMIC_RG_HW_VTH1,
	MT6351_PMIC_RG_CM_VDEC_INT_EN,
	MT6351_PMIC_RG_CM_VINC_INT_EN,
	MT6351_PMIC_RG_QI_BATON_LT_EN,
	MT6351_PMIC_RGS_BATON_UNDET,
	MT6351_PMIC_RG_JW_CS_VTH,
	MT6351_PMIC_RG_JW_CV_VTH,
	MT6351_PMIC_RG_JC_CS_VTH,
	MT6351_PMIC_RG_JC_CV_VTH,
	MT6351_PMIC_RG_BC11_ACA_EN,
	MT6351_PMIC_RG_JEITA_EN,
	MT6351_PMIC_RG_VCDT_TRIM,
	MT6351_PMIC_RGS_BC11_ID_FLOAT,
	MT6351_PMIC_RGS_BC11_ID_A,
	MT6351_PMIC_RGS_BC11_ID_B,
	MT6351_PMIC_RGS_BC11_ID_C,
	MT6351_PMIC_RGS_BC11_ID_GND,
	MT6351_PMIC_RGS_BC11_ACA_OTG_DET,
	MT6351_PMIC_RG_INDICATOR_TRIM,
	MT6351_PMIC_EOSC_CALI_START,
	MT6351_PMIC_EOSC_CALI_TD,
	MT6351_PMIC_EOSC_CALI_TEST,
	MT6351_PMIC_EOSC_CALI_DCXO_RDY_TD,
	MT6351_PMIC_FRC_VTCXO0_ON,
	MT6351_PMIC_EOSC_CALI_RSV,
	MT6351_PMIC_VRTC_PWM_MODE,
	MT6351_PMIC_VRTC_PWM_RSV,
	MT6351_PMIC_VRTC_PWM_L_DUTY,
	MT6351_PMIC_VRTC_PWM_H_DUTY,
	MT6351_PMIC_VRTC_CAP_SEL,
};

enum PMU_FLAGS_LIST {
	PMIC_THR_DET_DIS = MT6351_PMIC_THR_DET_DIS,
	PMIC_THR_TEST = MT6351_PMIC_THR_TEST,
	PMIC_THR_HWPDN_EN = MT6351_PMIC_THR_HWPDN_EN,
	PMIC_STRUP_THERMAL_DEB_SEL = MT6351_PMIC_STRUP_THERMAL_DEB_SEL,
	PMIC_USBDL = MT6351_PMIC_USBDL,
	PMIC_PMU_THERMAL_DEB = MT6351_PMIC_PMU_THERMAL_DEB,
	PMIC_PMU_THR_DEB = MT6351_PMIC_PMU_THR_DEB,
	PMIC_PMU_THR_STATUS = MT6351_PMIC_PMU_THR_STATUS,
	PMIC_STRUP_THER_DEB_RMAX = MT6351_PMIC_STRUP_THER_DEB_RMAX,
	PMIC_STRUP_THER_DEB_FMAX = MT6351_PMIC_STRUP_THER_DEB_FMAX,
	PMIC_DDUVLO_DEB_EN = MT6351_PMIC_DDUVLO_DEB_EN,
	PMIC_PWRBB_DEB_EN = MT6351_PMIC_PWRBB_DEB_EN,
	PMIC_STRUP_OSC_EN = MT6351_PMIC_STRUP_OSC_EN,
	PMIC_STRUP_OSC_EN_SEL = MT6351_PMIC_STRUP_OSC_EN_SEL,
	PMIC_STRUP_FT_CTRL = MT6351_PMIC_STRUP_FT_CTRL,
	PMIC_STRUP_PWRON_FORCE = MT6351_PMIC_STRUP_PWRON_FORCE,
	PMIC_BIAS_GEN_EN_FORCE = MT6351_PMIC_BIAS_GEN_EN_FORCE,
	PMIC_STRUP_PWRON = MT6351_PMIC_STRUP_PWRON,
	PMIC_STRUP_PWRON_SEL = MT6351_PMIC_STRUP_PWRON_SEL,
	PMIC_BIAS_GEN_EN = MT6351_PMIC_BIAS_GEN_EN,
	PMIC_BIAS_GEN_EN_SEL = MT6351_PMIC_BIAS_GEN_EN_SEL,
	PMIC_RTC_XOSC32_ENB_SW = MT6351_PMIC_RTC_XOSC32_ENB_SW,
	PMIC_RTC_XOSC32_ENB_SEL = MT6351_PMIC_RTC_XOSC32_ENB_SEL,
	PMIC_STRUP_DIG_IO_PG_FORCE = MT6351_PMIC_STRUP_DIG_IO_PG_FORCE,
	PMIC_RG_STRUP_VUSB33_PG_H2L_EN = MT6351_PMIC_RG_STRUP_VUSB33_PG_H2L_EN,
	PMIC_RG_STRUP_VGPU_PG_H2L_EN = MT6351_PMIC_RG_STRUP_VGPU_PG_H2L_EN,
	PMIC_RG_STRUP_VDRAM_PG_H2L_EN = MT6351_PMIC_RG_STRUP_VDRAM_PG_H2L_EN,
	PMIC_RG_STRUP_VSRAM_PROC_PG_H2L_EN =
	    MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_H2L_EN,
	PMIC_RG_STRUP_VSRAM_MD_PG_H2L_EN =
	    MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_H2L_EN,
	PMIC_RG_STRUP_VA10_PG_H2L_EN = MT6351_PMIC_RG_STRUP_VA10_PG_H2L_EN,
	PMIC_RG_STRUP_VEMC_PG_H2L_EN = MT6351_PMIC_RG_STRUP_VEMC_PG_H2L_EN,
	PMIC_RG_STRUP_VS2_PG_H2L_EN = MT6351_PMIC_RG_STRUP_VS2_PG_H2L_EN,
	PMIC_RG_STRUP_VMODEM_PG_H2L_EN = MT6351_PMIC_RG_STRUP_VMODEM_PG_H2L_EN,
	PMIC_RG_STRUP_VMD1_PG_H2L_EN = MT6351_PMIC_RG_STRUP_VMD1_PG_H2L_EN,
	PMIC_RG_STRUP_VCORE_PG_H2L_EN = MT6351_PMIC_RG_STRUP_VCORE_PG_H2L_EN,
	PMIC_RG_STRUP_VA18_PG_H2L_EN = MT6351_PMIC_RG_STRUP_VA18_PG_H2L_EN,
	PMIC_RG_STRUP_VS1_PG_H2L_EN = MT6351_PMIC_RG_STRUP_VS1_PG_H2L_EN,
	PMIC_RG_STRUP_VTCXO24_PG_ENB = MT6351_PMIC_RG_STRUP_VTCXO24_PG_ENB,
	PMIC_RG_STRUP_VUSB33_PG_ENB = MT6351_PMIC_RG_STRUP_VUSB33_PG_ENB,
	PMIC_RG_STRUP_VGPU_PG_ENB = MT6351_PMIC_RG_STRUP_VGPU_PG_ENB,
	PMIC_RG_STRUP_VDRAM_PG_ENB = MT6351_PMIC_RG_STRUP_VDRAM_PG_ENB,
	PMIC_RG_STRUP_VSRAM_PROC_PG_ENB =
	    MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_ENB,
	PMIC_RG_STRUP_VSRAM_MD_PG_ENB = MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_ENB,
	PMIC_RG_STRUP_VIO28_PG_ENB = MT6351_PMIC_RG_STRUP_VIO28_PG_ENB,
	PMIC_RG_STRUP_VA10_PG_ENB = MT6351_PMIC_RG_STRUP_VA10_PG_ENB,
	PMIC_RG_STRUP_VEMC_PG_ENB = MT6351_PMIC_RG_STRUP_VEMC_PG_ENB,
	PMIC_RG_STRUP_VIO18_PG_ENB = MT6351_PMIC_RG_STRUP_VIO18_PG_ENB,
	PMIC_RG_STRUP_VS2_PG_ENB = MT6351_PMIC_RG_STRUP_VS2_PG_ENB,
	PMIC_RG_STRUP_VMODEM_PG_ENB = MT6351_PMIC_RG_STRUP_VMODEM_PG_ENB,
	PMIC_RG_STRUP_VMD1_PG_ENB = MT6351_PMIC_RG_STRUP_VMD1_PG_ENB,
	PMIC_RG_STRUP_VCORE_PG_ENB = MT6351_PMIC_RG_STRUP_VCORE_PG_ENB,
	PMIC_RG_STRUP_VA18_PG_ENB = MT6351_PMIC_RG_STRUP_VA18_PG_ENB,
	PMIC_RG_STRUP_VS1_PG_ENB = MT6351_PMIC_RG_STRUP_VS1_PG_ENB,
	PMIC_RG_STRUP_VXO22_PG_ENB = MT6351_PMIC_RG_STRUP_VXO22_PG_ENB,
	PMIC_RG_STRUP_VGPU_OC_H2L_EN = MT6351_PMIC_RG_STRUP_VGPU_OC_H2L_EN,
	PMIC_RG_STRUP_VSRAM_MD_OC_H2L_EN =
	    MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_H2L_EN,
	PMIC_RG_STRUP_VS2_OC_H2L_EN = MT6351_PMIC_RG_STRUP_VS2_OC_H2L_EN,
	PMIC_RG_STRUP_VMODEM_OC_H2L_EN = MT6351_PMIC_RG_STRUP_VMODEM_OC_H2L_EN,
	PMIC_RG_STRUP_VMD1_OC_H2L_EN = MT6351_PMIC_RG_STRUP_VMD1_OC_H2L_EN,
	PMIC_RG_STRUP_VCORE_OC_H2L_EN = MT6351_PMIC_RG_STRUP_VCORE_OC_H2L_EN,
	PMIC_RG_STRUP_VS1_OC_H2L_EN = MT6351_PMIC_RG_STRUP_VS1_OC_H2L_EN,
	PMIC_RG_STRUP_VGPU_OC_ENB = MT6351_PMIC_RG_STRUP_VGPU_OC_ENB,
	PMIC_RG_STRUP_VSRAM_MD_OC_ENB = MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_ENB,
	PMIC_RG_STRUP_VS2_OC_ENB = MT6351_PMIC_RG_STRUP_VS2_OC_ENB,
	PMIC_RG_STRUP_VMODEM_OC_ENB = MT6351_PMIC_RG_STRUP_VMODEM_OC_ENB,
	PMIC_RG_STRUP_VMD1_OC_ENB = MT6351_PMIC_RG_STRUP_VMD1_OC_ENB,
	PMIC_RG_STRUP_VCORE_OC_ENB = MT6351_PMIC_RG_STRUP_VCORE_OC_ENB,
	PMIC_RG_STRUP_VS1_OC_ENB = MT6351_PMIC_RG_STRUP_VS1_OC_ENB,
	PMIC_RG_STRUP_VDRAM_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VDRAM_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VXO22_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VXO22_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VGPU_OC_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VGPU_OC_DEB_BYPASS,
	PMIC_RG_STRUP_VSRAM_MD_OC_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VSRAM_MD_OC_DEB_BYPASS,
	PMIC_RG_STRUP_VS2_OC_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VS2_OC_DEB_BYPASS,
	PMIC_RG_STRUP_VMODEM_OC_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VMODEM_OC_DEB_BYPASS,
	PMIC_RG_STRUP_VMD1_OC_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VMD1_OC_DEB_BYPASS,
	PMIC_RG_STRUP_VCORE_OC_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VCORE_OC_DEB_BYPASS,
	PMIC_RG_STRUP_VS1_OC_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VS1_OC_DEB_BYPASS,
	PMIC_RG_STRUP_VTCXO24_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VTCXO24_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VUSB33_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VUSB33_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VGPU_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VGPU_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VSRAM_DRAM_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VSRAM_DRAM_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VSRAM_PROC_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VSRAM_PROC_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VSRAM_MD_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VSRAM_MD_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VIO28_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VIO28_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VA10_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VA10_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VEMC_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VEMC_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VIO18_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VIO18_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VS2_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VS2_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VMODEM_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VMODEM_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VMD1_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VMD1_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VCORE_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VCORE_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VA18_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VA18_PG_DEB_BYPASS,
	PMIC_RG_STRUP_VS1_PG_DEB_BYPASS =
	    MT6351_PMIC_RG_STRUP_VS1_PG_DEB_BYPASS,
	PMIC_CLR_JUST_RST = MT6351_PMIC_CLR_JUST_RST,
	PMIC_UVLO_L2H_DEB_EN = MT6351_PMIC_UVLO_L2H_DEB_EN,
	PMIC_JUST_PWRKEY_RST = MT6351_PMIC_JUST_PWRKEY_RST,
	PMIC_DA_QI_OSC_EN = MT6351_PMIC_DA_QI_OSC_EN,
	PMIC_STRUP_EXT_PMIC_EN = MT6351_PMIC_STRUP_EXT_PMIC_EN,
	PMIC_STRUP_EXT_PMIC_SEL = MT6351_PMIC_STRUP_EXT_PMIC_SEL,
	PMIC_STRUP_CON8_RSV0 = MT6351_PMIC_STRUP_CON8_RSV0,
	PMIC_DA_QI_EXT_PMIC_EN = MT6351_PMIC_DA_QI_EXT_PMIC_EN,
	PMIC_STRUP_AUXADC_START_SW = MT6351_PMIC_STRUP_AUXADC_START_SW,
	PMIC_STRUP_AUXADC_RSTB_SW = MT6351_PMIC_STRUP_AUXADC_RSTB_SW,
	PMIC_STRUP_AUXADC_START_SEL = MT6351_PMIC_STRUP_AUXADC_START_SEL,
	PMIC_STRUP_AUXADC_RSTB_SEL = MT6351_PMIC_STRUP_AUXADC_RSTB_SEL,
	PMIC_STRUP_PWROFF_SEQ_EN = MT6351_PMIC_STRUP_PWROFF_SEQ_EN,
	PMIC_STRUP_PWROFF_PREOFF_EN = MT6351_PMIC_STRUP_PWROFF_PREOFF_EN,
	PMIC_STRUP_PP_EN = MT6351_PMIC_STRUP_PP_EN,
	PMIC_STRUP_PP_EN_SEL = MT6351_PMIC_STRUP_PP_EN_SEL,
	PMIC_STRUP_DIG0_RSV0 = MT6351_PMIC_STRUP_DIG0_RSV0,
	PMIC_STRUP_DIG1_RSV0 = MT6351_PMIC_STRUP_DIG1_RSV0,
	PMIC_RG_RSV_SWREG = MT6351_PMIC_RG_RSV_SWREG,
	PMIC_STRUP_PP_EN_PWROFF_CNT = MT6351_PMIC_STRUP_PP_EN_PWROFF_CNT,
	PMIC_STRUP_UVLO_U1U2_SEL = MT6351_PMIC_STRUP_UVLO_U1U2_SEL,
	PMIC_STRUP_UVLO_U1U2_SEL_SWCTRL =
	    MT6351_PMIC_STRUP_UVLO_U1U2_SEL_SWCTRL,
	PMIC_STRUP_AUXADC_RPCNT_MAX = MT6351_PMIC_STRUP_AUXADC_RPCNT_MAX,
	PMIC_RG_STRUP_THR_OVER_110_CLR = MT6351_PMIC_RG_STRUP_THR_OVER_110_CLR,
	PMIC_RG_STRUP_THR_110_CLR = MT6351_PMIC_RG_STRUP_THR_110_CLR,
	PMIC_RG_STRUP_THR_125_CLR = MT6351_PMIC_RG_STRUP_THR_125_CLR,
	PMIC_RG_STRUP_THR_CLR = MT6351_PMIC_RG_STRUP_THR_CLR,
	PMIC_RG_STRUP_THR_OVER_110_IRQ_EN =
	    MT6351_PMIC_RG_STRUP_THR_OVER_110_IRQ_EN,
	PMIC_RG_STRUP_THR_110_IRQ_EN = MT6351_PMIC_RG_STRUP_THR_110_IRQ_EN,
	PMIC_RG_STRUP_THR_125_IRQ_EN = MT6351_PMIC_RG_STRUP_THR_125_IRQ_EN,
	PMIC_RG_STRUP_THR_OVER_110_IRQ_STATUS =
	    MT6351_PMIC_RG_STRUP_THR_OVER_110_IRQ_STATUS,
	PMIC_RG_STRUP_THR_110_IRQ_STATUS =
	    MT6351_PMIC_RG_STRUP_THR_110_IRQ_STATUS,
	PMIC_RG_STRUP_THR_125_IRQ_STATUS =
	    MT6351_PMIC_RG_STRUP_THR_125_IRQ_STATUS,
	PMIC_STRUP_PG_STATUS_CLR = MT6351_PMIC_STRUP_PG_STATUS_CLR,
	PMIC_RG_STRUP_LONG_PRESS_EXT_SEL =
	    MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_SEL,
	PMIC_RG_STRUP_LONG_PRESS_EXT_TD =
	    MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_TD,
	PMIC_RG_STRUP_LONG_PRESS_EXT_EN =
	    MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_EN,
	PMIC_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL =
	    MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL,
	PMIC_RG_STRUP_LONG_PRESS_EXT_PWRKY_CTRL =
	    MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_PWRKY_CTRL,
	PMIC_RG_STRUP_LONG_PRESS_EXT_PWRBB_CTRL =
	    MT6351_PMIC_RG_STRUP_LONG_PRESS_EXT_PWRBB_CTRL,
	PMIC_RG_STRUP_ENVTEM = MT6351_PMIC_RG_STRUP_ENVTEM,
	PMIC_RG_STRUP_ENVTEM_CTRL = MT6351_PMIC_RG_STRUP_ENVTEM_CTRL,
	PMIC_RG_STRUP_PWRKEY_COUNT_RESET =
	    MT6351_PMIC_RG_STRUP_PWRKEY_COUNT_RESET,
	PMIC_RGS_ANA_CHIP_ID = MT6351_PMIC_RGS_ANA_CHIP_ID,
	PMIC_RG_PP_EN_DRVSEL = MT6351_PMIC_RG_PP_EN_DRVSEL,
	PMIC_RG_FCHR_PU_EN = MT6351_PMIC_RG_FCHR_PU_EN,
	PMIC_RG_PMU_RSV = MT6351_PMIC_RG_PMU_RSV,
	PMIC_RG_FCHR_KEYDET_EN = MT6351_PMIC_RG_FCHR_KEYDET_EN,
	PMIC_RG_EN_DRVSEL = MT6351_PMIC_RG_EN_DRVSEL,
	PMIC_RG_RST_DRVSEL = MT6351_PMIC_RG_RST_DRVSEL,
	PMIC_RG_STRUP_IREF_TRIM = MT6351_PMIC_RG_STRUP_IREF_TRIM,
	PMIC_RG_VREF_BG = MT6351_PMIC_RG_VREF_BG,
	PMIC_RG_THR_TMODE = MT6351_PMIC_RG_THR_TMODE,
	PMIC_RG_STRUP_THR_SEL = MT6351_PMIC_RG_STRUP_THR_SEL,
	PMIC_RG_THRDET_SEL = MT6351_PMIC_RG_THRDET_SEL,
	PMIC_HWCID = MT6351_PMIC_HWCID,
	PMIC_SWCID = MT6351_PMIC_SWCID,
	PMIC_RG_SRCLKEN_IN0_EN = MT6351_PMIC_RG_SRCLKEN_IN0_EN,
	PMIC_RG_SRCLKEN_IN1_EN = MT6351_PMIC_RG_SRCLKEN_IN1_EN,
	PMIC_RG_OSC_SEL = MT6351_PMIC_RG_OSC_SEL,
	PMIC_RG_SRCLKEN_IN2_EN = MT6351_PMIC_RG_SRCLKEN_IN2_EN,
	PMIC_RG_SRCLKEN_IN0_HW_MODE = MT6351_PMIC_RG_SRCLKEN_IN0_HW_MODE,
	PMIC_RG_SRCLKEN_IN1_HW_MODE = MT6351_PMIC_RG_SRCLKEN_IN1_HW_MODE,
	PMIC_RG_OSC_SEL_HW_MODE = MT6351_PMIC_RG_OSC_SEL_HW_MODE,
	PMIC_RG_SRCLKEN_IN_SYNC_EN = MT6351_PMIC_RG_SRCLKEN_IN_SYNC_EN,
	PMIC_RG_OSC_EN_AUTO_OFF = MT6351_PMIC_RG_OSC_EN_AUTO_OFF,
	PMIC_TEST_OUT = MT6351_PMIC_TEST_OUT,
	PMIC_RG_MON_FLAG_SEL = MT6351_PMIC_RG_MON_FLAG_SEL,
	PMIC_RG_MON_GRP_SEL = MT6351_PMIC_RG_MON_GRP_SEL,
	PMIC_RG_NANDTREE_MODE = MT6351_PMIC_RG_NANDTREE_MODE,
	PMIC_RG_TEST_AUXADC = MT6351_PMIC_RG_TEST_AUXADC,
	PMIC_RG_EFUSE_MODE = MT6351_PMIC_RG_EFUSE_MODE,
	PMIC_RG_TEST_STRUP = MT6351_PMIC_RG_TEST_STRUP,
	PMIC_TESTMODE_SW = MT6351_PMIC_TESTMODE_SW,
	PMIC_EN_STATUS_VLDO28 = MT6351_PMIC_EN_STATUS_VLDO28,
	PMIC_EN_STATUS_VIO28 = MT6351_PMIC_EN_STATUS_VIO28,
	PMIC_EN_STATUS_VMCH = MT6351_PMIC_EN_STATUS_VMCH,
	PMIC_EN_STATUS_VMC = MT6351_PMIC_EN_STATUS_VMC,
	PMIC_EN_STATUS_VEMC = MT6351_PMIC_EN_STATUS_VEMC,
	PMIC_EN_STATUS_VSIM2 = MT6351_PMIC_EN_STATUS_VSIM2,
	PMIC_EN_STATUS_VSIM1 = MT6351_PMIC_EN_STATUS_VSIM1,
	PMIC_EN_STATUS_VEFUSE = MT6351_PMIC_EN_STATUS_VEFUSE,
	PMIC_EN_STATUS_VUSB33 = MT6351_PMIC_EN_STATUS_VUSB33,
	PMIC_EN_STATUS_VCN33 = MT6351_PMIC_EN_STATUS_VCN33,
	PMIC_EN_STATUS_VCAMA = MT6351_PMIC_EN_STATUS_VCAMA,
	PMIC_EN_STATUS_VCN28 = MT6351_PMIC_EN_STATUS_VCN28,
	PMIC_EN_STATUS_VTCXO24 = MT6351_PMIC_EN_STATUS_VTCXO24,
	PMIC_EN_STATUS_VTCXO28 = MT6351_PMIC_EN_STATUS_VTCXO28,
	PMIC_EN_STATUS_VA18 = MT6351_PMIC_EN_STATUS_VA18,
	PMIC_EN_STATUS_VRTC = MT6351_PMIC_EN_STATUS_VRTC,
	PMIC_EN_STATUS_VBIF28 = MT6351_PMIC_EN_STATUS_VBIF28,
	PMIC_EN_STATUS_VGP3 = MT6351_PMIC_EN_STATUS_VGP3,
	PMIC_EN_STATUS_VMIPI = MT6351_PMIC_EN_STATUS_VMIPI,
	PMIC_EN_STATUS_VDRAM = MT6351_PMIC_EN_STATUS_VDRAM,
	PMIC_EN_STATUS_VA10 = MT6351_PMIC_EN_STATUS_VA10,
	PMIC_EN_STATUS_VRF12 = MT6351_PMIC_EN_STATUS_VRF12,
	PMIC_EN_STATUS_VXO22 = MT6351_PMIC_EN_STATUS_VXO22,
	PMIC_EN_STATUS_VSRAM_PROC = MT6351_PMIC_EN_STATUS_VSRAM_PROC,
	PMIC_EN_STATUS_VCAMIO = MT6351_PMIC_EN_STATUS_VCAMIO,
	PMIC_EN_STATUS_VCN18 = MT6351_PMIC_EN_STATUS_VCN18,
	PMIC_EN_STATUS_VIO18 = MT6351_PMIC_EN_STATUS_VIO18,
	PMIC_EN_STATUS_VRF18 = MT6351_PMIC_EN_STATUS_VRF18,
	PMIC_EN_STATUS_VCAMD = MT6351_PMIC_EN_STATUS_VCAMD,
	PMIC_EN_STATUS_VIBR = MT6351_PMIC_EN_STATUS_VIBR,
	PMIC_OC_STATUS_VIBR = MT6351_PMIC_OC_STATUS_VIBR,
	PMIC_OC_STATUS_VLDO28 = MT6351_PMIC_OC_STATUS_VLDO28,
	PMIC_OC_STATUS_VIO28 = MT6351_PMIC_OC_STATUS_VIO28,
	PMIC_OC_STATUS_VMC = MT6351_PMIC_OC_STATUS_VMC,
	PMIC_OC_STATUS_VMCH = MT6351_PMIC_OC_STATUS_VMCH,
	PMIC_OC_STATUS_VEMC = MT6351_PMIC_OC_STATUS_VEMC,
	PMIC_OC_STATUS_VSIM2 = MT6351_PMIC_OC_STATUS_VSIM2,
	PMIC_OC_STATUS_VSIM1 = MT6351_PMIC_OC_STATUS_VSIM1,
	PMIC_OC_STATUS_VEFUSE = MT6351_PMIC_OC_STATUS_VEFUSE,
	PMIC_OC_STATUS_VUSB33 = MT6351_PMIC_OC_STATUS_VUSB33,
	PMIC_OC_STATUS_VCN33 = MT6351_PMIC_OC_STATUS_VCN33,
	PMIC_OC_STATUS_VCAMA = MT6351_PMIC_OC_STATUS_VCAMA,
	PMIC_OC_STATUS_VCN28 = MT6351_PMIC_OC_STATUS_VCN28,
	PMIC_OC_STATUS_VTCXO24 = MT6351_PMIC_OC_STATUS_VTCXO24,
	PMIC_OC_STATUS_VTCXO28 = MT6351_PMIC_OC_STATUS_VTCXO28,
	PMIC_OC_STATUS_VA18 = MT6351_PMIC_OC_STATUS_VA18,
	PMIC_OC_STATUS_VBIF28 = MT6351_PMIC_OC_STATUS_VBIF28,
	PMIC_OC_STATUS_VGP3 = MT6351_PMIC_OC_STATUS_VGP3,
	PMIC_OC_STATUS_VMIPI = MT6351_PMIC_OC_STATUS_VMIPI,
	PMIC_OC_STATUS_VDRAM = MT6351_PMIC_OC_STATUS_VDRAM,
	PMIC_OC_STATUS_VA10 = MT6351_PMIC_OC_STATUS_VA10,
	PMIC_OC_STATUS_VRF12 = MT6351_PMIC_OC_STATUS_VRF12,
	PMIC_OC_STATUS_VXO22 = MT6351_PMIC_OC_STATUS_VXO22,
	PMIC_OC_STATUS_VSRAM_PROC = MT6351_PMIC_OC_STATUS_VSRAM_PROC,
	PMIC_OC_STATUS_VCAMIO = MT6351_PMIC_OC_STATUS_VCAMIO,
	PMIC_OC_STATUS_VCN18 = MT6351_PMIC_OC_STATUS_VCN18,
	PMIC_OC_STATUS_VIO18 = MT6351_PMIC_OC_STATUS_VIO18,
	PMIC_OC_STATUS_VRF18 = MT6351_PMIC_OC_STATUS_VRF18,
	PMIC_OC_STATUS_VCAMD = MT6351_PMIC_OC_STATUS_VCAMD,
	PMIC_VA18_PG_DEB = MT6351_PMIC_VA18_PG_DEB,
	PMIC_VCORE_PG_DEB = MT6351_PMIC_VCORE_PG_DEB,
	PMIC_VMD1_PG_DEB = MT6351_PMIC_VMD1_PG_DEB,
	PMIC_VMODEM_PG_DEB = MT6351_PMIC_VMODEM_PG_DEB,
	PMIC_VS2_PG_DEB = MT6351_PMIC_VS2_PG_DEB,
	PMIC_VIO18_PG_DEB = MT6351_PMIC_VIO18_PG_DEB,
	PMIC_VEMC_PG_DEB = MT6351_PMIC_VEMC_PG_DEB,
	PMIC_VA10_PG_DEB = MT6351_PMIC_VA10_PG_DEB,
	PMIC_VIO28_PG_DEB = MT6351_PMIC_VIO28_PG_DEB,
	PMIC_VSRAM_MD_PG_DEB = MT6351_PMIC_VSRAM_MD_PG_DEB,
	PMIC_VSRAM_PROC_PG_DEB = MT6351_PMIC_VSRAM_PROC_PG_DEB,
	PMIC_VDRAM_PG_DEB = MT6351_PMIC_VDRAM_PG_DEB,
	PMIC_VGPU_PG_DEB = MT6351_PMIC_VGPU_PG_DEB,
	PMIC_VUSB33_PG_DEB = MT6351_PMIC_VUSB33_PG_DEB,
	PMIC_VXO22_PG_DEB = MT6351_PMIC_VXO22_PG_DEB,
	PMIC_VTCXO24_PG_DEB = MT6351_PMIC_VTCXO24_PG_DEB,
	PMIC_VS1_PG_DEB = MT6351_PMIC_VS1_PG_DEB,
	PMIC_STRUP_VA18_PG_STATUS = MT6351_PMIC_STRUP_VA18_PG_STATUS,
	PMIC_STRUP_VCORE_PG_STATUS = MT6351_PMIC_STRUP_VCORE_PG_STATUS,
	PMIC_STRUP_VMD1_PG_STATUS = MT6351_PMIC_STRUP_VMD1_PG_STATUS,
	PMIC_STRUP_VMODEM_PG_STATUS = MT6351_PMIC_STRUP_VMODEM_PG_STATUS,
	PMIC_STRUP_VS2_PG_STATUS = MT6351_PMIC_STRUP_VS2_PG_STATUS,
	PMIC_STRUP_VIO18_PG_STATUS = MT6351_PMIC_STRUP_VIO18_PG_STATUS,
	PMIC_STRUP_VEMC_PG_STATUS = MT6351_PMIC_STRUP_VEMC_PG_STATUS,
	PMIC_STRUP_VA10_PG_STATUS = MT6351_PMIC_STRUP_VA10_PG_STATUS,
	PMIC_STRUP_VIO28_PG_STATUS = MT6351_PMIC_STRUP_VIO28_PG_STATUS,
	PMIC_STRUP_VSRAM_MD_PG_STATUS = MT6351_PMIC_STRUP_VSRAM_MD_PG_STATUS,
	PMIC_STRUP_VSRAM_PROC_PG_STATUS =
	    MT6351_PMIC_STRUP_VSRAM_PROC_PG_STATUS,
	PMIC_STRUP_VDRAM_PG_STATUS = MT6351_PMIC_STRUP_VDRAM_PG_STATUS,
	PMIC_STRUP_VGPU_PG_STATUS = MT6351_PMIC_STRUP_VGPU_PG_STATUS,
	PMIC_STRUP_VUSB33_PG_STATUS = MT6351_PMIC_STRUP_VUSB33_PG_STATUS,
	PMIC_STRUP_VXO22_PG_STATUS = MT6351_PMIC_STRUP_VXO22_PG_STATUS,
	PMIC_STRUP_VTCXO24_PG_STATUS = MT6351_PMIC_STRUP_VTCXO24_PG_STATUS,
	PMIC_STRUP_VS1_PG_STATUS = MT6351_PMIC_STRUP_VS1_PG_STATUS,
	PMIC_THERMAL_BACK110 = MT6351_PMIC_THERMAL_BACK110,
	PMIC_THERMAL_OVER110 = MT6351_PMIC_THERMAL_OVER110,
	PMIC_THERMAL_OVER125 = MT6351_PMIC_THERMAL_OVER125,
	PMIC_STRUP_THERMAL_STATUS = MT6351_PMIC_STRUP_THERMAL_STATUS,
	PMIC_PMU_TEST_MODE_SCAN = MT6351_PMIC_PMU_TEST_MODE_SCAN,
	PMIC_PWRKEY_DEB = MT6351_PMIC_PWRKEY_DEB,
	PMIC_HOMEKEY_DEB = MT6351_PMIC_HOMEKEY_DEB,
	PMIC_RTC_XTAL_DET_DONE = MT6351_PMIC_RTC_XTAL_DET_DONE,
	PMIC_XOSC32_ENB_DET = MT6351_PMIC_XOSC32_ENB_DET,
	PMIC_RTC_XTAL_DET_RSV = MT6351_PMIC_RTC_XTAL_DET_RSV,
	PMIC_RG_PMU_TDSEL = MT6351_PMIC_RG_PMU_TDSEL,
	PMIC_RG_SPI_TDSEL = MT6351_PMIC_RG_SPI_TDSEL,
	PMIC_RG_AUD_TDSEL = MT6351_PMIC_RG_AUD_TDSEL,
	PMIC_RG_E32CAL_TDSEL = MT6351_PMIC_RG_E32CAL_TDSEL,
	PMIC_RG_PMU_RDSEL = MT6351_PMIC_RG_PMU_RDSEL,
	PMIC_RG_SPI_RDSEL = MT6351_PMIC_RG_SPI_RDSEL,
	PMIC_RG_AUD_RDSEL = MT6351_PMIC_RG_AUD_RDSEL,
	PMIC_RG_E32CAL_RDSEL = MT6351_PMIC_RG_E32CAL_RDSEL,
	PMIC_RG_SMT_WDTRSTB_IN = MT6351_PMIC_RG_SMT_WDTRSTB_IN,
	PMIC_RG_SMT_HOMEKEY = MT6351_PMIC_RG_SMT_HOMEKEY,
	PMIC_RG_SMT_SRCLKEN_IN0 = MT6351_PMIC_RG_SMT_SRCLKEN_IN0,
	PMIC_RG_SMT_SRCLKEN_IN1 = MT6351_PMIC_RG_SMT_SRCLKEN_IN1,
	PMIC_RG_SMT_RTC_32K1V8_0 = MT6351_PMIC_RG_SMT_RTC_32K1V8_0,
	PMIC_RG_SMT_RTC_32K1V8_1 = MT6351_PMIC_RG_SMT_RTC_32K1V8_1,
	PMIC_RG_SMT_SPI_CLK = MT6351_PMIC_RG_SMT_SPI_CLK,
	PMIC_RG_SMT_SPI_CSN = MT6351_PMIC_RG_SMT_SPI_CSN,
	PMIC_RG_SMT_SPI_MOSI = MT6351_PMIC_RG_SMT_SPI_MOSI,
	PMIC_RG_SMT_SPI_MISO = MT6351_PMIC_RG_SMT_SPI_MISO,
	PMIC_RG_SMT_AUD_CLK = MT6351_PMIC_RG_SMT_AUD_CLK,
	PMIC_RG_SMT_AUD_DAT_MOSI = MT6351_PMIC_RG_SMT_AUD_DAT_MOSI,
	PMIC_RG_SMT_AUD_DAT_MISO = MT6351_PMIC_RG_SMT_AUD_DAT_MISO,
	PMIC_RG_SMT_ANC_DAT_MOSI = MT6351_PMIC_RG_SMT_ANC_DAT_MOSI,
	PMIC_RG_SMT_VOW_CLK_MISO = MT6351_PMIC_RG_SMT_VOW_CLK_MISO,
	PMIC_RG_SMT_ENBB = MT6351_PMIC_RG_SMT_ENBB,
	PMIC_RG_SMT_XOSC_EN = MT6351_PMIC_RG_SMT_XOSC_EN,
	PMIC_RG_OCTL_SRCLKEN_IN0 = MT6351_PMIC_RG_OCTL_SRCLKEN_IN0,
	PMIC_RG_OCTL_SRCLKEN_IN1 = MT6351_PMIC_RG_OCTL_SRCLKEN_IN1,
	PMIC_RG_OCTL_RTC_32K1V8_0 = MT6351_PMIC_RG_OCTL_RTC_32K1V8_0,
	PMIC_RG_OCTL_RTC_32K1V8_1 = MT6351_PMIC_RG_OCTL_RTC_32K1V8_1,
	PMIC_RG_OCTL_SPI_CLK = MT6351_PMIC_RG_OCTL_SPI_CLK,
	PMIC_RG_OCTL_SPI_CSN = MT6351_PMIC_RG_OCTL_SPI_CSN,
	PMIC_RG_OCTL_SPI_MOSI = MT6351_PMIC_RG_OCTL_SPI_MOSI,
	PMIC_RG_OCTL_SPI_MISO = MT6351_PMIC_RG_OCTL_SPI_MISO,
	PMIC_RG_OCTL_AUD_DAT_MOSI = MT6351_PMIC_RG_OCTL_AUD_DAT_MOSI,
	PMIC_RG_OCTL_AUD_DAT_MISO = MT6351_PMIC_RG_OCTL_AUD_DAT_MISO,
	PMIC_RG_OCTL_AUD_CLK = MT6351_PMIC_RG_OCTL_AUD_CLK,
	PMIC_RG_OCTL_ANC_DAT_MOSI = MT6351_PMIC_RG_OCTL_ANC_DAT_MOSI,
	PMIC_RG_OCTL_HOMEKEY = MT6351_PMIC_RG_OCTL_HOMEKEY,
	PMIC_RG_OCTL_ENBB = MT6351_PMIC_RG_OCTL_ENBB,
	PMIC_RG_OCTL_XOSC_EN = MT6351_PMIC_RG_OCTL_XOSC_EN,
	PMIC_RG_OCTL_VOW_CLK_MISO = MT6351_PMIC_RG_OCTL_VOW_CLK_MISO,
	PMIC_TOP_STATUS = MT6351_PMIC_TOP_STATUS,
	PMIC_TOP_STATUS_SET = MT6351_PMIC_TOP_STATUS_SET,
	PMIC_TOP_STATUS_CLR = MT6351_PMIC_TOP_STATUS_CLR,
	PMIC_RG_G_SMPS_PD_CK_PDN = MT6351_PMIC_RG_G_SMPS_PD_CK_PDN,
	PMIC_RG_G_SMPS_AUD_CK_PDN = MT6351_PMIC_RG_G_SMPS_AUD_CK_PDN,
	PMIC_RG_G_DRV_2M_CK_PDN = MT6351_PMIC_RG_G_DRV_2M_CK_PDN,
	PMIC_RG_DRV_32K_CK_PDN = MT6351_PMIC_RG_DRV_32K_CK_PDN,
	PMIC_RG_DRV_ISINK0_CK_PDN = MT6351_PMIC_RG_DRV_ISINK0_CK_PDN,
	PMIC_RG_DRV_ISINK1_CK_PDN = MT6351_PMIC_RG_DRV_ISINK1_CK_PDN,
	PMIC_RG_DRV_ISINK2_CK_PDN = MT6351_PMIC_RG_DRV_ISINK2_CK_PDN,
	PMIC_RG_DRV_ISINK3_CK_PDN = MT6351_PMIC_RG_DRV_ISINK3_CK_PDN,
	PMIC_RG_AUXADC_1M_CK_PDN = MT6351_PMIC_RG_AUXADC_1M_CK_PDN,
	PMIC_RG_AUXADC_SMPS_CK_PDN = MT6351_PMIC_RG_AUXADC_SMPS_CK_PDN,
	PMIC_RG_AUXADC_RNG_CK_PDN = MT6351_PMIC_RG_AUXADC_RNG_CK_PDN,
	PMIC_RG_AUXADC_26M_CK_PDN = MT6351_PMIC_RG_AUXADC_26M_CK_PDN,
	PMIC_RG_AUDNCP_CK_PDN = MT6351_PMIC_RG_AUDNCP_CK_PDN,
	PMIC_RG_AUDIF_CK_PDN = MT6351_PMIC_RG_AUDIF_CK_PDN,
	PMIC_RG_AUD_CK_PDN = MT6351_PMIC_RG_AUD_CK_PDN,
	PMIC_RG_ZCD13M_CK_PDN = MT6351_PMIC_RG_ZCD13M_CK_PDN,
	PMIC_TOP_CKPDN_CON0_SET = MT6351_PMIC_TOP_CKPDN_CON0_SET,
	PMIC_TOP_CKPDN_CON0_CLR = MT6351_PMIC_TOP_CKPDN_CON0_CLR,
	PMIC_RG_RTC_32K_CK_PDN = MT6351_PMIC_RG_RTC_32K_CK_PDN,
	PMIC_RG_RTC_MCLK_PDN = MT6351_PMIC_RG_RTC_MCLK_PDN,
	PMIC_RG_RTC_75K_CK_PDN = MT6351_PMIC_RG_RTC_75K_CK_PDN,
	PMIC_RG_RTCDET_CK_PDN = MT6351_PMIC_RG_RTCDET_CK_PDN,
	PMIC_RG_RTC32K_1V8_0_O_PDN = MT6351_PMIC_RG_RTC32K_1V8_0_O_PDN,
	PMIC_RG_RTC32K_1V8_1_O_PDN = MT6351_PMIC_RG_RTC32K_1V8_1_O_PDN,
	PMIC_RG_RTC_2SEC_OFF_DET_PDN = MT6351_PMIC_RG_RTC_2SEC_OFF_DET_PDN,
	PMIC_RG_FQMTR_CK_PDN = MT6351_PMIC_RG_FQMTR_CK_PDN,
	PMIC_RG_STB_1M_CK_PDN = MT6351_PMIC_RG_STB_1M_CK_PDN,
	PMIC_RG_BUCK_1M_CK_PDN = MT6351_PMIC_RG_BUCK_1M_CK_PDN,
	PMIC_RG_AUXADC_CK_PDN = MT6351_PMIC_RG_AUXADC_CK_PDN,
	PMIC_RG_PWMOC_6M_CK_PDN = MT6351_PMIC_RG_PWMOC_6M_CK_PDN,
	PMIC_RG_PWMOC_AUD_6M_CK_PDN = MT6351_PMIC_RG_PWMOC_AUD_6M_CK_PDN,
	PMIC_TOP_CKPDN_CON1_SET = MT6351_PMIC_TOP_CKPDN_CON1_SET,
	PMIC_TOP_CKPDN_CON1_CLR = MT6351_PMIC_TOP_CKPDN_CON1_CLR,
	PMIC_RG_FGADC_ANA_CK_PDN = MT6351_PMIC_RG_FGADC_ANA_CK_PDN,
	PMIC_RG_FGADC_DIG_CK_PDN = MT6351_PMIC_RG_FGADC_DIG_CK_PDN,
	PMIC_RG_BIF_X72_CK_PDN = MT6351_PMIC_RG_BIF_X72_CK_PDN,
	PMIC_RG_BIF_X4_CK_PDN = MT6351_PMIC_RG_BIF_X4_CK_PDN,
	PMIC_RG_BIF_X1_CK_PDN = MT6351_PMIC_RG_BIF_X1_CK_PDN,
	PMIC_RG_PCHR_32K_CK_PDN = MT6351_PMIC_RG_PCHR_32K_CK_PDN,
	PMIC_RG_ACCDET_CK_PDN = MT6351_PMIC_RG_ACCDET_CK_PDN,
	PMIC_RG_FQMTR_32K_CK_PDN = MT6351_PMIC_RG_FQMTR_32K_CK_PDN,
	PMIC_RG_INTRP_CK_PDN = MT6351_PMIC_RG_INTRP_CK_PDN,
	PMIC_RG_RTC_26M_CK_PDN = MT6351_PMIC_RG_RTC_26M_CK_PDN,
	PMIC_RG_RTC_EOSC32_CK_PDN = MT6351_PMIC_RG_RTC_EOSC32_CK_PDN,
	PMIC_RG_TRIM_75K_CK_PDN = MT6351_PMIC_RG_TRIM_75K_CK_PDN,
	PMIC_RG_STRUP_LBAT_SEL_CK_PDN = MT6351_PMIC_RG_STRUP_LBAT_SEL_CK_PDN,
	PMIC_TOP_CKPDN_CON2_SET = MT6351_PMIC_TOP_CKPDN_CON2_SET,
	PMIC_TOP_CKPDN_CON2_CLR = MT6351_PMIC_TOP_CKPDN_CON2_CLR,
	PMIC_RG_STRUP_75K_CK_PDN = MT6351_PMIC_RG_STRUP_75K_CK_PDN,
	PMIC_RG_STRUP_32K_CK_PDN = MT6351_PMIC_RG_STRUP_32K_CK_PDN,
	PMIC_RG_EFUSE_CK_PDN = MT6351_PMIC_RG_EFUSE_CK_PDN,
	PMIC_RG_SMPS_CK_DIV_PDN = MT6351_PMIC_RG_SMPS_CK_DIV_PDN,
	PMIC_RG_SPI_CK_PDN = MT6351_PMIC_RG_SPI_CK_PDN,
	PMIC_RG_BGR_TEST_CK_PDN = MT6351_PMIC_RG_BGR_TEST_CK_PDN,
	PMIC_RG_FGADC_FT_CK_PDN = MT6351_PMIC_RG_FGADC_FT_CK_PDN,
	PMIC_RG_PCHR_TEST_CK_PDN = MT6351_PMIC_RG_PCHR_TEST_CK_PDN,
	PMIC_RG_BUCK_32K_CK_PDN = MT6351_PMIC_RG_BUCK_32K_CK_PDN,
	PMIC_RG_BUCK_ANA_CK_PDN = MT6351_PMIC_RG_BUCK_ANA_CK_PDN,
	PMIC_RG_EOSC_CALI_TEST_CK_PDN = MT6351_PMIC_RG_EOSC_CALI_TEST_CK_PDN,
	PMIC_RG_G_SMPS_TEST_CK_PDN = MT6351_PMIC_RG_G_SMPS_TEST_CK_PDN,
	PMIC_TOP_CKPDN_CON3_RSV = MT6351_PMIC_TOP_CKPDN_CON3_RSV,
	PMIC_TOP_CKPDN_CON3_SET = MT6351_PMIC_TOP_CKPDN_CON3_SET,
	PMIC_TOP_CKPDN_CON3_CLR = MT6351_PMIC_TOP_CKPDN_CON3_CLR,
	PMIC_RG_BUCK_9M_CK_PDN = MT6351_PMIC_RG_BUCK_9M_CK_PDN,
	PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN =
	    MT6351_PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN,
	PMIC_RG_BUCK_VPA_9M_CK_PDN = MT6351_PMIC_RG_BUCK_VPA_9M_CK_PDN,
	PMIC_RG_BUCK_VMODEM_9M_CK_PDN = MT6351_PMIC_RG_BUCK_VMODEM_9M_CK_PDN,
	PMIC_RG_BUCK_VCORE_9M_CK_PDN = MT6351_PMIC_RG_BUCK_VCORE_9M_CK_PDN,
	PMIC_RG_BUCK_VGPU_9M_CK_PDN = MT6351_PMIC_RG_BUCK_VGPU_9M_CK_PDN,
	PMIC_TOP_CKPDN_CON4_RSV = MT6351_PMIC_TOP_CKPDN_CON4_RSV,
	PMIC_TOP_CKPDN_CON4_SET = MT6351_PMIC_TOP_CKPDN_CON4_SET,
	PMIC_TOP_CKPDN_CON4_CLR = MT6351_PMIC_TOP_CKPDN_CON4_CLR,
	PMIC_RG_LDO_CALI_75K_CK_PDN = MT6351_PMIC_RG_LDO_CALI_75K_CK_PDN,
	PMIC_RG_INTRP_PRE_OC_CK_PDN = MT6351_PMIC_RG_INTRP_PRE_OC_CK_PDN,
	PMIC_RG_BUCK_VS2_9M_CK_PDN = MT6351_PMIC_RG_BUCK_VS2_9M_CK_PDN,
	PMIC_RG_BUCK_VS1_9M_CK_PDN = MT6351_PMIC_RG_BUCK_VS1_9M_CK_PDN,
	PMIC_RG_BUCK_VMD1_9M_CK_PDN = MT6351_PMIC_RG_BUCK_VMD1_9M_CK_PDN,
	PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN =
	    MT6351_PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN,
	PMIC_RG_VOW32K_CK_PDN = MT6351_PMIC_RG_VOW32K_CK_PDN,
	PMIC_RG_VOW12M_CK_PDN = MT6351_PMIC_RG_VOW12M_CK_PDN,
	PMIC_RG_AUD18M_CK_PDN = MT6351_PMIC_RG_AUD18M_CK_PDN,
	PMIC_RG_DRV_ISINK4_CK_PDN = MT6351_PMIC_RG_DRV_ISINK4_CK_PDN,
	PMIC_RG_DRV_ISINK5_CK_PDN = MT6351_PMIC_RG_DRV_ISINK5_CK_PDN,
	PMIC_RG_DRV_ISINK6_CK_PDN = MT6351_PMIC_RG_DRV_ISINK6_CK_PDN,
	PMIC_RG_DRV_ISINK7_CK_PDN = MT6351_PMIC_RG_DRV_ISINK7_CK_PDN,
	PMIC_RG_DRV_CHRIND_CK_PDN = MT6351_PMIC_RG_DRV_CHRIND_CK_PDN,
	PMIC_RG_BUCK_AUD_1M_CK_PDN = MT6351_PMIC_RG_BUCK_AUD_1M_CK_PDN,
	PMIC_RG_STB_AUD_1M_CK_PDN = MT6351_PMIC_RG_STB_AUD_1M_CK_PDN,
	PMIC_TOP_CKPDN_CON5_SET = MT6351_PMIC_TOP_CKPDN_CON5_SET,
	PMIC_TOP_CKPDN_CON5_CLR = MT6351_PMIC_TOP_CKPDN_CON5_CLR,
	PMIC_RG_AUDIF_CK_CKSEL = MT6351_PMIC_RG_AUDIF_CK_CKSEL,
	PMIC_RG_AUD_CK_CKSEL = MT6351_PMIC_RG_AUD_CK_CKSEL,
	PMIC_RG_DRV_ISINK0_CK_CKSEL = MT6351_PMIC_RG_DRV_ISINK0_CK_CKSEL,
	PMIC_RG_DRV_ISINK1_CK_CKSEL = MT6351_PMIC_RG_DRV_ISINK1_CK_CKSEL,
	PMIC_RG_DRV_ISINK2_CK_CKSEL = MT6351_PMIC_RG_DRV_ISINK2_CK_CKSEL,
	PMIC_RG_DRV_ISINK3_CK_CKSEL = MT6351_PMIC_RG_DRV_ISINK3_CK_CKSEL,
	PMIC_RG_FQMTR_CK_CKSEL = MT6351_PMIC_RG_FQMTR_CK_CKSEL,
	PMIC_RG_75K_32K_SEL = MT6351_PMIC_RG_75K_32K_SEL,
	PMIC_RG_AUXADC_CK_CKSEL = MT6351_PMIC_RG_AUXADC_CK_CKSEL,
	PMIC_RG_OSC_SEL_HW_SRC_SEL = MT6351_PMIC_RG_OSC_SEL_HW_SRC_SEL,
	PMIC_RG_SRCLKEN_SRC_SEL = MT6351_PMIC_RG_SRCLKEN_SRC_SEL,
	PMIC_TOP_CKSEL_CON_SET = MT6351_PMIC_TOP_CKSEL_CON_SET,
	PMIC_TOP_CKSEL_CON_CLR = MT6351_PMIC_TOP_CKSEL_CON_CLR,
	PMIC_RG_STRUP_75K_CK_CKSEL = MT6351_PMIC_RG_STRUP_75K_CK_CKSEL,
	PMIC_RG_BGR_TEST_CK_CKSEL = MT6351_PMIC_RG_BGR_TEST_CK_CKSEL,
	PMIC_RG_PCHR_TEST_CK_CKSEL = MT6351_PMIC_RG_PCHR_TEST_CK_CKSEL,
	PMIC_RG_FGADC_ANA_CK_CKSEL = MT6351_PMIC_RG_FGADC_ANA_CK_CKSEL,
	PMIC_RG_DRV_ISINK4_CK_CKSEL = MT6351_PMIC_RG_DRV_ISINK4_CK_CKSEL,
	PMIC_RG_DRV_ISINK5_CK_CKSEL = MT6351_PMIC_RG_DRV_ISINK5_CK_CKSEL,
	PMIC_RG_DRV_ISINK6_CK_CKSEL = MT6351_PMIC_RG_DRV_ISINK6_CK_CKSEL,
	PMIC_RG_DRV_ISINK7_CK_CKSEL = MT6351_PMIC_RG_DRV_ISINK7_CK_CKSEL,
	PMIC_RG_DRV_CHRIND_CK_CKSEL = MT6351_PMIC_RG_DRV_CHRIND_CK_CKSEL,
	PMIC_RG_TOP_CKSEL_CON1_RSV = MT6351_PMIC_RG_TOP_CKSEL_CON1_RSV,
	PMIC_TOP_CKSEL_CON1_SET = MT6351_PMIC_TOP_CKSEL_CON1_SET,
	PMIC_TOP_CKSEL_CON1_CLR = MT6351_PMIC_TOP_CKSEL_CON1_CLR,
	PMIC_RG_SRCVOLTEN_SW = MT6351_PMIC_RG_SRCVOLTEN_SW,
	PMIC_RG_BUCK_OSC_SEL_SW = MT6351_PMIC_RG_BUCK_OSC_SEL_SW,
	PMIC_RG_VOWEN_SW = MT6351_PMIC_RG_VOWEN_SW,
	PMIC_RG_SRCVOLTEN_MODE = MT6351_PMIC_RG_SRCVOLTEN_MODE,
	PMIC_RG_BUCK_OSC_SEL_MODE = MT6351_PMIC_RG_BUCK_OSC_SEL_MODE,
	PMIC_RG_VOWEN_MODE = MT6351_PMIC_RG_VOWEN_MODE,
	PMIC_RG_TOP_CKSEL_CON2_RSV = MT6351_PMIC_RG_TOP_CKSEL_CON2_RSV,
	PMIC_RG_BUCK_VMD1_OSC_SEL_SW = MT6351_PMIC_RG_BUCK_VMD1_OSC_SEL_SW,
	PMIC_RG_BUCK_VMD1_OSC_SEL_MODE = MT6351_PMIC_RG_BUCK_VMD1_OSC_SEL_MODE,
	PMIC_TOP_CKSEL_CON2_SET = MT6351_PMIC_TOP_CKSEL_CON2_SET,
	PMIC_TOP_CKSEL_CON2_CLR = MT6351_PMIC_TOP_CKSEL_CON2_CLR,
	PMIC_RG_BUCK_VCORE_OSC_SEL_SW = MT6351_PMIC_RG_BUCK_VCORE_OSC_SEL_SW,
	PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_SW =
	    MT6351_PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_SW,
	PMIC_RG_BUCK_VPA_OSC_SEL_SW = MT6351_PMIC_RG_BUCK_VPA_OSC_SEL_SW,
	PMIC_RG_BUCK_VMODEM_OSC_SEL_SW = MT6351_PMIC_RG_BUCK_VMODEM_OSC_SEL_SW,
	PMIC_RG_BUCK_VGPU_OSC_SEL_SW = MT6351_PMIC_RG_BUCK_VGPU_OSC_SEL_SW,
	PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_SW =
	    MT6351_PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_SW,
	PMIC_RG_BUCK_VS2_OSC_SEL_SW = MT6351_PMIC_RG_BUCK_VS2_OSC_SEL_SW,
	PMIC_RG_BUCK_VS1_OSC_SEL_SW = MT6351_PMIC_RG_BUCK_VS1_OSC_SEL_SW,
	PMIC_RG_BUCK_VCORE_OSC_SEL_MODE =
	    MT6351_PMIC_RG_BUCK_VCORE_OSC_SEL_MODE,
	PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_MODE =
	    MT6351_PMIC_RG_BUCK_VSRAM_PROC_OSC_SEL_MODE,
	PMIC_RG_BUCK_VPA_OSC_SEL_MODE = MT6351_PMIC_RG_BUCK_VPA_OSC_SEL_MODE,
	PMIC_RG_BUCK_VMODEM_OSC_SEL_MODE =
	    MT6351_PMIC_RG_BUCK_VMODEM_OSC_SEL_MODE,
	PMIC_RG_BUCK_VGPU_OSC_SEL_MODE = MT6351_PMIC_RG_BUCK_VGPU_OSC_SEL_MODE,
	PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_MODE =
	    MT6351_PMIC_RG_BUCK_VSRAM_MD_OSC_SEL_MODE,
	PMIC_RG_BUCK_VS2_OSC_SEL_MODE = MT6351_PMIC_RG_BUCK_VS2_OSC_SEL_MODE,
	PMIC_RG_BUCK_VS1_OSC_SEL_MODE = MT6351_PMIC_RG_BUCK_VS1_OSC_SEL_MODE,
	PMIC_TOP_CKSEL_CON3_SET = MT6351_PMIC_TOP_CKSEL_CON3_SET,
	PMIC_TOP_CKSEL_CON3_CLR = MT6351_PMIC_TOP_CKSEL_CON3_CLR,
	PMIC_RG_STRUP_LBAT_SEL_CK_DIVSEL =
	    MT6351_PMIC_RG_STRUP_LBAT_SEL_CK_DIVSEL,
	PMIC_TOP_CKDIVSEL_CON_RSV = MT6351_PMIC_TOP_CKDIVSEL_CON_RSV,
	PMIC_RG_BIF_X4_CK_DIVSEL = MT6351_PMIC_RG_BIF_X4_CK_DIVSEL,
	PMIC_RG_REG_CK_DIVSEL = MT6351_PMIC_RG_REG_CK_DIVSEL,
	PMIC_TOP_CKDIVSEL_CON0_RSV = MT6351_PMIC_TOP_CKDIVSEL_CON0_RSV,
	PMIC_TOP_CKDIVSEL_CON0_SET = MT6351_PMIC_TOP_CKDIVSEL_CON0_SET,
	PMIC_TOP_CKDIVSEL_CON0_CLR = MT6351_PMIC_TOP_CKDIVSEL_CON0_CLR,
	PMIC_RG_AUXADC_SMPS_CK_DIVSEL = MT6351_PMIC_RG_AUXADC_SMPS_CK_DIVSEL,
	PMIC_RG_AUXADC_26M_CK_DIVSEL = MT6351_PMIC_RG_AUXADC_26M_CK_DIVSEL,
	PMIC_RG_BUCK_9M_CK_DIVSEL = MT6351_PMIC_RG_BUCK_9M_CK_DIVSEL,
	PMIC_TOP_CKDIVSEL_CON1_SET = MT6351_PMIC_TOP_CKDIVSEL_CON1_SET,
	PMIC_TOP_CKDIVSEL_CON1_CLR = MT6351_PMIC_TOP_CKDIVSEL_CON1_CLR,
	PMIC_RG_G_SMPS_PD_CK_PDN_HWEN = MT6351_PMIC_RG_G_SMPS_PD_CK_PDN_HWEN,
	PMIC_RG_G_SMPS_AUD_CK_PDN_HWEN = MT6351_PMIC_RG_G_SMPS_AUD_CK_PDN_HWEN,
	PMIC_RG_G_DRV_2M_CK_PDN_HWEN = MT6351_PMIC_RG_G_DRV_2M_CK_PDN_HWEN,
	PMIC_RG_AUXADC_CK_PDN_HWEN = MT6351_PMIC_RG_AUXADC_CK_PDN_HWEN,
	PMIC_RG_AUXADC_SMPS_CK_PDN_HWEN =
	    MT6351_PMIC_RG_AUXADC_SMPS_CK_PDN_HWEN,
	PMIC_RG_BUCK_1M_CK_PDN_HWEN = MT6351_PMIC_RG_BUCK_1M_CK_PDN_HWEN,
	PMIC_RG_EFUSE_CK_PDN_HWEN = MT6351_PMIC_RG_EFUSE_CK_PDN_HWEN,
	PMIC_RG_RTC_26M_CK_PDN_HWEN = MT6351_PMIC_RG_RTC_26M_CK_PDN_HWEN,
	PMIC_RG_AUXADC_26M_CK_PDN_HWEN = MT6351_PMIC_RG_AUXADC_26M_CK_PDN_HWEN,
	PMIC_RG_AUXADC_CK_CKSEL_HWEN = MT6351_PMIC_RG_AUXADC_CK_CKSEL_HWEN,
	PMIC_TOP_CKHWEN_CON0_RSV = MT6351_PMIC_TOP_CKHWEN_CON0_RSV,
	PMIC_TOP_CKHWEN_CON0_SET = MT6351_PMIC_TOP_CKHWEN_CON0_SET,
	PMIC_TOP_CKHWEN_CON0_CLR = MT6351_PMIC_TOP_CKHWEN_CON0_CLR,
	PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN_HWEN =
	    MT6351_PMIC_RG_BUCK_VSRAM_PROC_9M_CK_PDN_HWEN,
	PMIC_RG_BUCK_VPA_9M_CK_PDN_HWEN =
	    MT6351_PMIC_RG_BUCK_VPA_9M_CK_PDN_HWEN,
	PMIC_RG_BUCK_VMODEM_9M_CK_PDN_HWEN =
	    MT6351_PMIC_RG_BUCK_VMODEM_9M_CK_PDN_HWEN,
	PMIC_RG_BUCK_VCORE_9M_CK_PDN_HWEN =
	    MT6351_PMIC_RG_BUCK_VCORE_9M_CK_PDN_HWEN,
	PMIC_RG_BUCK_VGPU_9M_CK_PDN_HWEN =
	    MT6351_PMIC_RG_BUCK_VGPU_9M_CK_PDN_HWEN,
	PMIC_TOP_CKHWEN_CON1_RSV = MT6351_PMIC_TOP_CKHWEN_CON1_RSV,
	PMIC_TOP_CKHWEN_CON1_SET = MT6351_PMIC_TOP_CKHWEN_CON1_SET,
	PMIC_TOP_CKHWEN_CON1_CLR = MT6351_PMIC_TOP_CKHWEN_CON1_CLR,
	PMIC_RG_BUCK_VS2_9M_CK_PDN_HWEN =
	    MT6351_PMIC_RG_BUCK_VS2_9M_CK_PDN_HWEN,
	PMIC_RG_BUCK_VS1_9M_CK_PDN_HWEN =
	    MT6351_PMIC_RG_BUCK_VS1_9M_CK_PDN_HWEN,
	PMIC_RG_BUCK_VMD1_9M_CK_PDN_HWEN =
	    MT6351_PMIC_RG_BUCK_VMD1_9M_CK_PDN_HWEN,
	PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN_HWEN =
	    MT6351_PMIC_RG_BUCK_VSRAM_MD_9M_CK_PDN_HWEN,
	PMIC_RG_AUD18M_CK_PDN_HWEN = MT6351_PMIC_RG_AUD18M_CK_PDN_HWEN,
	PMIC_RG_BUCK_AUD_1M_CK_PDN_HWEN =
	    MT6351_PMIC_RG_BUCK_AUD_1M_CK_PDN_HWEN,
	PMIC_TOP_CKHWEN_CON2_RSV = MT6351_PMIC_TOP_CKHWEN_CON2_RSV,
	PMIC_TOP_CKHWEN_CON2_SET = MT6351_PMIC_TOP_CKHWEN_CON2_SET,
	PMIC_TOP_CKHWEN_CON2_CLR = MT6351_PMIC_TOP_CKHWEN_CON2_CLR,
	PMIC_RG_PMU75K_CK_TST_DIS = MT6351_PMIC_RG_PMU75K_CK_TST_DIS,
	PMIC_RG_SMPS_CK_TST_DIS = MT6351_PMIC_RG_SMPS_CK_TST_DIS,
	PMIC_RG_AUD26M_CK_TST_DIS = MT6351_PMIC_RG_AUD26M_CK_TST_DIS,
	PMIC_RG_RTC32K_CK_TST_DIS = MT6351_PMIC_RG_RTC32K_CK_TST_DIS,
	PMIC_RG_FG_CK_TST_DIS = MT6351_PMIC_RG_FG_CK_TST_DIS,
	PMIC_RG_RTC26M_CK_TST_DIS = MT6351_PMIC_RG_RTC26M_CK_TST_DIS,
	PMIC_RG_VOW12M_CK_TST_DIS = MT6351_PMIC_RG_VOW12M_CK_TST_DIS,
	PMIC_TOP_CKTST_CON0_RSV = MT6351_PMIC_TOP_CKTST_CON0_RSV,
	PMIC_RG_BUCK_ANA_AUTO_OFF_DIS = MT6351_PMIC_RG_BUCK_ANA_AUTO_OFF_DIS,
	PMIC_RG_DRV_ISINK0_CK_TSTSEL = MT6351_PMIC_RG_DRV_ISINK0_CK_TSTSEL,
	PMIC_RG_DRV_ISINK1_CK_TSTSEL = MT6351_PMIC_RG_DRV_ISINK1_CK_TSTSEL,
	PMIC_RG_DRV_ISINK2_CK_TSTSEL = MT6351_PMIC_RG_DRV_ISINK2_CK_TSTSEL,
	PMIC_RG_DRV_ISINK3_CK_TSTSEL = MT6351_PMIC_RG_DRV_ISINK3_CK_TSTSEL,
	PMIC_RG_FQMTR_CK_TSTSEL = MT6351_PMIC_RG_FQMTR_CK_TSTSEL,
	PMIC_RG_RTCDET_CK_TSTSEL = MT6351_PMIC_RG_RTCDET_CK_TSTSEL,
	PMIC_RG_PMU75K_CK_TSTSEL = MT6351_PMIC_RG_PMU75K_CK_TSTSEL,
	PMIC_RG_SMPS_CK_TSTSEL = MT6351_PMIC_RG_SMPS_CK_TSTSEL,
	PMIC_RG_AUD26M_CK_TSTSEL = MT6351_PMIC_RG_AUD26M_CK_TSTSEL,
	PMIC_RG_AUDIF_CK_TSTSEL = MT6351_PMIC_RG_AUDIF_CK_TSTSEL,
	PMIC_RG_AUD_CK_TSTSEL = MT6351_PMIC_RG_AUD_CK_TSTSEL,
	PMIC_RG_STRUP_75K_CK_TSTSEL = MT6351_PMIC_RG_STRUP_75K_CK_TSTSEL,
	PMIC_RG_RTC32K_CK_TSTSEL = MT6351_PMIC_RG_RTC32K_CK_TSTSEL,
	PMIC_RG_PCHR_TEST_CK_TSTSEL = MT6351_PMIC_RG_PCHR_TEST_CK_TSTSEL,
	PMIC_RG_BGR_TEST_CK_TSTSEL = MT6351_PMIC_RG_BGR_TEST_CK_TSTSEL,
	PMIC_RG_FG_CK_TSTSEL = MT6351_PMIC_RG_FG_CK_TSTSEL,
	PMIC_RG_FGADC_ANA_CK_TSTSEL = MT6351_PMIC_RG_FGADC_ANA_CK_TSTSEL,
	PMIC_RG_RTC26M_CK_TSTSEL = MT6351_PMIC_RG_RTC26M_CK_TSTSEL,
	PMIC_RG_RTC_EOSC32_CK_TSTSEL = MT6351_PMIC_RG_RTC_EOSC32_CK_TSTSEL,
	PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL =
	    MT6351_PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL,
	PMIC_RG_AUXADC_CK_TSTSEL = MT6351_PMIC_RG_AUXADC_CK_TSTSEL,
	PMIC_RG_AUXADC_SMPS_CK_TSTSEL = MT6351_PMIC_RG_AUXADC_SMPS_CK_TSTSEL,
	PMIC_RG_AUXADC_26M_CK_TSTSEL = MT6351_PMIC_RG_AUXADC_26M_CK_TSTSEL,
	PMIC_RG_VOW12M_CK_TSTSEL = MT6351_PMIC_RG_VOW12M_CK_TSTSEL,
	PMIC_RG_DRV_ISINK4_CK_TSTSEL = MT6351_PMIC_RG_DRV_ISINK4_CK_TSTSEL,
	PMIC_RG_DRV_ISINK5_CK_TSTSEL = MT6351_PMIC_RG_DRV_ISINK5_CK_TSTSEL,
	PMIC_RG_DRV_ISINK6_CK_TSTSEL = MT6351_PMIC_RG_DRV_ISINK6_CK_TSTSEL,
	PMIC_RG_DRV_ISINK7_CK_TSTSEL = MT6351_PMIC_RG_DRV_ISINK7_CK_TSTSEL,
	PMIC_RG_DRV_CHRIND_CK_TSTSEL = MT6351_PMIC_RG_DRV_CHRIND_CK_TSTSEL,
	PMIC_TOP_CKTST_CON2_RSV = MT6351_PMIC_TOP_CKTST_CON2_RSV,
	PMIC_RG_CLKSQ_EN_AUD = MT6351_PMIC_RG_CLKSQ_EN_AUD,
	PMIC_RG_CLKSQ_EN_FQR = MT6351_PMIC_RG_CLKSQ_EN_FQR,
	PMIC_RG_CLKSQ_EN_AUX_AP = MT6351_PMIC_RG_CLKSQ_EN_AUX_AP,
	PMIC_RG_CLKSQ_EN_AUX_MD = MT6351_PMIC_RG_CLKSQ_EN_AUX_MD,
	PMIC_RG_CLKSQ_EN_AUX_GPS = MT6351_PMIC_RG_CLKSQ_EN_AUX_GPS,
	PMIC_RG_CLKSQ_EN_AUX_RSV = MT6351_PMIC_RG_CLKSQ_EN_AUX_RSV,
	PMIC_RG_CLKSQ_EN_AUX_AP_MODE = MT6351_PMIC_RG_CLKSQ_EN_AUX_AP_MODE,
	PMIC_RG_CLKSQ_EN_AUX_MD_MODE = MT6351_PMIC_RG_CLKSQ_EN_AUX_MD_MODE,
	PMIC_RG_CLKSQ_IN_SEL_VA18 = MT6351_PMIC_RG_CLKSQ_IN_SEL_VA18,
	PMIC_RG_CLKSQ_IN_SEL_VA18_SWCTRL =
	    MT6351_PMIC_RG_CLKSQ_IN_SEL_VA18_SWCTRL,
	PMIC_TOP_CLKSQ_RSV = MT6351_PMIC_TOP_CLKSQ_RSV,
	PMIC_DA_CLKSQ_EN_VA18 = MT6351_PMIC_DA_CLKSQ_EN_VA18,
	PMIC_TOP_CLKSQ_SET = MT6351_PMIC_TOP_CLKSQ_SET,
	PMIC_TOP_CLKSQ_CLR = MT6351_PMIC_TOP_CLKSQ_CLR,
	PMIC_RG_CLKSQ_RTC_EN = MT6351_PMIC_RG_CLKSQ_RTC_EN,
	PMIC_RG_CLKSQ_RTC_EN_HW_MODE = MT6351_PMIC_RG_CLKSQ_RTC_EN_HW_MODE,
	PMIC_TOP_CLKSQ_RTC_RSV0 = MT6351_PMIC_TOP_CLKSQ_RTC_RSV0,
	PMIC_RG_ENBB_SEL = MT6351_PMIC_RG_ENBB_SEL,
	PMIC_RG_XOSC_EN_SEL = MT6351_PMIC_RG_XOSC_EN_SEL,
	PMIC_TOP_CLKSQ_RTC_RSV1 = MT6351_PMIC_TOP_CLKSQ_RTC_RSV1,
	PMIC_DA_CLKSQ_EN_VDIG18 = MT6351_PMIC_DA_CLKSQ_EN_VDIG18,
	PMIC_TOP_CLKSQ_RTC_SET = MT6351_PMIC_TOP_CLKSQ_RTC_SET,
	PMIC_TOP_CLKSQ_RTC_CLR = MT6351_PMIC_TOP_CLKSQ_RTC_CLR,
	PMIC_OSC_75K_TRIM = MT6351_PMIC_OSC_75K_TRIM,
	PMIC_RG_OSC_75K_TRIM_EN = MT6351_PMIC_RG_OSC_75K_TRIM_EN,
	PMIC_RG_OSC_75K_TRIM_RATE = MT6351_PMIC_RG_OSC_75K_TRIM_RATE,
	PMIC_DA_OSC_75K_TRIM = MT6351_PMIC_DA_OSC_75K_TRIM,
	PMIC_RG_EFUSE_MAN_RST = MT6351_PMIC_RG_EFUSE_MAN_RST,
	PMIC_RG_AUXADC_RST = MT6351_PMIC_RG_AUXADC_RST,
	PMIC_RG_AUXADC_REG_RST = MT6351_PMIC_RG_AUXADC_REG_RST,
	PMIC_RG_AUDIO_RST = MT6351_PMIC_RG_AUDIO_RST,
	PMIC_RG_ACCDET_RST = MT6351_PMIC_RG_ACCDET_RST,
	PMIC_RG_BIF_RST = MT6351_PMIC_RG_BIF_RST,
	PMIC_RG_DRIVER_RST = MT6351_PMIC_RG_DRIVER_RST,
	PMIC_RG_FGADC_RST = MT6351_PMIC_RG_FGADC_RST,
	PMIC_RG_FQMTR_RST = MT6351_PMIC_RG_FQMTR_RST,
	PMIC_RG_RTC_RST = MT6351_PMIC_RG_RTC_RST,
	PMIC_RG_CHRWDT_RST = MT6351_PMIC_RG_CHRWDT_RST,
	PMIC_RG_ZCD_RST = MT6351_PMIC_RG_ZCD_RST,
	PMIC_RG_AUDNCP_RST = MT6351_PMIC_RG_AUDNCP_RST,
	PMIC_RG_CLK_TRIM_RST = MT6351_PMIC_RG_CLK_TRIM_RST,
	PMIC_RG_LDO_CALI_RST = MT6351_PMIC_RG_LDO_CALI_RST,
	PMIC_TOP_RST_CON0_SET = MT6351_PMIC_TOP_RST_CON0_SET,
	PMIC_TOP_RST_CON0_CLR = MT6351_PMIC_TOP_RST_CON0_CLR,
	PMIC_RG_STRUP_LONG_PRESS_RST = MT6351_PMIC_RG_STRUP_LONG_PRESS_RST,
	PMIC_TOP_RST_CON1_RSV = MT6351_PMIC_TOP_RST_CON1_RSV,
	PMIC_TOP_RST_CON1_SET = MT6351_PMIC_TOP_RST_CON1_SET,
	PMIC_TOP_RST_CON1_CLR = MT6351_PMIC_TOP_RST_CON1_CLR,
	PMIC_RG_CHR_LDO_DET_MODE = MT6351_PMIC_RG_CHR_LDO_DET_MODE,
	PMIC_RG_CHR_LDO_DET_SW = MT6351_PMIC_RG_CHR_LDO_DET_SW,
	PMIC_RG_CHRWDT_FLAG_MODE = MT6351_PMIC_RG_CHRWDT_FLAG_MODE,
	PMIC_RG_CHRWDT_FLAG_SW = MT6351_PMIC_RG_CHRWDT_FLAG_SW,
	PMIC_TOP_RST_CON2_RSV = MT6351_PMIC_TOP_RST_CON2_RSV,
	PMIC_RG_WDTRSTB_EN = MT6351_PMIC_RG_WDTRSTB_EN,
	PMIC_RG_WDTRSTB_MODE = MT6351_PMIC_RG_WDTRSTB_MODE,
	PMIC_WDTRSTB_STATUS = MT6351_PMIC_WDTRSTB_STATUS,
	PMIC_WDTRSTB_STATUS_CLR = MT6351_PMIC_WDTRSTB_STATUS_CLR,
	PMIC_RG_WDTRSTB_FB_EN = MT6351_PMIC_RG_WDTRSTB_FB_EN,
	PMIC_RG_WDTRSTB_DEB = MT6351_PMIC_RG_WDTRSTB_DEB,
	PMIC_RG_HOMEKEY_RST_EN = MT6351_PMIC_RG_HOMEKEY_RST_EN,
	PMIC_RG_PWRKEY_RST_EN = MT6351_PMIC_RG_PWRKEY_RST_EN,
	PMIC_RG_PWRRST_TMR_DIS = MT6351_PMIC_RG_PWRRST_TMR_DIS,
	PMIC_RG_PWRKEY_RST_TD = MT6351_PMIC_RG_PWRKEY_RST_TD,
	PMIC_TOP_RST_MISC_RSV = MT6351_PMIC_TOP_RST_MISC_RSV,
	PMIC_TOP_RST_MISC_SET = MT6351_PMIC_TOP_RST_MISC_SET,
	PMIC_TOP_RST_MISC_CLR = MT6351_PMIC_TOP_RST_MISC_CLR,
	PMIC_VPWRIN_RSTB_STATUS = MT6351_PMIC_VPWRIN_RSTB_STATUS,
	PMIC_DDLO_RSTB_STATUS = MT6351_PMIC_DDLO_RSTB_STATUS,
	PMIC_UVLO_RSTB_STATUS = MT6351_PMIC_UVLO_RSTB_STATUS,
	PMIC_RTC_DDLO_RSTB_STATUS = MT6351_PMIC_RTC_DDLO_RSTB_STATUS,
	PMIC_CHRWDT_REG_RSTB_STATUS = MT6351_PMIC_CHRWDT_REG_RSTB_STATUS,
	PMIC_CHRDET_REG_RSTB_STATUS = MT6351_PMIC_CHRDET_REG_RSTB_STATUS,
	PMIC_TOP_RST_STATUS_RSV = MT6351_PMIC_TOP_RST_STATUS_RSV,
	PMIC_TOP_RST_STATUS_SET = MT6351_PMIC_TOP_RST_STATUS_SET,
	PMIC_TOP_RST_STATUS_CLR = MT6351_PMIC_TOP_RST_STATUS_CLR,
	PMIC_RG_INT_EN_PWRKEY = MT6351_PMIC_RG_INT_EN_PWRKEY,
	PMIC_RG_INT_EN_HOMEKEY = MT6351_PMIC_RG_INT_EN_HOMEKEY,
	PMIC_RG_INT_EN_PWRKEY_R = MT6351_PMIC_RG_INT_EN_PWRKEY_R,
	PMIC_RG_INT_EN_HOMEKEY_R = MT6351_PMIC_RG_INT_EN_HOMEKEY_R,
	PMIC_RG_INT_EN_THR_H = MT6351_PMIC_RG_INT_EN_THR_H,
	PMIC_RG_INT_EN_THR_L = MT6351_PMIC_RG_INT_EN_THR_L,
	PMIC_RG_INT_EN_BAT_H = MT6351_PMIC_RG_INT_EN_BAT_H,
	PMIC_RG_INT_EN_BAT_L = MT6351_PMIC_RG_INT_EN_BAT_L,
	PMIC_RG_INT_EN_RTC = MT6351_PMIC_RG_INT_EN_RTC,
	PMIC_RG_INT_EN_AUDIO = MT6351_PMIC_RG_INT_EN_AUDIO,
	PMIC_RG_INT_EN_MAD = MT6351_PMIC_RG_INT_EN_MAD,
	PMIC_RG_INT_EN_ACCDET = MT6351_PMIC_RG_INT_EN_ACCDET,
	PMIC_RG_INT_EN_ACCDET_EINT = MT6351_PMIC_RG_INT_EN_ACCDET_EINT,
	PMIC_RG_INT_EN_ACCDET_NEGV = MT6351_PMIC_RG_INT_EN_ACCDET_NEGV,
	PMIC_RG_INT_EN_NI_LBAT_INT = MT6351_PMIC_RG_INT_EN_NI_LBAT_INT,
	PMIC_INT_CON0_SET = MT6351_PMIC_INT_CON0_SET,
	PMIC_INT_CON0_CLR = MT6351_PMIC_INT_CON0_CLR,
	PMIC_RG_INT_EN_VCORE_OC = MT6351_PMIC_RG_INT_EN_VCORE_OC,
	PMIC_RG_INT_EN_VGPU_OC = MT6351_PMIC_RG_INT_EN_VGPU_OC,
	PMIC_RG_INT_EN_VSRAM_MD_OC = MT6351_PMIC_RG_INT_EN_VSRAM_MD_OC,
	PMIC_RG_INT_EN_VMODEM_OC = MT6351_PMIC_RG_INT_EN_VMODEM_OC,
	PMIC_RG_INT_EN_VM1_OC = MT6351_PMIC_RG_INT_EN_VM1_OC,
	PMIC_RG_INT_EN_VS1_OC = MT6351_PMIC_RG_INT_EN_VS1_OC,
	PMIC_RG_INT_EN_VS2_OC = MT6351_PMIC_RG_INT_EN_VS2_OC,
	PMIC_RG_INT_EN_VPA_OC = MT6351_PMIC_RG_INT_EN_VPA_OC,
	PMIC_RG_INT_EN_VCORE_PREOC = MT6351_PMIC_RG_INT_EN_VCORE_PREOC,
	PMIC_RG_INT_EN_VGPU_PREOC = MT6351_PMIC_RG_INT_EN_VGPU_PREOC,
	PMIC_RG_INT_EN_VSRAM_MD_PREOC = MT6351_PMIC_RG_INT_EN_VSRAM_MD_PREOC,
	PMIC_RG_INT_EN_VMODEM_PREOC = MT6351_PMIC_RG_INT_EN_VMODEM_PREOC,
	PMIC_RG_INT_EN_VM1_PREOC = MT6351_PMIC_RG_INT_EN_VM1_PREOC,
	PMIC_RG_INT_EN_VS1_PREOC = MT6351_PMIC_RG_INT_EN_VS1_PREOC,
	PMIC_RG_INT_EN_VS2_PREOC = MT6351_PMIC_RG_INT_EN_VS2_PREOC,
	PMIC_RG_INT_EN_LDO_OC = MT6351_PMIC_RG_INT_EN_LDO_OC,
	PMIC_INT_CON1_SET = MT6351_PMIC_INT_CON1_SET,
	PMIC_INT_CON1_CLR = MT6351_PMIC_INT_CON1_CLR,
	PMIC_RG_INT_EN_JEITA_HOT = MT6351_PMIC_RG_INT_EN_JEITA_HOT,
	PMIC_RG_INT_EN_JEITA_WARM = MT6351_PMIC_RG_INT_EN_JEITA_WARM,
	PMIC_RG_INT_EN_JEITA_COOL = MT6351_PMIC_RG_INT_EN_JEITA_COOL,
	PMIC_RG_INT_EN_JEITA_COLD = MT6351_PMIC_RG_INT_EN_JEITA_COLD,
	PMIC_RG_INT_EN_AUXADC_IMP = MT6351_PMIC_RG_INT_EN_AUXADC_IMP,
	PMIC_RG_INT_EN_NAG_C_DLTV = MT6351_PMIC_RG_INT_EN_NAG_C_DLTV,
	PMIC_RG_INT_EN_OV = MT6351_PMIC_RG_INT_EN_OV,
	PMIC_RG_INT_EN_BVALID_DET = MT6351_PMIC_RG_INT_EN_BVALID_DET,
	PMIC_RG_INT_EN_RGS_BATON_HV = MT6351_PMIC_RG_INT_EN_RGS_BATON_HV,
	PMIC_RG_INT_EN_VBATON_UNDET = MT6351_PMIC_RG_INT_EN_VBATON_UNDET,
	PMIC_RG_INT_EN_WATCHDOG = MT6351_PMIC_RG_INT_EN_WATCHDOG,
	PMIC_RG_INT_EN_PCHR_CM_VDEC = MT6351_PMIC_RG_INT_EN_PCHR_CM_VDEC,
	PMIC_RG_INT_EN_CHRDET = MT6351_PMIC_RG_INT_EN_CHRDET,
	PMIC_RG_INT_EN_PCHR_CM_VINC = MT6351_PMIC_RG_INT_EN_PCHR_CM_VINC,
	PMIC_INT_CON2_SET = MT6351_PMIC_INT_CON2_SET,
	PMIC_INT_CON2_CLR = MT6351_PMIC_INT_CON2_CLR,
	PMIC_RG_INT_EN_FG_BAT_H = MT6351_PMIC_RG_INT_EN_FG_BAT_H,
	PMIC_RG_INT_EN_FG_BAT_L = MT6351_PMIC_RG_INT_EN_FG_BAT_L,
	PMIC_RG_INT_EN_FG_CUR_H = MT6351_PMIC_RG_INT_EN_FG_CUR_H,
	PMIC_RG_INT_EN_FG_CUR_L = MT6351_PMIC_RG_INT_EN_FG_CUR_L,
	PMIC_RG_INT_EN_FG_ZCV = MT6351_PMIC_RG_INT_EN_FG_ZCV,
	PMIC_INT_CON3_SET = MT6351_PMIC_INT_CON3_SET,
	PMIC_INT_CON3_CLR = MT6351_PMIC_INT_CON3_CLR,
	PMIC_POLARITY = MT6351_PMIC_POLARITY,
	PMIC_RG_HOMEKEY_INT_SEL = MT6351_PMIC_RG_HOMEKEY_INT_SEL,
	PMIC_RG_PWRKEY_INT_SEL = MT6351_PMIC_RG_PWRKEY_INT_SEL,
	PMIC_RG_CHRDET_INT_SEL = MT6351_PMIC_RG_CHRDET_INT_SEL,
	PMIC_RG_PCHR_CM_VINC_POLARITY_RSV =
	    MT6351_PMIC_RG_PCHR_CM_VINC_POLARITY_RSV,
	PMIC_RG_PCHR_CM_VDEC_POLARITY_RSV =
	    MT6351_PMIC_RG_PCHR_CM_VDEC_POLARITY_RSV,
	PMIC_INT_MISC_CON_SET = MT6351_PMIC_INT_MISC_CON_SET,
	PMIC_INT_MISC_CON_CLR = MT6351_PMIC_INT_MISC_CON_CLR,
	PMIC_RG_INT_STATUS_PWRKEY = MT6351_PMIC_RG_INT_STATUS_PWRKEY,
	PMIC_RG_INT_STATUS_HOMEKEY = MT6351_PMIC_RG_INT_STATUS_HOMEKEY,
	PMIC_RG_INT_STATUS_PWRKEY_R = MT6351_PMIC_RG_INT_STATUS_PWRKEY_R,
	PMIC_RG_INT_STATUS_HOMEKEY_R = MT6351_PMIC_RG_INT_STATUS_HOMEKEY_R,
	PMIC_RG_INT_STATUS_THR_H = MT6351_PMIC_RG_INT_STATUS_THR_H,
	PMIC_RG_INT_STATUS_THR_L = MT6351_PMIC_RG_INT_STATUS_THR_L,
	PMIC_RG_INT_STATUS_BAT_H = MT6351_PMIC_RG_INT_STATUS_BAT_H,
	PMIC_RG_INT_STATUS_BAT_L = MT6351_PMIC_RG_INT_STATUS_BAT_L,
	PMIC_RG_INT_STATUS_RTC = MT6351_PMIC_RG_INT_STATUS_RTC,
	PMIC_RG_INT_STATUS_AUDIO = MT6351_PMIC_RG_INT_STATUS_AUDIO,
	PMIC_RG_INT_STATUS_MAD = MT6351_PMIC_RG_INT_STATUS_MAD,
	PMIC_RG_INT_STATUS_ACCDET = MT6351_PMIC_RG_INT_STATUS_ACCDET,
	PMIC_RG_INT_STATUS_ACCDET_EINT = MT6351_PMIC_RG_INT_STATUS_ACCDET_EINT,
	PMIC_RG_INT_STATUS_ACCDET_NEGV = MT6351_PMIC_RG_INT_STATUS_ACCDET_NEGV,
	PMIC_RG_INT_STATUS_NI_LBAT_INT = MT6351_PMIC_RG_INT_STATUS_NI_LBAT_INT,
	PMIC_RG_INT_STATUS_VCORE_OC = MT6351_PMIC_RG_INT_STATUS_VCORE_OC,
	PMIC_RG_INT_STATUS_VGPU_OC = MT6351_PMIC_RG_INT_STATUS_VGPU_OC,
	PMIC_RG_INT_STATUS_VSRAM_MD_OC = MT6351_PMIC_RG_INT_STATUS_VSRAM_MD_OC,
	PMIC_RG_INT_STATUS_VMODEM_OC = MT6351_PMIC_RG_INT_STATUS_VMODEM_OC,
	PMIC_RG_INT_STATUS_VM1_OC = MT6351_PMIC_RG_INT_STATUS_VM1_OC,
	PMIC_RG_INT_STATUS_VS1_OC = MT6351_PMIC_RG_INT_STATUS_VS1_OC,
	PMIC_RG_INT_STATUS_VS2_OC = MT6351_PMIC_RG_INT_STATUS_VS2_OC,
	PMIC_RG_INT_STATUS_VPA_OC = MT6351_PMIC_RG_INT_STATUS_VPA_OC,
	PMIC_RG_INT_STATUS_VCORE_PREOC = MT6351_PMIC_RG_INT_STATUS_VCORE_PREOC,
	PMIC_RG_INT_STATUS_VGPU_PREOC = MT6351_PMIC_RG_INT_STATUS_VGPU_PREOC,
	PMIC_RG_INT_STATUS_VSRAM_MD_PREOC =
	    MT6351_PMIC_RG_INT_STATUS_VSRAM_MD_PREOC,
	PMIC_RG_INT_STATUS_VMODEM_PREOC =
	    MT6351_PMIC_RG_INT_STATUS_VMODEM_PREOC,
	PMIC_RG_INT_STATUS_VM1_PREOC = MT6351_PMIC_RG_INT_STATUS_VM1_PREOC,
	PMIC_RG_INT_STATUS_VS1_PREOC = MT6351_PMIC_RG_INT_STATUS_VS1_PREOC,
	PMIC_RG_INT_STATUS_VS2_PREOC = MT6351_PMIC_RG_INT_STATUS_VS2_PREOC,
	PMIC_RG_INT_STATUS_LDO_OC = MT6351_PMIC_RG_INT_STATUS_LDO_OC,
	PMIC_RG_INT_STATUS_JEITA_HOT = MT6351_PMIC_RG_INT_STATUS_JEITA_HOT,
	PMIC_RG_INT_STATUS_JEITA_WARM = MT6351_PMIC_RG_INT_STATUS_JEITA_WARM,
	PMIC_RG_INT_STATUS_JEITA_COOL = MT6351_PMIC_RG_INT_STATUS_JEITA_COOL,
	PMIC_RG_INT_STATUS_JEITA_COLD = MT6351_PMIC_RG_INT_STATUS_JEITA_COLD,
	PMIC_RG_INT_STATUS_AUXADC_IMP = MT6351_PMIC_RG_INT_STATUS_AUXADC_IMP,
	PMIC_RG_INT_STATUS_NAG_C_DLTV = MT6351_PMIC_RG_INT_STATUS_NAG_C_DLTV,
	PMIC_RG_INT_STATUS_OV = MT6351_PMIC_RG_INT_STATUS_OV,
	PMIC_RG_INT_STATUS_BVALID_DET = MT6351_PMIC_RG_INT_STATUS_BVALID_DET,
	PMIC_RG_INT_STATUS_RGS_BATON_HV =
	    MT6351_PMIC_RG_INT_STATUS_RGS_BATON_HV,
	PMIC_RG_INT_STATUS_VBATON_UNDET =
	    MT6351_PMIC_RG_INT_STATUS_VBATON_UNDET,
	PMIC_RG_INT_STATUS_WATCHDOG = MT6351_PMIC_RG_INT_STATUS_WATCHDOG,
	PMIC_RG_INT_STATUS_PCHR_CM_VDEC =
	    MT6351_PMIC_RG_INT_STATUS_PCHR_CM_VDEC,
	PMIC_RG_INT_STATUS_CHRDET = MT6351_PMIC_RG_INT_STATUS_CHRDET,
	PMIC_RG_INT_STATUS_PCHR_CM_VINC =
	    MT6351_PMIC_RG_INT_STATUS_PCHR_CM_VINC,
	PMIC_RG_INT_STATUS_FG_BAT_H = MT6351_PMIC_RG_INT_STATUS_FG_BAT_H,
	PMIC_RG_INT_STATUS_FG_BAT_L = MT6351_PMIC_RG_INT_STATUS_FG_BAT_L,
	PMIC_RG_INT_STATUS_FG_CUR_H = MT6351_PMIC_RG_INT_STATUS_FG_CUR_H,
	PMIC_RG_INT_STATUS_FG_CUR_L = MT6351_PMIC_RG_INT_STATUS_FG_CUR_L,
	PMIC_RG_INT_STATUS_FG_ZCV = MT6351_PMIC_RG_INT_STATUS_FG_ZCV,
	PMIC_OC_GEAR_LDO = MT6351_PMIC_OC_GEAR_LDO,
	PMIC_FQMTR_TCKSEL = MT6351_PMIC_FQMTR_TCKSEL,
	PMIC_FQMTR_BUSY = MT6351_PMIC_FQMTR_BUSY,
	PMIC_FQMTR_EN = MT6351_PMIC_FQMTR_EN,
	PMIC_FQMTR_WINSET = MT6351_PMIC_FQMTR_WINSET,
	PMIC_FQMTR_DATA = MT6351_PMIC_FQMTR_DATA,
	PMIC_RG_SLP_RW_EN = MT6351_PMIC_RG_SLP_RW_EN,
	PMIC_RG_SPI_RSV = MT6351_PMIC_RG_SPI_RSV,
	PMIC_DEW_DIO_EN = MT6351_PMIC_DEW_DIO_EN,
	PMIC_DEW_READ_TEST = MT6351_PMIC_DEW_READ_TEST,
	PMIC_DEW_WRITE_TEST = MT6351_PMIC_DEW_WRITE_TEST,
	PMIC_DEW_CRC_SWRST = MT6351_PMIC_DEW_CRC_SWRST,
	PMIC_DEW_CRC_EN = MT6351_PMIC_DEW_CRC_EN,
	PMIC_DEW_CRC_VAL = MT6351_PMIC_DEW_CRC_VAL,
	PMIC_DEW_DBG_MON_SEL = MT6351_PMIC_DEW_DBG_MON_SEL,
	PMIC_DEW_CIPHER_KEY_SEL = MT6351_PMIC_DEW_CIPHER_KEY_SEL,
	PMIC_DEW_CIPHER_IV_SEL = MT6351_PMIC_DEW_CIPHER_IV_SEL,
	PMIC_DEW_CIPHER_EN = MT6351_PMIC_DEW_CIPHER_EN,
	PMIC_DEW_CIPHER_RDY = MT6351_PMIC_DEW_CIPHER_RDY,
	PMIC_DEW_CIPHER_MODE = MT6351_PMIC_DEW_CIPHER_MODE,
	PMIC_DEW_CIPHER_SWRST = MT6351_PMIC_DEW_CIPHER_SWRST,
	PMIC_DEW_RDDMY_NO = MT6351_PMIC_DEW_RDDMY_NO,
	PMIC_INT_TYPE_CON0 = MT6351_PMIC_INT_TYPE_CON0,
	PMIC_INT_TYPE_CON0_SET = MT6351_PMIC_INT_TYPE_CON0_SET,
	PMIC_INT_TYPE_CON0_CLR = MT6351_PMIC_INT_TYPE_CON0_CLR,
	PMIC_INT_TYPE_CON1 = MT6351_PMIC_INT_TYPE_CON1,
	PMIC_INT_TYPE_CON1_SET = MT6351_PMIC_INT_TYPE_CON1_SET,
	PMIC_INT_TYPE_CON1_CLR = MT6351_PMIC_INT_TYPE_CON1_CLR,
	PMIC_INT_TYPE_CON2 = MT6351_PMIC_INT_TYPE_CON2,
	PMIC_INT_TYPE_CON2_SET = MT6351_PMIC_INT_TYPE_CON2_SET,
	PMIC_INT_TYPE_CON2_CLR = MT6351_PMIC_INT_TYPE_CON2_CLR,
	PMIC_INT_TYPE_CON3 = MT6351_PMIC_INT_TYPE_CON3,
	PMIC_INT_TYPE_CON3_SET = MT6351_PMIC_INT_TYPE_CON3_SET,
	PMIC_INT_TYPE_CON3_CLR = MT6351_PMIC_INT_TYPE_CON3_CLR,
	PMIC_CPU_INT_STA = MT6351_PMIC_CPU_INT_STA,
	PMIC_MD32_INT_STA = MT6351_PMIC_MD32_INT_STA,
	PMIC_BUCK_LDO_FT_TESTMODE_EN = MT6351_PMIC_BUCK_LDO_FT_TESTMODE_EN,
	PMIC_BUCK_ALL_CON0_RSV1 = MT6351_PMIC_BUCK_ALL_CON0_RSV1,
	PMIC_BUCK_ALL_CON0_RSV0 = MT6351_PMIC_BUCK_ALL_CON0_RSV0,
	PMIC_BUCK_BUCK_RSV = MT6351_PMIC_BUCK_BUCK_RSV,
	PMIC_BUCK_BUCK_OSC_SEL_SRCLKEN_SEL =
	    MT6351_PMIC_BUCK_BUCK_OSC_SEL_SRCLKEN_SEL,
	PMIC_BUCK_BUCK_R2R_PDN_SRCLKEN_SEL =
	    MT6351_PMIC_BUCK_BUCK_R2R_PDN_SRCLKEN_SEL,
	PMIC_BUCK_BUCK_VSLEEP_SRCLKEN_SEL =
	    MT6351_PMIC_BUCK_BUCK_VSLEEP_SRCLKEN_SEL,
	PMIC_BUCK_ALL_CON2_RSV0 = MT6351_PMIC_BUCK_ALL_CON2_RSV0,
	PMIC_BUCK_VSLEEP_SRC0 = MT6351_PMIC_BUCK_VSLEEP_SRC0,
	PMIC_BUCK_VSLEEP_SRC1 = MT6351_PMIC_BUCK_VSLEEP_SRC1,
	PMIC_BUCK_R2R_SRC0 = MT6351_PMIC_BUCK_R2R_SRC0,
	PMIC_BUCK_R2R_SRC1 = MT6351_PMIC_BUCK_R2R_SRC1,
	PMIC_BUCK_BUCK_OSC_SEL_SRC0 = MT6351_PMIC_BUCK_BUCK_OSC_SEL_SRC0,
	PMIC_BUCK_SRCLKEN_DLY_SRC1 = MT6351_PMIC_BUCK_SRCLKEN_DLY_SRC1,
	PMIC_BUCK_VSRAM_PROC_BIN2GRAY_MAP_ENB =
	    MT6351_PMIC_BUCK_VSRAM_PROC_BIN2GRAY_MAP_ENB,
	PMIC_BUCK_VS2_BIN2GRAY_MAP_ENB = MT6351_PMIC_BUCK_VS2_BIN2GRAY_MAP_ENB,
	PMIC_BUCK_VS1_BIN2GRAY_MAP_ENB = MT6351_PMIC_BUCK_VS1_BIN2GRAY_MAP_ENB,
	PMIC_BUCK_VSRAM_MD_BIN2GRAY_MAP_ENB =
	    MT6351_PMIC_BUCK_VSRAM_MD_BIN2GRAY_MAP_ENB,
	PMIC_BUCK_VMD1_BIN2GRAY_MAP_ENB =
	    MT6351_PMIC_BUCK_VMD1_BIN2GRAY_MAP_ENB,
	PMIC_BUCK_VPA_BIN2GRAY_MAP_ENB = MT6351_PMIC_BUCK_VPA_BIN2GRAY_MAP_ENB,
	PMIC_BUCK_VMODEM_BIN2GRAY_MAP_ENB =
	    MT6351_PMIC_BUCK_VMODEM_BIN2GRAY_MAP_ENB,
	PMIC_BUCK_VGPU_BIN2GRAY_MAP_ENB =
	    MT6351_PMIC_BUCK_VGPU_BIN2GRAY_MAP_ENB,
	PMIC_BUCK_VCORE_BIN2GRAY_MAP_ENB =
	    MT6351_PMIC_BUCK_VCORE_BIN2GRAY_MAP_ENB,
	PMIC_BUCK_VPA_VOSEL_DLC011 = MT6351_PMIC_BUCK_VPA_VOSEL_DLC011,
	PMIC_BUCK_VPA_VOSEL_DLC111 = MT6351_PMIC_BUCK_VPA_VOSEL_DLC111,
	PMIC_BUCK_VPA_DLC_MAP_EN = MT6351_PMIC_BUCK_VPA_DLC_MAP_EN,
	PMIC_BUCK_VPA_VOSEL_DLC001 = MT6351_PMIC_BUCK_VPA_VOSEL_DLC001,
	PMIC_BUCK_VPA_DLC = MT6351_PMIC_BUCK_VPA_DLC,
	PMIC_DA_NI_VPA_DLC = MT6351_PMIC_DA_NI_VPA_DLC,
	PMIC_BUCK_VPA_DVS_TRANS_TD = MT6351_PMIC_BUCK_VPA_DVS_TRANS_TD,
	PMIC_BUCK_VPA_DVS_TRANS_CTRL = MT6351_PMIC_BUCK_VPA_DVS_TRANS_CTRL,
	PMIC_BUCK_VPA_DVS_TRANS_ONCE = MT6351_PMIC_BUCK_VPA_DVS_TRANS_ONCE,
	PMIC_DA_NI_VPA_DVS_TRANST = MT6351_PMIC_DA_NI_VPA_DVS_TRANST,
	PMIC_BUCK_VPA_DIG0_RSV5 = MT6351_PMIC_BUCK_VPA_DIG0_RSV5,
	PMIC_BUCK_VPA_DIG1_RSV5 = MT6351_PMIC_BUCK_VPA_DIG1_RSV5,
	PMIC_BUCK_VCORE_VOSEL_AUD = MT6351_PMIC_BUCK_VCORE_VOSEL_AUD,
	PMIC_BUCK_VCORE_DVFS_DONE = MT6351_PMIC_BUCK_VCORE_DVFS_DONE,
	PMIC_BUCK_VCORE_DVFS_DONE_SW = MT6351_PMIC_BUCK_VCORE_DVFS_DONE_SW,
	PMIC_BUCK_VCORE_DVFS_DONE_STA = MT6351_PMIC_BUCK_VCORE_DVFS_DONE_STA,
	PMIC_BUCK_VSRAM_MD_VOSEL_AUD = MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_AUD,
	PMIC_BUCK_VSRAM_MD_DVFS_DONE = MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE,
	PMIC_BUCK_VSRAM_MD_DVFS_DONE_SW =
	    MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_SW,
	PMIC_BUCK_VSRAM_MD_DVFS_DONE_STA =
	    MT6351_PMIC_BUCK_VSRAM_MD_DVFS_DONE_STA,
	PMIC_BUCK_VCORE_OC_STATUS = MT6351_PMIC_BUCK_VCORE_OC_STATUS,
	PMIC_BUCK_VGPU_OC_STATUS = MT6351_PMIC_BUCK_VGPU_OC_STATUS,
	PMIC_BUCK_VMODEM_OC_STATUS = MT6351_PMIC_BUCK_VMODEM_OC_STATUS,
	PMIC_BUCK_VMD1_OC_STATUS = MT6351_PMIC_BUCK_VMD1_OC_STATUS,
	PMIC_BUCK_VSRAM_MD_OC_STATUS = MT6351_PMIC_BUCK_VSRAM_MD_OC_STATUS,
	PMIC_BUCK_VS1_OC_STATUS = MT6351_PMIC_BUCK_VS1_OC_STATUS,
	PMIC_BUCK_VS2_OC_STATUS = MT6351_PMIC_BUCK_VS2_OC_STATUS,
	PMIC_BUCK_VPA_OC_STATUS = MT6351_PMIC_BUCK_VPA_OC_STATUS,
	PMIC_BUCK_VCORE_OC_INT_EN = MT6351_PMIC_BUCK_VCORE_OC_INT_EN,
	PMIC_BUCK_VGPU_OC_INT_EN = MT6351_PMIC_BUCK_VGPU_OC_INT_EN,
	PMIC_BUCK_VMODEM_OC_INT_EN = MT6351_PMIC_BUCK_VMODEM_OC_INT_EN,
	PMIC_BUCK_VMD1_OC_INT_EN = MT6351_PMIC_BUCK_VMD1_OC_INT_EN,
	PMIC_BUCK_VSRAM_MD_OC_INT_EN = MT6351_PMIC_BUCK_VSRAM_MD_OC_INT_EN,
	PMIC_BUCK_VS1_OC_INT_EN = MT6351_PMIC_BUCK_VS1_OC_INT_EN,
	PMIC_BUCK_VS2_OC_INT_EN = MT6351_PMIC_BUCK_VS2_OC_INT_EN,
	PMIC_BUCK_VPA_OC_INT_EN = MT6351_PMIC_BUCK_VPA_OC_INT_EN,
	PMIC_BUCK_VCORE_EN_OC_SDN_SEL = MT6351_PMIC_BUCK_VCORE_EN_OC_SDN_SEL,
	PMIC_BUCK_VGPU_EN_OC_SDN_SEL = MT6351_PMIC_BUCK_VGPU_EN_OC_SDN_SEL,
	PMIC_BUCK_VMODEM_EN_OC_SDN_SEL = MT6351_PMIC_BUCK_VMODEM_EN_OC_SDN_SEL,
	PMIC_BUCK_VMD1_EN_OC_SDN_SEL = MT6351_PMIC_BUCK_VMD1_EN_OC_SDN_SEL,
	PMIC_BUCK_VSRAM_MD_EN_OC_SDN_SEL =
	    MT6351_PMIC_BUCK_VSRAM_MD_EN_OC_SDN_SEL,
	PMIC_BUCK_VS1_EN_OC_SDN_SEL = MT6351_PMIC_BUCK_VS1_EN_OC_SDN_SEL,
	PMIC_BUCK_VS2_EN_OC_SDN_SEL = MT6351_PMIC_BUCK_VS2_EN_OC_SDN_SEL,
	PMIC_BUCK_VPA_EN_OC_SDN_SEL = MT6351_PMIC_BUCK_VPA_EN_OC_SDN_SEL,
	PMIC_BUCK_VCORE_OC_FLAG_CLR = MT6351_PMIC_BUCK_VCORE_OC_FLAG_CLR,
	PMIC_BUCK_VGPU_OC_FLAG_CLR = MT6351_PMIC_BUCK_VGPU_OC_FLAG_CLR,
	PMIC_BUCK_VMODEM_OC_FLAG_CLR = MT6351_PMIC_BUCK_VMODEM_OC_FLAG_CLR,
	PMIC_BUCK_VMD1_OC_FLAG_CLR = MT6351_PMIC_BUCK_VMD1_OC_FLAG_CLR,
	PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR = MT6351_PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR,
	PMIC_BUCK_VS1_OC_FLAG_CLR = MT6351_PMIC_BUCK_VS1_OC_FLAG_CLR,
	PMIC_BUCK_VS2_OC_FLAG_CLR = MT6351_PMIC_BUCK_VS2_OC_FLAG_CLR,
	PMIC_BUCK_VPA_OC_FLAG_CLR = MT6351_PMIC_BUCK_VPA_OC_FLAG_CLR,
	PMIC_BUCK_VCORE_OC_FLAG_CLR_SEL =
	    MT6351_PMIC_BUCK_VCORE_OC_FLAG_CLR_SEL,
	PMIC_BUCK_VGPU_OC_FLAG_CLR_SEL = MT6351_PMIC_BUCK_VGPU_OC_FLAG_CLR_SEL,
	PMIC_BUCK_VMODEM_OC_FLAG_CLR_SEL =
	    MT6351_PMIC_BUCK_VMODEM_OC_FLAG_CLR_SEL,
	PMIC_BUCK_VMD1_OC_FLAG_CLR_SEL = MT6351_PMIC_BUCK_VMD1_OC_FLAG_CLR_SEL,
	PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR_SEL =
	    MT6351_PMIC_BUCK_VSRAM_MD_OC_FLAG_CLR_SEL,
	PMIC_BUCK_VS1_OC_FLAG_CLR_SEL = MT6351_PMIC_BUCK_VS1_OC_FLAG_CLR_SEL,
	PMIC_BUCK_VS2_OC_FLAG_CLR_SEL = MT6351_PMIC_BUCK_VS2_OC_FLAG_CLR_SEL,
	PMIC_BUCK_VPA_OC_FLAG_CLR_SEL = MT6351_PMIC_BUCK_VPA_OC_FLAG_CLR_SEL,
	PMIC_BUCK_VCORE_OC_DEG_EN = MT6351_PMIC_BUCK_VCORE_OC_DEG_EN,
	PMIC_BUCK_VCORE_OC_WND = MT6351_PMIC_BUCK_VCORE_OC_WND,
	PMIC_BUCK_VCORE_OC_THD = MT6351_PMIC_BUCK_VCORE_OC_THD,
	PMIC_BUCK_VGPU_OC_DEG_EN = MT6351_PMIC_BUCK_VGPU_OC_DEG_EN,
	PMIC_BUCK_VGPU_OC_WND = MT6351_PMIC_BUCK_VGPU_OC_WND,
	PMIC_BUCK_VGPU_OC_THD = MT6351_PMIC_BUCK_VGPU_OC_THD,
	PMIC_BUCK_VMODEM_OC_DEG_EN = MT6351_PMIC_BUCK_VMODEM_OC_DEG_EN,
	PMIC_BUCK_VMODEM_OC_WND = MT6351_PMIC_BUCK_VMODEM_OC_WND,
	PMIC_BUCK_VMODEM_OC_THD = MT6351_PMIC_BUCK_VMODEM_OC_THD,
	PMIC_BUCK_VMD1_OC_DEG_EN = MT6351_PMIC_BUCK_VMD1_OC_DEG_EN,
	PMIC_BUCK_VMD1_OC_WND = MT6351_PMIC_BUCK_VMD1_OC_WND,
	PMIC_BUCK_VMD1_OC_THD = MT6351_PMIC_BUCK_VMD1_OC_THD,
	PMIC_BUCK_VSRAM_MD_OC_DEG_EN = MT6351_PMIC_BUCK_VSRAM_MD_OC_DEG_EN,
	PMIC_BUCK_VSRAM_MD_OC_WND = MT6351_PMIC_BUCK_VSRAM_MD_OC_WND,
	PMIC_BUCK_VSRAM_MD_OC_THD = MT6351_PMIC_BUCK_VSRAM_MD_OC_THD,
	PMIC_BUCK_VS1_OC_DEG_EN = MT6351_PMIC_BUCK_VS1_OC_DEG_EN,
	PMIC_BUCK_VS1_OC_WND = MT6351_PMIC_BUCK_VS1_OC_WND,
	PMIC_BUCK_VS1_OC_THD = MT6351_PMIC_BUCK_VS1_OC_THD,
	PMIC_BUCK_VS2_OC_DEG_EN = MT6351_PMIC_BUCK_VS2_OC_DEG_EN,
	PMIC_BUCK_VS2_OC_WND = MT6351_PMIC_BUCK_VS2_OC_WND,
	PMIC_BUCK_VS2_OC_THD = MT6351_PMIC_BUCK_VS2_OC_THD,
	PMIC_BUCK_VPA_OC_DEG_EN = MT6351_PMIC_BUCK_VPA_OC_DEG_EN,
	PMIC_BUCK_VPA_OC_WND = MT6351_PMIC_BUCK_VPA_OC_WND,
	PMIC_BUCK_VPA_OC_THD = MT6351_PMIC_BUCK_VPA_OC_THD,
	PMIC_RG_SMPS_TESTMODE_B = MT6351_PMIC_RG_SMPS_TESTMODE_B,
	PMIC_RG_VPA_BURSTH = MT6351_PMIC_RG_VPA_BURSTH,
	PMIC_RG_VPA_BURSTL = MT6351_PMIC_RG_VPA_BURSTL,
	PMIC_RG_VPA_TRIMH = MT6351_PMIC_RG_VPA_TRIMH,
	PMIC_RG_VPA_TRIML = MT6351_PMIC_RG_VPA_TRIML,
	PMIC_RG_VPA_TRIM_REF = MT6351_PMIC_RG_VPA_TRIM_REF,
	PMIC_RG_VCORE_TRIMH = MT6351_PMIC_RG_VCORE_TRIMH,
	PMIC_RG_VCORE_TRIML = MT6351_PMIC_RG_VCORE_TRIML,
	PMIC_RG_VCORE_VSLEEP = MT6351_PMIC_RG_VCORE_VSLEEP,
	PMIC_RG_VGPU_TRIMH = MT6351_PMIC_RG_VGPU_TRIMH,
	PMIC_RG_VGPU_TRIML = MT6351_PMIC_RG_VGPU_TRIML,
	PMIC_RG_VGPU_VSLEEP = MT6351_PMIC_RG_VGPU_VSLEEP,
	PMIC_RG_VSRAM_MD_TRIMH = MT6351_PMIC_RG_VSRAM_MD_TRIMH,
	PMIC_RG_VSRAM_MD_TRIML = MT6351_PMIC_RG_VSRAM_MD_TRIML,
	PMIC_RG_VSRAM_MD_VSLEEP = MT6351_PMIC_RG_VSRAM_MD_VSLEEP,
	PMIC_RG_VMODEM_TRIMH = MT6351_PMIC_RG_VMODEM_TRIMH,
	PMIC_RG_VMODEM_TRIML = MT6351_PMIC_RG_VMODEM_TRIML,
	PMIC_RG_VMODEM_VSLEEP = MT6351_PMIC_RG_VMODEM_VSLEEP,
	PMIC_RG_VMD1_TRIMH = MT6351_PMIC_RG_VMD1_TRIMH,
	PMIC_RG_VMD1_TRIML = MT6351_PMIC_RG_VMD1_TRIML,
	PMIC_RG_VMD1_VSLEEP = MT6351_PMIC_RG_VMD1_VSLEEP,
	PMIC_RG_VS1_TRIMH = MT6351_PMIC_RG_VS1_TRIMH,
	PMIC_RG_VS1_TRIML = MT6351_PMIC_RG_VS1_TRIML,
	PMIC_RG_VS1_VSLEEP = MT6351_PMIC_RG_VS1_VSLEEP,
	PMIC_RG_VS2_TRIML = MT6351_PMIC_RG_VS2_TRIML,
	PMIC_RG_VS2_VSLEEP = MT6351_PMIC_RG_VS2_VSLEEP,
	PMIC_RG_VSRAM_PROCESSOR_TRIMH = MT6351_PMIC_RG_VSRAM_PROCESSOR_TRIMH,
	PMIC_RG_VSRAM_PROCESSOR_TRIML = MT6351_PMIC_RG_VSRAM_PROCESSOR_TRIML,
	PMIC_RG_VSRAM_PROCESSOR_VSLEEP = MT6351_PMIC_RG_VSRAM_PROCESSOR_VSLEEP,
	PMIC_RG_VCORE_VSLEEP_SEL = MT6351_PMIC_RG_VCORE_VSLEEP_SEL,
	PMIC_RG_VGPU_VSLEEP_SEL = MT6351_PMIC_RG_VGPU_VSLEEP_SEL,
	PMIC_RG_VSRAM_MD_VSLEEP_SEL = MT6351_PMIC_RG_VSRAM_MD_VSLEEP_SEL,
	PMIC_RG_VMODEM_VSLEEP_SEL = MT6351_PMIC_RG_VMODEM_VSLEEP_SEL,
	PMIC_RG_VMD1_VSLEEP_SEL = MT6351_PMIC_RG_VMD1_VSLEEP_SEL,
	PMIC_RG_VS1_VSLEEP_SEL = MT6351_PMIC_RG_VS1_VSLEEP_SEL,
	PMIC_RG_VS2_VSLEEP_SEL = MT6351_PMIC_RG_VS2_VSLEEP_SEL,
	PMIC_RG_VSRAM_PROCESSOR_VSLEEP_SEL =
	    MT6351_PMIC_RG_VSRAM_PROCESSOR_VSLEEP_SEL,
	PMIC_RG_VOUTDET_EN = MT6351_PMIC_RG_VOUTDET_EN,
	PMIC_RG_VS2_TRIMH = MT6351_PMIC_RG_VS2_TRIMH,
	PMIC_RG_VCORE_MODESET = MT6351_PMIC_RG_VCORE_MODESET,
	PMIC_RG_VCORE_NDIS_EN = MT6351_PMIC_RG_VCORE_NDIS_EN,
	PMIC_RG_VCORE_VRF18_SSTART_EN = MT6351_PMIC_RG_VCORE_VRF18_SSTART_EN,
	PMIC_RG_VCORE_AUTO_MODE = MT6351_PMIC_RG_VCORE_AUTO_MODE,
	PMIC_RG_VCORE_RZSEL0 = MT6351_PMIC_RG_VCORE_RZSEL0,
	PMIC_RG_VCORE_RZSEL1 = MT6351_PMIC_RG_VCORE_RZSEL1,
	PMIC_RG_VCORE_CCSEL0 = MT6351_PMIC_RG_VCORE_CCSEL0,
	PMIC_RG_VCORE_CCSEL1 = MT6351_PMIC_RG_VCORE_CCSEL1,
	PMIC_RG_VCORE_CSL = MT6351_PMIC_RG_VCORE_CSL,
	PMIC_RG_VCORE_SLP = MT6351_PMIC_RG_VCORE_SLP,
	PMIC_RG_VCORE_ADRC_FEN = MT6351_PMIC_RG_VCORE_ADRC_FEN,
	PMIC_RG_VCORE_VCCAP_CLAMP_FEN = MT6351_PMIC_RG_VCORE_VCCAP_CLAMP_FEN,
	PMIC_RG_VCORE_VC_CLAMP_FEN = MT6351_PMIC_RG_VCORE_VC_CLAMP_FEN,
	PMIC_RG_VCORE_PREOC_SEL = MT6351_PMIC_RG_VCORE_PREOC_SEL,
	PMIC_RG_VCORE_PFMOC = MT6351_PMIC_RG_VCORE_PFMOC,
	PMIC_RG_VCORE_CSR = MT6351_PMIC_RG_VCORE_CSR,
	PMIC_RG_VCORE_ZXOS_TRIM = MT6351_PMIC_RG_VCORE_ZXOS_TRIM,
	PMIC_RG_VCORE_CSM_N = MT6351_PMIC_RG_VCORE_CSM_N,
	PMIC_RG_VCORE_CSM_P = MT6351_PMIC_RG_VCORE_CSM_P,
	PMIC_RG_VCORE_PFMSR_EH = MT6351_PMIC_RG_VCORE_PFMSR_EH,
	PMIC_RG_VCORE_NLIM_GATING = MT6351_PMIC_RG_VCORE_NLIM_GATING,
	PMIC_RG_VCORE_PWRSR_EH = MT6351_PMIC_RG_VCORE_PWRSR_EH,
	PMIC_RG_VCORE_HS_VTHDET = MT6351_PMIC_RG_VCORE_HS_VTHDET,
	PMIC_RG_VCORE_PG_GATING = MT6351_PMIC_RG_VCORE_PG_GATING,
	PMIC_RG_VCORE_HS_ONSPEED_EH = MT6351_PMIC_RG_VCORE_HS_ONSPEED_EH,
	PMIC_RG_VCORE_NLIM_TRIMMING = MT6351_PMIC_RG_VCORE_NLIM_TRIMMING,
	PMIC_RG_VCORE_DLC = MT6351_PMIC_RG_VCORE_DLC,
	PMIC_RG_VCORE_DLC_N = MT6351_PMIC_RG_VCORE_DLC_N,
	PMIC_RG_VCORE_PFM_RIP = MT6351_PMIC_RG_VCORE_PFM_RIP,
	PMIC_RG_VCORE_TRAN_BST = MT6351_PMIC_RG_VCORE_TRAN_BST,
	PMIC_RG_VCORE_DTS_ENB = MT6351_PMIC_RG_VCORE_DTS_ENB,
	PMIC_RG_VCORE_MIN_OFF = MT6351_PMIC_RG_VCORE_MIN_OFF,
	PMIC_RG_VCORE_1P35UP_SEL_EN = MT6351_PMIC_RG_VCORE_1P35UP_SEL_EN,
	PMIC_RG_VCORE_DLC_AUTO_MODE = MT6351_PMIC_RG_VCORE_DLC_AUTO_MODE,
	PMIC_RG_VCORE_DLC_SEL = MT6351_PMIC_RG_VCORE_DLC_SEL,
	PMIC_RG_VCORE_SRC_AUTO_MODE = MT6351_PMIC_RG_VCORE_SRC_AUTO_MODE,
	PMIC_RG_VCORE_UGP_SR = MT6351_PMIC_RG_VCORE_UGP_SR,
	PMIC_RG_VCORE_LGN_SR = MT6351_PMIC_RG_VCORE_LGN_SR,
	PMIC_RG_VCORE_UGP_SR_PFM = MT6351_PMIC_RG_VCORE_UGP_SR_PFM,
	PMIC_RG_VCORE_LGN_SR_PFM = MT6351_PMIC_RG_VCORE_LGN_SR_PFM,
	PMIC_RG_VCORE_UGD_VTHSEL = MT6351_PMIC_RG_VCORE_UGD_VTHSEL,
	PMIC_RG_VCORE_FNLX_SNS = MT6351_PMIC_RG_VCORE_FNLX_SNS,
	PMIC_RG_VCORE_VDIFF_ENLOWIQ = MT6351_PMIC_RG_VCORE_VDIFF_ENLOWIQ,
	PMIC_RG_VCORE_PFMOC_FWUPOFF = MT6351_PMIC_RG_VCORE_PFMOC_FWUPOFF,
	PMIC_RG_VCORE_PWFMOC_FWUPOFF = MT6351_PMIC_RG_VCORE_PWFMOC_FWUPOFF,
	PMIC_RG_VCORE_CP_FWUPOFF = MT6351_PMIC_RG_VCORE_CP_FWUPOFF,
	PMIC_RG_VCORE_ZX_GATING = MT6351_PMIC_RG_VCORE_ZX_GATING,
	PMIC_RG_VCORE_RSV = MT6351_PMIC_RG_VCORE_RSV,
	PMIC_RG_VCORE_PREOC_TRIMMING = MT6351_PMIC_RG_VCORE_PREOC_TRIMMING,
	PMIC_RG_VCORE_AZC_EN = MT6351_PMIC_RG_VCORE_AZC_EN,
	PMIC_RG_VCORE_AZC_DELAY = MT6351_PMIC_RG_VCORE_AZC_DELAY,
	PMIC_RG_VCORE_AZC_HOLD_ENB = MT6351_PMIC_RG_VCORE_AZC_HOLD_ENB,
	PMIC_RGS_QI_VCORE_OC_STATUS = MT6351_PMIC_RGS_QI_VCORE_OC_STATUS,
	PMIC_RGS_QI_VCORE_DIG_MON = MT6351_PMIC_RGS_QI_VCORE_DIG_MON,
	PMIC_RGS_VCORE_ENPWM_STATUS = MT6351_PMIC_RGS_VCORE_ENPWM_STATUS,
	PMIC_RGS_QI_VCORE_PREOC = MT6351_PMIC_RGS_QI_VCORE_PREOC,
	PMIC_RG_VGPU_MODESET = MT6351_PMIC_RG_VGPU_MODESET,
	PMIC_RG_VGPU_NDIS_EN = MT6351_PMIC_RG_VGPU_NDIS_EN,
	PMIC_RG_VGPU_VRF18_SSTART_EN = MT6351_PMIC_RG_VGPU_VRF18_SSTART_EN,
	PMIC_RG_VGPU_AUTO_MODE = MT6351_PMIC_RG_VGPU_AUTO_MODE,
	PMIC_RG_VGPU_RZSEL0 = MT6351_PMIC_RG_VGPU_RZSEL0,
	PMIC_RG_VGPU_RZSEL1 = MT6351_PMIC_RG_VGPU_RZSEL1,
	PMIC_RG_VGPU_CCSEL0 = MT6351_PMIC_RG_VGPU_CCSEL0,
	PMIC_RG_VGPU_CCSEL1 = MT6351_PMIC_RG_VGPU_CCSEL1,
	PMIC_RG_VGPU_CSL = MT6351_PMIC_RG_VGPU_CSL,
	PMIC_RG_VGPU_SLP = MT6351_PMIC_RG_VGPU_SLP,
	PMIC_RG_VGPU_ADRC_FEN = MT6351_PMIC_RG_VGPU_ADRC_FEN,
	PMIC_RG_VGPU_VCCAP_CLAMP_FEN = MT6351_PMIC_RG_VGPU_VCCAP_CLAMP_FEN,
	PMIC_RG_VGPU_VC_CLAMP_FEN = MT6351_PMIC_RG_VGPU_VC_CLAMP_FEN,
	PMIC_RG_VGPU_PREOC_SEL = MT6351_PMIC_RG_VGPU_PREOC_SEL,
	PMIC_RG_VGPU_PFMOC = MT6351_PMIC_RG_VGPU_PFMOC,
	PMIC_RG_VGPU_CSR = MT6351_PMIC_RG_VGPU_CSR,
	PMIC_RG_VGPU_ZXOS_TRIM = MT6351_PMIC_RG_VGPU_ZXOS_TRIM,
	PMIC_RG_VGPU_CSM_N = MT6351_PMIC_RG_VGPU_CSM_N,
	PMIC_RG_VGPU_CSM_P = MT6351_PMIC_RG_VGPU_CSM_P,
	PMIC_RG_VGPU_PFMSR_EH = MT6351_PMIC_RG_VGPU_PFMSR_EH,
	PMIC_RG_VGPU_NLIM_GATING = MT6351_PMIC_RG_VGPU_NLIM_GATING,
	PMIC_RG_VGPU_PWRSR_EH = MT6351_PMIC_RG_VGPU_PWRSR_EH,
	PMIC_RG_VGPU_HS_VTHDET = MT6351_PMIC_RG_VGPU_HS_VTHDET,
	PMIC_RG_VGPU_PG_GATING = MT6351_PMIC_RG_VGPU_PG_GATING,
	PMIC_RG_VGPU_HS_ONSPEED_EH = MT6351_PMIC_RG_VGPU_HS_ONSPEED_EH,
	PMIC_RG_VGPU_NLIM_TRIMMING = MT6351_PMIC_RG_VGPU_NLIM_TRIMMING,
	PMIC_RG_VGPU_DLC = MT6351_PMIC_RG_VGPU_DLC,
	PMIC_RG_VGPU_DLC_N = MT6351_PMIC_RG_VGPU_DLC_N,
	PMIC_RG_VGPU_PFM_RIP = MT6351_PMIC_RG_VGPU_PFM_RIP,
	PMIC_RG_VGPU_TRAN_BST = MT6351_PMIC_RG_VGPU_TRAN_BST,
	PMIC_RG_VGPU_DTS_ENB = MT6351_PMIC_RG_VGPU_DTS_ENB,
	PMIC_RG_VGPU_MIN_OFF = MT6351_PMIC_RG_VGPU_MIN_OFF,
	PMIC_RG_VGPU_1P35UP_SEL_EN = MT6351_PMIC_RG_VGPU_1P35UP_SEL_EN,
	PMIC_RG_VGPU_DLC_AUTO_MODE = MT6351_PMIC_RG_VGPU_DLC_AUTO_MODE,
	PMIC_RG_VGPU_DLC_SEL = MT6351_PMIC_RG_VGPU_DLC_SEL,
	PMIC_RG_VGPU_SRC_AUTO_MODE = MT6351_PMIC_RG_VGPU_SRC_AUTO_MODE,
	PMIC_RG_VGPU_UGP_SR = MT6351_PMIC_RG_VGPU_UGP_SR,
	PMIC_RG_VGPU_LGN_SR = MT6351_PMIC_RG_VGPU_LGN_SR,
	PMIC_RG_VGPU_UGP_SR_PFM = MT6351_PMIC_RG_VGPU_UGP_SR_PFM,
	PMIC_RG_VGPU_LGN_SR_PFM = MT6351_PMIC_RG_VGPU_LGN_SR_PFM,
	PMIC_RG_VGPU_UGD_VTHSEL = MT6351_PMIC_RG_VGPU_UGD_VTHSEL,
	PMIC_RG_VGPU_FNLX_SNS = MT6351_PMIC_RG_VGPU_FNLX_SNS,
	PMIC_RG_VGPU_VDIFF_ENLOWIQ = MT6351_PMIC_RG_VGPU_VDIFF_ENLOWIQ,
	PMIC_RG_VGPU_PFMOC_FWUPOFF = MT6351_PMIC_RG_VGPU_PFMOC_FWUPOFF,
	PMIC_RG_VGPU_PWFMOC_FWUPOFF = MT6351_PMIC_RG_VGPU_PWFMOC_FWUPOFF,
	PMIC_RG_VGPU_CP_FWUPOFF = MT6351_PMIC_RG_VGPU_CP_FWUPOFF,
	PMIC_RG_VGPU_ZX_GATING = MT6351_PMIC_RG_VGPU_ZX_GATING,
	PMIC_RG_VGPU_RSV = MT6351_PMIC_RG_VGPU_RSV,
	PMIC_RG_VGPU_PREOC_TRIMMING = MT6351_PMIC_RG_VGPU_PREOC_TRIMMING,
	PMIC_RG_VGPU_AZC_EN = MT6351_PMIC_RG_VGPU_AZC_EN,
	PMIC_RG_VGPU_AZC_DELAY = MT6351_PMIC_RG_VGPU_AZC_DELAY,
	PMIC_RG_VGPU_AZC_HOLD_ENB = MT6351_PMIC_RG_VGPU_AZC_HOLD_ENB,
	PMIC_RGS_QI_VGPU_OC_STATUS = MT6351_PMIC_RGS_QI_VGPU_OC_STATUS,
	PMIC_RGS_QI_VGPU_DIG_MON = MT6351_PMIC_RGS_QI_VGPU_DIG_MON,
	PMIC_RGS_VGPU_ENPWM_STATUS = MT6351_PMIC_RGS_VGPU_ENPWM_STATUS,
	PMIC_RGS_QI_VGPU_PREOC = MT6351_PMIC_RGS_QI_VGPU_PREOC,
	PMIC_RG_VSRAM_MD_MODESET = MT6351_PMIC_RG_VSRAM_MD_MODESET,
	PMIC_RG_VSRAM_MD_NDIS_EN = MT6351_PMIC_RG_VSRAM_MD_NDIS_EN,
	PMIC_RG_VSRAM_MD_VRF18_SSTART_EN =
	    MT6351_PMIC_RG_VSRAM_MD_VRF18_SSTART_EN,
	PMIC_RG_VSRAM_MD_AUTO_MODE = MT6351_PMIC_RG_VSRAM_MD_AUTO_MODE,
	PMIC_RG_VSRAM_MD_RZSEL0 = MT6351_PMIC_RG_VSRAM_MD_RZSEL0,
	PMIC_RG_VSRAM_MD_RZSEL1 = MT6351_PMIC_RG_VSRAM_MD_RZSEL1,
	PMIC_RG_VSRAM_MD_CCSEL0 = MT6351_PMIC_RG_VSRAM_MD_CCSEL0,
	PMIC_RG_VSRAM_MD_CCSEL1 = MT6351_PMIC_RG_VSRAM_MD_CCSEL1,
	PMIC_RG_VSRAM_MD_CSL = MT6351_PMIC_RG_VSRAM_MD_CSL,
	PMIC_RG_VSRAM_MD_SLP = MT6351_PMIC_RG_VSRAM_MD_SLP,
	PMIC_RG_VSRAM_MD_ADRC_FEN = MT6351_PMIC_RG_VSRAM_MD_ADRC_FEN,
	PMIC_RG_VSRAM_MD_VCCAP_CLAMP_FEN =
	    MT6351_PMIC_RG_VSRAM_MD_VCCAP_CLAMP_FEN,
	PMIC_RG_VSRAM_MD_VC_CLAMP_FEN = MT6351_PMIC_RG_VSRAM_MD_VC_CLAMP_FEN,
	PMIC_RG_VSRAM_MD_PFMOC = MT6351_PMIC_RG_VSRAM_MD_PFMOC,
	PMIC_RG_VSRAM_MD_CSR = MT6351_PMIC_RG_VSRAM_MD_CSR,
	PMIC_RG_VSRAM_MD_ZXOS_TRIM = MT6351_PMIC_RG_VSRAM_MD_ZXOS_TRIM,
	PMIC_RG_VSRAM_MD_PFMSR_EH = MT6351_PMIC_RG_VSRAM_MD_PFMSR_EH,
	PMIC_RG_VSRAM_MD_NLIM_GATING = MT6351_PMIC_RG_VSRAM_MD_NLIM_GATING,
	PMIC_RG_VSRAM_MD_PWRSR_EH = MT6351_PMIC_RG_VSRAM_MD_PWRSR_EH,
	PMIC_RG_VSRAM_MD_HS_VTHDET = MT6351_PMIC_RG_VSRAM_MD_HS_VTHDET,
	PMIC_RG_VSRAM_MD_PG_GATING = MT6351_PMIC_RG_VSRAM_MD_PG_GATING,
	PMIC_RG_VSRAM_MD_HS_ONSPEED_EH = MT6351_PMIC_RG_VSRAM_MD_HS_ONSPEED_EH,
	PMIC_RG_VSRAM_MD_NLIM_TRIMMING = MT6351_PMIC_RG_VSRAM_MD_NLIM_TRIMMING,
	PMIC_RG_VSRAM_MD_DLC = MT6351_PMIC_RG_VSRAM_MD_DLC,
	PMIC_RG_VSRAM_MD_DLC_N = MT6351_PMIC_RG_VSRAM_MD_DLC_N,
	PMIC_RG_VSRAM_MD_PFM_RIP = MT6351_PMIC_RG_VSRAM_MD_PFM_RIP,
	PMIC_RG_VSRAM_MD_TRAN_BST = MT6351_PMIC_RG_VSRAM_MD_TRAN_BST,
	PMIC_RG_VSRAM_MD_DTS_ENB = MT6351_PMIC_RG_VSRAM_MD_DTS_ENB,
	PMIC_RG_VSRAM_MD_MIN_OFF = MT6351_PMIC_RG_VSRAM_MD_MIN_OFF,
	PMIC_RG_VSRAM_MD_1P35UP_SEL_EN = MT6351_PMIC_RG_VSRAM_MD_1P35UP_SEL_EN,
	PMIC_RG_VSRAM_MD_DLC_AUTO_MODE = MT6351_PMIC_RG_VSRAM_MD_DLC_AUTO_MODE,
	PMIC_RG_VSRAM_MD_DLC_SEL = MT6351_PMIC_RG_VSRAM_MD_DLC_SEL,
	PMIC_RG_VSRAM_MD_SRC_AUTO_MODE = MT6351_PMIC_RG_VSRAM_MD_SRC_AUTO_MODE,
	PMIC_RG_VSRAM_MD_UGP_SR = MT6351_PMIC_RG_VSRAM_MD_UGP_SR,
	PMIC_RG_VSRAM_MD_LGN_SR = MT6351_PMIC_RG_VSRAM_MD_LGN_SR,
	PMIC_RG_VSRAM_MD_UGP_SR_PFM = MT6351_PMIC_RG_VSRAM_MD_UGP_SR_PFM,
	PMIC_RG_VSRAM_MD_LGN_SR_PFM = MT6351_PMIC_RG_VSRAM_MD_LGN_SR_PFM,
	PMIC_RG_VSRAM_MD_UGD_VTHSEL = MT6351_PMIC_RG_VSRAM_MD_UGD_VTHSEL,
	PMIC_RG_VSRAM_MD_FNLX_SNS = MT6351_PMIC_RG_VSRAM_MD_FNLX_SNS,
	PMIC_RG_VSRAM_MD_VDIFF_ENLOWIQ = MT6351_PMIC_RG_VSRAM_MD_VDIFF_ENLOWIQ,
	PMIC_RG_VSRAM_MD_PFMOC_FWUPOFF = MT6351_PMIC_RG_VSRAM_MD_PFMOC_FWUPOFF,
	PMIC_RG_VSRAM_MD_PWFMOC_FWUPOFF =
	    MT6351_PMIC_RG_VSRAM_MD_PWFMOC_FWUPOFF,
	PMIC_RG_VSRAM_MD_CP_FWUPOFF = MT6351_PMIC_RG_VSRAM_MD_CP_FWUPOFF,
	PMIC_RG_VSRAM_MD_ZX_GATING = MT6351_PMIC_RG_VSRAM_MD_ZX_GATING,
	PMIC_RG_VSRAM_MD_RSV = MT6351_PMIC_RG_VSRAM_MD_RSV,
	PMIC_RG_VSRAM_MD_AZC_EN = MT6351_PMIC_RG_VSRAM_MD_AZC_EN,
	PMIC_RG_VSRAM_MD_AZC_DELAY = MT6351_PMIC_RG_VSRAM_MD_AZC_DELAY,
	PMIC_RG_VSRAM_MD_AZC_HOLD_ENB = MT6351_PMIC_RG_VSRAM_MD_AZC_HOLD_ENB,
	PMIC_RGS_QI_VSRAM_MD_OC_STATUS = MT6351_PMIC_RGS_QI_VSRAM_MD_OC_STATUS,
	PMIC_RGS_QI_VSRAM_MD_DIG_MON = MT6351_PMIC_RGS_QI_VSRAM_MD_DIG_MON,
	PMIC_RGS_VSRAM_MD_ENPWM_STATUS = MT6351_PMIC_RGS_VSRAM_MD_ENPWM_STATUS,
	PMIC_RG_VMODEM_MODESET = MT6351_PMIC_RG_VMODEM_MODESET,
	PMIC_RG_VMODEM_NDIS_EN = MT6351_PMIC_RG_VMODEM_NDIS_EN,
	PMIC_RG_VMODEM_VRF18_SSTART_EN = MT6351_PMIC_RG_VMODEM_VRF18_SSTART_EN,
	PMIC_RG_VMODEM_AUTO_MODE = MT6351_PMIC_RG_VMODEM_AUTO_MODE,
	PMIC_RG_VMODEM_RZSEL0 = MT6351_PMIC_RG_VMODEM_RZSEL0,
	PMIC_RG_VMODEM_RZSEL1 = MT6351_PMIC_RG_VMODEM_RZSEL1,
	PMIC_RG_VMODEM_CCSEL0 = MT6351_PMIC_RG_VMODEM_CCSEL0,
	PMIC_RG_VMODEM_CCSEL1 = MT6351_PMIC_RG_VMODEM_CCSEL1,
	PMIC_RG_VMODEM_CSL = MT6351_PMIC_RG_VMODEM_CSL,
	PMIC_RG_VMODEM_SLP = MT6351_PMIC_RG_VMODEM_SLP,
	PMIC_RG_VMODEM_ADRC_FEN = MT6351_PMIC_RG_VMODEM_ADRC_FEN,
	PMIC_RG_VMODEM_VCCAP_CLAMP_FEN = MT6351_PMIC_RG_VMODEM_VCCAP_CLAMP_FEN,
	PMIC_RG_VMODEM_VC_CLAMP_FEN = MT6351_PMIC_RG_VMODEM_VC_CLAMP_FEN,
	PMIC_RG_VMODEM_PFMOC = MT6351_PMIC_RG_VMODEM_PFMOC,
	PMIC_RG_VMODEM_CSR = MT6351_PMIC_RG_VMODEM_CSR,
	PMIC_RG_VMODEM_ZXOS_TRIM = MT6351_PMIC_RG_VMODEM_ZXOS_TRIM,
	PMIC_RG_VMODEM_PFMSR_EH = MT6351_PMIC_RG_VMODEM_PFMSR_EH,
	PMIC_RG_VMODEM_NLIM_GATING = MT6351_PMIC_RG_VMODEM_NLIM_GATING,
	PMIC_RG_VMODEM_PWRSR_EH = MT6351_PMIC_RG_VMODEM_PWRSR_EH,
	PMIC_RG_VMODEM_HS_VTHDET = MT6351_PMIC_RG_VMODEM_HS_VTHDET,
	PMIC_RG_VMODEM_PG_GATING = MT6351_PMIC_RG_VMODEM_PG_GATING,
	PMIC_RG_VMODEM_HS_ONSPEED_EH = MT6351_PMIC_RG_VMODEM_HS_ONSPEED_EH,
	PMIC_RG_VMODEM_NLIM_TRIMMING = MT6351_PMIC_RG_VMODEM_NLIM_TRIMMING,
	PMIC_RG_VMODEM_DLC = MT6351_PMIC_RG_VMODEM_DLC,
	PMIC_RG_VMODEM_DLC_N = MT6351_PMIC_RG_VMODEM_DLC_N,
	PMIC_RG_VMODEM_PFM_RIP = MT6351_PMIC_RG_VMODEM_PFM_RIP,
	PMIC_RG_VMODEM_TRAN_BST = MT6351_PMIC_RG_VMODEM_TRAN_BST,
	PMIC_RG_VMODEM_DTS_ENB = MT6351_PMIC_RG_VMODEM_DTS_ENB,
	PMIC_RG_VMODEM_MIN_OFF = MT6351_PMIC_RG_VMODEM_MIN_OFF,
	PMIC_RG_VMODEM_1P35UP_SEL_EN = MT6351_PMIC_RG_VMODEM_1P35UP_SEL_EN,
	PMIC_RG_VMODEM_DLC_AUTO_MODE = MT6351_PMIC_RG_VMODEM_DLC_AUTO_MODE,
	PMIC_RG_VMODEM_DLC_SEL = MT6351_PMIC_RG_VMODEM_DLC_SEL,
	PMIC_RG_VMODEM_SRC_AUTO_MODE = MT6351_PMIC_RG_VMODEM_SRC_AUTO_MODE,
	PMIC_RG_VMODEM_UGP_SR = MT6351_PMIC_RG_VMODEM_UGP_SR,
	PMIC_RG_VMODEM_LGN_SR = MT6351_PMIC_RG_VMODEM_LGN_SR,
	PMIC_RG_VMODEM_UGP_SR_PFM = MT6351_PMIC_RG_VMODEM_UGP_SR_PFM,
	PMIC_RG_VMODEM_LGN_SR_PFM = MT6351_PMIC_RG_VMODEM_LGN_SR_PFM,
	PMIC_RG_VMODEM_UGD_VTHSEL = MT6351_PMIC_RG_VMODEM_UGD_VTHSEL,
	PMIC_RG_VMODEM_FNLX_SNS = MT6351_PMIC_RG_VMODEM_FNLX_SNS,
	PMIC_RG_VMODEM_VDIFF_ENLOWIQ = MT6351_PMIC_RG_VMODEM_VDIFF_ENLOWIQ,
	PMIC_RG_VMODEM_PFMOC_FWUPOFF = MT6351_PMIC_RG_VMODEM_PFMOC_FWUPOFF,
	PMIC_RG_VMODEM_PWFMOC_FWUPOFF = MT6351_PMIC_RG_VMODEM_PWFMOC_FWUPOFF,
	PMIC_RG_VMODEM_CP_FWUPOFF = MT6351_PMIC_RG_VMODEM_CP_FWUPOFF,
	PMIC_RG_VMODEM_ZX_GATING = MT6351_PMIC_RG_VMODEM_ZX_GATING,
	PMIC_RG_VMODEM_RSV = MT6351_PMIC_RG_VMODEM_RSV,
	PMIC_RG_VMODEM_AZC_EN = MT6351_PMIC_RG_VMODEM_AZC_EN,
	PMIC_RG_VMODEM_AZC_DELAY = MT6351_PMIC_RG_VMODEM_AZC_DELAY,
	PMIC_RG_VMODEM_AZC_HOLD_ENB = MT6351_PMIC_RG_VMODEM_AZC_HOLD_ENB,
	PMIC_RGS_QI_VMODEM_OC_STATUS = MT6351_PMIC_RGS_QI_VMODEM_OC_STATUS,
	PMIC_RGS_QI_VMODEM_DIG_MON = MT6351_PMIC_RGS_QI_VMODEM_DIG_MON,
	PMIC_RGS_VMODEM_ENPWM_STATUS = MT6351_PMIC_RGS_VMODEM_ENPWM_STATUS,
	PMIC_RG_VMD1_MODESET = MT6351_PMIC_RG_VMD1_MODESET,
	PMIC_RG_VMD1_NDIS_EN = MT6351_PMIC_RG_VMD1_NDIS_EN,
	PMIC_RG_VMD1_VRF18_SSTART_EN = MT6351_PMIC_RG_VMD1_VRF18_SSTART_EN,
	PMIC_RG_VMD1_AUTO_MODE = MT6351_PMIC_RG_VMD1_AUTO_MODE,
	PMIC_RG_VMD1_RZSEL0 = MT6351_PMIC_RG_VMD1_RZSEL0,
	PMIC_RG_VMD1_RZSEL1 = MT6351_PMIC_RG_VMD1_RZSEL1,
	PMIC_RG_VMD1_CCSEL0 = MT6351_PMIC_RG_VMD1_CCSEL0,
	PMIC_RG_VMD1_CCSEL1 = MT6351_PMIC_RG_VMD1_CCSEL1,
	PMIC_RG_VMD1_CSL = MT6351_PMIC_RG_VMD1_CSL,
	PMIC_RG_VMD1_SLP = MT6351_PMIC_RG_VMD1_SLP,
	PMIC_RG_VMD1_ADRC_FEN = MT6351_PMIC_RG_VMD1_ADRC_FEN,
	PMIC_RG_VMD1_VCCAP_CLAMP_FEN = MT6351_PMIC_RG_VMD1_VCCAP_CLAMP_FEN,
	PMIC_RG_VMD1_VC_CLAMP_FEN = MT6351_PMIC_RG_VMD1_VC_CLAMP_FEN,
	PMIC_RG_VMD1_PFMOC = MT6351_PMIC_RG_VMD1_PFMOC,
	PMIC_RG_VMD1_CSR = MT6351_PMIC_RG_VMD1_CSR,
	PMIC_RG_VMD1_ZXOS_TRIM = MT6351_PMIC_RG_VMD1_ZXOS_TRIM,
	PMIC_RG_VMD1_PFMSR_EH = MT6351_PMIC_RG_VMD1_PFMSR_EH,
	PMIC_RG_VMD1_NLIM_GATING = MT6351_PMIC_RG_VMD1_NLIM_GATING,
	PMIC_RG_VMD1_PWRSR_EH = MT6351_PMIC_RG_VMD1_PWRSR_EH,
	PMIC_RG_VMD1_HS_VTHDET = MT6351_PMIC_RG_VMD1_HS_VTHDET,
	PMIC_RG_VMD1_PG_GATING = MT6351_PMIC_RG_VMD1_PG_GATING,
	PMIC_RG_VMD1_HS_ONSPEED_EH = MT6351_PMIC_RG_VMD1_HS_ONSPEED_EH,
	PMIC_RG_VMD1_NLIM_TRIMMING = MT6351_PMIC_RG_VMD1_NLIM_TRIMMING,
	PMIC_RG_VMD1_DLC = MT6351_PMIC_RG_VMD1_DLC,
	PMIC_RG_VMD1_DLC_N = MT6351_PMIC_RG_VMD1_DLC_N,
	PMIC_RG_VMD1_PFM_RIP = MT6351_PMIC_RG_VMD1_PFM_RIP,
	PMIC_RG_VMD1_TRAN_BST = MT6351_PMIC_RG_VMD1_TRAN_BST,
	PMIC_RG_VMD1_DTS_ENB = MT6351_PMIC_RG_VMD1_DTS_ENB,
	PMIC_RG_VMD1_MIN_OFF = MT6351_PMIC_RG_VMD1_MIN_OFF,
	PMIC_RG_VMD1_1P35UP_SEL_EN = MT6351_PMIC_RG_VMD1_1P35UP_SEL_EN,
	PMIC_RG_VMD1_DLC_AUTO_MODE = MT6351_PMIC_RG_VMD1_DLC_AUTO_MODE,
	PMIC_RG_VMD1_DLC_SEL = MT6351_PMIC_RG_VMD1_DLC_SEL,
	PMIC_RG_VMD1_SRC_AUTO_MODE = MT6351_PMIC_RG_VMD1_SRC_AUTO_MODE,
	PMIC_RG_VMD1_UGP_SR = MT6351_PMIC_RG_VMD1_UGP_SR,
	PMIC_RG_VMD1_LGN_SR = MT6351_PMIC_RG_VMD1_LGN_SR,
	PMIC_RG_VMD1_UGP_SR_PFM = MT6351_PMIC_RG_VMD1_UGP_SR_PFM,
	PMIC_RG_VMD1_LGN_SR_PFM = MT6351_PMIC_RG_VMD1_LGN_SR_PFM,
	PMIC_RG_VMD1_UGD_VTHSEL = MT6351_PMIC_RG_VMD1_UGD_VTHSEL,
	PMIC_RG_VMD1_FNLX_SNS = MT6351_PMIC_RG_VMD1_FNLX_SNS,
	PMIC_RG_VMD1_VDIFF_ENLOWIQ = MT6351_PMIC_RG_VMD1_VDIFF_ENLOWIQ,
	PMIC_RG_VMD1_PFMOC_FWUPOFF = MT6351_PMIC_RG_VMD1_PFMOC_FWUPOFF,
	PMIC_RG_VMD1_PWFMOC_FWUPOFF = MT6351_PMIC_RG_VMD1_PWFMOC_FWUPOFF,
	PMIC_RG_VMD1_CP_FWUPOFF = MT6351_PMIC_RG_VMD1_CP_FWUPOFF,
	PMIC_RG_VMD1_ZX_GATING = MT6351_PMIC_RG_VMD1_ZX_GATING,
	PMIC_RG_VMD1_RSV = MT6351_PMIC_RG_VMD1_RSV,
	PMIC_RG_VMD1_AZC_EN = MT6351_PMIC_RG_VMD1_AZC_EN,
	PMIC_RG_VMD1_AZC_DELAY = MT6351_PMIC_RG_VMD1_AZC_DELAY,
	PMIC_RG_VMD1_AZC_HOLD_ENB = MT6351_PMIC_RG_VMD1_AZC_HOLD_ENB,
	PMIC_RGS_QI_VMD1_OC_STATUS = MT6351_PMIC_RGS_QI_VMD1_OC_STATUS,
	PMIC_RGS_QI_VMD1_DIG_MON = MT6351_PMIC_RGS_QI_VMD1_DIG_MON,
	PMIC_RGS_VMD1_ENPWM_STATUS = MT6351_PMIC_RGS_VMD1_ENPWM_STATUS,
	PMIC_RG_VS1_MODESET = MT6351_PMIC_RG_VS1_MODESET,
	PMIC_RG_VS1_NDIS_EN = MT6351_PMIC_RG_VS1_NDIS_EN,
	PMIC_RG_VS1_VRF18_SSTART_EN = MT6351_PMIC_RG_VS1_VRF18_SSTART_EN,
	PMIC_RG_VS1_AUTO_MODE = MT6351_PMIC_RG_VS1_AUTO_MODE,
	PMIC_RG_VS1_RZSEL0 = MT6351_PMIC_RG_VS1_RZSEL0,
	PMIC_RG_VS1_RZSEL1 = MT6351_PMIC_RG_VS1_RZSEL1,
	PMIC_RG_VS1_CCSEL0 = MT6351_PMIC_RG_VS1_CCSEL0,
	PMIC_RG_VS1_CCSEL1 = MT6351_PMIC_RG_VS1_CCSEL1,
	PMIC_RG_VS1_CSL = MT6351_PMIC_RG_VS1_CSL,
	PMIC_RG_VS1_SLP = MT6351_PMIC_RG_VS1_SLP,
	PMIC_RG_VS1_ADRC_FEN = MT6351_PMIC_RG_VS1_ADRC_FEN,
	PMIC_RG_VS1_VCCAP_CLAMP_FEN = MT6351_PMIC_RG_VS1_VCCAP_CLAMP_FEN,
	PMIC_RG_VS1_VC_CLAMP_FEN = MT6351_PMIC_RG_VS1_VC_CLAMP_FEN,
	PMIC_RG_VS1_PFMOC = MT6351_PMIC_RG_VS1_PFMOC,
	PMIC_RG_VS1_CSR = MT6351_PMIC_RG_VS1_CSR,
	PMIC_RG_VS1_ZXOS_TRIM = MT6351_PMIC_RG_VS1_ZXOS_TRIM,
	PMIC_RG_VS1_PFMSR_EH = MT6351_PMIC_RG_VS1_PFMSR_EH,
	PMIC_RG_VS1_NLIM_GATING = MT6351_PMIC_RG_VS1_NLIM_GATING,
	PMIC_RG_VS1_PWRSR_EH = MT6351_PMIC_RG_VS1_PWRSR_EH,
	PMIC_RG_VS1_HS_VTHDET = MT6351_PMIC_RG_VS1_HS_VTHDET,
	PMIC_RG_VS1_PG_GATING = MT6351_PMIC_RG_VS1_PG_GATING,
	PMIC_RG_VS1_HS_ONSPEED_EH = MT6351_PMIC_RG_VS1_HS_ONSPEED_EH,
	PMIC_RG_VS1_NLIM_TRIMMING = MT6351_PMIC_RG_VS1_NLIM_TRIMMING,
	PMIC_RG_VS1_DLC = MT6351_PMIC_RG_VS1_DLC,
	PMIC_RG_VS1_DLC_N = MT6351_PMIC_RG_VS1_DLC_N,
	PMIC_RG_VS1_PFM_RIP = MT6351_PMIC_RG_VS1_PFM_RIP,
	PMIC_RG_VS1_TRAN_BST = MT6351_PMIC_RG_VS1_TRAN_BST,
	PMIC_RG_VS1_DTS_ENB = MT6351_PMIC_RG_VS1_DTS_ENB,
	PMIC_RG_VS1_MIN_OFF = MT6351_PMIC_RG_VS1_MIN_OFF,
	PMIC_RG_VS1_1P35UP_SEL_EN = MT6351_PMIC_RG_VS1_1P35UP_SEL_EN,
	PMIC_RG_VS1_DLC_AUTO_MODE = MT6351_PMIC_RG_VS1_DLC_AUTO_MODE,
	PMIC_RG_VS1_DLC_SEL = MT6351_PMIC_RG_VS1_DLC_SEL,
	PMIC_RG_VS1_SRC_AUTO_MODE = MT6351_PMIC_RG_VS1_SRC_AUTO_MODE,
	PMIC_RG_VS1_UGP_SR = MT6351_PMIC_RG_VS1_UGP_SR,
	PMIC_RG_VS1_LGN_SR = MT6351_PMIC_RG_VS1_LGN_SR,
	PMIC_RG_VS1_UGP_SR_PFM = MT6351_PMIC_RG_VS1_UGP_SR_PFM,
	PMIC_RG_VS1_LGN_SR_PFM = MT6351_PMIC_RG_VS1_LGN_SR_PFM,
	PMIC_RG_VS1_UGD_VTHSEL = MT6351_PMIC_RG_VS1_UGD_VTHSEL,
	PMIC_RG_VS1_FNLX_SNS = MT6351_PMIC_RG_VS1_FNLX_SNS,
	PMIC_RG_VS1_VDIFF_ENLOWIQ = MT6351_PMIC_RG_VS1_VDIFF_ENLOWIQ,
	PMIC_RG_VS1_PFMOC_FWUPOFF = MT6351_PMIC_RG_VS1_PFMOC_FWUPOFF,
	PMIC_RG_VS1_PWFMOC_FWUPOFF = MT6351_PMIC_RG_VS1_PWFMOC_FWUPOFF,
	PMIC_RG_VS1_CP_FWUPOFF = MT6351_PMIC_RG_VS1_CP_FWUPOFF,
	PMIC_RG_VS1_ZX_GATING = MT6351_PMIC_RG_VS1_ZX_GATING,
	PMIC_RG_VS1_RSV = MT6351_PMIC_RG_VS1_RSV,
	PMIC_RG_VS1_AZC_EN = MT6351_PMIC_RG_VS1_AZC_EN,
	PMIC_RG_VS1_AZC_DELAY = MT6351_PMIC_RG_VS1_AZC_DELAY,
	PMIC_RG_VS1_AZC_HOLD_ENB = MT6351_PMIC_RG_VS1_AZC_HOLD_ENB,
	PMIC_RGS_QI_VS1_OC_STATUS = MT6351_PMIC_RGS_QI_VS1_OC_STATUS,
	PMIC_RGS_QI_VS1_DIG_MON = MT6351_PMIC_RGS_QI_VS1_DIG_MON,
	PMIC_RGS_VS1_ENPWM_STATUS = MT6351_PMIC_RGS_VS1_ENPWM_STATUS,
	PMIC_RG_VS2_MODESET = MT6351_PMIC_RG_VS2_MODESET,
	PMIC_RG_VS2_NDIS_EN = MT6351_PMIC_RG_VS2_NDIS_EN,
	PMIC_RG_VS2_VRF18_SSTART_EN = MT6351_PMIC_RG_VS2_VRF18_SSTART_EN,
	PMIC_RG_VS2_AUTO_MODE = MT6351_PMIC_RG_VS2_AUTO_MODE,
	PMIC_RG_VS2_RZSEL0 = MT6351_PMIC_RG_VS2_RZSEL0,
	PMIC_RG_VS2_RZSEL1 = MT6351_PMIC_RG_VS2_RZSEL1,
	PMIC_RG_VS2_CCSEL0 = MT6351_PMIC_RG_VS2_CCSEL0,
	PMIC_RG_VS2_CCSEL1 = MT6351_PMIC_RG_VS2_CCSEL1,
	PMIC_RG_VS2_CSL = MT6351_PMIC_RG_VS2_CSL,
	PMIC_RG_VS2_SLP = MT6351_PMIC_RG_VS2_SLP,
	PMIC_RG_VS2_ADRC_FEN = MT6351_PMIC_RG_VS2_ADRC_FEN,
	PMIC_RG_VS2_VCCAP_CLAMP_FEN = MT6351_PMIC_RG_VS2_VCCAP_CLAMP_FEN,
	PMIC_RG_VS2_VC_CLAMP_FEN = MT6351_PMIC_RG_VS2_VC_CLAMP_FEN,
	PMIC_RG_VS2_PFMOC = MT6351_PMIC_RG_VS2_PFMOC,
	PMIC_RG_VS2_CSR = MT6351_PMIC_RG_VS2_CSR,
	PMIC_RG_VS2_ZXOS_TRIM = MT6351_PMIC_RG_VS2_ZXOS_TRIM,
	PMIC_RG_VS2_PFMSR_EH = MT6351_PMIC_RG_VS2_PFMSR_EH,
	PMIC_RG_VS2_NLIM_GATING = MT6351_PMIC_RG_VS2_NLIM_GATING,
	PMIC_RG_VS2_PWRSR_EH = MT6351_PMIC_RG_VS2_PWRSR_EH,
	PMIC_RG_VS2_HS_VTHDET = MT6351_PMIC_RG_VS2_HS_VTHDET,
	PMIC_RG_VS2_PG_GATING = MT6351_PMIC_RG_VS2_PG_GATING,
	PMIC_RG_VS2_HS_ONSPEED_EH = MT6351_PMIC_RG_VS2_HS_ONSPEED_EH,
	PMIC_RG_VS2_NLIM_TRIMMING = MT6351_PMIC_RG_VS2_NLIM_TRIMMING,
	PMIC_RG_VS2_DLC = MT6351_PMIC_RG_VS2_DLC,
	PMIC_RG_VS2_DLC_N = MT6351_PMIC_RG_VS2_DLC_N,
	PMIC_RG_VS2_PFM_RIP = MT6351_PMIC_RG_VS2_PFM_RIP,
	PMIC_RG_VS2_TRAN_BST = MT6351_PMIC_RG_VS2_TRAN_BST,
	PMIC_RG_VS2_DTS_ENB = MT6351_PMIC_RG_VS2_DTS_ENB,
	PMIC_RG_VS2_MIN_OFF = MT6351_PMIC_RG_VS2_MIN_OFF,
	PMIC_RG_VS2_1P35UP_SEL_EN = MT6351_PMIC_RG_VS2_1P35UP_SEL_EN,
	PMIC_RG_VS2_DLC_AUTO_MODE = MT6351_PMIC_RG_VS2_DLC_AUTO_MODE,
	PMIC_RG_VS2_DLC_SEL = MT6351_PMIC_RG_VS2_DLC_SEL,
	PMIC_RG_VS2_SRC_AUTO_MODE = MT6351_PMIC_RG_VS2_SRC_AUTO_MODE,
	PMIC_RG_VS2_UGP_SR = MT6351_PMIC_RG_VS2_UGP_SR,
	PMIC_RG_VS2_LGN_SR = MT6351_PMIC_RG_VS2_LGN_SR,
	PMIC_RG_VS2_UGP_SR_PFM = MT6351_PMIC_RG_VS2_UGP_SR_PFM,
	PMIC_RG_VS2_LGN_SR_PFM = MT6351_PMIC_RG_VS2_LGN_SR_PFM,
	PMIC_RG_VS2_UGD_VTHSEL = MT6351_PMIC_RG_VS2_UGD_VTHSEL,
	PMIC_RG_VS2_FNLX_SNS = MT6351_PMIC_RG_VS2_FNLX_SNS,
	PMIC_RG_VS2_VDIFF_ENLOWIQ = MT6351_PMIC_RG_VS2_VDIFF_ENLOWIQ,
	PMIC_RG_VS2_PFMOC_FWUPOFF = MT6351_PMIC_RG_VS2_PFMOC_FWUPOFF,
	PMIC_RG_VS2_PWFMOC_FWUPOFF = MT6351_PMIC_RG_VS2_PWFMOC_FWUPOFF,
	PMIC_RG_VS2_CP_FWUPOFF = MT6351_PMIC_RG_VS2_CP_FWUPOFF,
	PMIC_RG_VS2_ZX_GATING = MT6351_PMIC_RG_VS2_ZX_GATING,
	PMIC_RG_VS2_RSV = MT6351_PMIC_RG_VS2_RSV,
	PMIC_RG_VS2_AZC_EN = MT6351_PMIC_RG_VS2_AZC_EN,
	PMIC_RG_VS2_AZC_DELAY = MT6351_PMIC_RG_VS2_AZC_DELAY,
	PMIC_RG_VS2_AZC_HOLD_ENB = MT6351_PMIC_RG_VS2_AZC_HOLD_ENB,
	PMIC_RGS_QI_VS2_OC_STATUS = MT6351_PMIC_RGS_QI_VS2_OC_STATUS,
	PMIC_RGS_QI_VS2_DIG_MON = MT6351_PMIC_RGS_QI_VS2_DIG_MON,
	PMIC_RGS_VS2_ENPWM_STATUS = MT6351_PMIC_RGS_VS2_ENPWM_STATUS,
	PMIC_RG_VPA_NDIS_EN = MT6351_PMIC_RG_VPA_NDIS_EN,
	PMIC_RG_VPA_MODESET = MT6351_PMIC_RG_VPA_MODESET,
	PMIC_RG_VPA_CC = MT6351_PMIC_RG_VPA_CC,
	PMIC_RG_VPA_CSR = MT6351_PMIC_RG_VPA_CSR,
	PMIC_RG_VPA_CSMIR = MT6351_PMIC_RG_VPA_CSMIR,
	PMIC_RG_VPA_CSL = MT6351_PMIC_RG_VPA_CSL,
	PMIC_RG_VPA_SLP = MT6351_PMIC_RG_VPA_SLP,
	PMIC_RG_VPA_AZC_EN = MT6351_PMIC_RG_VPA_AZC_EN,
	PMIC_RG_VPA_CP_FWUPOFF = MT6351_PMIC_RG_VPA_CP_FWUPOFF,
	PMIC_RG_VPA_AZC_DELAY = MT6351_PMIC_RG_VPA_AZC_DELAY,
	PMIC_RG_VPA_RZSEL = MT6351_PMIC_RG_VPA_RZSEL,
	PMIC_RG_VPA_ZXREF = MT6351_PMIC_RG_VPA_ZXREF,
	PMIC_RG_VPA_NLIM_SEL = MT6351_PMIC_RG_VPA_NLIM_SEL,
	PMIC_RG_VPA_HZP = MT6351_PMIC_RG_VPA_HZP,
	PMIC_RG_VPA_BWEX_GAT = MT6351_PMIC_RG_VPA_BWEX_GAT,
	PMIC_RG_VPA_SLEW = MT6351_PMIC_RG_VPA_SLEW,
	PMIC_RG_VPA_SLEW_NMOS = MT6351_PMIC_RG_VPA_SLEW_NMOS,
	PMIC_RG_VPA_MIN_ON = MT6351_PMIC_RG_VPA_MIN_ON,
	PMIC_RG_VPA_VBAT_DEL = MT6351_PMIC_RG_VPA_VBAT_DEL,
	PMIC_RGS_VPA_AZC_VOS_SEL = MT6351_PMIC_RGS_VPA_AZC_VOS_SEL,
	PMIC_RG_VPA_MIN_PK = MT6351_PMIC_RG_VPA_MIN_PK,
	PMIC_RG_VPA_RSV1 = MT6351_PMIC_RG_VPA_RSV1,
	PMIC_RG_VPA_RSV2 = MT6351_PMIC_RG_VPA_RSV2,
	PMIC_RGS_QI_VPA_OC_STATUS = MT6351_PMIC_RGS_QI_VPA_OC_STATUS,
	PMIC_BUCK_VCORE_EN_CTRL = MT6351_PMIC_BUCK_VCORE_EN_CTRL,
	PMIC_BUCK_VCORE_VOSEL_CTRL = MT6351_PMIC_BUCK_VCORE_VOSEL_CTRL,
	PMIC_BUCK_VCORE_EN_SEL = MT6351_PMIC_BUCK_VCORE_EN_SEL,
	PMIC_BUCK_VCORE_VOSEL_SEL = MT6351_PMIC_BUCK_VCORE_VOSEL_SEL,
	PMIC_BUCK_VCORE_EN = MT6351_PMIC_BUCK_VCORE_EN,
	PMIC_BUCK_VCORE_STBTD = MT6351_PMIC_BUCK_VCORE_STBTD,
	PMIC_DA_VCORE_STB = MT6351_PMIC_DA_VCORE_STB,
	PMIC_DA_QI_VCORE_EN = MT6351_PMIC_DA_QI_VCORE_EN,
	PMIC_BUCK_VCORE_SFCHG_FRATE = MT6351_PMIC_BUCK_VCORE_SFCHG_FRATE,
	PMIC_BUCK_VCORE_SFCHG_FEN = MT6351_PMIC_BUCK_VCORE_SFCHG_FEN,
	PMIC_BUCK_VCORE_SFCHG_RRATE = MT6351_PMIC_BUCK_VCORE_SFCHG_RRATE,
	PMIC_BUCK_VCORE_SFCHG_REN = MT6351_PMIC_BUCK_VCORE_SFCHG_REN,
	PMIC_BUCK_VCORE_VOSEL = MT6351_PMIC_BUCK_VCORE_VOSEL,
	PMIC_BUCK_VCORE_VOSEL_ON = MT6351_PMIC_BUCK_VCORE_VOSEL_ON,
	PMIC_BUCK_VCORE_VOSEL_SLEEP = MT6351_PMIC_BUCK_VCORE_VOSEL_SLEEP,
	PMIC_DA_NI_VCORE_VOSEL = MT6351_PMIC_DA_NI_VCORE_VOSEL,
	PMIC_DA_NI_VCORE_VOSEL_SYNC = MT6351_PMIC_DA_NI_VCORE_VOSEL_SYNC,
	PMIC_BUCK_VCORE_TRANS_TD = MT6351_PMIC_BUCK_VCORE_TRANS_TD,
	PMIC_BUCK_VCORE_TRANS_CTRL = MT6351_PMIC_BUCK_VCORE_TRANS_CTRL,
	PMIC_BUCK_VCORE_TRANS_ONCE = MT6351_PMIC_BUCK_VCORE_TRANS_ONCE,
	PMIC_DA_QI_VCORE_DVS_EN = MT6351_PMIC_DA_QI_VCORE_DVS_EN,
	PMIC_BUCK_VCORE_VSLEEP_EN = MT6351_PMIC_BUCK_VCORE_VSLEEP_EN,
	PMIC_BUCK_VCORE_R2R_PDN = MT6351_PMIC_BUCK_VCORE_R2R_PDN,
	PMIC_BUCK_VCORE_VSLEEP_SEL = MT6351_PMIC_BUCK_VCORE_VSLEEP_SEL,
	PMIC_DA_NI_VCORE_R2R_PDN = MT6351_PMIC_DA_NI_VCORE_R2R_PDN,
	PMIC_DA_NI_VCORE_VSLEEP_SEL = MT6351_PMIC_DA_NI_VCORE_VSLEEP_SEL,
	PMIC_BUCK_VGPU_EN_CTRL = MT6351_PMIC_BUCK_VGPU_EN_CTRL,
	PMIC_BUCK_VGPU_VOSEL_CTRL = MT6351_PMIC_BUCK_VGPU_VOSEL_CTRL,
	PMIC_BUCK_VGPU_EN_SEL = MT6351_PMIC_BUCK_VGPU_EN_SEL,
	PMIC_BUCK_VGPU_VOSEL_SEL = MT6351_PMIC_BUCK_VGPU_VOSEL_SEL,
	PMIC_BUCK_VGPU_EN = MT6351_PMIC_BUCK_VGPU_EN,
	PMIC_BUCK_VGPU_STBTD = MT6351_PMIC_BUCK_VGPU_STBTD,
	PMIC_DA_VGPU_STB = MT6351_PMIC_DA_VGPU_STB,
	PMIC_DA_QI_VGPU_EN = MT6351_PMIC_DA_QI_VGPU_EN,
	PMIC_BUCK_VGPU_SFCHG_FRATE = MT6351_PMIC_BUCK_VGPU_SFCHG_FRATE,
	PMIC_BUCK_VGPU_SFCHG_FEN = MT6351_PMIC_BUCK_VGPU_SFCHG_FEN,
	PMIC_BUCK_VGPU_SFCHG_RRATE = MT6351_PMIC_BUCK_VGPU_SFCHG_RRATE,
	PMIC_BUCK_VGPU_SFCHG_REN = MT6351_PMIC_BUCK_VGPU_SFCHG_REN,
	PMIC_BUCK_VGPU_VOSEL = MT6351_PMIC_BUCK_VGPU_VOSEL,
	PMIC_BUCK_VGPU_VOSEL_ON = MT6351_PMIC_BUCK_VGPU_VOSEL_ON,
	PMIC_BUCK_VGPU_VOSEL_SLEEP = MT6351_PMIC_BUCK_VGPU_VOSEL_SLEEP,
	PMIC_DA_NI_VGPU_VOSEL = MT6351_PMIC_DA_NI_VGPU_VOSEL,
	PMIC_DA_NI_VGPU_VOSEL_SYNC = MT6351_PMIC_DA_NI_VGPU_VOSEL_SYNC,
	PMIC_BUCK_VGPU_TRANS_TD = MT6351_PMIC_BUCK_VGPU_TRANS_TD,
	PMIC_BUCK_VGPU_TRANS_CTRL = MT6351_PMIC_BUCK_VGPU_TRANS_CTRL,
	PMIC_BUCK_VGPU_TRANS_ONCE = MT6351_PMIC_BUCK_VGPU_TRANS_ONCE,
	PMIC_DA_QI_VGPU_DVS_EN = MT6351_PMIC_DA_QI_VGPU_DVS_EN,
	PMIC_BUCK_VGPU_VSLEEP_EN = MT6351_PMIC_BUCK_VGPU_VSLEEP_EN,
	PMIC_BUCK_VGPU_R2R_PDN = MT6351_PMIC_BUCK_VGPU_R2R_PDN,
	PMIC_BUCK_VGPU_VSLEEP_SEL = MT6351_PMIC_BUCK_VGPU_VSLEEP_SEL,
	PMIC_DA_NI_VGPU_R2R_PDN = MT6351_PMIC_DA_NI_VGPU_R2R_PDN,
	PMIC_DA_NI_VGPU_VSLEEP_SEL = MT6351_PMIC_DA_NI_VGPU_VSLEEP_SEL,
	PMIC_BUCK_VMODEM_EN_CTRL = MT6351_PMIC_BUCK_VMODEM_EN_CTRL,
	PMIC_BUCK_VMODEM_VOSEL_CTRL = MT6351_PMIC_BUCK_VMODEM_VOSEL_CTRL,
	PMIC_BUCK_VMODEM_EN_SEL = MT6351_PMIC_BUCK_VMODEM_EN_SEL,
	PMIC_BUCK_VMODEM_VOSEL_SEL = MT6351_PMIC_BUCK_VMODEM_VOSEL_SEL,
	PMIC_BUCK_VMODEM_EN = MT6351_PMIC_BUCK_VMODEM_EN,
	PMIC_BUCK_VMODEM_STBTD = MT6351_PMIC_BUCK_VMODEM_STBTD,
	PMIC_DA_VMODEM_STB = MT6351_PMIC_DA_VMODEM_STB,
	PMIC_DA_QI_VMODEM_EN = MT6351_PMIC_DA_QI_VMODEM_EN,
	PMIC_BUCK_VMODEM_SFCHG_FRATE = MT6351_PMIC_BUCK_VMODEM_SFCHG_FRATE,
	PMIC_BUCK_VMODEM_SFCHG_FEN = MT6351_PMIC_BUCK_VMODEM_SFCHG_FEN,
	PMIC_BUCK_VMODEM_SFCHG_RRATE = MT6351_PMIC_BUCK_VMODEM_SFCHG_RRATE,
	PMIC_BUCK_VMODEM_SFCHG_REN = MT6351_PMIC_BUCK_VMODEM_SFCHG_REN,
	PMIC_BUCK_VMODEM_VOSEL = MT6351_PMIC_BUCK_VMODEM_VOSEL,
	PMIC_BUCK_VMODEM_VOSEL_ON = MT6351_PMIC_BUCK_VMODEM_VOSEL_ON,
	PMIC_BUCK_VMODEM_VOSEL_SLEEP = MT6351_PMIC_BUCK_VMODEM_VOSEL_SLEEP,
	PMIC_DA_NI_VMODEM_VOSEL = MT6351_PMIC_DA_NI_VMODEM_VOSEL,
	PMIC_DA_NI_VMODEM_VOSEL_SYNC = MT6351_PMIC_DA_NI_VMODEM_VOSEL_SYNC,
	PMIC_BUCK_VMODEM_TRANS_TD = MT6351_PMIC_BUCK_VMODEM_TRANS_TD,
	PMIC_BUCK_VMODEM_TRANS_CTRL = MT6351_PMIC_BUCK_VMODEM_TRANS_CTRL,
	PMIC_BUCK_VMODEM_TRANS_ONCE = MT6351_PMIC_BUCK_VMODEM_TRANS_ONCE,
	PMIC_DA_QI_VMODEM_DVS_EN = MT6351_PMIC_DA_QI_VMODEM_DVS_EN,
	PMIC_BUCK_VMODEM_VSLEEP_EN = MT6351_PMIC_BUCK_VMODEM_VSLEEP_EN,
	PMIC_BUCK_VMODEM_R2R_PDN = MT6351_PMIC_BUCK_VMODEM_R2R_PDN,
	PMIC_BUCK_VMODEM_VSLEEP_SEL = MT6351_PMIC_BUCK_VMODEM_VSLEEP_SEL,
	PMIC_DA_NI_VMODEM_R2R_PDN = MT6351_PMIC_DA_NI_VMODEM_R2R_PDN,
	PMIC_DA_NI_VMODEM_VSLEEP_SEL = MT6351_PMIC_DA_NI_VMODEM_VSLEEP_SEL,
	PMIC_BUCK_VMD1_EN_CTRL = MT6351_PMIC_BUCK_VMD1_EN_CTRL,
	PMIC_BUCK_VMD1_VOSEL_CTRL = MT6351_PMIC_BUCK_VMD1_VOSEL_CTRL,
	PMIC_BUCK_VMD1_EN_SEL = MT6351_PMIC_BUCK_VMD1_EN_SEL,
	PMIC_BUCK_VMD1_VOSEL_SEL = MT6351_PMIC_BUCK_VMD1_VOSEL_SEL,
	PMIC_BUCK_VMD1_EN = MT6351_PMIC_BUCK_VMD1_EN,
	PMIC_BUCK_VMD1_STBTD = MT6351_PMIC_BUCK_VMD1_STBTD,
	PMIC_DA_VMD1_STB = MT6351_PMIC_DA_VMD1_STB,
	PMIC_DA_QI_VMD1_EN = MT6351_PMIC_DA_QI_VMD1_EN,
	PMIC_BUCK_VMD1_SFCHG_FRATE = MT6351_PMIC_BUCK_VMD1_SFCHG_FRATE,
	PMIC_BUCK_VMD1_SFCHG_FEN = MT6351_PMIC_BUCK_VMD1_SFCHG_FEN,
	PMIC_BUCK_VMD1_SFCHG_RRATE = MT6351_PMIC_BUCK_VMD1_SFCHG_RRATE,
	PMIC_BUCK_VMD1_SFCHG_REN = MT6351_PMIC_BUCK_VMD1_SFCHG_REN,
	PMIC_BUCK_VMD1_VOSEL = MT6351_PMIC_BUCK_VMD1_VOSEL,
	PMIC_BUCK_VMD1_VOSEL_ON = MT6351_PMIC_BUCK_VMD1_VOSEL_ON,
	PMIC_BUCK_VMD1_VOSEL_SLEEP = MT6351_PMIC_BUCK_VMD1_VOSEL_SLEEP,
	PMIC_DA_NI_VMD1_VOSEL = MT6351_PMIC_DA_NI_VMD1_VOSEL,
	PMIC_DA_NI_VMD1_VOSEL_SYNC = MT6351_PMIC_DA_NI_VMD1_VOSEL_SYNC,
	PMIC_BUCK_VMD1_TRANS_TD = MT6351_PMIC_BUCK_VMD1_TRANS_TD,
	PMIC_BUCK_VMD1_TRANS_CTRL = MT6351_PMIC_BUCK_VMD1_TRANS_CTRL,
	PMIC_BUCK_VMD1_TRANS_ONCE = MT6351_PMIC_BUCK_VMD1_TRANS_ONCE,
	PMIC_DA_QI_VMD1_DVS_EN = MT6351_PMIC_DA_QI_VMD1_DVS_EN,
	PMIC_BUCK_VMD1_VSLEEP_EN = MT6351_PMIC_BUCK_VMD1_VSLEEP_EN,
	PMIC_BUCK_VMD1_R2R_PDN = MT6351_PMIC_BUCK_VMD1_R2R_PDN,
	PMIC_BUCK_VMD1_VSLEEP_SEL = MT6351_PMIC_BUCK_VMD1_VSLEEP_SEL,
	PMIC_DA_NI_VMD1_R2R_PDN = MT6351_PMIC_DA_NI_VMD1_R2R_PDN,
	PMIC_DA_NI_VMD1_VSLEEP_SEL = MT6351_PMIC_DA_NI_VMD1_VSLEEP_SEL,
	PMIC_BUCK_VSRAM_MD_EN_CTRL = MT6351_PMIC_BUCK_VSRAM_MD_EN_CTRL,
	PMIC_BUCK_VSRAM_MD_VOSEL_CTRL = MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_CTRL,
	PMIC_BUCK_VSRAM_MD_EN_SEL = MT6351_PMIC_BUCK_VSRAM_MD_EN_SEL,
	PMIC_BUCK_VSRAM_MD_VOSEL_SEL = MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_SEL,
	PMIC_BUCK_VSRAM_MD_EN = MT6351_PMIC_BUCK_VSRAM_MD_EN,
	PMIC_BUCK_VSRAM_MD_STBTD = MT6351_PMIC_BUCK_VSRAM_MD_STBTD,
	PMIC_DA_VSRAM_MD_STB = MT6351_PMIC_DA_VSRAM_MD_STB,
	PMIC_DA_QI_VSRAM_MD_EN = MT6351_PMIC_DA_QI_VSRAM_MD_EN,
	PMIC_BUCK_VSRAM_MD_SFCHG_FRATE = MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_FRATE,
	PMIC_BUCK_VSRAM_MD_SFCHG_FEN = MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_FEN,
	PMIC_BUCK_VSRAM_MD_SFCHG_RRATE = MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_RRATE,
	PMIC_BUCK_VSRAM_MD_SFCHG_REN = MT6351_PMIC_BUCK_VSRAM_MD_SFCHG_REN,
	PMIC_BUCK_VSRAM_MD_VOSEL = MT6351_PMIC_BUCK_VSRAM_MD_VOSEL,
	PMIC_BUCK_VSRAM_MD_VOSEL_ON = MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_ON,
	PMIC_BUCK_VSRAM_MD_VOSEL_SLEEP = MT6351_PMIC_BUCK_VSRAM_MD_VOSEL_SLEEP,
	PMIC_DA_NI_VSRAM_MD_VOSEL = MT6351_PMIC_DA_NI_VSRAM_MD_VOSEL,
	PMIC_DA_NI_VSRAM_MD_VOSEL_SYNC = MT6351_PMIC_DA_NI_VSRAM_MD_VOSEL_SYNC,
	PMIC_BUCK_VSRAM_MD_TRANS_TD = MT6351_PMIC_BUCK_VSRAM_MD_TRANS_TD,
	PMIC_BUCK_VSRAM_MD_TRANS_CTRL = MT6351_PMIC_BUCK_VSRAM_MD_TRANS_CTRL,
	PMIC_BUCK_VSRAM_MD_TRANS_ONCE = MT6351_PMIC_BUCK_VSRAM_MD_TRANS_ONCE,
	PMIC_DA_QI_VSRAM_MD_DVS_EN = MT6351_PMIC_DA_QI_VSRAM_MD_DVS_EN,
	PMIC_BUCK_VSRAM_MD_VSLEEP_EN = MT6351_PMIC_BUCK_VSRAM_MD_VSLEEP_EN,
	PMIC_BUCK_VSRAM_MD_R2R_PDN = MT6351_PMIC_BUCK_VSRAM_MD_R2R_PDN,
	PMIC_BUCK_VSRAM_MD_VSLEEP_SEL = MT6351_PMIC_BUCK_VSRAM_MD_VSLEEP_SEL,
	PMIC_DA_NI_VSRAM_MD_R2R_PDN = MT6351_PMIC_DA_NI_VSRAM_MD_R2R_PDN,
	PMIC_DA_NI_VSRAM_MD_VSLEEP_SEL = MT6351_PMIC_DA_NI_VSRAM_MD_VSLEEP_SEL,
	PMIC_BUCK_VS1_EN_CTRL = MT6351_PMIC_BUCK_VS1_EN_CTRL,
	PMIC_BUCK_VS1_VOSEL_CTRL = MT6351_PMIC_BUCK_VS1_VOSEL_CTRL,
	PMIC_BUCK_VS1_EN_SEL = MT6351_PMIC_BUCK_VS1_EN_SEL,
	PMIC_BUCK_VS1_VOSEL_SEL = MT6351_PMIC_BUCK_VS1_VOSEL_SEL,
	PMIC_BUCK_VS1_EN = MT6351_PMIC_BUCK_VS1_EN,
	PMIC_BUCK_VS1_STBTD = MT6351_PMIC_BUCK_VS1_STBTD,
	PMIC_DA_VS1_STB = MT6351_PMIC_DA_VS1_STB,
	PMIC_DA_QI_VS1_EN = MT6351_PMIC_DA_QI_VS1_EN,
	PMIC_BUCK_VS1_SFCHG_FRATE = MT6351_PMIC_BUCK_VS1_SFCHG_FRATE,
	PMIC_BUCK_VS1_SFCHG_FEN = MT6351_PMIC_BUCK_VS1_SFCHG_FEN,
	PMIC_BUCK_VS1_SFCHG_RRATE = MT6351_PMIC_BUCK_VS1_SFCHG_RRATE,
	PMIC_BUCK_VS1_SFCHG_REN = MT6351_PMIC_BUCK_VS1_SFCHG_REN,
	PMIC_BUCK_VS1_VOSEL = MT6351_PMIC_BUCK_VS1_VOSEL,
	PMIC_BUCK_VS1_VOSEL_ON = MT6351_PMIC_BUCK_VS1_VOSEL_ON,
	PMIC_BUCK_VS1_VOSEL_SLEEP = MT6351_PMIC_BUCK_VS1_VOSEL_SLEEP,
	PMIC_DA_NI_VS1_VOSEL = MT6351_PMIC_DA_NI_VS1_VOSEL,
	PMIC_DA_NI_VS1_VOSEL_SYNC = MT6351_PMIC_DA_NI_VS1_VOSEL_SYNC,
	PMIC_BUCK_VS1_TRANS_TD = MT6351_PMIC_BUCK_VS1_TRANS_TD,
	PMIC_BUCK_VS1_TRANS_CTRL = MT6351_PMIC_BUCK_VS1_TRANS_CTRL,
	PMIC_BUCK_VS1_TRANS_ONCE = MT6351_PMIC_BUCK_VS1_TRANS_ONCE,
	PMIC_DA_QI_VS1_DVS_EN = MT6351_PMIC_DA_QI_VS1_DVS_EN,
	PMIC_BUCK_VS1_VSLEEP_EN = MT6351_PMIC_BUCK_VS1_VSLEEP_EN,
	PMIC_BUCK_VS1_R2R_PDN = MT6351_PMIC_BUCK_VS1_R2R_PDN,
	PMIC_BUCK_VS1_VSLEEP_SEL = MT6351_PMIC_BUCK_VS1_VSLEEP_SEL,
	PMIC_DA_NI_VS1_R2R_PDN = MT6351_PMIC_DA_NI_VS1_R2R_PDN,
	PMIC_DA_NI_VS1_VSLEEP_SEL = MT6351_PMIC_DA_NI_VS1_VSLEEP_SEL,
	PMIC_BUCK_VS2_EN_CTRL = MT6351_PMIC_BUCK_VS2_EN_CTRL,
	PMIC_BUCK_VS2_VOSEL_CTRL = MT6351_PMIC_BUCK_VS2_VOSEL_CTRL,
	PMIC_BUCK_VS2_EN_SEL = MT6351_PMIC_BUCK_VS2_EN_SEL,
	PMIC_BUCK_VS2_VOSEL_SEL = MT6351_PMIC_BUCK_VS2_VOSEL_SEL,
	PMIC_BUCK_VS2_EN = MT6351_PMIC_BUCK_VS2_EN,
	PMIC_BUCK_VS2_STBTD = MT6351_PMIC_BUCK_VS2_STBTD,
	PMIC_DA_VS2_STB = MT6351_PMIC_DA_VS2_STB,
	PMIC_DA_QI_VS2_EN = MT6351_PMIC_DA_QI_VS2_EN,
	PMIC_BUCK_VS2_SFCHG_FRATE = MT6351_PMIC_BUCK_VS2_SFCHG_FRATE,
	PMIC_BUCK_VS2_SFCHG_FEN = MT6351_PMIC_BUCK_VS2_SFCHG_FEN,
	PMIC_BUCK_VS2_SFCHG_RRATE = MT6351_PMIC_BUCK_VS2_SFCHG_RRATE,
	PMIC_BUCK_VS2_SFCHG_REN = MT6351_PMIC_BUCK_VS2_SFCHG_REN,
	PMIC_BUCK_VS2_VOSEL = MT6351_PMIC_BUCK_VS2_VOSEL,
	PMIC_BUCK_VS2_VOSEL_ON = MT6351_PMIC_BUCK_VS2_VOSEL_ON,
	PMIC_BUCK_VS2_VOSEL_SLEEP = MT6351_PMIC_BUCK_VS2_VOSEL_SLEEP,
	PMIC_DA_NI_VS2_VOSEL = MT6351_PMIC_DA_NI_VS2_VOSEL,
	PMIC_DA_NI_VS2_VOSEL_SYNC = MT6351_PMIC_DA_NI_VS2_VOSEL_SYNC,
	PMIC_BUCK_VS2_TRANS_TD = MT6351_PMIC_BUCK_VS2_TRANS_TD,
	PMIC_BUCK_VS2_TRANS_CTRL = MT6351_PMIC_BUCK_VS2_TRANS_CTRL,
	PMIC_BUCK_VS2_TRANS_ONCE = MT6351_PMIC_BUCK_VS2_TRANS_ONCE,
	PMIC_DA_QI_VS2_DVS_EN = MT6351_PMIC_DA_QI_VS2_DVS_EN,
	PMIC_BUCK_VS2_VSLEEP_EN = MT6351_PMIC_BUCK_VS2_VSLEEP_EN,
	PMIC_BUCK_VS2_R2R_PDN = MT6351_PMIC_BUCK_VS2_R2R_PDN,
	PMIC_BUCK_VS2_VSLEEP_SEL = MT6351_PMIC_BUCK_VS2_VSLEEP_SEL,
	PMIC_DA_NI_VS2_R2R_PDN = MT6351_PMIC_DA_NI_VS2_R2R_PDN,
	PMIC_DA_NI_VS2_VSLEEP_SEL = MT6351_PMIC_DA_NI_VS2_VSLEEP_SEL,
	PMIC_BUCK_VPA_EN_CTRL = MT6351_PMIC_BUCK_VPA_EN_CTRL,
	PMIC_BUCK_VPA_VOSEL_CTRL = MT6351_PMIC_BUCK_VPA_VOSEL_CTRL,
	PMIC_BUCK_VPA_EN_SEL = MT6351_PMIC_BUCK_VPA_EN_SEL,
	PMIC_BUCK_VPA_VOSEL_SEL = MT6351_PMIC_BUCK_VPA_VOSEL_SEL,
	PMIC_BUCK_VPA_EN = MT6351_PMIC_BUCK_VPA_EN,
	PMIC_BUCK_VPA_STBTD = MT6351_PMIC_BUCK_VPA_STBTD,
	PMIC_DA_VPA_STB = MT6351_PMIC_DA_VPA_STB,
	PMIC_DA_QI_VPA_EN = MT6351_PMIC_DA_QI_VPA_EN,
	PMIC_BUCK_VPA_SFCHG_FRATE = MT6351_PMIC_BUCK_VPA_SFCHG_FRATE,
	PMIC_BUCK_VPA_SFCHG_FEN = MT6351_PMIC_BUCK_VPA_SFCHG_FEN,
	PMIC_BUCK_VPA_SFCHG_RRATE = MT6351_PMIC_BUCK_VPA_SFCHG_RRATE,
	PMIC_BUCK_VPA_SFCHG_REN = MT6351_PMIC_BUCK_VPA_SFCHG_REN,
	PMIC_BUCK_VPA_VOSEL = MT6351_PMIC_BUCK_VPA_VOSEL,
	PMIC_BUCK_VPA_VOSEL_ON = MT6351_PMIC_BUCK_VPA_VOSEL_ON,
	PMIC_BUCK_VPA_VOSEL_SLEEP = MT6351_PMIC_BUCK_VPA_VOSEL_SLEEP,
	PMIC_DA_NI_VPA_VOSEL_GRAY = MT6351_PMIC_DA_NI_VPA_VOSEL_GRAY,
	PMIC_DA_NI_VPA_VOSEL_SYNC = MT6351_PMIC_DA_NI_VPA_VOSEL_SYNC,
	PMIC_BUCK_VPA_TRANS_TD = MT6351_PMIC_BUCK_VPA_TRANS_TD,
	PMIC_BUCK_VPA_TRANS_CTRL = MT6351_PMIC_BUCK_VPA_TRANS_CTRL,
	PMIC_BUCK_VPA_TRANS_ONCE = MT6351_PMIC_BUCK_VPA_TRANS_ONCE,
	PMIC_DA_QI_VPA_DVS_EN = MT6351_PMIC_DA_QI_VPA_DVS_EN,
	PMIC_BUCK_VPA_VSLEEP_EN = MT6351_PMIC_BUCK_VPA_VSLEEP_EN,
	PMIC_BUCK_VPA_R2R_PDN = MT6351_PMIC_BUCK_VPA_R2R_PDN,
	PMIC_BUCK_VPA_VSLEEP_SEL = MT6351_PMIC_BUCK_VPA_VSLEEP_SEL,
	PMIC_DA_NI_VPA_R2R_PDN = MT6351_PMIC_DA_NI_VPA_R2R_PDN,
	PMIC_DA_NI_VPA_VSLEEP_SEL = MT6351_PMIC_DA_NI_VPA_VSLEEP_SEL,
	PMIC_BUCK_VSRAM_PROC_EN_CTRL = MT6351_PMIC_BUCK_VSRAM_PROC_EN_CTRL,
	PMIC_BUCK_VSRAM_PROC_VOSEL_CTRL =
	    MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_CTRL,
	PMIC_BUCK_VSRAM_PROC_EN_SEL = MT6351_PMIC_BUCK_VSRAM_PROC_EN_SEL,
	PMIC_BUCK_VSRAM_PROC_VOSEL_SEL = MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_SEL,
	PMIC_BUCK_VSRAM_PROC_EN = MT6351_PMIC_BUCK_VSRAM_PROC_EN,
	PMIC_BUCK_VSRAM_PROC_STBTD = MT6351_PMIC_BUCK_VSRAM_PROC_STBTD,
	PMIC_DA_VSRAM_PROC_STB = MT6351_PMIC_DA_VSRAM_PROC_STB,
	PMIC_DA_QI_VSRAM_PROC_EN_RSV = MT6351_PMIC_DA_QI_VSRAM_PROC_EN_RSV,
	PMIC_BUCK_VSRAM_PROC_SFCHG_FRATE =
	    MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_FRATE,
	PMIC_BUCK_VSRAM_PROC_SFCHG_FEN = MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_FEN,
	PMIC_BUCK_VSRAM_PROC_SFCHG_RRATE =
	    MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_RRATE,
	PMIC_BUCK_VSRAM_PROC_SFCHG_REN = MT6351_PMIC_BUCK_VSRAM_PROC_SFCHG_REN,
	PMIC_BUCK_VSRAM_PROC_VOSEL = MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL,
	PMIC_BUCK_VSRAM_PROC_VOSEL_ON = MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_ON,
	PMIC_BUCK_VSRAM_PROC_VOSEL_SLEEP =
	    MT6351_PMIC_BUCK_VSRAM_PROC_VOSEL_SLEEP,
	PMIC_DA_NI_VSRAM_PROC_VOSEL = MT6351_PMIC_DA_NI_VSRAM_PROC_VOSEL,
	PMIC_DA_NI_VSRAM_PROC_VOSEL_SYNC =
	    MT6351_PMIC_DA_NI_VSRAM_PROC_VOSEL_SYNC,
	PMIC_BUCK_VSRAM_PROC_TRANS_TD = MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_TD,
	PMIC_BUCK_VSRAM_PROC_TRANS_CTRL =
	    MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_CTRL,
	PMIC_BUCK_VSRAM_PROC_TRANS_ONCE =
	    MT6351_PMIC_BUCK_VSRAM_PROC_TRANS_ONCE,
	PMIC_DA_QI_VSRAM_PROC_DVS_EN = MT6351_PMIC_DA_QI_VSRAM_PROC_DVS_EN,
	PMIC_BUCK_VSRAM_PROC_VSLEEP_EN = MT6351_PMIC_BUCK_VSRAM_PROC_VSLEEP_EN,
	PMIC_BUCK_VSRAM_PROC_R2R_PDN = MT6351_PMIC_BUCK_VSRAM_PROC_R2R_PDN,
	PMIC_BUCK_VSRAM_PROC_VSLEEP_SEL =
	    MT6351_PMIC_BUCK_VSRAM_PROC_VSLEEP_SEL,
	PMIC_DA_NI_VSRAM_PROC_R2R_PDN = MT6351_PMIC_DA_NI_VSRAM_PROC_R2R_PDN,
	PMIC_DA_NI_VSRAM_PROC_VSLEEP_SEL =
	    MT6351_PMIC_DA_NI_VSRAM_PROC_VSLEEP_SEL,
	PMIC_BUCK_K_RST_DONE = MT6351_PMIC_BUCK_K_RST_DONE,
	PMIC_BUCK_K_MAP_SEL = MT6351_PMIC_BUCK_K_MAP_SEL,
	PMIC_BUCK_K_ONCE_EN = MT6351_PMIC_BUCK_K_ONCE_EN,
	PMIC_BUCK_K_ONCE = MT6351_PMIC_BUCK_K_ONCE,
	PMIC_BUCK_K_START_MANUAL = MT6351_PMIC_BUCK_K_START_MANUAL,
	PMIC_BUCK_K_SRC_SEL = MT6351_PMIC_BUCK_K_SRC_SEL,
	PMIC_BUCK_K_AUTO_EN = MT6351_PMIC_BUCK_K_AUTO_EN,
	PMIC_BUCK_K_INV = MT6351_PMIC_BUCK_K_INV,
	PMIC_BUCK_K_CONTROL_SMPS = MT6351_PMIC_BUCK_K_CONTROL_SMPS,
	PMIC_K_RESULT = MT6351_PMIC_K_RESULT,
	PMIC_K_DONE = MT6351_PMIC_K_DONE,
	PMIC_K_CONTROL = MT6351_PMIC_K_CONTROL,
	PMIC_DA_QI_SMPS_OSC_CAL = MT6351_PMIC_DA_QI_SMPS_OSC_CAL,
	PMIC_BUCK_K_BUCK_CK_CNT = MT6351_PMIC_BUCK_K_BUCK_CK_CNT,
	PMIC_WDTDBG_CLR = MT6351_PMIC_WDTDBG_CLR,
	PMIC_WDTDBG_CON0_RSV0 = MT6351_PMIC_WDTDBG_CON0_RSV0,
	PMIC_VGPU_VOSEL_WDTDBG = MT6351_PMIC_VGPU_VOSEL_WDTDBG,
	PMIC_VCORE_VOSEL_WDTDBG = MT6351_PMIC_VCORE_VOSEL_WDTDBG,
	PMIC_VMD1_VOSEL_WDTDBG = MT6351_PMIC_VMD1_VOSEL_WDTDBG,
	PMIC_VMODEM_VOSEL_WDTDBG = MT6351_PMIC_VMODEM_VOSEL_WDTDBG,
	PMIC_VSRAM_PROC_VOSEL_WDTDBG = MT6351_PMIC_VSRAM_PROC_VOSEL_WDTDBG,
	PMIC_VSRAM_MD_VOSEL_WDTDBG = MT6351_PMIC_VSRAM_MD_VOSEL_WDTDBG,
	PMIC_RG_AUDZCDENABLE = MT6351_PMIC_RG_AUDZCDENABLE,
	PMIC_RG_AUDZCDGAINSTEPTIME = MT6351_PMIC_RG_AUDZCDGAINSTEPTIME,
	PMIC_RG_AUDZCDGAINSTEPSIZE = MT6351_PMIC_RG_AUDZCDGAINSTEPSIZE,
	PMIC_RG_AUDZCDTIMEOUTMODESEL = MT6351_PMIC_RG_AUDZCDTIMEOUTMODESEL,
	PMIC_RG_AUDZCDCLKSEL_VAUDP15 = MT6351_PMIC_RG_AUDZCDCLKSEL_VAUDP15,
	PMIC_RG_AUDZCDMUXSEL_VAUDP15 = MT6351_PMIC_RG_AUDZCDMUXSEL_VAUDP15,
	PMIC_RG_AUDLOLGAIN = MT6351_PMIC_RG_AUDLOLGAIN,
	PMIC_RG_AUDLORGAIN = MT6351_PMIC_RG_AUDLORGAIN,
	PMIC_RG_AUDHPLGAIN = MT6351_PMIC_RG_AUDHPLGAIN,
	PMIC_RG_AUDHPRGAIN = MT6351_PMIC_RG_AUDHPRGAIN,
	PMIC_RG_AUDHSGAIN = MT6351_PMIC_RG_AUDHSGAIN,
	PMIC_RG_AUDIVLGAIN = MT6351_PMIC_RG_AUDIVLGAIN,
	PMIC_RG_AUDIVRGAIN = MT6351_PMIC_RG_AUDIVRGAIN,
	PMIC_RG_AUDINTGAIN1 = MT6351_PMIC_RG_AUDINTGAIN1,
	PMIC_RG_AUDINTGAIN2 = MT6351_PMIC_RG_AUDINTGAIN2,
	PMIC_RG_A_TRIM_EN = MT6351_PMIC_RG_A_TRIM_EN,
	PMIC_RG_A_TRIM_SEL = MT6351_PMIC_RG_A_TRIM_SEL,
	PMIC_RG_A_ISINKS_RSV = MT6351_PMIC_RG_A_ISINKS_RSV,
	PMIC_RG_B_TRIM_EN = MT6351_PMIC_RG_B_TRIM_EN,
	PMIC_RG_B_TRIM_SEL = MT6351_PMIC_RG_B_TRIM_SEL,
	PMIC_RG_B_ISINKS_RSV = MT6351_PMIC_RG_B_ISINKS_RSV,
	PMIC_ISINK_DIM0_FSEL = MT6351_PMIC_ISINK_DIM0_FSEL,
	PMIC_ISINK0_RSV1 = MT6351_PMIC_ISINK0_RSV1,
	PMIC_ISINK0_RSV0 = MT6351_PMIC_ISINK0_RSV0,
	PMIC_ISINK_DIM0_DUTY = MT6351_PMIC_ISINK_DIM0_DUTY,
	PMIC_ISINK_CH0_STEP = MT6351_PMIC_ISINK_CH0_STEP,
	PMIC_ISINK_BREATH0_TF2_SEL = MT6351_PMIC_ISINK_BREATH0_TF2_SEL,
	PMIC_ISINK_BREATH0_TF1_SEL = MT6351_PMIC_ISINK_BREATH0_TF1_SEL,
	PMIC_ISINK_BREATH0_TR2_SEL = MT6351_PMIC_ISINK_BREATH0_TR2_SEL,
	PMIC_ISINK_BREATH0_TR1_SEL = MT6351_PMIC_ISINK_BREATH0_TR1_SEL,
	PMIC_ISINK_BREATH0_TOFF_SEL = MT6351_PMIC_ISINK_BREATH0_TOFF_SEL,
	PMIC_ISINK_BREATH0_TON_SEL = MT6351_PMIC_ISINK_BREATH0_TON_SEL,
	PMIC_ISINK_DIM1_FSEL = MT6351_PMIC_ISINK_DIM1_FSEL,
	PMIC_ISINK1_RSV1 = MT6351_PMIC_ISINK1_RSV1,
	PMIC_ISINK1_RSV0 = MT6351_PMIC_ISINK1_RSV0,
	PMIC_ISINK_DIM1_DUTY = MT6351_PMIC_ISINK_DIM1_DUTY,
	PMIC_ISINK_CH1_STEP = MT6351_PMIC_ISINK_CH1_STEP,
	PMIC_ISINK_BREATH1_TF2_SEL = MT6351_PMIC_ISINK_BREATH1_TF2_SEL,
	PMIC_ISINK_BREATH1_TF1_SEL = MT6351_PMIC_ISINK_BREATH1_TF1_SEL,
	PMIC_ISINK_BREATH1_TR2_SEL = MT6351_PMIC_ISINK_BREATH1_TR2_SEL,
	PMIC_ISINK_BREATH1_TR1_SEL = MT6351_PMIC_ISINK_BREATH1_TR1_SEL,
	PMIC_ISINK_BREATH1_TOFF_SEL = MT6351_PMIC_ISINK_BREATH1_TOFF_SEL,
	PMIC_ISINK_BREATH1_TON_SEL = MT6351_PMIC_ISINK_BREATH1_TON_SEL,
	PMIC_ISINK_DIM4_FSEL = MT6351_PMIC_ISINK_DIM4_FSEL,
	PMIC_ISINK4_RSV1 = MT6351_PMIC_ISINK4_RSV1,
	PMIC_ISINK4_RSV0 = MT6351_PMIC_ISINK4_RSV0,
	PMIC_ISINK_DIM4_DUTY = MT6351_PMIC_ISINK_DIM4_DUTY,
	PMIC_ISINK_CH4_STEP = MT6351_PMIC_ISINK_CH4_STEP,
	PMIC_ISINK_BREATH4_TF2_SEL = MT6351_PMIC_ISINK_BREATH4_TF2_SEL,
	PMIC_ISINK_BREATH4_TF1_SEL = MT6351_PMIC_ISINK_BREATH4_TF1_SEL,
	PMIC_ISINK_BREATH4_TR2_SEL = MT6351_PMIC_ISINK_BREATH4_TR2_SEL,
	PMIC_ISINK_BREATH4_TR1_SEL = MT6351_PMIC_ISINK_BREATH4_TR1_SEL,
	PMIC_ISINK_BREATH4_TOFF_SEL = MT6351_PMIC_ISINK_BREATH4_TOFF_SEL,
	PMIC_ISINK_BREATH4_TON_SEL = MT6351_PMIC_ISINK_BREATH4_TON_SEL,
	PMIC_ISINK_DIM5_FSEL = MT6351_PMIC_ISINK_DIM5_FSEL,
	PMIC_ISINK5_RSV1 = MT6351_PMIC_ISINK5_RSV1,
	PMIC_ISINK5_RSV0 = MT6351_PMIC_ISINK5_RSV0,
	PMIC_ISINK_DIM5_DUTY = MT6351_PMIC_ISINK_DIM5_DUTY,
	PMIC_ISINK_CH5_STEP = MT6351_PMIC_ISINK_CH5_STEP,
	PMIC_ISINK_BREATH5_TF2_SEL = MT6351_PMIC_ISINK_BREATH5_TF2_SEL,
	PMIC_ISINK_BREATH5_TF1_SEL = MT6351_PMIC_ISINK_BREATH5_TF1_SEL,
	PMIC_ISINK_BREATH5_TR2_SEL = MT6351_PMIC_ISINK_BREATH5_TR2_SEL,
	PMIC_ISINK_BREATH5_TR1_SEL = MT6351_PMIC_ISINK_BREATH5_TR1_SEL,
	PMIC_ISINK_BREATH5_TOFF_SEL = MT6351_PMIC_ISINK_BREATH5_TOFF_SEL,
	PMIC_ISINK_BREATH5_TON_SEL = MT6351_PMIC_ISINK_BREATH5_TON_SEL,
	PMIC_AD_NI_B_ISINK1_STATUS = MT6351_PMIC_AD_NI_B_ISINK1_STATUS,
	PMIC_AD_NI_B_ISINK0_STATUS = MT6351_PMIC_AD_NI_B_ISINK0_STATUS,
	PMIC_AD_NI_A_ISINK1_STATUS = MT6351_PMIC_AD_NI_A_ISINK1_STATUS,
	PMIC_AD_NI_A_ISINK0_STATUS = MT6351_PMIC_AD_NI_A_ISINK0_STATUS,
	PMIC_ISINK_PHASE0_DLY_EN = MT6351_PMIC_ISINK_PHASE0_DLY_EN,
	PMIC_ISINK_PHASE1_DLY_EN = MT6351_PMIC_ISINK_PHASE1_DLY_EN,
	PMIC_ISINK_PHASE4_DLY_EN = MT6351_PMIC_ISINK_PHASE4_DLY_EN,
	PMIC_ISINK_PHASE5_DLY_EN = MT6351_PMIC_ISINK_PHASE5_DLY_EN,
	PMIC_ISINK_PHASE_DLY_TC = MT6351_PMIC_ISINK_PHASE_DLY_TC,
	PMIC_ISINK_CHOP0_SW = MT6351_PMIC_ISINK_CHOP0_SW,
	PMIC_ISINK_CHOP1_SW = MT6351_PMIC_ISINK_CHOP1_SW,
	PMIC_ISINK_CHOP4_SW = MT6351_PMIC_ISINK_CHOP4_SW,
	PMIC_ISINK_CHOP5_SW = MT6351_PMIC_ISINK_CHOP5_SW,
	PMIC_ISINK_SFSTR5_EN = MT6351_PMIC_ISINK_SFSTR5_EN,
	PMIC_ISINK_SFSTR5_TC = MT6351_PMIC_ISINK_SFSTR5_TC,
	PMIC_ISINK_SFSTR4_EN = MT6351_PMIC_ISINK_SFSTR4_EN,
	PMIC_ISINK_SFSTR4_TC = MT6351_PMIC_ISINK_SFSTR4_TC,
	PMIC_ISINK_SFSTR1_EN = MT6351_PMIC_ISINK_SFSTR1_EN,
	PMIC_ISINK_SFSTR1_TC = MT6351_PMIC_ISINK_SFSTR1_TC,
	PMIC_ISINK_SFSTR0_EN = MT6351_PMIC_ISINK_SFSTR0_EN,
	PMIC_ISINK_SFSTR0_TC = MT6351_PMIC_ISINK_SFSTR0_TC,
	PMIC_ISINK_CH0_EN = MT6351_PMIC_ISINK_CH0_EN,
	PMIC_ISINK_CH1_EN = MT6351_PMIC_ISINK_CH1_EN,
	PMIC_ISINK_CH4_EN = MT6351_PMIC_ISINK_CH4_EN,
	PMIC_ISINK_CH5_EN = MT6351_PMIC_ISINK_CH5_EN,
	PMIC_ISINK_CHOP0_EN = MT6351_PMIC_ISINK_CHOP0_EN,
	PMIC_ISINK_CHOP1_EN = MT6351_PMIC_ISINK_CHOP1_EN,
	PMIC_ISINK_CHOP4_EN = MT6351_PMIC_ISINK_CHOP4_EN,
	PMIC_ISINK_CHOP5_EN = MT6351_PMIC_ISINK_CHOP5_EN,
	PMIC_ISINK_CH0_BIAS_EN = MT6351_PMIC_ISINK_CH0_BIAS_EN,
	PMIC_ISINK_CH1_BIAS_EN = MT6351_PMIC_ISINK_CH1_BIAS_EN,
	PMIC_ISINK_CH4_BIAS_EN = MT6351_PMIC_ISINK_CH4_BIAS_EN,
	PMIC_ISINK_CH5_BIAS_EN = MT6351_PMIC_ISINK_CH5_BIAS_EN,
	PMIC_ISINK_RSV = MT6351_PMIC_ISINK_RSV,
	PMIC_ISINK_CH5_MODE = MT6351_PMIC_ISINK_CH5_MODE,
	PMIC_ISINK_CH4_MODE = MT6351_PMIC_ISINK_CH4_MODE,
	PMIC_ISINK_CH1_MODE = MT6351_PMIC_ISINK_CH1_MODE,
	PMIC_ISINK_CH0_MODE = MT6351_PMIC_ISINK_CH0_MODE,
	PMIC_DA_QI_A_ISINKS_CH0_STEP = MT6351_PMIC_DA_QI_A_ISINKS_CH0_STEP,
	PMIC_DA_QI_A_ISINKS_CH1_STEP = MT6351_PMIC_DA_QI_A_ISINKS_CH1_STEP,
	PMIC_DA_QI_B_ISINKS_CH0_STEP = MT6351_PMIC_DA_QI_B_ISINKS_CH0_STEP,
	PMIC_DA_QI_B_ISINKS_CH1_STEP = MT6351_PMIC_DA_QI_B_ISINKS_CH1_STEP,
	PMIC_ISINK2_RSV1 = MT6351_PMIC_ISINK2_RSV1,
	PMIC_ISINK2_RSV0 = MT6351_PMIC_ISINK2_RSV0,
	PMIC_ISINK_CH2_STEP = MT6351_PMIC_ISINK_CH2_STEP,
	PMIC_ISINK3_RSV1 = MT6351_PMIC_ISINK3_RSV1,
	PMIC_ISINK3_RSV0 = MT6351_PMIC_ISINK3_RSV0,
	PMIC_ISINK_CH3_STEP = MT6351_PMIC_ISINK_CH3_STEP,
	PMIC_ISINK6_RSV1 = MT6351_PMIC_ISINK6_RSV1,
	PMIC_ISINK6_RSV0 = MT6351_PMIC_ISINK6_RSV0,
	PMIC_ISINK_CH6_STEP = MT6351_PMIC_ISINK_CH6_STEP,
	PMIC_ISINK7_RSV1 = MT6351_PMIC_ISINK7_RSV1,
	PMIC_ISINK7_RSV0 = MT6351_PMIC_ISINK7_RSV0,
	PMIC_ISINK_CH7_STEP = MT6351_PMIC_ISINK_CH7_STEP,
	PMIC_AD_NI_B_ISINK3_STATUS = MT6351_PMIC_AD_NI_B_ISINK3_STATUS,
	PMIC_AD_NI_B_ISINK2_STATUS = MT6351_PMIC_AD_NI_B_ISINK2_STATUS,
	PMIC_AD_NI_A_ISINK3_STATUS = MT6351_PMIC_AD_NI_A_ISINK3_STATUS,
	PMIC_AD_NI_A_ISINK2_STATUS = MT6351_PMIC_AD_NI_A_ISINK2_STATUS,
	PMIC_ISINK_CHOP7_SW = MT6351_PMIC_ISINK_CHOP7_SW,
	PMIC_ISINK_CHOP6_SW = MT6351_PMIC_ISINK_CHOP6_SW,
	PMIC_ISINK_CHOP3_SW = MT6351_PMIC_ISINK_CHOP3_SW,
	PMIC_ISINK_CHOP2_SW = MT6351_PMIC_ISINK_CHOP2_SW,
	PMIC_ISINK_CH7_EN = MT6351_PMIC_ISINK_CH7_EN,
	PMIC_ISINK_CH6_EN = MT6351_PMIC_ISINK_CH6_EN,
	PMIC_ISINK_CH3_EN = MT6351_PMIC_ISINK_CH3_EN,
	PMIC_ISINK_CH2_EN = MT6351_PMIC_ISINK_CH2_EN,
	PMIC_ISINK_CHOP7_EN = MT6351_PMIC_ISINK_CHOP7_EN,
	PMIC_ISINK_CHOP6_EN = MT6351_PMIC_ISINK_CHOP6_EN,
	PMIC_ISINK_CHOP3_EN = MT6351_PMIC_ISINK_CHOP3_EN,
	PMIC_ISINK_CHOP2_EN = MT6351_PMIC_ISINK_CHOP2_EN,
	PMIC_ISINK_CH7_BIAS_EN = MT6351_PMIC_ISINK_CH7_BIAS_EN,
	PMIC_ISINK_CH6_BIAS_EN = MT6351_PMIC_ISINK_CH6_BIAS_EN,
	PMIC_ISINK_CH3_BIAS_EN = MT6351_PMIC_ISINK_CH3_BIAS_EN,
	PMIC_ISINK_CH2_BIAS_EN = MT6351_PMIC_ISINK_CH2_BIAS_EN,
	PMIC_CHRIND_DIM_FSEL = MT6351_PMIC_CHRIND_DIM_FSEL,
	PMIC_CHRIND_RSV1 = MT6351_PMIC_CHRIND_RSV1,
	PMIC_CHRIND_RSV0 = MT6351_PMIC_CHRIND_RSV0,
	PMIC_CHRIND_DIM_DUTY = MT6351_PMIC_CHRIND_DIM_DUTY,
	PMIC_CHRIND_STEP = MT6351_PMIC_CHRIND_STEP,
	PMIC_CHRIND_BREATH_TF2_SEL = MT6351_PMIC_CHRIND_BREATH_TF2_SEL,
	PMIC_CHRIND_BREATH_TF1_SEL = MT6351_PMIC_CHRIND_BREATH_TF1_SEL,
	PMIC_CHRIND_BREATH_TR2_SEL = MT6351_PMIC_CHRIND_BREATH_TR2_SEL,
	PMIC_CHRIND_BREATH_TR1_SEL = MT6351_PMIC_CHRIND_BREATH_TR1_SEL,
	PMIC_CHRIND_BREATH_TOFF_SEL = MT6351_PMIC_CHRIND_BREATH_TOFF_SEL,
	PMIC_CHRIND_BREATH_TON_SEL = MT6351_PMIC_CHRIND_BREATH_TON_SEL,
	PMIC_CHRIND_SFSTR_EN = MT6351_PMIC_CHRIND_SFSTR_EN,
	PMIC_CHRIND_SFSTR_TC = MT6351_PMIC_CHRIND_SFSTR_TC,
	PMIC_CHRIND_EN_SEL = MT6351_PMIC_CHRIND_EN_SEL,
	PMIC_CHRIND_EN = MT6351_PMIC_CHRIND_EN,
	PMIC_CHRIND_CHOP_EN = MT6351_PMIC_CHRIND_CHOP_EN,
	PMIC_CHRIND_MODE = MT6351_PMIC_CHRIND_MODE,
	PMIC_CHRIND_CHOP_SW = MT6351_PMIC_CHRIND_CHOP_SW,
	PMIC_CHRIND_BIAS_EN = MT6351_PMIC_CHRIND_BIAS_EN,
	PMIC_RG_VA18_MODE_SET = MT6351_PMIC_RG_VA18_MODE_SET,
	PMIC_RG_VA18_EN = MT6351_PMIC_RG_VA18_EN,
	PMIC_RG_VA18_MODE_CTRL = MT6351_PMIC_RG_VA18_MODE_CTRL,
	PMIC_RG_VA18_ON_CTRL = MT6351_PMIC_RG_VA18_ON_CTRL,
	PMIC_RG_VA18_SRCLK_MODE_SEL = MT6351_PMIC_RG_VA18_SRCLK_MODE_SEL,
	PMIC_DA_QI_VA18_MODE = MT6351_PMIC_DA_QI_VA18_MODE,
	PMIC_RG_VA18_STBTD = MT6351_PMIC_RG_VA18_STBTD,
	PMIC_RG_VA18_SRCLK_EN_SEL = MT6351_PMIC_RG_VA18_SRCLK_EN_SEL,
	PMIC_DA_QI_VA18_STB = MT6351_PMIC_DA_QI_VA18_STB,
	PMIC_DA_QI_VA18_EN = MT6351_PMIC_DA_QI_VA18_EN,
	PMIC_RG_VA18_AUXADC_PWDB_EN = MT6351_PMIC_RG_VA18_AUXADC_PWDB_EN,
	PMIC_RG_VA18_OCFB_EN = MT6351_PMIC_RG_VA18_OCFB_EN,
	PMIC_DA_QI_VA18_OCFB_EN = MT6351_PMIC_DA_QI_VA18_OCFB_EN,
	PMIC_RG_VTCXO24_MODE_SET = MT6351_PMIC_RG_VTCXO24_MODE_SET,
	PMIC_RG_VTCXO24_EN = MT6351_PMIC_RG_VTCXO24_EN,
	PMIC_RG_VTCXO24_MODE_CTRL = MT6351_PMIC_RG_VTCXO24_MODE_CTRL,
	PMIC_RG_VTCXO24_ON_CTRL = MT6351_PMIC_RG_VTCXO24_ON_CTRL,
	PMIC_RG_VTCXO24_SWITCH = MT6351_PMIC_RG_VTCXO24_SWITCH,
	PMIC_RG_VTCXO24_SRCLK_MODE_SEL = MT6351_PMIC_RG_VTCXO24_SRCLK_MODE_SEL,
	PMIC_DA_QI_VTCXO24_MODE = MT6351_PMIC_DA_QI_VTCXO24_MODE,
	PMIC_RG_VTCXO24_STBTD = MT6351_PMIC_RG_VTCXO24_STBTD,
	PMIC_RG_VTCXO24_SRCLK_EN_SEL = MT6351_PMIC_RG_VTCXO24_SRCLK_EN_SEL,
	PMIC_DA_QI_VTCXO24_STB = MT6351_PMIC_DA_QI_VTCXO24_STB,
	PMIC_DA_QI_VTCXO24_EN = MT6351_PMIC_DA_QI_VTCXO24_EN,
	PMIC_RG_VTCXO24_OCFB_EN = MT6351_PMIC_RG_VTCXO24_OCFB_EN,
	PMIC_DA_QI_VTCXO24_OCFB_EN = MT6351_PMIC_DA_QI_VTCXO24_OCFB_EN,
	PMIC_RG_VTCXO28_MODE_SET = MT6351_PMIC_RG_VTCXO28_MODE_SET,
	PMIC_RG_VTCXO28_EN = MT6351_PMIC_RG_VTCXO28_EN,
	PMIC_RG_VTCXO28_MODE_CTRL = MT6351_PMIC_RG_VTCXO28_MODE_CTRL,
	PMIC_RG_VTCXO28_ON_CTRL = MT6351_PMIC_RG_VTCXO28_ON_CTRL,
	PMIC_RG_VTCXO28_SRCLK_MODE_SEL = MT6351_PMIC_RG_VTCXO28_SRCLK_MODE_SEL,
	PMIC_DA_QI_VTCXO28_MODE = MT6351_PMIC_DA_QI_VTCXO28_MODE,
	PMIC_RG_VTCXO28_STBTD = MT6351_PMIC_RG_VTCXO28_STBTD,
	PMIC_RG_VTCXO28_SRCLK_EN_SEL = MT6351_PMIC_RG_VTCXO28_SRCLK_EN_SEL,
	PMIC_DA_QI_VTCXO28_STB = MT6351_PMIC_DA_QI_VTCXO28_STB,
	PMIC_DA_QI_VTCXO28_EN = MT6351_PMIC_DA_QI_VTCXO28_EN,
	PMIC_RG_VTCXO28_OCFB_EN = MT6351_PMIC_RG_VTCXO28_OCFB_EN,
	PMIC_DA_QI_VTCXO28_OCFB_EN = MT6351_PMIC_DA_QI_VTCXO28_OCFB_EN,
	PMIC_RG_VCN28_MODE_SET = MT6351_PMIC_RG_VCN28_MODE_SET,
	PMIC_RG_VCN28_EN = MT6351_PMIC_RG_VCN28_EN,
	PMIC_RG_VCN28_MODE_CTRL = MT6351_PMIC_RG_VCN28_MODE_CTRL,
	PMIC_RG_VCN28_ON_CTRL = MT6351_PMIC_RG_VCN28_ON_CTRL,
	PMIC_RG_VCN28_SRCLK_MODE_SEL = MT6351_PMIC_RG_VCN28_SRCLK_MODE_SEL,
	PMIC_DA_QI_VCN28_MODE = MT6351_PMIC_DA_QI_VCN28_MODE,
	PMIC_RG_VCN28_STBTD = MT6351_PMIC_RG_VCN28_STBTD,
	PMIC_RG_VCN28_SRCLK_EN_SEL = MT6351_PMIC_RG_VCN28_SRCLK_EN_SEL,
	PMIC_DA_QI_VCN28_STB = MT6351_PMIC_DA_QI_VCN28_STB,
	PMIC_DA_QI_VCN28_EN = MT6351_PMIC_DA_QI_VCN28_EN,
	PMIC_RG_VCN28_OCFB_EN = MT6351_PMIC_RG_VCN28_OCFB_EN,
	PMIC_DA_QI_VCN28_OCFB_EN = MT6351_PMIC_DA_QI_VCN28_OCFB_EN,
	PMIC_RG_VCN28_DUMMY_LOAD_EN = MT6351_PMIC_RG_VCN28_DUMMY_LOAD_EN,
	PMIC_RG_VCN28_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VCN28_DUMMY_LOAD_CTRL,
	PMIC_RG_VCN28_DUMMY_LOAD = MT6351_PMIC_RG_VCN28_DUMMY_LOAD,
	PMIC_RG_VCN28_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VCN28_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VCN28_DUMMY_LOAD = MT6351_PMIC_DA_QI_VCN28_DUMMY_LOAD,
	PMIC_RG_VCAMA_EN = MT6351_PMIC_RG_VCAMA_EN,
	PMIC_RG_VCAMA_ON_CTRL = MT6351_PMIC_RG_VCAMA_ON_CTRL,
	PMIC_RG_VCAMA_SRCLK_MODE_SEL = MT6351_PMIC_RG_VCAMA_SRCLK_MODE_SEL,
	PMIC_DA_QI_VCAMA_MODE = MT6351_PMIC_DA_QI_VCAMA_MODE,
	PMIC_RG_VCAMA_STBTD = MT6351_PMIC_RG_VCAMA_STBTD,
	PMIC_RG_VCAMA_SRCLK_EN_SEL = MT6351_PMIC_RG_VCAMA_SRCLK_EN_SEL,
	PMIC_DA_QI_VCAMA_STB = MT6351_PMIC_DA_QI_VCAMA_STB,
	PMIC_DA_QI_VCAMA_EN = MT6351_PMIC_DA_QI_VCAMA_EN,
	PMIC_RG_VCAMA_OCFB_EN = MT6351_PMIC_RG_VCAMA_OCFB_EN,
	PMIC_DA_QI_VCAMA_OCFB_EN = MT6351_PMIC_DA_QI_VCAMA_OCFB_EN,
	PMIC_RG_VUSB33_MODE_SET = MT6351_PMIC_RG_VUSB33_MODE_SET,
	PMIC_RG_VUSB33_EN = MT6351_PMIC_RG_VUSB33_EN,
	PMIC_RG_VUSB33_MODE_CTRL = MT6351_PMIC_RG_VUSB33_MODE_CTRL,
	PMIC_RG_VUSB33_ON_CTRL = MT6351_PMIC_RG_VUSB33_ON_CTRL,
	PMIC_RG_VUSB33_SRCLK_MODE_SEL = MT6351_PMIC_RG_VUSB33_SRCLK_MODE_SEL,
	PMIC_DA_QI_VUSB33_MODE = MT6351_PMIC_DA_QI_VUSB33_MODE,
	PMIC_RG_VUSB33_STBTD = MT6351_PMIC_RG_VUSB33_STBTD,
	PMIC_RG_VUSB33_SRCLK_EN_SEL = MT6351_PMIC_RG_VUSB33_SRCLK_EN_SEL,
	PMIC_DA_QI_VUSB33_STB = MT6351_PMIC_DA_QI_VUSB33_STB,
	PMIC_DA_QI_VUSB33_EN = MT6351_PMIC_DA_QI_VUSB33_EN,
	PMIC_RG_VUSB33_OCFB_EN = MT6351_PMIC_RG_VUSB33_OCFB_EN,
	PMIC_DA_QI_VUSB33_OCFB_EN = MT6351_PMIC_DA_QI_VUSB33_OCFB_EN,
	PMIC_RG_VUSB33_DUMMY_LOAD_EN = MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_EN,
	PMIC_RG_VUSB33_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_CTRL,
	PMIC_RG_VUSB33_DUMMY_LOAD = MT6351_PMIC_RG_VUSB33_DUMMY_LOAD,
	PMIC_RG_VUSB33_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VUSB33_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VUSB33_DUMMY_LOAD = MT6351_PMIC_DA_QI_VUSB33_DUMMY_LOAD,
	PMIC_RG_VSIM1_MODE_SET = MT6351_PMIC_RG_VSIM1_MODE_SET,
	PMIC_RG_VSIM1_EN = MT6351_PMIC_RG_VSIM1_EN,
	PMIC_RG_VSIM1_MODE_CTRL = MT6351_PMIC_RG_VSIM1_MODE_CTRL,
	PMIC_RG_VSIM1_ON_CTRL = MT6351_PMIC_RG_VSIM1_ON_CTRL,
	PMIC_RG_VSIM1_SRCLK_MODE_SEL = MT6351_PMIC_RG_VSIM1_SRCLK_MODE_SEL,
	PMIC_DA_QI_VSIM1_MODE = MT6351_PMIC_DA_QI_VSIM1_MODE,
	PMIC_RG_VSIM1_STBTD = MT6351_PMIC_RG_VSIM1_STBTD,
	PMIC_RG_VSIM1_SRCLK_EN_SEL = MT6351_PMIC_RG_VSIM1_SRCLK_EN_SEL,
	PMIC_DA_QI_VSIM1_STB = MT6351_PMIC_DA_QI_VSIM1_STB,
	PMIC_DA_QI_VSIM1_EN = MT6351_PMIC_DA_QI_VSIM1_EN,
	PMIC_RG_VSIM1_OCFB_EN = MT6351_PMIC_RG_VSIM1_OCFB_EN,
	PMIC_DA_QI_VSIM1_OCFB_EN = MT6351_PMIC_DA_QI_VSIM1_OCFB_EN,
	PMIC_RG_VSIM1_DUMMY_LOAD_EN = MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_EN,
	PMIC_RG_VSIM1_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_CTRL,
	PMIC_RG_VSIM1_DUMMY_LOAD = MT6351_PMIC_RG_VSIM1_DUMMY_LOAD,
	PMIC_RG_VSIM1_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VSIM1_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VSIM1_DUMMY_LOAD = MT6351_PMIC_DA_QI_VSIM1_DUMMY_LOAD,
	PMIC_RG_VSIM2_MODE_SET = MT6351_PMIC_RG_VSIM2_MODE_SET,
	PMIC_RG_VSIM2_EN = MT6351_PMIC_RG_VSIM2_EN,
	PMIC_RG_VSIM2_MODE_CTRL = MT6351_PMIC_RG_VSIM2_MODE_CTRL,
	PMIC_RG_VSIM2_ON_CTRL = MT6351_PMIC_RG_VSIM2_ON_CTRL,
	PMIC_RG_VSIM2_SRCLK_MODE_SEL = MT6351_PMIC_RG_VSIM2_SRCLK_MODE_SEL,
	PMIC_DA_QI_VSIM2_MODE = MT6351_PMIC_DA_QI_VSIM2_MODE,
	PMIC_RG_VSIM2_STBTD = MT6351_PMIC_RG_VSIM2_STBTD,
	PMIC_RG_VSIM2_SRCLK_EN_SEL = MT6351_PMIC_RG_VSIM2_SRCLK_EN_SEL,
	PMIC_DA_QI_VSIM2_STB = MT6351_PMIC_DA_QI_VSIM2_STB,
	PMIC_DA_QI_VSIM2_EN = MT6351_PMIC_DA_QI_VSIM2_EN,
	PMIC_RG_VSIM2_OCFB_EN = MT6351_PMIC_RG_VSIM2_OCFB_EN,
	PMIC_DA_QI_VSIM2_OCFB_EN = MT6351_PMIC_DA_QI_VSIM2_OCFB_EN,
	PMIC_RG_VSIM2_DUMMY_LOAD_EN = MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_EN,
	PMIC_RG_VSIM2_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_CTRL,
	PMIC_RG_VSIM2_DUMMY_LOAD = MT6351_PMIC_RG_VSIM2_DUMMY_LOAD,
	PMIC_RG_VSIM2_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VSIM2_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VSIM2_DUMMY_LOAD = MT6351_PMIC_DA_QI_VSIM2_DUMMY_LOAD,
	PMIC_RG_VEMC_MODE_SET = MT6351_PMIC_RG_VEMC_MODE_SET,
	PMIC_RG_VEMC_EN = MT6351_PMIC_RG_VEMC_EN,
	PMIC_RG_VEMC_MODE_CTRL = MT6351_PMIC_RG_VEMC_MODE_CTRL,
	PMIC_RG_VEMC_ON_CTRL = MT6351_PMIC_RG_VEMC_ON_CTRL,
	PMIC_RG_VEMC_SRCLK_MODE_SEL = MT6351_PMIC_RG_VEMC_SRCLK_MODE_SEL,
	PMIC_DA_QI_VEMC_MODE = MT6351_PMIC_DA_QI_VEMC_MODE,
	PMIC_RG_VEMC_STBTD = MT6351_PMIC_RG_VEMC_STBTD,
	PMIC_RG_VEMC_SRCLK_EN_SEL = MT6351_PMIC_RG_VEMC_SRCLK_EN_SEL,
	PMIC_DA_QI_VEMC_STB = MT6351_PMIC_DA_QI_VEMC_STB,
	PMIC_DA_QI_VEMC_EN = MT6351_PMIC_DA_QI_VEMC_EN,
	PMIC_RG_VEMC_OCFB_EN = MT6351_PMIC_RG_VEMC_OCFB_EN,
	PMIC_DA_QI_VEMC_OCFB_EN = MT6351_PMIC_DA_QI_VEMC_OCFB_EN,
	PMIC_RG_VEMC_DUMMY_LOAD_EN = MT6351_PMIC_RG_VEMC_DUMMY_LOAD_EN,
	PMIC_RG_VEMC_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VEMC_DUMMY_LOAD_CTRL,
	PMIC_RG_VEMC_DUMMY_LOAD = MT6351_PMIC_RG_VEMC_DUMMY_LOAD,
	PMIC_RG_VEMC_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VEMC_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VEMC_DUMMY_LOAD = MT6351_PMIC_DA_QI_VEMC_DUMMY_LOAD,
	PMIC_RG_VMCH_MODE_SET = MT6351_PMIC_RG_VMCH_MODE_SET,
	PMIC_RG_VMCH_EN = MT6351_PMIC_RG_VMCH_EN,
	PMIC_RG_VMCH_MODE_CTRL = MT6351_PMIC_RG_VMCH_MODE_CTRL,
	PMIC_RG_VMCH_ON_CTRL = MT6351_PMIC_RG_VMCH_ON_CTRL,
	PMIC_RG_VMCH_SRCLK_MODE_SEL = MT6351_PMIC_RG_VMCH_SRCLK_MODE_SEL,
	PMIC_DA_QI_VMCH_MODE = MT6351_PMIC_DA_QI_VMCH_MODE,
	PMIC_RG_VMCH_STBTD = MT6351_PMIC_RG_VMCH_STBTD,
	PMIC_RG_VMCH_SRCLK_EN_SEL = MT6351_PMIC_RG_VMCH_SRCLK_EN_SEL,
	PMIC_DA_QI_VMCH_STB = MT6351_PMIC_DA_QI_VMCH_STB,
	PMIC_DA_QI_VMCH_EN = MT6351_PMIC_DA_QI_VMCH_EN,
	PMIC_RG_VMCH_OCFB_EN = MT6351_PMIC_RG_VMCH_OCFB_EN,
	PMIC_DA_QI_VMCH_OCFB_EN = MT6351_PMIC_DA_QI_VMCH_OCFB_EN,
	PMIC_RG_VMCH_DUMMY_LOAD_EN = MT6351_PMIC_RG_VMCH_DUMMY_LOAD_EN,
	PMIC_RG_VMCH_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VMCH_DUMMY_LOAD_CTRL,
	PMIC_RG_VMCH_DUMMY_LOAD = MT6351_PMIC_RG_VMCH_DUMMY_LOAD,
	PMIC_RG_VMCH_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VMCH_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VMCH_DUMMY_LOAD = MT6351_PMIC_DA_QI_VMCH_DUMMY_LOAD,
	PMIC_RG_VIO28_MODE_SET = MT6351_PMIC_RG_VIO28_MODE_SET,
	PMIC_RG_VIO28_EN = MT6351_PMIC_RG_VIO28_EN,
	PMIC_RG_VIO28_MODE_CTRL = MT6351_PMIC_RG_VIO28_MODE_CTRL,
	PMIC_RG_VIO28_ON_CTRL = MT6351_PMIC_RG_VIO28_ON_CTRL,
	PMIC_RG_VIO28_SRCLK_MODE_SEL = MT6351_PMIC_RG_VIO28_SRCLK_MODE_SEL,
	PMIC_DA_QI_VIO28_MODE = MT6351_PMIC_DA_QI_VIO28_MODE,
	PMIC_RG_VIO28_STBTD = MT6351_PMIC_RG_VIO28_STBTD,
	PMIC_RG_VIO28_SRCLK_EN_SEL = MT6351_PMIC_RG_VIO28_SRCLK_EN_SEL,
	PMIC_DA_QI_VIO28_STB = MT6351_PMIC_DA_QI_VIO28_STB,
	PMIC_DA_QI_VIO28_EN = MT6351_PMIC_DA_QI_VIO28_EN,
	PMIC_RG_VIO28_OCFB_EN = MT6351_PMIC_RG_VIO28_OCFB_EN,
	PMIC_DA_QI_VIO28_OCFB_EN = MT6351_PMIC_DA_QI_VIO28_OCFB_EN,
	PMIC_RG_VIO28_DUMMY_LOAD_EN = MT6351_PMIC_RG_VIO28_DUMMY_LOAD_EN,
	PMIC_RG_VIO28_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VIO28_DUMMY_LOAD_CTRL,
	PMIC_RG_VIO28_DUMMY_LOAD = MT6351_PMIC_RG_VIO28_DUMMY_LOAD,
	PMIC_RG_VIO28_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VIO28_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VIO28_DUMMY_LOAD = MT6351_PMIC_DA_QI_VIO28_DUMMY_LOAD,
	PMIC_RG_VIBR_MODE_SET = MT6351_PMIC_RG_VIBR_MODE_SET,
	PMIC_RG_VIBR_EN = MT6351_PMIC_RG_VIBR_EN,
	PMIC_RG_VIBR_MODE_CTRL = MT6351_PMIC_RG_VIBR_MODE_CTRL,
	PMIC_RG_VIBR_ON_CTRL = MT6351_PMIC_RG_VIBR_ON_CTRL,
	PMIC_RG_VIBR_THER_SDN_EN = MT6351_PMIC_RG_VIBR_THER_SDN_EN,
	PMIC_RG_VIBR_SRCLK_MODE_SEL = MT6351_PMIC_RG_VIBR_SRCLK_MODE_SEL,
	PMIC_DA_QI_VIBR_MODE = MT6351_PMIC_DA_QI_VIBR_MODE,
	PMIC_RG_VIBR_STBTD = MT6351_PMIC_RG_VIBR_STBTD,
	PMIC_RG_VIBR_SRCLK_EN_SEL = MT6351_PMIC_RG_VIBR_SRCLK_EN_SEL,
	PMIC_DA_QI_VIBR_STB = MT6351_PMIC_DA_QI_VIBR_STB,
	PMIC_DA_QI_VIBR_EN = MT6351_PMIC_DA_QI_VIBR_EN,
	PMIC_RG_VIBR_OCFB_EN = MT6351_PMIC_RG_VIBR_OCFB_EN,
	PMIC_DA_QI_VIBR_OCFB_EN = MT6351_PMIC_DA_QI_VIBR_OCFB_EN,
	PMIC_RG_VIBR_DUMMY_LOAD_EN = MT6351_PMIC_RG_VIBR_DUMMY_LOAD_EN,
	PMIC_RG_VIBR_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VIBR_DUMMY_LOAD_CTRL,
	PMIC_RG_VIBR_DUMMY_LOAD = MT6351_PMIC_RG_VIBR_DUMMY_LOAD,
	PMIC_RG_VIBR_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VIBR_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VIBR_DUMMY_LOAD = MT6351_PMIC_DA_QI_VIBR_DUMMY_LOAD,
	PMIC_RG_VCAMD_MODE_SET = MT6351_PMIC_RG_VCAMD_MODE_SET,
	PMIC_RG_VCAMD_EN = MT6351_PMIC_RG_VCAMD_EN,
	PMIC_RG_VCAMD_MODE_CTRL = MT6351_PMIC_RG_VCAMD_MODE_CTRL,
	PMIC_RG_VCAMD_SRCLK_MODE_SEL = MT6351_PMIC_RG_VCAMD_SRCLK_MODE_SEL,
	PMIC_DA_QI_VCAMD_MODE = MT6351_PMIC_DA_QI_VCAMD_MODE,
	PMIC_RG_VCAMD_STBTD = MT6351_PMIC_RG_VCAMD_STBTD,
	PMIC_DA_QI_VCAMD_STB = MT6351_PMIC_DA_QI_VCAMD_STB,
	PMIC_DA_QI_VCAMD_EN = MT6351_PMIC_DA_QI_VCAMD_EN,
	PMIC_RG_VCAMD_OCFB_EN = MT6351_PMIC_RG_VCAMD_OCFB_EN,
	PMIC_DA_QI_VCAMD_OCFB_EN = MT6351_PMIC_DA_QI_VCAMD_OCFB_EN,
	PMIC_RG_VCAMD_DUMMY_LOAD_EN = MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_EN,
	PMIC_RG_VCAMD_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_CTRL,
	PMIC_RG_VCAMD_DUMMY_LOAD = MT6351_PMIC_RG_VCAMD_DUMMY_LOAD,
	PMIC_RG_VCAMD_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VCAMD_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VCAMD_DUMMY_LOAD = MT6351_PMIC_DA_QI_VCAMD_DUMMY_LOAD,
	PMIC_RG_VRF18_MODE_SET = MT6351_PMIC_RG_VRF18_MODE_SET,
	PMIC_RG_VRF18_EN = MT6351_PMIC_RG_VRF18_EN,
	PMIC_RG_VRF18_MODE_CTRL = MT6351_PMIC_RG_VRF18_MODE_CTRL,
	PMIC_RG_VRF18_ON_CTRL = MT6351_PMIC_RG_VRF18_ON_CTRL,
	PMIC_RG_VRF18_SRCLK_MODE_SEL = MT6351_PMIC_RG_VRF18_SRCLK_MODE_SEL,
	PMIC_DA_QI_VRF18_MODE = MT6351_PMIC_DA_QI_VRF18_MODE,
	PMIC_RG_VRF18_STBTD = MT6351_PMIC_RG_VRF18_STBTD,
	PMIC_RG_VRF18_SRCLK_EN_SEL = MT6351_PMIC_RG_VRF18_SRCLK_EN_SEL,
	PMIC_DA_QI_VRF18_STB = MT6351_PMIC_DA_QI_VRF18_STB,
	PMIC_DA_QI_VRF18_EN = MT6351_PMIC_DA_QI_VRF18_EN,
	PMIC_RG_VRF18_OCFB_EN = MT6351_PMIC_RG_VRF18_OCFB_EN,
	PMIC_DA_QI_VRF18_OCFB_EN = MT6351_PMIC_DA_QI_VRF18_OCFB_EN,
	PMIC_RG_VRF18_DUMMY_LOAD_EN = MT6351_PMIC_RG_VRF18_DUMMY_LOAD_EN,
	PMIC_RG_VRF18_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VRF18_DUMMY_LOAD_CTRL,
	PMIC_RG_VRF18_DUMMY_LOAD = MT6351_PMIC_RG_VRF18_DUMMY_LOAD,
	PMIC_RG_VRF18_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VRF18_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VRF18_DUMMY_LOAD = MT6351_PMIC_DA_QI_VRF18_DUMMY_LOAD,
	PMIC_RG_VIO18_MODE_SET = MT6351_PMIC_RG_VIO18_MODE_SET,
	PMIC_RG_VIO18_EN = MT6351_PMIC_RG_VIO18_EN,
	PMIC_RG_VIO18_MODE_CTRL = MT6351_PMIC_RG_VIO18_MODE_CTRL,
	PMIC_RG_VIO18_ON_CTRL = MT6351_PMIC_RG_VIO18_ON_CTRL,
	PMIC_RG_VIO18_SRCLK_MODE_SEL = MT6351_PMIC_RG_VIO18_SRCLK_MODE_SEL,
	PMIC_DA_QI_VIO18_MODE = MT6351_PMIC_DA_QI_VIO18_MODE,
	PMIC_RG_VIO18_STBTD = MT6351_PMIC_RG_VIO18_STBTD,
	PMIC_RG_VIO18_SRCLK_EN_SEL = MT6351_PMIC_RG_VIO18_SRCLK_EN_SEL,
	PMIC_DA_QI_VIO18_STB = MT6351_PMIC_DA_QI_VIO18_STB,
	PMIC_DA_QI_VIO18_EN = MT6351_PMIC_DA_QI_VIO18_EN,
	PMIC_RG_VIO18_OCFB_EN = MT6351_PMIC_RG_VIO18_OCFB_EN,
	PMIC_DA_QI_VIO18_OCFB_EN = MT6351_PMIC_DA_QI_VIO18_OCFB_EN,
	PMIC_RG_VIO18_DUMMY_LOAD_EN = MT6351_PMIC_RG_VIO18_DUMMY_LOAD_EN,
	PMIC_RG_VIO18_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VIO18_DUMMY_LOAD_CTRL,
	PMIC_RG_VIO18_DUMMY_LOAD = MT6351_PMIC_RG_VIO18_DUMMY_LOAD,
	PMIC_RG_VIO18_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VIO18_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VIO18_DUMMY_LOAD = MT6351_PMIC_DA_QI_VIO18_DUMMY_LOAD,
	PMIC_RG_VCN18_MODE_SET = MT6351_PMIC_RG_VCN18_MODE_SET,
	PMIC_RG_VCN18_EN = MT6351_PMIC_RG_VCN18_EN,
	PMIC_RG_VCN18_MODE_CTRL = MT6351_PMIC_RG_VCN18_MODE_CTRL,
	PMIC_RG_VCN18_ON_CTRL = MT6351_PMIC_RG_VCN18_ON_CTRL,
	PMIC_RG_VCN18_SRCLK_MODE_SEL = MT6351_PMIC_RG_VCN18_SRCLK_MODE_SEL,
	PMIC_DA_QI_VCN18_MODE = MT6351_PMIC_DA_QI_VCN18_MODE,
	PMIC_RG_VCN18_STBTD = MT6351_PMIC_RG_VCN18_STBTD,
	PMIC_RG_VCN18_SRCLK_EN_SEL = MT6351_PMIC_RG_VCN18_SRCLK_EN_SEL,
	PMIC_DA_QI_VCN18_STB = MT6351_PMIC_DA_QI_VCN18_STB,
	PMIC_DA_QI_VCN18_EN = MT6351_PMIC_DA_QI_VCN18_EN,
	PMIC_RG_VCN18_OCFB_EN = MT6351_PMIC_RG_VCN18_OCFB_EN,
	PMIC_DA_QI_VCN18_OCFB_EN = MT6351_PMIC_DA_QI_VCN18_OCFB_EN,
	PMIC_RG_VCN18_DUMMY_LOAD_EN = MT6351_PMIC_RG_VCN18_DUMMY_LOAD_EN,
	PMIC_RG_VCN18_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VCN18_DUMMY_LOAD_CTRL,
	PMIC_RG_VCN18_DUMMY_LOAD = MT6351_PMIC_RG_VCN18_DUMMY_LOAD,
	PMIC_RG_VCN18_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VCN18_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VCN18_DUMMY_LOAD = MT6351_PMIC_DA_QI_VCN18_DUMMY_LOAD,
	PMIC_RG_VCAMIO_MODE_SET = MT6351_PMIC_RG_VCAMIO_MODE_SET,
	PMIC_RG_VCAMIO_EN = MT6351_PMIC_RG_VCAMIO_EN,
	PMIC_RG_VCAMIO_MODE_CTRL = MT6351_PMIC_RG_VCAMIO_MODE_CTRL,
	PMIC_RG_VCAMIO_SRCLK_MODE_SEL = MT6351_PMIC_RG_VCAMIO_SRCLK_MODE_SEL,
	PMIC_DA_QI_VCAMIO_MODE = MT6351_PMIC_DA_QI_VCAMIO_MODE,
	PMIC_RG_VCAMIO_STBTD = MT6351_PMIC_RG_VCAMIO_STBTD,
	PMIC_DA_QI_VCAMIO_STB = MT6351_PMIC_DA_QI_VCAMIO_STB,
	PMIC_DA_QI_VCAMIO_EN = MT6351_PMIC_DA_QI_VCAMIO_EN,
	PMIC_RG_VCAMIO_OCFB_EN = MT6351_PMIC_RG_VCAMIO_OCFB_EN,
	PMIC_DA_QI_VCAMIO_OCFB_EN = MT6351_PMIC_DA_QI_VCAMIO_OCFB_EN,
	PMIC_RG_VCAMIO_DUMMY_LOAD_EN = MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_EN,
	PMIC_RG_VCAMIO_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_CTRL,
	PMIC_RG_VCAMIO_DUMMY_LOAD = MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD,
	PMIC_RG_VCAMIO_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VCAMIO_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VCAMIO_DUMMY_LOAD = MT6351_PMIC_DA_QI_VCAMIO_DUMMY_LOAD,
	PMIC_RG_VSRAM_PROC_MODE_SET = MT6351_PMIC_RG_VSRAM_PROC_MODE_SET,
	PMIC_RG_VSRAM_PROC_EN = MT6351_PMIC_RG_VSRAM_PROC_EN,
	PMIC_RG_VSRAM_PROC_MODE_CTRL = MT6351_PMIC_RG_VSRAM_PROC_MODE_CTRL,
	PMIC_RG_VSRAM_PROC_ON_CTRL = MT6351_PMIC_RG_VSRAM_PROC_ON_CTRL,
	PMIC_RG_VSRAM_PROC_SRCLK_MODE_SEL =
	    MT6351_PMIC_RG_VSRAM_PROC_SRCLK_MODE_SEL,
	PMIC_DA_QI_VSRAM_PROC_MODE = MT6351_PMIC_DA_QI_VSRAM_PROC_MODE,
	PMIC_RG_VSRAM_PROC_STBTD = MT6351_PMIC_RG_VSRAM_PROC_STBTD,
	PMIC_RG_VSRAM_PROC_SRCLK_EN_SEL =
	    MT6351_PMIC_RG_VSRAM_PROC_SRCLK_EN_SEL,
	PMIC_DA_QI_VSRAM_PROC_STB = MT6351_PMIC_DA_QI_VSRAM_PROC_STB,
	PMIC_DA_QI_VSRAM_PROC_EN = MT6351_PMIC_DA_QI_VSRAM_PROC_EN,
	PMIC_RG_VSRAM_PROC_OCFB_EN = MT6351_PMIC_RG_VSRAM_PROC_OCFB_EN,
	PMIC_DA_QI_VSRAM_PROC_OCFB_EN = MT6351_PMIC_DA_QI_VSRAM_PROC_OCFB_EN,
	PMIC_RG_VSRAM_PROC_DUMMY_LOAD_EN =
	    MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_EN,
	PMIC_RG_VSRAM_PROC_DUMMY_LOAD_CTRL =
	    MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_CTRL,
	PMIC_RG_VSRAM_PROC_DUMMY_LOAD = MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD,
	PMIC_RG_VSRAM_PROC_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VSRAM_PROC_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VSRAM_PROC_DUMMY_LOAD =
	    MT6351_PMIC_DA_QI_VSRAM_PROC_DUMMY_LOAD,
	PMIC_RG_VXO22_MODE_SET = MT6351_PMIC_RG_VXO22_MODE_SET,
	PMIC_RG_VXO22_EN = MT6351_PMIC_RG_VXO22_EN,
	PMIC_RG_VXO22_MODE_CTRL = MT6351_PMIC_RG_VXO22_MODE_CTRL,
	PMIC_RG_VXO22_ON_CTRL = MT6351_PMIC_RG_VXO22_ON_CTRL,
	PMIC_RG_VXO22_SWITCH = MT6351_PMIC_RG_VXO22_SWITCH,
	PMIC_RG_VXO22_SRCLK_MODE_SEL = MT6351_PMIC_RG_VXO22_SRCLK_MODE_SEL,
	PMIC_DA_QI_VXO22_MODE = MT6351_PMIC_DA_QI_VXO22_MODE,
	PMIC_RG_VXO22_STBTD = MT6351_PMIC_RG_VXO22_STBTD,
	PMIC_RG_VXO22_SRCLK_EN_SEL = MT6351_PMIC_RG_VXO22_SRCLK_EN_SEL,
	PMIC_DA_QI_VXO22_STB = MT6351_PMIC_DA_QI_VXO22_STB,
	PMIC_DA_QI_VXO22_EN = MT6351_PMIC_DA_QI_VXO22_EN,
	PMIC_RG_VXO22_OCFB_EN = MT6351_PMIC_RG_VXO22_OCFB_EN,
	PMIC_DA_QI_VXO22_OCFB_EN = MT6351_PMIC_DA_QI_VXO22_OCFB_EN,
	PMIC_RG_VRF12_MODE_SET = MT6351_PMIC_RG_VRF12_MODE_SET,
	PMIC_RG_VRF12_EN = MT6351_PMIC_RG_VRF12_EN,
	PMIC_RG_VRF12_MODE_CTRL = MT6351_PMIC_RG_VRF12_MODE_CTRL,
	PMIC_RG_VRF12_ON_CTRL = MT6351_PMIC_RG_VRF12_ON_CTRL,
	PMIC_RG_VRF12_SRCLK_MODE_SEL = MT6351_PMIC_RG_VRF12_SRCLK_MODE_SEL,
	PMIC_DA_QI_VRF12_MODE = MT6351_PMIC_DA_QI_VRF12_MODE,
	PMIC_RG_VRF12_STBTD = MT6351_PMIC_RG_VRF12_STBTD,
	PMIC_RG_VRF12_SRCLK_EN_SEL = MT6351_PMIC_RG_VRF12_SRCLK_EN_SEL,
	PMIC_DA_QI_VRF12_STB = MT6351_PMIC_DA_QI_VRF12_STB,
	PMIC_DA_QI_VRF12_EN = MT6351_PMIC_DA_QI_VRF12_EN,
	PMIC_RG_VRF12_OCFB_EN = MT6351_PMIC_RG_VRF12_OCFB_EN,
	PMIC_DA_QI_VRF12_OCFB_EN = MT6351_PMIC_DA_QI_VRF12_OCFB_EN,
	PMIC_RG_VRF12_DUMMY_LOAD_EN = MT6351_PMIC_RG_VRF12_DUMMY_LOAD_EN,
	PMIC_RG_VRF12_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VRF12_DUMMY_LOAD_CTRL,
	PMIC_RG_VRF12_DUMMY_LOAD = MT6351_PMIC_RG_VRF12_DUMMY_LOAD,
	PMIC_RG_VRF12_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VRF12_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VRF12_DUMMY_LOAD = MT6351_PMIC_DA_QI_VRF12_DUMMY_LOAD,
	PMIC_RG_VA10_MODE_SET = MT6351_PMIC_RG_VA10_MODE_SET,
	PMIC_RG_VA10_EN = MT6351_PMIC_RG_VA10_EN,
	PMIC_RG_VA10_MODE_CTRL = MT6351_PMIC_RG_VA10_MODE_CTRL,
	PMIC_RG_VA10_ON_CTRL = MT6351_PMIC_RG_VA10_ON_CTRL,
	PMIC_RG_VA10_SRCLK_MODE_SEL = MT6351_PMIC_RG_VA10_SRCLK_MODE_SEL,
	PMIC_DA_QI_VA10_MODE = MT6351_PMIC_DA_QI_VA10_MODE,
	PMIC_RG_VA10_STBTD = MT6351_PMIC_RG_VA10_STBTD,
	PMIC_RG_VA10_SRCLK_EN_SEL = MT6351_PMIC_RG_VA10_SRCLK_EN_SEL,
	PMIC_DA_QI_VA10_STB = MT6351_PMIC_DA_QI_VA10_STB,
	PMIC_DA_QI_VA10_EN = MT6351_PMIC_DA_QI_VA10_EN,
	PMIC_RG_VA10_OCFB_EN = MT6351_PMIC_RG_VA10_OCFB_EN,
	PMIC_DA_QI_VA10_OCFB_EN = MT6351_PMIC_DA_QI_VA10_OCFB_EN,
	PMIC_RG_VA10_DUMMY_LOAD_EN = MT6351_PMIC_RG_VA10_DUMMY_LOAD_EN,
	PMIC_RG_VA10_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VA10_DUMMY_LOAD_CTRL,
	PMIC_RG_VA10_DUMMY_LOAD = MT6351_PMIC_RG_VA10_DUMMY_LOAD,
	PMIC_RG_VA10_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VA10_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VA10_DUMMY_LOAD = MT6351_PMIC_DA_QI_VA10_DUMMY_LOAD,
	PMIC_RG_VDRAM_MODE_SET = MT6351_PMIC_RG_VDRAM_MODE_SET,
	PMIC_RG_VDRAM_EN = MT6351_PMIC_RG_VDRAM_EN,
	PMIC_RG_VDRAM_MODE_CTRL = MT6351_PMIC_RG_VDRAM_MODE_CTRL,
	PMIC_RG_VDRAM_ON_CTRL = MT6351_PMIC_RG_VDRAM_ON_CTRL,
	PMIC_RG_VDRAM_SRCLK_MODE_SEL = MT6351_PMIC_RG_VDRAM_SRCLK_MODE_SEL,
	PMIC_DA_QI_VDRAM_MODE = MT6351_PMIC_DA_QI_VDRAM_MODE,
	PMIC_RG_VDRAM_STBTD = MT6351_PMIC_RG_VDRAM_STBTD,
	PMIC_RG_VDRAM_SRCLK_EN_SEL = MT6351_PMIC_RG_VDRAM_SRCLK_EN_SEL,
	PMIC_DA_QI_VDRAM_STB = MT6351_PMIC_DA_QI_VDRAM_STB,
	PMIC_DA_QI_VDRAM_EN = MT6351_PMIC_DA_QI_VDRAM_EN,
	PMIC_RG_VDRAM_OCFB_EN = MT6351_PMIC_RG_VDRAM_OCFB_EN,
	PMIC_DA_QI_VDRAM_OCFB_EN = MT6351_PMIC_DA_QI_VDRAM_OCFB_EN,
	PMIC_RG_VDRAM_DUMMY_LOAD_EN = MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_EN,
	PMIC_RG_VDRAM_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_CTRL,
	PMIC_RG_VDRAM_DUMMY_LOAD = MT6351_PMIC_RG_VDRAM_DUMMY_LOAD,
	PMIC_RG_VDRAM_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VDRAM_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VDRAM_DUMMY_LOAD = MT6351_PMIC_DA_QI_VDRAM_DUMMY_LOAD,
	PMIC_RG_VMIPI_MODE_SET = MT6351_PMIC_RG_VMIPI_MODE_SET,
	PMIC_RG_VMIPI_EN = MT6351_PMIC_RG_VMIPI_EN,
	PMIC_RG_VMIPI_MODE_CTRL = MT6351_PMIC_RG_VMIPI_MODE_CTRL,
	PMIC_RG_VMIPI_ON_CTRL = MT6351_PMIC_RG_VMIPI_ON_CTRL,
	PMIC_RG_VMIPI_SRCLK_MODE_SEL = MT6351_PMIC_RG_VMIPI_SRCLK_MODE_SEL,
	PMIC_DA_QI_VMIPI_MODE = MT6351_PMIC_DA_QI_VMIPI_MODE,
	PMIC_RG_VMIPI_STBTD = MT6351_PMIC_RG_VMIPI_STBTD,
	PMIC_RG_VMIPI_SRCLK_EN_SEL = MT6351_PMIC_RG_VMIPI_SRCLK_EN_SEL,
	PMIC_DA_QI_VMIPI_STB = MT6351_PMIC_DA_QI_VMIPI_STB,
	PMIC_DA_QI_VMIPI_EN = MT6351_PMIC_DA_QI_VMIPI_EN,
	PMIC_RG_VMIPI_OCFB_EN = MT6351_PMIC_RG_VMIPI_OCFB_EN,
	PMIC_DA_QI_VMIPI_OCFB_EN = MT6351_PMIC_DA_QI_VMIPI_OCFB_EN,
	PMIC_RG_VMIPI_DUMMY_LOAD_EN = MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_EN,
	PMIC_RG_VMIPI_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_CTRL,
	PMIC_RG_VMIPI_DUMMY_LOAD = MT6351_PMIC_RG_VMIPI_DUMMY_LOAD,
	PMIC_RG_VMIPI_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VMIPI_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VMIPI_DUMMY_LOAD = MT6351_PMIC_DA_QI_VMIPI_DUMMY_LOAD,
	PMIC_RG_VGP3_MODE_SET = MT6351_PMIC_RG_VGP3_MODE_SET,
	PMIC_RG_VGP3_EN = MT6351_PMIC_RG_VGP3_EN,
	PMIC_RG_VGP3_MODE_CTRL = MT6351_PMIC_RG_VGP3_MODE_CTRL,
	PMIC_RG_VGP3_ON_CTRL = MT6351_PMIC_RG_VGP3_ON_CTRL,
	PMIC_RG_VGP3_SRCLK_MODE_SEL = MT6351_PMIC_RG_VGP3_SRCLK_MODE_SEL,
	PMIC_DA_QI_VGP3_MODE = MT6351_PMIC_DA_QI_VGP3_MODE,
	PMIC_RG_VGP3_STBTD = MT6351_PMIC_RG_VGP3_STBTD,
	PMIC_RG_VGP3_SRCLK_EN_SEL = MT6351_PMIC_RG_VGP3_SRCLK_EN_SEL,
	PMIC_DA_QI_VGP3_STB = MT6351_PMIC_DA_QI_VGP3_STB,
	PMIC_DA_QI_VGP3_EN = MT6351_PMIC_DA_QI_VGP3_EN,
	PMIC_RG_VGP3_OCFB_EN = MT6351_PMIC_RG_VGP3_OCFB_EN,
	PMIC_DA_QI_VGP3_OCFB_EN = MT6351_PMIC_DA_QI_VGP3_OCFB_EN,
	PMIC_RG_VGP3_DUMMY_LOAD_EN = MT6351_PMIC_RG_VGP3_DUMMY_LOAD_EN,
	PMIC_RG_VGP3_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VGP3_DUMMY_LOAD_CTRL,
	PMIC_RG_VGP3_DUMMY_LOAD = MT6351_PMIC_RG_VGP3_DUMMY_LOAD,
	PMIC_RG_VGP3_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VGP3_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VGP3_DUMMY_LOAD = MT6351_PMIC_DA_QI_VGP3_DUMMY_LOAD,
	PMIC_RG_VBIF28_MODE_SET = MT6351_PMIC_RG_VBIF28_MODE_SET,
	PMIC_RG_VBIF28_EN = MT6351_PMIC_RG_VBIF28_EN,
	PMIC_RG_VBIF28_MODE_CTRL = MT6351_PMIC_RG_VBIF28_MODE_CTRL,
	PMIC_RG_VBIF28_ON_CTRL = MT6351_PMIC_RG_VBIF28_ON_CTRL,
	PMIC_RG_VBIF28_SRCLK_MODE_SEL = MT6351_PMIC_RG_VBIF28_SRCLK_MODE_SEL,
	PMIC_DA_QI_VBIF28_MODE = MT6351_PMIC_DA_QI_VBIF28_MODE,
	PMIC_RG_VBIF28_STBTD = MT6351_PMIC_RG_VBIF28_STBTD,
	PMIC_RG_VBIF28_SRCLK_EN_SEL = MT6351_PMIC_RG_VBIF28_SRCLK_EN_SEL,
	PMIC_DA_QI_VBIF28_STB = MT6351_PMIC_DA_QI_VBIF28_STB,
	PMIC_DA_QI_VBIF28_EN = MT6351_PMIC_DA_QI_VBIF28_EN,
	PMIC_RG_VBIF28_OCFB_EN = MT6351_PMIC_RG_VBIF28_OCFB_EN,
	PMIC_DA_QI_VBIF28_OCFB_EN = MT6351_PMIC_DA_QI_VBIF28_OCFB_EN,
	PMIC_RG_VBIF28_DUMMY_LOAD_EN = MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_EN,
	PMIC_RG_VBIF28_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_CTRL,
	PMIC_RG_VBIF28_DUMMY_LOAD = MT6351_PMIC_RG_VBIF28_DUMMY_LOAD,
	PMIC_RG_VBIF28_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VBIF28_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VBIF28_DUMMY_LOAD = MT6351_PMIC_DA_QI_VBIF28_DUMMY_LOAD,
	PMIC_RG_VEFUSE_MODE_SET = MT6351_PMIC_RG_VEFUSE_MODE_SET,
	PMIC_RG_VEFUSE_EN = MT6351_PMIC_RG_VEFUSE_EN,
	PMIC_RG_VEFUSE_MODE_CTRL = MT6351_PMIC_RG_VEFUSE_MODE_CTRL,
	PMIC_RG_VEFUSE_SRCLK_MODE_SEL = MT6351_PMIC_RG_VEFUSE_SRCLK_MODE_SEL,
	PMIC_DA_QI_VEFUSE_MODE = MT6351_PMIC_DA_QI_VEFUSE_MODE,
	PMIC_RG_VEFUSE_STBTD = MT6351_PMIC_RG_VEFUSE_STBTD,
	PMIC_DA_QI_VEFUSE_STB = MT6351_PMIC_DA_QI_VEFUSE_STB,
	PMIC_DA_QI_VEFUSE_EN = MT6351_PMIC_DA_QI_VEFUSE_EN,
	PMIC_RG_VEFUSE_OCFB_EN = MT6351_PMIC_RG_VEFUSE_OCFB_EN,
	PMIC_DA_QI_VEFUSE_OCFB_EN = MT6351_PMIC_DA_QI_VEFUSE_OCFB_EN,
	PMIC_RG_VEFUSE_DUMMY_LOAD_EN = MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_EN,
	PMIC_RG_VEFUSE_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_CTRL,
	PMIC_RG_VEFUSE_DUMMY_LOAD = MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD,
	PMIC_RG_VEFUSE_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VEFUSE_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VEFUSE_DUMMY_LOAD = MT6351_PMIC_DA_QI_VEFUSE_DUMMY_LOAD,
	PMIC_RG_VCN33_MODE_SET = MT6351_PMIC_RG_VCN33_MODE_SET,
	PMIC_RG_VCN33_MODE_CTRL = MT6351_PMIC_RG_VCN33_MODE_CTRL,
	PMIC_RG_VCN33_SRCLK_MODE_SEL = MT6351_PMIC_RG_VCN33_SRCLK_MODE_SEL,
	PMIC_DA_QI_VCN33_MODE = MT6351_PMIC_DA_QI_VCN33_MODE,
	PMIC_RG_VCN33_STBTD = MT6351_PMIC_RG_VCN33_STBTD,
	PMIC_DA_QI_VCN33_STB = MT6351_PMIC_DA_QI_VCN33_STB,
	PMIC_DA_QI_VCN33_EN = MT6351_PMIC_DA_QI_VCN33_EN,
	PMIC_RG_VCN33_OCFB_EN = MT6351_PMIC_RG_VCN33_OCFB_EN,
	PMIC_DA_QI_VCN33_OCFB_EN = MT6351_PMIC_DA_QI_VCN33_OCFB_EN,
	PMIC_RG_VCN33_DUMMY_LOAD_EN = MT6351_PMIC_RG_VCN33_DUMMY_LOAD_EN,
	PMIC_RG_VCN33_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VCN33_DUMMY_LOAD_CTRL,
	PMIC_RG_VCN33_DUMMY_LOAD = MT6351_PMIC_RG_VCN33_DUMMY_LOAD,
	PMIC_RG_VCN33_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VCN33_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VCN33_DUMMY_LOAD = MT6351_PMIC_DA_QI_VCN33_DUMMY_LOAD,
	PMIC_RG_VCN33_EN_BT = MT6351_PMIC_RG_VCN33_EN_BT,
	PMIC_RG_VCN33_ON_CTRL_BT = MT6351_PMIC_RG_VCN33_ON_CTRL_BT,
	PMIC_RG_VCN33_SRCLK_EN_SEL_BT = MT6351_PMIC_RG_VCN33_SRCLK_EN_SEL_BT,
	PMIC_RG_VCN33_EN_WIFI = MT6351_PMIC_RG_VCN33_EN_WIFI,
	PMIC_RG_VCN33_ON_CTRL_WIFI = MT6351_PMIC_RG_VCN33_ON_CTRL_WIFI,
	PMIC_RG_VCN33_SRCLK_EN_SEL_WIFI =
	    MT6351_PMIC_RG_VCN33_SRCLK_EN_SEL_WIFI,
	PMIC_RG_VLDO28_MODE_SET = MT6351_PMIC_RG_VLDO28_MODE_SET,
	PMIC_RG_VLDO28_MODE_CTRL = MT6351_PMIC_RG_VLDO28_MODE_CTRL,
	PMIC_RG_VLDO28_ON_CTRL = MT6351_PMIC_RG_VLDO28_ON_CTRL,
	PMIC_RG_VLDO28_SRCLK_MODE_SEL = MT6351_PMIC_RG_VLDO28_SRCLK_MODE_SEL,
	PMIC_DA_QI_VLDO28_MODE = MT6351_PMIC_DA_QI_VLDO28_MODE,
	PMIC_RG_VLDO28_STBTD = MT6351_PMIC_RG_VLDO28_STBTD,
	PMIC_DA_QI_VLDO28_STB = MT6351_PMIC_DA_QI_VLDO28_STB,
	PMIC_DA_QI_VLDO28_EN = MT6351_PMIC_DA_QI_VLDO28_EN,
	PMIC_RG_VLDO28_OCFB_EN = MT6351_PMIC_RG_VLDO28_OCFB_EN,
	PMIC_DA_QI_VLDO28_OCFB_EN = MT6351_PMIC_DA_QI_VLDO28_OCFB_EN,
	PMIC_RG_VLDO28_DUMMY_LOAD_EN = MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_EN,
	PMIC_RG_VLDO28_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_CTRL,
	PMIC_RG_VLDO28_DUMMY_LOAD = MT6351_PMIC_RG_VLDO28_DUMMY_LOAD,
	PMIC_RG_VLDO28_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VLDO28_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VLDO28_DUMMY_LOAD = MT6351_PMIC_DA_QI_VLDO28_DUMMY_LOAD,
	PMIC_RG_VLDO28_EN_0 = MT6351_PMIC_RG_VLDO28_EN_0,
	PMIC_RG_VLDO28_ON_CTRL_0 = MT6351_PMIC_RG_VLDO28_ON_CTRL_0,
	PMIC_RG_VLDO28_SRCLK_EN_SEL_0 = MT6351_PMIC_RG_VLDO28_SRCLK_EN_SEL_0,
	PMIC_RG_VLDO28_EN_1 = MT6351_PMIC_RG_VLDO28_EN_1,
	PMIC_RG_VLDO28_ON_CTRL_1 = MT6351_PMIC_RG_VLDO28_ON_CTRL_1,
	PMIC_RG_VLDO28_SRCLK_EN_SEL_1 = MT6351_PMIC_RG_VLDO28_SRCLK_EN_SEL_1,
	PMIC_RG_LDO_RSV1 = MT6351_PMIC_RG_LDO_RSV1,
	PMIC_RG_LDO_RSV0 = MT6351_PMIC_RG_LDO_RSV0,
	PMIC_RG_LDO_RSV2 = MT6351_PMIC_RG_LDO_RSV2,
	PMIC_RG_VMC_MODE_SET = MT6351_PMIC_RG_VMC_MODE_SET,
	PMIC_RG_VMC_EN = MT6351_PMIC_RG_VMC_EN,
	PMIC_RG_VMC_MODE_CTRL = MT6351_PMIC_RG_VMC_MODE_CTRL,
	PMIC_RG_VMC_ON_CTRL = MT6351_PMIC_RG_VMC_ON_CTRL,
	PMIC_RG_VMC_SRCLK_MODE_SEL = MT6351_PMIC_RG_VMC_SRCLK_MODE_SEL,
	PMIC_DA_QI_VMC_MODE = MT6351_PMIC_DA_QI_VMC_MODE,
	PMIC_RG_VMC_STBTD = MT6351_PMIC_RG_VMC_STBTD,
	PMIC_RG_VMC_SRCLK_EN_SEL = MT6351_PMIC_RG_VMC_SRCLK_EN_SEL,
	PMIC_DA_QI_VMC_STB = MT6351_PMIC_DA_QI_VMC_STB,
	PMIC_DA_QI_VMC_EN = MT6351_PMIC_DA_QI_VMC_EN,
	PMIC_RG_VMC_OCFB_EN = MT6351_PMIC_RG_VMC_OCFB_EN,
	PMIC_DA_QI_VMC_OCFB_EN = MT6351_PMIC_DA_QI_VMC_OCFB_EN,
	PMIC_RG_VMC_DUMMY_LOAD_EN = MT6351_PMIC_RG_VMC_DUMMY_LOAD_EN,
	PMIC_RG_VMC_DUMMY_LOAD_CTRL = MT6351_PMIC_RG_VMC_DUMMY_LOAD_CTRL,
	PMIC_RG_VMC_DUMMY_LOAD = MT6351_PMIC_RG_VMC_DUMMY_LOAD,
	PMIC_RG_VMC_DUMMY_LOAD_SRCLKEN_SEL =
	    MT6351_PMIC_RG_VMC_DUMMY_LOAD_SRCLKEN_SEL,
	PMIC_DA_QI_VMC_DUMMY_LOAD = MT6351_PMIC_DA_QI_VMC_DUMMY_LOAD,
	PMIC_RG_VMC_TRANS_EN = MT6351_PMIC_RG_VMC_TRANS_EN,
	PMIC_RG_VMC_TRANS_CTRL = MT6351_PMIC_RG_VMC_TRANS_CTRL,
	PMIC_RG_VMC_TRANS_ONCE = MT6351_PMIC_RG_VMC_TRANS_ONCE,
	PMIC_RG_VMC_INT_DIS_SEL = MT6351_PMIC_RG_VMC_INT_DIS_SEL,
	PMIC_DA_QI_VMC_INT_DIS = MT6351_PMIC_DA_QI_VMC_INT_DIS,
	PMIC_RG_LDO_MANUAL_OFS_SEL = MT6351_PMIC_RG_LDO_MANUAL_OFS_SEL,
	PMIC_RG_LDO_MANUAL_OFS_EN = MT6351_PMIC_RG_LDO_MANUAL_OFS_EN,
	PMIC_RG_LDO_CALI_RSV = MT6351_PMIC_RG_LDO_CALI_RSV,
	PMIC_RG_LDO_CALI_MODE_SEL = MT6351_PMIC_RG_LDO_CALI_MODE_SEL,
	PMIC_RG_LDO_MANUAL_MODE = MT6351_PMIC_RG_LDO_MANUAL_MODE,
	PMIC_RG_LDO_AUTO_START = MT6351_PMIC_RG_LDO_AUTO_START,
	PMIC_RG_LDO_CALI_CLR = MT6351_PMIC_RG_LDO_CALI_CLR,
	PMIC_LDO_CALI_INC_COUNT = MT6351_PMIC_LDO_CALI_INC_COUNT,
	PMIC_LDO_K_START = MT6351_PMIC_LDO_K_START,
	PMIC_LDO_CALI_DONE = MT6351_PMIC_LDO_CALI_DONE,
	PMIC_LDO_CALI_CNT = MT6351_PMIC_LDO_CALI_CNT,
	PMIC_LDO_CALI_EFUSE_EN = MT6351_PMIC_LDO_CALI_EFUSE_EN,
	PMIC_DA_QI_VIO18_OFS_CAL_EN = MT6351_PMIC_DA_QI_VIO18_OFS_CAL_EN,
	PMIC_AD_QI_VIO18_CAL_INDI = MT6351_PMIC_AD_QI_VIO18_CAL_INDI,
	PMIC_DA_QI_VIO18_OFS_SEL = MT6351_PMIC_DA_QI_VIO18_OFS_SEL,
	PMIC_LDO_DEGTD_SEL = MT6351_PMIC_LDO_DEGTD_SEL,
	PMIC_RG_VRTC_EN = MT6351_PMIC_RG_VRTC_EN,
	PMIC_DA_QI_VRTC_EN = MT6351_PMIC_DA_QI_VRTC_EN,
	PMIC_RG_ALDO_RESEV = MT6351_PMIC_RG_ALDO_RESEV,
	PMIC_RG_DLDO_RESEV = MT6351_PMIC_RG_DLDO_RESEV,
	PMIC_RG_SLDO_RESEV195 = MT6351_PMIC_RG_SLDO_RESEV195,
	PMIC_RG_SLDO_2_RESEV195 = MT6351_PMIC_RG_SLDO_2_RESEV195,
	PMIC_RG_SLDO_RESEV135 = MT6351_PMIC_RG_SLDO_RESEV135,
	PMIC_RG_SLDO_2_RESEV135 = MT6351_PMIC_RG_SLDO_2_RESEV135,
	PMIC_RG_VXO22_CAL = MT6351_PMIC_RG_VXO22_CAL,
	PMIC_RG_VXO22_VOSEL = MT6351_PMIC_RG_VXO22_VOSEL,
	PMIC_RG_VXO22_NDIS_EN = MT6351_PMIC_RG_VXO22_NDIS_EN,
	PMIC_RG_VTCXO28_CAL = MT6351_PMIC_RG_VTCXO28_CAL,
	PMIC_RG_VTCXO28_VOSEL = MT6351_PMIC_RG_VTCXO28_VOSEL,
	PMIC_RG_VTCXO28_NDIS_EN = MT6351_PMIC_RG_VTCXO28_NDIS_EN,
	PMIC_RG_VTCXO24_CAL = MT6351_PMIC_RG_VTCXO24_CAL,
	PMIC_RG_VTCXO24_VOSEL = MT6351_PMIC_RG_VTCXO24_VOSEL,
	PMIC_RG_VTCXO24_NDIS_EN = MT6351_PMIC_RG_VTCXO24_NDIS_EN,
	PMIC_RG_VBIF28_CAL = MT6351_PMIC_RG_VBIF28_CAL,
	PMIC_RG_VBIF28_VOSEL = MT6351_PMIC_RG_VBIF28_VOSEL,
	PMIC_RG_VBIF28_NDIS_EN = MT6351_PMIC_RG_VBIF28_NDIS_EN,
	PMIC_RG_VCN28_CAL = MT6351_PMIC_RG_VCN28_CAL,
	PMIC_RG_VCN28_VOSEL = MT6351_PMIC_RG_VCN28_VOSEL,
	PMIC_RG_VCN28_NDIS_EN = MT6351_PMIC_RG_VCN28_NDIS_EN,
	PMIC_RG_VMCH_CAL = MT6351_PMIC_RG_VMCH_CAL,
	PMIC_RG_VMCH_VOSEL = MT6351_PMIC_RG_VMCH_VOSEL,
	PMIC_RG_VMCH_NDIS_EN = MT6351_PMIC_RG_VMCH_NDIS_EN,
	PMIC_RG_VMCH_OC_TRIM = MT6351_PMIC_RG_VMCH_OC_TRIM,
	PMIC_RG_VMCH_N2LP_EHC_V18 = MT6351_PMIC_RG_VMCH_N2LP_EHC_V18,
	PMIC_RG_VEMC_CAL = MT6351_PMIC_RG_VEMC_CAL,
	PMIC_RG_VEMC_VOSEL = MT6351_PMIC_RG_VEMC_VOSEL,
	PMIC_RG_VEMC_NDIS_EN = MT6351_PMIC_RG_VEMC_NDIS_EN,
	PMIC_RG_VEMC_OC_TRIM = MT6351_PMIC_RG_VEMC_OC_TRIM,
	PMIC_RG_VEMC_N2LP_EHC_V18 = MT6351_PMIC_RG_VEMC_N2LP_EHC_V18,
	PMIC_RG_VCAMA_CAL = MT6351_PMIC_RG_VCAMA_CAL,
	PMIC_RG_VCAMA_VOSEL = MT6351_PMIC_RG_VCAMA_VOSEL,
	PMIC_RG_VCAMA_NDIS_EN = MT6351_PMIC_RG_VCAMA_NDIS_EN,
	PMIC_RG_VCAMA_FBSEL = MT6351_PMIC_RG_VCAMA_FBSEL,
	PMIC_RG_VCN33_CAL = MT6351_PMIC_RG_VCN33_CAL,
	PMIC_RG_VCN33_VOSEL = MT6351_PMIC_RG_VCN33_VOSEL,
	PMIC_RG_VCN33_NDIS_EN = MT6351_PMIC_RG_VCN33_NDIS_EN,
	PMIC_RG_VCN33_N2LP_EHC_V18 = MT6351_PMIC_RG_VCN33_N2LP_EHC_V18,
	PMIC_RG_VIO28_CAL = MT6351_PMIC_RG_VIO28_CAL,
	PMIC_RG_VIO28_VOSEL = MT6351_PMIC_RG_VIO28_VOSEL,
	PMIC_RG_VIO28_NDIS_EN = MT6351_PMIC_RG_VIO28_NDIS_EN,
	PMIC_RG_VIO28_LP_HIGH_SPEED_ENB =
	    MT6351_PMIC_RG_VIO28_LP_HIGH_SPEED_ENB,
	PMIC_RG_VMC_CAL = MT6351_PMIC_RG_VMC_CAL,
	PMIC_RG_VMC_VOSEL = MT6351_PMIC_RG_VMC_VOSEL,
	PMIC_RG_VMC_NDIS_EN = MT6351_PMIC_RG_VMC_NDIS_EN,
	PMIC_RG_VMC_LP_HIGH_SPEED_ENB = MT6351_PMIC_RG_VMC_LP_HIGH_SPEED_ENB,
	PMIC_RG_VIBR_CAL = MT6351_PMIC_RG_VIBR_CAL,
	PMIC_RG_VIBR_VOSEL = MT6351_PMIC_RG_VIBR_VOSEL,
	PMIC_RG_VIBR_NDIS_EN = MT6351_PMIC_RG_VIBR_NDIS_EN,
	PMIC_RG_VIBR_LP_HIGH_SPEED_ENB = MT6351_PMIC_RG_VIBR_LP_HIGH_SPEED_ENB,
	PMIC_RG_VUSB33_CAL = MT6351_PMIC_RG_VUSB33_CAL,
	PMIC_RG_VUSB33_NDIS_EN = MT6351_PMIC_RG_VUSB33_NDIS_EN,
	PMIC_RG_VUSB33_OC_TRIM = MT6351_PMIC_RG_VUSB33_OC_TRIM,
	PMIC_RG_VSIM1_CAL = MT6351_PMIC_RG_VSIM1_CAL,
	PMIC_RG_VSIM1_VOSEL = MT6351_PMIC_RG_VSIM1_VOSEL,
	PMIC_RG_VSIM1_NDIS_EN = MT6351_PMIC_RG_VSIM1_NDIS_EN,
	PMIC_RG_VSIM1_STB_CAL = MT6351_PMIC_RG_VSIM1_STB_CAL,
	PMIC_RG_VSIM1_STB_SEL = MT6351_PMIC_RG_VSIM1_STB_SEL,
	PMIC_RG_VSIM1_OC_TRIM = MT6351_PMIC_RG_VSIM1_OC_TRIM,
	PMIC_RG_VSIM1_NDIS_EN_INT = MT6351_PMIC_RG_VSIM1_NDIS_EN_INT,
	PMIC_RG_EFUSE_SIM1_MODE = MT6351_PMIC_RG_EFUSE_SIM1_MODE,
	PMIC_RG_VSIM1_LP_HIGH_SPEED_ENB =
	    MT6351_PMIC_RG_VSIM1_LP_HIGH_SPEED_ENB,
	PMIC_RG_VSIM2_CAL = MT6351_PMIC_RG_VSIM2_CAL,
	PMIC_RG_VSIM2_VOSEL = MT6351_PMIC_RG_VSIM2_VOSEL,
	PMIC_RG_VSIM2_NDIS_EN = MT6351_PMIC_RG_VSIM2_NDIS_EN,
	PMIC_RG_VSIM2_STB_CAL = MT6351_PMIC_RG_VSIM2_STB_CAL,
	PMIC_RG_VSIM2_STB_SEL = MT6351_PMIC_RG_VSIM2_STB_SEL,
	PMIC_RG_VSIM2_OC_TRIM = MT6351_PMIC_RG_VSIM2_OC_TRIM,
	PMIC_RG_VSIM2_NDIS_EN_INT = MT6351_PMIC_RG_VSIM2_NDIS_EN_INT,
	PMIC_RG_EFUSE_VSIM2_MODE = MT6351_PMIC_RG_EFUSE_VSIM2_MODE,
	PMIC_RG_VSIM2_LP_HIGH_SPEED_ENB =
	    MT6351_PMIC_RG_VSIM2_LP_HIGH_SPEED_ENB,
	PMIC_RG_VEFUSE_CAL = MT6351_PMIC_RG_VEFUSE_CAL,
	PMIC_RG_VEFUSE_VOSEL = MT6351_PMIC_RG_VEFUSE_VOSEL,
	PMIC_RG_VEFUSE_NDIS_EN = MT6351_PMIC_RG_VEFUSE_NDIS_EN,
	PMIC_RG_VEFUSE_STB_CAL = MT6351_PMIC_RG_VEFUSE_STB_CAL,
	PMIC_RG_VEFUSE_STB_SEL = MT6351_PMIC_RG_VEFUSE_STB_SEL,
	PMIC_RG_VEFUSE_OC_TRIM = MT6351_PMIC_RG_VEFUSE_OC_TRIM,
	PMIC_RG_VEFUSE_NDIS_EN_INT = MT6351_PMIC_RG_VEFUSE_NDIS_EN_INT,
	PMIC_RG_EFUSE_MODE_1 = MT6351_PMIC_RG_EFUSE_MODE_1,
	PMIC_RG_VEFUSE_LP_HIGH_SPEED_ENB =
	    MT6351_PMIC_RG_VEFUSE_LP_HIGH_SPEED_ENB,
	PMIC_RG_VA18_CAL = MT6351_PMIC_RG_VA18_CAL,
	PMIC_RG_VA18_VOSEL = MT6351_PMIC_RG_VA18_VOSEL,
	PMIC_RG_VA18_NDIS_EN = MT6351_PMIC_RG_VA18_NDIS_EN,
	PMIC_RG_VGP3_CAL = MT6351_PMIC_RG_VGP3_CAL,
	PMIC_RG_VGP3_VOSEL = MT6351_PMIC_RG_VGP3_VOSEL,
	PMIC_RG_VGP3_NDIS_EN = MT6351_PMIC_RG_VGP3_NDIS_EN,
	PMIC_RG_VGP3_FT_DNMC_EN = MT6351_PMIC_RG_VGP3_FT_DNMC_EN,
	PMIC_RG_VCAMD_CAL = MT6351_PMIC_RG_VCAMD_CAL,
	PMIC_RG_VCAMD_VOSEL = MT6351_PMIC_RG_VCAMD_VOSEL,
	PMIC_RG_VCAMD_NDIS_EN = MT6351_PMIC_RG_VCAMD_NDIS_EN,
	PMIC_RG_VCAMD_RSV = MT6351_PMIC_RG_VCAMD_RSV,
	PMIC_RG_VCAMD_OC_TRIM = MT6351_PMIC_RG_VCAMD_OC_TRIM,
	PMIC_RG_VIO18_CAL = MT6351_PMIC_RG_VIO18_CAL,
	PMIC_RG_VIO18_NDIS_EN = MT6351_PMIC_RG_VIO18_NDIS_EN,
	PMIC_RG_VIO18_FT_DNMC_EN = MT6351_PMIC_RG_VIO18_FT_DNMC_EN,
	PMIC_RG_VRF18_CAL = MT6351_PMIC_RG_VRF18_CAL,
	PMIC_RG_VRF18_VOSEL = MT6351_PMIC_RG_VRF18_VOSEL,
	PMIC_RG_VRF18_NDIS_EN = MT6351_PMIC_RG_VRF18_NDIS_EN,
	PMIC_RG_VRF18_FT_DNMC_EN = MT6351_PMIC_RG_VRF18_FT_DNMC_EN,
	PMIC_RG_VRF12_CAL = MT6351_PMIC_RG_VRF12_CAL,
	PMIC_RG_VRF12_VOSEL = MT6351_PMIC_RG_VRF12_VOSEL,
	PMIC_RG_VRF12_NDIS_EN = MT6351_PMIC_RG_VRF12_NDIS_EN,
	PMIC_RG_VRF12_STB_SEL = MT6351_PMIC_RG_VRF12_STB_SEL,
	PMIC_RG_VA10_CAL = MT6351_PMIC_RG_VA10_CAL,
	PMIC_RG_VA10_VOSEL = MT6351_PMIC_RG_VA10_VOSEL,
	PMIC_RG_VA10_NDIS_EN = MT6351_PMIC_RG_VA10_NDIS_EN,
	PMIC_RG_VA10_STB_SEL = MT6351_PMIC_RG_VA10_STB_SEL,
	PMIC_RG_VCAMIO_CAL = MT6351_PMIC_RG_VCAMIO_CAL,
	PMIC_RG_VCAMIO_VOSEL = MT6351_PMIC_RG_VCAMIO_VOSEL,
	PMIC_RG_VCAMIO_NDIS_EN = MT6351_PMIC_RG_VCAMIO_NDIS_EN,
	PMIC_RG_VCAMIO_STB_SEL = MT6351_PMIC_RG_VCAMIO_STB_SEL,
	PMIC_RG_VCN18_CAL = MT6351_PMIC_RG_VCN18_CAL,
	PMIC_RG_VCN18_VOSEL = MT6351_PMIC_RG_VCN18_VOSEL,
	PMIC_RG_VCN18_NDIS_EN = MT6351_PMIC_RG_VCN18_NDIS_EN,
	PMIC_RG_VCN18_STB_SEL = MT6351_PMIC_RG_VCN18_STB_SEL,
	PMIC_RG_VMIPI_CAL = MT6351_PMIC_RG_VMIPI_CAL,
	PMIC_RG_VMIPI_VOSEL = MT6351_PMIC_RG_VMIPI_VOSEL,
	PMIC_RG_VMIPI_NDIS_EN = MT6351_PMIC_RG_VMIPI_NDIS_EN,
	PMIC_RG_VMIPI_STB_SEL = MT6351_PMIC_RG_VMIPI_STB_SEL,
	PMIC_RG_VSRAM_PROC_NDIS_EN = MT6351_PMIC_RG_VSRAM_PROC_NDIS_EN,
	PMIC_RG_VSRAM_PROC_NDIS_PLCUR = MT6351_PMIC_RG_VSRAM_PROC_NDIS_PLCUR,
	PMIC_RG_VSRAM_PROC_STB_SEL = MT6351_PMIC_RG_VSRAM_PROC_STB_SEL,
	PMIC_RG_VSRAM_PROC_PLCUR_EN = MT6351_PMIC_RG_VSRAM_PROC_PLCUR_EN,
	PMIC_RG_VDRAM_CAL = MT6351_PMIC_RG_VDRAM_CAL,
	PMIC_RG_VDRAM_VOSEL = MT6351_PMIC_RG_VDRAM_VOSEL,
	PMIC_RG_VDRAM_NDIS_EN = MT6351_PMIC_RG_VDRAM_NDIS_EN,
	PMIC_RG_VDRAM_RSV = MT6351_PMIC_RG_VDRAM_RSV,
	PMIC_RG_VDRAM_OC_TRIM = MT6351_PMIC_RG_VDRAM_OC_TRIM,
	PMIC_RG_VLDO28_CAL = MT6351_PMIC_RG_VLDO28_CAL,
	PMIC_RG_VLDO28_NDIS_EN = MT6351_PMIC_RG_VLDO28_NDIS_EN,
	PMIC_RG_VLDO28_OC_TRIM = MT6351_PMIC_RG_VLDO28_OC_TRIM,
	PMIC_RG_VLDO28_N2LP_EHC_V18 = MT6351_PMIC_RG_VLDO28_N2LP_EHC_V18,
	PMIC_BIF_COMMAND_0 = MT6351_PMIC_BIF_COMMAND_0,
	PMIC_BIF_COMMAND_1 = MT6351_PMIC_BIF_COMMAND_1,
	PMIC_BIF_COMMAND_2 = MT6351_PMIC_BIF_COMMAND_2,
	PMIC_BIF_COMMAND_3 = MT6351_PMIC_BIF_COMMAND_3,
	PMIC_BIF_COMMAND_4 = MT6351_PMIC_BIF_COMMAND_4,
	PMIC_BIF_COMMAND_5 = MT6351_PMIC_BIF_COMMAND_5,
	PMIC_BIF_COMMAND_6 = MT6351_PMIC_BIF_COMMAND_6,
	PMIC_BIF_COMMAND_7 = MT6351_PMIC_BIF_COMMAND_7,
	PMIC_BIF_COMMAND_8 = MT6351_PMIC_BIF_COMMAND_8,
	PMIC_BIF_COMMAND_9 = MT6351_PMIC_BIF_COMMAND_9,
	PMIC_BIF_COMMAND_10 = MT6351_PMIC_BIF_COMMAND_10,
	PMIC_BIF_COMMAND_11 = MT6351_PMIC_BIF_COMMAND_11,
	PMIC_BIF_COMMAND_12 = MT6351_PMIC_BIF_COMMAND_12,
	PMIC_BIF_COMMAND_13 = MT6351_PMIC_BIF_COMMAND_13,
	PMIC_BIF_COMMAND_14 = MT6351_PMIC_BIF_COMMAND_14,
	PMIC_BIF_RSV = MT6351_PMIC_BIF_RSV,
	PMIC_BIF_COMMAND_TYPE = MT6351_PMIC_BIF_COMMAND_TYPE,
	PMIC_BIF_TRASFER_NUM = MT6351_PMIC_BIF_TRASFER_NUM,
	PMIC_BIF_LOGIC_0_SET = MT6351_PMIC_BIF_LOGIC_0_SET,
	PMIC_BIF_LOGIC_1_SET = MT6351_PMIC_BIF_LOGIC_1_SET,
	PMIC_BIF_STOP_SET = MT6351_PMIC_BIF_STOP_SET,
	PMIC_BIF_DEBOUNCE_WND = MT6351_PMIC_BIF_DEBOUNCE_WND,
	PMIC_BIF_DEBOUNCE_THD = MT6351_PMIC_BIF_DEBOUNCE_THD,
	PMIC_BIF_DEBOUNCE_EN = MT6351_PMIC_BIF_DEBOUNCE_EN,
	PMIC_BIF_READ_EXPECT_NUM = MT6351_PMIC_BIF_READ_EXPECT_NUM,
	PMIC_BIF_TRASACT_TRIGGER = MT6351_PMIC_BIF_TRASACT_TRIGGER,
	PMIC_BIF_DATA_NUM = MT6351_PMIC_BIF_DATA_NUM,
	PMIC_BIF_RESPONSE = MT6351_PMIC_BIF_RESPONSE,
	PMIC_BIF_DATA_0 = MT6351_PMIC_BIF_DATA_0,
	PMIC_BIF_ACK_0 = MT6351_PMIC_BIF_ACK_0,
	PMIC_BIF_ERROR_0 = MT6351_PMIC_BIF_ERROR_0,
	PMIC_BIF_DATA_1 = MT6351_PMIC_BIF_DATA_1,
	PMIC_BIF_ACK_1 = MT6351_PMIC_BIF_ACK_1,
	PMIC_BIF_ERROR_1 = MT6351_PMIC_BIF_ERROR_1,
	PMIC_BIF_DATA_2 = MT6351_PMIC_BIF_DATA_2,
	PMIC_BIF_ACK_2 = MT6351_PMIC_BIF_ACK_2,
	PMIC_BIF_ERROR_2 = MT6351_PMIC_BIF_ERROR_2,
	PMIC_BIF_DATA_3 = MT6351_PMIC_BIF_DATA_3,
	PMIC_BIF_ACK_3 = MT6351_PMIC_BIF_ACK_3,
	PMIC_BIF_ERROR_3 = MT6351_PMIC_BIF_ERROR_3,
	PMIC_BIF_DATA_4 = MT6351_PMIC_BIF_DATA_4,
	PMIC_BIF_ACK_4 = MT6351_PMIC_BIF_ACK_4,
	PMIC_BIF_ERROR_4 = MT6351_PMIC_BIF_ERROR_4,
	PMIC_BIF_DATA_5 = MT6351_PMIC_BIF_DATA_5,
	PMIC_BIF_ACK_5 = MT6351_PMIC_BIF_ACK_5,
	PMIC_BIF_ERROR_5 = MT6351_PMIC_BIF_ERROR_5,
	PMIC_BIF_DATA_6 = MT6351_PMIC_BIF_DATA_6,
	PMIC_BIF_ACK_6 = MT6351_PMIC_BIF_ACK_6,
	PMIC_BIF_ERROR_6 = MT6351_PMIC_BIF_ERROR_6,
	PMIC_BIF_DATA_7 = MT6351_PMIC_BIF_DATA_7,
	PMIC_BIF_ACK_7 = MT6351_PMIC_BIF_ACK_7,
	PMIC_BIF_ERROR_7 = MT6351_PMIC_BIF_ERROR_7,
	PMIC_BIF_DATA_8 = MT6351_PMIC_BIF_DATA_8,
	PMIC_BIF_ACK_8 = MT6351_PMIC_BIF_ACK_8,
	PMIC_BIF_ERROR_8 = MT6351_PMIC_BIF_ERROR_8,
	PMIC_BIF_DATA_9 = MT6351_PMIC_BIF_DATA_9,
	PMIC_BIF_ACK_9 = MT6351_PMIC_BIF_ACK_9,
	PMIC_BIF_ERROR_9 = MT6351_PMIC_BIF_ERROR_9,
	PMIC_BIF_TEST_MODE0 = MT6351_PMIC_BIF_TEST_MODE0,
	PMIC_BIF_TEST_MODE1 = MT6351_PMIC_BIF_TEST_MODE1,
	PMIC_BIF_TEST_MODE2 = MT6351_PMIC_BIF_TEST_MODE2,
	PMIC_BIF_TEST_MODE3 = MT6351_PMIC_BIF_TEST_MODE3,
	PMIC_BIF_TEST_MODE4 = MT6351_PMIC_BIF_TEST_MODE4,
	PMIC_BIF_TEST_MODE5 = MT6351_PMIC_BIF_TEST_MODE5,
	PMIC_BIF_TEST_MODE6 = MT6351_PMIC_BIF_TEST_MODE6,
	PMIC_BIF_TEST_MODE7 = MT6351_PMIC_BIF_TEST_MODE7,
	PMIC_BIF_TEST_MODE8 = MT6351_PMIC_BIF_TEST_MODE8,
	PMIC_BIF_BAT_LOST_SW = MT6351_PMIC_BIF_BAT_LOST_SW,
	PMIC_BIF_RX_DATA_SW = MT6351_PMIC_BIF_RX_DATA_SW,
	PMIC_BIF_TX_DATA_SW = MT6351_PMIC_BIF_TX_DATA_SW,
	PMIC_BIF_RX_EN_SW = MT6351_PMIC_BIF_RX_EN_SW,
	PMIC_BIF_TX_EN_SW = MT6351_PMIC_BIF_TX_EN_SW,
	PMIC_BIF_BACK_NORMAL = MT6351_PMIC_BIF_BACK_NORMAL,
	PMIC_BIF_IRQ_CLR = MT6351_PMIC_BIF_IRQ_CLR,
	PMIC_BIF_BAT_LOST_GATED = MT6351_PMIC_BIF_BAT_LOST_GATED,
	PMIC_BIF_IRQ = MT6351_PMIC_BIF_IRQ,
	PMIC_BIF_TIMEOUT = MT6351_PMIC_BIF_TIMEOUT,
	PMIC_BIF_BAT_LOST = MT6351_PMIC_BIF_BAT_LOST,
	PMIC_BIF_TOTAL_VALID = MT6351_PMIC_BIF_TOTAL_VALID,
	PMIC_BIF_BUS_STATUS = MT6351_PMIC_BIF_BUS_STATUS,
	PMIC_BIF_POWER_UP_COUNT = MT6351_PMIC_BIF_POWER_UP_COUNT,
	PMIC_BIF_POWER_UP = MT6351_PMIC_BIF_POWER_UP,
	PMIC_BIF_RX_ERROR_UNKNOWN = MT6351_PMIC_BIF_RX_ERROR_UNKNOWN,
	PMIC_BIF_RX_ERROR_INSUFF = MT6351_PMIC_BIF_RX_ERROR_INSUFF,
	PMIC_BIF_RX_ERROR_LOWPHASE = MT6351_PMIC_BIF_RX_ERROR_LOWPHASE,
	PMIC_BIF_RX_STATE = MT6351_PMIC_BIF_RX_STATE,
	PMIC_BIF_FLOW_CTL_STATE = MT6351_PMIC_BIF_FLOW_CTL_STATE,
	PMIC_BIF_TX_STATE = MT6351_PMIC_BIF_TX_STATE,
	PMIC_AD_QI_BIF_RX_DATA = MT6351_PMIC_AD_QI_BIF_RX_DATA,
	PMIC_DA_QI_BIF_RX_EN = MT6351_PMIC_DA_QI_BIF_RX_EN,
	PMIC_DA_QI_BIF_TX_DATA = MT6351_PMIC_DA_QI_BIF_TX_DATA,
	PMIC_DA_QI_BIF_TX_EN = MT6351_PMIC_DA_QI_BIF_TX_EN,
	PMIC_BIF_TX_DATA_FIANL = MT6351_PMIC_BIF_TX_DATA_FIANL,
	PMIC_BIF_RX_DATA_SAMPLING = MT6351_PMIC_BIF_RX_DATA_SAMPLING,
	PMIC_BIF_RX_DATA_RECOVERY = MT6351_PMIC_BIF_RX_DATA_RECOVERY,
	PMIC_RG_BATON_HT_EN = MT6351_PMIC_RG_BATON_HT_EN,
	PMIC_RG_BATON_HT_EN_DLY_TIME = MT6351_PMIC_RG_BATON_HT_EN_DLY_TIME,
	PMIC_DA_QI_BATON_HT_EN = MT6351_PMIC_DA_QI_BATON_HT_EN,
	PMIC_BIF_TIMEOUT_SET = MT6351_PMIC_BIF_TIMEOUT_SET,
	PMIC_BIF_RX_DEG_WND = MT6351_PMIC_BIF_RX_DEG_WND,
	PMIC_BIF_RX_DEG_EN = MT6351_PMIC_BIF_RX_DEG_EN,
	PMIC_BIF_RSV1 = MT6351_PMIC_BIF_RSV1,
	PMIC_BIF_RSV0 = MT6351_PMIC_BIF_RSV0,
	PMIC_RG_OTP_PA = MT6351_PMIC_RG_OTP_PA,
	PMIC_RG_OTP_PDIN = MT6351_PMIC_RG_OTP_PDIN,
	PMIC_RG_OTP_PTM = MT6351_PMIC_RG_OTP_PTM,
	PMIC_RG_OTP_PWE = MT6351_PMIC_RG_OTP_PWE,
	PMIC_RG_OTP_PPROG = MT6351_PMIC_RG_OTP_PPROG,
	PMIC_RG_OTP_PWE_SRC = MT6351_PMIC_RG_OTP_PWE_SRC,
	PMIC_RG_OTP_PROG_PKEY = MT6351_PMIC_RG_OTP_PROG_PKEY,
	PMIC_RG_OTP_RD_PKEY = MT6351_PMIC_RG_OTP_RD_PKEY,
	PMIC_RG_OTP_RD_TRIG = MT6351_PMIC_RG_OTP_RD_TRIG,
	PMIC_RG_RD_RDY_BYPASS = MT6351_PMIC_RG_RD_RDY_BYPASS,
	PMIC_RG_SKIP_OTP_OUT = MT6351_PMIC_RG_SKIP_OTP_OUT,
	PMIC_RG_OTP_RD_SW = MT6351_PMIC_RG_OTP_RD_SW,
	PMIC_RG_OTP_DOUT_SW = MT6351_PMIC_RG_OTP_DOUT_SW,
	PMIC_RG_OTP_RD_BUSY = MT6351_PMIC_RG_OTP_RD_BUSY,
	PMIC_RG_OTP_RD_ACK = MT6351_PMIC_RG_OTP_RD_ACK,
	PMIC_RG_OTP_PA_SW = MT6351_PMIC_RG_OTP_PA_SW,
	PMIC_RG_OTP_DOUT_0_15 = MT6351_PMIC_RG_OTP_DOUT_0_15,
	PMIC_RG_OTP_DOUT_16_31 = MT6351_PMIC_RG_OTP_DOUT_16_31,
	PMIC_RG_OTP_DOUT_32_47 = MT6351_PMIC_RG_OTP_DOUT_32_47,
	PMIC_RG_OTP_DOUT_48_63 = MT6351_PMIC_RG_OTP_DOUT_48_63,
	PMIC_RG_OTP_DOUT_64_79 = MT6351_PMIC_RG_OTP_DOUT_64_79,
	PMIC_RG_OTP_DOUT_80_95 = MT6351_PMIC_RG_OTP_DOUT_80_95,
	PMIC_RG_OTP_DOUT_96_111 = MT6351_PMIC_RG_OTP_DOUT_96_111,
	PMIC_RG_OTP_DOUT_112_127 = MT6351_PMIC_RG_OTP_DOUT_112_127,
	PMIC_RG_OTP_DOUT_128_143 = MT6351_PMIC_RG_OTP_DOUT_128_143,
	PMIC_RG_OTP_DOUT_144_159 = MT6351_PMIC_RG_OTP_DOUT_144_159,
	PMIC_RG_OTP_DOUT_160_175 = MT6351_PMIC_RG_OTP_DOUT_160_175,
	PMIC_RG_OTP_DOUT_176_191 = MT6351_PMIC_RG_OTP_DOUT_176_191,
	PMIC_RG_OTP_DOUT_192_207 = MT6351_PMIC_RG_OTP_DOUT_192_207,
	PMIC_RG_OTP_DOUT_208_223 = MT6351_PMIC_RG_OTP_DOUT_208_223,
	PMIC_RG_OTP_DOUT_224_239 = MT6351_PMIC_RG_OTP_DOUT_224_239,
	PMIC_RG_OTP_DOUT_240_255 = MT6351_PMIC_RG_OTP_DOUT_240_255,
	PMIC_RG_OTP_DOUT_256_271 = MT6351_PMIC_RG_OTP_DOUT_256_271,
	PMIC_RG_OTP_DOUT_272_287 = MT6351_PMIC_RG_OTP_DOUT_272_287,
	PMIC_RG_OTP_DOUT_288_303 = MT6351_PMIC_RG_OTP_DOUT_288_303,
	PMIC_RG_OTP_DOUT_304_319 = MT6351_PMIC_RG_OTP_DOUT_304_319,
	PMIC_RG_OTP_DOUT_320_335 = MT6351_PMIC_RG_OTP_DOUT_320_335,
	PMIC_RG_OTP_DOUT_336_351 = MT6351_PMIC_RG_OTP_DOUT_336_351,
	PMIC_RG_OTP_DOUT_352_367 = MT6351_PMIC_RG_OTP_DOUT_352_367,
	PMIC_RG_OTP_DOUT_368_383 = MT6351_PMIC_RG_OTP_DOUT_368_383,
	PMIC_RG_OTP_DOUT_384_399 = MT6351_PMIC_RG_OTP_DOUT_384_399,
	PMIC_RG_OTP_DOUT_400_415 = MT6351_PMIC_RG_OTP_DOUT_400_415,
	PMIC_RG_OTP_DOUT_416_431 = MT6351_PMIC_RG_OTP_DOUT_416_431,
	PMIC_RG_OTP_DOUT_432_447 = MT6351_PMIC_RG_OTP_DOUT_432_447,
	PMIC_RG_OTP_DOUT_448_463 = MT6351_PMIC_RG_OTP_DOUT_448_463,
	PMIC_RG_OTP_DOUT_464_479 = MT6351_PMIC_RG_OTP_DOUT_464_479,
	PMIC_RG_OTP_DOUT_480_495 = MT6351_PMIC_RG_OTP_DOUT_480_495,
	PMIC_RG_OTP_DOUT_496_511 = MT6351_PMIC_RG_OTP_DOUT_496_511,
	PMIC_RG_OTP_VAL_0_15 = MT6351_PMIC_RG_OTP_VAL_0_15,
	PMIC_RG_OTP_VAL_16_31 = MT6351_PMIC_RG_OTP_VAL_16_31,
	PMIC_RG_OTP_VAL_32_47 = MT6351_PMIC_RG_OTP_VAL_32_47,
	PMIC_RG_OTP_VAL_48_63 = MT6351_PMIC_RG_OTP_VAL_48_63,
	PMIC_RG_OTP_VAL_64_79 = MT6351_PMIC_RG_OTP_VAL_64_79,
	PMIC_RG_OTP_VAL_80_95 = MT6351_PMIC_RG_OTP_VAL_80_95,
	PMIC_RG_OTP_VAL_96_111 = MT6351_PMIC_RG_OTP_VAL_96_111,
	PMIC_RG_OTP_VAL_112_127 = MT6351_PMIC_RG_OTP_VAL_112_127,
	PMIC_RG_OTP_VAL_128_143 = MT6351_PMIC_RG_OTP_VAL_128_143,
	PMIC_RG_OTP_VAL_144_159 = MT6351_PMIC_RG_OTP_VAL_144_159,
	PMIC_RG_OTP_VAL_160_175 = MT6351_PMIC_RG_OTP_VAL_160_175,
	PMIC_RG_OTP_VAL_176_191 = MT6351_PMIC_RG_OTP_VAL_176_191,
	PMIC_RG_OTP_VAL_192_207 = MT6351_PMIC_RG_OTP_VAL_192_207,
	PMIC_RG_OTP_VAL_208_223 = MT6351_PMIC_RG_OTP_VAL_208_223,
	PMIC_RG_OTP_VAL_224_239 = MT6351_PMIC_RG_OTP_VAL_224_239,
	PMIC_RG_OTP_VAL_240_255 = MT6351_PMIC_RG_OTP_VAL_240_255,
	PMIC_RG_OTP_VAL_256_271 = MT6351_PMIC_RG_OTP_VAL_256_271,
	PMIC_RG_OTP_VAL_272_287 = MT6351_PMIC_RG_OTP_VAL_272_287,
	PMIC_RG_OTP_VAL_288_303 = MT6351_PMIC_RG_OTP_VAL_288_303,
	PMIC_RG_OTP_VAL_304_319 = MT6351_PMIC_RG_OTP_VAL_304_319,
	PMIC_RG_OTP_VAL_320_335 = MT6351_PMIC_RG_OTP_VAL_320_335,
	PMIC_RG_OTP_VAL_336_351 = MT6351_PMIC_RG_OTP_VAL_336_351,
	PMIC_RG_OTP_VAL_352_367 = MT6351_PMIC_RG_OTP_VAL_352_367,
	PMIC_RG_OTP_VAL_368_383 = MT6351_PMIC_RG_OTP_VAL_368_383,
	PMIC_RG_OTP_VAL_384_399 = MT6351_PMIC_RG_OTP_VAL_384_399,
	PMIC_RG_OTP_VAL_400_415 = MT6351_PMIC_RG_OTP_VAL_400_415,
	PMIC_RG_OTP_VAL_416_431 = MT6351_PMIC_RG_OTP_VAL_416_431,
	PMIC_RG_OTP_VAL_432_447 = MT6351_PMIC_RG_OTP_VAL_432_447,
	PMIC_RG_OTP_VAL_448_463 = MT6351_PMIC_RG_OTP_VAL_448_463,
	PMIC_RG_OTP_VAL_464_479 = MT6351_PMIC_RG_OTP_VAL_464_479,
	PMIC_RG_OTP_VAL_480_495 = MT6351_PMIC_RG_OTP_VAL_480_495,
	PMIC_RG_OTP_VAL_496_511 = MT6351_PMIC_RG_OTP_VAL_496_511,
	PMIC_MIX_EOSC32_STP_LPDTB = MT6351_PMIC_MIX_EOSC32_STP_LPDTB,
	PMIC_MIX_EOSC32_STP_LPDEN = MT6351_PMIC_MIX_EOSC32_STP_LPDEN,
	PMIC_MIX_XOSC32_STP_PWDB = MT6351_PMIC_MIX_XOSC32_STP_PWDB,
	PMIC_MIX_XOSC32_STP_LPDTB = MT6351_PMIC_MIX_XOSC32_STP_LPDTB,
	PMIC_MIX_XOSC32_STP_LPDEN = MT6351_PMIC_MIX_XOSC32_STP_LPDEN,
	PMIC_MIX_XOSC32_STP_LPDRST = MT6351_PMIC_MIX_XOSC32_STP_LPDRST,
	PMIC_MIX_XOSC32_STP_CALI = MT6351_PMIC_MIX_XOSC32_STP_CALI,
	PMIC_STMP_MODE = MT6351_PMIC_STMP_MODE,
	PMIC_MIX_EOSC32_STP_CHOP_EN = MT6351_PMIC_MIX_EOSC32_STP_CHOP_EN,
	PMIC_MIX_DCXO_STP_LVSH_EN = MT6351_PMIC_MIX_DCXO_STP_LVSH_EN,
	PMIC_MIX_PMU_STP_DDLO_VRTC = MT6351_PMIC_MIX_PMU_STP_DDLO_VRTC,
	PMIC_MIX_PMU_STP_DDLO_VRTC_EN = MT6351_PMIC_MIX_PMU_STP_DDLO_VRTC_EN,
	PMIC_MIX_RTC_STP_XOSC32_ENB = MT6351_PMIC_MIX_RTC_STP_XOSC32_ENB,
	PMIC_MIX_DCXO_STP_TEST_DEGLITCH_MODE =
	    MT6351_PMIC_MIX_DCXO_STP_TEST_DEGLITCH_MODE,
	PMIC_MIX_EOSC32_STP_RSV = MT6351_PMIC_MIX_EOSC32_STP_RSV,
	PMIC_MIX_EOSC32_VCT_EN = MT6351_PMIC_MIX_EOSC32_VCT_EN,
	PMIC_MIX_EOSC32_OPT = MT6351_PMIC_MIX_EOSC32_OPT,
	PMIC_MIX_DCXO_STP_LVSH_EN_INT = MT6351_PMIC_MIX_DCXO_STP_LVSH_EN_INT,
	PMIC_MIX_RTC_GPIO_COREDETB = MT6351_PMIC_MIX_RTC_GPIO_COREDETB,
	PMIC_MIX_RTC_GPIO_F32KOB = MT6351_PMIC_MIX_RTC_GPIO_F32KOB,
	PMIC_MIX_RTC_GPIO_GPO = MT6351_PMIC_MIX_RTC_GPIO_GPO,
	PMIC_MIX_RTC_GPIO_OE = MT6351_PMIC_MIX_RTC_GPIO_OE,
	PMIC_MIX_RTC_STP_DEBUG_OUT = MT6351_PMIC_MIX_RTC_STP_DEBUG_OUT,
	PMIC_MIX_RTC_STP_DEBUG_SEL = MT6351_PMIC_MIX_RTC_STP_DEBUG_SEL,
	PMIC_MIX_RTC_STP_K_EOSC32_EN = MT6351_PMIC_MIX_RTC_STP_K_EOSC32_EN,
	PMIC_MIX_RTC_STP_EMBCK_SEL = MT6351_PMIC_MIX_RTC_STP_EMBCK_SEL,
	PMIC_MIX_STP_BBWAKEUP = MT6351_PMIC_MIX_STP_BBWAKEUP,
	PMIC_MIX_STP_RTC_DDLO = MT6351_PMIC_MIX_STP_RTC_DDLO,
	PMIC_MIX_RTC_XOSC32_ENB = MT6351_PMIC_MIX_RTC_XOSC32_ENB,
	PMIC_MIX_EFUSE_XOSC32_ENB_OPT = MT6351_PMIC_MIX_EFUSE_XOSC32_ENB_OPT,
	PMIC_FG_ON = MT6351_PMIC_FG_ON,
	PMIC_FG_CAL = MT6351_PMIC_FG_CAL,
	PMIC_FG_AUTOCALRATE = MT6351_PMIC_FG_AUTOCALRATE,
	PMIC_FG_SW_CR = MT6351_PMIC_FG_SW_CR,
	PMIC_FG_SW_READ_PRE = MT6351_PMIC_FG_SW_READ_PRE,
	PMIC_FG_LATCHDATA_ST = MT6351_PMIC_FG_LATCHDATA_ST,
	PMIC_FG_SW_CLEAR = MT6351_PMIC_FG_SW_CLEAR,
	PMIC_FG_OFFSET_RST = MT6351_PMIC_FG_OFFSET_RST,
	PMIC_FG_TIME_RST = MT6351_PMIC_FG_TIME_RST,
	PMIC_FG_CHARGE_RST = MT6351_PMIC_FG_CHARGE_RST,
	PMIC_FG_SW_RSTCLR = MT6351_PMIC_FG_SW_RSTCLR,
	PMIC_FG_CAR_34_19 = MT6351_PMIC_FG_CAR_34_19,
	PMIC_FG_CAR_18_03 = MT6351_PMIC_FG_CAR_18_03,
	PMIC_FG_CAR_02_00 = MT6351_PMIC_FG_CAR_02_00,
	PMIC_FG_NTER_32_17 = MT6351_PMIC_FG_NTER_32_17,
	PMIC_FG_NTER_16_01 = MT6351_PMIC_FG_NTER_16_01,
	PMIC_FG_NTER_00 = MT6351_PMIC_FG_NTER_00,
	PMIC_FG_BLTR_31_16 = MT6351_PMIC_FG_BLTR_31_16,
	PMIC_FG_BLTR_15_00 = MT6351_PMIC_FG_BLTR_15_00,
	PMIC_FG_BFTR_31_16 = MT6351_PMIC_FG_BFTR_31_16,
	PMIC_FG_BFTR_15_00 = MT6351_PMIC_FG_BFTR_15_00,
	PMIC_FG_CURRENT_OUT = MT6351_PMIC_FG_CURRENT_OUT,
	PMIC_FG_ADJUST_OFFSET_VALUE = MT6351_PMIC_FG_ADJUST_OFFSET_VALUE,
	PMIC_FG_OFFSET = MT6351_PMIC_FG_OFFSET,
	PMIC_RG_FGANALOGTEST = MT6351_PMIC_RG_FGANALOGTEST,
	PMIC_RG_FGRINTMODE = MT6351_PMIC_RG_FGRINTMODE,
	PMIC_RG_SPARE = MT6351_PMIC_RG_SPARE,
	PMIC_FG_OSR = MT6351_PMIC_FG_OSR,
	PMIC_FG_ADJ_OFFSET_EN = MT6351_PMIC_FG_ADJ_OFFSET_EN,
	PMIC_FG_ADC_AUTORST = MT6351_PMIC_FG_ADC_AUTORST,
	PMIC_FG_FIR1BYPASS = MT6351_PMIC_FG_FIR1BYPASS,
	PMIC_FG_FIR2BYPASS = MT6351_PMIC_FG_FIR2BYPASS,
	PMIC_FG_L_CUR_INT_STS = MT6351_PMIC_FG_L_CUR_INT_STS,
	PMIC_FG_H_CUR_INT_STS = MT6351_PMIC_FG_H_CUR_INT_STS,
	PMIC_FG_L_INT_STS = MT6351_PMIC_FG_L_INT_STS,
	PMIC_FG_H_INT_STS = MT6351_PMIC_FG_H_INT_STS,
	PMIC_FG_ADC_RSTDETECT = MT6351_PMIC_FG_ADC_RSTDETECT,
	PMIC_FG_SLP_EN = MT6351_PMIC_FG_SLP_EN,
	PMIC_FG_ZCV_DET_EN = MT6351_PMIC_FG_ZCV_DET_EN,
	PMIC_RG_FG_AUXADC_R = MT6351_PMIC_RG_FG_AUXADC_R,
	PMIC_DA_FGADC_EN = MT6351_PMIC_DA_FGADC_EN,
	PMIC_DA_FGCAL_EN = MT6351_PMIC_DA_FGCAL_EN,
	PMIC_DA_FG_RST = MT6351_PMIC_DA_FG_RST,
	PMIC_FG_CIC2 = MT6351_PMIC_FG_CIC2,
	PMIC_FG_SLP_CUR_TH = MT6351_PMIC_FG_SLP_CUR_TH,
	PMIC_FG_SLP_TIME = MT6351_PMIC_FG_SLP_TIME,
	PMIC_FG_SRCVOLTEN_FTIME = MT6351_PMIC_FG_SRCVOLTEN_FTIME,
	PMIC_FG_DET_TIME = MT6351_PMIC_FG_DET_TIME,
	PMIC_FG_ZCV_CAR_34_19 = MT6351_PMIC_FG_ZCV_CAR_34_19,
	PMIC_FG_ZCV_CAR_18_03 = MT6351_PMIC_FG_ZCV_CAR_18_03,
	PMIC_FG_ZCV_CAR_02_00 = MT6351_PMIC_FG_ZCV_CAR_02_00,
	PMIC_FG_ZCV_CURR = MT6351_PMIC_FG_ZCV_CURR,
	PMIC_FG_R_CURR = MT6351_PMIC_FG_R_CURR,
	PMIC_FG_MODE = MT6351_PMIC_FG_MODE,
	PMIC_FG_RST_SW = MT6351_PMIC_FG_RST_SW,
	PMIC_FG_FGCAL_EN_SW = MT6351_PMIC_FG_FGCAL_EN_SW,
	PMIC_FG_FGADC_EN_SW = MT6351_PMIC_FG_FGADC_EN_SW,
	PMIC_FG_RSV1 = MT6351_PMIC_FG_RSV1,
	PMIC_FG_TEST_MODE0 = MT6351_PMIC_FG_TEST_MODE0,
	PMIC_FG_TEST_MODE1 = MT6351_PMIC_FG_TEST_MODE1,
	PMIC_FG_GAIN = MT6351_PMIC_FG_GAIN,
	PMIC_FG_CUR_HTH = MT6351_PMIC_FG_CUR_HTH,
	PMIC_FG_CUR_LTH = MT6351_PMIC_FG_CUR_LTH,
	PMIC_FG_ZCV_DET_TIME = MT6351_PMIC_FG_ZCV_DET_TIME,
	PMIC_FG_ZCV_CAR_TH_33_19 = MT6351_PMIC_FG_ZCV_CAR_TH_33_19,
	PMIC_FG_ZCV_CAR_TH_18_03 = MT6351_PMIC_FG_ZCV_CAR_TH_18_03,
	PMIC_FG_ZCV_CAR_TH_02_00 = MT6351_PMIC_FG_ZCV_CAR_TH_02_00,
	PMIC_SYSTEM_INFO_CON0 = MT6351_PMIC_SYSTEM_INFO_CON0,
	PMIC_SYSTEM_INFO_CON1 = MT6351_PMIC_SYSTEM_INFO_CON1,
	PMIC_SYSTEM_INFO_CON2 = MT6351_PMIC_SYSTEM_INFO_CON2,
	PMIC_SYSTEM_INFO_CON3 = MT6351_PMIC_SYSTEM_INFO_CON3,
	PMIC_SYSTEM_INFO_CON4 = MT6351_PMIC_SYSTEM_INFO_CON4,
	PMIC_RG_AUDDACLPWRUP_VAUDP32 = MT6351_PMIC_RG_AUDDACLPWRUP_VAUDP32,
	PMIC_RG_AUDDACRPWRUP_VAUDP32 = MT6351_PMIC_RG_AUDDACRPWRUP_VAUDP32,
	PMIC_RG_AUD_DAC_PWR_UP_VA32 = MT6351_PMIC_RG_AUD_DAC_PWR_UP_VA32,
	PMIC_RG_AUD_DAC_PWL_UP_VA32 = MT6351_PMIC_RG_AUD_DAC_PWL_UP_VA32,
	PMIC_RG_AUDHSPWRUP_VAUDP32 = MT6351_PMIC_RG_AUDHSPWRUP_VAUDP32,
	PMIC_RG_AUDHPLPWRUP_VAUDP32 = MT6351_PMIC_RG_AUDHPLPWRUP_VAUDP32,
	PMIC_RG_AUDHPRPWRUP_VAUDP32 = MT6351_PMIC_RG_AUDHPRPWRUP_VAUDP32,
	PMIC_RG_AUDHSMUXINPUTSEL_VAUDP32 =
	    MT6351_PMIC_RG_AUDHSMUXINPUTSEL_VAUDP32,
	PMIC_RG_AUDHPLMUXINPUTSEL_VAUDP32 =
	    MT6351_PMIC_RG_AUDHPLMUXINPUTSEL_VAUDP32,
	PMIC_RG_AUDHPRMUXINPUTSEL_VAUDP32 =
	    MT6351_PMIC_RG_AUDHPRMUXINPUTSEL_VAUDP32,
	PMIC_RG_AUDHSSCDISABLE_VAUDP32 = MT6351_PMIC_RG_AUDHSSCDISABLE_VAUDP32,
	PMIC_RG_AUDHPLSCDISABLE_VAUDP32 =
	    MT6351_PMIC_RG_AUDHPLSCDISABLE_VAUDP32,
	PMIC_RG_AUDHPRSCDISABLE_VAUDP32 =
	    MT6351_PMIC_RG_AUDHPRSCDISABLE_VAUDP32,
	PMIC_RG_AUDHSBSCCURRENT_VAUDP32 =
	    MT6351_PMIC_RG_AUDHSBSCCURRENT_VAUDP32,
	PMIC_RG_AUDHPLBSCCURRENT_VAUDP32 =
	    MT6351_PMIC_RG_AUDHPLBSCCURRENT_VAUDP32,
	PMIC_RG_AUDHPRBSCCURRENT_VAUDP32 =
	    MT6351_PMIC_RG_AUDHPRBSCCURRENT_VAUDP32,
	PMIC_RG_AUDHSSTARTUP_VAUDP32 = MT6351_PMIC_RG_AUDHSSTARTUP_VAUDP32,
	PMIC_RG_AUDHPSTARTUP_VAUDP32 = MT6351_PMIC_RG_AUDHPSTARTUP_VAUDP32,
	PMIC_RG_AUDBGBON_VAUDP32 = MT6351_PMIC_RG_AUDBGBON_VAUDP32,
	PMIC_RG_PRECHARGEBUF_EN_VAUDP32 =
	    MT6351_PMIC_RG_PRECHARGEBUF_EN_VAUDP32,
	PMIC_RG_HSINPUTSTBENH_VAUDP32 = MT6351_PMIC_RG_HSINPUTSTBENH_VAUDP32,
	PMIC_RG_HSOUTPUTSTBENH_VAUDP32 = MT6351_PMIC_RG_HSOUTPUTSTBENH_VAUDP32,
	PMIC_RG_HSINPUTRESET0_VAUDP32 = MT6351_PMIC_RG_HSINPUTRESET0_VAUDP32,
	PMIC_RG_HSOUTPUTRESET0_VAUDP32 = MT6351_PMIC_RG_HSOUTPUTRESET0_VAUDP32,
	PMIC_RG_HSOUT_SHORTVCM_VAUDP32 = MT6351_PMIC_RG_HSOUT_SHORTVCM_VAUDP32,
	PMIC_RG_HPINPUTSTBENH_VAUDP32 = MT6351_PMIC_RG_HPINPUTSTBENH_VAUDP32,
	PMIC_RG_HPOUTPUTSTBENH_VAUDP32 = MT6351_PMIC_RG_HPOUTPUTSTBENH_VAUDP32,
	PMIC_RG_HPINPUTRESET0_VAUDP32 = MT6351_PMIC_RG_HPINPUTRESET0_VAUDP32,
	PMIC_RG_HPOUTPUTRESET0_VAUDP32 = MT6351_PMIC_RG_HPOUTPUTRESET0_VAUDP32,
	PMIC_RG_HPOUT_SHORTVCM_VAUDP32 = MT6351_PMIC_RG_HPOUT_SHORTVCM_VAUDP32,
	PMIC_RG_HPOUTSTB_RSEL_VAUDP32 = MT6351_PMIC_RG_HPOUTSTB_RSEL_VAUDP32,
	PMIC_RG_LINENOISEENH_VAUDP32 = MT6351_PMIC_RG_LINENOISEENH_VAUDP32,
	PMIC_RG_AUDHPLTRIM_VAUDP32 = MT6351_PMIC_RG_AUDHPLTRIM_VAUDP32,
	PMIC_RG_AUDHPRTRIM_VAUDP32 = MT6351_PMIC_RG_AUDHPRTRIM_VAUDP32,
	PMIC_RG_AUDHPTRIM_EN_VAUDP32 = MT6351_PMIC_RG_AUDHPTRIM_EN_VAUDP32,
	PMIC_RG_AUDHPLFINETRIM_VAUDP32 = MT6351_PMIC_RG_AUDHPLFINETRIM_VAUDP32,
	PMIC_RG_AUDHPRFINETRIM_VAUDP32 = MT6351_PMIC_RG_AUDHPRFINETRIM_VAUDP32,
	PMIC_RG_AUDLOLPWRUP_VAUDP32 = MT6351_PMIC_RG_AUDLOLPWRUP_VAUDP32,
	PMIC_RG_AUDLOLMUXINPUTSEL_VAUDP32 =
	    MT6351_PMIC_RG_AUDLOLMUXINPUTSEL_VAUDP32,
	PMIC_RG_AUDLOLSCDISABLE_VAUDP32 =
	    MT6351_PMIC_RG_AUDLOLSCDISABLE_VAUDP32,
	PMIC_RG_AUDLOLBSCCURRENT_VAUDP32 =
	    MT6351_PMIC_RG_AUDLOLBSCCURRENT_VAUDP32,
	PMIC_RG_AUDLOSTARTUP_VAUDP32 = MT6351_PMIC_RG_AUDLOSTARTUP_VAUDP32,
	PMIC_RG_LOINPUTSTBENH_VAUDP32 = MT6351_PMIC_RG_LOINPUTSTBENH_VAUDP32,
	PMIC_RG_LOOUTPUTSTBENH_VAUDP32 = MT6351_PMIC_RG_LOOUTPUTSTBENH_VAUDP32,
	PMIC_RG_LOINPUTRESET0_VAUDP32 = MT6351_PMIC_RG_LOINPUTRESET0_VAUDP32,
	PMIC_RG_LOOUTPUTRESET0_VAUDP32 = MT6351_PMIC_RG_LOOUTPUTRESET0_VAUDP32,
	PMIC_RG_LOOUT_SHORTVCM_VAUDP32 = MT6351_PMIC_RG_LOOUT_SHORTVCM_VAUDP32,
	PMIC_RG_LOOUTSTB_RSEL_VAUDP32 = MT6351_PMIC_RG_LOOUTSTB_RSEL_VAUDP32,
	PMIC_RG_AUDLOLTRIM_VAUDP32 = MT6351_PMIC_RG_AUDLOLTRIM_VAUDP32,
	PMIC_RG_AUDLOTRIM_EN_VAUDP32 = MT6351_PMIC_RG_AUDLOTRIM_EN_VAUDP32,
	PMIC_RG_AUDLOLFINETRIM_VAUDP32 = MT6351_PMIC_RG_AUDLOLFINETRIM_VAUDP32,
	PMIC_RG_AUDTRIMBUF_EN_VAUDP32 = MT6351_PMIC_RG_AUDTRIMBUF_EN_VAUDP32,
	PMIC_RG_AUDTRIMBUF_INPUTMUXSEL_VAUDP32 =
	    MT6351_PMIC_RG_AUDTRIMBUF_INPUTMUXSEL_VAUDP32,
	PMIC_RG_AUDTRIMBUF_GAINSEL_VAUDP32 =
	    MT6351_PMIC_RG_AUDTRIMBUF_GAINSEL_VAUDP32,
	PMIC_RG_AUDHPSPKDET_EN_VAUDP32 = MT6351_PMIC_RG_AUDHPSPKDET_EN_VAUDP32,
	PMIC_RG_AUDHPSPKDET_INPUTMUXSEL_VAUDP32 =
	    MT6351_PMIC_RG_AUDHPSPKDET_INPUTMUXSEL_VAUDP32,
	PMIC_RG_AUDHPSPKDET_OUTPUTMUXSEL_VAUDP32 =
	    MT6351_PMIC_RG_AUDHPSPKDET_OUTPUTMUXSEL_VAUDP32,
	PMIC_RG_ABIDEC_RSVD0_VA32 = MT6351_PMIC_RG_ABIDEC_RSVD0_VA32,
	PMIC_RG_ABIDEC_RSVD1_VA32 = MT6351_PMIC_RG_ABIDEC_RSVD1_VA32,
	PMIC_RG_ABIDEC_RSVD0_VAUDP32 = MT6351_PMIC_RG_ABIDEC_RSVD0_VAUDP32,
	PMIC_RG_ABIDEC_RSVD1_VAUDP32 = MT6351_PMIC_RG_ABIDEC_RSVD1_VAUDP32,
	PMIC_RG_AUDZCDMUXSEL_VAUDP32 = MT6351_PMIC_RG_AUDZCDMUXSEL_VAUDP32,
	PMIC_RG_AUDZCDCLKSEL_VAUDP32 = MT6351_PMIC_RG_AUDZCDCLKSEL_VAUDP32,
	PMIC_RG_AUDBIASADJ_0_VAUDP32 = MT6351_PMIC_RG_AUDBIASADJ_0_VAUDP32,
	PMIC_RG_AUDBIASADJ_1_VAUDP32 = MT6351_PMIC_RG_AUDBIASADJ_1_VAUDP32,
	PMIC_RG_AUDIBIASPWRDN_VAUDP32 = MT6351_PMIC_RG_AUDIBIASPWRDN_VAUDP32,
	PMIC_RG_RSTB_DECODER_VA32 = MT6351_PMIC_RG_RSTB_DECODER_VA32,
	PMIC_RG_SEL_DECODER_96K_VA32 = MT6351_PMIC_RG_SEL_DECODER_96K_VA32,
	PMIC_RG_SEL_DELAY_VCORE = MT6351_PMIC_RG_SEL_DELAY_VCORE,
	PMIC_RG_AUDGLB_PWRDN_VA32 = MT6351_PMIC_RG_AUDGLB_PWRDN_VA32,
	PMIC_RG_LCLDO_DEC_EN_VA32 = MT6351_PMIC_RG_LCLDO_DEC_EN_VA32,
	PMIC_RG_LCLDO_DEC_PDDIS_EN_VA18 =
	    MT6351_PMIC_RG_LCLDO_DEC_PDDIS_EN_VA18,
	PMIC_RG_LCLDO_DEC_REMOTE_SENSE_VA18 =
	    MT6351_PMIC_RG_LCLDO_DEC_REMOTE_SENSE_VA18,
	PMIC_RG_AUDPMU_RSVD_VA18 = MT6351_PMIC_RG_AUDPMU_RSVD_VA18,
	PMIC_RG_NVREG_EN_VAUDP32 = MT6351_PMIC_RG_NVREG_EN_VAUDP32,
	PMIC_RG_NVREG_PULL0V_VAUDP32 = MT6351_PMIC_RG_NVREG_PULL0V_VAUDP32,
	PMIC_RG_AUDGLB_LP2_VOW_EN_VA32 = MT6351_PMIC_RG_AUDGLB_LP2_VOW_EN_VA32,
	PMIC_RG_AUDPREAMPLON = MT6351_PMIC_RG_AUDPREAMPLON,
	PMIC_RG_AUDPREAMPLDCCEN = MT6351_PMIC_RG_AUDPREAMPLDCCEN,
	PMIC_RG_AUDPREAMPLDCPRECHARGE = MT6351_PMIC_RG_AUDPREAMPLDCPRECHARGE,
	PMIC_RG_AUDPREAMPLPGATEST = MT6351_PMIC_RG_AUDPREAMPLPGATEST,
	PMIC_RG_AUDPREAMPLINPUTSEL = MT6351_PMIC_RG_AUDPREAMPLINPUTSEL,
	PMIC_RG_AUDPREAMPLVSCALE = MT6351_PMIC_RG_AUDPREAMPLVSCALE,
	PMIC_RG_AUDPREAMPLGAIN = MT6351_PMIC_RG_AUDPREAMPLGAIN,
	PMIC_RG_AUDADCLPWRUP = MT6351_PMIC_RG_AUDADCLPWRUP,
	PMIC_RG_AUDADCLINPUTSEL = MT6351_PMIC_RG_AUDADCLINPUTSEL,
	PMIC_RG_AUDPREAMPRON = MT6351_PMIC_RG_AUDPREAMPRON,
	PMIC_RG_AUDPREAMPRDCCEN = MT6351_PMIC_RG_AUDPREAMPRDCCEN,
	PMIC_RG_AUDPREAMPRDCPRECHARGE = MT6351_PMIC_RG_AUDPREAMPRDCPRECHARGE,
	PMIC_RG_AUDPREAMPRPGATEST = MT6351_PMIC_RG_AUDPREAMPRPGATEST,
	PMIC_RG_AUDPREAMPRINPUTSEL = MT6351_PMIC_RG_AUDPREAMPRINPUTSEL,
	PMIC_RG_AUDPREAMPRVSCALE = MT6351_PMIC_RG_AUDPREAMPRVSCALE,
	PMIC_RG_AUDPREAMPRGAIN = MT6351_PMIC_RG_AUDPREAMPRGAIN,
	PMIC_RG_AUDADCRPWRUP = MT6351_PMIC_RG_AUDADCRPWRUP,
	PMIC_RG_AUDADCRINPUTSEL = MT6351_PMIC_RG_AUDADCRINPUTSEL,
	PMIC_RG_AUDULHALFBIAS = MT6351_PMIC_RG_AUDULHALFBIAS,
	PMIC_RG_AUDGLBVOWLPWEN = MT6351_PMIC_RG_AUDGLBVOWLPWEN,
	PMIC_RG_AUDPREAMPLPEN = MT6351_PMIC_RG_AUDPREAMPLPEN,
	PMIC_RG_AUDADC1STSTAGELPEN = MT6351_PMIC_RG_AUDADC1STSTAGELPEN,
	PMIC_RG_AUDADC2NDSTAGELPEN = MT6351_PMIC_RG_AUDADC2NDSTAGELPEN,
	PMIC_RG_AUDADCFLASHLPEN = MT6351_PMIC_RG_AUDADCFLASHLPEN,
	PMIC_RG_AUDPREAMPIDDTEST = MT6351_PMIC_RG_AUDPREAMPIDDTEST,
	PMIC_RG_AUDADC1STSTAGEIDDTEST = MT6351_PMIC_RG_AUDADC1STSTAGEIDDTEST,
	PMIC_RG_AUDADC2NDSTAGEIDDTEST = MT6351_PMIC_RG_AUDADC2NDSTAGEIDDTEST,
	PMIC_RG_AUDADCREFBUFIDDTEST = MT6351_PMIC_RG_AUDADCREFBUFIDDTEST,
	PMIC_RG_AUDADCFLASHIDDTEST = MT6351_PMIC_RG_AUDADCFLASHIDDTEST,
	PMIC_RG_AUDADCDAC0P25FS = MT6351_PMIC_RG_AUDADCDAC0P25FS,
	PMIC_RG_AUDADCCLKSEL = MT6351_PMIC_RG_AUDADCCLKSEL,
	PMIC_RG_AUDADCCLKSOURCE = MT6351_PMIC_RG_AUDADCCLKSOURCE,
	PMIC_RG_AUDADCCLKGENMODE = MT6351_PMIC_RG_AUDADCCLKGENMODE,
	PMIC_RG_AUDADCCLKRSTB = MT6351_PMIC_RG_AUDADCCLKRSTB,
	PMIC_RG_AUDPREAMPAAFEN = MT6351_PMIC_RG_AUDPREAMPAAFEN,
	PMIC_RG_DCCVCMBUFLPMODSEL = MT6351_PMIC_RG_DCCVCMBUFLPMODSEL,
	PMIC_RG_DCCVCMBUFLPSWEN = MT6351_PMIC_RG_DCCVCMBUFLPSWEN,
	PMIC_RG_AUDSPAREPGA = MT6351_PMIC_RG_AUDSPAREPGA,
	PMIC_RG_AUDADC1STSTAGESDENB = MT6351_PMIC_RG_AUDADC1STSTAGESDENB,
	PMIC_RG_AUDADC2NDSTAGERESET = MT6351_PMIC_RG_AUDADC2NDSTAGERESET,
	PMIC_RG_AUDADC3RDSTAGERESET = MT6351_PMIC_RG_AUDADC3RDSTAGERESET,
	PMIC_RG_AUDADCFSRESET = MT6351_PMIC_RG_AUDADCFSRESET,
	PMIC_RG_AUDADCWIDECM = MT6351_PMIC_RG_AUDADCWIDECM,
	PMIC_RG_AUDADCNOPATEST = MT6351_PMIC_RG_AUDADCNOPATEST,
	PMIC_RG_AUDADCBYPASS = MT6351_PMIC_RG_AUDADCBYPASS,
	PMIC_RG_AUDADCFFBYPASS = MT6351_PMIC_RG_AUDADCFFBYPASS,
	PMIC_RG_AUDADCDACFBCURRENT = MT6351_PMIC_RG_AUDADCDACFBCURRENT,
	PMIC_RG_AUDADCDACIDDTEST = MT6351_PMIC_RG_AUDADCDACIDDTEST,
	PMIC_RG_AUDADCDACNRZ = MT6351_PMIC_RG_AUDADCDACNRZ,
	PMIC_RG_AUDADCNODEM = MT6351_PMIC_RG_AUDADCNODEM,
	PMIC_RG_AUDADCDACTEST = MT6351_PMIC_RG_AUDADCDACTEST,
	PMIC_RG_AUDADCTESTDATA = MT6351_PMIC_RG_AUDADCTESTDATA,
	PMIC_RG_AUDRCTUNEL = MT6351_PMIC_RG_AUDRCTUNEL,
	PMIC_RG_AUDRCTUNELSEL = MT6351_PMIC_RG_AUDRCTUNELSEL,
	PMIC_RG_AUDRCTUNER = MT6351_PMIC_RG_AUDRCTUNER,
	PMIC_RG_AUDRCTUNERSEL = MT6351_PMIC_RG_AUDRCTUNERSEL,
	PMIC_RG_AUDSPAREVA30 = MT6351_PMIC_RG_AUDSPAREVA30,
	PMIC_RG_AUDSPAREVA18 = MT6351_PMIC_RG_AUDSPAREVA18,
	PMIC_RG_AUDDIGMICEN = MT6351_PMIC_RG_AUDDIGMICEN,
	PMIC_RG_AUDDIGMICBIAS = MT6351_PMIC_RG_AUDDIGMICBIAS,
	PMIC_RG_DMICHPCLKEN = MT6351_PMIC_RG_DMICHPCLKEN,
	PMIC_RG_AUDDIGMICPDUTY = MT6351_PMIC_RG_AUDDIGMICPDUTY,
	PMIC_RG_AUDDIGMICNDUTY = MT6351_PMIC_RG_AUDDIGMICNDUTY,
	PMIC_RG_DMICMONEN = MT6351_PMIC_RG_DMICMONEN,
	PMIC_RG_DMICMONSEL = MT6351_PMIC_RG_DMICMONSEL,
	PMIC_RG_AUDSPAREVMIC = MT6351_PMIC_RG_AUDSPAREVMIC,
	PMIC_RG_AUDPWDBMICBIAS0 = MT6351_PMIC_RG_AUDPWDBMICBIAS0,
	PMIC_RG_AUDMICBIAS0DCSW0P1EN = MT6351_PMIC_RG_AUDMICBIAS0DCSW0P1EN,
	PMIC_RG_AUDMICBIAS0DCSW0P2EN = MT6351_PMIC_RG_AUDMICBIAS0DCSW0P2EN,
	PMIC_RG_AUDMICBIAS0DCSW0NEN = MT6351_PMIC_RG_AUDMICBIAS0DCSW0NEN,
	PMIC_RG_AUDMICBIAS0VREF = MT6351_PMIC_RG_AUDMICBIAS0VREF,
	PMIC_RG_AUDMICBIAS0LOWPEN = MT6351_PMIC_RG_AUDMICBIAS0LOWPEN,
	PMIC_RG_AUDPWDBMICBIAS2 = MT6351_PMIC_RG_AUDPWDBMICBIAS2,
	PMIC_RG_AUDMICBIAS2DCSW2P1EN = MT6351_PMIC_RG_AUDMICBIAS2DCSW2P1EN,
	PMIC_RG_AUDMICBIAS2DCSW2P2EN = MT6351_PMIC_RG_AUDMICBIAS2DCSW2P2EN,
	PMIC_RG_AUDMICBIAS2DCSW2NEN = MT6351_PMIC_RG_AUDMICBIAS2DCSW2NEN,
	PMIC_RG_AUDMICBIAS2VREF = MT6351_PMIC_RG_AUDMICBIAS2VREF,
	PMIC_RG_AUDMICBIAS2LOWPEN = MT6351_PMIC_RG_AUDMICBIAS2LOWPEN,
	PMIC_RG_AUDPWDBMICBIAS1 = MT6351_PMIC_RG_AUDPWDBMICBIAS1,
	PMIC_RG_AUDMICBIAS1DCSW1PEN = MT6351_PMIC_RG_AUDMICBIAS1DCSW1PEN,
	PMIC_RG_AUDMICBIAS1DCSW1NEN = MT6351_PMIC_RG_AUDMICBIAS1DCSW1NEN,
	PMIC_RG_AUDMICBIAS1VREF = MT6351_PMIC_RG_AUDMICBIAS1VREF,
	PMIC_RG_AUDMICBIAS1LOWPEN = MT6351_PMIC_RG_AUDMICBIAS1LOWPEN,
	PMIC_RG_AUDMICBIAS1DCSW3PEN = MT6351_PMIC_RG_AUDMICBIAS1DCSW3PEN,
	PMIC_RG_AUDMICBIAS1DCSW3NEN = MT6351_PMIC_RG_AUDMICBIAS1DCSW3NEN,
	PMIC_RG_AUDMICBIAS2DCSW3PEN = MT6351_PMIC_RG_AUDMICBIAS2DCSW3PEN,
	PMIC_RG_AUDMICBIAS2DCSW3NEN = MT6351_PMIC_RG_AUDMICBIAS2DCSW3NEN,
	PMIC_RG_BANDGAPGEN = MT6351_PMIC_RG_BANDGAPGEN,
	PMIC_RG_AUDACCDETMICBIAS0PULLLOW =
	    MT6351_PMIC_RG_AUDACCDETMICBIAS0PULLLOW,
	PMIC_RG_AUDACCDETMICBIAS1PULLLOW =
	    MT6351_PMIC_RG_AUDACCDETMICBIAS1PULLLOW,
	PMIC_RG_AUDACCDETMICBIAS2PULLLOW =
	    MT6351_PMIC_RG_AUDACCDETMICBIAS2PULLLOW,
	PMIC_RG_AUDACCDETVIN1PULLLOW = MT6351_PMIC_RG_AUDACCDETVIN1PULLLOW,
	PMIC_RG_AUDACCDETVTHACAL = MT6351_PMIC_RG_AUDACCDETVTHACAL,
	PMIC_RG_AUDACCDETVTHBCAL = MT6351_PMIC_RG_AUDACCDETVTHBCAL,
	PMIC_RG_ACCDET1SEL = MT6351_PMIC_RG_ACCDET1SEL,
	PMIC_RG_ACCDET2SEL = MT6351_PMIC_RG_ACCDET2SEL,
	PMIC_RG_SWBUFMODSEL = MT6351_PMIC_RG_SWBUFMODSEL,
	PMIC_RG_SWBUFSWEN = MT6351_PMIC_RG_SWBUFSWEN,
	PMIC_RG_EINTCOMPVTH = MT6351_PMIC_RG_EINTCOMPVTH,
	PMIC_RG_EINTCONFIGACCDET = MT6351_PMIC_RG_EINTCONFIGACCDET,
	PMIC_RG_NVDETCMPEN = MT6351_PMIC_RG_NVDETCMPEN,
	PMIC_RG_NVDETVTH = MT6351_PMIC_RG_NVDETVTH,
	PMIC_RG_NVMODSEL = MT6351_PMIC_RG_NVMODSEL,
	PMIC_RG_NVCMPSWEN = MT6351_PMIC_RG_NVCMPSWEN,
	PMIC_RG_AUDENCSPAREVA30 = MT6351_PMIC_RG_AUDENCSPAREVA30,
	PMIC_RG_AUDENCSPAREVA18 = MT6351_PMIC_RG_AUDENCSPAREVA18,
	PMIC_RG_PLL_EN = MT6351_PMIC_RG_PLL_EN,
	PMIC_RG_PLLBS_RST = MT6351_PMIC_RG_PLLBS_RST,
	PMIC_RG_PLL_DCKO_SEL = MT6351_PMIC_RG_PLL_DCKO_SEL,
	PMIC_RG_PLL_DIV1 = MT6351_PMIC_RG_PLL_DIV1,
	PMIC_RG_PLL_RLATCH_EN = MT6351_PMIC_RG_PLL_RLATCH_EN,
	PMIC_RG_PLL_PDIV1_EN = MT6351_PMIC_RG_PLL_PDIV1_EN,
	PMIC_RG_PLL_PDIV1 = MT6351_PMIC_RG_PLL_PDIV1,
	PMIC_RG_PLL_BC = MT6351_PMIC_RG_PLL_BC,
	PMIC_RG_PLL_BP = MT6351_PMIC_RG_PLL_BP,
	PMIC_RG_PLL_BR = MT6351_PMIC_RG_PLL_BR,
	PMIC_RG_CKO_SEL = MT6351_PMIC_RG_CKO_SEL,
	PMIC_RG_PLL_IBSEL = MT6351_PMIC_RG_PLL_IBSEL,
	PMIC_RG_PLL_CKT_SEL = MT6351_PMIC_RG_PLL_CKT_SEL,
	PMIC_RG_PLL_VCT_EN = MT6351_PMIC_RG_PLL_VCT_EN,
	PMIC_RG_PLL_CKT_EN = MT6351_PMIC_RG_PLL_CKT_EN,
	PMIC_RG_PLL_HPM_EN = MT6351_PMIC_RG_PLL_HPM_EN,
	PMIC_RG_PLL_DCHP_EN = MT6351_PMIC_RG_PLL_DCHP_EN,
	PMIC_RG_PLL_CDIV = MT6351_PMIC_RG_PLL_CDIV,
	PMIC_RG_VCOBAND = MT6351_PMIC_RG_VCOBAND,
	PMIC_RG_CKDRV_EN = MT6351_PMIC_RG_CKDRV_EN,
	PMIC_RG_PLL_DCHP_AEN = MT6351_PMIC_RG_PLL_DCHP_AEN,
	PMIC_RG_PLL_RSVA = MT6351_PMIC_RG_PLL_RSVA,
	PMIC_RGS_AUDRCTUNELREAD = MT6351_PMIC_RGS_AUDRCTUNELREAD,
	PMIC_RGS_AUDRCTUNERREAD = MT6351_PMIC_RGS_AUDRCTUNERREAD,
	PMIC_RG_DIVCKS_CHG = MT6351_PMIC_RG_DIVCKS_CHG,
	PMIC_RG_DIVCKS_ON = MT6351_PMIC_RG_DIVCKS_ON,
	PMIC_RG_DIVCKS_PRG = MT6351_PMIC_RG_DIVCKS_PRG,
	PMIC_RG_DIVCKS_PWD_NCP = MT6351_PMIC_RG_DIVCKS_PWD_NCP,
	PMIC_RG_DIVCKS_PWD_NCP_ST_SEL = MT6351_PMIC_RG_DIVCKS_PWD_NCP_ST_SEL,
	PMIC_AUXADC_ADC_OUT_CH0 = MT6351_PMIC_AUXADC_ADC_OUT_CH0,
	PMIC_AUXADC_ADC_RDY_CH0 = MT6351_PMIC_AUXADC_ADC_RDY_CH0,
	PMIC_AUXADC_ADC_OUT_CH1 = MT6351_PMIC_AUXADC_ADC_OUT_CH1,
	PMIC_AUXADC_ADC_RDY_CH1 = MT6351_PMIC_AUXADC_ADC_RDY_CH1,
	PMIC_AUXADC_ADC_OUT_CH2 = MT6351_PMIC_AUXADC_ADC_OUT_CH2,
	PMIC_AUXADC_ADC_RDY_CH2 = MT6351_PMIC_AUXADC_ADC_RDY_CH2,
	PMIC_AUXADC_ADC_OUT_CH3 = MT6351_PMIC_AUXADC_ADC_OUT_CH3,
	PMIC_AUXADC_ADC_RDY_CH3 = MT6351_PMIC_AUXADC_ADC_RDY_CH3,
	PMIC_AUXADC_ADC_OUT_CH4 = MT6351_PMIC_AUXADC_ADC_OUT_CH4,
	PMIC_AUXADC_ADC_RDY_CH4 = MT6351_PMIC_AUXADC_ADC_RDY_CH4,
	PMIC_AUXADC_ADC_OUT_CH5 = MT6351_PMIC_AUXADC_ADC_OUT_CH5,
	PMIC_AUXADC_ADC_RDY_CH5 = MT6351_PMIC_AUXADC_ADC_RDY_CH5,
	PMIC_AUXADC_ADC_OUT_CH6 = MT6351_PMIC_AUXADC_ADC_OUT_CH6,
	PMIC_AUXADC_ADC_RDY_CH6 = MT6351_PMIC_AUXADC_ADC_RDY_CH6,
	PMIC_AUXADC_ADC_OUT_CH7 = MT6351_PMIC_AUXADC_ADC_OUT_CH7,
	PMIC_AUXADC_ADC_RDY_CH7 = MT6351_PMIC_AUXADC_ADC_RDY_CH7,
	PMIC_AUXADC_ADC_OUT_CH8 = MT6351_PMIC_AUXADC_ADC_OUT_CH8,
	PMIC_AUXADC_ADC_RDY_CH8 = MT6351_PMIC_AUXADC_ADC_RDY_CH8,
	PMIC_AUXADC_ADC_OUT_CH9 = MT6351_PMIC_AUXADC_ADC_OUT_CH9,
	PMIC_AUXADC_ADC_RDY_CH9 = MT6351_PMIC_AUXADC_ADC_RDY_CH9,
	PMIC_AUXADC_ADC_OUT_CH10 = MT6351_PMIC_AUXADC_ADC_OUT_CH10,
	PMIC_AUXADC_ADC_RDY_CH10 = MT6351_PMIC_AUXADC_ADC_RDY_CH10,
	PMIC_AUXADC_ADC_OUT_CH11 = MT6351_PMIC_AUXADC_ADC_OUT_CH11,
	PMIC_AUXADC_ADC_RDY_CH11 = MT6351_PMIC_AUXADC_ADC_RDY_CH11,
	PMIC_AUXADC_ADC_OUT_CH12_15 = MT6351_PMIC_AUXADC_ADC_OUT_CH12_15,
	PMIC_AUXADC_ADC_RDY_CH12_15 = MT6351_PMIC_AUXADC_ADC_RDY_CH12_15,
	PMIC_AUXADC_ADC_OUT_THR_HW = MT6351_PMIC_AUXADC_ADC_OUT_THR_HW,
	PMIC_AUXADC_ADC_RDY_THR_HW = MT6351_PMIC_AUXADC_ADC_RDY_THR_HW,
	PMIC_AUXADC_ADC_OUT_LBAT = MT6351_PMIC_AUXADC_ADC_OUT_LBAT,
	PMIC_AUXADC_ADC_RDY_LBAT = MT6351_PMIC_AUXADC_ADC_RDY_LBAT,
	PMIC_AUXADC_ADC_OUT_LBAT2 = MT6351_PMIC_AUXADC_ADC_OUT_LBAT2,
	PMIC_AUXADC_ADC_RDY_LBAT2 = MT6351_PMIC_AUXADC_ADC_RDY_LBAT2,
	PMIC_AUXADC_ADC_OUT_CH7_BY_GPS = MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_GPS,
	PMIC_AUXADC_ADC_RDY_CH7_BY_GPS = MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_GPS,
	PMIC_AUXADC_ADC_OUT_CH7_BY_MD = MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_MD,
	PMIC_AUXADC_ADC_RDY_CH7_BY_MD = MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_MD,
	PMIC_AUXADC_ADC_OUT_CH7_BY_AP = MT6351_PMIC_AUXADC_ADC_OUT_CH7_BY_AP,
	PMIC_AUXADC_ADC_RDY_CH7_BY_AP = MT6351_PMIC_AUXADC_ADC_RDY_CH7_BY_AP,
	PMIC_AUXADC_ADC_OUT_CH4_BY_MD = MT6351_PMIC_AUXADC_ADC_OUT_CH4_BY_MD,
	PMIC_AUXADC_ADC_RDY_CH4_BY_MD = MT6351_PMIC_AUXADC_ADC_RDY_CH4_BY_MD,
	PMIC_AUXADC_ADC_OUT_WAKEUP_PCHR =
	    MT6351_PMIC_AUXADC_ADC_OUT_WAKEUP_PCHR,
	PMIC_AUXADC_ADC_RDY_WAKEUP_PCHR =
	    MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_PCHR,
	PMIC_AUXADC_ADC_OUT_WAKEUP_SWCHR =
	    MT6351_PMIC_AUXADC_ADC_OUT_WAKEUP_SWCHR,
	PMIC_AUXADC_ADC_RDY_WAKEUP_SWCHR =
	    MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_SWCHR,
	PMIC_AUXADC_ADC_OUT_CH0_BY_MD = MT6351_PMIC_AUXADC_ADC_OUT_CH0_BY_MD,
	PMIC_AUXADC_ADC_RDY_CH0_BY_MD = MT6351_PMIC_AUXADC_ADC_RDY_CH0_BY_MD,
	PMIC_AUXADC_ADC_OUT_CH0_BY_AP = MT6351_PMIC_AUXADC_ADC_OUT_CH0_BY_AP,
	PMIC_AUXADC_ADC_RDY_CH0_BY_AP = MT6351_PMIC_AUXADC_ADC_RDY_CH0_BY_AP,
	PMIC_AUXADC_ADC_OUT_CH1_BY_MD = MT6351_PMIC_AUXADC_ADC_OUT_CH1_BY_MD,
	PMIC_AUXADC_ADC_RDY_CH1_BY_MD = MT6351_PMIC_AUXADC_ADC_RDY_CH1_BY_MD,
	PMIC_AUXADC_ADC_OUT_CH1_BY_AP = MT6351_PMIC_AUXADC_ADC_OUT_CH1_BY_AP,
	PMIC_AUXADC_ADC_RDY_CH1_BY_AP = MT6351_PMIC_AUXADC_ADC_RDY_CH1_BY_AP,
	PMIC_AUXADC_ADC_OUT_VISMPS0 = MT6351_PMIC_AUXADC_ADC_OUT_VISMPS0,
	PMIC_AUXADC_ADC_RDY_VISMPS0 = MT6351_PMIC_AUXADC_ADC_RDY_VISMPS0,
	PMIC_AUXADC_ADC_OUT_FGADC1 = MT6351_PMIC_AUXADC_ADC_OUT_FGADC1,
	PMIC_AUXADC_ADC_RDY_FGADC1 = MT6351_PMIC_AUXADC_ADC_RDY_FGADC1,
	PMIC_AUXADC_ADC_OUT_FGADC2 = MT6351_PMIC_AUXADC_ADC_OUT_FGADC2,
	PMIC_AUXADC_ADC_RDY_FGADC2 = MT6351_PMIC_AUXADC_ADC_RDY_FGADC2,
	PMIC_AUXADC_ADC_OUT_IMP = MT6351_PMIC_AUXADC_ADC_OUT_IMP,
	PMIC_AUXADC_ADC_RDY_IMP = MT6351_PMIC_AUXADC_ADC_RDY_IMP,
	PMIC_AUXADC_ADC_OUT_IMP_AVG = MT6351_PMIC_AUXADC_ADC_OUT_IMP_AVG,
	PMIC_AUXADC_ADC_RDY_IMP_AVG = MT6351_PMIC_AUXADC_ADC_RDY_IMP_AVG,
	PMIC_AUXADC_ADC_OUT_RAW = MT6351_PMIC_AUXADC_ADC_OUT_RAW,
	PMIC_AUXADC_ADC_OUT_MDRT = MT6351_PMIC_AUXADC_ADC_OUT_MDRT,
	PMIC_AUXADC_ADC_RDY_MDRT = MT6351_PMIC_AUXADC_ADC_RDY_MDRT,
	PMIC_AUXADC_ADC_OUT_MDBG = MT6351_PMIC_AUXADC_ADC_OUT_MDBG,
	PMIC_AUXADC_ADC_RDY_MDBG = MT6351_PMIC_AUXADC_ADC_RDY_MDBG,
	PMIC_AUXADC_ADC_OUT_JEITA = MT6351_PMIC_AUXADC_ADC_OUT_JEITA,
	PMIC_AUXADC_ADC_RDY_JEITA = MT6351_PMIC_AUXADC_ADC_RDY_JEITA,
	PMIC_AUXADC_ADC_OUT_DCXO_BY_GPS =
	    MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_GPS,
	PMIC_AUXADC_ADC_RDY_DCXO_BY_GPS =
	    MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_GPS,
	PMIC_AUXADC_ADC_OUT_DCXO_BY_MD = MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_MD,
	PMIC_AUXADC_ADC_RDY_DCXO_BY_MD = MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_MD,
	PMIC_AUXADC_ADC_OUT_DCXO_BY_AP = MT6351_PMIC_AUXADC_ADC_OUT_DCXO_BY_AP,
	PMIC_AUXADC_ADC_RDY_DCXO_BY_AP = MT6351_PMIC_AUXADC_ADC_RDY_DCXO_BY_AP,
	PMIC_AUXADC_ADC_OUT_DCXO_MDRT = MT6351_PMIC_AUXADC_ADC_OUT_DCXO_MDRT,
	PMIC_AUXADC_ADC_RDY_DCXO_MDRT = MT6351_PMIC_AUXADC_ADC_RDY_DCXO_MDRT,
	PMIC_AUXADC_ADC_OUT_NAG = MT6351_PMIC_AUXADC_ADC_OUT_NAG,
	PMIC_AUXADC_ADC_RDY_NAG = MT6351_PMIC_AUXADC_ADC_RDY_NAG,
	PMIC_AUXADC_BUF_OUT_00 = MT6351_PMIC_AUXADC_BUF_OUT_00,
	PMIC_AUXADC_BUF_RDY_00 = MT6351_PMIC_AUXADC_BUF_RDY_00,
	PMIC_AUXADC_BUF_OUT_01 = MT6351_PMIC_AUXADC_BUF_OUT_01,
	PMIC_AUXADC_BUF_RDY_01 = MT6351_PMIC_AUXADC_BUF_RDY_01,
	PMIC_AUXADC_BUF_OUT_02 = MT6351_PMIC_AUXADC_BUF_OUT_02,
	PMIC_AUXADC_BUF_RDY_02 = MT6351_PMIC_AUXADC_BUF_RDY_02,
	PMIC_AUXADC_BUF_OUT_03 = MT6351_PMIC_AUXADC_BUF_OUT_03,
	PMIC_AUXADC_BUF_RDY_03 = MT6351_PMIC_AUXADC_BUF_RDY_03,
	PMIC_AUXADC_BUF_OUT_04 = MT6351_PMIC_AUXADC_BUF_OUT_04,
	PMIC_AUXADC_BUF_RDY_04 = MT6351_PMIC_AUXADC_BUF_RDY_04,
	PMIC_AUXADC_BUF_OUT_05 = MT6351_PMIC_AUXADC_BUF_OUT_05,
	PMIC_AUXADC_BUF_RDY_05 = MT6351_PMIC_AUXADC_BUF_RDY_05,
	PMIC_AUXADC_BUF_OUT_06 = MT6351_PMIC_AUXADC_BUF_OUT_06,
	PMIC_AUXADC_BUF_RDY_06 = MT6351_PMIC_AUXADC_BUF_RDY_06,
	PMIC_AUXADC_BUF_OUT_07 = MT6351_PMIC_AUXADC_BUF_OUT_07,
	PMIC_AUXADC_BUF_RDY_07 = MT6351_PMIC_AUXADC_BUF_RDY_07,
	PMIC_AUXADC_BUF_OUT_08 = MT6351_PMIC_AUXADC_BUF_OUT_08,
	PMIC_AUXADC_BUF_RDY_08 = MT6351_PMIC_AUXADC_BUF_RDY_08,
	PMIC_AUXADC_BUF_OUT_09 = MT6351_PMIC_AUXADC_BUF_OUT_09,
	PMIC_AUXADC_BUF_RDY_09 = MT6351_PMIC_AUXADC_BUF_RDY_09,
	PMIC_AUXADC_BUF_OUT_10 = MT6351_PMIC_AUXADC_BUF_OUT_10,
	PMIC_AUXADC_BUF_RDY_10 = MT6351_PMIC_AUXADC_BUF_RDY_10,
	PMIC_AUXADC_BUF_OUT_11 = MT6351_PMIC_AUXADC_BUF_OUT_11,
	PMIC_AUXADC_BUF_RDY_11 = MT6351_PMIC_AUXADC_BUF_RDY_11,
	PMIC_AUXADC_BUF_OUT_12 = MT6351_PMIC_AUXADC_BUF_OUT_12,
	PMIC_AUXADC_BUF_RDY_12 = MT6351_PMIC_AUXADC_BUF_RDY_12,
	PMIC_AUXADC_BUF_OUT_13 = MT6351_PMIC_AUXADC_BUF_OUT_13,
	PMIC_AUXADC_BUF_RDY_13 = MT6351_PMIC_AUXADC_BUF_RDY_13,
	PMIC_AUXADC_BUF_OUT_14 = MT6351_PMIC_AUXADC_BUF_OUT_14,
	PMIC_AUXADC_BUF_RDY_14 = MT6351_PMIC_AUXADC_BUF_RDY_14,
	PMIC_AUXADC_BUF_OUT_15 = MT6351_PMIC_AUXADC_BUF_OUT_15,
	PMIC_AUXADC_BUF_RDY_15 = MT6351_PMIC_AUXADC_BUF_RDY_15,
	PMIC_AUXADC_BUF_OUT_16 = MT6351_PMIC_AUXADC_BUF_OUT_16,
	PMIC_AUXADC_BUF_RDY_16 = MT6351_PMIC_AUXADC_BUF_RDY_16,
	PMIC_AUXADC_BUF_OUT_17 = MT6351_PMIC_AUXADC_BUF_OUT_17,
	PMIC_AUXADC_BUF_RDY_17 = MT6351_PMIC_AUXADC_BUF_RDY_17,
	PMIC_AUXADC_BUF_OUT_18 = MT6351_PMIC_AUXADC_BUF_OUT_18,
	PMIC_AUXADC_BUF_RDY_18 = MT6351_PMIC_AUXADC_BUF_RDY_18,
	PMIC_AUXADC_BUF_OUT_19 = MT6351_PMIC_AUXADC_BUF_OUT_19,
	PMIC_AUXADC_BUF_RDY_19 = MT6351_PMIC_AUXADC_BUF_RDY_19,
	PMIC_AUXADC_BUF_OUT_20 = MT6351_PMIC_AUXADC_BUF_OUT_20,
	PMIC_AUXADC_BUF_RDY_20 = MT6351_PMIC_AUXADC_BUF_RDY_20,
	PMIC_AUXADC_BUF_OUT_21 = MT6351_PMIC_AUXADC_BUF_OUT_21,
	PMIC_AUXADC_BUF_RDY_21 = MT6351_PMIC_AUXADC_BUF_RDY_21,
	PMIC_AUXADC_BUF_OUT_22 = MT6351_PMIC_AUXADC_BUF_OUT_22,
	PMIC_AUXADC_BUF_RDY_22 = MT6351_PMIC_AUXADC_BUF_RDY_22,
	PMIC_AUXADC_BUF_OUT_23 = MT6351_PMIC_AUXADC_BUF_OUT_23,
	PMIC_AUXADC_BUF_RDY_23 = MT6351_PMIC_AUXADC_BUF_RDY_23,
	PMIC_AUXADC_BUF_OUT_24 = MT6351_PMIC_AUXADC_BUF_OUT_24,
	PMIC_AUXADC_BUF_RDY_24 = MT6351_PMIC_AUXADC_BUF_RDY_24,
	PMIC_AUXADC_BUF_OUT_25 = MT6351_PMIC_AUXADC_BUF_OUT_25,
	PMIC_AUXADC_BUF_RDY_25 = MT6351_PMIC_AUXADC_BUF_RDY_25,
	PMIC_AUXADC_BUF_OUT_26 = MT6351_PMIC_AUXADC_BUF_OUT_26,
	PMIC_AUXADC_BUF_RDY_26 = MT6351_PMIC_AUXADC_BUF_RDY_26,
	PMIC_AUXADC_BUF_OUT_27 = MT6351_PMIC_AUXADC_BUF_OUT_27,
	PMIC_AUXADC_BUF_RDY_27 = MT6351_PMIC_AUXADC_BUF_RDY_27,
	PMIC_AUXADC_BUF_OUT_28 = MT6351_PMIC_AUXADC_BUF_OUT_28,
	PMIC_AUXADC_BUF_RDY_28 = MT6351_PMIC_AUXADC_BUF_RDY_28,
	PMIC_AUXADC_BUF_OUT_29 = MT6351_PMIC_AUXADC_BUF_OUT_29,
	PMIC_AUXADC_BUF_RDY_29 = MT6351_PMIC_AUXADC_BUF_RDY_29,
	PMIC_AUXADC_BUF_OUT_30 = MT6351_PMIC_AUXADC_BUF_OUT_30,
	PMIC_AUXADC_BUF_RDY_30 = MT6351_PMIC_AUXADC_BUF_RDY_30,
	PMIC_AUXADC_BUF_OUT_31 = MT6351_PMIC_AUXADC_BUF_OUT_31,
	PMIC_AUXADC_BUF_RDY_31 = MT6351_PMIC_AUXADC_BUF_RDY_31,
	PMIC_AUXADC_ADC_BUSY_IN = MT6351_PMIC_AUXADC_ADC_BUSY_IN,
	PMIC_AUXADC_ADC_BUSY_IN_LBAT = MT6351_PMIC_AUXADC_ADC_BUSY_IN_LBAT,
	PMIC_AUXADC_ADC_BUSY_IN_LBAT2 = MT6351_PMIC_AUXADC_ADC_BUSY_IN_LBAT2,
	PMIC_AUXADC_ADC_BUSY_IN_VISMPS0 =
	    MT6351_PMIC_AUXADC_ADC_BUSY_IN_VISMPS0,
	PMIC_AUXADC_ADC_BUSY_IN_WAKEUP = MT6351_PMIC_AUXADC_ADC_BUSY_IN_WAKEUP,
	PMIC_AUXADC_ADC_BUSY_IN_DCXO_MDRT =
	    MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_MDRT,
	PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP =
	    MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP,
	PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD =
	    MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD,
	PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS =
	    MT6351_PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS,
	PMIC_AUXADC_ADC_BUSY_IN_JEITA = MT6351_PMIC_AUXADC_ADC_BUSY_IN_JEITA,
	PMIC_AUXADC_ADC_BUSY_IN_MDRT = MT6351_PMIC_AUXADC_ADC_BUSY_IN_MDRT,
	PMIC_AUXADC_ADC_BUSY_IN_MDBG = MT6351_PMIC_AUXADC_ADC_BUSY_IN_MDBG,
	PMIC_AUXADC_ADC_BUSY_IN_SHARE = MT6351_PMIC_AUXADC_ADC_BUSY_IN_SHARE,
	PMIC_AUXADC_ADC_BUSY_IN_IMP = MT6351_PMIC_AUXADC_ADC_BUSY_IN_IMP,
	PMIC_AUXADC_ADC_BUSY_IN_FGADC1 = MT6351_PMIC_AUXADC_ADC_BUSY_IN_FGADC1,
	PMIC_AUXADC_ADC_BUSY_IN_FGADC2 = MT6351_PMIC_AUXADC_ADC_BUSY_IN_FGADC2,
	PMIC_AUXADC_ADC_BUSY_IN_GPS_AP = MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_AP,
	PMIC_AUXADC_ADC_BUSY_IN_GPS_MD = MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS_MD,
	PMIC_AUXADC_ADC_BUSY_IN_GPS = MT6351_PMIC_AUXADC_ADC_BUSY_IN_GPS,
	PMIC_AUXADC_ADC_BUSY_IN_THR_HW = MT6351_PMIC_AUXADC_ADC_BUSY_IN_THR_HW,
	PMIC_AUXADC_ADC_BUSY_IN_THR_MD = MT6351_PMIC_AUXADC_ADC_BUSY_IN_THR_MD,
	PMIC_AUXADC_ADC_BUSY_IN_NAG = MT6351_PMIC_AUXADC_ADC_BUSY_IN_NAG,
	PMIC_AUXADC_RQST_CH0 = MT6351_PMIC_AUXADC_RQST_CH0,
	PMIC_AUXADC_RQST_CH1 = MT6351_PMIC_AUXADC_RQST_CH1,
	PMIC_AUXADC_RQST_CH2 = MT6351_PMIC_AUXADC_RQST_CH2,
	PMIC_AUXADC_RQST_CH3 = MT6351_PMIC_AUXADC_RQST_CH3,
	PMIC_AUXADC_RQST_CH4 = MT6351_PMIC_AUXADC_RQST_CH4,
	PMIC_AUXADC_RQST_CH5 = MT6351_PMIC_AUXADC_RQST_CH5,
	PMIC_AUXADC_RQST_CH6 = MT6351_PMIC_AUXADC_RQST_CH6,
	PMIC_AUXADC_RQST_CH7 = MT6351_PMIC_AUXADC_RQST_CH7,
	PMIC_AUXADC_RQST_CH8 = MT6351_PMIC_AUXADC_RQST_CH8,
	PMIC_AUXADC_RQST_CH9 = MT6351_PMIC_AUXADC_RQST_CH9,
	PMIC_AUXADC_RQST_CH10 = MT6351_PMIC_AUXADC_RQST_CH10,
	PMIC_AUXADC_RQST_CH11 = MT6351_PMIC_AUXADC_RQST_CH11,
	PMIC_AUXADC_RQST_CH12 = MT6351_PMIC_AUXADC_RQST_CH12,
	PMIC_AUXADC_RQST_CH13 = MT6351_PMIC_AUXADC_RQST_CH13,
	PMIC_AUXADC_RQST_CH14 = MT6351_PMIC_AUXADC_RQST_CH14,
	PMIC_AUXADC_RQST_CH15 = MT6351_PMIC_AUXADC_RQST_CH15,
	PMIC_AUXADC_RQST0_SET = MT6351_PMIC_AUXADC_RQST0_SET,
	PMIC_AUXADC_RQST0_CLR = MT6351_PMIC_AUXADC_RQST0_CLR,
	PMIC_AUXADC_RQST_CH0_BY_MD = MT6351_PMIC_AUXADC_RQST_CH0_BY_MD,
	PMIC_AUXADC_RQST_CH1_BY_MD = MT6351_PMIC_AUXADC_RQST_CH1_BY_MD,
	PMIC_AUXADC_RQST_RSV0 = MT6351_PMIC_AUXADC_RQST_RSV0,
	PMIC_AUXADC_RQST_CH4_BY_MD = MT6351_PMIC_AUXADC_RQST_CH4_BY_MD,
	PMIC_AUXADC_RQST_CH7_BY_MD = MT6351_PMIC_AUXADC_RQST_CH7_BY_MD,
	PMIC_AUXADC_RQST_CH7_BY_GPS = MT6351_PMIC_AUXADC_RQST_CH7_BY_GPS,
	PMIC_AUXADC_RQST_DCXO_BY_MD = MT6351_PMIC_AUXADC_RQST_DCXO_BY_MD,
	PMIC_AUXADC_RQST_DCXO_BY_GPS = MT6351_PMIC_AUXADC_RQST_DCXO_BY_GPS,
	PMIC_AUXADC_RQST_RSV1 = MT6351_PMIC_AUXADC_RQST_RSV1,
	PMIC_AUXADC_RQST1_SET = MT6351_PMIC_AUXADC_RQST1_SET,
	PMIC_AUXADC_RQST1_CLR = MT6351_PMIC_AUXADC_RQST1_CLR,
	PMIC_AUXADC_CK_ON_EXTD = MT6351_PMIC_AUXADC_CK_ON_EXTD,
	PMIC_AUXADC_SRCLKEN_SRC_SEL = MT6351_PMIC_AUXADC_SRCLKEN_SRC_SEL,
	PMIC_AUXADC_ADC_PWDB = MT6351_PMIC_AUXADC_ADC_PWDB,
	PMIC_AUXADC_ADC_PWDB_SWCTRL = MT6351_PMIC_AUXADC_ADC_PWDB_SWCTRL,
	PMIC_AUXADC_STRUP_CK_ON_ENB = MT6351_PMIC_AUXADC_STRUP_CK_ON_ENB,
	PMIC_AUXADC_ADC_RDY_WAKEUP_CLR = MT6351_PMIC_AUXADC_ADC_RDY_WAKEUP_CLR,
	PMIC_AUXADC_SRCLKEN_CK_EN = MT6351_PMIC_AUXADC_SRCLKEN_CK_EN,
	PMIC_AUXADC_CK_AON_GPS = MT6351_PMIC_AUXADC_CK_AON_GPS,
	PMIC_AUXADC_CK_AON_MD = MT6351_PMIC_AUXADC_CK_AON_MD,
	PMIC_AUXADC_CK_AON = MT6351_PMIC_AUXADC_CK_AON,
	PMIC_AUXADC_CON0_SET = MT6351_PMIC_AUXADC_CON0_SET,
	PMIC_AUXADC_CON0_CLR = MT6351_PMIC_AUXADC_CON0_CLR,
	PMIC_AUXADC_AVG_NUM_SMALL = MT6351_PMIC_AUXADC_AVG_NUM_SMALL,
	PMIC_AUXADC_AVG_NUM_LARGE = MT6351_PMIC_AUXADC_AVG_NUM_LARGE,
	PMIC_AUXADC_SPL_NUM = MT6351_PMIC_AUXADC_SPL_NUM,
	PMIC_AUXADC_AVG_NUM_SEL = MT6351_PMIC_AUXADC_AVG_NUM_SEL,
	PMIC_AUXADC_AVG_NUM_SEL_SHARE = MT6351_PMIC_AUXADC_AVG_NUM_SEL_SHARE,
	PMIC_AUXADC_AVG_NUM_SEL_LBAT = MT6351_PMIC_AUXADC_AVG_NUM_SEL_LBAT,
	PMIC_AUXADC_AVG_NUM_SEL_VISMPS = MT6351_PMIC_AUXADC_AVG_NUM_SEL_VISMPS,
	PMIC_AUXADC_AVG_NUM_SEL_WAKEUP = MT6351_PMIC_AUXADC_AVG_NUM_SEL_WAKEUP,
	PMIC_AUXADC_SPL_NUM_LARGE = MT6351_PMIC_AUXADC_SPL_NUM_LARGE,
	PMIC_AUXADC_SPL_NUM_SLEEP = MT6351_PMIC_AUXADC_SPL_NUM_SLEEP,
	PMIC_AUXADC_SPL_NUM_SLEEP_SEL = MT6351_PMIC_AUXADC_SPL_NUM_SLEEP_SEL,
	PMIC_AUXADC_SPL_NUM_SEL = MT6351_PMIC_AUXADC_SPL_NUM_SEL,
	PMIC_AUXADC_SPL_NUM_SEL_SHARE = MT6351_PMIC_AUXADC_SPL_NUM_SEL_SHARE,
	PMIC_AUXADC_SPL_NUM_SEL_LBAT = MT6351_PMIC_AUXADC_SPL_NUM_SEL_LBAT,
	PMIC_AUXADC_SPL_NUM_SEL_VISMPS = MT6351_PMIC_AUXADC_SPL_NUM_SEL_VISMPS,
	PMIC_AUXADC_SPL_NUM_SEL_WAKEUP = MT6351_PMIC_AUXADC_SPL_NUM_SEL_WAKEUP,
	PMIC_AUXADC_TRIM_CH0_SEL = MT6351_PMIC_AUXADC_TRIM_CH0_SEL,
	PMIC_AUXADC_TRIM_CH1_SEL = MT6351_PMIC_AUXADC_TRIM_CH1_SEL,
	PMIC_AUXADC_TRIM_CH2_SEL = MT6351_PMIC_AUXADC_TRIM_CH2_SEL,
	PMIC_AUXADC_TRIM_CH3_SEL = MT6351_PMIC_AUXADC_TRIM_CH3_SEL,
	PMIC_AUXADC_TRIM_CH4_SEL = MT6351_PMIC_AUXADC_TRIM_CH4_SEL,
	PMIC_AUXADC_TRIM_CH5_SEL = MT6351_PMIC_AUXADC_TRIM_CH5_SEL,
	PMIC_AUXADC_TRIM_CH6_SEL = MT6351_PMIC_AUXADC_TRIM_CH6_SEL,
	PMIC_AUXADC_TRIM_CH7_SEL = MT6351_PMIC_AUXADC_TRIM_CH7_SEL,
	PMIC_AUXADC_TRIM_CH8_SEL = MT6351_PMIC_AUXADC_TRIM_CH8_SEL,
	PMIC_AUXADC_TRIM_CH9_SEL = MT6351_PMIC_AUXADC_TRIM_CH9_SEL,
	PMIC_AUXADC_TRIM_CH10_SEL = MT6351_PMIC_AUXADC_TRIM_CH10_SEL,
	PMIC_AUXADC_TRIM_CH11_SEL = MT6351_PMIC_AUXADC_TRIM_CH11_SEL,
	PMIC_AUXADC_ADC_2S_COMP_ENB = MT6351_PMIC_AUXADC_ADC_2S_COMP_ENB,
	PMIC_AUXADC_ADC_TRIM_COMP = MT6351_PMIC_AUXADC_ADC_TRIM_COMP,
	PMIC_AUXADC_SW_GAIN_TRIM = MT6351_PMIC_AUXADC_SW_GAIN_TRIM,
	PMIC_AUXADC_SW_OFFSET_TRIM = MT6351_PMIC_AUXADC_SW_OFFSET_TRIM,
	PMIC_AUXADC_RNG_EN = MT6351_PMIC_AUXADC_RNG_EN,
	PMIC_AUXADC_DATA_REUSE_SEL = MT6351_PMIC_AUXADC_DATA_REUSE_SEL,
	PMIC_AUXADC_TEST_MODE = MT6351_PMIC_AUXADC_TEST_MODE,
	PMIC_AUXADC_BIT_SEL = MT6351_PMIC_AUXADC_BIT_SEL,
	PMIC_AUXADC_START_SW = MT6351_PMIC_AUXADC_START_SW,
	PMIC_AUXADC_START_SWCTRL = MT6351_PMIC_AUXADC_START_SWCTRL,
	PMIC_AUXADC_TS_VBE_SEL = MT6351_PMIC_AUXADC_TS_VBE_SEL,
	PMIC_AUXADC_TS_VBE_SEL_SWCTRL = MT6351_PMIC_AUXADC_TS_VBE_SEL_SWCTRL,
	PMIC_AUXADC_VBUF_EN = MT6351_PMIC_AUXADC_VBUF_EN,
	PMIC_AUXADC_VBUF_EN_SWCTRL = MT6351_PMIC_AUXADC_VBUF_EN_SWCTRL,
	PMIC_AUXADC_OUT_SEL = MT6351_PMIC_AUXADC_OUT_SEL,
	PMIC_AUXADC_DA_DAC = MT6351_PMIC_AUXADC_DA_DAC,
	PMIC_AUXADC_DA_DAC_SWCTRL = MT6351_PMIC_AUXADC_DA_DAC_SWCTRL,
	PMIC_AD_AUXADC_COMP = MT6351_PMIC_AD_AUXADC_COMP,
	PMIC_RG_VBUF_EXTEN = MT6351_PMIC_RG_VBUF_EXTEN,
	PMIC_RG_VBUF_CALEN = MT6351_PMIC_RG_VBUF_CALEN,
	PMIC_RG_VBUF_BYP = MT6351_PMIC_RG_VBUF_BYP,
	PMIC_RG_AUX_RSV = MT6351_PMIC_RG_AUX_RSV,
	PMIC_RG_AUXADC_CALI = MT6351_PMIC_RG_AUXADC_CALI,
	PMIC_AUXADC_ADCIN_VSEN_EN = MT6351_PMIC_AUXADC_ADCIN_VSEN_EN,
	PMIC_AUXADC_ADCIN_VBAT_EN = MT6351_PMIC_AUXADC_ADCIN_VBAT_EN,
	PMIC_AUXADC_ADCIN_VSEN_MUX_EN = MT6351_PMIC_AUXADC_ADCIN_VSEN_MUX_EN,
	PMIC_AUXADC_ADCIN_VSEN_EXT_BATON_EN =
	    MT6351_PMIC_AUXADC_ADCIN_VSEN_EXT_BATON_EN,
	PMIC_AUXADC_ADCIN_CHR_EN = MT6351_PMIC_AUXADC_ADCIN_CHR_EN,
	PMIC_AUXADC_ADCIN_BATON_TDET_EN =
	    MT6351_PMIC_AUXADC_ADCIN_BATON_TDET_EN,
	PMIC_AUXADC_ACCDET_ANASWCTRL_EN =
	    MT6351_PMIC_AUXADC_ACCDET_ANASWCTRL_EN,
	PMIC_AUXADC_DIG0_RSV0 = MT6351_PMIC_AUXADC_DIG0_RSV0,
	PMIC_AUXADC_CHSEL = MT6351_PMIC_AUXADC_CHSEL,
	PMIC_AUXADC_SWCTRL_EN = MT6351_PMIC_AUXADC_SWCTRL_EN,
	PMIC_AUXADC_SOURCE_LBAT_SEL = MT6351_PMIC_AUXADC_SOURCE_LBAT_SEL,
	PMIC_AUXADC_SOURCE_LBAT2_SEL = MT6351_PMIC_AUXADC_SOURCE_LBAT2_SEL,
	PMIC_AUXADC_DIG0_RSV2 = MT6351_PMIC_AUXADC_DIG0_RSV2,
	PMIC_AUXADC_DIG1_RSV2 = MT6351_PMIC_AUXADC_DIG1_RSV2,
	PMIC_AUXADC_DAC_EXTD = MT6351_PMIC_AUXADC_DAC_EXTD,
	PMIC_AUXADC_DAC_EXTD_EN = MT6351_PMIC_AUXADC_DAC_EXTD_EN,
	PMIC_AUXADC_PMU_THR_PDN_SW = MT6351_PMIC_AUXADC_PMU_THR_PDN_SW,
	PMIC_AUXADC_PMU_THR_PDN_SEL = MT6351_PMIC_AUXADC_PMU_THR_PDN_SEL,
	PMIC_AUXADC_PMU_THR_PDN_STATUS = MT6351_PMIC_AUXADC_PMU_THR_PDN_STATUS,
	PMIC_AUXADC_DIG0_RSV1 = MT6351_PMIC_AUXADC_DIG0_RSV1,
	PMIC_AUXADC_START_SHADE_NUM = MT6351_PMIC_AUXADC_START_SHADE_NUM,
	PMIC_AUXADC_START_SHADE_EN = MT6351_PMIC_AUXADC_START_SHADE_EN,
	PMIC_AUXADC_START_SHADE_SEL = MT6351_PMIC_AUXADC_START_SHADE_SEL,
	PMIC_AUXADC_AUTORPT_PRD = MT6351_PMIC_AUXADC_AUTORPT_PRD,
	PMIC_AUXADC_AUTORPT_EN = MT6351_PMIC_AUXADC_AUTORPT_EN,
	PMIC_AUXADC_LBAT_DEBT_MAX = MT6351_PMIC_AUXADC_LBAT_DEBT_MAX,
	PMIC_AUXADC_LBAT_DEBT_MIN = MT6351_PMIC_AUXADC_LBAT_DEBT_MIN,
	PMIC_AUXADC_LBAT_DET_PRD_15_0 = MT6351_PMIC_AUXADC_LBAT_DET_PRD_15_0,
	PMIC_AUXADC_LBAT_DET_PRD_19_16 = MT6351_PMIC_AUXADC_LBAT_DET_PRD_19_16,
	PMIC_AUXADC_LBAT_VOLT_MAX = MT6351_PMIC_AUXADC_LBAT_VOLT_MAX,
	PMIC_AUXADC_LBAT_IRQ_EN_MAX = MT6351_PMIC_AUXADC_LBAT_IRQ_EN_MAX,
	PMIC_AUXADC_LBAT_EN_MAX = MT6351_PMIC_AUXADC_LBAT_EN_MAX,
	PMIC_AUXADC_LBAT_MAX_IRQ_B = MT6351_PMIC_AUXADC_LBAT_MAX_IRQ_B,
	PMIC_AUXADC_LBAT_VOLT_MIN = MT6351_PMIC_AUXADC_LBAT_VOLT_MIN,
	PMIC_AUXADC_LBAT_IRQ_EN_MIN = MT6351_PMIC_AUXADC_LBAT_IRQ_EN_MIN,
	PMIC_AUXADC_LBAT_EN_MIN = MT6351_PMIC_AUXADC_LBAT_EN_MIN,
	PMIC_AUXADC_LBAT_MIN_IRQ_B = MT6351_PMIC_AUXADC_LBAT_MIN_IRQ_B,
	PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MAX =
	    MT6351_PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MAX,
	PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MIN =
	    MT6351_PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MIN,
	PMIC_AUXADC_ACCDET_AUTO_SPL = MT6351_PMIC_AUXADC_ACCDET_AUTO_SPL,
	PMIC_AUXADC_ACCDET_AUTO_RQST_CLR =
	    MT6351_PMIC_AUXADC_ACCDET_AUTO_RQST_CLR,
	PMIC_AUXADC_ACCDET_DIG1_RSV0 = MT6351_PMIC_AUXADC_ACCDET_DIG1_RSV0,
	PMIC_AUXADC_ACCDET_DIG0_RSV0 = MT6351_PMIC_AUXADC_ACCDET_DIG0_RSV0,
	PMIC_AUXADC_THR_DEBT_MAX = MT6351_PMIC_AUXADC_THR_DEBT_MAX,
	PMIC_AUXADC_THR_DEBT_MIN = MT6351_PMIC_AUXADC_THR_DEBT_MIN,
	PMIC_AUXADC_THR_DET_PRD_15_0 = MT6351_PMIC_AUXADC_THR_DET_PRD_15_0,
	PMIC_AUXADC_THR_DET_PRD_19_16 = MT6351_PMIC_AUXADC_THR_DET_PRD_19_16,
	PMIC_AUXADC_THR_VOLT_MAX = MT6351_PMIC_AUXADC_THR_VOLT_MAX,
	PMIC_AUXADC_THR_IRQ_EN_MAX = MT6351_PMIC_AUXADC_THR_IRQ_EN_MAX,
	PMIC_AUXADC_THR_EN_MAX = MT6351_PMIC_AUXADC_THR_EN_MAX,
	PMIC_AUXADC_THR_MAX_IRQ_B = MT6351_PMIC_AUXADC_THR_MAX_IRQ_B,
	PMIC_AUXADC_THR_VOLT_MIN = MT6351_PMIC_AUXADC_THR_VOLT_MIN,
	PMIC_AUXADC_THR_IRQ_EN_MIN = MT6351_PMIC_AUXADC_THR_IRQ_EN_MIN,
	PMIC_AUXADC_THR_EN_MIN = MT6351_PMIC_AUXADC_THR_EN_MIN,
	PMIC_AUXADC_THR_MIN_IRQ_B = MT6351_PMIC_AUXADC_THR_MIN_IRQ_B,
	PMIC_AUXADC_THR_DEBOUNCE_COUNT_MAX =
	    MT6351_PMIC_AUXADC_THR_DEBOUNCE_COUNT_MAX,
	PMIC_AUXADC_THR_DEBOUNCE_COUNT_MIN =
	    MT6351_PMIC_AUXADC_THR_DEBOUNCE_COUNT_MIN,
	PMIC_EFUSE_GAIN_CH4_TRIM = MT6351_PMIC_EFUSE_GAIN_CH4_TRIM,
	PMIC_EFUSE_OFFSET_CH4_TRIM = MT6351_PMIC_EFUSE_OFFSET_CH4_TRIM,
	PMIC_EFUSE_GAIN_CH0_TRIM = MT6351_PMIC_EFUSE_GAIN_CH0_TRIM,
	PMIC_EFUSE_OFFSET_CH0_TRIM = MT6351_PMIC_EFUSE_OFFSET_CH0_TRIM,
	PMIC_EFUSE_GAIN_CH7_TRIM = MT6351_PMIC_EFUSE_GAIN_CH7_TRIM,
	PMIC_EFUSE_OFFSET_CH7_TRIM = MT6351_PMIC_EFUSE_OFFSET_CH7_TRIM,
	PMIC_AUXADC_FGADC_START_SW = MT6351_PMIC_AUXADC_FGADC_START_SW,
	PMIC_AUXADC_FGADC_START_SEL = MT6351_PMIC_AUXADC_FGADC_START_SEL,
	PMIC_AUXADC_FGADC_R_SW = MT6351_PMIC_AUXADC_FGADC_R_SW,
	PMIC_AUXADC_FGADC_R_SEL = MT6351_PMIC_AUXADC_FGADC_R_SEL,
	PMIC_AUXADC_DBG_DIG0_RSV2 = MT6351_PMIC_AUXADC_DBG_DIG0_RSV2,
	PMIC_AUXADC_DBG_DIG1_RSV2 = MT6351_PMIC_AUXADC_DBG_DIG1_RSV2,
	PMIC_AUXADC_IMPEDANCE_CNT = MT6351_PMIC_AUXADC_IMPEDANCE_CNT,
	PMIC_AUXADC_IMPEDANCE_CHSEL = MT6351_PMIC_AUXADC_IMPEDANCE_CHSEL,
	PMIC_AUXADC_IMPEDANCE_IRQ_CLR = MT6351_PMIC_AUXADC_IMPEDANCE_IRQ_CLR,
	PMIC_AUXADC_IMPEDANCE_IRQ_STATUS =
	    MT6351_PMIC_AUXADC_IMPEDANCE_IRQ_STATUS,
	PMIC_AUXADC_CLR_IMP_CNT_STOP = MT6351_PMIC_AUXADC_CLR_IMP_CNT_STOP,
	PMIC_AUXADC_IMPEDANCE_MODE = MT6351_PMIC_AUXADC_IMPEDANCE_MODE,
	PMIC_AUXADC_IMP_AUTORPT_PRD = MT6351_PMIC_AUXADC_IMP_AUTORPT_PRD,
	PMIC_AUXADC_IMP_AUTORPT_EN = MT6351_PMIC_AUXADC_IMP_AUTORPT_EN,
	PMIC_AUXADC_VISMPS0_DEBT_MAX = MT6351_PMIC_AUXADC_VISMPS0_DEBT_MAX,
	PMIC_AUXADC_VISMPS0_DEBT_MIN = MT6351_PMIC_AUXADC_VISMPS0_DEBT_MIN,
	PMIC_AUXADC_VISMPS0_DET_PRD_15_0 =
	    MT6351_PMIC_AUXADC_VISMPS0_DET_PRD_15_0,
	PMIC_AUXADC_VISMPS0_DET_PRD_19_16 =
	    MT6351_PMIC_AUXADC_VISMPS0_DET_PRD_19_16,
	PMIC_AUXADC_VISMPS0_VOLT_MAX = MT6351_PMIC_AUXADC_VISMPS0_VOLT_MAX,
	PMIC_AUXADC_VISMPS0_IRQ_EN_MAX = MT6351_PMIC_AUXADC_VISMPS0_IRQ_EN_MAX,
	PMIC_AUXADC_VISMPS0_EN_MAX = MT6351_PMIC_AUXADC_VISMPS0_EN_MAX,
	PMIC_AUXADC_VISMPS0_MAX_IRQ_B = MT6351_PMIC_AUXADC_VISMPS0_MAX_IRQ_B,
	PMIC_AUXADC_VISMPS0_VOLT_MIN = MT6351_PMIC_AUXADC_VISMPS0_VOLT_MIN,
	PMIC_AUXADC_VISMPS0_IRQ_EN_MIN = MT6351_PMIC_AUXADC_VISMPS0_IRQ_EN_MIN,
	PMIC_AUXADC_VISMPS0_EN_MIN = MT6351_PMIC_AUXADC_VISMPS0_EN_MIN,
	PMIC_AUXADC_VISMPS0_MIN_IRQ_B = MT6351_PMIC_AUXADC_VISMPS0_MIN_IRQ_B,
	PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MAX =
	    MT6351_PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MAX,
	PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MIN =
	    MT6351_PMIC_AUXADC_VISMPS0_DEBOUNCE_COUNT_MIN,
	PMIC_AUXADC_LBAT2_DEBT_MAX = MT6351_PMIC_AUXADC_LBAT2_DEBT_MAX,
	PMIC_AUXADC_LBAT2_DEBT_MIN = MT6351_PMIC_AUXADC_LBAT2_DEBT_MIN,
	PMIC_AUXADC_LBAT2_DET_PRD_15_0 = MT6351_PMIC_AUXADC_LBAT2_DET_PRD_15_0,
	PMIC_AUXADC_LBAT2_DET_PRD_19_16 =
	    MT6351_PMIC_AUXADC_LBAT2_DET_PRD_19_16,
	PMIC_AUXADC_LBAT2_VOLT_MAX = MT6351_PMIC_AUXADC_LBAT2_VOLT_MAX,
	PMIC_AUXADC_LBAT2_IRQ_EN_MAX = MT6351_PMIC_AUXADC_LBAT2_IRQ_EN_MAX,
	PMIC_AUXADC_LBAT2_EN_MAX = MT6351_PMIC_AUXADC_LBAT2_EN_MAX,
	PMIC_AUXADC_LBAT2_MAX_IRQ_B = MT6351_PMIC_AUXADC_LBAT2_MAX_IRQ_B,
	PMIC_AUXADC_LBAT2_VOLT_MIN = MT6351_PMIC_AUXADC_LBAT2_VOLT_MIN,
	PMIC_AUXADC_LBAT2_IRQ_EN_MIN = MT6351_PMIC_AUXADC_LBAT2_IRQ_EN_MIN,
	PMIC_AUXADC_LBAT2_EN_MIN = MT6351_PMIC_AUXADC_LBAT2_EN_MIN,
	PMIC_AUXADC_LBAT2_MIN_IRQ_B = MT6351_PMIC_AUXADC_LBAT2_MIN_IRQ_B,
	PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MAX =
	    MT6351_PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MAX,
	PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MIN =
	    MT6351_PMIC_AUXADC_LBAT2_DEBOUNCE_COUNT_MIN,
	PMIC_AUXADC_MDBG_DET_PRD = MT6351_PMIC_AUXADC_MDBG_DET_PRD,
	PMIC_AUXADC_MDBG_DET_EN = MT6351_PMIC_AUXADC_MDBG_DET_EN,
	PMIC_AUXADC_MDBG_R_PTR = MT6351_PMIC_AUXADC_MDBG_R_PTR,
	PMIC_AUXADC_MDBG_W_PTR = MT6351_PMIC_AUXADC_MDBG_W_PTR,
	PMIC_AUXADC_MDBG_BUF_LENGTH = MT6351_PMIC_AUXADC_MDBG_BUF_LENGTH,
	PMIC_AUXADC_MDRT_DET_PRD = MT6351_PMIC_AUXADC_MDRT_DET_PRD,
	PMIC_AUXADC_MDRT_DET_EN = MT6351_PMIC_AUXADC_MDRT_DET_EN,
	PMIC_AUXADC_MDRT_DET_WKUP_START_CNT =
	    MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_CNT,
	PMIC_AUXADC_MDRT_DET_WKUP_START_CLR =
	    MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_CLR,
	PMIC_AUXADC_MDRT_DET_WKUP_START =
	    MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START,
	PMIC_AUXADC_MDRT_DET_WKUP_START_SEL =
	    MT6351_PMIC_AUXADC_MDRT_DET_WKUP_START_SEL,
	PMIC_AUXADC_MDRT_DET_WKUP_EN = MT6351_PMIC_AUXADC_MDRT_DET_WKUP_EN,
	PMIC_AUXADC_MDRT_DET_SRCLKEN_IND =
	    MT6351_PMIC_AUXADC_MDRT_DET_SRCLKEN_IND,
	PMIC_AUXADC_JEITA_IRQ_EN = MT6351_PMIC_AUXADC_JEITA_IRQ_EN,
	PMIC_AUXADC_JEITA_EN = MT6351_PMIC_AUXADC_JEITA_EN,
	PMIC_AUXADC_JEITA_DET_PRD = MT6351_PMIC_AUXADC_JEITA_DET_PRD,
	PMIC_AUXADC_JEITA_DEBT = MT6351_PMIC_AUXADC_JEITA_DEBT,
	PMIC_AUXADC_JEITA_MIPI_DIS = MT6351_PMIC_AUXADC_JEITA_MIPI_DIS,
	PMIC_AUXADC_JEITA_VOLT_HOT = MT6351_PMIC_AUXADC_JEITA_VOLT_HOT,
	PMIC_AUXADC_JEITA_HOT_IRQ = MT6351_PMIC_AUXADC_JEITA_HOT_IRQ,
	PMIC_AUXADC_JEITA_VOLT_WARM = MT6351_PMIC_AUXADC_JEITA_VOLT_WARM,
	PMIC_AUXADC_JEITA_WARM_IRQ = MT6351_PMIC_AUXADC_JEITA_WARM_IRQ,
	PMIC_AUXADC_JEITA_VOLT_COOL = MT6351_PMIC_AUXADC_JEITA_VOLT_COOL,
	PMIC_AUXADC_JEITA_COOL_IRQ = MT6351_PMIC_AUXADC_JEITA_COOL_IRQ,
	PMIC_AUXADC_JEITA_VOLT_COLD = MT6351_PMIC_AUXADC_JEITA_VOLT_COLD,
	PMIC_AUXADC_JEITA_COLD_IRQ = MT6351_PMIC_AUXADC_JEITA_COLD_IRQ,
	PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COLD =
	    MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COLD,
	PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COOL =
	    MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_COOL,
	PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_WARM =
	    MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_WARM,
	PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_HOT =
	    MT6351_PMIC_AUXADC_JEITA_DEBOUNCE_COUNT_HOT,
	PMIC_AUXADC_DCXO_MDRT_DET_PRD = MT6351_PMIC_AUXADC_DCXO_MDRT_DET_PRD,
	PMIC_AUXADC_DCXO_MDRT_DET_EN = MT6351_PMIC_AUXADC_DCXO_MDRT_DET_EN,
	PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT =
	    MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT,
	PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR =
	    MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR,
	PMIC_AUXADC_DCXO_MDRT_DET_WKUP_EN =
	    MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_EN,
	PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL =
	    MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL,
	PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START =
	    MT6351_PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START,
	PMIC_AUXADC_DCXO_MDRT_DET_SRCLKEN_IND =
	    MT6351_PMIC_AUXADC_DCXO_MDRT_DET_SRCLKEN_IND,
	PMIC_AUXADC_DCXO_CH4_MUX_AP_SEL =
	    MT6351_PMIC_AUXADC_DCXO_CH4_MUX_AP_SEL,
	PMIC_AUXADC_NAG_EN = MT6351_PMIC_AUXADC_NAG_EN,
	PMIC_AUXADC_NAG_CLR = MT6351_PMIC_AUXADC_NAG_CLR,
	PMIC_AUXADC_NAG_VBAT1_SEL = MT6351_PMIC_AUXADC_NAG_VBAT1_SEL,
	PMIC_AUXADC_NAG_PRD = MT6351_PMIC_AUXADC_NAG_PRD,
	PMIC_AUXADC_NAG_IRQ_EN = MT6351_PMIC_AUXADC_NAG_IRQ_EN,
	PMIC_AUXADC_NAG_C_DLTV_IRQ = MT6351_PMIC_AUXADC_NAG_C_DLTV_IRQ,
	PMIC_AUXADC_NAG_ZCV = MT6351_PMIC_AUXADC_NAG_ZCV,
	PMIC_AUXADC_NAG_C_DLTV_TH_15_0 = MT6351_PMIC_AUXADC_NAG_C_DLTV_TH_15_0,
	PMIC_AUXADC_NAG_C_DLTV_TH_26_16 =
	    MT6351_PMIC_AUXADC_NAG_C_DLTV_TH_26_16,
	PMIC_AUXADC_NAG_CNT_15_0 = MT6351_PMIC_AUXADC_NAG_CNT_15_0,
	PMIC_AUXADC_NAG_CNT_25_16 = MT6351_PMIC_AUXADC_NAG_CNT_25_16,
	PMIC_AUXADC_NAG_DLTV = MT6351_PMIC_AUXADC_NAG_DLTV,
	PMIC_AUXADC_NAG_C_DLTV_15_0 = MT6351_PMIC_AUXADC_NAG_C_DLTV_15_0,
	PMIC_AUXADC_NAG_C_DLTV_26_16 = MT6351_PMIC_AUXADC_NAG_C_DLTV_26_16,
	PMIC_AD_AUDACCDETCMPOC = MT6351_PMIC_AD_AUDACCDETCMPOC,
	PMIC_RG_AUDACCDETANASWCTRLENB = MT6351_PMIC_RG_AUDACCDETANASWCTRLENB,
	PMIC_RG_ACCDETSEL = MT6351_PMIC_RG_ACCDETSEL,
	PMIC_RG_AUDACCDETSWCTRL = MT6351_PMIC_RG_AUDACCDETSWCTRL,
	PMIC_RG_AUDACCDETTVDET = MT6351_PMIC_RG_AUDACCDETTVDET,
	PMIC_AUDACCDETAUXADCSWCTRL = MT6351_PMIC_AUDACCDETAUXADCSWCTRL,
	PMIC_AUDACCDETAUXADCSWCTRL_SEL = MT6351_PMIC_AUDACCDETAUXADCSWCTRL_SEL,
	PMIC_RG_AUDACCDETRSV = MT6351_PMIC_RG_AUDACCDETRSV,
	PMIC_ACCDET_EN = MT6351_PMIC_ACCDET_EN,
	PMIC_ACCDET_SEQ_INIT = MT6351_PMIC_ACCDET_SEQ_INIT,
	PMIC_ACCDET_EINTDET_EN = MT6351_PMIC_ACCDET_EINTDET_EN,
	PMIC_ACCDET_EINT_SEQ_INIT = MT6351_PMIC_ACCDET_EINT_SEQ_INIT,
	PMIC_ACCDET_NEGVDET_EN = MT6351_PMIC_ACCDET_NEGVDET_EN,
	PMIC_ACCDET_NEGVDET_EN_CTRL = MT6351_PMIC_ACCDET_NEGVDET_EN_CTRL,
	PMIC_ACCDET_ANASWCTRL_SEL = MT6351_PMIC_ACCDET_ANASWCTRL_SEL,
	PMIC_ACCDET_CMP_PWM_EN = MT6351_PMIC_ACCDET_CMP_PWM_EN,
	PMIC_ACCDET_VTH_PWM_EN = MT6351_PMIC_ACCDET_VTH_PWM_EN,
	PMIC_ACCDET_MBIAS_PWM_EN = MT6351_PMIC_ACCDET_MBIAS_PWM_EN,
	PMIC_ACCDET_EINT_PWM_EN = MT6351_PMIC_ACCDET_EINT_PWM_EN,
	PMIC_ACCDET_CMP_PWM_IDLE = MT6351_PMIC_ACCDET_CMP_PWM_IDLE,
	PMIC_ACCDET_VTH_PWM_IDLE = MT6351_PMIC_ACCDET_VTH_PWM_IDLE,
	PMIC_ACCDET_MBIAS_PWM_IDLE = MT6351_PMIC_ACCDET_MBIAS_PWM_IDLE,
	PMIC_ACCDET_EINT_PWM_IDLE = MT6351_PMIC_ACCDET_EINT_PWM_IDLE,
	PMIC_ACCDET_PWM_WIDTH = MT6351_PMIC_ACCDET_PWM_WIDTH,
	PMIC_ACCDET_PWM_THRESH = MT6351_PMIC_ACCDET_PWM_THRESH,
	PMIC_ACCDET_RISE_DELAY = MT6351_PMIC_ACCDET_RISE_DELAY,
	PMIC_ACCDET_FALL_DELAY = MT6351_PMIC_ACCDET_FALL_DELAY,
	PMIC_ACCDET_DEBOUNCE0 = MT6351_PMIC_ACCDET_DEBOUNCE0,
	PMIC_ACCDET_DEBOUNCE1 = MT6351_PMIC_ACCDET_DEBOUNCE1,
	PMIC_ACCDET_DEBOUNCE2 = MT6351_PMIC_ACCDET_DEBOUNCE2,
	PMIC_ACCDET_DEBOUNCE3 = MT6351_PMIC_ACCDET_DEBOUNCE3,
	PMIC_ACCDET_DEBOUNCE4 = MT6351_PMIC_ACCDET_DEBOUNCE4,
	PMIC_ACCDET_IVAL_CUR_IN = MT6351_PMIC_ACCDET_IVAL_CUR_IN,
	PMIC_ACCDET_EINT_IVAL_CUR_IN = MT6351_PMIC_ACCDET_EINT_IVAL_CUR_IN,
	PMIC_ACCDET_IVAL_SAM_IN = MT6351_PMIC_ACCDET_IVAL_SAM_IN,
	PMIC_ACCDET_EINT_IVAL_SAM_IN = MT6351_PMIC_ACCDET_EINT_IVAL_SAM_IN,
	PMIC_ACCDET_IVAL_MEM_IN = MT6351_PMIC_ACCDET_IVAL_MEM_IN,
	PMIC_ACCDET_EINT_IVAL_MEM_IN = MT6351_PMIC_ACCDET_EINT_IVAL_MEM_IN,
	PMIC_ACCDET_EINT_IVAL_SEL = MT6351_PMIC_ACCDET_EINT_IVAL_SEL,
	PMIC_ACCDET_IVAL_SEL = MT6351_PMIC_ACCDET_IVAL_SEL,
	PMIC_ACCDET_IRQ = MT6351_PMIC_ACCDET_IRQ,
	PMIC_ACCDET_NEGV_IRQ = MT6351_PMIC_ACCDET_NEGV_IRQ,
	PMIC_ACCDET_EINT_IRQ = MT6351_PMIC_ACCDET_EINT_IRQ,
	PMIC_ACCDET_IRQ_CLR = MT6351_PMIC_ACCDET_IRQ_CLR,
	PMIC_ACCDET_NEGV_IRQ_CLR = MT6351_PMIC_ACCDET_NEGV_IRQ_CLR,
	PMIC_ACCDET_EINT_IRQ_CLR = MT6351_PMIC_ACCDET_EINT_IRQ_CLR,
	PMIC_ACCDET_EINT_IRQ_POLARITY = MT6351_PMIC_ACCDET_EINT_IRQ_POLARITY,
	PMIC_ACCDET_TEST_MODE0 = MT6351_PMIC_ACCDET_TEST_MODE0,
	PMIC_ACCDET_TEST_MODE1 = MT6351_PMIC_ACCDET_TEST_MODE1,
	PMIC_ACCDET_TEST_MODE2 = MT6351_PMIC_ACCDET_TEST_MODE2,
	PMIC_ACCDET_TEST_MODE3 = MT6351_PMIC_ACCDET_TEST_MODE3,
	PMIC_ACCDET_TEST_MODE4 = MT6351_PMIC_ACCDET_TEST_MODE4,
	PMIC_ACCDET_TEST_MODE5 = MT6351_PMIC_ACCDET_TEST_MODE5,
	PMIC_ACCDET_PWM_SEL = MT6351_PMIC_ACCDET_PWM_SEL,
	PMIC_ACCDET_IN_SW = MT6351_PMIC_ACCDET_IN_SW,
	PMIC_ACCDET_CMP_EN_SW = MT6351_PMIC_ACCDET_CMP_EN_SW,
	PMIC_ACCDET_VTH_EN_SW = MT6351_PMIC_ACCDET_VTH_EN_SW,
	PMIC_ACCDET_MBIAS_EN_SW = MT6351_PMIC_ACCDET_MBIAS_EN_SW,
	PMIC_ACCDET_PWM_EN_SW = MT6351_PMIC_ACCDET_PWM_EN_SW,
	PMIC_ACCDET_IN = MT6351_PMIC_ACCDET_IN,
	PMIC_ACCDET_CUR_IN = MT6351_PMIC_ACCDET_CUR_IN,
	PMIC_ACCDET_SAM_IN = MT6351_PMIC_ACCDET_SAM_IN,
	PMIC_ACCDET_MEM_IN = MT6351_PMIC_ACCDET_MEM_IN,
	PMIC_ACCDET_STATE = MT6351_PMIC_ACCDET_STATE,
	PMIC_ACCDET_MBIAS_CLK = MT6351_PMIC_ACCDET_MBIAS_CLK,
	PMIC_ACCDET_VTH_CLK = MT6351_PMIC_ACCDET_VTH_CLK,
	PMIC_ACCDET_CMP_CLK = MT6351_PMIC_ACCDET_CMP_CLK,
	PMIC_DA_NI_AUDACCDETAUXADCSWCTRL =
	    MT6351_PMIC_DA_NI_AUDACCDETAUXADCSWCTRL,
	PMIC_ACCDET_EINT_DEB_SEL = MT6351_PMIC_ACCDET_EINT_DEB_SEL,
	PMIC_ACCDET_EINT_DEBOUNCE = MT6351_PMIC_ACCDET_EINT_DEBOUNCE,
	PMIC_ACCDET_EINT_PWM_THRESH = MT6351_PMIC_ACCDET_EINT_PWM_THRESH,
	PMIC_ACCDET_EINT_PWM_WIDTH = MT6351_PMIC_ACCDET_EINT_PWM_WIDTH,
	PMIC_ACCDET_NEGV_THRESH = MT6351_PMIC_ACCDET_NEGV_THRESH,
	PMIC_ACCDET_EINT_PWM_FALL_DELAY =
	    MT6351_PMIC_ACCDET_EINT_PWM_FALL_DELAY,
	PMIC_ACCDET_EINT_PWM_RISE_DELAY =
	    MT6351_PMIC_ACCDET_EINT_PWM_RISE_DELAY,
	PMIC_ACCDET_TEST_MODE13 = MT6351_PMIC_ACCDET_TEST_MODE13,
	PMIC_ACCDET_TEST_MODE12 = MT6351_PMIC_ACCDET_TEST_MODE12,
	PMIC_ACCDET_NVDETECTOUT_SW = MT6351_PMIC_ACCDET_NVDETECTOUT_SW,
	PMIC_ACCDET_TEST_MODE11 = MT6351_PMIC_ACCDET_TEST_MODE11,
	PMIC_ACCDET_TEST_MODE10 = MT6351_PMIC_ACCDET_TEST_MODE10,
	PMIC_ACCDET_EINTCMPOUT_SW = MT6351_PMIC_ACCDET_EINTCMPOUT_SW,
	PMIC_ACCDET_TEST_MODE9 = MT6351_PMIC_ACCDET_TEST_MODE9,
	PMIC_ACCDET_TEST_MODE8 = MT6351_PMIC_ACCDET_TEST_MODE8,
	PMIC_ACCDET_AUXADC_CTRL_SW = MT6351_PMIC_ACCDET_AUXADC_CTRL_SW,
	PMIC_ACCDET_TEST_MODE7 = MT6351_PMIC_ACCDET_TEST_MODE7,
	PMIC_ACCDET_TEST_MODE6 = MT6351_PMIC_ACCDET_TEST_MODE6,
	PMIC_ACCDET_EINTCMP_EN_SW = MT6351_PMIC_ACCDET_EINTCMP_EN_SW,
	PMIC_ACCDET_EINT_STATE = MT6351_PMIC_ACCDET_EINT_STATE,
	PMIC_ACCDET_AUXADC_DEBOUNCE_END =
	    MT6351_PMIC_ACCDET_AUXADC_DEBOUNCE_END,
	PMIC_ACCDET_AUXADC_CONNECT_PRE = MT6351_PMIC_ACCDET_AUXADC_CONNECT_PRE,
	PMIC_ACCDET_EINT_CUR_IN = MT6351_PMIC_ACCDET_EINT_CUR_IN,
	PMIC_ACCDET_EINT_SAM_IN = MT6351_PMIC_ACCDET_EINT_SAM_IN,
	PMIC_ACCDET_EINT_MEM_IN = MT6351_PMIC_ACCDET_EINT_MEM_IN,
	PMIC_AD_NVDETECTOUT = MT6351_PMIC_AD_NVDETECTOUT,
	PMIC_AD_EINTCMPOUT = MT6351_PMIC_AD_EINTCMPOUT,
	PMIC_DA_NI_EINTCMPEN = MT6351_PMIC_DA_NI_EINTCMPEN,
	PMIC_ACCDET_NEGV_COUNT_IN = MT6351_PMIC_ACCDET_NEGV_COUNT_IN,
	PMIC_ACCDET_NEGV_EN_FINAL = MT6351_PMIC_ACCDET_NEGV_EN_FINAL,
	PMIC_ACCDET_NEGV_COUNT_END = MT6351_PMIC_ACCDET_NEGV_COUNT_END,
	PMIC_ACCDET_NEGV_MINU = MT6351_PMIC_ACCDET_NEGV_MINU,
	PMIC_ACCDET_NEGV_ADD = MT6351_PMIC_ACCDET_NEGV_ADD,
	PMIC_ACCDET_NEGV_CMP = MT6351_PMIC_ACCDET_NEGV_CMP,
	PMIC_ACCDET_CUR_DEB = MT6351_PMIC_ACCDET_CUR_DEB,
	PMIC_ACCDET_EINT_CUR_DEB = MT6351_PMIC_ACCDET_EINT_CUR_DEB,
	PMIC_ACCDET_RSV_CON0 = MT6351_PMIC_ACCDET_RSV_CON0,
	PMIC_ACCDET_RSV_CON1 = MT6351_PMIC_ACCDET_RSV_CON1,
	PMIC_ACCDET_AUXADC_CONNECT_TIME =
	    MT6351_PMIC_ACCDET_AUXADC_CONNECT_TIME,
	PMIC_RG_VCDT_HV_EN = MT6351_PMIC_RG_VCDT_HV_EN,
	PMIC_RGS_CHR_LDO_DET = MT6351_PMIC_RGS_CHR_LDO_DET,
	PMIC_RG_PCHR_AUTOMODE = MT6351_PMIC_RG_PCHR_AUTOMODE,
	PMIC_RG_CSDAC_EN = MT6351_PMIC_RG_CSDAC_EN,
	PMIC_RG_NORM_CHR_EN = MT6351_PMIC_RG_NORM_CHR_EN,
	PMIC_RGS_CHRDET = MT6351_PMIC_RGS_CHRDET,
	PMIC_RGS_VCDT_LV_DET = MT6351_PMIC_RGS_VCDT_LV_DET,
	PMIC_RGS_VCDT_HV_DET = MT6351_PMIC_RGS_VCDT_HV_DET,
	PMIC_RG_VCDT_LV_VTH = MT6351_PMIC_RG_VCDT_LV_VTH,
	PMIC_RG_VCDT_HV_VTH = MT6351_PMIC_RG_VCDT_HV_VTH,
	PMIC_RG_VBAT_CV_EN = MT6351_PMIC_RG_VBAT_CV_EN,
	PMIC_RG_VBAT_CC_EN = MT6351_PMIC_RG_VBAT_CC_EN,
	PMIC_RG_CS_EN = MT6351_PMIC_RG_CS_EN,
	PMIC_RGS_CS_DET = MT6351_PMIC_RGS_CS_DET,
	PMIC_RGS_VBAT_CV_DET = MT6351_PMIC_RGS_VBAT_CV_DET,
	PMIC_RGS_VBAT_CC_DET = MT6351_PMIC_RGS_VBAT_CC_DET,
	PMIC_RG_VBAT_NORM_CV_VTH = MT6351_PMIC_RG_VBAT_NORM_CV_VTH,
	PMIC_RG_VBAT_CC_VTH = MT6351_PMIC_RG_VBAT_CC_VTH,
	PMIC_RG_NORM_CS_VTH = MT6351_PMIC_RG_NORM_CS_VTH,
	PMIC_RG_PCHR_TOHTC = MT6351_PMIC_RG_PCHR_TOHTC,
	PMIC_RG_PCHR_TOLTC = MT6351_PMIC_RG_PCHR_TOLTC,
	PMIC_RG_VBAT_OV_EN = MT6351_PMIC_RG_VBAT_OV_EN,
	PMIC_RG_VBAT_OV_VTH = MT6351_PMIC_RG_VBAT_OV_VTH,
	PMIC_RG_VBAT_OV_DEG = MT6351_PMIC_RG_VBAT_OV_DEG,
	PMIC_RGS_VBAT_OV_DET = MT6351_PMIC_RGS_VBAT_OV_DET,
	PMIC_RG_BATON_EN = MT6351_PMIC_RG_BATON_EN,
	PMIC_RG_BATON_HT_EN_RSV0 = MT6351_PMIC_RG_BATON_HT_EN_RSV0,
	PMIC_BATON_TDET_EN = MT6351_PMIC_BATON_TDET_EN,
	PMIC_RG_BATON_HT_TRIM = MT6351_PMIC_RG_BATON_HT_TRIM,
	PMIC_RG_BATON_HT_TRIM_SET = MT6351_PMIC_RG_BATON_HT_TRIM_SET,
	PMIC_RG_BATON_TDET_EN = MT6351_PMIC_RG_BATON_TDET_EN,
	PMIC_RG_CSDAC_DATA = MT6351_PMIC_RG_CSDAC_DATA,
	PMIC_RG_FRC_CSVTH_USBDL = MT6351_PMIC_RG_FRC_CSVTH_USBDL,
	PMIC_RGS_PCHR_FLAG_OUT = MT6351_PMIC_RGS_PCHR_FLAG_OUT,
	PMIC_RG_PCHR_FLAG_EN = MT6351_PMIC_RG_PCHR_FLAG_EN,
	PMIC_RG_OTG_BVALID_EN = MT6351_PMIC_RG_OTG_BVALID_EN,
	PMIC_RGS_OTG_BVALID_DET = MT6351_PMIC_RGS_OTG_BVALID_DET,
	PMIC_RG_PCHR_FLAG_SEL = MT6351_PMIC_RG_PCHR_FLAG_SEL,
	PMIC_RG_PCHR_TESTMODE = MT6351_PMIC_RG_PCHR_TESTMODE,
	PMIC_RG_CSDAC_TESTMODE = MT6351_PMIC_RG_CSDAC_TESTMODE,
	PMIC_RG_PCHR_RST = MT6351_PMIC_RG_PCHR_RST,
	PMIC_RG_PCHR_FT_CTRL = MT6351_PMIC_RG_PCHR_FT_CTRL,
	PMIC_RG_CHRWDT_TD = MT6351_PMIC_RG_CHRWDT_TD,
	PMIC_RG_CHRWDT_EN = MT6351_PMIC_RG_CHRWDT_EN,
	PMIC_RG_CHRWDT_WR = MT6351_PMIC_RG_CHRWDT_WR,
	PMIC_RG_PCHR_RV = MT6351_PMIC_RG_PCHR_RV,
	PMIC_RG_CHRWDT_INT_EN = MT6351_PMIC_RG_CHRWDT_INT_EN,
	PMIC_RG_CHRWDT_FLAG_WR = MT6351_PMIC_RG_CHRWDT_FLAG_WR,
	PMIC_RGS_CHRWDT_OUT = MT6351_PMIC_RGS_CHRWDT_OUT,
	PMIC_RG_USBDL_RST = MT6351_PMIC_RG_USBDL_RST,
	PMIC_RG_USBDL_SET = MT6351_PMIC_RG_USBDL_SET,
	PMIC_RG_ADCIN_VSEN_MUX_EN = MT6351_PMIC_RG_ADCIN_VSEN_MUX_EN,
	PMIC_RG_ADCIN_VSEN_EXT_BATON_EN =
	    MT6351_PMIC_RG_ADCIN_VSEN_EXT_BATON_EN,
	PMIC_RG_ADCIN_VBAT_EN = MT6351_PMIC_RG_ADCIN_VBAT_EN,
	PMIC_RG_ADCIN_VSEN_EN = MT6351_PMIC_RG_ADCIN_VSEN_EN,
	PMIC_RG_ADCIN_CHR_EN = MT6351_PMIC_RG_ADCIN_CHR_EN,
	PMIC_RG_UVLO_VTHL = MT6351_PMIC_RG_UVLO_VTHL,
	PMIC_RG_UVLO_VH_LAT = MT6351_PMIC_RG_UVLO_VH_LAT,
	PMIC_RG_LBAT_INT_VTH = MT6351_PMIC_RG_LBAT_INT_VTH,
	PMIC_RG_BGR_RSEL = MT6351_PMIC_RG_BGR_RSEL,
	PMIC_RG_BGR_UNCHOP_PH = MT6351_PMIC_RG_BGR_UNCHOP_PH,
	PMIC_RG_BGR_UNCHOP = MT6351_PMIC_RG_BGR_UNCHOP,
	PMIC_RG_BC11_BB_CTRL = MT6351_PMIC_RG_BC11_BB_CTRL,
	PMIC_RG_BC11_RST = MT6351_PMIC_RG_BC11_RST,
	PMIC_RG_BC11_VSRC_EN = MT6351_PMIC_RG_BC11_VSRC_EN,
	PMIC_RGS_BC11_CMP_OUT = MT6351_PMIC_RGS_BC11_CMP_OUT,
	PMIC_RG_BC11_VREF_VTH = MT6351_PMIC_RG_BC11_VREF_VTH,
	PMIC_RG_BC11_CMP_EN = MT6351_PMIC_RG_BC11_CMP_EN,
	PMIC_RG_BC11_IPD_EN = MT6351_PMIC_RG_BC11_IPD_EN,
	PMIC_RG_BC11_IPU_EN = MT6351_PMIC_RG_BC11_IPU_EN,
	PMIC_RG_BC11_BIAS_EN = MT6351_PMIC_RG_BC11_BIAS_EN,
	PMIC_RG_CSDAC_STP_INC = MT6351_PMIC_RG_CSDAC_STP_INC,
	PMIC_RG_CSDAC_STP_DEC = MT6351_PMIC_RG_CSDAC_STP_DEC,
	PMIC_RG_CSDAC_DLY = MT6351_PMIC_RG_CSDAC_DLY,
	PMIC_RG_CSDAC_STP = MT6351_PMIC_RG_CSDAC_STP,
	PMIC_RG_LOW_ICH_DB = MT6351_PMIC_RG_LOW_ICH_DB,
	PMIC_RG_CHRIND_ON = MT6351_PMIC_RG_CHRIND_ON,
	PMIC_RG_CHRIND_DIMMING = MT6351_PMIC_RG_CHRIND_DIMMING,
	PMIC_RG_CV_MODE = MT6351_PMIC_RG_CV_MODE,
	PMIC_RG_VCDT_MODE = MT6351_PMIC_RG_VCDT_MODE,
	PMIC_RG_CSDAC_MODE = MT6351_PMIC_RG_CSDAC_MODE,
	PMIC_RG_TRACKING_EN = MT6351_PMIC_RG_TRACKING_EN,
	PMIC_RG_HWCV_EN = MT6351_PMIC_RG_HWCV_EN,
	PMIC_RG_ULC_DET_EN = MT6351_PMIC_RG_ULC_DET_EN,
	PMIC_RG_BGR_TRIM_EN = MT6351_PMIC_RG_BGR_TRIM_EN,
	PMIC_RG_ICHRG_TRIM = MT6351_PMIC_RG_ICHRG_TRIM,
	PMIC_RG_BGR_TRIM = MT6351_PMIC_RG_BGR_TRIM,
	PMIC_RG_OVP_TRIM = MT6351_PMIC_RG_OVP_TRIM,
	PMIC_RG_CHR_OSC_TRIM = MT6351_PMIC_RG_CHR_OSC_TRIM,
	PMIC_DA_QI_BGR_EXT_BUF_EN = MT6351_PMIC_DA_QI_BGR_EXT_BUF_EN,
	PMIC_RG_BGR_TEST_EN = MT6351_PMIC_RG_BGR_TEST_EN,
	PMIC_RG_BGR_TEST_RSTB = MT6351_PMIC_RG_BGR_TEST_RSTB,
	PMIC_RG_DAC_USBDL_MAX = MT6351_PMIC_RG_DAC_USBDL_MAX,
	PMIC_RG_CM_VDEC_TRIG = MT6351_PMIC_RG_CM_VDEC_TRIG,
	PMIC_PCHR_CM_VDEC_STATUS = MT6351_PMIC_PCHR_CM_VDEC_STATUS,
	PMIC_RG_CM_VINC_TRIG = MT6351_PMIC_RG_CM_VINC_TRIG,
	PMIC_PCHR_CM_VINC_STATUS = MT6351_PMIC_PCHR_CM_VINC_STATUS,
	PMIC_RG_CM_VDEC_HPRD1 = MT6351_PMIC_RG_CM_VDEC_HPRD1,
	PMIC_RG_CM_VDEC_HPRD2 = MT6351_PMIC_RG_CM_VDEC_HPRD2,
	PMIC_RG_CM_VDEC_HPRD3 = MT6351_PMIC_RG_CM_VDEC_HPRD3,
	PMIC_RG_CM_VDEC_HPRD4 = MT6351_PMIC_RG_CM_VDEC_HPRD4,
	PMIC_RG_CM_VDEC_HPRD5 = MT6351_PMIC_RG_CM_VDEC_HPRD5,
	PMIC_RG_CM_VDEC_HPRD6 = MT6351_PMIC_RG_CM_VDEC_HPRD6,
	PMIC_RG_CM_VINC_HPRD1 = MT6351_PMIC_RG_CM_VINC_HPRD1,
	PMIC_RG_CM_VINC_HPRD2 = MT6351_PMIC_RG_CM_VINC_HPRD2,
	PMIC_RG_CM_VINC_HPRD3 = MT6351_PMIC_RG_CM_VINC_HPRD3,
	PMIC_RG_CM_VINC_HPRD4 = MT6351_PMIC_RG_CM_VINC_HPRD4,
	PMIC_RG_CM_VINC_HPRD5 = MT6351_PMIC_RG_CM_VINC_HPRD5,
	PMIC_RG_CM_VINC_HPRD6 = MT6351_PMIC_RG_CM_VINC_HPRD6,
	PMIC_RG_CM_LPRD = MT6351_PMIC_RG_CM_LPRD,
	PMIC_RG_CM_CS_VTHL = MT6351_PMIC_RG_CM_CS_VTHL,
	PMIC_RG_CM_CS_VTHH = MT6351_PMIC_RG_CM_CS_VTHH,
	PMIC_RG_PCHR_RSV = MT6351_PMIC_RG_PCHR_RSV,
	PMIC_RG_ENVTEM_D = MT6351_PMIC_RG_ENVTEM_D,
	PMIC_RG_ENVTEM_EN = MT6351_PMIC_RG_ENVTEM_EN,
	PMIC_RGS_BATON_HV = MT6351_PMIC_RGS_BATON_HV,
	PMIC_RG_HW_VTH_CTRL = MT6351_PMIC_RG_HW_VTH_CTRL,
	PMIC_RG_HW_VTH2 = MT6351_PMIC_RG_HW_VTH2,
	PMIC_RG_HW_VTH1 = MT6351_PMIC_RG_HW_VTH1,
	PMIC_RG_CM_VDEC_INT_EN = MT6351_PMIC_RG_CM_VDEC_INT_EN,
	PMIC_RG_CM_VINC_INT_EN = MT6351_PMIC_RG_CM_VINC_INT_EN,
	PMIC_RG_QI_BATON_LT_EN = MT6351_PMIC_RG_QI_BATON_LT_EN,
	PMIC_RGS_BATON_UNDET = MT6351_PMIC_RGS_BATON_UNDET,
	PMIC_RG_JW_CS_VTH = MT6351_PMIC_RG_JW_CS_VTH,
	PMIC_RG_JW_CV_VTH = MT6351_PMIC_RG_JW_CV_VTH,
	PMIC_RG_JC_CS_VTH = MT6351_PMIC_RG_JC_CS_VTH,
	PMIC_RG_JC_CV_VTH = MT6351_PMIC_RG_JC_CV_VTH,
	PMIC_RG_BC11_ACA_EN = MT6351_PMIC_RG_BC11_ACA_EN,
	PMIC_RG_JEITA_EN = MT6351_PMIC_RG_JEITA_EN,
	PMIC_RG_VCDT_TRIM = MT6351_PMIC_RG_VCDT_TRIM,
	PMIC_RGS_BC11_ID_FLOAT = MT6351_PMIC_RGS_BC11_ID_FLOAT,
	PMIC_RGS_BC11_ID_A = MT6351_PMIC_RGS_BC11_ID_A,
	PMIC_RGS_BC11_ID_B = MT6351_PMIC_RGS_BC11_ID_B,
	PMIC_RGS_BC11_ID_C = MT6351_PMIC_RGS_BC11_ID_C,
	PMIC_RGS_BC11_ID_GND = MT6351_PMIC_RGS_BC11_ID_GND,
	PMIC_RGS_BC11_ACA_OTG_DET = MT6351_PMIC_RGS_BC11_ACA_OTG_DET,
	PMIC_RG_INDICATOR_TRIM = MT6351_PMIC_RG_INDICATOR_TRIM,
	PMIC_EOSC_CALI_START = MT6351_PMIC_EOSC_CALI_START,
	PMIC_EOSC_CALI_TD = MT6351_PMIC_EOSC_CALI_TD,
	PMIC_EOSC_CALI_TEST = MT6351_PMIC_EOSC_CALI_TEST,
	PMIC_EOSC_CALI_DCXO_RDY_TD = MT6351_PMIC_EOSC_CALI_DCXO_RDY_TD,
	PMIC_FRC_VTCXO0_ON = MT6351_PMIC_FRC_VTCXO0_ON,
	PMIC_EOSC_CALI_RSV = MT6351_PMIC_EOSC_CALI_RSV,
	PMIC_VRTC_PWM_MODE = MT6351_PMIC_VRTC_PWM_MODE,
	PMIC_VRTC_PWM_RSV = MT6351_PMIC_VRTC_PWM_RSV,
	PMIC_VRTC_PWM_L_DUTY = MT6351_PMIC_VRTC_PWM_L_DUTY,
	PMIC_VRTC_PWM_H_DUTY = MT6351_PMIC_VRTC_PWM_H_DUTY,
	PMIC_VRTC_CAP_SEL = MT6351_PMIC_VRTC_CAP_SEL,
	PMU_COMMAND_MAX
};

#define PMU_FLAGS_LIST_ENUM enum PMU_FLAGS_LIST

struct pmu_flag_table_entry_t {
	PMU_FLAGS_LIST_ENUM flagname;
	unsigned short offset;
	unsigned short mask;
	unsigned char shift;
};

#define PMU_FLAG_TABLE_ENTRY struct pmu_flag_table_entry_t
#endif /*--CONFIG_MTK_PMIC_NEW_ARCH--*/

#endif /* _MT_PMIC_UPMU_HW_H_ */
