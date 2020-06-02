/*
 * Copyright (C) 2017 MediaTek Inc.

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include <linux/kernel.h>
#include <linux/module.h>

#include <mach/upmu_sw.h>
#include <mach/upmu_hw.h>
#include <mt-plat/upmu_common.h>

unsigned int mt6357_upmu_get_top0_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP0_ID),
		(&val),
		(PMIC_TOP0_ANA_ID_MASK),
		(PMIC_TOP0_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top0_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP0_ID),
		(&val),
		(PMIC_TOP0_DIG_ID_MASK),
		(PMIC_TOP0_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top0_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP0_REV0),
		(&val),
		(PMIC_TOP0_ANA_MINOR_REV_MASK),
		(PMIC_TOP0_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top0_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP0_REV0),
		(&val),
		(PMIC_TOP0_ANA_MAJOR_REV_MASK),
		(PMIC_TOP0_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top0_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP0_REV0),
		(&val),
		(PMIC_TOP0_DIG_MINOR_REV_MASK),
		(PMIC_TOP0_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top0_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP0_REV0),
		(&val),
		(PMIC_TOP0_DIG_MAJOR_REV_MASK),
		(PMIC_TOP0_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top0_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP0_DSN_DBI),
		(&val),
		(PMIC_TOP0_DSN_CBS_MASK),
		(PMIC_TOP0_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top0_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP0_DSN_DBI),
		(&val),
		(PMIC_TOP0_DSN_BIX_MASK),
		(PMIC_TOP0_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top0_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP0_DSN_DBI),
		(&val),
		(PMIC_TOP0_DSN_ESP_MASK),
		(PMIC_TOP0_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top0_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP0_DSN_DXI),
		(&val),
		(PMIC_TOP0_DSN_FPI_MASK),
		(PMIC_TOP0_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hwcid(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HWCID),
		(&val),
		(PMIC_HWCID_MASK),
		(PMIC_HWCID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_swcid(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SWCID),
		(&val),
		(PMIC_SWCID_MASK),
		(PMIC_SWCID_SHIFT)
		);

	val = val >> 8;
	return val;
}

unsigned int mt6357_upmu_get_sts_pwrkey(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PONSTS),
		(&val),
		(PMIC_STS_PWRKEY_MASK),
		(PMIC_STS_PWRKEY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_rtca(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PONSTS),
		(&val),
		(PMIC_STS_RTCA_MASK),
		(PMIC_STS_RTCA_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_chrin(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PONSTS),
		(&val),
		(PMIC_STS_CHRIN_MASK),
		(PMIC_STS_CHRIN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_spar(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PONSTS),
		(&val),
		(PMIC_STS_SPAR_MASK),
		(PMIC_STS_SPAR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_rboot(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PONSTS),
		(&val),
		(PMIC_STS_RBOOT_MASK),
		(PMIC_STS_RBOOT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_uvlo(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_UVLO_MASK),
		(PMIC_STS_UVLO_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_pgfail(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_PGFAIL_MASK),
		(PMIC_STS_PGFAIL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_psoc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_PSOC_MASK),
		(PMIC_STS_PSOC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_thrdn(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_THRDN_MASK),
		(PMIC_STS_THRDN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_wrst(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_WRST_MASK),
		(PMIC_STS_WRST_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_crst(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_CRST_MASK),
		(PMIC_STS_CRST_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_pkeylp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_PKEYLP_MASK),
		(PMIC_STS_PKEYLP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_normoff(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_NORMOFF_MASK),
		(PMIC_STS_NORMOFF_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_bwdt(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_BWDT_MASK),
		(PMIC_STS_BWDT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_ddlo(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_DDLO_MASK),
		(PMIC_STS_DDLO_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_wdt(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_WDT_MASK),
		(PMIC_STS_WDT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_pupsrc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_PUPSRC_MASK),
		(PMIC_STS_PUPSRC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sts_keypwr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_POFFSTS),
		(&val),
		(PMIC_STS_KEYPWR_MASK),
		(PMIC_STS_KEYPWR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_poffsts_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSTSCTL),
		(val),
		(PMIC_RG_POFFSTS_CLR_MASK),
		(PMIC_RG_POFFSTS_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ponsts_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSTSCTL),
		(val),
		(PMIC_RG_PONSTS_CLR_MASK),
		(PMIC_RG_PONSTS_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_ext_pmic_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_EXT_PMIC_PG_DEB_MASK),
		(PMIC_EXT_PMIC_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vaud28_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VAUD28_PG_DEB_MASK),
		(PMIC_VAUD28_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vusb33_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VUSB33_PG_DEB_MASK),
		(PMIC_VUSB33_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vdram_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VDRAM_PG_DEB_MASK),
		(PMIC_VDRAM_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vio28_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VIO28_PG_DEB_MASK),
		(PMIC_VIO28_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vemc_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VEMC_PG_DEB_MASK),
		(PMIC_VEMC_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vio18_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VIO18_PG_DEB_MASK),
		(PMIC_VIO18_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vsram_proc_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VSRAM_PROC_PG_DEB_MASK),
		(PMIC_VSRAM_PROC_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vsram_others_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VSRAM_OTHERS_PG_DEB_MASK),
		(PMIC_VSRAM_OTHERS_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vaux18_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VAUX18_PG_DEB_MASK),
		(PMIC_VAUX18_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vxo22_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VXO22_PG_DEB_MASK),
		(PMIC_VXO22_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vproc_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VPROC_PG_DEB_MASK),
		(PMIC_VPROC_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vmodem_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VMODEM_PG_DEB_MASK),
		(PMIC_VMODEM_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vcore_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VCORE_PG_DEB_MASK),
		(PMIC_VCORE_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_vs1_pg_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_DEB_STS0),
		(&val),
		(PMIC_VS1_PG_DEB_MASK),
		(PMIC_VS1_PG_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_ext_pmic_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_EXT_PMIC_PG_STATUS_MASK),
		(PMIC_STRUP_EXT_PMIC_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vaud28_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VAUD28_PG_STATUS_MASK),
		(PMIC_STRUP_VAUD28_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vusb33_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VUSB33_PG_STATUS_MASK),
		(PMIC_STRUP_VUSB33_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vdram_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VDRAM_PG_STATUS_MASK),
		(PMIC_STRUP_VDRAM_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vio28_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VIO28_PG_STATUS_MASK),
		(PMIC_STRUP_VIO28_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vemc_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VEMC_PG_STATUS_MASK),
		(PMIC_STRUP_VEMC_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vio18_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VIO18_PG_STATUS_MASK),
		(PMIC_STRUP_VIO18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vsram_proc_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VSRAM_PROC_PG_STATUS_MASK),
		(PMIC_STRUP_VSRAM_PROC_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vsram_others_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VSRAM_OTHERS_PG_STATUS_MASK),
		(PMIC_STRUP_VSRAM_OTHERS_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vaux18_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VAUX18_PG_STATUS_MASK),
		(PMIC_STRUP_VAUX18_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vxo22_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VXO22_PG_STATUS_MASK),
		(PMIC_STRUP_VXO22_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vproc_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VPROC_PG_STATUS_MASK),
		(PMIC_STRUP_VPROC_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vmodem_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VMODEM_PG_STATUS_MASK),
		(PMIC_STRUP_VMODEM_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vcore_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VCORE_PG_STATUS_MASK),
		(PMIC_STRUP_VCORE_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vs1_pg_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PG_SDN_STS0),
		(&val),
		(PMIC_STRUP_VS1_PG_STATUS_MASK),
		(PMIC_STRUP_VS1_PG_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vproc_oc_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VPROC_OC_STATUS_MASK),
		(PMIC_STRUP_VPROC_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vmodem_oc_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VMODEM_OC_STATUS_MASK),
		(PMIC_STRUP_VMODEM_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vcore_oc_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VCORE_OC_STATUS_MASK),
		(PMIC_STRUP_VCORE_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_vs1_oc_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_OC_SDN_STS0),
		(&val),
		(PMIC_STRUP_VS1_OC_STATUS_MASK),
		(PMIC_STRUP_VS1_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pmu_thermal_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_THERMALSTATUS),
		(&val),
		(PMIC_PMU_THERMAL_DEB_MASK),
		(PMIC_PMU_THERMAL_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_thermal_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_THERMALSTATUS),
		(&val),
		(PMIC_STRUP_THERMAL_STATUS_MASK),
		(PMIC_STRUP_THERMAL_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_srclken_in0_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CON),
		(val),
		(PMIC_RG_SRCLKEN_IN0_EN_MASK),
		(PMIC_RG_SRCLKEN_IN0_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken_in0_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CON),
		(&val),
		(PMIC_RG_SRCLKEN_IN0_EN_MASK),
		(PMIC_RG_SRCLKEN_IN0_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_srclken_in0_hw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CON),
		(val),
		(PMIC_RG_SRCLKEN_IN0_HW_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN0_HW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_srclken_in1_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CON),
		(val),
		(PMIC_RG_SRCLKEN_IN1_EN_MASK),
		(PMIC_RG_SRCLKEN_IN1_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken_in1_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CON),
		(&val),
		(PMIC_RG_SRCLKEN_IN1_EN_MASK),
		(PMIC_RG_SRCLKEN_IN1_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_srclken_in1_hw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CON),
		(val),
		(PMIC_RG_SRCLKEN_IN1_HW_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN1_HW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_srclken_in_sync_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CON),
		(val),
		(PMIC_RG_SRCLKEN_IN_SYNC_EN_MASK),
		(PMIC_RG_SRCLKEN_IN_SYNC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken_in_sync_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CON),
		(&val),
		(PMIC_RG_SRCLKEN_IN_SYNC_EN_MASK),
		(PMIC_RG_SRCLKEN_IN_SYNC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_osc_en_auto_off(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CON),
		(val),
		(PMIC_RG_OSC_EN_AUTO_OFF_MASK),
		(PMIC_RG_OSC_EN_AUTO_OFF_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_osc_en_auto_off(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CON),
		(&val),
		(PMIC_RG_OSC_EN_AUTO_OFF_MASK),
		(PMIC_RG_OSC_EN_AUTO_OFF_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_test_out(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TEST_OUT),
		(&val),
		(PMIC_TEST_OUT_MASK),
		(PMIC_TEST_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_mon_flag_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TEST_CON0),
		(val),
		(PMIC_RG_MON_FLAG_SEL_MASK),
		(PMIC_RG_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_mon_grp_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TEST_CON0),
		(val),
		(PMIC_RG_MON_GRP_SEL_MASK),
		(PMIC_RG_MON_GRP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_nandtree_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TEST_CON1),
		(val),
		(PMIC_RG_NANDTREE_MODE_MASK),
		(PMIC_RG_NANDTREE_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_test_auxadc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TEST_CON1),
		(val),
		(PMIC_RG_TEST_AUXADC_MASK),
		(PMIC_RG_TEST_AUXADC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_efuse_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TEST_CON1),
		(val),
		(PMIC_RG_EFUSE_MODE_MASK),
		(PMIC_RG_EFUSE_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_test_strup(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TEST_CON1),
		(val),
		(PMIC_RG_TEST_STRUP_MASK),
		(PMIC_RG_TEST_STRUP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_testmode_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TESTMODE_SW),
		(val),
		(PMIC_TESTMODE_SW_MASK),
		(PMIC_TESTMODE_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_pmu_test_mode_scan(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOPSTATUS),
		(&val),
		(PMIC_PMU_TEST_MODE_SCAN_MASK),
		(PMIC_PMU_TEST_MODE_SCAN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pwrkey_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOPSTATUS),
		(&val),
		(PMIC_PWRKEY_DEB_MASK),
		(PMIC_PWRKEY_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_chrdet_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOPSTATUS),
		(&val),
		(PMIC_CHRDET_DEB_MASK),
		(PMIC_CHRDET_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_homekey_deb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOPSTATUS),
		(&val),
		(PMIC_HOMEKEY_DEB_MASK),
		(PMIC_HOMEKEY_DEB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_pmu_tdsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TDSEL_CON),
		(val),
		(PMIC_RG_PMU_TDSEL_MASK),
		(PMIC_RG_PMU_TDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_spi_tdsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TDSEL_CON),
		(val),
		(PMIC_RG_SPI_TDSEL_MASK),
		(PMIC_RG_SPI_TDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_aud_tdsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TDSEL_CON),
		(val),
		(PMIC_RG_AUD_TDSEL_MASK),
		(PMIC_RG_AUD_TDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_e32cal_tdsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TDSEL_CON),
		(val),
		(PMIC_RG_E32CAL_TDSEL_MASK),
		(PMIC_RG_E32CAL_TDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu_rdsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RDSEL_CON),
		(val),
		(PMIC_RG_PMU_RDSEL_MASK),
		(PMIC_RG_PMU_RDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_spi_rdsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RDSEL_CON),
		(val),
		(PMIC_RG_SPI_RDSEL_MASK),
		(PMIC_RG_SPI_RDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_aud_rdsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RDSEL_CON),
		(val),
		(PMIC_RG_AUD_RDSEL_MASK),
		(PMIC_RG_AUD_RDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_e32cal_rdsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RDSEL_CON),
		(val),
		(PMIC_RG_E32CAL_RDSEL_MASK),
		(PMIC_RG_E32CAL_RDSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_wdtrstb_in(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON0),
		(val),
		(PMIC_RG_SMT_WDTRSTB_IN_MASK),
		(PMIC_RG_SMT_WDTRSTB_IN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_srclken_in0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON0),
		(val),
		(PMIC_RG_SMT_SRCLKEN_IN0_MASK),
		(PMIC_RG_SMT_SRCLKEN_IN0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_srclken_in1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON0),
		(val),
		(PMIC_RG_SMT_SRCLKEN_IN1_MASK),
		(PMIC_RG_SMT_SRCLKEN_IN1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_rtc_32k1v8_0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON0),
		(val),
		(PMIC_RG_SMT_RTC_32K1V8_0_MASK),
		(PMIC_RG_SMT_RTC_32K1V8_0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_rtc_32k1v8_1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON0),
		(val),
		(PMIC_RG_SMT_RTC_32K1V8_1_MASK),
		(PMIC_RG_SMT_RTC_32K1V8_1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_spi_clk(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_SPI_CLK_MASK),
		(PMIC_RG_SMT_SPI_CLK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_spi_csn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_SPI_CSN_MASK),
		(PMIC_RG_SMT_SPI_CSN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_spi_mosi(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_SPI_MOSI_MASK),
		(PMIC_RG_SMT_SPI_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_spi_miso(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_SPI_MISO_MASK),
		(PMIC_RG_SMT_SPI_MISO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_aud_clk_mosi(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_CLK_MOSI_MASK),
		(PMIC_RG_SMT_AUD_CLK_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_aud_dat_mosi0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_DAT_MOSI0_MASK),
		(PMIC_RG_SMT_AUD_DAT_MOSI0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_aud_dat_mosi1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_DAT_MOSI1_MASK),
		(PMIC_RG_SMT_AUD_DAT_MOSI1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_aud_sync_mosi(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_SYNC_MOSI_MASK),
		(PMIC_RG_SMT_AUD_SYNC_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_aud_clk_miso(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_CLK_MISO_MASK),
		(PMIC_RG_SMT_AUD_CLK_MISO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_aud_dat_miso0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_DAT_MISO0_MASK),
		(PMIC_RG_SMT_AUD_DAT_MISO0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_aud_dat_miso1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_DAT_MISO1_MASK),
		(PMIC_RG_SMT_AUD_DAT_MISO1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smt_aud_sync_miso(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMT_CON1),
		(val),
		(PMIC_RG_SMT_AUD_SYNC_MISO_MASK),
		(PMIC_RG_SMT_AUD_SYNC_MISO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_top_rsv0(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_RSV0),
		(&val),
		(PMIC_RG_TOP_RSV0_MASK),
		(PMIC_RG_TOP_RSV0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_top_rsv1(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_RSV1),
		(&val),
		(PMIC_RG_TOP_RSV1_MASK),
		(PMIC_RG_TOP_RSV1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_octl_srclken_in0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON0),
		(val),
		(PMIC_RG_OCTL_SRCLKEN_IN0_MASK),
		(PMIC_RG_OCTL_SRCLKEN_IN0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_srclken_in1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON0),
		(val),
		(PMIC_RG_OCTL_SRCLKEN_IN1_MASK),
		(PMIC_RG_OCTL_SRCLKEN_IN1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_rtc_32k1v8_0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON0),
		(val),
		(PMIC_RG_OCTL_RTC_32K1V8_0_MASK),
		(PMIC_RG_OCTL_RTC_32K1V8_0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_rtc_32k1v8_1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON0),
		(val),
		(PMIC_RG_OCTL_RTC_32K1V8_1_MASK),
		(PMIC_RG_OCTL_RTC_32K1V8_1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_spi_clk(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON1),
		(val),
		(PMIC_RG_OCTL_SPI_CLK_MASK),
		(PMIC_RG_OCTL_SPI_CLK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_spi_csn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON1),
		(val),
		(PMIC_RG_OCTL_SPI_CSN_MASK),
		(PMIC_RG_OCTL_SPI_CSN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_spi_mosi(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON1),
		(val),
		(PMIC_RG_OCTL_SPI_MOSI_MASK),
		(PMIC_RG_OCTL_SPI_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_spi_miso(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON1),
		(val),
		(PMIC_RG_OCTL_SPI_MISO_MASK),
		(PMIC_RG_OCTL_SPI_MISO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_aud_clk_mosi(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON2),
		(val),
		(PMIC_RG_OCTL_AUD_CLK_MOSI_MASK),
		(PMIC_RG_OCTL_AUD_CLK_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_aud_dat_mosi0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON2),
		(val),
		(PMIC_RG_OCTL_AUD_DAT_MOSI0_MASK),
		(PMIC_RG_OCTL_AUD_DAT_MOSI0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_aud_dat_mosi1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON2),
		(val),
		(PMIC_RG_OCTL_AUD_DAT_MOSI1_MASK),
		(PMIC_RG_OCTL_AUD_DAT_MOSI1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_aud_sync_mosi(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON2),
		(val),
		(PMIC_RG_OCTL_AUD_SYNC_MOSI_MASK),
		(PMIC_RG_OCTL_AUD_SYNC_MOSI_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_aud_clk_miso(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON3),
		(val),
		(PMIC_RG_OCTL_AUD_CLK_MISO_MASK),
		(PMIC_RG_OCTL_AUD_CLK_MISO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_aud_dat_miso0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON3),
		(val),
		(PMIC_RG_OCTL_AUD_DAT_MISO0_MASK),
		(PMIC_RG_OCTL_AUD_DAT_MISO0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_aud_dat_miso1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON3),
		(val),
		(PMIC_RG_OCTL_AUD_DAT_MISO1_MASK),
		(PMIC_RG_OCTL_AUD_DAT_MISO1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_octl_aud_sync_miso(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRV_CON3),
		(val),
		(PMIC_RG_OCTL_AUD_SYNC_MISO_MASK),
		(PMIC_RG_OCTL_AUD_SYNC_MISO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_srclken_in0_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_SRCLKEN_IN0_FILTER_EN_MASK),
		(PMIC_RG_SRCLKEN_IN0_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken_in0_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_SRCLKEN_IN0_FILTER_EN_MASK),
		(PMIC_RG_SRCLKEN_IN0_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_srclken_in1_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_SRCLKEN_IN1_FILTER_EN_MASK),
		(PMIC_RG_SRCLKEN_IN1_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken_in1_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_SRCLKEN_IN1_FILTER_EN_MASK),
		(PMIC_RG_SRCLKEN_IN1_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_rtc32k_1v8_0_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_RTC32K_1V8_0_FILTER_EN_MASK),
		(PMIC_RG_RTC32K_1V8_0_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_rtc32k_1v8_0_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_RTC32K_1V8_0_FILTER_EN_MASK),
		(PMIC_RG_RTC32K_1V8_0_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_rtc32k_1v8_1_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_RTC32K_1V8_1_FILTER_EN_MASK),
		(PMIC_RG_RTC32K_1V8_1_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_rtc32k_1v8_1_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_RTC32K_1V8_1_FILTER_EN_MASK),
		(PMIC_RG_RTC32K_1V8_1_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_spi_clk_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_SPI_CLK_FILTER_EN_MASK),
		(PMIC_RG_SPI_CLK_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_spi_clk_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_SPI_CLK_FILTER_EN_MASK),
		(PMIC_RG_SPI_CLK_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_spi_csn_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_SPI_CSN_FILTER_EN_MASK),
		(PMIC_RG_SPI_CSN_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_spi_csn_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_SPI_CSN_FILTER_EN_MASK),
		(PMIC_RG_SPI_CSN_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_spi_mosi_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_SPI_MOSI_FILTER_EN_MASK),
		(PMIC_RG_SPI_MOSI_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_spi_mosi_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_SPI_MOSI_FILTER_EN_MASK),
		(PMIC_RG_SPI_MOSI_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_spi_miso_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_SPI_MISO_FILTER_EN_MASK),
		(PMIC_RG_SPI_MISO_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_spi_miso_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_SPI_MISO_FILTER_EN_MASK),
		(PMIC_RG_SPI_MISO_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_aud_clk_mosi_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_CLK_MOSI_FILTER_EN_MASK),
		(PMIC_RG_AUD_CLK_MOSI_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_aud_clk_mosi_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_CLK_MOSI_FILTER_EN_MASK),
		(PMIC_RG_AUD_CLK_MOSI_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_aud_dat_mosi0_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_DAT_MOSI0_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MOSI0_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_aud_dat_mosi0_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_DAT_MOSI0_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MOSI0_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_aud_dat_mosi1_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_DAT_MOSI1_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MOSI1_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_aud_dat_mosi1_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_DAT_MOSI1_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MOSI1_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_aud_sync_mosi_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_SYNC_MOSI_FILTER_EN_MASK),
		(PMIC_RG_AUD_SYNC_MOSI_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_aud_sync_mosi_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_SYNC_MOSI_FILTER_EN_MASK),
		(PMIC_RG_AUD_SYNC_MOSI_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_aud_clk_miso_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_CLK_MISO_FILTER_EN_MASK),
		(PMIC_RG_AUD_CLK_MISO_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_aud_clk_miso_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_CLK_MISO_FILTER_EN_MASK),
		(PMIC_RG_AUD_CLK_MISO_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_aud_dat_miso0_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_DAT_MISO0_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MISO0_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_aud_dat_miso0_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_DAT_MISO0_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MISO0_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_aud_dat_miso1_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_DAT_MISO1_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MISO1_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_aud_dat_miso1_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_DAT_MISO1_FILTER_EN_MASK),
		(PMIC_RG_AUD_DAT_MISO1_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_aud_sync_miso_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON0),
		(val),
		(PMIC_RG_AUD_SYNC_MISO_FILTER_EN_MASK),
		(PMIC_RG_AUD_SYNC_MISO_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_aud_sync_miso_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON0),
		(&val),
		(PMIC_RG_AUD_SYNC_MISO_FILTER_EN_MASK),
		(PMIC_RG_AUD_SYNC_MISO_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_wdtrstb_in_filter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON1),
		(val),
		(PMIC_RG_WDTRSTB_IN_FILTER_EN_MASK),
		(PMIC_RG_WDTRSTB_IN_FILTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_wdtrstb_in_filter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FILTER_CON1),
		(&val),
		(PMIC_RG_WDTRSTB_IN_FILTER_EN_MASK),
		(PMIC_RG_WDTRSTB_IN_FILTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_srclken_in0_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_SRCLKEN_IN0_RCSEL_MASK),
		(PMIC_RG_SRCLKEN_IN0_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_srclken_in1_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_SRCLKEN_IN1_RCSEL_MASK),
		(PMIC_RG_SRCLKEN_IN1_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc32k_1v8_0_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_RTC32K_1V8_0_RCSEL_MASK),
		(PMIC_RG_RTC32K_1V8_0_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc32k_1v8_1_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_RTC32K_1V8_1_RCSEL_MASK),
		(PMIC_RG_RTC32K_1V8_1_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_spi_clk_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_SPI_CLK_RCSEL_MASK),
		(PMIC_RG_SPI_CLK_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_spi_csn_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_SPI_CSN_RCSEL_MASK),
		(PMIC_RG_SPI_CSN_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_spi_mosi_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_SPI_MOSI_RCSEL_MASK),
		(PMIC_RG_SPI_MOSI_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_spi_miso_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_SPI_MISO_RCSEL_MASK),
		(PMIC_RG_SPI_MISO_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_aud_clk_mosi_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_CLK_MOSI_RCSEL_MASK),
		(PMIC_RG_AUD_CLK_MOSI_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_aud_dat_mosi0_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_DAT_MOSI0_RCSEL_MASK),
		(PMIC_RG_AUD_DAT_MOSI0_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_aud_dat_mosi1_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_DAT_MOSI1_RCSEL_MASK),
		(PMIC_RG_AUD_DAT_MOSI1_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_aud_sync_mosi_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_SYNC_MOSI_RCSEL_MASK),
		(PMIC_RG_AUD_SYNC_MOSI_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_aud_clk_miso_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_CLK_MISO_RCSEL_MASK),
		(PMIC_RG_AUD_CLK_MISO_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_aud_dat_miso0_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_DAT_MISO0_RCSEL_MASK),
		(PMIC_RG_AUD_DAT_MISO0_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_aud_dat_miso1_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_DAT_MISO1_RCSEL_MASK),
		(PMIC_RG_AUD_DAT_MISO1_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_aud_sync_miso_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON2),
		(val),
		(PMIC_RG_AUD_SYNC_MISO_RCSEL_MASK),
		(PMIC_RG_AUD_SYNC_MISO_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_wdtrstb_in_rcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FILTER_CON3),
		(val),
		(PMIC_RG_WDTRSTB_IN_RCSEL_MASK),
		(PMIC_RG_WDTRSTB_IN_RCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_top_status(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_STATUS),
		(val),
		(PMIC_TOP_STATUS_MASK),
		(PMIC_TOP_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_vm_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_TRAP),
		(&val),
		(PMIC_VM_MODE_MASK),
		(PMIC_VM_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top1_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP1_ID),
		(&val),
		(PMIC_TOP1_ANA_ID_MASK),
		(PMIC_TOP1_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top1_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP1_ID),
		(&val),
		(PMIC_TOP1_DIG_ID_MASK),
		(PMIC_TOP1_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top1_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP1_REV0),
		(&val),
		(PMIC_TOP1_ANA_MINOR_REV_MASK),
		(PMIC_TOP1_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top1_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP1_REV0),
		(&val),
		(PMIC_TOP1_ANA_MAJOR_REV_MASK),
		(PMIC_TOP1_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top1_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP1_REV0),
		(&val),
		(PMIC_TOP1_DIG_MINOR_REV_MASK),
		(PMIC_TOP1_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top1_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP1_REV0),
		(&val),
		(PMIC_TOP1_DIG_MAJOR_REV_MASK),
		(PMIC_TOP1_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top1_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP1_DSN_DBI),
		(&val),
		(PMIC_TOP1_DSN_CBS_MASK),
		(PMIC_TOP1_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top1_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP1_DSN_DBI),
		(&val),
		(PMIC_TOP1_DSN_BIX_MASK),
		(PMIC_TOP1_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top1_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP1_DSN_DBI),
		(&val),
		(PMIC_TOP1_DSN_ESP_MASK),
		(PMIC_TOP1_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top1_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP1_DSN_DXI),
		(&val),
		(PMIC_TOP1_DSN_FPI_MASK),
		(PMIC_TOP1_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_gpio_dir0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_DIR0),
		(val),
		(PMIC_GPIO_DIR0_MASK),
		(PMIC_GPIO_DIR0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio_pullen0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_PULLEN0),
		(val),
		(PMIC_GPIO_PULLEN0_MASK),
		(PMIC_GPIO_PULLEN0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio_pullsel0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_PULLSEL0),
		(val),
		(PMIC_GPIO_PULLSEL0_MASK),
		(PMIC_GPIO_PULLSEL0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio_dinv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_DINV0),
		(val),
		(PMIC_GPIO_DINV0_MASK),
		(PMIC_GPIO_DINV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio_dout0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_DOUT0),
		(val),
		(PMIC_GPIO_DOUT0_MASK),
		(PMIC_GPIO_DOUT0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_gpio_pi0(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_GPIO_PI0),
		(&val),
		(PMIC_GPIO_PI0_MASK),
		(PMIC_GPIO_PI0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_gpio_poe0(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_GPIO_POE0),
		(&val),
		(PMIC_GPIO_POE0_MASK),
		(PMIC_GPIO_POE0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_gpio0_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE0),
		(val),
		(PMIC_GPIO0_MODE_MASK),
		(PMIC_GPIO0_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio1_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE0),
		(val),
		(PMIC_GPIO1_MODE_MASK),
		(PMIC_GPIO1_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio2_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE0),
		(val),
		(PMIC_GPIO2_MODE_MASK),
		(PMIC_GPIO2_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio3_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE0),
		(val),
		(PMIC_GPIO3_MODE_MASK),
		(PMIC_GPIO3_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio4_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE1),
		(val),
		(PMIC_GPIO4_MODE_MASK),
		(PMIC_GPIO4_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio5_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE1),
		(val),
		(PMIC_GPIO5_MODE_MASK),
		(PMIC_GPIO5_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio6_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE1),
		(val),
		(PMIC_GPIO6_MODE_MASK),
		(PMIC_GPIO6_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio7_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE1),
		(val),
		(PMIC_GPIO7_MODE_MASK),
		(PMIC_GPIO7_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio8_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE2),
		(val),
		(PMIC_GPIO8_MODE_MASK),
		(PMIC_GPIO8_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio9_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE2),
		(val),
		(PMIC_GPIO9_MODE_MASK),
		(PMIC_GPIO9_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio10_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE2),
		(val),
		(PMIC_GPIO10_MODE_MASK),
		(PMIC_GPIO10_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio11_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE2),
		(val),
		(PMIC_GPIO11_MODE_MASK),
		(PMIC_GPIO11_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio12_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE3),
		(val),
		(PMIC_GPIO12_MODE_MASK),
		(PMIC_GPIO12_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio13_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE3),
		(val),
		(PMIC_GPIO13_MODE_MASK),
		(PMIC_GPIO13_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio14_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE3),
		(val),
		(PMIC_GPIO14_MODE_MASK),
		(PMIC_GPIO14_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio15_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_MODE3),
		(val),
		(PMIC_GPIO15_MODE_MASK),
		(PMIC_GPIO15_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpio_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_GPIO_RSV),
		(val),
		(PMIC_GPIO_RSV_MASK),
		(PMIC_GPIO_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_top2_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP2_ID),
		(&val),
		(PMIC_TOP2_ANA_ID_MASK),
		(PMIC_TOP2_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top2_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP2_ID),
		(&val),
		(PMIC_TOP2_DIG_ID_MASK),
		(PMIC_TOP2_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top2_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP2_REV0),
		(&val),
		(PMIC_TOP2_ANA_MINOR_REV_MASK),
		(PMIC_TOP2_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top2_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP2_REV0),
		(&val),
		(PMIC_TOP2_ANA_MAJOR_REV_MASK),
		(PMIC_TOP2_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top2_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP2_REV0),
		(&val),
		(PMIC_TOP2_DIG_MINOR_REV_MASK),
		(PMIC_TOP2_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top2_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP2_REV0),
		(&val),
		(PMIC_TOP2_DIG_MAJOR_REV_MASK),
		(PMIC_TOP2_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top2_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP2_DSN_DBI),
		(&val),
		(PMIC_TOP2_DSN_CBS_MASK),
		(PMIC_TOP2_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top2_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP2_DSN_DBI),
		(&val),
		(PMIC_TOP2_DSN_BIX_MASK),
		(PMIC_TOP2_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top2_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP2_DSN_DBI),
		(&val),
		(PMIC_TOP2_DSN_ESP_MASK),
		(PMIC_TOP2_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top2_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP2_DSN_DXI),
		(&val),
		(PMIC_TOP2_DSN_FPI_MASK),
		(PMIC_TOP2_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_g_smps_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_G_SMPS_CK_PDN_MASK),
		(PMIC_RG_G_SMPS_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_g_smps_test_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_G_SMPS_TEST_CK_PDN_MASK),
		(PMIC_RG_G_SMPS_TEST_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_intrp_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_INTRP_CK_PDN_MASK),
		(PMIC_RG_INTRP_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_intrp_pre_oc_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_INTRP_PRE_OC_CK_PDN_MASK),
		(PMIC_RG_INTRP_PRE_OC_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_efuse_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_EFUSE_CK_PDN_MASK),
		(PMIC_RG_EFUSE_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_eint_32k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_EINT_32K_CK_PDN_MASK),
		(PMIC_RG_EINT_32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu1m_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_PMU1M_CK_PDN_MASK),
		(PMIC_RG_PMU1M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_spi_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_SPI_CK_PDN_MASK),
		(PMIC_RG_SPI_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_reg_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_REG_CK_PDN_MASK),
		(PMIC_RG_REG_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu32k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_PMU32K_CK_PDN_MASK),
		(PMIC_RG_PMU32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fqmtr_32k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_FQMTR_32K_CK_PDN_MASK),
		(PMIC_RG_FQMTR_32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fqmtr_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_FQMTR_CK_PDN_MASK),
		(PMIC_RG_FQMTR_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu26m_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_PMU26M_CK_PDN_MASK),
		(PMIC_RG_PMU26M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu128k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_PMU128K_CK_PDN_MASK),
		(PMIC_RG_PMU128K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc26m_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC26M_CK_PDN_MASK),
		(PMIC_RG_RTC26M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc32k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC32K_CK_PDN_MASK),
		(PMIC_RG_RTC32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc32k_1v8_0_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON1),
		(val),
		(PMIC_RG_RTC32K_1V8_0_PDN_MASK),
		(PMIC_RG_RTC32K_1V8_0_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc32k_1v8_1_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON1),
		(val),
		(PMIC_RG_RTC32K_1V8_1_PDN_MASK),
		(PMIC_RG_RTC32K_1V8_1_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_trim_128k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON1),
		(val),
		(PMIC_RG_TRIM_128K_CK_PDN_MASK),
		(PMIC_RG_TRIM_128K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bgr_test_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON1),
		(val),
		(PMIC_RG_BGR_TEST_CK_PDN_MASK),
		(PMIC_RG_BGR_TEST_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_test_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKPDN_CON1),
		(val),
		(PMIC_RG_PCHR_TEST_CK_PDN_MASK),
		(PMIC_RG_PCHR_TEST_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fqmtr_ck_cksel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_FQMTR_CK_CKSEL_MASK),
		(PMIC_RG_FQMTR_CK_CKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_32k1v8_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_RTC_32K1V8_SEL_MASK),
		(PMIC_RG_RTC_32K1V8_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bgr_test_ck_cksel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_BGR_TEST_CK_CKSEL_MASK),
		(PMIC_RG_BGR_TEST_CK_CKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_test_ck_cksel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_PCHR_TEST_CK_CKSEL_MASK),
		(PMIC_RG_PCHR_TEST_CK_CKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_26m_ck_sel_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_26M_CK_SEL_HWEN_MASK),
		(PMIC_RG_26M_CK_SEL_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_26m_ck_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_26M_CK_SEL_MASK),
		(PMIC_RG_26M_CK_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu_1m_ck_sel_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_PMU_1M_CK_SEL_HWEN_MASK),
		(PMIC_RG_PMU_1M_CK_SEL_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu_1m_ck_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_PMU_1M_CK_SEL_MASK),
		(PMIC_RG_PMU_1M_CK_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu32k_ck_cksel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_PMU32K_CK_CKSEL_MASK),
		(PMIC_RG_PMU32K_CK_CKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_top_cksel_con0_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_TOP_CKSEL_CON0_RSV_MASK),
		(PMIC_RG_TOP_CKSEL_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_srcvolten_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_SRCVOLTEN_SW_MASK),
		(PMIC_RG_SRCVOLTEN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_osc_sel_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_BUCK_OSC_SEL_SW_MASK),
		(PMIC_RG_BUCK_OSC_SEL_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vowen_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_VOWEN_SW_MASK),
		(PMIC_RG_VOWEN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_srcvolten_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_SRCVOLTEN_MODE_MASK),
		(PMIC_RG_SRCVOLTEN_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_osc_sel_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_BUCK_OSC_SEL_MODE_MASK),
		(PMIC_RG_BUCK_OSC_SEL_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vowen_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_VOWEN_MODE_MASK),
		(PMIC_RG_VOWEN_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_top_cksel_con2_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKSEL_CON1),
		(val),
		(PMIC_RG_TOP_CKSEL_CON2_RSV_MASK),
		(PMIC_RG_TOP_CKSEL_CON2_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_reg_ck_divsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKDIVSEL_CON0),
		(val),
		(PMIC_RG_REG_CK_DIVSEL_MASK),
		(PMIC_RG_REG_CK_DIVSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_top_ckdivsel_con0_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKDIVSEL_CON0),
		(val),
		(PMIC_TOP_CKDIVSEL_CON0_RSV_MASK),
		(PMIC_TOP_CKDIVSEL_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_g_smps_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_G_SMPS_CK_PDN_HWEN_MASK),
		(PMIC_RG_G_SMPS_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_reg_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_REG_CK_PDN_HWEN_MASK),
		(PMIC_RG_REG_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_efuse_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_EFUSE_CK_PDN_HWEN_MASK),
		(PMIC_RG_EFUSE_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_eint_32k_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_EINT_32K_CK_PDN_HWEN_MASK),
		(PMIC_RG_EINT_32K_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc26m_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC26M_CK_PDN_HWEN_MASK),
		(PMIC_RG_RTC26M_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu26m_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_PMU26M_CK_PDN_HWEN_MASK),
		(PMIC_RG_PMU26M_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu_vxo22_on(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_PMU_VXO22_ON_MASK),
		(PMIC_RG_PMU_VXO22_ON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu_vxo22_on_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_PMU_VXO22_ON_SW_EN_MASK),
		(PMIC_RG_PMU_VXO22_ON_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_pmu_vxo22_on_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CKHWEN_CON0),
		(&val),
		(PMIC_RG_PMU_VXO22_ON_SW_EN_MASK),
		(PMIC_RG_PMU_VXO22_ON_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_top_ckhwen_con0_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKHWEN_CON0),
		(val),
		(PMIC_TOP_CKHWEN_CON0_RSV_MASK),
		(PMIC_TOP_CKHWEN_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu128k_ck_tst_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_PMU128K_CK_TST_DIS_MASK),
		(PMIC_RG_PMU128K_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smps_ck_tst_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_SMPS_CK_TST_DIS_MASK),
		(PMIC_RG_SMPS_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_clk_26m_pmu_tst_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_XO_CLK_26M_PMU_TST_DIS_MASK),
		(PMIC_RG_XO_CLK_26M_PMU_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_clk_26m_dig_tst_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_XO_CLK_26M_DIG_TST_DIS_MASK),
		(PMIC_RG_XO_CLK_26M_DIG_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_26m_ck_tst_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_RTC_26M_CK_TST_DIS_MASK),
		(PMIC_RG_RTC_26M_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_32k_ck_tst_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_RTC_32K_CK_TST_DIS_MASK),
		(PMIC_RG_RTC_32K_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu_m_ck_tst_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_PMU_M_CK_TST_DIS_MASK),
		(PMIC_RG_PMU_M_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_top_cktst_con0_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON0),
		(val),
		(PMIC_TOP_CKTST_CON0_RSV_MASK),
		(PMIC_TOP_CKTST_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu128k_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_PMU128K_CK_TSTSEL_MASK),
		(PMIC_RG_PMU128K_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smps_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_SMPS_CK_TSTSEL_MASK),
		(PMIC_RG_SMPS_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_clk_26m_pmu_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_XO_CLK_26M_PMU_TSTSEL_MASK),
		(PMIC_RG_XO_CLK_26M_PMU_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_clk_26m_dig_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_XO_CLK_26M_DIG_TSTSEL_MASK),
		(PMIC_RG_XO_CLK_26M_DIG_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_26m_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_RTC_26M_CK_TSTSEL_MASK),
		(PMIC_RG_RTC_26M_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_32k_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_RTC_32K_CK_TSTSEL_MASK),
		(PMIC_RG_RTC_32K_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu_m_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_PMU_M_CK_TSTSEL_MASK),
		(PMIC_RG_PMU_M_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_efuse_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_EFUSE_CK_TSTSEL_MASK),
		(PMIC_RG_EFUSE_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bgr_test_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_BGR_TEST_CK_TSTSEL_MASK),
		(PMIC_RG_BGR_TEST_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_test_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_PCHR_TEST_CK_TSTSEL_MASK),
		(PMIC_RG_PCHR_TEST_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fqmtr_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CKTST_CON1),
		(val),
		(PMIC_RG_FQMTR_CK_TSTSEL_MASK),
		(PMIC_RG_FQMTR_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_osc_sel_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_OSC_SEL_SW_EN_MASK),
		(PMIC_RG_OSC_SEL_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_osc_sel_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_OSC_SEL_SW_EN_MASK),
		(PMIC_RG_OSC_SEL_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_osc_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_OSC_SEL_MASK),
		(PMIC_RG_OSC_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_osc_en_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_OSC_EN_SW_EN_MASK),
		(PMIC_RG_OSC_EN_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_osc_en_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_OSC_EN_SW_EN_MASK),
		(PMIC_RG_OSC_EN_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_osc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_OSC_EN_MASK),
		(PMIC_RG_OSC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_osc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_OSC_EN_MASK),
		(PMIC_RG_OSC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_g_smps_ck_pdn_vowen_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_G_SMPS_CK_PDN_VOWEN_EN_MASK),
		(PMIC_RG_G_SMPS_CK_PDN_VOWEN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_g_smps_ck_pdn_vowen_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_G_SMPS_CK_PDN_VOWEN_EN_MASK),
		(PMIC_RG_G_SMPS_CK_PDN_VOWEN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_srclken0_lp_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_SRCLKEN0_LP_EN_MASK),
		(PMIC_RG_SRCLKEN0_LP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken0_lp_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_SRCLKEN0_LP_EN_MASK),
		(PMIC_RG_SRCLKEN0_LP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_srclken1_lp_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_SRCLKEN1_LP_EN_MASK),
		(PMIC_RG_SRCLKEN1_LP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken1_lp_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_SRCLKEN1_LP_EN_MASK),
		(PMIC_RG_SRCLKEN1_LP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_srclken2_lp_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_SRCLKEN2_LP_EN_MASK),
		(PMIC_RG_SRCLKEN2_LP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken2_lp_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_SRCLKEN2_LP_EN_MASK),
		(PMIC_RG_SRCLKEN2_LP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_lp_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK_LP_EN_MASK),
		(PMIC_RG_BUCK_LP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_lp_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_BUCK_LP_EN_MASK),
		(PMIC_RG_BUCK_LP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_lp_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_LDO_LP_EN_MASK),
		(PMIC_RG_LDO_LP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_lp_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_LDO_LP_EN_MASK),
		(PMIC_RG_LDO_LP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_pfm_flag(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK_PFM_FLAG_MASK),
		(PMIC_RG_BUCK_PFM_FLAG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_pfm_flag_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK_PFM_FLAG_SW_EN_MASK),
		(PMIC_RG_BUCK_PFM_FLAG_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_pfm_flag_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_BUCK_PFM_FLAG_SW_EN_MASK),
		(PMIC_RG_BUCK_PFM_FLAG_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_dcxo26m_rdy(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_RDY_MASK),
		(PMIC_RG_DCXO26M_RDY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_dcxo26m_rdy_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_DCXO26M_RDY_SW_EN_MASK),
		(PMIC_RG_DCXO26M_RDY_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_dcxo26m_rdy_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_DCXO26M_RDY_SW_EN_MASK),
		(PMIC_RG_DCXO26M_RDY_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_pmu_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_PMU_LP_MASK),
		(PMIC_RG_PMU_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu_lp_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_CON0),
		(val),
		(PMIC_RG_PMU_LP_SW_EN_MASK),
		(PMIC_RG_PMU_LP_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_pmu_lp_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_CON0),
		(&val),
		(PMIC_RG_PMU_LP_SW_EN_MASK),
		(PMIC_RG_PMU_LP_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_pmu_mdb_dcm_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_DCM_CON0),
		(val),
		(PMIC_RG_PMU_MDB_DCM_SW_EN_MASK),
		(PMIC_RG_PMU_MDB_DCM_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_pmu_mdb_dcm_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_DCM_CON0),
		(&val),
		(PMIC_RG_PMU_MDB_DCM_SW_EN_MASK),
		(PMIC_RG_PMU_MDB_DCM_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_pmu_mdb_dcm_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_DCM_CON0),
		(val),
		(PMIC_RG_PMU_MDB_DCM_SW_MODE_MASK),
		(PMIC_RG_PMU_MDB_DCM_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_ro_handover_debug(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_HANDOVER_DEBUG0),
		(&val),
		(PMIC_RO_HANDOVER_DEBUG_MASK),
		(PMIC_RO_HANDOVER_DEBUG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_efuse_man_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON0),
		(val),
		(PMIC_RG_EFUSE_MAN_RST_MASK),
		(PMIC_RG_EFUSE_MAN_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_driver_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON0),
		(val),
		(PMIC_RG_DRIVER_RST_MASK),
		(PMIC_RG_DRIVER_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fqmtr_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON0),
		(val),
		(PMIC_RG_FQMTR_RST_MASK),
		(PMIC_RG_FQMTR_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON0),
		(val),
		(PMIC_RG_RTC_RST_MASK),
		(PMIC_RG_RTC_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_type_c_cc_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON0),
		(val),
		(PMIC_RG_TYPE_C_CC_RST_MASK),
		(PMIC_RG_TYPE_C_CC_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_clk_trim_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON0),
		(val),
		(PMIC_RG_CLK_TRIM_RST_MASK),
		(PMIC_RG_CLK_TRIM_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_srclken_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON0),
		(val),
		(PMIC_RG_BUCK_SRCLKEN_RST_MASK),
		(PMIC_RG_BUCK_SRCLKEN_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_prot_pmpp_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON1),
		(val),
		(PMIC_RG_BUCK_PROT_PMPP_RST_MASK),
		(PMIC_RG_BUCK_PROT_PMPP_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_spk_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON1),
		(val),
		(PMIC_RG_SPK_RST_MASK),
		(PMIC_RG_SPK_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ft_vr_sysrstb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON1),
		(val),
		(PMIC_RG_FT_VR_SYSRSTB_MASK),
		(PMIC_RG_FT_VR_SYSRSTB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_cali_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON1),
		(val),
		(PMIC_RG_LDO_CALI_RST_MASK),
		(PMIC_RG_LDO_CALI_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_top_rst_con1_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON1),
		(val),
		(PMIC_TOP_RST_CON1_RSV_MASK),
		(PMIC_TOP_RST_CON1_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_chr_ldo_det_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON2),
		(val),
		(PMIC_RG_CHR_LDO_DET_MODE_MASK),
		(PMIC_RG_CHR_LDO_DET_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_chr_ldo_det_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON2),
		(val),
		(PMIC_RG_CHR_LDO_DET_SW_MASK),
		(PMIC_RG_CHR_LDO_DET_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_chrwdt_flag_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON2),
		(val),
		(PMIC_RG_CHRWDT_FLAG_MODE_MASK),
		(PMIC_RG_CHRWDT_FLAG_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_chrwdt_flag_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON2),
		(val),
		(PMIC_RG_CHRWDT_FLAG_SW_MASK),
		(PMIC_RG_CHRWDT_FLAG_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_top_rst_con2_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_CON2),
		(val),
		(PMIC_TOP_RST_CON2_RSV_MASK),
		(PMIC_TOP_RST_CON2_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_wdtrstb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_MISC),
		(val),
		(PMIC_RG_WDTRSTB_EN_MASK),
		(PMIC_RG_WDTRSTB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_wdtrstb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_RST_MISC),
		(&val),
		(PMIC_RG_WDTRSTB_EN_MASK),
		(PMIC_RG_WDTRSTB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_wdtrstb_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_MISC),
		(val),
		(PMIC_RG_WDTRSTB_MODE_MASK),
		(PMIC_RG_WDTRSTB_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_wdtrstb_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_RST_MISC),
		(&val),
		(PMIC_WDTRSTB_STATUS_MASK),
		(PMIC_WDTRSTB_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_wdtrstb_status_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_MISC),
		(val),
		(PMIC_WDTRSTB_STATUS_CLR_MASK),
		(PMIC_WDTRSTB_STATUS_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_wdtrstb_fb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_MISC),
		(val),
		(PMIC_RG_WDTRSTB_FB_EN_MASK),
		(PMIC_RG_WDTRSTB_FB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_wdtrstb_fb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_RST_MISC),
		(&val),
		(PMIC_RG_WDTRSTB_FB_EN_MASK),
		(PMIC_RG_WDTRSTB_FB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_wdtrstb_deb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_MISC),
		(val),
		(PMIC_RG_WDTRSTB_DEB_MASK),
		(PMIC_RG_WDTRSTB_DEB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_homekey_rst_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_MISC),
		(val),
		(PMIC_RG_HOMEKEY_RST_EN_MASK),
		(PMIC_RG_HOMEKEY_RST_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_homekey_rst_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_RST_MISC),
		(&val),
		(PMIC_RG_HOMEKEY_RST_EN_MASK),
		(PMIC_RG_HOMEKEY_RST_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_pwrkey_rst_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_MISC),
		(val),
		(PMIC_RG_PWRKEY_RST_EN_MASK),
		(PMIC_RG_PWRKEY_RST_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_pwrkey_rst_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_RST_MISC),
		(&val),
		(PMIC_RG_PWRKEY_RST_EN_MASK),
		(PMIC_RG_PWRKEY_RST_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_pwrrst_tmr_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_MISC),
		(val),
		(PMIC_RG_PWRRST_TMR_DIS_MASK),
		(PMIC_RG_PWRRST_TMR_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pwrkey_rst_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_MISC),
		(val),
		(PMIC_RG_PWRKEY_RST_TD_MASK),
		(PMIC_RG_PWRKEY_RST_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_top_rst_misc_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_MISC),
		(val),
		(PMIC_TOP_RST_MISC_RSV_MASK),
		(PMIC_TOP_RST_MISC_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_vpwrin_rstb_status(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_STATUS),
		(val),
		(PMIC_VPWRIN_RSTB_STATUS_MASK),
		(PMIC_VPWRIN_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_ddlo_rstb_status(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_STATUS),
		(val),
		(PMIC_DDLO_RSTB_STATUS_MASK),
		(PMIC_DDLO_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_uvlo_rstb_status(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_STATUS),
		(val),
		(PMIC_UVLO_RSTB_STATUS_MASK),
		(PMIC_UVLO_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_ddlo_rstb_status(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_STATUS),
		(val),
		(PMIC_RTC_DDLO_RSTB_STATUS_MASK),
		(PMIC_RTC_DDLO_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrwdt_reg_rstb_status(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_STATUS),
		(val),
		(PMIC_CHRWDT_REG_RSTB_STATUS_MASK),
		(PMIC_CHRWDT_REG_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrdet_reg_rstb_status(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_STATUS),
		(val),
		(PMIC_CHRDET_REG_RSTB_STATUS_MASK),
		(PMIC_CHRDET_REG_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bwdt_ddlo_rstb_status(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_STATUS),
		(val),
		(PMIC_BWDT_DDLO_RSTB_STATUS_MASK),
		(PMIC_BWDT_DDLO_RSTB_STATUS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_top_rst_status_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_RST_STATUS),
		(val),
		(PMIC_TOP_RST_STATUS_RSV_MASK),
		(PMIC_TOP_RST_STATUS_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_top2_elr_len(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP2_ELR_NUM),
		(&val),
		(PMIC_TOP2_ELR_LEN_MASK),
		(PMIC_TOP2_ELR_LEN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_top2_rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP2_ELR0),
		(val),
		(PMIC_RG_TOP2_RSV0_MASK),
		(PMIC_RG_TOP2_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_top2_rsv1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP2_ELR1),
		(val),
		(PMIC_RG_TOP2_RSV1_MASK),
		(PMIC_RG_TOP2_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_top3_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP3_ID),
		(&val),
		(PMIC_TOP3_ANA_ID_MASK),
		(PMIC_TOP3_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top3_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP3_ID),
		(&val),
		(PMIC_TOP3_DIG_ID_MASK),
		(PMIC_TOP3_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top3_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP3_REV0),
		(&val),
		(PMIC_TOP3_ANA_MINOR_REV_MASK),
		(PMIC_TOP3_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top3_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP3_REV0),
		(&val),
		(PMIC_TOP3_ANA_MAJOR_REV_MASK),
		(PMIC_TOP3_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top3_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP3_REV0),
		(&val),
		(PMIC_TOP3_DIG_MINOR_REV_MASK),
		(PMIC_TOP3_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top3_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP3_REV0),
		(&val),
		(PMIC_TOP3_DIG_MAJOR_REV_MASK),
		(PMIC_TOP3_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top3_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP3_DSN_DBI),
		(&val),
		(PMIC_TOP3_DSN_CBS_MASK),
		(PMIC_TOP3_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top3_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP3_DSN_DBI),
		(&val),
		(PMIC_TOP3_DSN_BIX_MASK),
		(PMIC_TOP3_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top3_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP3_DSN_DBI),
		(&val),
		(PMIC_TOP3_DSN_ESP_MASK),
		(PMIC_TOP3_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_top3_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP3_DSN_DXI),
		(&val),
		(PMIC_TOP3_DSN_FPI_MASK),
		(PMIC_TOP3_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_spi_cmd_alert(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_MISC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_SPI_CMD_ALERT_MASK),
		(PMIC_RG_INT_EN_SPI_CMD_ALERT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_spi_cmd_alert(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_MISC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_SPI_CMD_ALERT_MASK),
		(PMIC_RG_INT_EN_SPI_CMD_ALERT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_mask_spi_cmd_alert(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_MISC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_SPI_CMD_ALERT_MASK),
		(PMIC_RG_INT_MASK_SPI_CMD_ALERT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_spi_cmd_alert(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_MISC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_SPI_CMD_ALERT_MASK),
		(PMIC_RG_INT_RAW_STATUS_SPI_CMD_ALERT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_mask_buck_top(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BUCK_TOP_MASK),
		(PMIC_RG_INT_MASK_BUCK_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_ldo_top(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_LDO_TOP_MASK),
		(PMIC_RG_INT_MASK_LDO_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_psc_top(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_PSC_TOP_MASK),
		(PMIC_RG_INT_MASK_PSC_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_sck_top(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_SCK_TOP_MASK),
		(PMIC_RG_INT_MASK_SCK_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_bm_top(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BM_TOP_MASK),
		(PMIC_RG_INT_MASK_BM_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_hk_top(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_HK_TOP_MASK),
		(PMIC_RG_INT_MASK_HK_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_xpp_top(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_XPP_TOP_MASK),
		(PMIC_RG_INT_MASK_XPP_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_aud_top(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_AUD_TOP_MASK),
		(PMIC_RG_INT_MASK_AUD_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_misc_top(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_MISC_TOP_MASK),
		(PMIC_RG_INT_MASK_MISC_TOP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_top_con0_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_TOP_CON0_RSV_MASK),
		(PMIC_RG_INT_MASK_TOP_CON0_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_int_status_buck_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_BUCK_TOP_MASK),
		(PMIC_INT_STATUS_BUCK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_status_ldo_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_LDO_TOP_MASK),
		(PMIC_INT_STATUS_LDO_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_status_psc_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_PSC_TOP_MASK),
		(PMIC_INT_STATUS_PSC_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_status_sck_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_SCK_TOP_MASK),
		(PMIC_INT_STATUS_SCK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_status_bm_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_BM_TOP_MASK),
		(PMIC_INT_STATUS_BM_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_status_hk_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_HK_TOP_MASK),
		(PMIC_INT_STATUS_HK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_status_xpp_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_XPP_TOP_MASK),
		(PMIC_INT_STATUS_XPP_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_status_aud_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_AUD_TOP_MASK),
		(PMIC_INT_STATUS_AUD_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_status_misc_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_MISC_TOP_MASK),
		(PMIC_INT_STATUS_MISC_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_status_top_rsv(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_STATUS0),
		(&val),
		(PMIC_INT_STATUS_TOP_RSV_MASK),
		(PMIC_INT_STATUS_TOP_RSV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_raw_status_buck_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_BUCK_TOP_MASK),
		(PMIC_INT_RAW_STATUS_BUCK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_raw_status_ldo_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_LDO_TOP_MASK),
		(PMIC_INT_RAW_STATUS_LDO_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_raw_status_psc_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_PSC_TOP_MASK),
		(PMIC_INT_RAW_STATUS_PSC_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_raw_status_sck_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_SCK_TOP_MASK),
		(PMIC_INT_RAW_STATUS_SCK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_raw_status_bm_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_BM_TOP_MASK),
		(PMIC_INT_RAW_STATUS_BM_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_raw_status_hk_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_HK_TOP_MASK),
		(PMIC_INT_RAW_STATUS_HK_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_raw_status_xpp_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_XPP_TOP_MASK),
		(PMIC_INT_RAW_STATUS_XPP_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_raw_status_aud_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_AUD_TOP_MASK),
		(PMIC_INT_RAW_STATUS_AUD_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_raw_status_misc_top(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_MISC_TOP_MASK),
		(PMIC_INT_RAW_STATUS_MISC_TOP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_int_raw_status_top_rsv(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_INT_RAW_STATUS_TOP_RSV_MASK),
		(PMIC_INT_RAW_STATUS_TOP_RSV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_polarity(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_POLARITY_MASK),
		(PMIC_RG_INT_POLARITY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_plt0_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PLT0_ID),
		(&val),
		(PMIC_PLT0_ANA_ID_MASK),
		(PMIC_PLT0_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_plt0_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PLT0_ID),
		(&val),
		(PMIC_PLT0_DIG_ID_MASK),
		(PMIC_PLT0_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_plt0_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PLT0_REV0),
		(&val),
		(PMIC_PLT0_ANA_MINOR_REV_MASK),
		(PMIC_PLT0_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_plt0_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PLT0_REV0),
		(&val),
		(PMIC_PLT0_ANA_MAJOR_REV_MASK),
		(PMIC_PLT0_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_plt0_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PLT0_REV0),
		(&val),
		(PMIC_PLT0_DIG_MINOR_REV_MASK),
		(PMIC_PLT0_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_plt0_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PLT0_REV0),
		(&val),
		(PMIC_PLT0_DIG_MAJOR_REV_MASK),
		(PMIC_PLT0_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_plt0_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PLT0_REV1),
		(&val),
		(PMIC_PLT0_DSN_CBS_MASK),
		(PMIC_PLT0_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_plt0_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PLT0_REV1),
		(&val),
		(PMIC_PLT0_DSN_BIX_MASK),
		(PMIC_PLT0_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_plt0_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PLT0_REV1),
		(&val),
		(PMIC_PLT0_DSN_ESP_MASK),
		(PMIC_PLT0_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_plt0_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PLT0_DSN_DXI),
		(&val),
		(PMIC_PLT0_DSN_FPI_MASK),
		(PMIC_PLT0_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_fqmtr_tcksel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FQMTR_CON0),
		(val),
		(PMIC_FQMTR_TCKSEL_MASK),
		(PMIC_FQMTR_TCKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_fqmtr_busy(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FQMTR_CON0),
		(&val),
		(PMIC_FQMTR_BUSY_MASK),
		(PMIC_FQMTR_BUSY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_fqmtr_dcxo26m_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FQMTR_CON0),
		(val),
		(PMIC_FQMTR_DCXO26M_EN_MASK),
		(PMIC_FQMTR_DCXO26M_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fqmtr_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FQMTR_CON0),
		(val),
		(PMIC_FQMTR_EN_MASK),
		(PMIC_FQMTR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fqmtr_winset(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FQMTR_CON1),
		(val),
		(PMIC_FQMTR_WINSET_MASK),
		(PMIC_FQMTR_WINSET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_fqmtr_data(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FQMTR_CON2),
		(&val),
		(PMIC_FQMTR_DATA_MASK),
		(PMIC_FQMTR_DATA_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_osc_128k_trim_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_TRIM),
		(val),
		(PMIC_RG_OSC_128K_TRIM_EN_MASK),
		(PMIC_RG_OSC_128K_TRIM_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_osc_128k_trim_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_TRIM),
		(&val),
		(PMIC_RG_OSC_128K_TRIM_EN_MASK),
		(PMIC_RG_OSC_128K_TRIM_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_osc_128k_trim_rate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_CLK_TRIM),
		(val),
		(PMIC_RG_OSC_128K_TRIM_RATE_MASK),
		(PMIC_RG_OSC_128K_TRIM_RATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_osc_128k_trim(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_CLK_TRIM),
		(&val),
		(PMIC_DA_OSC_128K_TRIM_MASK),
		(PMIC_DA_OSC_128K_TRIM_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_otp_pa(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON0),
		(val),
		(PMIC_RG_OTP_PA_MASK),
		(PMIC_RG_OTP_PA_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_otp_pdin(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON1),
		(val),
		(PMIC_RG_OTP_PDIN_MASK),
		(PMIC_RG_OTP_PDIN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_otp_ptm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON2),
		(val),
		(PMIC_RG_OTP_PTM_MASK),
		(PMIC_RG_OTP_PTM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_otp_pwe(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON3),
		(val),
		(PMIC_RG_OTP_PWE_MASK),
		(PMIC_RG_OTP_PWE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_otp_pprog(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON4),
		(val),
		(PMIC_RG_OTP_PPROG_MASK),
		(PMIC_RG_OTP_PPROG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_otp_pwe_src(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON5),
		(val),
		(PMIC_RG_OTP_PWE_SRC_MASK),
		(PMIC_RG_OTP_PWE_SRC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_otp_prog_pkey(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON6),
		(val),
		(PMIC_RG_OTP_PROG_PKEY_MASK),
		(PMIC_RG_OTP_PROG_PKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_otp_rd_pkey(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON7),
		(val),
		(PMIC_RG_OTP_RD_PKEY_MASK),
		(PMIC_RG_OTP_RD_PKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_otp_rd_trig(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON8),
		(val),
		(PMIC_RG_OTP_RD_TRIG_MASK),
		(PMIC_RG_OTP_RD_TRIG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rd_rdy_bypass(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON9),
		(val),
		(PMIC_RG_RD_RDY_BYPASS_MASK),
		(PMIC_RG_RD_RDY_BYPASS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_skip_otp_out(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON10),
		(val),
		(PMIC_RG_SKIP_OTP_OUT_MASK),
		(PMIC_RG_SKIP_OTP_OUT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_otp_rd_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_OTP_CON11),
		(val),
		(PMIC_RG_OTP_RD_SW_MASK),
		(PMIC_RG_OTP_RD_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_otp_dout_sw(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_OTP_CON12),
		(&val),
		(PMIC_RG_OTP_DOUT_SW_MASK),
		(PMIC_RG_OTP_DOUT_SW_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_otp_rd_busy(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_OTP_CON13),
		(&val),
		(PMIC_RG_OTP_RD_BUSY_MASK),
		(PMIC_RG_OTP_RD_BUSY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_otp_rd_ack(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_OTP_CON13),
		(&val),
		(PMIC_RG_OTP_RD_ACK_MASK),
		(PMIC_RG_OTP_RD_ACK_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_otp_pa_sw(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_OTP_CON14),
		(&val),
		(PMIC_RG_OTP_PA_SW_MASK),
		(PMIC_RG_OTP_PA_SW_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_tma_key(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_TMA_KEY),
		(val),
		(PMIC_TMA_KEY_MASK),
		(PMIC_TMA_KEY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_top_mdb_rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_MDB_CONF0),
		(val),
		(PMIC_TOP_MDB_RSV0_MASK),
		(PMIC_TOP_MDB_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_mdb_dm1_ds_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_MDB_CONF1),
		(val),
		(PMIC_RG_MDB_DM1_DS_EN_MASK),
		(PMIC_RG_MDB_DM1_DS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_mdb_dm1_ds_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_MDB_CONF1),
		(&val),
		(PMIC_RG_MDB_DM1_DS_EN_MASK),
		(PMIC_RG_MDB_DM1_DS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_top_mdb_rsv1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_MDB_CONF1),
		(val),
		(PMIC_TOP_MDB_RSV1_MASK),
		(PMIC_TOP_MDB_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu_mdb_bridge_bypass_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_MDB_CONF2),
		(val),
		(PMIC_RG_PMU_MDB_BRIDGE_BYPASS_EN_MASK),
		(PMIC_RG_PMU_MDB_BRIDGE_BYPASS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_pmu_mdb_bridge_bypass_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_MDB_CONF2),
		(&val),
		(PMIC_RG_PMU_MDB_BRIDGE_BYPASS_EN_MASK),
		(PMIC_RG_PMU_MDB_BRIDGE_BYPASS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_osc_128k_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PLT0_ELR0),
		(val),
		(PMIC_RG_OSC_128K_TRIM_MASK),
		(PMIC_RG_OSC_128K_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_efuse_osc_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PLT0_ELR1),
		(val),
		(PMIC_EFUSE_OSC_MODE_MASK),
		(PMIC_EFUSE_OSC_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_spislv_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SPISLV_ID),
		(&val),
		(PMIC_SPISLV_ANA_ID_MASK),
		(PMIC_SPISLV_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_spislv_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SPISLV_ID),
		(&val),
		(PMIC_SPISLV_DIG_ID_MASK),
		(PMIC_SPISLV_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_spislv_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SPISLV_REV0),
		(&val),
		(PMIC_SPISLV_ANA_MINOR_REV_MASK),
		(PMIC_SPISLV_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_spislv_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SPISLV_REV0),
		(&val),
		(PMIC_SPISLV_ANA_MAJOR_REV_MASK),
		(PMIC_SPISLV_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_spislv_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SPISLV_REV0),
		(&val),
		(PMIC_SPISLV_DIG_MINOR_REV_MASK),
		(PMIC_SPISLV_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_spislv_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SPISLV_REV0),
		(&val),
		(PMIC_SPISLV_DIG_MAJOR_REV_MASK),
		(PMIC_SPISLV_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_spislv_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SPISLV_REV1),
		(&val),
		(PMIC_SPISLV_DSN_CBS_MASK),
		(PMIC_SPISLV_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_spislv_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SPISLV_REV1),
		(&val),
		(PMIC_SPISLV_DSN_BIX_MASK),
		(PMIC_SPISLV_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_spislv_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SPISLV_REV1),
		(&val),
		(PMIC_SPISLV_DSN_ESP_MASK),
		(PMIC_SPISLV_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_spislv_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SPISLV_DSN_DXI),
		(&val),
		(PMIC_SPISLV_DSN_FPI_MASK),
		(PMIC_SPISLV_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_slp_rw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON0),
		(val),
		(PMIC_RG_SLP_RW_EN_MASK),
		(PMIC_RG_SLP_RW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_slp_rw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RG_SPI_CON0),
		(&val),
		(PMIC_RG_SLP_RW_EN_MASK),
		(PMIC_RG_SLP_RW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_spi_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON0),
		(val),
		(PMIC_RG_SPI_RSV_MASK),
		(PMIC_RG_SPI_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dew_dio_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DEW_DIO_EN),
		(val),
		(PMIC_DEW_DIO_EN_MASK),
		(PMIC_DEW_DIO_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_dew_read_test(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DEW_READ_TEST),
		(&val),
		(PMIC_DEW_READ_TEST_MASK),
		(PMIC_DEW_READ_TEST_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_dew_write_test(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DEW_WRITE_TEST),
		(val),
		(PMIC_DEW_WRITE_TEST_MASK),
		(PMIC_DEW_WRITE_TEST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dew_crc_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DEW_CRC_SWRST),
		(val),
		(PMIC_DEW_CRC_SWRST_MASK),
		(PMIC_DEW_CRC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dew_crc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DEW_CRC_EN),
		(val),
		(PMIC_DEW_CRC_EN_MASK),
		(PMIC_DEW_CRC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_dew_crc_val(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DEW_CRC_VAL),
		(&val),
		(PMIC_DEW_CRC_VAL_MASK),
		(PMIC_DEW_CRC_VAL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_dew_dbg_mon_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DEW_DBG_MON_SEL),
		(val),
		(PMIC_DEW_DBG_MON_SEL_MASK),
		(PMIC_DEW_DBG_MON_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dew_cipher_key_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DEW_CIPHER_KEY_SEL),
		(val),
		(PMIC_DEW_CIPHER_KEY_SEL_MASK),
		(PMIC_DEW_CIPHER_KEY_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dew_cipher_iv_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DEW_CIPHER_IV_SEL),
		(val),
		(PMIC_DEW_CIPHER_IV_SEL_MASK),
		(PMIC_DEW_CIPHER_IV_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dew_cipher_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DEW_CIPHER_EN),
		(val),
		(PMIC_DEW_CIPHER_EN_MASK),
		(PMIC_DEW_CIPHER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_dew_cipher_rdy(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DEW_CIPHER_RDY),
		(&val),
		(PMIC_DEW_CIPHER_RDY_MASK),
		(PMIC_DEW_CIPHER_RDY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_dew_cipher_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DEW_CIPHER_MODE),
		(val),
		(PMIC_DEW_CIPHER_MODE_MASK),
		(PMIC_DEW_CIPHER_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dew_cipher_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DEW_CIPHER_SWRST),
		(val),
		(PMIC_DEW_CIPHER_SWRST_MASK),
		(PMIC_DEW_CIPHER_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dew_rddmy_no(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DEW_RDDMY_NO),
		(val),
		(PMIC_DEW_RDDMY_NO_MASK),
		(PMIC_DEW_RDDMY_NO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_int_type_con0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_INT_TYPE_CON0),
		(val),
		(PMIC_INT_TYPE_CON0_MASK),
		(PMIC_INT_TYPE_CON0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_cpu_int_sta(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_INT_STA),
		(&val),
		(PMIC_CPU_INT_STA_MASK),
		(PMIC_CPU_INT_STA_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_md32_int_sta(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_INT_STA),
		(&val),
		(PMIC_MD32_INT_STA_MASK),
		(PMIC_MD32_INT_STA_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_srclken_in3_smps_clk_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON1),
		(val),
		(PMIC_RG_SRCLKEN_IN3_SMPS_CLK_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN3_SMPS_CLK_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_srclken_in3_en_smps_test(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON1),
		(val),
		(PMIC_RG_SRCLKEN_IN3_EN_SMPS_TEST_MASK),
		(PMIC_RG_SRCLKEN_IN3_EN_SMPS_TEST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken_in3_en_smps_test(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RG_SPI_CON1),
		(&val),
		(PMIC_RG_SRCLKEN_IN3_EN_SMPS_TEST_MASK),
		(PMIC_RG_SRCLKEN_IN3_EN_SMPS_TEST_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_srclken_in2_smps_clk_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON1),
		(val),
		(PMIC_RG_SRCLKEN_IN2_SMPS_CLK_MODE_MASK),
		(PMIC_RG_SRCLKEN_IN2_SMPS_CLK_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_srclken_in2_en_smps_test(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON1),
		(val),
		(PMIC_RG_SRCLKEN_IN2_EN_SMPS_TEST_MASK),
		(PMIC_RG_SRCLKEN_IN2_EN_SMPS_TEST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken_in2_en_smps_test(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RG_SPI_CON1),
		(&val),
		(PMIC_RG_SRCLKEN_IN2_EN_SMPS_TEST_MASK),
		(PMIC_RG_SRCLKEN_IN2_EN_SMPS_TEST_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_spi_dly_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON2),
		(val),
		(PMIC_RG_SPI_DLY_SEL_MASK),
		(PMIC_RG_SPI_DLY_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_record_cmd0(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RG_SPI_CON3),
		(&val),
		(PMIC_RECORD_CMD0_MASK),
		(PMIC_RECORD_CMD0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_record_cmd1(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RG_SPI_CON4),
		(&val),
		(PMIC_RECORD_CMD1_MASK),
		(PMIC_RECORD_CMD1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_record_cmd2(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RG_SPI_CON5),
		(&val),
		(PMIC_RECORD_CMD2_MASK),
		(PMIC_RECORD_CMD2_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_record_wdata0(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RG_SPI_CON6),
		(&val),
		(PMIC_RECORD_WDATA0_MASK),
		(PMIC_RECORD_WDATA0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_record_wdata1(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RG_SPI_CON7),
		(&val),
		(PMIC_RECORD_WDATA1_MASK),
		(PMIC_RECORD_WDATA1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_record_wdata2(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RG_SPI_CON8),
		(&val),
		(PMIC_RECORD_WDATA2_MASK),
		(PMIC_RECORD_WDATA2_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_addr_target(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON9),
		(val),
		(PMIC_RG_ADDR_TARGET_MASK),
		(PMIC_RG_ADDR_TARGET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_addr_mask(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON10),
		(val),
		(PMIC_RG_ADDR_MASK_MASK),
		(PMIC_RG_ADDR_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_wdata_target(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON11),
		(val),
		(PMIC_RG_WDATA_TARGET_MASK),
		(PMIC_RG_WDATA_TARGET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_wdata_mask(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON12),
		(val),
		(PMIC_RG_WDATA_MASK_MASK),
		(PMIC_RG_WDATA_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_spi_record_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON13),
		(val),
		(PMIC_RG_SPI_RECORD_CLR_MASK),
		(PMIC_RG_SPI_RECORD_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_cmd_alert_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RG_SPI_CON13),
		(val),
		(PMIC_RG_CMD_ALERT_CLR_MASK),
		(PMIC_RG_CMD_ALERT_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_srclken_in2_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_SPI_CON0),
		(val),
		(PMIC_RG_SRCLKEN_IN2_EN_MASK),
		(PMIC_RG_SRCLKEN_IN2_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken_in2_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_SPI_CON0),
		(&val),
		(PMIC_RG_SRCLKEN_IN2_EN_MASK),
		(PMIC_RG_SRCLKEN_IN2_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_srclken_in3_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_TOP_SPI_CON1),
		(val),
		(PMIC_RG_SRCLKEN_IN3_EN_MASK),
		(PMIC_RG_SRCLKEN_IN3_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_srclken_in3_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_TOP_SPI_CON1),
		(&val),
		(PMIC_RG_SRCLKEN_IN3_EN_MASK),
		(PMIC_RG_SRCLKEN_IN3_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sck_top_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_DSN_ID),
		(&val),
		(PMIC_SCK_TOP_ANA_ID_MASK),
		(PMIC_SCK_TOP_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sck_top_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_DSN_ID),
		(&val),
		(PMIC_SCK_TOP_DIG_ID_MASK),
		(PMIC_SCK_TOP_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sck_top_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_DSN_REV0),
		(&val),
		(PMIC_SCK_TOP_ANA_MINOR_REV_MASK),
		(PMIC_SCK_TOP_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sck_top_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_DSN_REV0),
		(&val),
		(PMIC_SCK_TOP_ANA_MAJOR_REV_MASK),
		(PMIC_SCK_TOP_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sck_top_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_DSN_REV0),
		(&val),
		(PMIC_SCK_TOP_DIG_MINOR_REV_MASK),
		(PMIC_SCK_TOP_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sck_top_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_DSN_REV0),
		(&val),
		(PMIC_SCK_TOP_DIG_MAJOR_REV_MASK),
		(PMIC_SCK_TOP_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sck_top_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_DBI),
		(&val),
		(PMIC_SCK_TOP_CBS_MASK),
		(PMIC_SCK_TOP_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sck_top_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_DBI),
		(&val),
		(PMIC_SCK_TOP_BIX_MASK),
		(PMIC_SCK_TOP_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_sck_top_xtal_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CON0),
		(val),
		(PMIC_SCK_TOP_XTAL_SEL_MASK),
		(PMIC_SCK_TOP_XTAL_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_sck_top_reserved(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CON0),
		(val),
		(PMIC_SCK_TOP_RESERVED_MASK),
		(PMIC_SCK_TOP_RESERVED_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_xosc32_enb_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_CON1),
		(&val),
		(PMIC_XOSC32_ENB_DET_MASK),
		(PMIC_XOSC32_ENB_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_sck_top_test_out(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_TEST_OUT),
		(&val),
		(PMIC_SCK_TOP_TEST_OUT_MASK),
		(PMIC_SCK_TOP_TEST_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_sck_top_mon_flag_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_TEST_CON0),
		(val),
		(PMIC_SCK_TOP_MON_FLAG_SEL_MASK),
		(PMIC_SCK_TOP_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_sck_top_mon_grp_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_TEST_CON0),
		(val),
		(PMIC_SCK_TOP_MON_GRP_SEL_MASK),
		(PMIC_SCK_TOP_MON_GRP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_sec_mclk_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_SEC_MCLK_PDN_MASK),
		(PMIC_RG_RTC_SEC_MCLK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_eosc_cali_test_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_EOSC_CALI_TEST_CK_PDN_MASK),
		(PMIC_RG_EOSC_CALI_TEST_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_eosc32_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_EOSC32_CK_PDN_MASK),
		(PMIC_RG_RTC_EOSC32_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_sec_32k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_SEC_32K_CK_PDN_MASK),
		(PMIC_RG_RTC_SEC_32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_mclk_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_MCLK_PDN_MASK),
		(PMIC_RG_RTC_MCLK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_32k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_32K_CK_PDN_MASK),
		(PMIC_RG_RTC_32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_26m_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_26M_CK_PDN_MASK),
		(PMIC_RG_RTC_26M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_2sec_off_det_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_RTC_2SEC_OFF_DET_PDN_MASK),
		(PMIC_RG_RTC_2SEC_OFF_DET_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_26m_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_26M_CK_PDN_HWEN_MASK),
		(PMIC_RG_RTC_26M_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_mclk_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_MCLK_PDN_HWEN_MASK),
		(PMIC_RG_RTC_MCLK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_sec_32k_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_SEC_32K_CK_PDN_HWEN_MASK),
		(PMIC_RG_RTC_SEC_32K_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_sec_mclk_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_SEC_MCLK_PDN_HWEN_MASK),
		(PMIC_RG_RTC_SEC_MCLK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_clk_pdn_hwen_rsv_1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_CLK_PDN_HWEN_RSV_1_MASK),
		(PMIC_RG_RTC_CLK_PDN_HWEN_RSV_1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_clk_pdn_hwen_rsv_0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKHWEN_CON0),
		(val),
		(PMIC_RG_RTC_CLK_PDN_HWEN_RSV_0_MASK),
		(PMIC_RG_RTC_CLK_PDN_HWEN_RSV_0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_ck_tstsel_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKTST_CON),
		(val),
		(PMIC_RG_RTC_CK_TSTSEL_RSV_MASK),
		(PMIC_RG_RTC_CK_TSTSEL_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtcdet_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKTST_CON),
		(val),
		(PMIC_RG_RTCDET_CK_TSTSEL_MASK),
		(PMIC_RG_RTCDET_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_eosc_cali_test_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKTST_CON),
		(val),
		(PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL_MASK),
		(PMIC_RG_EOSC_CALI_TEST_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_eosc32_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_CKTST_CON),
		(val),
		(PMIC_RG_RTC_EOSC32_CK_TSTSEL_MASK),
		(PMIC_RG_RTC_EOSC32_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_RTC_SWRST_MASK),
		(PMIC_RG_RTC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_sec_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_RTC_SEC_SWRST_MASK),
		(PMIC_RG_RTC_SEC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bank_rtc_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_RTC_SWRST_MASK),
		(PMIC_RG_BANK_RTC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bank_rtc_sec_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_RTC_SEC_SWRST_MASK),
		(PMIC_RG_BANK_RTC_SEC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bank_eosc_cali_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_EOSC_CALI_SWRST_MASK),
		(PMIC_RG_BANK_EOSC_CALI_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bank_sck_top_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_SCK_TOP_SWRST_MASK),
		(PMIC_RG_BANK_SCK_TOP_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_en_rtc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_RTC_MASK),
		(PMIC_RG_INT_EN_RTC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_rtc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_RTC_MASK),
		(PMIC_RG_INT_EN_RTC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_mask_rtc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_RTC_MASK),
		(PMIC_RG_INT_MASK_RTC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_rtc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_RTC_MASK),
		(PMIC_RG_INT_RAW_STATUS_RTC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_sck_top_polarity(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SCK_TOP_INT_MISC_CON),
		(val),
		(PMIC_SCK_TOP_POLARITY_MASK),
		(PMIC_SCK_TOP_POLARITY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_eosc_cali_start(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_EOSC_CALI_CON0),
		(val),
		(PMIC_EOSC_CALI_START_MASK),
		(PMIC_EOSC_CALI_START_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_eosc_cali_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_EOSC_CALI_CON0),
		(val),
		(PMIC_EOSC_CALI_TD_MASK),
		(PMIC_EOSC_CALI_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_eosc_cali_test(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_EOSC_CALI_CON0),
		(val),
		(PMIC_EOSC_CALI_TEST_MASK),
		(PMIC_EOSC_CALI_TEST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_eosc_cali_dcxo_rdy_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_EOSC_CALI_CON1),
		(val),
		(PMIC_EOSC_CALI_DCXO_RDY_TD_MASK),
		(PMIC_EOSC_CALI_DCXO_RDY_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_frc_vtcxo0_on(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_EOSC_CALI_CON1),
		(val),
		(PMIC_FRC_VTCXO0_ON_MASK),
		(PMIC_FRC_VTCXO0_ON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_eosc_cali_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_EOSC_CALI_CON1),
		(val),
		(PMIC_EOSC_CALI_RSV_MASK),
		(PMIC_EOSC_CALI_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_mix_eosc32_stp_lpdtb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_MIX_CON0),
		(&val),
		(PMIC_MIX_EOSC32_STP_LPDTB_MASK),
		(PMIC_MIX_EOSC32_STP_LPDTB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_mix_eosc32_stp_lpden(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON0),
		(val),
		(PMIC_MIX_EOSC32_STP_LPDEN_MASK),
		(PMIC_MIX_EOSC32_STP_LPDEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_xosc32_stp_pwdb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON0),
		(val),
		(PMIC_MIX_XOSC32_STP_PWDB_MASK),
		(PMIC_MIX_XOSC32_STP_PWDB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_mix_xosc32_stp_lpdtb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_MIX_CON0),
		(&val),
		(PMIC_MIX_XOSC32_STP_LPDTB_MASK),
		(PMIC_MIX_XOSC32_STP_LPDTB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_mix_xosc32_stp_lpden(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON0),
		(val),
		(PMIC_MIX_XOSC32_STP_LPDEN_MASK),
		(PMIC_MIX_XOSC32_STP_LPDEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_xosc32_stp_lpdrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON0),
		(val),
		(PMIC_MIX_XOSC32_STP_LPDRST_MASK),
		(PMIC_MIX_XOSC32_STP_LPDRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_xosc32_stp_cali(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON0),
		(val),
		(PMIC_MIX_XOSC32_STP_CALI_MASK),
		(PMIC_MIX_XOSC32_STP_CALI_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_stmp_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON0),
		(val),
		(PMIC_STMP_MODE_MASK),
		(PMIC_STMP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_eosc32_stp_chop_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_EOSC32_STP_CHOP_EN_MASK),
		(PMIC_MIX_EOSC32_STP_CHOP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_dcxo_stp_lvsh_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_DCXO_STP_LVSH_EN_MASK),
		(PMIC_MIX_DCXO_STP_LVSH_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_pmu_stp_ddlo_vrtc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_PMU_STP_DDLO_VRTC_MASK),
		(PMIC_MIX_PMU_STP_DDLO_VRTC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_pmu_stp_ddlo_vrtc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_PMU_STP_DDLO_VRTC_EN_MASK),
		(PMIC_MIX_PMU_STP_DDLO_VRTC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_rtc_stp_xosc32_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_RTC_STP_XOSC32_ENB_MASK),
		(PMIC_MIX_RTC_STP_XOSC32_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_dcxo_stp_test_deglitch_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_DCXO_STP_TEST_DEGLITCH_MODE_MASK),
		(PMIC_MIX_DCXO_STP_TEST_DEGLITCH_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_eosc32_stp_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_EOSC32_STP_RSV_MASK),
		(PMIC_MIX_EOSC32_STP_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_eosc32_vct_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_EOSC32_VCT_EN_MASK),
		(PMIC_MIX_EOSC32_VCT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_eosc32_opt(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_EOSC32_OPT_MASK),
		(PMIC_MIX_EOSC32_OPT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_dcxo_stp_lvsh_en_int(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_DCXO_STP_LVSH_EN_INT_MASK),
		(PMIC_MIX_DCXO_STP_LVSH_EN_INT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_rtc_gpio_coredetb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_RTC_GPIO_COREDETB_MASK),
		(PMIC_MIX_RTC_GPIO_COREDETB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_rtc_gpio_f32kob(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_RTC_GPIO_F32KOB_MASK),
		(PMIC_MIX_RTC_GPIO_F32KOB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_rtc_gpio_gpo(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_RTC_GPIO_GPO_MASK),
		(PMIC_MIX_RTC_GPIO_GPO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_rtc_gpio_oe(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON1),
		(val),
		(PMIC_MIX_RTC_GPIO_OE_MASK),
		(PMIC_MIX_RTC_GPIO_OE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_mix_rtc_stp_debug_out(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_MIX_CON2),
		(&val),
		(PMIC_MIX_RTC_STP_DEBUG_OUT_MASK),
		(PMIC_MIX_RTC_STP_DEBUG_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_mix_rtc_stp_debug_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON2),
		(val),
		(PMIC_MIX_RTC_STP_DEBUG_SEL_MASK),
		(PMIC_MIX_RTC_STP_DEBUG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_rtc_stp_k_eosc32_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON2),
		(val),
		(PMIC_MIX_RTC_STP_K_EOSC32_EN_MASK),
		(PMIC_MIX_RTC_STP_K_EOSC32_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_rtc_stp_embck_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON2),
		(val),
		(PMIC_MIX_RTC_STP_EMBCK_SEL_MASK),
		(PMIC_MIX_RTC_STP_EMBCK_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mix_stp_bbwakeup(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON2),
		(val),
		(PMIC_MIX_STP_BBWAKEUP_MASK),
		(PMIC_MIX_STP_BBWAKEUP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_mix_stp_rtc_ddlo(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_MIX_CON2),
		(&val),
		(PMIC_MIX_STP_RTC_DDLO_MASK),
		(PMIC_MIX_STP_RTC_DDLO_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_mix_rtc_xosc32_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_MIX_CON2),
		(&val),
		(PMIC_MIX_RTC_XOSC32_ENB_MASK),
		(PMIC_MIX_RTC_XOSC32_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_mix_efuse_xosc32_enb_opt(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_MIX_CON2),
		(val),
		(PMIC_MIX_EFUSE_XOSC32_ENB_OPT_MASK),
		(PMIC_MIX_EFUSE_XOSC32_ENB_OPT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rtc_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_DSN_ID),
		(&val),
		(PMIC_RTC_ANA_ID_MASK),
		(PMIC_RTC_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_DSN_ID),
		(&val),
		(PMIC_RTC_DIG_ID_MASK),
		(PMIC_RTC_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_DSN_REV0),
		(&val),
		(PMIC_RTC_ANA_MINOR_REV_MASK),
		(PMIC_RTC_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_DSN_REV0),
		(&val),
		(PMIC_RTC_ANA_MAJOR_REV_MASK),
		(PMIC_RTC_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_DSN_REV0),
		(&val),
		(PMIC_RTC_DIG_MINOR_REV_MASK),
		(PMIC_RTC_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_DSN_REV0),
		(&val),
		(PMIC_RTC_DIG_MAJOR_REV_MASK),
		(PMIC_RTC_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_dns_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_DBI),
		(&val),
		(PMIC_RTC_DNS_CBS_MASK),
		(PMIC_RTC_DNS_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_dns_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_DBI),
		(&val),
		(PMIC_RTC_DNS_BIX_MASK),
		(PMIC_RTC_DNS_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_pwren(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_BBPU),
		(val),
		(PMIC_PWREN_MASK),
		(PMIC_PWREN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bbpu_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_BBPU),
		(val),
		(PMIC_BBPU_CLR_MASK),
		(PMIC_BBPU_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auto(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_BBPU),
		(val),
		(PMIC_AUTO_MASK),
		(PMIC_AUTO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_cbusy(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_BBPU),
		(&val),
		(PMIC_CBUSY_MASK),
		(PMIC_CBUSY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_alsta(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_IRQ_STA),
		(&val),
		(PMIC_ALSTA_MASK),
		(PMIC_ALSTA_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_tcsta(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_IRQ_STA),
		(&val),
		(PMIC_TCSTA_MASK),
		(PMIC_TCSTA_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_lpsta(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_IRQ_STA),
		(&val),
		(PMIC_LPSTA_MASK),
		(PMIC_LPSTA_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_al_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_IRQ_EN),
		(val),
		(PMIC_AL_EN_MASK),
		(PMIC_AL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_IRQ_EN),
		(val),
		(PMIC_TC_EN_MASK),
		(PMIC_TC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_oneshot(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_IRQ_EN),
		(val),
		(PMIC_ONESHOT_MASK),
		(PMIC_ONESHOT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_lp_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_IRQ_EN),
		(val),
		(PMIC_LP_EN_MASK),
		(PMIC_LP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_seccii(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CII_EN),
		(val),
		(PMIC_SECCII_MASK),
		(PMIC_SECCII_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mincii(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CII_EN),
		(val),
		(PMIC_MINCII_MASK),
		(PMIC_MINCII_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_houcii(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CII_EN),
		(val),
		(PMIC_HOUCII_MASK),
		(PMIC_HOUCII_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_domcii(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CII_EN),
		(val),
		(PMIC_DOMCII_MASK),
		(PMIC_DOMCII_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dowcii(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CII_EN),
		(val),
		(PMIC_DOWCII_MASK),
		(PMIC_DOWCII_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mthcii(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CII_EN),
		(val),
		(PMIC_MTHCII_MASK),
		(PMIC_MTHCII_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_yeacii(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CII_EN),
		(val),
		(PMIC_YEACII_MASK),
		(PMIC_YEACII_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_seccii_1_2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CII_EN),
		(val),
		(PMIC_SECCII_1_2_MASK),
		(PMIC_SECCII_1_2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_seccii_1_4(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CII_EN),
		(val),
		(PMIC_SECCII_1_4_MASK),
		(PMIC_SECCII_1_4_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_seccii_1_8(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CII_EN),
		(val),
		(PMIC_SECCII_1_8_MASK),
		(PMIC_SECCII_1_8_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_sec_msk(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_MASK),
		(val),
		(PMIC_SEC_MSK_MASK),
		(PMIC_SEC_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_min_msk(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_MASK),
		(val),
		(PMIC_MIN_MSK_MASK),
		(PMIC_MIN_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_hou_msk(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_MASK),
		(val),
		(PMIC_HOU_MSK_MASK),
		(PMIC_HOU_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dom_msk(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_MASK),
		(val),
		(PMIC_DOM_MSK_MASK),
		(PMIC_DOM_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dow_msk(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_MASK),
		(val),
		(PMIC_DOW_MSK_MASK),
		(PMIC_DOW_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_mth_msk(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_MASK),
		(val),
		(PMIC_MTH_MSK_MASK),
		(PMIC_MTH_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_yea_msk(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_MASK),
		(val),
		(PMIC_YEA_MSK_MASK),
		(PMIC_YEA_MSK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_second(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_SEC),
		(val),
		(PMIC_TC_SECOND_MASK),
		(PMIC_TC_SECOND_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_minute(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_MIN),
		(val),
		(PMIC_TC_MINUTE_MASK),
		(PMIC_TC_MINUTE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_hour(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_HOU),
		(val),
		(PMIC_TC_HOUR_MASK),
		(PMIC_TC_HOUR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_dom(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_DOM),
		(val),
		(PMIC_TC_DOM_MASK),
		(PMIC_TC_DOM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_dow(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_DOW),
		(val),
		(PMIC_TC_DOW_MASK),
		(PMIC_TC_DOW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_month(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_MTH),
		(val),
		(PMIC_TC_MONTH_MASK),
		(PMIC_TC_MONTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_year(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_YEA),
		(val),
		(PMIC_TC_YEAR_MASK),
		(PMIC_TC_YEAR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_al_second(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_SEC),
		(val),
		(PMIC_AL_SECOND_MASK),
		(PMIC_AL_SECOND_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bbpu_auto_pdn_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_SEC),
		(val),
		(PMIC_BBPU_AUTO_PDN_SEL_MASK),
		(PMIC_BBPU_AUTO_PDN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bbpu_2sec_ck_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_SEC),
		(val),
		(PMIC_BBPU_2SEC_CK_SEL_MASK),
		(PMIC_BBPU_2SEC_CK_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bbpu_2sec_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_SEC),
		(val),
		(PMIC_BBPU_2SEC_EN_MASK),
		(PMIC_BBPU_2SEC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bbpu_2sec_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_SEC),
		(val),
		(PMIC_BBPU_2SEC_MODE_MASK),
		(PMIC_BBPU_2SEC_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_bbpu_2sec_stat_sta(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_AL_SEC),
		(&val),
		(PMIC_BBPU_2SEC_STAT_STA_MASK),
		(PMIC_BBPU_2SEC_STAT_STA_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rtc_lpd_opt(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_SEC),
		(val),
		(PMIC_RTC_LPD_OPT_MASK),
		(PMIC_RTC_LPD_OPT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_k_eosc32_vtcxo_on_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_SEC),
		(val),
		(PMIC_K_EOSC32_VTCXO_ON_SEL_MASK),
		(PMIC_K_EOSC32_VTCXO_ON_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_al_minute(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_MIN),
		(val),
		(PMIC_AL_MINUTE_MASK),
		(PMIC_AL_MINUTE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_al_hour(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_HOU),
		(val),
		(PMIC_AL_HOUR_MASK),
		(PMIC_AL_HOUR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_new_spare0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_HOU),
		(val),
		(PMIC_NEW_SPARE0_MASK),
		(PMIC_NEW_SPARE0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_al_dom(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_DOM),
		(val),
		(PMIC_AL_DOM_MASK),
		(PMIC_AL_DOM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_new_spare1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_DOM),
		(val),
		(PMIC_NEW_SPARE1_MASK),
		(PMIC_NEW_SPARE1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_al_dow(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_DOW),
		(val),
		(PMIC_AL_DOW_MASK),
		(PMIC_AL_DOW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_new_spare2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_DOW),
		(val),
		(PMIC_NEW_SPARE2_MASK),
		(PMIC_NEW_SPARE2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_al_month(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_MTH),
		(val),
		(PMIC_AL_MONTH_MASK),
		(PMIC_AL_MONTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_new_spare3(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_MTH),
		(val),
		(PMIC_NEW_SPARE3_MASK),
		(PMIC_NEW_SPARE3_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_al_year(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_YEA),
		(val),
		(PMIC_AL_YEAR_MASK),
		(PMIC_AL_YEAR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_k_eosc_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_AL_YEA),
		(val),
		(PMIC_RTC_K_EOSC_RSV_MASK),
		(PMIC_RTC_K_EOSC_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xosccali(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_OSC32CON),
		(val),
		(PMIC_XOSCCALI_MASK),
		(PMIC_XOSCCALI_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rtc_xosc32_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_OSC32CON),
		(&val),
		(PMIC_RTC_XOSC32_ENB_MASK),
		(PMIC_RTC_XOSC32_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rtc_embck_sel_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_OSC32CON),
		(val),
		(PMIC_RTC_EMBCK_SEL_MODE_MASK),
		(PMIC_RTC_EMBCK_SEL_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_embck_src_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_OSC32CON),
		(val),
		(PMIC_RTC_EMBCK_SRC_SEL_MASK),
		(PMIC_RTC_EMBCK_SRC_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_embck_sel_option(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_OSC32CON),
		(val),
		(PMIC_RTC_EMBCK_SEL_OPTION_MASK),
		(PMIC_RTC_EMBCK_SEL_OPTION_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_gps_ckout_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_OSC32CON),
		(val),
		(PMIC_RTC_GPS_CKOUT_EN_MASK),
		(PMIC_RTC_GPS_CKOUT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_eosc32_vct_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_OSC32CON),
		(val),
		(PMIC_RTC_EOSC32_VCT_EN_MASK),
		(PMIC_RTC_EOSC32_VCT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_eosc32_chop_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_OSC32CON),
		(val),
		(PMIC_RTC_EOSC32_CHOP_EN_MASK),
		(PMIC_RTC_EOSC32_CHOP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_gp_osc32_con(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_OSC32CON),
		(val),
		(PMIC_RTC_GP_OSC32_CON_MASK),
		(PMIC_RTC_GP_OSC32_CON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_reg_xosc32_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_OSC32CON),
		(val),
		(PMIC_RTC_REG_XOSC32_ENB_MASK),
		(PMIC_RTC_REG_XOSC32_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_powerkey1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_POWERKEY1),
		(val),
		(PMIC_RTC_POWERKEY1_MASK),
		(PMIC_RTC_POWERKEY1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_powerkey2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_POWERKEY2),
		(val),
		(PMIC_RTC_POWERKEY2_MASK),
		(PMIC_RTC_POWERKEY2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_pdn1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_PDN1),
		(val),
		(PMIC_RTC_PDN1_MASK),
		(PMIC_RTC_PDN1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_pdn2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_PDN2),
		(val),
		(PMIC_RTC_PDN2_MASK),
		(PMIC_RTC_PDN2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_spar0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_SPAR0),
		(val),
		(PMIC_RTC_SPAR0_MASK),
		(PMIC_RTC_SPAR0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_spar1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_SPAR1),
		(val),
		(PMIC_RTC_SPAR1_MASK),
		(PMIC_RTC_SPAR1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_prot(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_PROT),
		(val),
		(PMIC_RTC_PROT_MASK),
		(PMIC_RTC_PROT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_diff(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_DIFF),
		(val),
		(PMIC_RTC_DIFF_MASK),
		(PMIC_RTC_DIFF_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_power_detected(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_DIFF),
		(&val),
		(PMIC_POWER_DETECTED_MASK),
		(PMIC_POWER_DETECTED_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_k_eosc32_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_DIFF),
		(val),
		(PMIC_K_EOSC32_RSV_MASK),
		(PMIC_K_EOSC32_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_cali_rd_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_DIFF),
		(val),
		(PMIC_CALI_RD_SEL_MASK),
		(PMIC_CALI_RD_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_cali(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CALI),
		(val),
		(PMIC_RTC_CALI_MASK),
		(PMIC_RTC_CALI_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_cali_wr_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CALI),
		(val),
		(PMIC_CALI_WR_SEL_MASK),
		(PMIC_CALI_WR_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_k_eosc32_overflow(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CALI),
		(val),
		(PMIC_K_EOSC32_OVERFLOW_MASK),
		(PMIC_K_EOSC32_OVERFLOW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_vbat_lpsta_raw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_VBAT_LPSTA_RAW_MASK),
		(PMIC_VBAT_LPSTA_RAW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_eosc32_lpen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_EOSC32_LPEN_MASK),
		(PMIC_EOSC32_LPEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xosc32_lpen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_XOSC32_LPEN_MASK),
		(PMIC_XOSC32_LPEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_lprst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_LPRST_MASK),
		(PMIC_LPRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_cdbo(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_CDBO_MASK),
		(PMIC_CDBO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_f32kob(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_F32KOB_MASK),
		(PMIC_F32KOB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpo(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_GPO_MASK),
		(PMIC_GPO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_goe(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_GOE_MASK),
		(PMIC_GOE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gsr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_GSR_MASK),
		(PMIC_GSR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gsmt(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_GSMT_MASK),
		(PMIC_GSMT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_GPEN_MASK),
		(PMIC_GPEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_gpu(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_GPU_MASK),
		(PMIC_GPU_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_ge4(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_GE4_MASK),
		(PMIC_GE4_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_ge8(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_CON),
		(val),
		(PMIC_GE8_MASK),
		(PMIC_GE8_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_gpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_CON),
		(&val),
		(PMIC_GPI_MASK),
		(PMIC_GPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_lpsta_raw(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_CON),
		(&val),
		(PMIC_LPSTA_RAW_MASK),
		(PMIC_LPSTA_RAW_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_int_cnt(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_INT_CNT),
		(&val),
		(PMIC_RTC_INT_CNT_MASK),
		(PMIC_RTC_INT_CNT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rtc_sec_dat0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_SEC_DAT0),
		(val),
		(PMIC_RTC_SEC_DAT0_MASK),
		(PMIC_RTC_SEC_DAT0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_sec_dat1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_SEC_DAT1),
		(val),
		(PMIC_RTC_SEC_DAT1_MASK),
		(PMIC_RTC_SEC_DAT1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_sec_dat2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_SEC_DAT2),
		(val),
		(PMIC_RTC_SEC_DAT2_MASK),
		(PMIC_RTC_SEC_DAT2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rtc_sec_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_SEC_DSN_ID),
		(&val),
		(PMIC_RTC_SEC_ANA_ID_MASK),
		(PMIC_RTC_SEC_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_sec_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_SEC_DSN_ID),
		(&val),
		(PMIC_RTC_SEC_DIG_ID_MASK),
		(PMIC_RTC_SEC_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_sec_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_SEC_DSN_REV0),
		(&val),
		(PMIC_RTC_SEC_ANA_MINOR_REV_MASK),
		(PMIC_RTC_SEC_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_sec_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_SEC_DSN_REV0),
		(&val),
		(PMIC_RTC_SEC_ANA_MAJOR_REV_MASK),
		(PMIC_RTC_SEC_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_sec_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_SEC_DSN_REV0),
		(&val),
		(PMIC_RTC_SEC_DIG_MINOR_REV_MASK),
		(PMIC_RTC_SEC_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_sec_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_SEC_DSN_REV0),
		(&val),
		(PMIC_RTC_SEC_DIG_MAJOR_REV_MASK),
		(PMIC_RTC_SEC_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_sec_dns_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_SEC_DBI),
		(&val),
		(PMIC_RTC_SEC_DNS_CBS_MASK),
		(PMIC_RTC_SEC_DNS_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rtc_sec_dns_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_RTC_SEC_DBI),
		(&val),
		(PMIC_RTC_SEC_DNS_BIX_MASK),
		(PMIC_RTC_SEC_DNS_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_tc_second_sec(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_SEC_SEC),
		(val),
		(PMIC_TC_SECOND_SEC_MASK),
		(PMIC_TC_SECOND_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_minute_sec(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_MIN_SEC),
		(val),
		(PMIC_TC_MINUTE_SEC_MASK),
		(PMIC_TC_MINUTE_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_hour_sec(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_HOU_SEC),
		(val),
		(PMIC_TC_HOUR_SEC_MASK),
		(PMIC_TC_HOUR_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_dom_sec(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_DOM_SEC),
		(val),
		(PMIC_TC_DOM_SEC_MASK),
		(PMIC_TC_DOM_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_dow_sec(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_DOW_SEC),
		(val),
		(PMIC_TC_DOW_SEC_MASK),
		(PMIC_TC_DOW_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_month_sec(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_MTH_SEC),
		(val),
		(PMIC_TC_MONTH_SEC_MASK),
		(PMIC_TC_MONTH_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_tc_year_sec(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_TC_YEA_SEC),
		(val),
		(PMIC_TC_YEAR_SEC_MASK),
		(PMIC_TC_YEAR_SEC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rtc_sec_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_RTC_SEC_CK_PDN),
		(val),
		(PMIC_RTC_SEC_CK_PDN_MASK),
		(PMIC_RTC_SEC_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_dcxo_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_DSN_DBI),
		(&val),
		(PMIC_DCXO_DSN_CBS_MASK),
		(PMIC_DCXO_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_dcxo_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_DSN_DBI),
		(&val),
		(PMIC_DCXO_DSN_BIX_MASK),
		(PMIC_DCXO_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_dcxo_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_DSN_DBI),
		(&val),
		(PMIC_DCXO_DSN_ESP_MASK),
		(PMIC_DCXO_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_dcxo_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_DSN_DXI),
		(&val),
		(PMIC_DCXO_DSN_FPI_MASK),
		(PMIC_DCXO_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_xo_extbuf1_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF1_MODE_MASK),
		(PMIC_XO_EXTBUF1_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf1_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF1_EN_M_MASK),
		(PMIC_XO_EXTBUF1_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf2_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF2_MODE_MASK),
		(PMIC_XO_EXTBUF2_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf2_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF2_EN_M_MASK),
		(PMIC_XO_EXTBUF2_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf3_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF3_MODE_MASK),
		(PMIC_XO_EXTBUF3_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf3_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF3_EN_M_MASK),
		(PMIC_XO_EXTBUF3_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf4_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF4_MODE_MASK),
		(PMIC_XO_EXTBUF4_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf4_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_EXTBUF4_EN_M_MASK),
		(PMIC_XO_EXTBUF4_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_bb_lpm_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_BB_LPM_EN_MASK),
		(PMIC_XO_BB_LPM_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_enbb_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_ENBB_MAN_MASK),
		(PMIC_XO_ENBB_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_enbb_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_ENBB_EN_M_MASK),
		(PMIC_XO_ENBB_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_clksel_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW00),
		(val),
		(PMIC_XO_CLKSEL_MAN_MASK),
		(PMIC_XO_CLKSEL_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_clksel_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_CLKSEL_EN_M_MASK),
		(PMIC_XO_CLKSEL_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf1_ckg_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF1_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF1_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf1_ckg_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF1_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF1_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf2_ckg_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF2_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF2_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf2_ckg_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF2_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF2_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf3_ckg_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF3_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF3_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf3_ckg_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF3_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF3_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf4_ckg_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF4_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF4_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf4_ckg_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_EXTBUF4_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF4_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_intbuf_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_INTBUF_MAN_MASK),
		(PMIC_XO_INTBUF_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_pbuf_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_PBUF_EN_M_MASK),
		(PMIC_XO_PBUF_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ibuf_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_IBUF_EN_M_MASK),
		(PMIC_XO_IBUF_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_lpmbuf_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_LPMBUF_MAN_MASK),
		(PMIC_XO_LPMBUF_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_lpm_prebuf_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_LPM_PREBUF_EN_M_MASK),
		(PMIC_XO_LPM_PREBUF_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_lpbuf_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_LPBUF_EN_M_MASK),
		(PMIC_XO_LPBUF_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_bblpm_cksel_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW01),
		(val),
		(PMIC_XO_BBLPM_CKSEL_M_MASK),
		(PMIC_XO_BBLPM_CKSEL_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_en32k_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_EN32K_MAN_MASK),
		(PMIC_XO_EN32K_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_en32k_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_EN32K_M_MASK),
		(PMIC_XO_EN32K_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_xmode_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_XMODE_MAN_MASK),
		(PMIC_XO_XMODE_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_xmode_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_XMODE_M_MASK),
		(PMIC_XO_XMODE_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_strup_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_STRUP_MODE_MASK),
		(PMIC_XO_STRUP_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_fpm_time(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_AAC_FPM_TIME_MASK),
		(PMIC_XO_AAC_FPM_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_mode_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_AAC_MODE_LPM_MASK),
		(PMIC_XO_AAC_MODE_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_mode_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_AAC_MODE_FPM_MASK),
		(PMIC_XO_AAC_MODE_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_en26m_offsq_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_EN26M_OFFSQ_EN_MASK),
		(PMIC_XO_EN26M_OFFSQ_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ldocal_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_LDOCAL_EN_MASK),
		(PMIC_XO_LDOCAL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_cbank_sync_dyn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_CBANK_SYNC_DYN_MASK),
		(PMIC_XO_CBANK_SYNC_DYN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_26mlp_man_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_26MLP_MAN_EN_MASK),
		(PMIC_XO_26MLP_MAN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_bufldok_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW02),
		(val),
		(PMIC_XO_BUFLDOK_EN_MASK),
		(PMIC_XO_BUFLDOK_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_pmu_cken_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW03),
		(val),
		(PMIC_XO_PMU_CKEN_M_MASK),
		(PMIC_XO_PMU_CKEN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_pmu_cken_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW03),
		(val),
		(PMIC_XO_PMU_CKEN_MAN_MASK),
		(PMIC_XO_PMU_CKEN_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf6_ckg_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW03),
		(val),
		(PMIC_XO_EXTBUF6_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF6_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf6_ckg_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW03),
		(val),
		(PMIC_XO_EXTBUF6_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF6_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf7_ckg_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW03),
		(val),
		(PMIC_XO_EXTBUF7_CKG_MAN_MASK),
		(PMIC_XO_EXTBUF7_CKG_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf7_ckg_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW03),
		(val),
		(PMIC_XO_EXTBUF7_CKG_EN_M_MASK),
		(PMIC_XO_EXTBUF7_CKG_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_lpm_isel_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW03),
		(val),
		(PMIC_XO_LPM_ISEL_MAN_MASK),
		(PMIC_XO_LPM_ISEL_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_fpm_isel_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW03),
		(val),
		(PMIC_XO_FPM_ISEL_MAN_MASK),
		(PMIC_XO_FPM_ISEL_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_cdac_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW04),
		(val),
		(PMIC_XO_CDAC_FPM_MASK),
		(PMIC_XO_CDAC_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_cdac_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW04),
		(val),
		(PMIC_XO_CDAC_LPM_MASK),
		(PMIC_XO_CDAC_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_32kdiv_nfrac_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW05),
		(val),
		(PMIC_XO_32KDIV_NFRAC_FPM_MASK),
		(PMIC_XO_32KDIV_NFRAC_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_cofst_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW05),
		(val),
		(PMIC_XO_COFST_FPM_MASK),
		(PMIC_XO_COFST_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_32kdiv_nfrac_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW06),
		(val),
		(PMIC_XO_32KDIV_NFRAC_LPM_MASK),
		(PMIC_XO_32KDIV_NFRAC_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_cofst_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW06),
		(val),
		(PMIC_XO_COFST_LPM_MASK),
		(PMIC_XO_COFST_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_MAN_MASK),
		(PMIC_XO_CORE_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_EN_M_MASK),
		(PMIC_XO_CORE_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_turbo_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_TURBO_EN_M_MASK),
		(PMIC_XO_CORE_TURBO_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_aac_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_AAC_EN_M_MASK),
		(PMIC_XO_CORE_AAC_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_startup_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_STARTUP_EN_M_MASK),
		(PMIC_XO_STARTUP_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_vbfpm_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_VBFPM_EN_M_MASK),
		(PMIC_XO_CORE_VBFPM_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_vblpm_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_VBLPM_EN_M_MASK),
		(PMIC_XO_CORE_VBLPM_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_lpmbias_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_LPMBIAS_EN_M_MASK),
		(PMIC_XO_LPMBIAS_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_vtcgen_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_VTCGEN_EN_M_MASK),
		(PMIC_XO_VTCGEN_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_iaac_comp_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_IAAC_COMP_EN_M_MASK),
		(PMIC_XO_IAAC_COMP_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ifpm_comp_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_IFPM_COMP_EN_M_MASK),
		(PMIC_XO_IFPM_COMP_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ilpm_comp_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_ILPM_COMP_EN_M_MASK),
		(PMIC_XO_ILPM_COMP_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_bypcas_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_BYPCAS_FPM_MASK),
		(PMIC_XO_CORE_BYPCAS_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_gmx2_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_GMX2_FPM_MASK),
		(PMIC_XO_CORE_GMX2_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_idac_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW07),
		(val),
		(PMIC_XO_CORE_IDAC_FPM_MASK),
		(PMIC_XO_CORE_IDAC_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_comp_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_COMP_MAN_MASK),
		(PMIC_XO_AAC_COMP_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_EN_M_MASK),
		(PMIC_XO_AAC_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_monen_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_MONEN_M_MASK),
		(PMIC_XO_AAC_MONEN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_comp_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW08),
		(val),
		(PMIC_XO_COMP_EN_M_MASK),
		(PMIC_XO_COMP_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_comp_tsten_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW08),
		(val),
		(PMIC_XO_COMP_TSTEN_M_MASK),
		(PMIC_XO_COMP_TSTEN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_hv_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_HV_FPM_MASK),
		(PMIC_XO_AAC_HV_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_ibias_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_IBIAS_FPM_MASK),
		(PMIC_XO_AAC_IBIAS_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_vofst_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_VOFST_FPM_MASK),
		(PMIC_XO_AAC_VOFST_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_comp_hv_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_COMP_HV_FPM_MASK),
		(PMIC_XO_AAC_COMP_HV_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_vsel_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_VSEL_FPM_MASK),
		(PMIC_XO_AAC_VSEL_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_comp_pol(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW08),
		(val),
		(PMIC_XO_AAC_COMP_POL_MASK),
		(PMIC_XO_AAC_COMP_POL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_bypcas_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW09),
		(val),
		(PMIC_XO_CORE_BYPCAS_LPM_MASK),
		(PMIC_XO_CORE_BYPCAS_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_gmx2_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW09),
		(val),
		(PMIC_XO_CORE_GMX2_LPM_MASK),
		(PMIC_XO_CORE_GMX2_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_core_idac_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW09),
		(val),
		(PMIC_XO_CORE_IDAC_LPM_MASK),
		(PMIC_XO_CORE_IDAC_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_comp_hv_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW09),
		(val),
		(PMIC_XO_AAC_COMP_HV_LPM_MASK),
		(PMIC_XO_AAC_COMP_HV_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_vsel_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW09),
		(val),
		(PMIC_XO_AAC_VSEL_LPM_MASK),
		(PMIC_XO_AAC_VSEL_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_hv_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW09),
		(val),
		(PMIC_XO_AAC_HV_LPM_MASK),
		(PMIC_XO_AAC_HV_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_ibias_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW09),
		(val),
		(PMIC_XO_AAC_IBIAS_LPM_MASK),
		(PMIC_XO_AAC_IBIAS_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_vofst_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW09),
		(val),
		(PMIC_XO_AAC_VOFST_LPM_MASK),
		(PMIC_XO_AAC_VOFST_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_aac_fpm_swen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW09),
		(val),
		(PMIC_XO_AAC_FPM_SWEN_MASK),
		(PMIC_XO_AAC_FPM_SWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW09),
		(val),
		(PMIC_XO_SWRST_MASK),
		(PMIC_XO_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_32kdiv_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_32KDIV_SWRST_MASK),
		(PMIC_XO_32KDIV_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_32kdiv_ratio_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_32KDIV_RATIO_MAN_MASK),
		(PMIC_XO_32KDIV_RATIO_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_32kdiv_test_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_32KDIV_TEST_EN_MASK),
		(PMIC_XO_32KDIV_TEST_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_cbank_sync_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_CBANK_SYNC_MAN_MASK),
		(PMIC_XO_CBANK_SYNC_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_cbank_sync_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_CBANK_SYNC_EN_M_MASK),
		(PMIC_XO_CBANK_SYNC_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ctl_sync_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_CTL_SYNC_MAN_MASK),
		(PMIC_XO_CTL_SYNC_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ctl_sync_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_CTL_SYNC_EN_M_MASK),
		(PMIC_XO_CTL_SYNC_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ldo_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_LDO_MAN_MASK),
		(PMIC_XO_LDO_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ldopbuf_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_LDOPBUF_EN_M_MASK),
		(PMIC_XO_LDOPBUF_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ldopbuf_vset_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_LDOPBUF_VSET_M_MASK),
		(PMIC_XO_LDOPBUF_VSET_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ldovtst_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_LDOVTST_EN_M_MASK),
		(PMIC_XO_LDOVTST_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_test_vcal_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_TEST_VCAL_EN_M_MASK),
		(PMIC_XO_TEST_VCAL_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_vbist_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW10),
		(val),
		(PMIC_XO_VBIST_EN_M_MASK),
		(PMIC_XO_VBIST_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_vtest_sel_mux(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW11),
		(val),
		(PMIC_XO_VTEST_SEL_MUX_MASK),
		(PMIC_XO_VTEST_SEL_MUX_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_reserved3(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW11),
		(val),
		(PMIC_XO_RESERVED3_MASK),
		(PMIC_XO_RESERVED3_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf6_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW11),
		(val),
		(PMIC_XO_EXTBUF6_MODE_MASK),
		(PMIC_XO_EXTBUF6_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf6_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW11),
		(val),
		(PMIC_XO_EXTBUF6_EN_M_MASK),
		(PMIC_XO_EXTBUF6_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf7_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW11),
		(val),
		(PMIC_XO_EXTBUF7_MODE_MASK),
		(PMIC_XO_EXTBUF7_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf7_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW11),
		(val),
		(PMIC_XO_EXTBUF7_EN_M_MASK),
		(PMIC_XO_EXTBUF7_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_bufldok_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW11),
		(val),
		(PMIC_XO_BUFLDOK_MAN_MASK),
		(PMIC_XO_BUFLDOK_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_buf1ldo_cal_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW11),
		(val),
		(PMIC_XO_BUF1LDO_CAL_M_MASK),
		(PMIC_XO_BUF1LDO_CAL_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_bufldo_cal_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_XO_BUFLDO_CAL_M_MASK),
		(PMIC_XO_BUFLDO_CAL_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf4_clksel_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_XO_EXTBUF4_CLKSEL_MAN_MASK),
		(PMIC_XO_EXTBUF4_CLKSEL_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_vio18pg_bufen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_XO_VIO18PG_BUFEN_MASK),
		(PMIC_XO_VIO18PG_BUFEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_cal_en_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_XO_CAL_EN_MAN_MASK),
		(PMIC_XO_CAL_EN_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_cal_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_XO_CAL_EN_M_MASK),
		(PMIC_XO_CAL_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_core_osctd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_RG_XO_CORE_OSCTD_MASK),
		(PMIC_RG_XO_CORE_OSCTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_thadc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_XO_THADC_EN_MASK),
		(PMIC_XO_THADC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_sync_ckpol(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_RG_XO_SYNC_CKPOL_MASK),
		(PMIC_RG_XO_SYNC_CKPOL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_cbank_pol(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_RG_XO_CBANK_POL_MASK),
		(PMIC_RG_XO_CBANK_POL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_cbank_sync_byp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_RG_XO_CBANK_SYNC_BYP_MASK),
		(PMIC_RG_XO_CBANK_SYNC_BYP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_ctl_pol(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_RG_XO_CTL_POL_MASK),
		(PMIC_RG_XO_CTL_POL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_ctl_sync_byp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_RG_XO_CTL_SYNC_BYP_MASK),
		(PMIC_RG_XO_CTL_SYNC_BYP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_lpbuf_inv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_RG_XO_LPBUF_INV_MASK),
		(PMIC_RG_XO_LPBUF_INV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_ldopbuf_byp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_RG_XO_LDOPBUF_BYP_MASK),
		(PMIC_RG_XO_LDOPBUF_BYP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_ldopbuf_encl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW12),
		(val),
		(PMIC_RG_XO_LDOPBUF_ENCL_MASK),
		(PMIC_RG_XO_LDOPBUF_ENCL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_xo_ldopbuf_encl(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW12),
		(&val),
		(PMIC_RG_XO_LDOPBUF_ENCL_MASK),
		(PMIC_RG_XO_LDOPBUF_ENCL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_xo_vgbias_vset(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW13),
		(val),
		(PMIC_RG_XO_VGBIAS_VSET_MASK),
		(PMIC_RG_XO_VGBIAS_VSET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_pbuf_iset(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW13),
		(val),
		(PMIC_RG_XO_PBUF_ISET_MASK),
		(PMIC_RG_XO_PBUF_ISET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_ibuf_iset(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW13),
		(val),
		(PMIC_RG_XO_IBUF_ISET_MASK),
		(PMIC_RG_XO_IBUF_ISET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_reserved4(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW13),
		(val),
		(PMIC_RG_XO_RESERVED4_MASK),
		(PMIC_RG_XO_RESERVED4_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_vow_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW13),
		(val),
		(PMIC_RG_XO_VOW_EN_MASK),
		(PMIC_RG_XO_VOW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_xo_vow_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW13),
		(&val),
		(PMIC_RG_XO_VOW_EN_MASK),
		(PMIC_RG_XO_VOW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_xo_vow_div(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW13),
		(val),
		(PMIC_RG_XO_VOW_DIV_MASK),
		(PMIC_RG_XO_VOW_DIV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_bufldo24_encl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW13),
		(val),
		(PMIC_RG_XO_BUFLDO24_ENCL_MASK),
		(PMIC_RG_XO_BUFLDO24_ENCL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_xo_bufldo24_encl(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW13),
		(&val),
		(PMIC_RG_XO_BUFLDO24_ENCL_MASK),
		(PMIC_RG_XO_BUFLDO24_ENCL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_xo_bufldo24_ibx2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW13),
		(val),
		(PMIC_RG_XO_BUFLDO24_IBX2_MASK),
		(PMIC_RG_XO_BUFLDO24_IBX2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_reserved5(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW13),
		(val),
		(PMIC_RG_XO_RESERVED5_MASK),
		(PMIC_RG_XO_RESERVED5_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_bufldo13_encl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_RG_XO_BUFLDO13_ENCL_MASK),
		(PMIC_RG_XO_BUFLDO13_ENCL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_xo_bufldo13_encl(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW14),
		(&val),
		(PMIC_RG_XO_BUFLDO13_ENCL_MASK),
		(PMIC_RG_XO_BUFLDO13_ENCL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_xo_bufldo13_ibx2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_RG_XO_BUFLDO13_IBX2_MASK),
		(PMIC_RG_XO_BUFLDO13_IBX2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_bufldo13_ix2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_RG_XO_BUFLDO13_IX2_MASK),
		(PMIC_RG_XO_BUFLDO13_IX2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_lvldo_i_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_RG_XO_LVLDO_I_CTRL_MASK),
		(PMIC_RG_XO_LVLDO_I_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_bufldo67_encl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_RG_XO_BUFLDO67_ENCL_MASK),
		(PMIC_RG_XO_BUFLDO67_ENCL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_xo_bufldo67_encl(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW14),
		(&val),
		(PMIC_RG_XO_BUFLDO67_ENCL_MASK),
		(PMIC_RG_XO_BUFLDO67_ENCL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_xo_bufldo67_ibx2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_RG_XO_BUFLDO67_IBX2_MASK),
		(PMIC_RG_XO_BUFLDO67_IBX2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_bufldo67_ix2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_RG_XO_BUFLDO67_IX2_MASK),
		(PMIC_RG_XO_BUFLDO67_IX2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_lvldo_rfb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_RG_XO_LVLDO_RFB_MASK),
		(PMIC_RG_XO_LVLDO_RFB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_extbuf_inv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_RG_XO_EXTBUF_INV_MASK),
		(PMIC_RG_XO_EXTBUF_INV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_reserved0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_RG_XO_RESERVED0_MASK),
		(PMIC_RG_XO_RESERVED0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf2_clksel_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_XO_EXTBUF2_CLKSEL_MAN_MASK),
		(PMIC_XO_EXTBUF2_CLKSEL_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_audio_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_XO_AUDIO_EN_M_MASK),
		(PMIC_XO_AUDIO_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_audio_atten(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW14),
		(val),
		(PMIC_RG_XO_AUDIO_ATTEN_MASK),
		(PMIC_RG_XO_AUDIO_ATTEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_audio_iset(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW15),
		(val),
		(PMIC_RG_XO_AUDIO_ISET_MASK),
		(PMIC_RG_XO_AUDIO_ISET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_extbuf1_hd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW15),
		(val),
		(PMIC_RG_XO_EXTBUF1_HD_MASK),
		(PMIC_RG_XO_EXTBUF1_HD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_extbuf2_hd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW15),
		(val),
		(PMIC_RG_XO_EXTBUF2_HD_MASK),
		(PMIC_RG_XO_EXTBUF2_HD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_extbuf3_hd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW15),
		(val),
		(PMIC_RG_XO_EXTBUF3_HD_MASK),
		(PMIC_RG_XO_EXTBUF3_HD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_extbuf4_hd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW15),
		(val),
		(PMIC_RG_XO_EXTBUF4_HD_MASK),
		(PMIC_RG_XO_EXTBUF4_HD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_reserved8(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW15),
		(val),
		(PMIC_RG_XO_RESERVED8_MASK),
		(PMIC_RG_XO_RESERVED8_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_extbuf6_hd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW15),
		(val),
		(PMIC_RG_XO_EXTBUF6_HD_MASK),
		(PMIC_RG_XO_EXTBUF6_HD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_extbuf7_hd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW15),
		(val),
		(PMIC_RG_XO_EXTBUF7_HD_MASK),
		(PMIC_RG_XO_EXTBUF7_HD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf1_iset_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW16),
		(val),
		(PMIC_XO_EXTBUF1_ISET_M_MASK),
		(PMIC_XO_EXTBUF1_ISET_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf2_iset_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW16),
		(val),
		(PMIC_XO_EXTBUF2_ISET_M_MASK),
		(PMIC_XO_EXTBUF2_ISET_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf3_iset_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW16),
		(val),
		(PMIC_XO_EXTBUF3_ISET_M_MASK),
		(PMIC_XO_EXTBUF3_ISET_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf4_iset_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW16),
		(val),
		(PMIC_XO_EXTBUF4_ISET_M_MASK),
		(PMIC_XO_EXTBUF4_ISET_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_reserved9(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW16),
		(val),
		(PMIC_XO_RESERVED9_MASK),
		(PMIC_XO_RESERVED9_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf6_iset_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW16),
		(val),
		(PMIC_XO_EXTBUF6_ISET_M_MASK),
		(PMIC_XO_EXTBUF6_ISET_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_extbuf7_iset_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW16),
		(val),
		(PMIC_XO_EXTBUF7_ISET_M_MASK),
		(PMIC_XO_EXTBUF7_ISET_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_lpm_prebuf_iset(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW16),
		(val),
		(PMIC_RG_XO_LPM_PREBUF_ISET_MASK),
		(PMIC_RG_XO_LPM_PREBUF_ISET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_reserved1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW17),
		(val),
		(PMIC_RG_XO_RESERVED1_MASK),
		(PMIC_RG_XO_RESERVED1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_thadc_en_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW17),
		(val),
		(PMIC_XO_THADC_EN_MAN_MASK),
		(PMIC_XO_THADC_EN_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_tsource_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW17),
		(val),
		(PMIC_RG_XO_TSOURCE_EN_MASK),
		(PMIC_RG_XO_TSOURCE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_xo_tsource_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW17),
		(&val),
		(PMIC_RG_XO_TSOURCE_EN_MASK),
		(PMIC_RG_XO_TSOURCE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_xo_bufldo13_vset_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW17),
		(val),
		(PMIC_XO_BUFLDO13_VSET_M_MASK),
		(PMIC_XO_BUFLDO13_VSET_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_bufldo24_vset_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW17),
		(val),
		(PMIC_XO_BUFLDO24_VSET_M_MASK),
		(PMIC_XO_BUFLDO24_VSET_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_bufldo67_vset_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW17),
		(val),
		(PMIC_XO_BUFLDO67_VSET_M_MASK),
		(PMIC_XO_BUFLDO67_VSET_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_static_auxout_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW18),
		(val),
		(PMIC_XO_STATIC_AUXOUT_SEL_MASK),
		(PMIC_XO_STATIC_AUXOUT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_auxout_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW18),
		(val),
		(PMIC_XO_AUXOUT_SEL_MASK),
		(PMIC_XO_AUXOUT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_xo_static_auxout(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW19),
		(&val),
		(PMIC_XO_STATIC_AUXOUT_MASK),
		(PMIC_XO_STATIC_AUXOUT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_xo_pctat_comp_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW20),
		(val),
		(PMIC_RG_XO_PCTAT_COMP_EN_MASK),
		(PMIC_RG_XO_PCTAT_COMP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_xo_pctat_comp_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW20),
		(&val),
		(PMIC_RG_XO_PCTAT_COMP_EN_MASK),
		(PMIC_RG_XO_PCTAT_COMP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_xo_heater_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW20),
		(val),
		(PMIC_RG_XO_HEATER_SEL_MASK),
		(PMIC_RG_XO_HEATER_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_corner_detect_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW20),
		(val),
		(PMIC_RG_XO_CORNER_DETECT_EN_MASK),
		(PMIC_RG_XO_CORNER_DETECT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_xo_corner_detect_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW20),
		(&val),
		(PMIC_RG_XO_CORNER_DETECT_EN_MASK),
		(PMIC_RG_XO_CORNER_DETECT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_xo_corner_detect_en_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW20),
		(val),
		(PMIC_RG_XO_CORNER_DETECT_EN_MAN_MASK),
		(PMIC_RG_XO_CORNER_DETECT_EN_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_xo_corner_detect_en_man(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW20),
		(&val),
		(PMIC_RG_XO_CORNER_DETECT_EN_MAN_MASK),
		(PMIC_RG_XO_CORNER_DETECT_EN_MAN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_xo_resrved10(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW20),
		(val),
		(PMIC_RG_XO_RESRVED10_MASK),
		(PMIC_RG_XO_RESRVED10_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_corner_setting_tune(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW21),
		(val),
		(PMIC_RG_XO_CORNER_SETTING_TUNE_MASK),
		(PMIC_RG_XO_CORNER_SETTING_TUNE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_resrved11(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW21),
		(val),
		(PMIC_RG_XO_RESRVED11_MASK),
		(PMIC_RG_XO_RESRVED11_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rgs_ad_xo_corner_cal_done(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW22),
		(&val),
		(PMIC_RGS_AD_XO_CORNER_CAL_DONE_MASK),
		(PMIC_RGS_AD_XO_CORNER_CAL_DONE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_ad_xo_corner_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_CW22),
		(&val),
		(PMIC_RGS_AD_XO_CORNER_SEL_MASK),
		(PMIC_RGS_AD_XO_CORNER_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_xo_mdb_tbo_en_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW22),
		(val),
		(PMIC_XO_MDB_TBO_EN_SEL_MASK),
		(PMIC_XO_MDB_TBO_EN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ptatctat_en_man(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW22),
		(val),
		(PMIC_XO_PTATCTAT_EN_MAN_MASK),
		(PMIC_XO_PTATCTAT_EN_MAN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ptatctat_en_m(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW22),
		(val),
		(PMIC_XO_PTATCTAT_EN_M_MASK),
		(PMIC_XO_PTATCTAT_EN_M_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ptatctat_en_lpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW22),
		(val),
		(PMIC_XO_PTATCTAT_EN_LPM_MASK),
		(PMIC_XO_PTATCTAT_EN_LPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_ptatctat_en_fpm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_CW22),
		(val),
		(PMIC_XO_PTATCTAT_EN_FPM_MASK),
		(PMIC_XO_PTATCTAT_EN_FPM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_dcxo_elr_len(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DCXO_ELR_NUM),
		(&val),
		(PMIC_DCXO_ELR_LEN_MASK),
		(PMIC_DCXO_ELR_LEN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_xo_pctat_rdeg_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_ELR0),
		(val),
		(PMIC_RG_XO_PCTAT_RDEG_SEL_MASK),
		(PMIC_RG_XO_PCTAT_RDEG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_xo_gs_vtemp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_ELR0),
		(val),
		(PMIC_RG_XO_GS_VTEMP_MASK),
		(PMIC_RG_XO_GS_VTEMP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xo_pwrkey_rstb_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DCXO_ELR0),
		(val),
		(PMIC_XO_PWRKEY_RSTB_SEL_MASK),
		(PMIC_XO_PWRKEY_RSTB_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_psc_top_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_ID),
		(&val),
		(PMIC_PSC_TOP_ANA_ID_MASK),
		(PMIC_PSC_TOP_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_ID),
		(&val),
		(PMIC_PSC_TOP_DIG_ID_MASK),
		(PMIC_PSC_TOP_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_REV0),
		(&val),
		(PMIC_PSC_TOP_ANA_MINOR_REV_MASK),
		(PMIC_PSC_TOP_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_REV0),
		(&val),
		(PMIC_PSC_TOP_ANA_MAJOR_REV_MASK),
		(PMIC_PSC_TOP_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_REV0),
		(&val),
		(PMIC_PSC_TOP_DIG_MINOR_REV_MASK),
		(PMIC_PSC_TOP_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_REV0),
		(&val),
		(PMIC_PSC_TOP_DIG_MAJOR_REV_MASK),
		(PMIC_PSC_TOP_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_DBI),
		(&val),
		(PMIC_PSC_TOP_CBS_MASK),
		(PMIC_PSC_TOP_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_DBI),
		(&val),
		(PMIC_PSC_TOP_BIX_MASK),
		(PMIC_PSC_TOP_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_DBI),
		(&val),
		(PMIC_PSC_TOP_ESP_MASK),
		(PMIC_PSC_TOP_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_DXI),
		(&val),
		(PMIC_PSC_TOP_FPI_MASK),
		(PMIC_PSC_TOP_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_clk_offset(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TPM0),
		(&val),
		(PMIC_PSC_TOP_CLK_OFFSET_MASK),
		(PMIC_PSC_TOP_CLK_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_rst_offset(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TPM0),
		(&val),
		(PMIC_PSC_TOP_RST_OFFSET_MASK),
		(PMIC_PSC_TOP_RST_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_int_offset(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TPM1),
		(&val),
		(PMIC_PSC_TOP_INT_OFFSET_MASK),
		(PMIC_PSC_TOP_INT_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_psc_top_int_len(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TPM1),
		(&val),
		(PMIC_PSC_TOP_INT_LEN_MASK),
		(PMIC_PSC_TOP_INT_LEN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_long_press_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_RST_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pseq_pwrmsk_rst_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_RG_PSEQ_PWRMSK_RST_SEL_MASK),
		(PMIC_RG_PSEQ_PWRMSK_RST_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bank_strup_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_BANK_STRUP_SWRST_MASK),
		(PMIC_BANK_STRUP_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bank_pseq_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_BANK_PSEQ_SWRST_MASK),
		(PMIC_BANK_PSEQ_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bank_pchr_dig_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_BANK_PCHR_DIG_SWRST_MASK),
		(PMIC_BANK_PCHR_DIG_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bank_pchr_macro_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_RSTCTL_0),
		(val),
		(PMIC_BANK_PCHR_MACRO_SWRST_MASK),
		(PMIC_BANK_PCHR_MACRO_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_en_pwrkey(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_PWRKEY_MASK),
		(PMIC_RG_INT_EN_PWRKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_pwrkey(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_PWRKEY_MASK),
		(PMIC_RG_INT_EN_PWRKEY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_homekey(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_HOMEKEY_MASK),
		(PMIC_RG_INT_EN_HOMEKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_homekey(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_HOMEKEY_MASK),
		(PMIC_RG_INT_EN_HOMEKEY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_pwrkey_r(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_PWRKEY_R_MASK),
		(PMIC_RG_INT_EN_PWRKEY_R_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_pwrkey_r(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_PWRKEY_R_MASK),
		(PMIC_RG_INT_EN_PWRKEY_R_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_homekey_r(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_HOMEKEY_R_MASK),
		(PMIC_RG_INT_EN_HOMEKEY_R_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_homekey_r(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_HOMEKEY_R_MASK),
		(PMIC_RG_INT_EN_HOMEKEY_R_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_ni_lbat_int(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_NI_LBAT_INT_MASK),
		(PMIC_RG_INT_EN_NI_LBAT_INT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_ni_lbat_int(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_NI_LBAT_INT_MASK),
		(PMIC_RG_INT_EN_NI_LBAT_INT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_chrdet(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_CHRDET_MASK),
		(PMIC_RG_INT_EN_CHRDET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_chrdet(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_CHRDET_MASK),
		(PMIC_RG_INT_EN_CHRDET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_chrdet_edge(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_CHRDET_EDGE_MASK),
		(PMIC_RG_INT_EN_CHRDET_EDGE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_chrdet_edge(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_CHRDET_EDGE_MASK),
		(PMIC_RG_INT_EN_CHRDET_EDGE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vcdt_hv_det(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VCDT_HV_DET_MASK),
		(PMIC_RG_INT_EN_VCDT_HV_DET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vcdt_hv_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VCDT_HV_DET_MASK),
		(PMIC_RG_INT_EN_VCDT_HV_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_watchdog(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_WATCHDOG_MASK),
		(PMIC_RG_INT_EN_WATCHDOG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_watchdog(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_WATCHDOG_MASK),
		(PMIC_RG_INT_EN_WATCHDOG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vbaton_undet(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VBATON_UNDET_MASK),
		(PMIC_RG_INT_EN_VBATON_UNDET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vbaton_undet(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VBATON_UNDET_MASK),
		(PMIC_RG_INT_EN_VBATON_UNDET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_bvalid_det(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_BVALID_DET_MASK),
		(PMIC_RG_INT_EN_BVALID_DET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_bvalid_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_BVALID_DET_MASK),
		(PMIC_RG_INT_EN_BVALID_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_ov(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_OV_MASK),
		(PMIC_RG_INT_EN_OV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_ov(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_OV_MASK),
		(PMIC_RG_INT_EN_OV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_mask_pwrkey(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_PWRKEY_MASK),
		(PMIC_RG_INT_MASK_PWRKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_homekey(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_HOMEKEY_MASK),
		(PMIC_RG_INT_MASK_HOMEKEY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_pwrkey_r(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_PWRKEY_R_MASK),
		(PMIC_RG_INT_MASK_PWRKEY_R_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_homekey_r(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_HOMEKEY_R_MASK),
		(PMIC_RG_INT_MASK_HOMEKEY_R_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_ni_lbat_int(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_NI_LBAT_INT_MASK),
		(PMIC_RG_INT_MASK_NI_LBAT_INT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_chrdet(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_CHRDET_MASK),
		(PMIC_RG_INT_MASK_CHRDET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_chrdet_edge(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_CHRDET_EDGE_MASK),
		(PMIC_RG_INT_MASK_CHRDET_EDGE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vcdt_hv_det(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VCDT_HV_DET_MASK),
		(PMIC_RG_INT_MASK_VCDT_HV_DET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_watchdog(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_WATCHDOG_MASK),
		(PMIC_RG_INT_MASK_WATCHDOG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vbaton_undet(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VBATON_UNDET_MASK),
		(PMIC_RG_INT_MASK_VBATON_UNDET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_bvalid_det(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BVALID_DET_MASK),
		(PMIC_RG_INT_MASK_BVALID_DET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_ov(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_OV_MASK),
		(PMIC_RG_INT_MASK_OV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_pwrkey(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_PWRKEY_MASK),
		(PMIC_RG_INT_RAW_STATUS_PWRKEY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_homekey(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_HOMEKEY_MASK),
		(PMIC_RG_INT_RAW_STATUS_HOMEKEY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_pwrkey_r(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_PWRKEY_R_MASK),
		(PMIC_RG_INT_RAW_STATUS_PWRKEY_R_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_homekey_r(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_HOMEKEY_R_MASK),
		(PMIC_RG_INT_RAW_STATUS_HOMEKEY_R_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_ni_lbat_int(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_NI_LBAT_INT_MASK),
		(PMIC_RG_INT_RAW_STATUS_NI_LBAT_INT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_chrdet(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_CHRDET_MASK),
		(PMIC_RG_INT_RAW_STATUS_CHRDET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_chrdet_edge(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_CHRDET_EDGE_MASK),
		(PMIC_RG_INT_RAW_STATUS_CHRDET_EDGE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vcdt_hv_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VCDT_HV_DET_MASK),
		(PMIC_RG_INT_RAW_STATUS_VCDT_HV_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_watchdog(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_WATCHDOG_MASK),
		(PMIC_RG_INT_RAW_STATUS_WATCHDOG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vbaton_undet(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VBATON_UNDET_MASK),
		(PMIC_RG_INT_RAW_STATUS_VBATON_UNDET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_bvalid_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BVALID_DET_MASK),
		(PMIC_RG_INT_RAW_STATUS_BVALID_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_ov(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSC_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_OV_MASK),
		(PMIC_RG_INT_RAW_STATUS_OV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_psc_int_polarity(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MISC_CON),
		(val),
		(PMIC_RG_PSC_INT_POLARITY_MASK),
		(PMIC_RG_PSC_INT_POLARITY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_homekey_int_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MISC_CON),
		(val),
		(PMIC_RG_HOMEKEY_INT_SEL_MASK),
		(PMIC_RG_HOMEKEY_INT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pwrkey_int_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MISC_CON),
		(val),
		(PMIC_RG_PWRKEY_INT_SEL_MASK),
		(PMIC_RG_PWRKEY_INT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_chrdet_int_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MISC_CON),
		(val),
		(PMIC_RG_CHRDET_INT_SEL_MASK),
		(PMIC_RG_CHRDET_INT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_cm_vinc_polarity_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MISC_CON),
		(val),
		(PMIC_RG_PCHR_CM_VINC_POLARITY_RSV_MASK),
		(PMIC_RG_PCHR_CM_VINC_POLARITY_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_cm_vdec_polarity_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_INT_MISC_CON),
		(val),
		(PMIC_RG_PCHR_CM_VDEC_POLARITY_RSV_MASK),
		(PMIC_RG_PCHR_CM_VDEC_POLARITY_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_psc_mon_grp_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSC_TOP_MON_CTL),
		(val),
		(PMIC_RG_PSC_MON_GRP_SEL_MASK),
		(PMIC_RG_PSC_MON_GRP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_strup_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_ID),
		(&val),
		(PMIC_STRUP_ANA_ID_MASK),
		(PMIC_STRUP_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_ID),
		(&val),
		(PMIC_STRUP_DIG_ID_MASK),
		(PMIC_STRUP_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_REV0),
		(&val),
		(PMIC_STRUP_ANA_MINOR_REV_MASK),
		(PMIC_STRUP_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_REV0),
		(&val),
		(PMIC_STRUP_ANA_MAJOR_REV_MASK),
		(PMIC_STRUP_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_REV0),
		(&val),
		(PMIC_STRUP_DIG_MINOR_REV_MASK),
		(PMIC_STRUP_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_REV0),
		(&val),
		(PMIC_STRUP_DIG_MAJOR_REV_MASK),
		(PMIC_STRUP_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_DBI),
		(&val),
		(PMIC_STRUP_CBS_MASK),
		(PMIC_STRUP_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_DBI),
		(&val),
		(PMIC_STRUP_BIX_MASK),
		(PMIC_STRUP_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_DBI),
		(&val),
		(PMIC_STRUP_ESP_MASK),
		(PMIC_STRUP_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_DXI),
		(&val),
		(PMIC_STRUP_FPI_MASK),
		(PMIC_STRUP_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_tm_out(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ANA_CON0),
		(val),
		(PMIC_RG_TM_OUT_MASK),
		(PMIC_RG_TM_OUT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_thrdet_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ANA_CON0),
		(val),
		(PMIC_RG_THRDET_SEL_MASK),
		(PMIC_RG_THRDET_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_thr_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ANA_CON0),
		(val),
		(PMIC_RG_STRUP_THR_SEL_MASK),
		(PMIC_RG_STRUP_THR_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_thr_tmode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ANA_CON0),
		(val),
		(PMIC_RG_THR_TMODE_MASK),
		(PMIC_RG_THR_TMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vref_bg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ANA_CON0),
		(val),
		(PMIC_RG_VREF_BG_MASK),
		(PMIC_RG_VREF_BG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rst_drvsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ANA_CON1),
		(val),
		(PMIC_RG_RST_DRVSEL_MASK),
		(PMIC_RG_RST_DRVSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_en1_drvsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ANA_CON1),
		(val),
		(PMIC_RG_EN1_DRVSEL_MASK),
		(PMIC_RG_EN1_DRVSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_en2_drvsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ANA_CON1),
		(val),
		(PMIC_RG_EN2_DRVSEL_MASK),
		(PMIC_RG_EN2_DRVSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pmu_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ANA_CON1),
		(val),
		(PMIC_RG_PMU_RSV_MASK),
		(PMIC_RG_PMU_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rgs_ana_chip_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_ANA_CON1),
		(&val),
		(PMIC_RGS_ANA_CHIP_ID_MASK),
		(PMIC_RGS_ANA_CHIP_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_fchr_pu_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ANA_CON2),
		(val),
		(PMIC_RG_FCHR_PU_EN_MASK),
		(PMIC_RG_FCHR_PU_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_fchr_pu_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_ANA_CON2),
		(&val),
		(PMIC_RG_FCHR_PU_EN_MASK),
		(PMIC_RG_FCHR_PU_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_fchr_keydet_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ANA_CON2),
		(val),
		(PMIC_RG_FCHR_KEYDET_EN_MASK),
		(PMIC_RG_FCHR_KEYDET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_fchr_keydet_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_ANA_CON2),
		(&val),
		(PMIC_RG_FCHR_KEYDET_EN_MASK),
		(PMIC_RG_FCHR_KEYDET_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_strup_elr_len(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_ELR_NUM),
		(&val),
		(PMIC_STRUP_ELR_LEN_MASK),
		(PMIC_STRUP_ELR_LEN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_iref_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ELR_0),
		(val),
		(PMIC_RG_STRUP_IREF_TRIM_MASK),
		(PMIC_RG_STRUP_IREF_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_thr_loc_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_ELR_0),
		(val),
		(PMIC_RG_THR_LOC_SEL_MASK),
		(PMIC_RG_THR_LOC_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_pseq_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_ID),
		(&val),
		(PMIC_PSEQ_ANA_ID_MASK),
		(PMIC_PSEQ_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pseq_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_ID),
		(&val),
		(PMIC_PSEQ_DIG_ID_MASK),
		(PMIC_PSEQ_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pseq_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_REV0),
		(&val),
		(PMIC_PSEQ_ANA_MINOR_REV_MASK),
		(PMIC_PSEQ_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pseq_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_REV0),
		(&val),
		(PMIC_PSEQ_ANA_MAJOR_REV_MASK),
		(PMIC_PSEQ_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pseq_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_REV0),
		(&val),
		(PMIC_PSEQ_DIG_MAJOR_REV_MASK),
		(PMIC_PSEQ_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pseq_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_DBI),
		(&val),
		(PMIC_PSEQ_CBS_MASK),
		(PMIC_PSEQ_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pseq_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_DBI),
		(&val),
		(PMIC_PSEQ_BIX_MASK),
		(PMIC_PSEQ_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pseq_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_DBI),
		(&val),
		(PMIC_PSEQ_ESP_MASK),
		(PMIC_PSEQ_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pseq_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_DXI),
		(&val),
		(PMIC_PSEQ_FPI_MASK),
		(PMIC_PSEQ_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_pwrhold(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCTL0),
		(val),
		(PMIC_RG_PWRHOLD_MASK),
		(PMIC_RG_PWRHOLD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_usbdl_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCTL0),
		(val),
		(PMIC_RG_USBDL_MODE_MASK),
		(PMIC_RG_USBDL_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_crst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCTL0),
		(val),
		(PMIC_RG_CRST_MASK),
		(PMIC_RG_CRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_wrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCTL0),
		(val),
		(PMIC_RG_WRST_MASK),
		(PMIC_RG_WRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rstb_onintv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCTL1),
		(val),
		(PMIC_RG_RSTB_ONINTV_MASK),
		(PMIC_RG_RSTB_ONINTV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_crst_intv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCTL1),
		(val),
		(PMIC_RG_CRST_INTV_MASK),
		(PMIC_RG_CRST_INTV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_wrst_intv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCTL1),
		(val),
		(PMIC_RG_WRST_INTV_MASK),
		(PMIC_RG_WRST_INTV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pseq_pg_ck_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCTL2),
		(val),
		(PMIC_RG_PSEQ_PG_CK_SEL_MASK),
		(PMIC_RG_PSEQ_PG_CK_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pseq_spar_xcpt_mask(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCTL2),
		(val),
		(PMIC_RG_PSEQ_SPAR_XCPT_MASK_MASK),
		(PMIC_RG_PSEQ_SPAR_XCPT_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pseq_rtca_xcpt_mask(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCTL2),
		(val),
		(PMIC_RG_PSEQ_RTCA_XCPT_MASK_MASK),
		(PMIC_RG_PSEQ_RTCA_XCPT_MASK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_thm_shdn_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCTL2),
		(val),
		(PMIC_RG_THM_SHDN_EN_MASK),
		(PMIC_RG_THM_SHDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_thm_shdn_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PPCCTL2),
		(&val),
		(PMIC_RG_THM_SHDN_EN_MASK),
		(PMIC_RG_THM_SHDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_wdtrst_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCFG0),
		(val),
		(PMIC_RG_WDTRST_EN_MASK),
		(PMIC_RG_WDTRST_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_wdtrst_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PPCCFG0),
		(&val),
		(PMIC_RG_WDTRST_EN_MASK),
		(PMIC_RG_WDTRST_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_wdtrst_act(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCFG0),
		(val),
		(PMIC_RG_WDTRST_ACT_MASK),
		(PMIC_RG_WDTRST_ACT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_keypwr_vcore_opt(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCCFG0),
		(val),
		(PMIC_RG_KEYPWR_VCORE_OPT_MASK),
		(PMIC_RG_KEYPWR_VCORE_OPT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pseq_force_on(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCTST0),
		(val),
		(PMIC_RG_PSEQ_FORCE_ON_MASK),
		(PMIC_RG_PSEQ_FORCE_ON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pseq_force_all_doff(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PPCTST0),
		(val),
		(PMIC_RG_PSEQ_FORCE_ALL_DOFF_MASK),
		(PMIC_RG_PSEQ_FORCE_ALL_DOFF_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_por_flag(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PORFLAG),
		(val),
		(PMIC_RG_POR_FLAG_MASK),
		(PMIC_RG_POR_FLAG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_usbdl(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON0),
		(&val),
		(PMIC_USBDL_MASK),
		(PMIC_USBDL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_thr_test(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON0),
		(val),
		(PMIC_RG_THR_TEST_MASK),
		(PMIC_RG_THR_TEST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_ther_deb_rtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON1),
		(val),
		(PMIC_RG_STRUP_THER_DEB_RTD_MASK),
		(PMIC_RG_STRUP_THER_DEB_RTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_ther_deb_ftd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON2),
		(val),
		(PMIC_RG_STRUP_THER_DEB_FTD_MASK),
		(PMIC_RG_STRUP_THER_DEB_FTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_dduvlo_deb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_DDUVLO_DEB_EN_MASK),
		(PMIC_DDUVLO_DEB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_pg_deb_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_STRUP_PG_DEB_MODE_MASK),
		(PMIC_RG_STRUP_PG_DEB_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_osc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_STRUP_OSC_EN_MASK),
		(PMIC_RG_STRUP_OSC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_osc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON3),
		(&val),
		(PMIC_RG_STRUP_OSC_EN_MASK),
		(PMIC_RG_STRUP_OSC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_osc_en_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_STRUP_OSC_EN_SEL_MASK),
		(PMIC_RG_STRUP_OSC_EN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_osc_en_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON3),
		(&val),
		(PMIC_RG_STRUP_OSC_EN_SEL_MASK),
		(PMIC_RG_STRUP_OSC_EN_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_ft_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_STRUP_FT_CTRL_MASK),
		(PMIC_RG_STRUP_FT_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_pwron_force(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_STRUP_PWRON_FORCE_MASK),
		(PMIC_RG_STRUP_PWRON_FORCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_biasgen_force(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_BIASGEN_FORCE_MASK),
		(PMIC_RG_BIASGEN_FORCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_pwron(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_STRUP_PWRON_MASK),
		(PMIC_RG_STRUP_PWRON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_pwron_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_STRUP_PWRON_SEL_MASK),
		(PMIC_RG_STRUP_PWRON_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_biasgen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_BIASGEN_MASK),
		(PMIC_RG_BIASGEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_biasgen_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_BIASGEN_SEL_MASK),
		(PMIC_RG_BIASGEN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_xosc32_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_RTC_XOSC32_ENB_MASK),
		(PMIC_RG_RTC_XOSC32_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_rtc_xosc32_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON3),
		(&val),
		(PMIC_RG_RTC_XOSC32_ENB_MASK),
		(PMIC_RG_RTC_XOSC32_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_rtc_xosc32_enb_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_RG_RTC_XOSC32_ENB_SEL_MASK),
		(PMIC_RG_RTC_XOSC32_ENB_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_rtc_xosc32_enb_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON3),
		(&val),
		(PMIC_RG_RTC_XOSC32_ENB_SEL_MASK),
		(PMIC_RG_RTC_XOSC32_ENB_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_strup_dig_io_pg_force(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON3),
		(val),
		(PMIC_STRUP_DIG_IO_PG_FORCE_MASK),
		(PMIC_STRUP_DIG_IO_PG_FORCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_clr_just_smart_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON4),
		(val),
		(PMIC_RG_CLR_JUST_SMART_RST_MASK),
		(PMIC_RG_CLR_JUST_SMART_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_clr_just_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON4),
		(val),
		(PMIC_CLR_JUST_RST_MASK),
		(PMIC_CLR_JUST_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_just_smart_rst(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON4),
		(&val),
		(PMIC_JUST_SMART_RST_MASK),
		(PMIC_JUST_SMART_RST_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_just_pwrkey_rst(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON4),
		(&val),
		(PMIC_JUST_PWRKEY_RST_MASK),
		(PMIC_JUST_PWRKEY_RST_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_qi_osc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON4),
		(&val),
		(PMIC_DA_QI_OSC_EN_MASK),
		(PMIC_DA_QI_OSC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_ext_pmic_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON5),
		(val),
		(PMIC_RG_STRUP_EXT_PMIC_EN_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_ext_pmic_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON5),
		(&val),
		(PMIC_RG_STRUP_EXT_PMIC_EN_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_ext_pmic_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON5),
		(val),
		(PMIC_RG_STRUP_EXT_PMIC_SEL_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_ext_pmic_en1(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON5),
		(&val),
		(PMIC_DA_EXT_PMIC_EN1_MASK),
		(PMIC_DA_EXT_PMIC_EN1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_ext_pmic_en2(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON5),
		(&val),
		(PMIC_DA_EXT_PMIC_EN2_MASK),
		(PMIC_DA_EXT_PMIC_EN2_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_auxadc_start_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON6),
		(val),
		(PMIC_RG_STRUP_AUXADC_START_SW_MASK),
		(PMIC_RG_STRUP_AUXADC_START_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_auxadc_rstb_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON6),
		(val),
		(PMIC_RG_STRUP_AUXADC_RSTB_SW_MASK),
		(PMIC_RG_STRUP_AUXADC_RSTB_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_auxadc_start_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON6),
		(val),
		(PMIC_RG_STRUP_AUXADC_START_SEL_MASK),
		(PMIC_RG_STRUP_AUXADC_START_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_auxadc_rstb_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON6),
		(val),
		(PMIC_RG_STRUP_AUXADC_RSTB_SEL_MASK),
		(PMIC_RG_STRUP_AUXADC_RSTB_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_auxadc_rpcnt_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON6),
		(val),
		(PMIC_RG_STRUP_AUXADC_RPCNT_MAX_MASK),
		(PMIC_RG_STRUP_AUXADC_RPCNT_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_strup_pwroff_seq_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON7),
		(val),
		(PMIC_STRUP_PWROFF_SEQ_EN_MASK),
		(PMIC_STRUP_PWROFF_SEQ_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_strup_pwroff_preoff_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON7),
		(val),
		(PMIC_STRUP_PWROFF_PREOFF_EN_MASK),
		(PMIC_STRUP_PWROFF_PREOFF_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_slot_intv_down_msb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CPSCFG0),
		(val),
		(PMIC_RG_SLOT_INTV_DOWN_MSB_MASK),
		(PMIC_RG_SLOT_INTV_DOWN_MSB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rsv_swreg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON9),
		(val),
		(PMIC_RG_RSV_SWREG_MASK),
		(PMIC_RG_RSV_SWREG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_uvlo_u1u2_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON10),
		(val),
		(PMIC_RG_STRUP_UVLO_U1U2_SEL_MASK),
		(PMIC_RG_STRUP_UVLO_U1U2_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_uvlo_u1u2_sel_swctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON10),
		(val),
		(PMIC_RG_STRUP_UVLO_U1U2_SEL_SWCTRL_MASK),
		(PMIC_RG_STRUP_UVLO_U1U2_SEL_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_uvlo_dec_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON10),
		(val),
		(PMIC_RG_UVLO_DEC_EN_MASK),
		(PMIC_RG_UVLO_DEC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_uvlo_dec_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON10),
		(&val),
		(PMIC_RG_UVLO_DEC_EN_MASK),
		(PMIC_RG_UVLO_DEC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_thr_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON11),
		(val),
		(PMIC_RG_STRUP_THR_CLR_MASK),
		(PMIC_RG_STRUP_THR_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_long_press_ext_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_SEL_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_long_press_ext_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_TD_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_long_press_ext_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_EN_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_long_press_ext_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON12),
		(&val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_EN_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_long_press_ext_chr_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_long_press_ext_pwrkey_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_PWRKEY_CTRL_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_PWRKEY_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_long_press_ext_spar_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_SPAR_CTRL_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_SPAR_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_long_press_ext_rtca_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_RTCA_CTRL_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_EXT_RTCA_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smart_rst_sdn_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON12),
		(val),
		(PMIC_RG_SMART_RST_SDN_EN_MASK),
		(PMIC_RG_SMART_RST_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_smart_rst_sdn_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON12),
		(&val),
		(PMIC_RG_SMART_RST_SDN_EN_MASK),
		(PMIC_RG_SMART_RST_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_smart_rst_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON12),
		(val),
		(PMIC_RG_SMART_RST_MODE_MASK),
		(PMIC_RG_SMART_RST_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_envtem(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_ENVTEM_MASK),
		(PMIC_RG_STRUP_ENVTEM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_envtem(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON12),
		(&val),
		(PMIC_RG_STRUP_ENVTEM_MASK),
		(PMIC_RG_STRUP_ENVTEM_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_envtem_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON12),
		(val),
		(PMIC_RG_STRUP_ENVTEM_CTRL_MASK),
		(PMIC_RG_STRUP_ENVTEM_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_envtem_ctrl(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON12),
		(&val),
		(PMIC_RG_STRUP_ENVTEM_CTRL_MASK),
		(PMIC_RG_STRUP_ENVTEM_CTRL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_pwrkey_count_reset(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON13),
		(val),
		(PMIC_RG_STRUP_PWRKEY_COUNT_RESET_MASK),
		(PMIC_RG_STRUP_PWRKEY_COUNT_RESET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_ext_pmic_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_EXT_PMIC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_ext_pmic_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_EXT_PMIC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vaud28_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_VAUD28_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VAUD28_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vaud28_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_VAUD28_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VAUD28_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vusb33_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_VUSB33_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VUSB33_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vusb33_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_VUSB33_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VUSB33_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vdram_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_VDRAM_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VDRAM_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vdram_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_VDRAM_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VDRAM_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vemc_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_VEMC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VEMC_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vemc_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_VEMC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VEMC_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vsram_proc_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_VSRAM_PROC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vsram_proc_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_VSRAM_PROC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vsram_others_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vsram_others_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vaux18_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_VAUX18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VAUX18_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vaux18_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_VAUX18_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VAUX18_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vproc_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_VPROC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VPROC_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vproc_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_VPROC_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VPROC_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vmodem_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_VMODEM_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VMODEM_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vmodem_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_VMODEM_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VMODEM_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vcore_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_VCORE_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VCORE_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vcore_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_VCORE_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VCORE_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vs1_pg_h2l_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON14),
		(val),
		(PMIC_RG_STRUP_VS1_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VS1_PG_H2L_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vs1_pg_h2l_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON14),
		(&val),
		(PMIC_RG_STRUP_VS1_PG_H2L_EN_MASK),
		(PMIC_RG_STRUP_VS1_PG_H2L_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_ext_pmic_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_EXT_PMIC_PG_ENB_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_ext_pmic_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_EXT_PMIC_PG_ENB_MASK),
		(PMIC_RG_STRUP_EXT_PMIC_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vaud28_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VAUD28_PG_ENB_MASK),
		(PMIC_RG_STRUP_VAUD28_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vaud28_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VAUD28_PG_ENB_MASK),
		(PMIC_RG_STRUP_VAUD28_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vusb33_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VUSB33_PG_ENB_MASK),
		(PMIC_RG_STRUP_VUSB33_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vusb33_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VUSB33_PG_ENB_MASK),
		(PMIC_RG_STRUP_VUSB33_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vdram_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VDRAM_PG_ENB_MASK),
		(PMIC_RG_STRUP_VDRAM_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vdram_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VDRAM_PG_ENB_MASK),
		(PMIC_RG_STRUP_VDRAM_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vio28_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VIO28_PG_ENB_MASK),
		(PMIC_RG_STRUP_VIO28_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vio28_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VIO28_PG_ENB_MASK),
		(PMIC_RG_STRUP_VIO28_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vemc_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VEMC_PG_ENB_MASK),
		(PMIC_RG_STRUP_VEMC_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vemc_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VEMC_PG_ENB_MASK),
		(PMIC_RG_STRUP_VEMC_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vio18_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VIO18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VIO18_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vio18_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VIO18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VIO18_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vsram_proc_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VSRAM_PROC_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vsram_proc_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VSRAM_PROC_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_PROC_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vsram_others_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vsram_others_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_ENB_MASK),
		(PMIC_RG_STRUP_VSRAM_OTHERS_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vaux18_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VAUX18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VAUX18_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vaux18_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VAUX18_PG_ENB_MASK),
		(PMIC_RG_STRUP_VAUX18_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vxo22_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VXO22_PG_ENB_MASK),
		(PMIC_RG_STRUP_VXO22_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vxo22_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VXO22_PG_ENB_MASK),
		(PMIC_RG_STRUP_VXO22_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vproc_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VPROC_PG_ENB_MASK),
		(PMIC_RG_STRUP_VPROC_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vproc_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VPROC_PG_ENB_MASK),
		(PMIC_RG_STRUP_VPROC_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vmodem_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VMODEM_PG_ENB_MASK),
		(PMIC_RG_STRUP_VMODEM_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vmodem_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VMODEM_PG_ENB_MASK),
		(PMIC_RG_STRUP_VMODEM_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vcore_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VCORE_PG_ENB_MASK),
		(PMIC_RG_STRUP_VCORE_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vcore_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VCORE_PG_ENB_MASK),
		(PMIC_RG_STRUP_VCORE_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vs1_pg_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON15),
		(val),
		(PMIC_RG_STRUP_VS1_PG_ENB_MASK),
		(PMIC_RG_STRUP_VS1_PG_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vs1_pg_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON15),
		(&val),
		(PMIC_RG_STRUP_VS1_PG_ENB_MASK),
		(PMIC_RG_STRUP_VS1_PG_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vproc_oc_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON16),
		(val),
		(PMIC_RG_STRUP_VPROC_OC_ENB_MASK),
		(PMIC_RG_STRUP_VPROC_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vproc_oc_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON16),
		(&val),
		(PMIC_RG_STRUP_VPROC_OC_ENB_MASK),
		(PMIC_RG_STRUP_VPROC_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vmodem_oc_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON16),
		(val),
		(PMIC_RG_STRUP_VMODEM_OC_ENB_MASK),
		(PMIC_RG_STRUP_VMODEM_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vmodem_oc_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON16),
		(&val),
		(PMIC_RG_STRUP_VMODEM_OC_ENB_MASK),
		(PMIC_RG_STRUP_VMODEM_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vcore_oc_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON16),
		(val),
		(PMIC_RG_STRUP_VCORE_OC_ENB_MASK),
		(PMIC_RG_STRUP_VCORE_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vcore_oc_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON16),
		(&val),
		(PMIC_RG_STRUP_VCORE_OC_ENB_MASK),
		(PMIC_RG_STRUP_VCORE_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_strup_vs1_oc_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON16),
		(val),
		(PMIC_RG_STRUP_VS1_OC_ENB_MASK),
		(PMIC_RG_STRUP_VS1_OC_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_strup_vs1_oc_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON16),
		(&val),
		(PMIC_RG_STRUP_VS1_OC_ENB_MASK),
		(PMIC_RG_STRUP_VS1_OC_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ext_pmic_pg_debtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON19),
		(val),
		(PMIC_RG_EXT_PMIC_PG_DEBTD_MASK),
		(PMIC_RG_EXT_PMIC_PG_DEBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_rtc_spar_deb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON19),
		(val),
		(PMIC_RG_RTC_SPAR_DEB_EN_MASK),
		(PMIC_RG_RTC_SPAR_DEB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_rtc_spar_deb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON19),
		(&val),
		(PMIC_RG_RTC_SPAR_DEB_EN_MASK),
		(PMIC_RG_RTC_SPAR_DEB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_rtc_alarm_deb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_STRUP_CON19),
		(val),
		(PMIC_RG_RTC_ALARM_DEB_EN_MASK),
		(PMIC_RG_RTC_ALARM_DEB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_rtc_alarm_deb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_STRUP_CON19),
		(&val),
		(PMIC_RG_RTC_ALARM_DEB_EN_MASK),
		(PMIC_RG_RTC_ALARM_DEB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pseq_elr_len(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_ELR_NUM),
		(&val),
		(PMIC_PSEQ_ELR_LEN_MASK),
		(PMIC_PSEQ_ELR_LEN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_bwdt_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR7),
		(val),
		(PMIC_RG_BWDT_EN_MASK),
		(PMIC_RG_BWDT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_bwdt_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_ELR7),
		(&val),
		(PMIC_RG_BWDT_EN_MASK),
		(PMIC_RG_BWDT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_bwdt_tsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR7),
		(val),
		(PMIC_RG_BWDT_TSEL_MASK),
		(PMIC_RG_BWDT_TSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bwdt_csel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR7),
		(val),
		(PMIC_RG_BWDT_CSEL_MASK),
		(PMIC_RG_BWDT_CSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bwdt_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR7),
		(val),
		(PMIC_RG_BWDT_TD_MASK),
		(PMIC_RG_BWDT_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bwdt_chrtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR7),
		(val),
		(PMIC_RG_BWDT_CHRTD_MASK),
		(PMIC_RG_BWDT_CHRTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bwdt_ddlo_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR7),
		(val),
		(PMIC_RG_BWDT_DDLO_TD_MASK),
		(PMIC_RG_BWDT_DDLO_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bwdt_srcsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR7),
		(val),
		(PMIC_RG_BWDT_SRCSEL_MASK),
		(PMIC_RG_BWDT_SRCSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pspg_shdn_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_PSPG_SHDN_EN_MASK),
		(PMIC_RG_PSPG_SHDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_pspg_shdn_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_ELR8),
		(&val),
		(PMIC_RG_PSPG_SHDN_EN_MASK),
		(PMIC_RG_PSPG_SHDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_pseq_fsm_rst_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_PSEQ_FSM_RST_SEL_MASK),
		(PMIC_RG_PSEQ_FSM_RST_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pseq_f75k_force(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_PSEQ_F75K_FORCE_MASK),
		(PMIC_RG_PSEQ_F75K_FORCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pseq_1ms_tk_ext(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_PSEQ_1MS_TK_EXT_MASK),
		(PMIC_RG_PSEQ_1MS_TK_EXT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pseq_ivgen_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_PSEQ_IVGEN_SEL_MASK),
		(PMIC_RG_PSEQ_IVGEN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_long_press_reset_extend(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_STRUP_LONG_PRESS_RESET_EXTEND_MASK),
		(PMIC_RG_STRUP_LONG_PRESS_RESET_EXTEND_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_cps_s0ext_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_CPS_S0EXT_ENB_MASK),
		(PMIC_RG_CPS_S0EXT_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_cps_s0ext_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_ELR8),
		(&val),
		(PMIC_RG_CPS_S0EXT_ENB_MASK),
		(PMIC_RG_CPS_S0EXT_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_cps_s0ext_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_CPS_S0EXT_TD_MASK),
		(PMIC_RG_CPS_S0EXT_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_sdn_dly_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_SDN_DLY_ENB_MASK),
		(PMIC_RG_SDN_DLY_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_sdn_dly_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PSEQ_ELR8),
		(&val),
		(PMIC_RG_SDN_DLY_ENB_MASK),
		(PMIC_RG_SDN_DLY_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_chrdet_deb_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_CHRDET_DEB_TD_MASK),
		(PMIC_RG_CHRDET_DEB_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_strup_uvlo_u1u2_sel_old(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_STRUP_UVLO_U1U2_SEL_OLD_MASK),
		(PMIC_RG_STRUP_UVLO_U1U2_SEL_OLD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_efuse_ivgen_enb_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_EFUSE_IVGEN_ENB_SEL_MASK),
		(PMIC_EFUSE_IVGEN_ENB_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_dseq_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_DSEQ_SEL_MASK),
		(PMIC_RG_DSEQ_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pseq_elr_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PSEQ_ELR8),
		(val),
		(PMIC_RG_PSEQ_ELR_RSV_MASK),
		(PMIC_RG_PSEQ_ELR_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_pchr_dig_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PCHR_DIG_DSN_ID),
		(&val),
		(PMIC_PCHR_DIG_ANA_ID_MASK),
		(PMIC_PCHR_DIG_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pchr_dig_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PCHR_DIG_DSN_ID),
		(&val),
		(PMIC_PCHR_DIG_DIG_ID_MASK),
		(PMIC_PCHR_DIG_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pchr_dig_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PCHR_DIG_DSN_REV0),
		(&val),
		(PMIC_PCHR_DIG_ANA_MINOR_REV_MASK),
		(PMIC_PCHR_DIG_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pchr_dig_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PCHR_DIG_DSN_REV0),
		(&val),
		(PMIC_PCHR_DIG_ANA_MAJOR_REV_MASK),
		(PMIC_PCHR_DIG_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pchr_dig_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PCHR_DIG_DSN_REV0),
		(&val),
		(PMIC_PCHR_DIG_DIG_MINOR_REV_MASK),
		(PMIC_PCHR_DIG_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pchr_dig_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PCHR_DIG_DSN_REV0),
		(&val),
		(PMIC_PCHR_DIG_DIG_MAJOR_REV_MASK),
		(PMIC_PCHR_DIG_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pchr_dig_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PCHR_DIG_DSN_DBI),
		(&val),
		(PMIC_PCHR_DIG_DSN_CBS_MASK),
		(PMIC_PCHR_DIG_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pchr_dig_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PCHR_DIG_DSN_DBI),
		(&val),
		(PMIC_PCHR_DIG_DSN_BIX_MASK),
		(PMIC_PCHR_DIG_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pchr_dig_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PCHR_DIG_DSN_DBI),
		(&val),
		(PMIC_PCHR_DIG_DSN_ESP_MASK),
		(PMIC_PCHR_DIG_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pchr_dig_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PCHR_DIG_DSN_DXI),
		(&val),
		(PMIC_PCHR_DIG_DSN_FPI_MASK),
		(PMIC_PCHR_DIG_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_chrwdt_out(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_TOP_CON0),
		(&val),
		(PMIC_RGS_CHRWDT_OUT_MASK),
		(PMIC_RGS_CHRWDT_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_otg_bvalid_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_TOP_CON0),
		(&val),
		(PMIC_RGS_OTG_BVALID_DET_MASK),
		(PMIC_RGS_OTG_BVALID_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vbat_ov_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_TOP_CON0),
		(&val),
		(PMIC_RGS_VBAT_OV_DET_MASK),
		(PMIC_RGS_VBAT_OV_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_chr_ldo_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_TOP_CON0),
		(&val),
		(PMIC_RGS_CHR_LDO_DET_MASK),
		(PMIC_RGS_CHR_LDO_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_chrdet(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_TOP_CON0),
		(&val),
		(PMIC_RGS_CHRDET_MASK),
		(PMIC_RGS_CHRDET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_pchr_rv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON1),
		(val),
		(PMIC_RG_PCHR_RV_MASK),
		(PMIC_RG_PCHR_RV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcdt_uvlo_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON2),
		(val),
		(PMIC_RG_VCDT_UVLO_EN_MASK),
		(PMIC_RG_VCDT_UVLO_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcdt_uvlo_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_TOP_CON2),
		(&val),
		(PMIC_RG_VCDT_UVLO_EN_MASK),
		(PMIC_RG_VCDT_UVLO_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcdt_uvlo_vth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON2),
		(val),
		(PMIC_RG_VCDT_UVLO_VTH_MASK),
		(PMIC_RG_VCDT_UVLO_VTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_uvlo_vthl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON2),
		(val),
		(PMIC_RG_UVLO_VTHL_MASK),
		(PMIC_RG_UVLO_VTHL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_uvlo_vh_lat(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON2),
		(val),
		(PMIC_RG_UVLO_VH_LAT_MASK),
		(PMIC_RG_UVLO_VH_LAT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcdt_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON3),
		(val),
		(PMIC_RG_VCDT_MODE_MASK),
		(PMIC_RG_VCDT_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcdt_lv_vth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON3),
		(val),
		(PMIC_RG_VCDT_LV_VTH_MASK),
		(PMIC_RG_VCDT_LV_VTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcdt_hv_vth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON3),
		(val),
		(PMIC_RG_VCDT_HV_VTH_MASK),
		(PMIC_RG_VCDT_HV_VTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vbat_ov_vth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON3),
		(val),
		(PMIC_RG_VBAT_OV_VTH_MASK),
		(PMIC_RG_VBAT_OV_VTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_da_qi_bgr_ext_buf_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON4),
		(val),
		(PMIC_DA_QI_BGR_EXT_BUF_EN_MASK),
		(PMIC_DA_QI_BGR_EXT_BUF_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bgr_test_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON4),
		(val),
		(PMIC_RG_BGR_TEST_EN_MASK),
		(PMIC_RG_BGR_TEST_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_bgr_test_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_TOP_CON4),
		(&val),
		(PMIC_RG_BGR_TEST_EN_MASK),
		(PMIC_RG_BGR_TEST_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_bgr_test_rstb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON4),
		(val),
		(PMIC_RG_BGR_TEST_RSTB_MASK),
		(PMIC_RG_BGR_TEST_RSTB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bgr_unchop_ph(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON4),
		(val),
		(PMIC_RG_BGR_UNCHOP_PH_MASK),
		(PMIC_RG_BGR_UNCHOP_PH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bgr_unchop(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON4),
		(val),
		(PMIC_RG_BGR_UNCHOP_MASK),
		(PMIC_RG_BGR_UNCHOP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vbat_cv_vth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON5),
		(val),
		(PMIC_RG_VBAT_CV_VTH_MASK),
		(PMIC_RG_VBAT_CV_VTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_ft_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON5),
		(val),
		(PMIC_RG_PCHR_FT_CTRL_MASK),
		(PMIC_RG_PCHR_FT_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_flag_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON5),
		(val),
		(PMIC_RG_PCHR_FLAG_EN_MASK),
		(PMIC_RG_PCHR_FLAG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_pchr_flag_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_TOP_CON5),
		(&val),
		(PMIC_RG_PCHR_FLAG_EN_MASK),
		(PMIC_RG_PCHR_FLAG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_pchr_flag_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON5),
		(val),
		(PMIC_RG_PCHR_FLAG_SEL_MASK),
		(PMIC_RG_PCHR_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_lbat_int_vth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON6),
		(val),
		(PMIC_RG_LBAT_INT_VTH_MASK),
		(PMIC_RG_LBAT_INT_VTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_otg_bvalid_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_TOP_CON6),
		(val),
		(PMIC_RG_OTG_BVALID_EN_MASK),
		(PMIC_RG_OTG_BVALID_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_otg_bvalid_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_TOP_CON6),
		(&val),
		(PMIC_RG_OTG_BVALID_EN_MASK),
		(PMIC_RG_OTG_BVALID_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_pchr_dig_elr_len(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_PCHR_DIG_ELR_NUM),
		(&val),
		(PMIC_PCHR_DIG_ELR_LEN_MASK),
		(PMIC_PCHR_DIG_ELR_LEN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ichrg_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PCHR_ELR0),
		(val),
		(PMIC_RG_ICHRG_TRIM_MASK),
		(PMIC_RG_ICHRG_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ovp_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PCHR_ELR0),
		(val),
		(PMIC_RG_OVP_TRIM_MASK),
		(PMIC_RG_OVP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bgr_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PCHR_ELR0),
		(val),
		(PMIC_RG_BGR_TRIM_MASK),
		(PMIC_RG_BGR_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_spare_elr0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PCHR_ELR0),
		(val),
		(PMIC_RG_PCHR_SPARE_ELR0_MASK),
		(PMIC_RG_PCHR_SPARE_ELR0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vbat_cv_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PCHR_ELR1),
		(val),
		(PMIC_RG_VBAT_CV_TRIM_MASK),
		(PMIC_RG_VBAT_CV_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_spare_elr1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_PCHR_ELR1),
		(val),
		(PMIC_RG_PCHR_SPARE_ELR1_MASK),
		(PMIC_RG_PCHR_SPARE_ELR1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_cs_vth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON0),
		(val),
		(PMIC_RG_CS_VTH_MASK),
		(PMIC_RG_CS_VTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_cs_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON0),
		(val),
		(PMIC_RG_CS_EN_MASK),
		(PMIC_RG_CS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_cs_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON0),
		(&val),
		(PMIC_RG_CS_EN_MASK),
		(PMIC_RG_CS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vbat_ov_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON0),
		(val),
		(PMIC_RG_VBAT_OV_EN_MASK),
		(PMIC_RG_VBAT_OV_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vbat_ov_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON0),
		(&val),
		(PMIC_RG_VBAT_OV_EN_MASK),
		(PMIC_RG_VBAT_OV_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vbat_ov_deg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON0),
		(val),
		(PMIC_RG_VBAT_OV_DEG_MASK),
		(PMIC_RG_VBAT_OV_DEG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vbat_cv_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON0),
		(val),
		(PMIC_RG_VBAT_CV_EN_MASK),
		(PMIC_RG_VBAT_CV_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vbat_cv_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON0),
		(&val),
		(PMIC_RG_VBAT_CV_EN_MASK),
		(PMIC_RG_VBAT_CV_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vbat_cc_vth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON0),
		(val),
		(PMIC_RG_VBAT_CC_VTH_MASK),
		(PMIC_RG_VBAT_CC_VTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vbat_cc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON0),
		(val),
		(PMIC_RG_VBAT_CC_EN_MASK),
		(PMIC_RG_VBAT_CC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vbat_cc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON0),
		(&val),
		(PMIC_RG_VBAT_CC_EN_MASK),
		(PMIC_RG_VBAT_CC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcdt_hv_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON0),
		(val),
		(PMIC_RG_VCDT_HV_EN_MASK),
		(PMIC_RG_VCDT_HV_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcdt_hv_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON0),
		(&val),
		(PMIC_RG_VCDT_HV_EN_MASK),
		(PMIC_RG_VCDT_HV_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_low_ich_db(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON1),
		(val),
		(PMIC_RG_LOW_ICH_DB_MASK),
		(PMIC_RG_LOW_ICH_DB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_cv_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON1),
		(val),
		(PMIC_RG_CV_MODE_MASK),
		(PMIC_RG_CV_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_csdac_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON1),
		(val),
		(PMIC_RG_CSDAC_MODE_MASK),
		(PMIC_RG_CSDAC_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_tracking_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON1),
		(val),
		(PMIC_RG_TRACKING_EN_MASK),
		(PMIC_RG_TRACKING_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_tracking_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON1),
		(&val),
		(PMIC_RG_TRACKING_EN_MASK),
		(PMIC_RG_TRACKING_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_hwcv_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON1),
		(val),
		(PMIC_RG_HWCV_EN_MASK),
		(PMIC_RG_HWCV_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_hwcv_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON1),
		(&val),
		(PMIC_RG_HWCV_EN_MASK),
		(PMIC_RG_HWCV_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ulc_det_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON1),
		(val),
		(PMIC_RG_ULC_DET_EN_MASK),
		(PMIC_RG_ULC_DET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ulc_det_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON1),
		(&val),
		(PMIC_RG_ULC_DET_EN_MASK),
		(PMIC_RG_ULC_DET_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_csdac_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON1),
		(val),
		(PMIC_RG_CSDAC_EN_MASK),
		(PMIC_RG_CSDAC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_csdac_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON1),
		(&val),
		(PMIC_RG_CSDAC_EN_MASK),
		(PMIC_RG_CSDAC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_chr_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON1),
		(val),
		(PMIC_RG_CHR_EN_MASK),
		(PMIC_RG_CHR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_chr_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON1),
		(&val),
		(PMIC_RG_CHR_EN_MASK),
		(PMIC_RG_CHR_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_cs_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON2),
		(&val),
		(PMIC_RGS_CS_DET_MASK),
		(PMIC_RGS_CS_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vbat_cv_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON2),
		(&val),
		(PMIC_RGS_VBAT_CV_DET_MASK),
		(PMIC_RGS_VBAT_CV_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vbat_cc_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON2),
		(&val),
		(PMIC_RGS_VBAT_CC_DET_MASK),
		(PMIC_RGS_VBAT_CC_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vcdt_lv_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON2),
		(&val),
		(PMIC_RGS_VCDT_LV_DET_MASK),
		(PMIC_RGS_VCDT_LV_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vcdt_hv_det(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON2),
		(&val),
		(PMIC_RGS_VCDT_HV_DET_MASK),
		(PMIC_RGS_VCDT_HV_DET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_csdac_dly(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON3),
		(val),
		(PMIC_RG_CSDAC_DLY_MASK),
		(PMIC_RG_CSDAC_DLY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_csdac_stp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON3),
		(val),
		(PMIC_RG_CSDAC_STP_MASK),
		(PMIC_RG_CSDAC_STP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_csdac_stp_inc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON3),
		(val),
		(PMIC_RG_CSDAC_STP_INC_MASK),
		(PMIC_RG_CSDAC_STP_INC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_csdac_stp_dec(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON3),
		(val),
		(PMIC_RG_CSDAC_STP_DEC_MASK),
		(PMIC_RG_CSDAC_STP_DEC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_tohtc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON4),
		(val),
		(PMIC_RG_PCHR_TOHTC_MASK),
		(PMIC_RG_PCHR_TOHTC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_toltc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON4),
		(val),
		(PMIC_RG_PCHR_TOLTC_MASK),
		(PMIC_RG_PCHR_TOLTC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_csdac_data(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON5),
		(val),
		(PMIC_RG_CSDAC_DATA_MASK),
		(PMIC_RG_CSDAC_DATA_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_frc_csvth_usbdl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON6),
		(val),
		(PMIC_RG_FRC_CSVTH_USBDL_MASK),
		(PMIC_RG_FRC_CSVTH_USBDL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_usbdl_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON6),
		(val),
		(PMIC_RG_USBDL_RST_MASK),
		(PMIC_RG_USBDL_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_usbdl_set(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON6),
		(val),
		(PMIC_RG_USBDL_SET_MASK),
		(PMIC_RG_USBDL_SET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_dac_usbdl_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON6),
		(val),
		(PMIC_RG_DAC_USBDL_MAX_MASK),
		(PMIC_RG_DAC_USBDL_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rgs_pchr_flag_out(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON7),
		(&val),
		(PMIC_RGS_PCHR_FLAG_OUT_MASK),
		(PMIC_RGS_PCHR_FLAG_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_pchr_testmode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON7),
		(val),
		(PMIC_RG_PCHR_TESTMODE_MASK),
		(PMIC_RG_PCHR_TESTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_csdac_testmode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON7),
		(val),
		(PMIC_RG_CSDAC_TESTMODE_MASK),
		(PMIC_RG_CSDAC_TESTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_pchr_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON7),
		(val),
		(PMIC_RG_PCHR_RST_MASK),
		(PMIC_RG_PCHR_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bc11_vref_vth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON8),
		(val),
		(PMIC_RG_BC11_VREF_VTH_MASK),
		(PMIC_RG_BC11_VREF_VTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bc11_cmp_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON8),
		(val),
		(PMIC_RG_BC11_CMP_EN_MASK),
		(PMIC_RG_BC11_CMP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_bc11_cmp_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON8),
		(&val),
		(PMIC_RG_BC11_CMP_EN_MASK),
		(PMIC_RG_BC11_CMP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_bc11_ipd_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON8),
		(val),
		(PMIC_RG_BC11_IPD_EN_MASK),
		(PMIC_RG_BC11_IPD_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_bc11_ipd_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON8),
		(&val),
		(PMIC_RG_BC11_IPD_EN_MASK),
		(PMIC_RG_BC11_IPD_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_bc11_ipu_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON8),
		(val),
		(PMIC_RG_BC11_IPU_EN_MASK),
		(PMIC_RG_BC11_IPU_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_bc11_ipu_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON8),
		(&val),
		(PMIC_RG_BC11_IPU_EN_MASK),
		(PMIC_RG_BC11_IPU_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_bc11_bias_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON8),
		(val),
		(PMIC_RG_BC11_BIAS_EN_MASK),
		(PMIC_RG_BC11_BIAS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_bc11_bias_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON8),
		(&val),
		(PMIC_RG_BC11_BIAS_EN_MASK),
		(PMIC_RG_BC11_BIAS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_bc11_bb_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON8),
		(val),
		(PMIC_RG_BC11_BB_CTRL_MASK),
		(PMIC_RG_BC11_BB_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bc11_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON8),
		(val),
		(PMIC_RG_BC11_RST_MASK),
		(PMIC_RG_BC11_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bc11_vsrc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON8),
		(val),
		(PMIC_RG_BC11_VSRC_EN_MASK),
		(PMIC_RG_BC11_VSRC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_bc11_vsrc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON8),
		(&val),
		(PMIC_RG_BC11_VSRC_EN_MASK),
		(PMIC_RG_BC11_VSRC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_bc11_dcd_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON8),
		(val),
		(PMIC_RG_BC11_DCD_EN_MASK),
		(PMIC_RG_BC11_DCD_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_bc11_dcd_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON8),
		(&val),
		(PMIC_RG_BC11_DCD_EN_MASK),
		(PMIC_RG_BC11_DCD_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_bc11_cmp_out(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON8),
		(&val),
		(PMIC_RGS_BC11_CMP_OUT_MASK),
		(PMIC_RGS_BC11_CMP_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_envtem_d(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON9),
		(val),
		(PMIC_RG_ENVTEM_D_MASK),
		(PMIC_RG_ENVTEM_D_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_chrwdt_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON9),
		(val),
		(PMIC_RG_CHRWDT_TD_MASK),
		(PMIC_RG_CHRWDT_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_chrwdt_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHR_CON9),
		(val),
		(PMIC_RG_CHRWDT_EN_MASK),
		(PMIC_RG_CHRWDT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_chrwdt_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHR_CON9),
		(&val),
		(PMIC_RG_CHRWDT_EN_MASK),
		(PMIC_RG_CHRWDT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_fgadc_ft_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_FGADC_FT_CK_PDN_MASK),
		(PMIC_RG_FGADC_FT_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fgadc_dig_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_FGADC_DIG_CK_PDN_MASK),
		(PMIC_RG_FGADC_DIG_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fgadc_ana_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_FGADC_ANA_CK_PDN_MASK),
		(PMIC_RG_FGADC_ANA_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bm_intrp_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_BM_INTRP_CK_PDN_MASK),
		(PMIC_RG_BM_INTRP_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fgadc_ana_ck_cksel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_FGADC_ANA_CK_CKSEL_MASK),
		(PMIC_RG_FGADC_ANA_CK_CKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fg_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_FG_CK_TSTSEL_MASK),
		(PMIC_RG_FG_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fgadc_ana_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_FGADC_ANA_CK_TSTSEL_MASK),
		(PMIC_RG_FGADC_ANA_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fg_ck_tst_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_CKTST_CON0),
		(val),
		(PMIC_RG_FG_CK_TST_DIS_MASK),
		(PMIC_RG_FG_CK_TST_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fgadc_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_FGADC_SWRST_MASK),
		(PMIC_RG_FGADC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bank_fgadc_ana_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_FGADC_ANA_SWRST_MASK),
		(PMIC_RG_BANK_FGADC_ANA_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bank_fgadc0_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_FGADC0_SWRST_MASK),
		(PMIC_RG_BANK_FGADC0_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bank_fgadc1_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_FGADC1_SWRST_MASK),
		(PMIC_RG_BANK_FGADC1_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bank_baton_ana_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_RST_CON0),
		(val),
		(PMIC_RG_BANK_BATON_ANA_SWRST_MASK),
		(PMIC_RG_BANK_BATON_ANA_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_en_fg_bat0_h(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_BAT0_H_MASK),
		(PMIC_RG_INT_EN_FG_BAT0_H_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_fg_bat0_h(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_BAT0_H_MASK),
		(PMIC_RG_INT_EN_FG_BAT0_H_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_fg_bat0_l(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_BAT0_L_MASK),
		(PMIC_RG_INT_EN_FG_BAT0_L_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_fg_bat0_l(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_BAT0_L_MASK),
		(PMIC_RG_INT_EN_FG_BAT0_L_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_fg_cur_h(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_CUR_H_MASK),
		(PMIC_RG_INT_EN_FG_CUR_H_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_fg_cur_h(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_CUR_H_MASK),
		(PMIC_RG_INT_EN_FG_CUR_H_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_fg_cur_l(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_CUR_L_MASK),
		(PMIC_RG_INT_EN_FG_CUR_L_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_fg_cur_l(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_CUR_L_MASK),
		(PMIC_RG_INT_EN_FG_CUR_L_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_fg_zcv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_FG_ZCV_MASK),
		(PMIC_RG_INT_EN_FG_ZCV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_fg_zcv(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_FG_ZCV_MASK),
		(PMIC_RG_INT_EN_FG_ZCV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_baton_lv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_BATON_LV_MASK),
		(PMIC_RG_INT_EN_BATON_LV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_baton_lv(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_BATON_LV_MASK),
		(PMIC_RG_INT_EN_BATON_LV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_baton_ht(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_BATON_HT_MASK),
		(PMIC_RG_INT_EN_BATON_HT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_baton_ht(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_BATON_HT_MASK),
		(PMIC_RG_INT_EN_BATON_HT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_mask_fg_bat0_h(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_BAT0_H_MASK),
		(PMIC_RG_INT_MASK_FG_BAT0_H_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_fg_bat0_l(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_BAT0_L_MASK),
		(PMIC_RG_INT_MASK_FG_BAT0_L_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_fg_cur_h(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_CUR_H_MASK),
		(PMIC_RG_INT_MASK_FG_CUR_H_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_fg_cur_l(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_CUR_L_MASK),
		(PMIC_RG_INT_MASK_FG_CUR_L_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_fg_zcv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_FG_ZCV_MASK),
		(PMIC_RG_INT_MASK_FG_ZCV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_baton_lv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_BATON_LV_MASK),
		(PMIC_RG_INT_MASK_BATON_LV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_baton_ht(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_BATON_HT_MASK),
		(PMIC_RG_INT_MASK_BATON_HT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_fg_bat0_h(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_BAT0_H_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_BAT0_H_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_fg_bat0_l(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_BAT0_L_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_BAT0_L_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_fg_cur_h(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_CUR_H_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_CUR_H_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_fg_cur_l(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_CUR_L_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_CUR_L_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_fg_zcv(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_FG_ZCV_MASK),
		(PMIC_RG_INT_RAW_STATUS_FG_ZCV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_baton_lv(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BATON_LV_MASK),
		(PMIC_RG_INT_RAW_STATUS_BATON_LV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_baton_ht(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BM_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BATON_HT_MASK),
		(PMIC_RG_INT_RAW_STATUS_BATON_HT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_polarity(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_MISC_CON),
		(val),
		(PMIC_POLARITY_MASK),
		(PMIC_POLARITY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bm_int_misc_con_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_INT_MISC_CON),
		(val),
		(PMIC_BM_INT_MISC_CON_RSV_MASK),
		(PMIC_BM_INT_MISC_CON_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bm_mon_flag_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_DBG_CON),
		(val),
		(PMIC_RG_BM_MON_FLAG_SEL_MASK),
		(PMIC_RG_BM_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bm_mon_grp_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_DBG_CON),
		(val),
		(PMIC_RG_BM_MON_GRP_SEL_MASK),
		(PMIC_RG_BM_MON_GRP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_bm_top_rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BM_TOP_RSV0),
		(val),
		(PMIC_RG_BM_TOP_RSV0_MASK),
		(PMIC_RG_BM_TOP_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fganalogtest(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ANA_CON0),
		(val),
		(PMIC_RG_FGANALOGTEST_MASK),
		(PMIC_RG_FGANALOGTEST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fgintmode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ANA_CON0),
		(val),
		(PMIC_RG_FGINTMODE_MASK),
		(PMIC_RG_FGINTMODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_spare(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ANA_CON0),
		(val),
		(PMIC_RG_SPARE_MASK),
		(PMIC_RG_SPARE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_dwa_t0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_DWA_T0_MASK),
		(PMIC_FG_DWA_T0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_dwa_t1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_DWA_T1_MASK),
		(PMIC_FG_DWA_T1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_dwa_rst_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_DWA_RST_MODE_MASK),
		(PMIC_FG_DWA_RST_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_dwa_rst_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ANA_TEST_CON0),
		(val),
		(PMIC_FG_DWA_RST_SW_MASK),
		(PMIC_FG_DWA_RST_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_dwa_rst(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_ANA_TEST_CON0),
		(&val),
		(PMIC_DA_DWA_RST_MASK),
		(PMIC_DA_DWA_RST_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_fgadc_gainerror_cal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ANA_ELR0),
		(val),
		(PMIC_RG_FGADC_GAINERROR_CAL_MASK),
		(PMIC_RG_FGADC_GAINERROR_CAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_fg_offset_swap(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ANA_ELR1),
		(val),
		(PMIC_RG_FG_OFFSET_SWAP_MASK),
		(PMIC_RG_FG_OFFSET_SWAP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_on(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON0),
		(val),
		(PMIC_FG_ON_MASK),
		(PMIC_FG_ON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_cal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON0),
		(val),
		(PMIC_FG_CAL_MASK),
		(PMIC_FG_CAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_autocalrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON0),
		(val),
		(PMIC_FG_AUTOCALRATE_MASK),
		(PMIC_FG_AUTOCALRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_son_slp_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON0),
		(val),
		(PMIC_FG_SON_SLP_EN_MASK),
		(PMIC_FG_SON_SLP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_zcv_det_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON0),
		(val),
		(PMIC_FG_ZCV_DET_EN_MASK),
		(PMIC_FG_ZCV_DET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_auxadc_r(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON0),
		(val),
		(PMIC_FG_AUXADC_R_MASK),
		(PMIC_FG_AUXADC_R_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_sw_read_pre(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON1),
		(val),
		(PMIC_FG_SW_READ_PRE_MASK),
		(PMIC_FG_SW_READ_PRE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_sw_rstclr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON1),
		(val),
		(PMIC_FG_SW_RSTCLR_MASK),
		(PMIC_FG_SW_RSTCLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_sw_cr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON1),
		(val),
		(PMIC_FG_SW_CR_MASK),
		(PMIC_FG_SW_CR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_sw_clear(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON1),
		(val),
		(PMIC_FG_SW_CLEAR_MASK),
		(PMIC_FG_SW_CLEAR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_offset_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON1),
		(val),
		(PMIC_FG_OFFSET_RST_MASK),
		(PMIC_FG_OFFSET_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_time_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON1),
		(val),
		(PMIC_FG_TIME_RST_MASK),
		(PMIC_FG_TIME_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_charge_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON1),
		(val),
		(PMIC_FG_CHARGE_RST_MASK),
		(PMIC_FG_CHARGE_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_fg_latchdata_st(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CON1),
		(&val),
		(PMIC_FG_LATCHDATA_ST_MASK),
		(PMIC_FG_LATCHDATA_ST_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_event_fg_bat0_h(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_BAT0_H_MASK),
		(PMIC_EVENT_FG_BAT0_H_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_event_fg_bat0_l(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_BAT0_L_MASK),
		(PMIC_EVENT_FG_BAT0_L_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_event_fg_cur_h(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_CUR_H_MASK),
		(PMIC_EVENT_FG_CUR_H_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_event_fg_cur_l(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_CUR_L_MASK),
		(PMIC_EVENT_FG_CUR_L_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_event_fg_zcv(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CON2),
		(&val),
		(PMIC_EVENT_FG_ZCV_MASK),
		(PMIC_EVENT_FG_ZCV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_fg_osr1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON3),
		(val),
		(PMIC_FG_OSR1_MASK),
		(PMIC_FG_OSR1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_adj_offset_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON4),
		(val),
		(PMIC_FG_ADJ_OFFSET_EN_MASK),
		(PMIC_FG_ADJ_OFFSET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_adc_autorst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CON4),
		(val),
		(PMIC_FG_ADC_AUTORST_MASK),
		(PMIC_FG_ADC_AUTORST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_fg_adc_rstdetect(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CON4),
		(&val),
		(PMIC_FG_ADC_RSTDETECT_MASK),
		(PMIC_FG_ADC_RSTDETECT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_fg_car_15_00(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CAR_CON0),
		(&val),
		(PMIC_FG_CAR_15_00_MASK),
		(PMIC_FG_CAR_15_00_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_fg_car_31_16(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CAR_CON1),
		(&val),
		(PMIC_FG_CAR_31_16_MASK),
		(PMIC_FG_CAR_31_16_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_fg_car_34_32(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CAR_CON2),
		(&val),
		(PMIC_FG_CAR_34_32_MASK),
		(PMIC_FG_CAR_34_32_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_fg_bat0_lth_15_00(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CARTH_CON0),
		(val),
		(PMIC_FG_BAT0_LTH_15_00_MASK),
		(PMIC_FG_BAT0_LTH_15_00_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_bat0_lth_31_16(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CARTH_CON1),
		(val),
		(PMIC_FG_BAT0_LTH_31_16_MASK),
		(PMIC_FG_BAT0_LTH_31_16_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_bat0_hth_15_00(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CARTH_CON2),
		(val),
		(PMIC_FG_BAT0_HTH_15_00_MASK),
		(PMIC_FG_BAT0_HTH_15_00_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_bat0_hth_31_16(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CARTH_CON3),
		(val),
		(PMIC_FG_BAT0_HTH_31_16_MASK),
		(PMIC_FG_BAT0_HTH_31_16_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_fg_nter_15_00(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_NTER_CON0),
		(&val),
		(PMIC_FG_NTER_15_00_MASK),
		(PMIC_FG_NTER_15_00_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_fg_nter_31_16(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_NTER_CON1),
		(&val),
		(PMIC_FG_NTER_31_16_MASK),
		(PMIC_FG_NTER_31_16_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_fg_nter_32(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_NTER_CON2),
		(&val),
		(PMIC_FG_NTER_32_MASK),
		(PMIC_FG_NTER_32_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_fg_son_slp_cur_th(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_SON_CON0),
		(val),
		(PMIC_FG_SON_SLP_CUR_TH_MASK),
		(PMIC_FG_SON_SLP_CUR_TH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_son_slp_time(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_SON_CON1),
		(val),
		(PMIC_FG_SON_SLP_TIME_MASK),
		(PMIC_FG_SON_SLP_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_son_det_time(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_SON_CON2),
		(val),
		(PMIC_FG_SON_DET_TIME_MASK),
		(PMIC_FG_SON_DET_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_fp_ftime(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_SON_CON3),
		(val),
		(PMIC_FG_FP_FTIME_MASK),
		(PMIC_FG_FP_FTIME_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_zcv_det_time(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ZCV_CON0),
		(val),
		(PMIC_FG_ZCV_DET_TIME_MASK),
		(PMIC_FG_ZCV_DET_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_fg_zcv_curr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_ZCV_CON1),
		(&val),
		(PMIC_FG_ZCV_CURR_MASK),
		(PMIC_FG_ZCV_CURR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_fg_zcv_car_15_00(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_ZCV_CON2),
		(&val),
		(PMIC_FG_ZCV_CAR_15_00_MASK),
		(PMIC_FG_ZCV_CAR_15_00_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_fg_zcv_car_31_16(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_ZCV_CON3),
		(&val),
		(PMIC_FG_ZCV_CAR_31_16_MASK),
		(PMIC_FG_ZCV_CAR_31_16_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_fg_zcv_car_34_32(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_ZCV_CON4),
		(&val),
		(PMIC_FG_ZCV_CAR_34_32_MASK),
		(PMIC_FG_ZCV_CAR_34_32_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_fg_zcv_car_th_15_00(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ZCVTH_CON0),
		(val),
		(PMIC_FG_ZCV_CAR_TH_15_00_MASK),
		(PMIC_FG_ZCV_CAR_TH_15_00_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_zcv_car_th_31_16(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ZCVTH_CON1),
		(val),
		(PMIC_FG_ZCV_CAR_TH_31_16_MASK),
		(PMIC_FG_ZCV_CAR_TH_31_16_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_zcv_car_th_33_32(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_ZCVTH_CON2),
		(val),
		(PMIC_FG_ZCV_CAR_TH_33_32_MASK),
		(PMIC_FG_ZCV_CAR_TH_33_32_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_fg_r_curr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_R_CON0),
		(&val),
		(PMIC_FG_R_CURR_MASK),
		(PMIC_FG_R_CURR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_fg_current_out(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CUR_CON0),
		(&val),
		(PMIC_FG_CURRENT_OUT_MASK),
		(PMIC_FG_CURRENT_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_fg_cur_lth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CUR_CON1),
		(val),
		(PMIC_FG_CUR_LTH_MASK),
		(PMIC_FG_CUR_LTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_cur_hth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_CUR_CON2),
		(val),
		(PMIC_FG_CUR_HTH_MASK),
		(PMIC_FG_CUR_HTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_fg_cic2(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_CUR_CON3),
		(&val),
		(PMIC_FG_CIC2_MASK),
		(PMIC_FG_CIC2_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_fg_offset(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_FGADC_OFFSET_CON0),
		(&val),
		(PMIC_FG_OFFSET_MASK),
		(PMIC_FG_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_fg_adjust_offset_value(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_OFFSET_CON1),
		(val),
		(PMIC_FG_ADJUST_OFFSET_VALUE_MASK),
		(PMIC_FG_ADJUST_OFFSET_VALUE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_gain(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_GAIN_CON0),
		(val),
		(PMIC_FG_GAIN_MASK),
		(PMIC_FG_GAIN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_TEST_CON0),
		(val),
		(PMIC_FG_MODE_MASK),
		(PMIC_FG_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_rst_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_TEST_CON0),
		(val),
		(PMIC_FG_RST_SW_MASK),
		(PMIC_FG_RST_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_fgcal_en_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_TEST_CON0),
		(val),
		(PMIC_FG_FGCAL_EN_SW_MASK),
		(PMIC_FG_FGCAL_EN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_fg_fgadc_en_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_FGADC_TEST_CON0),
		(val),
		(PMIC_FG_FGADC_EN_SW_MASK),
		(PMIC_FG_FGADC_EN_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_system_info_con0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SYSTEM_INFO_CON0),
		(val),
		(PMIC_RG_SYSTEM_INFO_CON0_MASK),
		(PMIC_RG_SYSTEM_INFO_CON0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_system_info_con1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SYSTEM_INFO_CON1),
		(val),
		(PMIC_RG_SYSTEM_INFO_CON1_MASK),
		(PMIC_RG_SYSTEM_INFO_CON1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_system_info_con2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SYSTEM_INFO_CON2),
		(val),
		(PMIC_RG_SYSTEM_INFO_CON2_MASK),
		(PMIC_RG_SYSTEM_INFO_CON2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_system_info_con3(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SYSTEM_INFO_CON3),
		(val),
		(PMIC_RG_SYSTEM_INFO_CON3_MASK),
		(PMIC_RG_SYSTEM_INFO_CON3_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_system_info_con4(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SYSTEM_INFO_CON4),
		(val),
		(PMIC_RG_SYSTEM_INFO_CON4_MASK),
		(PMIC_RG_SYSTEM_INFO_CON4_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_baton_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BATON_ANA_CON0),
		(val),
		(PMIC_RG_BATON_EN_MASK),
		(PMIC_RG_BATON_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_baton_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BATON_ANA_CON0),
		(&val),
		(PMIC_RG_BATON_EN_MASK),
		(PMIC_RG_BATON_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_baton_undet(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BATON_ANA_CON0),
		(&val),
		(PMIC_RGS_BATON_UNDET_MASK),
		(PMIC_RGS_BATON_UNDET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_baton_lt_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BATON_ANA_CON0),
		(val),
		(PMIC_RG_BATON_LT_EN_MASK),
		(PMIC_RG_BATON_LT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_baton_lt_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BATON_ANA_CON0),
		(&val),
		(PMIC_RG_BATON_LT_EN_MASK),
		(PMIC_RG_BATON_LT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_baton_ht_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BATON_ANA_CON0),
		(val),
		(PMIC_RG_BATON_HT_EN_MASK),
		(PMIC_RG_BATON_HT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_baton_ht_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BATON_ANA_CON0),
		(&val),
		(PMIC_RG_BATON_HT_EN_MASK),
		(PMIC_RG_BATON_HT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_baton_ht_vth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BATON_ANA_CON0),
		(val),
		(PMIC_RG_BATON_HT_VTH_MASK),
		(PMIC_RG_BATON_HT_VTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rgs_baton_ht(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BATON_ANA_CON0),
		(&val),
		(PMIC_RGS_BATON_HT_MASK),
		(PMIC_RGS_BATON_HT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_baton_ht_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BATON_ANA_ELR0),
		(val),
		(PMIC_RG_BATON_HT_TRIM_MASK),
		(PMIC_RG_BATON_HT_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_hk_top_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_ID),
		(&val),
		(PMIC_HK_TOP_ANA_ID_MASK),
		(PMIC_HK_TOP_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_top_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_ID),
		(&val),
		(PMIC_HK_TOP_DIG_ID_MASK),
		(PMIC_HK_TOP_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_top_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_REV0),
		(&val),
		(PMIC_HK_TOP_ANA_MINOR_REV_MASK),
		(PMIC_HK_TOP_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_top_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_REV0),
		(&val),
		(PMIC_HK_TOP_ANA_MAJOR_REV_MASK),
		(PMIC_HK_TOP_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_top_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_REV0),
		(&val),
		(PMIC_HK_TOP_DIG_MINOR_REV_MASK),
		(PMIC_HK_TOP_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_top_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_REV0),
		(&val),
		(PMIC_HK_TOP_DIG_MAJOR_REV_MASK),
		(PMIC_HK_TOP_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_top_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_DBI),
		(&val),
		(PMIC_HK_TOP_CBS_MASK),
		(PMIC_HK_TOP_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_top_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_DBI),
		(&val),
		(PMIC_HK_TOP_BIX_MASK),
		(PMIC_HK_TOP_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_top_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_DBI),
		(&val),
		(PMIC_HK_TOP_ESP_MASK),
		(PMIC_HK_TOP_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_top_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_DXI),
		(&val),
		(PMIC_HK_TOP_FPI_MASK),
		(PMIC_HK_TOP_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_clk_offset(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TPM0),
		(&val),
		(PMIC_HK_CLK_OFFSET_MASK),
		(PMIC_HK_CLK_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_rst_offset(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TPM0),
		(&val),
		(PMIC_HK_RST_OFFSET_MASK),
		(PMIC_HK_RST_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_int_offset(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TPM1),
		(&val),
		(PMIC_HK_INT_OFFSET_MASK),
		(PMIC_HK_INT_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_hk_int_len(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TPM1),
		(&val),
		(PMIC_HK_INT_LEN_MASK),
		(PMIC_HK_INT_LEN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_auxadc_ao_1m_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_AO_1M_CK_PDN_MASK),
		(PMIC_RG_AUXADC_AO_1M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_1m_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_1M_CK_PDN_HWEN_MASK),
		(PMIC_RG_AUXADC_1M_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_1m_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_1M_CK_PDN_MASK),
		(PMIC_RG_AUXADC_1M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_CK_PDN_HWEN_MASK),
		(PMIC_RG_AUXADC_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_CK_PDN_MASK),
		(PMIC_RG_AUXADC_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_rng_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_RNG_CK_PDN_HWEN_MASK),
		(PMIC_RG_AUXADC_RNG_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_rng_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_RNG_CK_PDN_MASK),
		(PMIC_RG_AUXADC_RNG_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_32k_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_32K_CK_PDN_HWEN_MASK),
		(PMIC_RG_AUXADC_32K_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_32k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_32K_CK_PDN_MASK),
		(PMIC_RG_AUXADC_32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_1k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_AUXADC_1K_CK_PDN_MASK),
		(PMIC_RG_AUXADC_1K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_ck_divsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON1),
		(val),
		(PMIC_RG_AUXADC_CK_DIVSEL_MASK),
		(PMIC_RG_AUXADC_CK_DIVSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_ck_tstsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON1),
		(val),
		(PMIC_RG_AUXADC_CK_TSTSEL_MASK),
		(PMIC_RG_AUXADC_CK_TSTSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_intrp_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_CLK_CON1),
		(val),
		(PMIC_RG_AUXADC_INTRP_CK_PDN_MASK),
		(PMIC_RG_AUXADC_INTRP_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_RST_CON0),
		(val),
		(PMIC_RG_AUXADC_RST_MASK),
		(PMIC_RG_AUXADC_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_reg_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_RST_CON0),
		(val),
		(PMIC_RG_AUXADC_REG_RST_MASK),
		(PMIC_RG_AUXADC_REG_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bank_hk_top_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_HK_TOP_SWRST_MASK),
		(PMIC_BANK_HK_TOP_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bank_auxadc_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_AUXADC_SWRST_MASK),
		(PMIC_BANK_AUXADC_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bank_auxadc_dig_1_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_AUXADC_DIG_1_SWRST_MASK),
		(PMIC_BANK_AUXADC_DIG_1_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bank_auxadc_dig_2_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_AUXADC_DIG_2_SWRST_MASK),
		(PMIC_BANK_AUXADC_DIG_2_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bank_auxadc_dig_3_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_AUXADC_DIG_3_SWRST_MASK),
		(PMIC_BANK_AUXADC_DIG_3_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bank_auxadc_dig_4_swrst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_RST_CON0),
		(val),
		(PMIC_BANK_AUXADC_DIG_4_SWRST_MASK),
		(PMIC_BANK_AUXADC_DIG_4_SWRST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_en_bat_h(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_BAT_H_MASK),
		(PMIC_RG_INT_EN_BAT_H_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_bat_h(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_BAT_H_MASK),
		(PMIC_RG_INT_EN_BAT_H_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_bat_l(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_BAT_L_MASK),
		(PMIC_RG_INT_EN_BAT_L_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_bat_l(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_BAT_L_MASK),
		(PMIC_RG_INT_EN_BAT_L_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_auxadc_imp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_AUXADC_IMP_MASK),
		(PMIC_RG_INT_EN_AUXADC_IMP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_auxadc_imp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_AUXADC_IMP_MASK),
		(PMIC_RG_INT_EN_AUXADC_IMP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_nag_c_dltv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_NAG_C_DLTV_MASK),
		(PMIC_RG_INT_EN_NAG_C_DLTV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_nag_c_dltv(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_NAG_C_DLTV_MASK),
		(PMIC_RG_INT_EN_NAG_C_DLTV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_mask_bat_h(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BAT_H_MASK),
		(PMIC_RG_INT_MASK_BAT_H_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_bat_l(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_BAT_L_MASK),
		(PMIC_RG_INT_MASK_BAT_L_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_auxadc_imp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_AUXADC_IMP_MASK),
		(PMIC_RG_INT_MASK_AUXADC_IMP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_nag_c_dltv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_NAG_C_DLTV_MASK),
		(PMIC_RG_INT_MASK_NAG_C_DLTV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_bat_h(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BAT_H_MASK),
		(PMIC_RG_INT_RAW_STATUS_BAT_H_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_bat_l(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_BAT_L_MASK),
		(PMIC_RG_INT_RAW_STATUS_BAT_L_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_auxadc_imp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_AUXADC_IMP_MASK),
		(PMIC_RG_INT_RAW_STATUS_AUXADC_IMP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_nag_c_dltv(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_NAG_C_DLTV_MASK),
		(PMIC_RG_INT_RAW_STATUS_NAG_C_DLTV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_clk_mon_flag_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_MON_CON0),
		(val),
		(PMIC_RG_CLK_MON_FLAG_EN_MASK),
		(PMIC_RG_CLK_MON_FLAG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_clk_mon_flag_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_MON_CON0),
		(&val),
		(PMIC_RG_CLK_MON_FLAG_EN_MASK),
		(PMIC_RG_CLK_MON_FLAG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_clk_mon_flag_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_MON_CON0),
		(val),
		(PMIC_RG_CLK_MON_FLAG_SEL_MASK),
		(PMIC_RG_CLK_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mon_flag_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_MON_CON1),
		(val),
		(PMIC_RG_INT_MON_FLAG_EN_MASK),
		(PMIC_RG_INT_MON_FLAG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_mon_flag_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_HK_TOP_MON_CON1),
		(&val),
		(PMIC_RG_INT_MON_FLAG_EN_MASK),
		(PMIC_RG_INT_MON_FLAG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_mon_flag_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_MON_CON1),
		(val),
		(PMIC_RG_INT_MON_FLAG_SEL_MASK),
		(PMIC_RG_INT_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_hk_mon_flag_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_MON_CON2),
		(val),
		(PMIC_RG_HK_MON_FLAG_SEL_MASK),
		(PMIC_RG_HK_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_mon_flag_sel_auxadc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_HK_TOP_MON_CON2),
		(val),
		(PMIC_RG_MON_FLAG_SEL_AUXADC_MASK),
		(PMIC_RG_MON_FLAG_SEL_AUXADC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_auxadc_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DSN_ID),
		(&val),
		(PMIC_AUXADC_ANA_ID_MASK),
		(PMIC_AUXADC_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_ID_MASK),
		(PMIC_AUXADC_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DSN_REV0),
		(&val),
		(PMIC_AUXADC_ANA_MINOR_REV_MASK),
		(PMIC_AUXADC_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DSN_REV0),
		(&val),
		(PMIC_AUXADC_ANA_MAJOR_REV_MASK),
		(PMIC_AUXADC_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DSN_CBS_MASK),
		(PMIC_AUXADC_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DSN_BIX_MASK),
		(PMIC_AUXADC_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DSN_ESP_MASK),
		(PMIC_AUXADC_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DSN_DXI),
		(&val),
		(PMIC_AUXADC_DSN_FPI_MASK),
		(PMIC_AUXADC_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_auxadc_cali(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_ANA_CON0),
		(val),
		(PMIC_RG_AUXADC_CALI_MASK),
		(PMIC_RG_AUXADC_CALI_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_aux_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_ANA_CON0),
		(val),
		(PMIC_RG_AUX_RSV_MASK),
		(PMIC_RG_AUX_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vbuf_byp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_ANA_CON0),
		(val),
		(PMIC_RG_VBUF_BYP_MASK),
		(PMIC_RG_VBUF_BYP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vbuf_calen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_ANA_CON0),
		(val),
		(PMIC_RG_VBUF_CALEN_MASK),
		(PMIC_RG_VBUF_CALEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vbuf_exten(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_ANA_CON0),
		(val),
		(PMIC_RG_VBUF_EXTEN_MASK),
		(PMIC_RG_VBUF_EXTEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_auxadc_dig_1_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_1_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_1_ANA_ID_MASK),
		(PMIC_AUXADC_DIG_1_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_1_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_1_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_1_DIG_ID_MASK),
		(PMIC_AUXADC_DIG_1_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_1_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_1_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_1_ANA_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_1_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_1_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_1_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_1_ANA_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_1_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_1_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_1_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_1_DIG_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_1_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_1_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_1_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_1_DIG_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_1_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_1_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_1_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_1_DSN_CBS_MASK),
		(PMIC_AUXADC_DIG_1_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_1_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_1_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_1_DSN_BIX_MASK),
		(PMIC_AUXADC_DIG_1_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_1_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_1_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_1_DSN_ESP_MASK),
		(PMIC_AUXADC_DIG_1_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_1_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_1_DSN_DXI),
		(&val),
		(PMIC_AUXADC_DIG_1_DSN_FPI_MASK),
		(PMIC_AUXADC_DIG_1_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch0(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC0),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH0_MASK),
		(PMIC_AUXADC_ADC_OUT_CH0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch0(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC0),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH0_MASK),
		(PMIC_AUXADC_ADC_RDY_CH0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch1(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC1),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH1_MASK),
		(PMIC_AUXADC_ADC_OUT_CH1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch1(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC1),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH1_MASK),
		(PMIC_AUXADC_ADC_RDY_CH1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch2(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC2),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH2_MASK),
		(PMIC_AUXADC_ADC_OUT_CH2_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch2(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC2),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH2_MASK),
		(PMIC_AUXADC_ADC_RDY_CH2_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch3(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC3),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH3_MASK),
		(PMIC_AUXADC_ADC_OUT_CH3_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch3(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC3),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH3_MASK),
		(PMIC_AUXADC_ADC_RDY_CH3_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch4(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC4),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH4_MASK),
		(PMIC_AUXADC_ADC_OUT_CH4_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch4(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC4),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH4_MASK),
		(PMIC_AUXADC_ADC_RDY_CH4_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch5(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC5),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH5_MASK),
		(PMIC_AUXADC_ADC_OUT_CH5_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch5(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC5),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH5_MASK),
		(PMIC_AUXADC_ADC_RDY_CH5_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch6(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC6),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH6_MASK),
		(PMIC_AUXADC_ADC_OUT_CH6_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch6(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC6),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH6_MASK),
		(PMIC_AUXADC_ADC_RDY_CH6_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch7(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC7),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH7_MASK),
		(PMIC_AUXADC_ADC_OUT_CH7_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch7(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC7),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH7_MASK),
		(PMIC_AUXADC_ADC_RDY_CH7_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch8(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC8),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH8_MASK),
		(PMIC_AUXADC_ADC_OUT_CH8_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch8(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC8),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH8_MASK),
		(PMIC_AUXADC_ADC_RDY_CH8_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch9(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC9),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH9_MASK),
		(PMIC_AUXADC_ADC_OUT_CH9_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch9(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC9),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH9_MASK),
		(PMIC_AUXADC_ADC_RDY_CH9_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch10(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC10),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH10_MASK),
		(PMIC_AUXADC_ADC_OUT_CH10_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch10(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC10),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH10_MASK),
		(PMIC_AUXADC_ADC_RDY_CH10_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch11(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC11),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH11_MASK),
		(PMIC_AUXADC_ADC_OUT_CH11_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch11(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC11),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH11_MASK),
		(PMIC_AUXADC_ADC_RDY_CH11_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch12_15(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC12),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH12_15_MASK),
		(PMIC_AUXADC_ADC_OUT_CH12_15_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch12_15(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC12),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH12_15_MASK),
		(PMIC_AUXADC_ADC_RDY_CH12_15_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_lbat(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC14),
		(&val),
		(PMIC_AUXADC_ADC_OUT_LBAT_MASK),
		(PMIC_AUXADC_ADC_OUT_LBAT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_lbat(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC14),
		(&val),
		(PMIC_AUXADC_ADC_RDY_LBAT_MASK),
		(PMIC_AUXADC_ADC_RDY_LBAT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch7_by_gps(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC16),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_GPS_MASK),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch7_by_gps(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC16),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_GPS_MASK),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch7_by_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC17),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_MD_MASK),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch7_by_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC17),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_MD_MASK),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch7_by_ap(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC18),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_AP_MASK),
		(PMIC_AUXADC_ADC_OUT_CH7_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch7_by_ap(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC18),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_AP_MASK),
		(PMIC_AUXADC_ADC_RDY_CH7_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch4_by_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC19),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_MD_MASK),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch4_by_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC19),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_MD_MASK),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_pwron_pchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC20),
		(&val),
		(PMIC_AUXADC_ADC_OUT_PWRON_PCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_PWRON_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_pwron_pchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC20),
		(&val),
		(PMIC_AUXADC_ADC_RDY_PWRON_PCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_PWRON_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_pwron_swchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC21),
		(&val),
		(PMIC_AUXADC_ADC_OUT_PWRON_SWCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_PWRON_SWCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_pwron_swchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC21),
		(&val),
		(PMIC_AUXADC_ADC_RDY_PWRON_SWCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_PWRON_SWCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_wakeup_pchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC22),
		(&val),
		(PMIC_AUXADC_ADC_OUT_WAKEUP_PCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_WAKEUP_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_wakeup_pchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC22),
		(&val),
		(PMIC_AUXADC_ADC_RDY_WAKEUP_PCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_WAKEUP_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_wakeup_swchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC23),
		(&val),
		(PMIC_AUXADC_ADC_OUT_WAKEUP_SWCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_WAKEUP_SWCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_wakeup_swchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC23),
		(&val),
		(PMIC_AUXADC_ADC_RDY_WAKEUP_SWCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_WAKEUP_SWCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch0_by_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC24),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH0_BY_MD_MASK),
		(PMIC_AUXADC_ADC_OUT_CH0_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch0_by_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC24),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH0_BY_MD_MASK),
		(PMIC_AUXADC_ADC_RDY_CH0_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch0_by_ap(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC25),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH0_BY_AP_MASK),
		(PMIC_AUXADC_ADC_OUT_CH0_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch0_by_ap(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC25),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH0_BY_AP_MASK),
		(PMIC_AUXADC_ADC_RDY_CH0_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch1_by_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC26),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH1_BY_MD_MASK),
		(PMIC_AUXADC_ADC_OUT_CH1_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch1_by_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC26),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH1_BY_MD_MASK),
		(PMIC_AUXADC_ADC_RDY_CH1_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch1_by_ap(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC27),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH1_BY_AP_MASK),
		(PMIC_AUXADC_ADC_OUT_CH1_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch1_by_ap(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC27),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH1_BY_AP_MASK),
		(PMIC_AUXADC_ADC_RDY_CH1_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_fgadc_pchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC29),
		(&val),
		(PMIC_AUXADC_ADC_OUT_FGADC_PCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_FGADC_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_fgadc_pchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC29),
		(&val),
		(PMIC_AUXADC_ADC_RDY_FGADC_PCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_FGADC_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_fgadc_swchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC30),
		(&val),
		(PMIC_AUXADC_ADC_OUT_FGADC_SWCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_FGADC_SWCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_fgadc_swchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC30),
		(&val),
		(PMIC_AUXADC_ADC_RDY_FGADC_SWCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_FGADC_SWCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_bat_plugin_pchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC31),
		(&val),
		(PMIC_AUXADC_ADC_OUT_BAT_PLUGIN_PCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_BAT_PLUGIN_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_bat_plugin_pchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC31),
		(&val),
		(PMIC_AUXADC_ADC_RDY_BAT_PLUGIN_PCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_BAT_PLUGIN_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_bat_plugin_swchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC32),
		(&val),
		(PMIC_AUXADC_ADC_OUT_BAT_PLUGIN_SWCHR_MASK),
		(PMIC_AUXADC_ADC_OUT_BAT_PLUGIN_SWCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_bat_plugin_swchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC32),
		(&val),
		(PMIC_AUXADC_ADC_RDY_BAT_PLUGIN_SWCHR_MASK),
		(PMIC_AUXADC_ADC_RDY_BAT_PLUGIN_SWCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_imp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC33),
		(&val),
		(PMIC_AUXADC_ADC_OUT_IMP_MASK),
		(PMIC_AUXADC_ADC_OUT_IMP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_imp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC33),
		(&val),
		(PMIC_AUXADC_ADC_RDY_IMP_MASK),
		(PMIC_AUXADC_ADC_RDY_IMP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_imp_avg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC34),
		(&val),
		(PMIC_AUXADC_ADC_OUT_IMP_AVG_MASK),
		(PMIC_AUXADC_ADC_OUT_IMP_AVG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_imp_avg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC34),
		(&val),
		(PMIC_AUXADC_ADC_RDY_IMP_AVG_MASK),
		(PMIC_AUXADC_ADC_RDY_IMP_AVG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_raw(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC35),
		(&val),
		(PMIC_AUXADC_ADC_OUT_RAW_MASK),
		(PMIC_AUXADC_ADC_OUT_RAW_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_mdrt(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC36),
		(&val),
		(PMIC_AUXADC_ADC_OUT_MDRT_MASK),
		(PMIC_AUXADC_ADC_OUT_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_mdrt(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC36),
		(&val),
		(PMIC_AUXADC_ADC_RDY_MDRT_MASK),
		(PMIC_AUXADC_ADC_RDY_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_dcxo_by_gps(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC38),
		(&val),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_GPS_MASK),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_dcxo_by_gps(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC38),
		(&val),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_GPS_MASK),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_dcxo_by_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC39),
		(&val),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_MD_MASK),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_dcxo_by_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC39),
		(&val),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_MD_MASK),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_dcxo_by_ap(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC40),
		(&val),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_AP_MASK),
		(PMIC_AUXADC_ADC_OUT_DCXO_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_dcxo_by_ap(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC40),
		(&val),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_AP_MASK),
		(PMIC_AUXADC_ADC_RDY_DCXO_BY_AP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_dcxo_mdrt(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC41),
		(&val),
		(PMIC_AUXADC_ADC_OUT_DCXO_MDRT_MASK),
		(PMIC_AUXADC_ADC_OUT_DCXO_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_dcxo_mdrt(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC41),
		(&val),
		(PMIC_AUXADC_ADC_RDY_DCXO_MDRT_MASK),
		(PMIC_AUXADC_ADC_RDY_DCXO_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_nag(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC42),
		(&val),
		(PMIC_AUXADC_ADC_OUT_NAG_MASK),
		(PMIC_AUXADC_ADC_OUT_NAG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_nag(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC42),
		(&val),
		(PMIC_AUXADC_ADC_RDY_NAG_MASK),
		(PMIC_AUXADC_ADC_RDY_NAG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_batid(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC43),
		(&val),
		(PMIC_AUXADC_ADC_OUT_BATID_MASK),
		(PMIC_AUXADC_ADC_OUT_BATID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_batid(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC43),
		(&val),
		(PMIC_AUXADC_ADC_RDY_BATID_MASK),
		(PMIC_AUXADC_ADC_RDY_BATID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch4_by_thr1(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC46),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_THR1_MASK),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_THR1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch4_by_thr1(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC46),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_THR1_MASK),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_THR1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_out_ch4_by_thr2(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC47),
		(&val),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_THR2_MASK),
		(PMIC_AUXADC_ADC_OUT_CH4_BY_THR2_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_rdy_ch4_by_thr2(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ADC47),
		(&val),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_THR2_MASK),
		(PMIC_AUXADC_ADC_RDY_CH4_BY_THR2_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_auxadc_sw_gain_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_1_ELR0),
		(val),
		(PMIC_AUXADC_SW_GAIN_TRIM_MASK),
		(PMIC_AUXADC_SW_GAIN_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_sw_offset_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_1_ELR1),
		(val),
		(PMIC_AUXADC_SW_OFFSET_TRIM_MASK),
		(PMIC_AUXADC_SW_OFFSET_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_auxadc_dig_2_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_2_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_2_ANA_ID_MASK),
		(PMIC_AUXADC_DIG_2_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_2_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_2_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_2_DIG_ID_MASK),
		(PMIC_AUXADC_DIG_2_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_2_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_2_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_2_ANA_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_2_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_2_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_2_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_2_ANA_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_2_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_2_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_2_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_2_DIG_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_2_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_2_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_2_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_2_DIG_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_2_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_2_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_2_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_2_DSN_CBS_MASK),
		(PMIC_AUXADC_DIG_2_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_2_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_2_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_2_DSN_BIX_MASK),
		(PMIC_AUXADC_DIG_2_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_2_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_2_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_2_DSN_ESP_MASK),
		(PMIC_AUXADC_DIG_2_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_2_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_2_DSN_DXI),
		(&val),
		(PMIC_AUXADC_DIG_2_DSN_FPI_MASK),
		(PMIC_AUXADC_DIG_2_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA0),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_lbat(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA0),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_LBAT_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_LBAT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_wakeup(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA0),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_WAKEUP_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_WAKEUP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_dcxo_mdrt(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_MDRT_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_dcxo_gps_ap(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_dcxo_gps_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_dcxo_gps(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_DCXO_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_mdrt(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_MDRT_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_MDRT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_share(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_SHARE_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_SHARE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_imp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_IMP_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_IMP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_fgadc_pchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_FGADC_PCHR_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_FGADC_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_fgadc_swchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_FGADC_SWCHR_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_FGADC_SWCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_gps_ap(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_AP_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_AP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_gps_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_MD_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_gps(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_GPS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_thr_md(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA1),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_THR_MD_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_THR_MD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_bat_plugin_pchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_BAT_PLUGIN_PCHR_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_BAT_PLUGIN_PCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_bat_plugin_swchr(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_BAT_PLUGIN_SWCHR_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_BAT_PLUGIN_SWCHR_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_batid(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_BATID_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_BATID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_pwron(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_PWRON_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_PWRON_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_thr1(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_THR1_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_THR1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_thr2(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_THR2_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_THR2_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_adc_busy_in_nag(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_STA2),
		(&val),
		(PMIC_AUXADC_ADC_BUSY_IN_NAG_MASK),
		(PMIC_AUXADC_ADC_BUSY_IN_NAG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH0_MASK),
		(PMIC_AUXADC_RQST_CH0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH1_MASK),
		(PMIC_AUXADC_RQST_CH1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH2_MASK),
		(PMIC_AUXADC_RQST_CH2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch3(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH3_MASK),
		(PMIC_AUXADC_RQST_CH3_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch4(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH4_MASK),
		(PMIC_AUXADC_RQST_CH4_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch5(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH5_MASK),
		(PMIC_AUXADC_RQST_CH5_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch6(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH6_MASK),
		(PMIC_AUXADC_RQST_CH6_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch7(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH7_MASK),
		(PMIC_AUXADC_RQST_CH7_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch8(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH8_MASK),
		(PMIC_AUXADC_RQST_CH8_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch9(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH9_MASK),
		(PMIC_AUXADC_RQST_CH9_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch10(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH10_MASK),
		(PMIC_AUXADC_RQST_CH10_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch11(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH11_MASK),
		(PMIC_AUXADC_RQST_CH11_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch12(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH12_MASK),
		(PMIC_AUXADC_RQST_CH12_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch13(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH13_MASK),
		(PMIC_AUXADC_RQST_CH13_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch14(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH14_MASK),
		(PMIC_AUXADC_RQST_CH14_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch15(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST0),
		(val),
		(PMIC_AUXADC_RQST_CH15_MASK),
		(PMIC_AUXADC_RQST_CH15_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch4_by_thr1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST2),
		(val),
		(PMIC_AUXADC_RQST_CH4_BY_THR1_MASK),
		(PMIC_AUXADC_RQST_CH4_BY_THR1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch4_by_thr2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST2),
		(val),
		(PMIC_AUXADC_RQST_CH4_BY_THR2_MASK),
		(PMIC_AUXADC_RQST_CH4_BY_THR2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch0_by_md(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST1),
		(val),
		(PMIC_AUXADC_RQST_CH0_BY_MD_MASK),
		(PMIC_AUXADC_RQST_CH0_BY_MD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch1_by_md(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST1),
		(val),
		(PMIC_AUXADC_RQST_CH1_BY_MD_MASK),
		(PMIC_AUXADC_RQST_CH1_BY_MD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST1),
		(val),
		(PMIC_AUXADC_RQST_RSV0_MASK),
		(PMIC_AUXADC_RQST_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_batid(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST1),
		(val),
		(PMIC_AUXADC_RQST_BATID_MASK),
		(PMIC_AUXADC_RQST_BATID_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch4_by_md(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST1),
		(val),
		(PMIC_AUXADC_RQST_CH4_BY_MD_MASK),
		(PMIC_AUXADC_RQST_CH4_BY_MD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch7_by_md(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST1),
		(val),
		(PMIC_AUXADC_RQST_CH7_BY_MD_MASK),
		(PMIC_AUXADC_RQST_CH7_BY_MD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_ch7_by_gps(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST1),
		(val),
		(PMIC_AUXADC_RQST_CH7_BY_GPS_MASK),
		(PMIC_AUXADC_RQST_CH7_BY_GPS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_dcxo_by_md(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST1),
		(val),
		(PMIC_AUXADC_RQST_DCXO_BY_MD_MASK),
		(PMIC_AUXADC_RQST_DCXO_BY_MD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_dcxo_by_gps(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST1),
		(val),
		(PMIC_AUXADC_RQST_DCXO_BY_GPS_MASK),
		(PMIC_AUXADC_RQST_DCXO_BY_GPS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rqst_rsv1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RQST1),
		(val),
		(PMIC_AUXADC_RQST_RSV1_MASK),
		(PMIC_AUXADC_RQST_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_ck_on_extd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_CK_ON_EXTD_MASK),
		(PMIC_AUXADC_CK_ON_EXTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_srclken_src_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_SRCLKEN_SRC_SEL_MASK),
		(PMIC_AUXADC_SRCLKEN_SRC_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adc_pwdb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_ADC_PWDB_MASK),
		(PMIC_AUXADC_ADC_PWDB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adc_pwdb_swctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_ADC_PWDB_SWCTRL_MASK),
		(PMIC_AUXADC_ADC_PWDB_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_strup_ck_on_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_STRUP_CK_ON_ENB_MASK),
		(PMIC_AUXADC_STRUP_CK_ON_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_srclken_ck_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_SRCLKEN_CK_EN_MASK),
		(PMIC_AUXADC_SRCLKEN_CK_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_ck_aon_gps(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_CK_AON_GPS_MASK),
		(PMIC_AUXADC_CK_AON_GPS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_ck_aon_md(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_CK_AON_MD_MASK),
		(PMIC_AUXADC_CK_AON_MD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_ck_aon(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON0),
		(val),
		(PMIC_AUXADC_CK_AON_MASK),
		(PMIC_AUXADC_CK_AON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_small(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON1),
		(val),
		(PMIC_AUXADC_AVG_NUM_SMALL_MASK),
		(PMIC_AUXADC_AVG_NUM_SMALL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_large(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON1),
		(val),
		(PMIC_AUXADC_AVG_NUM_LARGE_MASK),
		(PMIC_AUXADC_AVG_NUM_LARGE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON1),
		(val),
		(PMIC_AUXADC_SPL_NUM_MASK),
		(PMIC_AUXADC_SPL_NUM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON2),
		(val),
		(PMIC_AUXADC_AVG_NUM_SEL_MASK),
		(PMIC_AUXADC_AVG_NUM_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_sel_share(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON2),
		(val),
		(PMIC_AUXADC_AVG_NUM_SEL_SHARE_MASK),
		(PMIC_AUXADC_AVG_NUM_SEL_SHARE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_sel_lbat(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON2),
		(val),
		(PMIC_AUXADC_AVG_NUM_SEL_LBAT_MASK),
		(PMIC_AUXADC_AVG_NUM_SEL_LBAT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_sel_bat_temp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON2),
		(val),
		(PMIC_AUXADC_AVG_NUM_SEL_BAT_TEMP_MASK),
		(PMIC_AUXADC_AVG_NUM_SEL_BAT_TEMP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_sel_wakeup(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON2),
		(val),
		(PMIC_AUXADC_AVG_NUM_SEL_WAKEUP_MASK),
		(PMIC_AUXADC_AVG_NUM_SEL_WAKEUP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num_large(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON3),
		(val),
		(PMIC_AUXADC_SPL_NUM_LARGE_MASK),
		(PMIC_AUXADC_SPL_NUM_LARGE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON4),
		(val),
		(PMIC_AUXADC_SPL_NUM_SLEEP_MASK),
		(PMIC_AUXADC_SPL_NUM_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num_sleep_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON4),
		(val),
		(PMIC_AUXADC_SPL_NUM_SLEEP_SEL_MASK),
		(PMIC_AUXADC_SPL_NUM_SLEEP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON5),
		(val),
		(PMIC_AUXADC_SPL_NUM_SEL_MASK),
		(PMIC_AUXADC_SPL_NUM_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num_sel_share(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON5),
		(val),
		(PMIC_AUXADC_SPL_NUM_SEL_SHARE_MASK),
		(PMIC_AUXADC_SPL_NUM_SEL_SHARE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num_sel_lbat(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON5),
		(val),
		(PMIC_AUXADC_SPL_NUM_SEL_LBAT_MASK),
		(PMIC_AUXADC_SPL_NUM_SEL_LBAT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num_sel_bat_temp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON5),
		(val),
		(PMIC_AUXADC_SPL_NUM_SEL_BAT_TEMP_MASK),
		(PMIC_AUXADC_SPL_NUM_SEL_BAT_TEMP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num_sel_wakeup(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON5),
		(val),
		(PMIC_AUXADC_SPL_NUM_SEL_WAKEUP_MASK),
		(PMIC_AUXADC_SPL_NUM_SEL_WAKEUP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num_ch0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON6),
		(val),
		(PMIC_AUXADC_SPL_NUM_CH0_MASK),
		(PMIC_AUXADC_SPL_NUM_CH0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num_ch3(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON7),
		(val),
		(PMIC_AUXADC_SPL_NUM_CH3_MASK),
		(PMIC_AUXADC_SPL_NUM_CH3_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_spl_num_ch7(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON8),
		(val),
		(PMIC_AUXADC_SPL_NUM_CH7_MASK),
		(PMIC_AUXADC_SPL_NUM_CH7_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_lbat(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON9),
		(val),
		(PMIC_AUXADC_AVG_NUM_LBAT_MASK),
		(PMIC_AUXADC_AVG_NUM_LBAT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_ch7(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON9),
		(val),
		(PMIC_AUXADC_AVG_NUM_CH7_MASK),
		(PMIC_AUXADC_AVG_NUM_CH7_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_ch3(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON9),
		(val),
		(PMIC_AUXADC_AVG_NUM_CH3_MASK),
		(PMIC_AUXADC_AVG_NUM_CH3_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_ch0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON9),
		(val),
		(PMIC_AUXADC_AVG_NUM_CH0_MASK),
		(PMIC_AUXADC_AVG_NUM_CH0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_hpc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON10),
		(val),
		(PMIC_AUXADC_AVG_NUM_HPC_MASK),
		(PMIC_AUXADC_AVG_NUM_HPC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_avg_num_dcxo(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON10),
		(val),
		(PMIC_AUXADC_AVG_NUM_DCXO_MASK),
		(PMIC_AUXADC_AVG_NUM_DCXO_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch0_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH0_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH0_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch1_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH1_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH1_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch2_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH2_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH2_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch3_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH3_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH3_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch4_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH4_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH4_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch5_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH5_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH5_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch6_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH6_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH6_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch7_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON11),
		(val),
		(PMIC_AUXADC_TRIM_CH7_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH7_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch8_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_TRIM_CH8_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH8_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch9_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_TRIM_CH9_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH9_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch10_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_TRIM_CH10_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH10_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_trim_ch11_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_TRIM_CH11_SEL_MASK),
		(PMIC_AUXADC_TRIM_CH11_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adc_2s_comp_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_ADC_2S_COMP_ENB_MASK),
		(PMIC_AUXADC_ADC_2S_COMP_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adc_trim_comp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON12),
		(val),
		(PMIC_AUXADC_ADC_TRIM_COMP_MASK),
		(PMIC_AUXADC_ADC_TRIM_COMP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_rng_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_RNG_EN_MASK),
		(PMIC_AUXADC_RNG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_test_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_TEST_MODE_MASK),
		(PMIC_AUXADC_TEST_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_bit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_BIT_SEL_MASK),
		(PMIC_AUXADC_BIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_start_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_START_SW_MASK),
		(PMIC_AUXADC_START_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_start_swctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_START_SWCTRL_MASK),
		(PMIC_AUXADC_START_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_ts_vbe_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_TS_VBE_SEL_MASK),
		(PMIC_AUXADC_TS_VBE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_ts_vbe_sel_swctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_TS_VBE_SEL_SWCTRL_MASK),
		(PMIC_AUXADC_TS_VBE_SEL_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_vbuf_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_VBUF_EN_MASK),
		(PMIC_AUXADC_VBUF_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_vbuf_en_swctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_VBUF_EN_SWCTRL_MASK),
		(PMIC_AUXADC_VBUF_EN_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_out_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON13),
		(val),
		(PMIC_AUXADC_OUT_SEL_MASK),
		(PMIC_AUXADC_OUT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_da_dac(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON14),
		(val),
		(PMIC_AUXADC_DA_DAC_MASK),
		(PMIC_AUXADC_DA_DAC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_da_dac_swctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON14),
		(val),
		(PMIC_AUXADC_DA_DAC_SWCTRL_MASK),
		(PMIC_AUXADC_DA_DAC_SWCTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_ad_auxadc_comp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_CON14),
		(&val),
		(PMIC_AD_AUXADC_COMP_MASK),
		(PMIC_AD_AUXADC_COMP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_auxadc_adcin_vsen_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_VSEN_EN_MASK),
		(PMIC_AUXADC_ADCIN_VSEN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adcin_vbat_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_VBAT_EN_MASK),
		(PMIC_AUXADC_ADCIN_VBAT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adcin_vsen_mux_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_VSEN_MUX_EN_MASK),
		(PMIC_AUXADC_ADCIN_VSEN_MUX_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adcin_vsen_ext_baton_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_VSEN_EXT_BATON_EN_MASK),
		(PMIC_AUXADC_ADCIN_VSEN_EXT_BATON_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adcin_chr_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_CHR_EN_MASK),
		(PMIC_AUXADC_ADCIN_CHR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adcin_baton_tdet_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_BATON_TDET_EN_MASK),
		(PMIC_AUXADC_ADCIN_BATON_TDET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_accdet_anaswctrl_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ACCDET_ANASWCTRL_EN_MASK),
		(PMIC_AUXADC_ACCDET_ANASWCTRL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_xo_thadc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_XO_THADC_EN_MASK),
		(PMIC_AUXADC_XO_THADC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adcin_batid_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_ADCIN_BATID_SW_EN_MASK),
		(PMIC_AUXADC_ADCIN_BATID_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dig0_rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_DIG0_RSV0_MASK),
		(PMIC_AUXADC_DIG0_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_chsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_CHSEL_MASK),
		(PMIC_AUXADC_CHSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_swctrl_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON15),
		(val),
		(PMIC_AUXADC_SWCTRL_EN_MASK),
		(PMIC_AUXADC_SWCTRL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_source_lbat_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON16),
		(val),
		(PMIC_AUXADC_SOURCE_LBAT_SEL_MASK),
		(PMIC_AUXADC_SOURCE_LBAT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_source_lbat2_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON16),
		(val),
		(PMIC_AUXADC_SOURCE_LBAT2_SEL_MASK),
		(PMIC_AUXADC_SOURCE_LBAT2_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_start_extd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON16),
		(val),
		(PMIC_AUXADC_START_EXTD_MASK),
		(PMIC_AUXADC_START_EXTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dac_extd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON16),
		(val),
		(PMIC_AUXADC_DAC_EXTD_MASK),
		(PMIC_AUXADC_DAC_EXTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dac_extd_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON16),
		(val),
		(PMIC_AUXADC_DAC_EXTD_EN_MASK),
		(PMIC_AUXADC_DAC_EXTD_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dig0_rsv1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON17),
		(val),
		(PMIC_AUXADC_DIG0_RSV1_MASK),
		(PMIC_AUXADC_DIG0_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_start_shade_num(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON18),
		(val),
		(PMIC_AUXADC_START_SHADE_NUM_MASK),
		(PMIC_AUXADC_START_SHADE_NUM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_start_shade_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON18),
		(val),
		(PMIC_AUXADC_START_SHADE_EN_MASK),
		(PMIC_AUXADC_START_SHADE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_start_shade_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON18),
		(val),
		(PMIC_AUXADC_START_SHADE_SEL_MASK),
		(PMIC_AUXADC_START_SHADE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adc_rdy_wakeup_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON19),
		(val),
		(PMIC_AUXADC_ADC_RDY_WAKEUP_CLR_MASK),
		(PMIC_AUXADC_ADC_RDY_WAKEUP_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adc_rdy_fgadc_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON19),
		(val),
		(PMIC_AUXADC_ADC_RDY_FGADC_CLR_MASK),
		(PMIC_AUXADC_ADC_RDY_FGADC_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adc_rdy_bat_plugin_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON19),
		(val),
		(PMIC_AUXADC_ADC_RDY_BAT_PLUGIN_CLR_MASK),
		(PMIC_AUXADC_ADC_RDY_BAT_PLUGIN_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_adc_rdy_pwron_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON19),
		(val),
		(PMIC_AUXADC_ADC_RDY_PWRON_CLR_MASK),
		(PMIC_AUXADC_ADC_RDY_PWRON_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_data_reuse_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_DATA_REUSE_SEL_MASK),
		(PMIC_AUXADC_DATA_REUSE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_ch0_data_reuse_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_CH0_DATA_REUSE_SEL_MASK),
		(PMIC_AUXADC_CH0_DATA_REUSE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_ch1_data_reuse_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_CH1_DATA_REUSE_SEL_MASK),
		(PMIC_AUXADC_CH1_DATA_REUSE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dcxo_data_reuse_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_DCXO_DATA_REUSE_SEL_MASK),
		(PMIC_AUXADC_DCXO_DATA_REUSE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_data_reuse_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_DATA_REUSE_EN_MASK),
		(PMIC_AUXADC_DATA_REUSE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_ch0_data_reuse_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_CH0_DATA_REUSE_EN_MASK),
		(PMIC_AUXADC_CH0_DATA_REUSE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_ch1_data_reuse_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_CH1_DATA_REUSE_EN_MASK),
		(PMIC_AUXADC_CH1_DATA_REUSE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dcxo_data_reuse_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CON20),
		(val),
		(PMIC_AUXADC_DCXO_DATA_REUSE_EN_MASK),
		(PMIC_AUXADC_DCXO_DATA_REUSE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_auxadc_dig_3_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_3_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_3_ANA_ID_MASK),
		(PMIC_AUXADC_DIG_3_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_3_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_3_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_3_DIG_ID_MASK),
		(PMIC_AUXADC_DIG_3_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_3_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_3_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_3_ANA_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_3_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_3_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_3_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_3_ANA_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_3_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_3_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_3_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_3_DIG_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_3_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_3_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_3_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_3_DIG_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_3_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_3_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_3_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_3_DSN_CBS_MASK),
		(PMIC_AUXADC_DIG_3_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_3_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_3_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_3_DSN_BIX_MASK),
		(PMIC_AUXADC_DIG_3_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_3_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_3_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_3_DSN_ESP_MASK),
		(PMIC_AUXADC_DIG_3_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_3_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_3_DSN_DXI),
		(&val),
		(PMIC_AUXADC_DIG_3_DSN_FPI_MASK),
		(PMIC_AUXADC_DIG_3_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_auxadc_autorpt_prd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_AUTORPT0),
		(val),
		(PMIC_AUXADC_AUTORPT_PRD_MASK),
		(PMIC_AUXADC_AUTORPT_PRD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_autorpt_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_AUTORPT0),
		(val),
		(PMIC_AUXADC_AUTORPT_EN_MASK),
		(PMIC_AUXADC_AUTORPT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_lbat_debt_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT0),
		(val),
		(PMIC_AUXADC_LBAT_DEBT_MAX_MASK),
		(PMIC_AUXADC_LBAT_DEBT_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_lbat_debt_min(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT0),
		(val),
		(PMIC_AUXADC_LBAT_DEBT_MIN_MASK),
		(PMIC_AUXADC_LBAT_DEBT_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_lbat_det_prd_15_0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT1),
		(val),
		(PMIC_AUXADC_LBAT_DET_PRD_15_0_MASK),
		(PMIC_AUXADC_LBAT_DET_PRD_15_0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_lbat_det_prd_19_16(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT2),
		(val),
		(PMIC_AUXADC_LBAT_DET_PRD_19_16_MASK),
		(PMIC_AUXADC_LBAT_DET_PRD_19_16_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_lbat_volt_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT3),
		(val),
		(PMIC_AUXADC_LBAT_VOLT_MAX_MASK),
		(PMIC_AUXADC_LBAT_VOLT_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_lbat_irq_en_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT3),
		(val),
		(PMIC_AUXADC_LBAT_IRQ_EN_MAX_MASK),
		(PMIC_AUXADC_LBAT_IRQ_EN_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_lbat_en_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT3),
		(val),
		(PMIC_AUXADC_LBAT_EN_MAX_MASK),
		(PMIC_AUXADC_LBAT_EN_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_auxadc_lbat_max_irq_b(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_LBAT3),
		(&val),
		(PMIC_AUXADC_LBAT_MAX_IRQ_B_MASK),
		(PMIC_AUXADC_LBAT_MAX_IRQ_B_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_auxadc_lbat_volt_min(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT4),
		(val),
		(PMIC_AUXADC_LBAT_VOLT_MIN_MASK),
		(PMIC_AUXADC_LBAT_VOLT_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_lbat_irq_en_min(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT4),
		(val),
		(PMIC_AUXADC_LBAT_IRQ_EN_MIN_MASK),
		(PMIC_AUXADC_LBAT_IRQ_EN_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_lbat_en_min(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT4),
		(val),
		(PMIC_AUXADC_LBAT_EN_MIN_MASK),
		(PMIC_AUXADC_LBAT_EN_MIN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_auxadc_lbat_min_irq_b(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_LBAT4),
		(&val),
		(PMIC_AUXADC_LBAT_MIN_IRQ_B_MASK),
		(PMIC_AUXADC_LBAT_MIN_IRQ_B_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_lbat_debounce_count_max(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_LBAT5),
		(&val),
		(PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MAX_MASK),
		(PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MAX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_lbat_debounce_count_min(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_LBAT6),
		(&val),
		(PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MIN_MASK),
		(PMIC_AUXADC_LBAT_DEBOUNCE_COUNT_MIN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_auxadc_accdet_auto_spl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_ACCDET),
		(val),
		(PMIC_AUXADC_ACCDET_AUTO_SPL_MASK),
		(PMIC_AUXADC_ACCDET_AUTO_SPL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_accdet_auto_rqst_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_ACCDET),
		(val),
		(PMIC_AUXADC_ACCDET_AUTO_RQST_CLR_MASK),
		(PMIC_AUXADC_ACCDET_AUTO_RQST_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_accdet_dig1_rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_ACCDET),
		(val),
		(PMIC_AUXADC_ACCDET_DIG1_RSV0_MASK),
		(PMIC_AUXADC_ACCDET_DIG1_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_accdet_dig0_rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_ACCDET),
		(val),
		(PMIC_AUXADC_ACCDET_DIG0_RSV0_MASK),
		(PMIC_AUXADC_ACCDET_DIG0_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_fgadc_start_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_FGADC_START_SW_MASK),
		(PMIC_AUXADC_FGADC_START_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_fgadc_start_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_FGADC_START_SEL_MASK),
		(PMIC_AUXADC_FGADC_START_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_fgadc_r_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_FGADC_R_SW_MASK),
		(PMIC_AUXADC_FGADC_R_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_fgadc_r_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_FGADC_R_SEL_MASK),
		(PMIC_AUXADC_FGADC_R_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_bat_plugin_start_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_BAT_PLUGIN_START_SW_MASK),
		(PMIC_AUXADC_BAT_PLUGIN_START_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_bat_plugin_start_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_BAT_PLUGIN_START_SEL_MASK),
		(PMIC_AUXADC_BAT_PLUGIN_START_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dbg_dig0_rsv2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_DBG_DIG0_RSV2_MASK),
		(PMIC_AUXADC_DBG_DIG0_RSV2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dbg_dig1_rsv2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DBG0),
		(val),
		(PMIC_AUXADC_DBG_DIG1_RSV2_MASK),
		(PMIC_AUXADC_DBG_DIG1_RSV2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_impedance_cnt(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_IMP0),
		(val),
		(PMIC_AUXADC_IMPEDANCE_CNT_MASK),
		(PMIC_AUXADC_IMPEDANCE_CNT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_impedance_chsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_IMP0),
		(val),
		(PMIC_AUXADC_IMPEDANCE_CHSEL_MASK),
		(PMIC_AUXADC_IMPEDANCE_CHSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_impedance_irq_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_IMP0),
		(val),
		(PMIC_AUXADC_IMPEDANCE_IRQ_CLR_MASK),
		(PMIC_AUXADC_IMPEDANCE_IRQ_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_auxadc_impedance_irq_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_IMP0),
		(&val),
		(PMIC_AUXADC_IMPEDANCE_IRQ_STATUS_MASK),
		(PMIC_AUXADC_IMPEDANCE_IRQ_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_auxadc_clr_imp_cnt_stop(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_IMP0),
		(val),
		(PMIC_AUXADC_CLR_IMP_CNT_STOP_MASK),
		(PMIC_AUXADC_CLR_IMP_CNT_STOP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_impedance_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_IMP0),
		(val),
		(PMIC_AUXADC_IMPEDANCE_MODE_MASK),
		(PMIC_AUXADC_IMPEDANCE_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_imp_autorpt_prd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_IMP1),
		(val),
		(PMIC_AUXADC_IMP_AUTORPT_PRD_MASK),
		(PMIC_AUXADC_IMP_AUTORPT_PRD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_imp_autorpt_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_IMP1),
		(val),
		(PMIC_AUXADC_IMP_AUTORPT_EN_MASK),
		(PMIC_AUXADC_IMP_AUTORPT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_efuse_gain_ch4_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR0),
		(val),
		(PMIC_EFUSE_GAIN_CH4_TRIM_MASK),
		(PMIC_EFUSE_GAIN_CH4_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_efuse_offset_ch4_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR1),
		(val),
		(PMIC_EFUSE_OFFSET_CH4_TRIM_MASK),
		(PMIC_EFUSE_OFFSET_CH4_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_efuse_gain_ch0_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR2),
		(val),
		(PMIC_EFUSE_GAIN_CH0_TRIM_MASK),
		(PMIC_EFUSE_GAIN_CH0_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_efuse_offset_ch0_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR3),
		(val),
		(PMIC_EFUSE_OFFSET_CH0_TRIM_MASK),
		(PMIC_EFUSE_OFFSET_CH0_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_efuse_gain_ch7_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR4),
		(val),
		(PMIC_EFUSE_GAIN_CH7_TRIM_MASK),
		(PMIC_EFUSE_GAIN_CH7_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_efuse_offset_ch7_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR5),
		(val),
		(PMIC_EFUSE_OFFSET_CH7_TRIM_MASK),
		(PMIC_EFUSE_OFFSET_CH7_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_degc_cali(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR6),
		(val),
		(PMIC_AUXADC_EFUSE_DEGC_CALI_MASK),
		(PMIC_AUXADC_EFUSE_DEGC_CALI_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_adc_cali_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR6),
		(val),
		(PMIC_AUXADC_EFUSE_ADC_CALI_EN_MASK),
		(PMIC_AUXADC_EFUSE_ADC_CALI_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_1rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR6),
		(val),
		(PMIC_AUXADC_EFUSE_1RSV0_MASK),
		(PMIC_AUXADC_EFUSE_1RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_o_vts(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR7),
		(val),
		(PMIC_AUXADC_EFUSE_O_VTS_MASK),
		(PMIC_AUXADC_EFUSE_O_VTS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_2rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR7),
		(val),
		(PMIC_AUXADC_EFUSE_2RSV0_MASK),
		(PMIC_AUXADC_EFUSE_2RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_o_slope(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR8),
		(val),
		(PMIC_AUXADC_EFUSE_O_SLOPE_MASK),
		(PMIC_AUXADC_EFUSE_O_SLOPE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_o_slope_sign(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR8),
		(val),
		(PMIC_AUXADC_EFUSE_O_SLOPE_SIGN_MASK),
		(PMIC_AUXADC_EFUSE_O_SLOPE_SIGN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_3rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR8),
		(val),
		(PMIC_AUXADC_EFUSE_3RSV0_MASK),
		(PMIC_AUXADC_EFUSE_3RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_auxadc_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR9),
		(val),
		(PMIC_AUXADC_EFUSE_AUXADC_RSV_MASK),
		(PMIC_AUXADC_EFUSE_AUXADC_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_id(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR9),
		(val),
		(PMIC_AUXADC_EFUSE_ID_MASK),
		(PMIC_AUXADC_EFUSE_ID_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_4rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR9),
		(val),
		(PMIC_AUXADC_EFUSE_4RSV0_MASK),
		(PMIC_AUXADC_EFUSE_4RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_o_vts_2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR10),
		(val),
		(PMIC_AUXADC_EFUSE_O_VTS_2_MASK),
		(PMIC_AUXADC_EFUSE_O_VTS_2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_2rsv0_2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR10),
		(val),
		(PMIC_AUXADC_EFUSE_2RSV0_2_MASK),
		(PMIC_AUXADC_EFUSE_2RSV0_2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_o_vts_3(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR11),
		(val),
		(PMIC_AUXADC_EFUSE_O_VTS_3_MASK),
		(PMIC_AUXADC_EFUSE_O_VTS_3_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_efuse_2rsv0_3(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DIG_3_ELR11),
		(val),
		(PMIC_AUXADC_EFUSE_2RSV0_3_MASK),
		(PMIC_AUXADC_EFUSE_2RSV0_3_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_auxadc_dig_4_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_4_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_4_ANA_ID_MASK),
		(PMIC_AUXADC_DIG_4_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_4_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_4_DSN_ID),
		(&val),
		(PMIC_AUXADC_DIG_4_DIG_ID_MASK),
		(PMIC_AUXADC_DIG_4_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_4_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_4_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_4_ANA_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_4_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_4_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_4_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_4_ANA_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_4_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_4_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_4_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_4_DIG_MINOR_REV_MASK),
		(PMIC_AUXADC_DIG_4_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_4_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_4_DSN_REV0),
		(&val),
		(PMIC_AUXADC_DIG_4_DIG_MAJOR_REV_MASK),
		(PMIC_AUXADC_DIG_4_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_4_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_4_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_4_DSN_CBS_MASK),
		(PMIC_AUXADC_DIG_4_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_4_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_4_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_4_DSN_BIX_MASK),
		(PMIC_AUXADC_DIG_4_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_4_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_4_DSN_DBI),
		(&val),
		(PMIC_AUXADC_DIG_4_DSN_ESP_MASK),
		(PMIC_AUXADC_DIG_4_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_dig_4_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_DIG_4_DSN_DXI),
		(&val),
		(PMIC_AUXADC_DIG_4_DSN_FPI_MASK),
		(PMIC_AUXADC_DIG_4_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_auxadc_mdrt_det_prd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_MDRT_0),
		(val),
		(PMIC_AUXADC_MDRT_DET_PRD_MASK),
		(PMIC_AUXADC_MDRT_DET_PRD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_mdrt_det_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_MDRT_0),
		(val),
		(PMIC_AUXADC_MDRT_DET_EN_MASK),
		(PMIC_AUXADC_MDRT_DET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_mdrt_det_wkup_start_cnt(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_MDRT_1),
		(val),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_CNT_MASK),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_CNT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_mdrt_det_wkup_start_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_MDRT_1),
		(val),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_CLR_MASK),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_mdrt_det_wkup_start(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_MDRT_2),
		(val),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_MASK),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_mdrt_det_wkup_start_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_MDRT_2),
		(val),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_SEL_MASK),
		(PMIC_AUXADC_MDRT_DET_WKUP_START_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_mdrt_det_wkup_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_MDRT_2),
		(val),
		(PMIC_AUXADC_MDRT_DET_WKUP_EN_MASK),
		(PMIC_AUXADC_MDRT_DET_WKUP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_mdrt_det_srclken_ind(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_MDRT_2),
		(val),
		(PMIC_AUXADC_MDRT_DET_SRCLKEN_IND_MASK),
		(PMIC_AUXADC_MDRT_DET_SRCLKEN_IND_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_mdrt_det_rdy_st_prd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_MDRT_3),
		(val),
		(PMIC_AUXADC_MDRT_DET_RDY_ST_PRD_MASK),
		(PMIC_AUXADC_MDRT_DET_RDY_ST_PRD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_mdrt_det_rdy_st_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_MDRT_3),
		(val),
		(PMIC_AUXADC_MDRT_DET_RDY_ST_EN_MASK),
		(PMIC_AUXADC_MDRT_DET_RDY_ST_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_mdrt_det_start_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_MDRT_4),
		(val),
		(PMIC_AUXADC_MDRT_DET_START_SEL_MASK),
		(PMIC_AUXADC_MDRT_DET_START_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dcxo_mdrt_det_prd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DCXO_MDRT_0),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_PRD_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_PRD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dcxo_mdrt_det_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DCXO_MDRT_0),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_EN_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dcxo_mdrt_det_wkup_start_cnt(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DCXO_MDRT_1),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dcxo_mdrt_det_wkup_start_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DCXO_MDRT_1),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dcxo_mdrt_det_wkup_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DCXO_MDRT_2),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_EN_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dcxo_mdrt_det_wkup_start_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DCXO_MDRT_2),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dcxo_mdrt_det_wkup_start(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DCXO_MDRT_2),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_WKUP_START_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dcxo_mdrt_det_srclken_ind(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DCXO_MDRT_2),
		(val),
		(PMIC_AUXADC_DCXO_MDRT_DET_SRCLKEN_IND_MASK),
		(PMIC_AUXADC_DCXO_MDRT_DET_SRCLKEN_IND_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_dcxo_ch4_mux_ap_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_DCXO_MDRT_2),
		(val),
		(PMIC_AUXADC_DCXO_CH4_MUX_AP_SEL_MASK),
		(PMIC_AUXADC_DCXO_CH4_MUX_AP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_nag_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_NAG_0),
		(val),
		(PMIC_AUXADC_NAG_EN_MASK),
		(PMIC_AUXADC_NAG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_nag_clr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_NAG_0),
		(val),
		(PMIC_AUXADC_NAG_CLR_MASK),
		(PMIC_AUXADC_NAG_CLR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_nag_vbat1_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_NAG_0),
		(val),
		(PMIC_AUXADC_NAG_VBAT1_SEL_MASK),
		(PMIC_AUXADC_NAG_VBAT1_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_nag_prd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_NAG_0),
		(val),
		(PMIC_AUXADC_NAG_PRD_MASK),
		(PMIC_AUXADC_NAG_PRD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_nag_irq_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_NAG_0),
		(val),
		(PMIC_AUXADC_NAG_IRQ_EN_MASK),
		(PMIC_AUXADC_NAG_IRQ_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_auxadc_nag_c_dltv_irq(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_NAG_0),
		(&val),
		(PMIC_AUXADC_NAG_C_DLTV_IRQ_MASK),
		(PMIC_AUXADC_NAG_C_DLTV_IRQ_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_auxadc_nag_zcv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_NAG_1),
		(val),
		(PMIC_AUXADC_NAG_ZCV_MASK),
		(PMIC_AUXADC_NAG_ZCV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_nag_c_dltv_th_15_0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_NAG_2),
		(val),
		(PMIC_AUXADC_NAG_C_DLTV_TH_15_0_MASK),
		(PMIC_AUXADC_NAG_C_DLTV_TH_15_0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_auxadc_nag_c_dltv_th_26_16(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_NAG_3),
		(val),
		(PMIC_AUXADC_NAG_C_DLTV_TH_26_16_MASK),
		(PMIC_AUXADC_NAG_C_DLTV_TH_26_16_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_auxadc_nag_cnt_15_0(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_NAG_4),
		(&val),
		(PMIC_AUXADC_NAG_CNT_15_0_MASK),
		(PMIC_AUXADC_NAG_CNT_15_0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_nag_cnt_25_16(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_NAG_5),
		(&val),
		(PMIC_AUXADC_NAG_CNT_25_16_MASK),
		(PMIC_AUXADC_NAG_CNT_25_16_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_nag_dltv(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_NAG_6),
		(&val),
		(PMIC_AUXADC_NAG_DLTV_MASK),
		(PMIC_AUXADC_NAG_DLTV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_nag_c_dltv_15_0(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_NAG_7),
		(&val),
		(PMIC_AUXADC_NAG_C_DLTV_15_0_MASK),
		(PMIC_AUXADC_NAG_C_DLTV_15_0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_auxadc_nag_c_dltv_26_16(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_NAG_8),
		(&val),
		(PMIC_AUXADC_NAG_C_DLTV_26_16_MASK),
		(PMIC_AUXADC_NAG_C_DLTV_26_16_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_auxadc_rsv_1rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_RSV_1),
		(val),
		(PMIC_AUXADC_RSV_1RSV0_MASK),
		(PMIC_AUXADC_RSV_1RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_adcin_vbat_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ANA_0),
		(&val),
		(PMIC_DA_ADCIN_VBAT_EN_MASK),
		(PMIC_DA_ADCIN_VBAT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_auxadc_vbat_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ANA_0),
		(&val),
		(PMIC_DA_AUXADC_VBAT_EN_MASK),
		(PMIC_DA_AUXADC_VBAT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_adcin_vsen_mux_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ANA_0),
		(&val),
		(PMIC_DA_ADCIN_VSEN_MUX_EN_MASK),
		(PMIC_DA_ADCIN_VSEN_MUX_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_adcin_vsen_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ANA_0),
		(&val),
		(PMIC_DA_ADCIN_VSEN_EN_MASK),
		(PMIC_DA_ADCIN_VSEN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_adcin_chr_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ANA_0),
		(&val),
		(PMIC_DA_ADCIN_CHR_EN_MASK),
		(PMIC_DA_ADCIN_CHR_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_baton_tdet_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ANA_0),
		(&val),
		(PMIC_DA_BATON_TDET_EN_MASK),
		(PMIC_DA_BATON_TDET_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_adcin_batid_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_ANA_0),
		(&val),
		(PMIC_DA_ADCIN_BATID_SW_EN_MASK),
		(PMIC_DA_ADCIN_BATID_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_auxadc_imp_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_IMP_CG0),
		(val),
		(PMIC_RG_AUXADC_IMP_CK_SW_MODE_MASK),
		(PMIC_RG_AUXADC_IMP_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_imp_ck_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_IMP_CG0),
		(val),
		(PMIC_RG_AUXADC_IMP_CK_SW_EN_MASK),
		(PMIC_RG_AUXADC_IMP_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_auxadc_imp_ck_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_IMP_CG0),
		(&val),
		(PMIC_RG_AUXADC_IMP_CK_SW_EN_MASK),
		(PMIC_RG_AUXADC_IMP_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_auxadc_lbat_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT_CG0),
		(val),
		(PMIC_RG_AUXADC_LBAT_CK_SW_MODE_MASK),
		(PMIC_RG_AUXADC_LBAT_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_lbat_ck_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_LBAT_CG0),
		(val),
		(PMIC_RG_AUXADC_LBAT_CK_SW_EN_MASK),
		(PMIC_RG_AUXADC_LBAT_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_auxadc_lbat_ck_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_LBAT_CG0),
		(&val),
		(PMIC_RG_AUXADC_LBAT_CK_SW_EN_MASK),
		(PMIC_RG_AUXADC_LBAT_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_auxadc_nag_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_NAG_CG0),
		(val),
		(PMIC_RG_AUXADC_NAG_CK_SW_MODE_MASK),
		(PMIC_RG_AUXADC_NAG_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_auxadc_nag_ck_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_NAG_CG0),
		(val),
		(PMIC_RG_AUXADC_NAG_CK_SW_EN_MASK),
		(PMIC_RG_AUXADC_NAG_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_auxadc_nag_ck_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_NAG_CG0),
		(&val),
		(PMIC_RG_AUXADC_NAG_CK_SW_EN_MASK),
		(PMIC_RG_AUXADC_NAG_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_auxadc_new_priority_list_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_PRI_NEW),
		(val),
		(PMIC_RG_AUXADC_NEW_PRIORITY_LIST_SEL_MASK),
		(PMIC_RG_AUXADC_NEW_PRIORITY_LIST_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_adcin_vsen_mux_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CHR_TOP_CON2),
		(val),
		(PMIC_RG_ADCIN_VSEN_MUX_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_MUX_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_adcin_vsen_mux_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_CHR_TOP_CON2),
		(&val),
		(PMIC_RG_ADCIN_VSEN_MUX_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_MUX_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_baton_tdet_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CHR_TOP_CON2),
		(val),
		(PMIC_BATON_TDET_EN_MASK),
		(PMIC_BATON_TDET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_adcin_vsen_ext_baton_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CHR_TOP_CON2),
		(val),
		(PMIC_RG_ADCIN_VSEN_EXT_BATON_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_EXT_BATON_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_adcin_vsen_ext_baton_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_CHR_TOP_CON2),
		(&val),
		(PMIC_RG_ADCIN_VSEN_EXT_BATON_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_EXT_BATON_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_adcin_vbat_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CHR_TOP_CON2),
		(val),
		(PMIC_RG_ADCIN_VBAT_EN_MASK),
		(PMIC_RG_ADCIN_VBAT_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_adcin_vbat_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_CHR_TOP_CON2),
		(&val),
		(PMIC_RG_ADCIN_VBAT_EN_MASK),
		(PMIC_RG_ADCIN_VBAT_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_adcin_vsen_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CHR_TOP_CON2),
		(val),
		(PMIC_RG_ADCIN_VSEN_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_adcin_vsen_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_CHR_TOP_CON2),
		(&val),
		(PMIC_RG_ADCIN_VSEN_EN_MASK),
		(PMIC_RG_ADCIN_VSEN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_adcin_chr_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_AUXADC_CHR_TOP_CON2),
		(val),
		(PMIC_RG_ADCIN_CHR_EN_MASK),
		(PMIC_RG_ADCIN_CHR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_adcin_chr_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_AUXADC_CHR_TOP_CON2),
		(&val),
		(PMIC_RG_ADCIN_CHR_EN_MASK),
		(PMIC_RG_ADCIN_CHR_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_top_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_DSN_ID),
		(&val),
		(PMIC_BUCK_TOP_ANA_ID_MASK),
		(PMIC_BUCK_TOP_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_top_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_DSN_ID),
		(&val),
		(PMIC_BUCK_TOP_DIG_ID_MASK),
		(PMIC_BUCK_TOP_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_top_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_DSN_REV0),
		(&val),
		(PMIC_BUCK_TOP_ANA_MINOR_REV_MASK),
		(PMIC_BUCK_TOP_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_top_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_DSN_REV0),
		(&val),
		(PMIC_BUCK_TOP_ANA_MAJOR_REV_MASK),
		(PMIC_BUCK_TOP_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_top_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_DSN_REV0),
		(&val),
		(PMIC_BUCK_TOP_DIG_MINOR_REV_MASK),
		(PMIC_BUCK_TOP_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_top_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_DSN_REV0),
		(&val),
		(PMIC_BUCK_TOP_DIG_MAJOR_REV_MASK),
		(PMIC_BUCK_TOP_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_top_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_DBI),
		(&val),
		(PMIC_BUCK_TOP_CBS_MASK),
		(PMIC_BUCK_TOP_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_top_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_DBI),
		(&val),
		(PMIC_BUCK_TOP_BIX_MASK),
		(PMIC_BUCK_TOP_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_top_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_DBI),
		(&val),
		(PMIC_BUCK_TOP_ESP_MASK),
		(PMIC_BUCK_TOP_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_top_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_DXI),
		(&val),
		(PMIC_BUCK_TOP_FPI_MASK),
		(PMIC_BUCK_TOP_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck32k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK32K_CK_PDN_MASK),
		(PMIC_RG_BUCK32K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck1m_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK1M_CK_PDN_MASK),
		(PMIC_RG_BUCK1M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck26m_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK26M_CK_PDN_MASK),
		(PMIC_RG_BUCK26M_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_ana_auto_off_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK_ANA_AUTO_OFF_DIS_MASK),
		(PMIC_RG_BUCK_ANA_AUTO_OFF_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_ana_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_CON0),
		(val),
		(PMIC_RG_BUCK_ANA_CK_PDN_MASK),
		(PMIC_RG_BUCK_ANA_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck32k_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_HWEN_CON0),
		(val),
		(PMIC_RG_BUCK32K_CK_PDN_HWEN_MASK),
		(PMIC_RG_BUCK32K_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck1m_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_HWEN_CON0),
		(val),
		(PMIC_RG_BUCK1M_CK_PDN_HWEN_MASK),
		(PMIC_RG_BUCK1M_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck26m_ck_pdn_hwen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_HWEN_CON0),
		(val),
		(PMIC_RG_BUCK26M_CK_PDN_HWEN_MASK),
		(PMIC_RG_BUCK26M_CK_PDN_HWEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_dcm_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_HWEN_CON0),
		(val),
		(PMIC_RG_BUCK_DCM_MODE_MASK),
		(PMIC_RG_BUCK_DCM_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_freq_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_MISC_CON0),
		(val),
		(PMIC_RG_BUCK_VPROC_FREQ_SEL_MASK),
		(PMIC_RG_BUCK_VPROC_FREQ_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_freq_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_MISC_CON0),
		(val),
		(PMIC_RG_BUCK_VCORE_FREQ_SEL_MASK),
		(PMIC_RG_BUCK_VCORE_FREQ_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_freq_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_MISC_CON0),
		(val),
		(PMIC_RG_BUCK_VMODEM_FREQ_SEL_MASK),
		(PMIC_RG_BUCK_VMODEM_FREQ_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_freq_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_MISC_CON0),
		(val),
		(PMIC_RG_BUCK_VS1_FREQ_SEL_MASK),
		(PMIC_RG_BUCK_VS1_FREQ_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_freq_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_CLK_MISC_CON0),
		(val),
		(PMIC_RG_BUCK_VPA_FREQ_SEL_MASK),
		(PMIC_RG_BUCK_VPA_FREQ_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_en_vproc_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VPROC_OC_MASK),
		(PMIC_RG_INT_EN_VPROC_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vproc_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VPROC_OC_MASK),
		(PMIC_RG_INT_EN_VPROC_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vcore_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VCORE_OC_MASK),
		(PMIC_RG_INT_EN_VCORE_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vcore_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VCORE_OC_MASK),
		(PMIC_RG_INT_EN_VCORE_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vmodem_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VMODEM_OC_MASK),
		(PMIC_RG_INT_EN_VMODEM_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vmodem_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VMODEM_OC_MASK),
		(PMIC_RG_INT_EN_VMODEM_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vs1_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VS1_OC_MASK),
		(PMIC_RG_INT_EN_VS1_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vs1_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VS1_OC_MASK),
		(PMIC_RG_INT_EN_VS1_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vpa_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VPA_OC_MASK),
		(PMIC_RG_INT_EN_VPA_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vpa_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VPA_OC_MASK),
		(PMIC_RG_INT_EN_VPA_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vcore_preoc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VCORE_PREOC_MASK),
		(PMIC_RG_INT_EN_VCORE_PREOC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vcore_preoc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VCORE_PREOC_MASK),
		(PMIC_RG_INT_EN_VCORE_PREOC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_mask_vproc_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VPROC_OC_MASK),
		(PMIC_RG_INT_MASK_VPROC_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vcore_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VCORE_OC_MASK),
		(PMIC_RG_INT_MASK_VCORE_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vmodem_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VMODEM_OC_MASK),
		(PMIC_RG_INT_MASK_VMODEM_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vs1_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VS1_OC_MASK),
		(PMIC_RG_INT_MASK_VS1_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vpa_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VPA_OC_MASK),
		(PMIC_RG_INT_MASK_VPA_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vcore_preoc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VCORE_PREOC_MASK),
		(PMIC_RG_INT_MASK_VCORE_PREOC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vproc_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VPROC_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VPROC_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vcore_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VCORE_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VCORE_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vmodem_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VMODEM_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VMODEM_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vs1_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VS1_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VS1_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vpa_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VPA_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VPA_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vcore_preoc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VCORE_PREOC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VCORE_PREOC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_stb_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_STB_CON),
		(val),
		(PMIC_RG_BUCK_STB_MAX_MASK),
		(PMIC_RG_BUCK_STB_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_lp_prot_disable(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_STB_CON),
		(val),
		(PMIC_RG_BUCK_LP_PROT_DISABLE_MASK),
		(PMIC_RG_BUCK_LP_PROT_DISABLE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vsleep_src0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_SLP_CON0),
		(val),
		(PMIC_RG_BUCK_VSLEEP_SRC0_MASK),
		(PMIC_RG_BUCK_VSLEEP_SRC0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vsleep_src1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_SLP_CON0),
		(val),
		(PMIC_RG_BUCK_VSLEEP_SRC1_MASK),
		(PMIC_RG_BUCK_VSLEEP_SRC1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_r2r_src0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_SLP_CON1),
		(val),
		(PMIC_RG_BUCK_R2R_SRC0_MASK),
		(PMIC_RG_BUCK_R2R_SRC0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_r2r_src1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_SLP_CON1),
		(val),
		(PMIC_RG_BUCK_R2R_SRC1_MASK),
		(PMIC_RG_BUCK_R2R_SRC1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_lp_seq_count(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_SLP_CON2),
		(val),
		(PMIC_RG_BUCK_LP_SEQ_COUNT_MASK),
		(PMIC_RG_BUCK_LP_SEQ_COUNT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_on_seq_count(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_SLP_CON2),
		(val),
		(PMIC_RG_BUCK_ON_SEQ_COUNT_MASK),
		(PMIC_RG_BUCK_ON_SEQ_COUNT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_minfreq_latency_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_MINFREQ_CON),
		(val),
		(PMIC_RG_BUCK_MINFREQ_LATENCY_MAX_MASK),
		(PMIC_RG_BUCK_MINFREQ_LATENCY_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_minfreq_duration_max(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_MINFREQ_CON),
		(val),
		(PMIC_RG_BUCK_MINFREQ_DURATION_MAX_MASK),
		(PMIC_RG_BUCK_MINFREQ_DURATION_MAX_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_oc_sdn_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_OC_CON0),
		(&val),
		(PMIC_RG_BUCK_VPROC_OC_SDN_STATUS_MASK),
		(PMIC_RG_BUCK_VPROC_OC_SDN_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_oc_sdn_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_OC_CON0),
		(&val),
		(PMIC_RG_BUCK_VCORE_OC_SDN_STATUS_MASK),
		(PMIC_RG_BUCK_VCORE_OC_SDN_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_oc_sdn_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_OC_CON0),
		(&val),
		(PMIC_RG_BUCK_VMODEM_OC_SDN_STATUS_MASK),
		(PMIC_RG_BUCK_VMODEM_OC_SDN_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_oc_sdn_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_OC_CON0),
		(&val),
		(PMIC_RG_BUCK_VS1_OC_SDN_STATUS_MASK),
		(PMIC_RG_BUCK_VS1_OC_SDN_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_oc_sdn_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_OC_CON0),
		(&val),
		(PMIC_RG_BUCK_VPA_OC_SDN_STATUS_MASK),
		(PMIC_RG_BUCK_VPA_OC_SDN_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_k_rst_done(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(val),
		(PMIC_RG_BUCK_K_RST_DONE_MASK),
		(PMIC_RG_BUCK_K_RST_DONE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_k_map_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(val),
		(PMIC_RG_BUCK_K_MAP_SEL_MASK),
		(PMIC_RG_BUCK_K_MAP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_k_once_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(val),
		(PMIC_RG_BUCK_K_ONCE_EN_MASK),
		(PMIC_RG_BUCK_K_ONCE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_k_once_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(&val),
		(PMIC_RG_BUCK_K_ONCE_EN_MASK),
		(PMIC_RG_BUCK_K_ONCE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_k_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(val),
		(PMIC_RG_BUCK_K_ONCE_MASK),
		(PMIC_RG_BUCK_K_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_k_start_manual(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(val),
		(PMIC_RG_BUCK_K_START_MANUAL_MASK),
		(PMIC_RG_BUCK_K_START_MANUAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_k_src_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(val),
		(PMIC_RG_BUCK_K_SRC_SEL_MASK),
		(PMIC_RG_BUCK_K_SRC_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_k_auto_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(val),
		(PMIC_RG_BUCK_K_AUTO_EN_MASK),
		(PMIC_RG_BUCK_K_AUTO_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_k_auto_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(&val),
		(PMIC_RG_BUCK_K_AUTO_EN_MASK),
		(PMIC_RG_BUCK_K_AUTO_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_k_inv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(val),
		(PMIC_RG_BUCK_K_INV_MASK),
		(PMIC_RG_BUCK_K_INV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_k_ck_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(val),
		(PMIC_RG_BUCK_K_CK_EN_MASK),
		(PMIC_RG_BUCK_K_CK_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_k_ck_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_K_CON0),
		(&val),
		(PMIC_RG_BUCK_K_CK_EN_MASK),
		(PMIC_RG_BUCK_K_CK_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_k_result(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_K_CON1),
		(&val),
		(PMIC_BUCK_K_RESULT_MASK),
		(PMIC_BUCK_K_RESULT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_k_done(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_K_CON1),
		(&val),
		(PMIC_BUCK_K_DONE_MASK),
		(PMIC_BUCK_K_DONE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_k_control(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_K_CON1),
		(&val),
		(PMIC_BUCK_K_CONTROL_MASK),
		(PMIC_BUCK_K_CONTROL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_smps_osc_cal(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_K_CON1),
		(&val),
		(PMIC_DA_SMPS_OSC_CAL_MASK),
		(PMIC_DA_SMPS_OSC_CAL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_k_buck_ck_cnt(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_K_CON2),
		(val),
		(PMIC_RG_BUCK_K_BUCK_CK_CNT_MASK),
		(PMIC_RG_BUCK_K_BUCK_CK_CNT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_buck_vproc_wdtdbg_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_WDTDBG0),
		(&val),
		(PMIC_BUCK_VPROC_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VPROC_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vcore_wdtdbg_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_WDTDBG0),
		(&val),
		(PMIC_BUCK_VCORE_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VCORE_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vmodem_wdtdbg_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_WDTDBG1),
		(&val),
		(PMIC_BUCK_VMODEM_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VMODEM_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vs1_wdtdbg_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_WDTDBG1),
		(&val),
		(PMIC_BUCK_VS1_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VS1_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vpa_wdtdbg_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_WDTDBG2),
		(&val),
		(PMIC_BUCK_VPA_WDTDBG_VOSEL_MASK),
		(PMIC_BUCK_VPA_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_oc_sdn_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VPROC_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPROC_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_oc_sdn_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VPROC_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPROC_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_oc_sdn_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VCORE_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VCORE_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_oc_sdn_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VCORE_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VCORE_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_oc_sdn_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VMODEM_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_oc_sdn_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VMODEM_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_oc_sdn_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VS1_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VS1_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_oc_sdn_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VS1_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VS1_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_oc_sdn_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_VPA_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPA_OC_SDN_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_oc_sdn_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_VPA_OC_SDN_EN_MASK),
		(PMIC_RG_BUCK_VPA_OC_SDN_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_oc_sdn_en_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_OC_SDN_EN_SEL_MASK),
		(PMIC_RG_BUCK_OC_SDN_EN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_oc_sdn_en_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_ELR0),
		(&val),
		(PMIC_RG_BUCK_OC_SDN_EN_SEL_MASK),
		(PMIC_RG_BUCK_OC_SDN_EN_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_k_control_smps(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR0),
		(val),
		(PMIC_RG_BUCK_K_CONTROL_SMPS_MASK),
		(PMIC_RG_BUCK_K_CONTROL_SMPS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VPROC_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPROC_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_vosel_limit_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VPROC_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPROC_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VCORE_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_vosel_limit_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VCORE_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_vosel_limit_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VS1_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_vosel_limit_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VS1_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_TOP_ELR1),
		(val),
		(PMIC_RG_BUCK_VPA_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_vosel_limit_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_TOP_ELR1),
		(&val),
		(PMIC_RG_BUCK_VPA_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vproc_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DSN_ID),
		(&val),
		(PMIC_BUCK_VPROC_ANA_ID_MASK),
		(PMIC_BUCK_VPROC_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vproc_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DSN_ID),
		(&val),
		(PMIC_BUCK_VPROC_DIG_ID_MASK),
		(PMIC_BUCK_VPROC_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vproc_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DSN_REV0),
		(&val),
		(PMIC_BUCK_VPROC_ANA_MINOR_REV_MASK),
		(PMIC_BUCK_VPROC_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vproc_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DSN_REV0),
		(&val),
		(PMIC_BUCK_VPROC_ANA_MAJOR_REV_MASK),
		(PMIC_BUCK_VPROC_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vproc_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DSN_REV0),
		(&val),
		(PMIC_BUCK_VPROC_DIG_MINOR_REV_MASK),
		(PMIC_BUCK_VPROC_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vproc_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DSN_REV0),
		(&val),
		(PMIC_BUCK_VPROC_DIG_MAJOR_REV_MASK),
		(PMIC_BUCK_VPROC_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vproc_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DSN_DBI),
		(&val),
		(PMIC_BUCK_VPROC_DSN_CBS_MASK),
		(PMIC_BUCK_VPROC_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vproc_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DSN_DBI),
		(&val),
		(PMIC_BUCK_VPROC_DSN_BIX_MASK),
		(PMIC_BUCK_VPROC_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vproc_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DSN_DBI),
		(&val),
		(PMIC_BUCK_VPROC_DSN_ESP_MASK),
		(PMIC_BUCK_VPROC_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vproc_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DSN_DXI),
		(&val),
		(PMIC_BUCK_VPROC_DSN_FPI_MASK),
		(PMIC_BUCK_VPROC_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CON0),
		(val),
		(PMIC_RG_BUCK_VPROC_EN_MASK),
		(PMIC_RG_BUCK_VPROC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_CON0),
		(&val),
		(PMIC_RG_BUCK_VPROC_EN_MASK),
		(PMIC_RG_BUCK_VPROC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CON0),
		(val),
		(PMIC_RG_BUCK_VPROC_LP_MASK),
		(PMIC_RG_BUCK_VPROC_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_vosel_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CON1),
		(val),
		(PMIC_RG_BUCK_VPROC_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VPROC_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_vosel_sleep(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_CON1),
		(&val),
		(PMIC_RG_BUCK_VPROC_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VPROC_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VPROC_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_sfchg_fen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VPROC_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VPROC_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_sfchg_ren(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CFG0),
		(val),
		(PMIC_RG_BUCK_VPROC_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VPROC_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_dvs_en_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CFG1),
		(val),
		(PMIC_RG_BUCK_VPROC_DVS_EN_TD_MASK),
		(PMIC_RG_BUCK_VPROC_DVS_EN_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_dvs_en_td(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_CFG1),
		(&val),
		(PMIC_RG_BUCK_VPROC_DVS_EN_TD_MASK),
		(PMIC_RG_BUCK_VPROC_DVS_EN_TD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_dvs_en_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CFG1),
		(val),
		(PMIC_RG_BUCK_VPROC_DVS_EN_CTRL_MASK),
		(PMIC_RG_BUCK_VPROC_DVS_EN_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_dvs_en_ctrl(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_CFG1),
		(&val),
		(PMIC_RG_BUCK_VPROC_DVS_EN_CTRL_MASK),
		(PMIC_RG_BUCK_VPROC_DVS_EN_CTRL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_dvs_en_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CFG1),
		(val),
		(PMIC_RG_BUCK_VPROC_DVS_EN_ONCE_MASK),
		(PMIC_RG_BUCK_VPROC_DVS_EN_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_dvs_en_once(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_CFG1),
		(&val),
		(PMIC_RG_BUCK_VPROC_DVS_EN_ONCE_MASK),
		(PMIC_RG_BUCK_VPROC_DVS_EN_ONCE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_dvs_down_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CFG1),
		(val),
		(PMIC_RG_BUCK_VPROC_DVS_DOWN_TD_MASK),
		(PMIC_RG_BUCK_VPROC_DVS_DOWN_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_dvs_down_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CFG1),
		(val),
		(PMIC_RG_BUCK_VPROC_DVS_DOWN_CTRL_MASK),
		(PMIC_RG_BUCK_VPROC_DVS_DOWN_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_dvs_down_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_CFG1),
		(val),
		(PMIC_RG_BUCK_VPROC_DVS_DOWN_ONCE_MASK),
		(PMIC_RG_BUCK_VPROC_DVS_DOWN_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_OP_EN),
		(val),
		(PMIC_RG_BUCK_VPROC_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VPROC_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VPROC_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VPROC_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_sp_sw_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_SP_CON),
		(val),
		(PMIC_RG_BUCK_VPROC_SP_SW_VOSEL_MASK),
		(PMIC_RG_BUCK_VPROC_SP_SW_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_sp_sw_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_SP_CON),
		(&val),
		(PMIC_RG_BUCK_VPROC_SP_SW_VOSEL_MASK),
		(PMIC_RG_BUCK_VPROC_SP_SW_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_sp_sw_vosel_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_SP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_BUCK_VPROC_SP_SW_VOSEL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_sp_sw_vosel_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_SP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_BUCK_VPROC_SP_SW_VOSEL_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_sp_on_vosel_mux_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_SP_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC_SP_ON_VOSEL_MUX_SEL_MASK),
		(PMIC_RG_BUCK_VPROC_SP_ON_VOSEL_MUX_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_sp_on_vosel_mux_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_SP_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC_SP_ON_VOSEL_MUX_SEL_MASK),
		(PMIC_RG_BUCK_VPROC_SP_ON_VOSEL_MUX_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_oc_deg_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC_OC_DEG_EN_MASK),
		(PMIC_RG_BUCK_VPROC_OC_DEG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_oc_deg_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_OC_CFG),
		(&val),
		(PMIC_RG_BUCK_VPROC_OC_DEG_EN_MASK),
		(PMIC_RG_BUCK_VPROC_OC_DEG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_oc_wnd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC_OC_WND_MASK),
		(PMIC_RG_BUCK_VPROC_OC_WND_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_oc_thd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VPROC_OC_THD_MASK),
		(PMIC_RG_BUCK_VPROC_OC_THD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vproc_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DBG0),
		(&val),
		(PMIC_DA_VPROC_VOSEL_MASK),
		(PMIC_DA_VPROC_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vproc_vosel_gray(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DBG0),
		(&val),
		(PMIC_DA_VPROC_VOSEL_GRAY_MASK),
		(PMIC_DA_VPROC_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vproc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DBG1),
		(&val),
		(PMIC_DA_VPROC_EN_MASK),
		(PMIC_DA_VPROC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vproc_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DBG1),
		(&val),
		(PMIC_DA_VPROC_STB_MASK),
		(PMIC_DA_VPROC_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vproc_vsleep_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DBG1),
		(&val),
		(PMIC_DA_VPROC_VSLEEP_SEL_MASK),
		(PMIC_DA_VPROC_VSLEEP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vproc_r2r_pdn(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DBG1),
		(&val),
		(PMIC_DA_VPROC_R2R_PDN_MASK),
		(PMIC_DA_VPROC_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vproc_dvs_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DBG1),
		(&val),
		(PMIC_DA_VPROC_DVS_EN_MASK),
		(PMIC_DA_VPROC_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vproc_dvs_down(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DBG1),
		(&val),
		(PMIC_DA_VPROC_DVS_DOWN_MASK),
		(PMIC_DA_VPROC_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vproc_ssh(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DBG1),
		(&val),
		(PMIC_DA_VPROC_SSH_MASK),
		(PMIC_DA_VPROC_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vproc_minfreq_discharge(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DBG1),
		(&val),
		(PMIC_DA_VPROC_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VPROC_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_oc_flag_clr_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_DBG2),
		(val),
		(PMIC_RG_BUCK_VPROC_OC_FLAG_CLR_SEL_MASK),
		(PMIC_RG_BUCK_VPROC_OC_FLAG_CLR_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_osc_sel_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_DBG2),
		(val),
		(PMIC_RG_BUCK_VPROC_OSC_SEL_DIS_MASK),
		(PMIC_RG_BUCK_VPROC_OSC_SEL_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_DBG2),
		(val),
		(PMIC_RG_BUCK_VPROC_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VPROC_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_ck_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_DBG2),
		(val),
		(PMIC_RG_BUCK_VPROC_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPROC_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_ck_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_DBG2),
		(&val),
		(PMIC_RG_BUCK_VPROC_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPROC_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vproc_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPROC_ELR0),
		(val),
		(PMIC_RG_BUCK_VPROC_VOSEL_MASK),
		(PMIC_RG_BUCK_VPROC_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vproc_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPROC_ELR0),
		(&val),
		(PMIC_RG_BUCK_VPROC_VOSEL_MASK),
		(PMIC_RG_BUCK_VPROC_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vcore_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DSN_ID),
		(&val),
		(PMIC_BUCK_VCORE_ANA_ID_MASK),
		(PMIC_BUCK_VCORE_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vcore_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DSN_ID),
		(&val),
		(PMIC_BUCK_VCORE_DIG_ID_MASK),
		(PMIC_BUCK_VCORE_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vcore_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DSN_REV0),
		(&val),
		(PMIC_BUCK_VCORE_ANA_MINOR_REV_MASK),
		(PMIC_BUCK_VCORE_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vcore_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DSN_REV0),
		(&val),
		(PMIC_BUCK_VCORE_ANA_MAJOR_REV_MASK),
		(PMIC_BUCK_VCORE_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vcore_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DSN_REV0),
		(&val),
		(PMIC_BUCK_VCORE_DIG_MINOR_REV_MASK),
		(PMIC_BUCK_VCORE_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vcore_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DSN_REV0),
		(&val),
		(PMIC_BUCK_VCORE_DIG_MAJOR_REV_MASK),
		(PMIC_BUCK_VCORE_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vcore_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DSN_DBI),
		(&val),
		(PMIC_BUCK_VCORE_DSN_CBS_MASK),
		(PMIC_BUCK_VCORE_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vcore_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DSN_DBI),
		(&val),
		(PMIC_BUCK_VCORE_DSN_BIX_MASK),
		(PMIC_BUCK_VCORE_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vcore_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DSN_DBI),
		(&val),
		(PMIC_BUCK_VCORE_DSN_ESP_MASK),
		(PMIC_BUCK_VCORE_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vcore_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DSN_DXI),
		(&val),
		(PMIC_BUCK_VCORE_DSN_FPI_MASK),
		(PMIC_BUCK_VCORE_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CON0),
		(val),
		(PMIC_RG_BUCK_VCORE_EN_MASK),
		(PMIC_RG_BUCK_VCORE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_CON0),
		(&val),
		(PMIC_RG_BUCK_VCORE_EN_MASK),
		(PMIC_RG_BUCK_VCORE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CON0),
		(val),
		(PMIC_RG_BUCK_VCORE_LP_MASK),
		(PMIC_RG_BUCK_VCORE_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_vosel_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CON1),
		(val),
		(PMIC_RG_BUCK_VCORE_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_vosel_sleep(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_CON1),
		(&val),
		(PMIC_RG_BUCK_VCORE_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CFG0),
		(val),
		(PMIC_RG_BUCK_VCORE_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VCORE_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_sfchg_fen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CFG0),
		(val),
		(PMIC_RG_BUCK_VCORE_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VCORE_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CFG0),
		(val),
		(PMIC_RG_BUCK_VCORE_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VCORE_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_sfchg_ren(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CFG0),
		(val),
		(PMIC_RG_BUCK_VCORE_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VCORE_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_dvs_en_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CFG1),
		(val),
		(PMIC_RG_BUCK_VCORE_DVS_EN_TD_MASK),
		(PMIC_RG_BUCK_VCORE_DVS_EN_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_dvs_en_td(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_CFG1),
		(&val),
		(PMIC_RG_BUCK_VCORE_DVS_EN_TD_MASK),
		(PMIC_RG_BUCK_VCORE_DVS_EN_TD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_dvs_en_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CFG1),
		(val),
		(PMIC_RG_BUCK_VCORE_DVS_EN_CTRL_MASK),
		(PMIC_RG_BUCK_VCORE_DVS_EN_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_dvs_en_ctrl(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_CFG1),
		(&val),
		(PMIC_RG_BUCK_VCORE_DVS_EN_CTRL_MASK),
		(PMIC_RG_BUCK_VCORE_DVS_EN_CTRL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_dvs_en_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CFG1),
		(val),
		(PMIC_RG_BUCK_VCORE_DVS_EN_ONCE_MASK),
		(PMIC_RG_BUCK_VCORE_DVS_EN_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_dvs_en_once(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_CFG1),
		(&val),
		(PMIC_RG_BUCK_VCORE_DVS_EN_ONCE_MASK),
		(PMIC_RG_BUCK_VCORE_DVS_EN_ONCE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_dvs_down_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CFG1),
		(val),
		(PMIC_RG_BUCK_VCORE_DVS_DOWN_TD_MASK),
		(PMIC_RG_BUCK_VCORE_DVS_DOWN_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_dvs_down_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CFG1),
		(val),
		(PMIC_RG_BUCK_VCORE_DVS_DOWN_CTRL_MASK),
		(PMIC_RG_BUCK_VCORE_DVS_DOWN_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_dvs_down_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_CFG1),
		(val),
		(PMIC_RG_BUCK_VCORE_DVS_DOWN_ONCE_MASK),
		(PMIC_RG_BUCK_VCORE_DVS_DOWN_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_OP_EN),
		(val),
		(PMIC_RG_BUCK_VCORE_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VCORE_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VCORE_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_sp_sw_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_SP_CON),
		(val),
		(PMIC_RG_BUCK_VCORE_SP_SW_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_SP_SW_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_sp_sw_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_SP_CON),
		(&val),
		(PMIC_RG_BUCK_VCORE_SP_SW_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_SP_SW_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_sp_sw_vosel_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_SP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_BUCK_VCORE_SP_SW_VOSEL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_sp_sw_vosel_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_SP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_BUCK_VCORE_SP_SW_VOSEL_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_sp_on_vosel_mux_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_SP_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_SP_ON_VOSEL_MUX_SEL_MASK),
		(PMIC_RG_BUCK_VCORE_SP_ON_VOSEL_MUX_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_sp_on_vosel_mux_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_SP_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_SP_ON_VOSEL_MUX_SEL_MASK),
		(PMIC_RG_BUCK_VCORE_SP_ON_VOSEL_MUX_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_oc_deg_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_OC_DEG_EN_MASK),
		(PMIC_RG_BUCK_VCORE_OC_DEG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_oc_deg_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_OC_CFG),
		(&val),
		(PMIC_RG_BUCK_VCORE_OC_DEG_EN_MASK),
		(PMIC_RG_BUCK_VCORE_OC_DEG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_oc_wnd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_OC_WND_MASK),
		(PMIC_RG_BUCK_VCORE_OC_WND_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_oc_thd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VCORE_OC_THD_MASK),
		(PMIC_RG_BUCK_VCORE_OC_THD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcore_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DBG0),
		(&val),
		(PMIC_DA_VCORE_VOSEL_MASK),
		(PMIC_DA_VCORE_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcore_vosel_gray(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DBG0),
		(&val),
		(PMIC_DA_VCORE_VOSEL_GRAY_MASK),
		(PMIC_DA_VCORE_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcore_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_EN_MASK),
		(PMIC_DA_VCORE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcore_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_STB_MASK),
		(PMIC_DA_VCORE_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcore_vsleep_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_VSLEEP_SEL_MASK),
		(PMIC_DA_VCORE_VSLEEP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcore_r2r_pdn(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_R2R_PDN_MASK),
		(PMIC_DA_VCORE_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcore_dvs_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_DVS_EN_MASK),
		(PMIC_DA_VCORE_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcore_dvs_down(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_DVS_DOWN_MASK),
		(PMIC_DA_VCORE_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcore_ssh(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_SSH_MASK),
		(PMIC_DA_VCORE_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcore_minfreq_discharge(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DBG1),
		(&val),
		(PMIC_DA_VCORE_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VCORE_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_oc_flag_clr_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_DBG2),
		(val),
		(PMIC_RG_BUCK_VCORE_OC_FLAG_CLR_SEL_MASK),
		(PMIC_RG_BUCK_VCORE_OC_FLAG_CLR_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_osc_sel_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_DBG2),
		(val),
		(PMIC_RG_BUCK_VCORE_OSC_SEL_DIS_MASK),
		(PMIC_RG_BUCK_VCORE_OSC_SEL_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_DBG2),
		(val),
		(PMIC_RG_BUCK_VCORE_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VCORE_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_ck_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_DBG2),
		(val),
		(PMIC_RG_BUCK_VCORE_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VCORE_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_ck_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_DBG2),
		(&val),
		(PMIC_RG_BUCK_VCORE_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VCORE_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vcore_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VCORE_ELR0),
		(val),
		(PMIC_RG_BUCK_VCORE_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vcore_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VCORE_ELR0),
		(&val),
		(PMIC_RG_BUCK_VCORE_VOSEL_MASK),
		(PMIC_RG_BUCK_VCORE_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vmodem_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DSN_ID),
		(&val),
		(PMIC_BUCK_VMODEM_ANA_ID_MASK),
		(PMIC_BUCK_VMODEM_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vmodem_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DSN_ID),
		(&val),
		(PMIC_BUCK_VMODEM_DIG_ID_MASK),
		(PMIC_BUCK_VMODEM_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vmodem_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DSN_REV0),
		(&val),
		(PMIC_BUCK_VMODEM_ANA_MINOR_REV_MASK),
		(PMIC_BUCK_VMODEM_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vmodem_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DSN_REV0),
		(&val),
		(PMIC_BUCK_VMODEM_ANA_MAJOR_REV_MASK),
		(PMIC_BUCK_VMODEM_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vmodem_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DSN_REV0),
		(&val),
		(PMIC_BUCK_VMODEM_DIG_MINOR_REV_MASK),
		(PMIC_BUCK_VMODEM_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vmodem_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DSN_REV0),
		(&val),
		(PMIC_BUCK_VMODEM_DIG_MAJOR_REV_MASK),
		(PMIC_BUCK_VMODEM_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vmodem_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DSN_DBI),
		(&val),
		(PMIC_BUCK_VMODEM_DSN_CBS_MASK),
		(PMIC_BUCK_VMODEM_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vmodem_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DSN_DBI),
		(&val),
		(PMIC_BUCK_VMODEM_DSN_BIX_MASK),
		(PMIC_BUCK_VMODEM_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vmodem_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DSN_DBI),
		(&val),
		(PMIC_BUCK_VMODEM_DSN_ESP_MASK),
		(PMIC_BUCK_VMODEM_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vmodem_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DSN_DXI),
		(&val),
		(PMIC_BUCK_VMODEM_DSN_FPI_MASK),
		(PMIC_BUCK_VMODEM_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CON0),
		(val),
		(PMIC_RG_BUCK_VMODEM_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_CON0),
		(&val),
		(PMIC_RG_BUCK_VMODEM_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CON0),
		(val),
		(PMIC_RG_BUCK_VMODEM_LP_MASK),
		(PMIC_RG_BUCK_VMODEM_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_vosel_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CON1),
		(val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_vosel_sleep(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_CON1),
		(&val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CFG0),
		(val),
		(PMIC_RG_BUCK_VMODEM_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VMODEM_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_sfchg_fen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CFG0),
		(val),
		(PMIC_RG_BUCK_VMODEM_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VMODEM_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CFG0),
		(val),
		(PMIC_RG_BUCK_VMODEM_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VMODEM_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_sfchg_ren(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CFG0),
		(val),
		(PMIC_RG_BUCK_VMODEM_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VMODEM_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_dvs_en_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CFG1),
		(val),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_TD_MASK),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_dvs_en_td(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_CFG1),
		(&val),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_TD_MASK),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_TD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_dvs_en_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CFG1),
		(val),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_CTRL_MASK),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_dvs_en_ctrl(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_CFG1),
		(&val),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_CTRL_MASK),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_CTRL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_dvs_en_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CFG1),
		(val),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_ONCE_MASK),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_dvs_en_once(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_CFG1),
		(&val),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_ONCE_MASK),
		(PMIC_RG_BUCK_VMODEM_DVS_EN_ONCE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_dvs_down_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CFG1),
		(val),
		(PMIC_RG_BUCK_VMODEM_DVS_DOWN_TD_MASK),
		(PMIC_RG_BUCK_VMODEM_DVS_DOWN_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_dvs_down_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CFG1),
		(val),
		(PMIC_RG_BUCK_VMODEM_DVS_DOWN_CTRL_MASK),
		(PMIC_RG_BUCK_VMODEM_DVS_DOWN_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_dvs_down_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_CFG1),
		(val),
		(PMIC_RG_BUCK_VMODEM_DVS_DOWN_ONCE_MASK),
		(PMIC_RG_BUCK_VMODEM_DVS_DOWN_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_OP_EN),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VMODEM_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_sp_sw_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_SP_CON),
		(val),
		(PMIC_RG_BUCK_VMODEM_SP_SW_VOSEL_MASK),
		(PMIC_RG_BUCK_VMODEM_SP_SW_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_sp_sw_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_SP_CON),
		(&val),
		(PMIC_RG_BUCK_VMODEM_SP_SW_VOSEL_MASK),
		(PMIC_RG_BUCK_VMODEM_SP_SW_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_sp_sw_vosel_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_SP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_SP_SW_VOSEL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_sp_sw_vosel_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_SP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_SP_SW_VOSEL_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_sp_on_vosel_mux_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_SP_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_SP_ON_VOSEL_MUX_SEL_MASK),
		(PMIC_RG_BUCK_VMODEM_SP_ON_VOSEL_MUX_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_sp_on_vosel_mux_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_SP_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_SP_ON_VOSEL_MUX_SEL_MASK),
		(PMIC_RG_BUCK_VMODEM_SP_ON_VOSEL_MUX_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_oc_deg_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_OC_DEG_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_OC_DEG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_oc_deg_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_OC_CFG),
		(&val),
		(PMIC_RG_BUCK_VMODEM_OC_DEG_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_OC_DEG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_oc_wnd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_OC_WND_MASK),
		(PMIC_RG_BUCK_VMODEM_OC_WND_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_oc_thd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VMODEM_OC_THD_MASK),
		(PMIC_RG_BUCK_VMODEM_OC_THD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vmodem_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DBG0),
		(&val),
		(PMIC_DA_VMODEM_VOSEL_MASK),
		(PMIC_DA_VMODEM_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmodem_vosel_gray(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DBG0),
		(&val),
		(PMIC_DA_VMODEM_VOSEL_GRAY_MASK),
		(PMIC_DA_VMODEM_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmodem_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_EN_MASK),
		(PMIC_DA_VMODEM_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmodem_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_STB_MASK),
		(PMIC_DA_VMODEM_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmodem_vsleep_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_VSLEEP_SEL_MASK),
		(PMIC_DA_VMODEM_VSLEEP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmodem_r2r_pdn(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_R2R_PDN_MASK),
		(PMIC_DA_VMODEM_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmodem_dvs_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_DVS_EN_MASK),
		(PMIC_DA_VMODEM_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmodem_dvs_down(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_DVS_DOWN_MASK),
		(PMIC_DA_VMODEM_DVS_DOWN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmodem_ssh(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_SSH_MASK),
		(PMIC_DA_VMODEM_SSH_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmodem_minfreq_discharge(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DBG1),
		(&val),
		(PMIC_DA_VMODEM_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VMODEM_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_oc_flag_clr_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_DBG2),
		(val),
		(PMIC_RG_BUCK_VMODEM_OC_FLAG_CLR_SEL_MASK),
		(PMIC_RG_BUCK_VMODEM_OC_FLAG_CLR_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_osc_sel_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_DBG2),
		(val),
		(PMIC_RG_BUCK_VMODEM_OSC_SEL_DIS_MASK),
		(PMIC_RG_BUCK_VMODEM_OSC_SEL_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_DBG2),
		(val),
		(PMIC_RG_BUCK_VMODEM_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VMODEM_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_ck_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_DBG2),
		(val),
		(PMIC_RG_BUCK_VMODEM_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_ck_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_DBG2),
		(&val),
		(PMIC_RG_BUCK_VMODEM_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VMODEM_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vmodem_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VMODEM_ELR0),
		(val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vmodem_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VMODEM_ELR0),
		(&val),
		(PMIC_RG_BUCK_VMODEM_VOSEL_MASK),
		(PMIC_RG_BUCK_VMODEM_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vs1_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DSN_ID),
		(&val),
		(PMIC_BUCK_VS1_ANA_ID_MASK),
		(PMIC_BUCK_VS1_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vs1_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DSN_ID),
		(&val),
		(PMIC_BUCK_VS1_DIG_ID_MASK),
		(PMIC_BUCK_VS1_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vs1_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DSN_REV0),
		(&val),
		(PMIC_BUCK_VS1_ANA_MINOR_REV_MASK),
		(PMIC_BUCK_VS1_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vs1_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DSN_REV0),
		(&val),
		(PMIC_BUCK_VS1_ANA_MAJOR_REV_MASK),
		(PMIC_BUCK_VS1_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vs1_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DSN_REV0),
		(&val),
		(PMIC_BUCK_VS1_DIG_MINOR_REV_MASK),
		(PMIC_BUCK_VS1_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vs1_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DSN_REV0),
		(&val),
		(PMIC_BUCK_VS1_DIG_MAJOR_REV_MASK),
		(PMIC_BUCK_VS1_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vs1_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DSN_DBI),
		(&val),
		(PMIC_BUCK_VS1_DSN_CBS_MASK),
		(PMIC_BUCK_VS1_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vs1_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DSN_DBI),
		(&val),
		(PMIC_BUCK_VS1_DSN_BIX_MASK),
		(PMIC_BUCK_VS1_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vs1_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DSN_DBI),
		(&val),
		(PMIC_BUCK_VS1_DSN_ESP_MASK),
		(PMIC_BUCK_VS1_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vs1_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DSN_DXI),
		(&val),
		(PMIC_BUCK_VS1_DSN_FPI_MASK),
		(PMIC_BUCK_VS1_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CON0),
		(val),
		(PMIC_RG_BUCK_VS1_EN_MASK),
		(PMIC_RG_BUCK_VS1_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_CON0),
		(&val),
		(PMIC_RG_BUCK_VS1_EN_MASK),
		(PMIC_RG_BUCK_VS1_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CON0),
		(val),
		(PMIC_RG_BUCK_VS1_LP_MASK),
		(PMIC_RG_BUCK_VS1_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_vosel_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CON1),
		(val),
		(PMIC_RG_BUCK_VS1_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_vosel_sleep(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_CON1),
		(&val),
		(PMIC_RG_BUCK_VS1_VOSEL_SLEEP_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CFG0),
		(val),
		(PMIC_RG_BUCK_VS1_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VS1_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_sfchg_fen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CFG0),
		(val),
		(PMIC_RG_BUCK_VS1_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VS1_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CFG0),
		(val),
		(PMIC_RG_BUCK_VS1_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VS1_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_sfchg_ren(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CFG0),
		(val),
		(PMIC_RG_BUCK_VS1_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VS1_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_dvs_en_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CFG1),
		(val),
		(PMIC_RG_BUCK_VS1_DVS_EN_TD_MASK),
		(PMIC_RG_BUCK_VS1_DVS_EN_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_dvs_en_td(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_CFG1),
		(&val),
		(PMIC_RG_BUCK_VS1_DVS_EN_TD_MASK),
		(PMIC_RG_BUCK_VS1_DVS_EN_TD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_dvs_en_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CFG1),
		(val),
		(PMIC_RG_BUCK_VS1_DVS_EN_CTRL_MASK),
		(PMIC_RG_BUCK_VS1_DVS_EN_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_dvs_en_ctrl(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_CFG1),
		(&val),
		(PMIC_RG_BUCK_VS1_DVS_EN_CTRL_MASK),
		(PMIC_RG_BUCK_VS1_DVS_EN_CTRL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_dvs_en_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CFG1),
		(val),
		(PMIC_RG_BUCK_VS1_DVS_EN_ONCE_MASK),
		(PMIC_RG_BUCK_VS1_DVS_EN_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_dvs_en_once(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_CFG1),
		(&val),
		(PMIC_RG_BUCK_VS1_DVS_EN_ONCE_MASK),
		(PMIC_RG_BUCK_VS1_DVS_EN_ONCE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_dvs_down_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CFG1),
		(val),
		(PMIC_RG_BUCK_VS1_DVS_DOWN_TD_MASK),
		(PMIC_RG_BUCK_VS1_DVS_DOWN_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_dvs_down_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CFG1),
		(val),
		(PMIC_RG_BUCK_VS1_DVS_DOWN_CTRL_MASK),
		(PMIC_RG_BUCK_VS1_DVS_DOWN_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_dvs_down_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_CFG1),
		(val),
		(PMIC_RG_BUCK_VS1_DVS_DOWN_ONCE_MASK),
		(PMIC_RG_BUCK_VS1_DVS_DOWN_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_SW_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW0_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW1_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_OP_EN),
		(val),
		(PMIC_RG_BUCK_VS1_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_OP_EN),
		(&val),
		(PMIC_RG_BUCK_VS1_HW2_OP_EN_MASK),
		(PMIC_RG_BUCK_VS1_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW0_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW1_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_OP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_OP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_HW2_OP_CFG_MASK),
		(PMIC_RG_BUCK_VS1_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_sp_sw_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_SP_CON),
		(val),
		(PMIC_RG_BUCK_VS1_SP_SW_VOSEL_MASK),
		(PMIC_RG_BUCK_VS1_SP_SW_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_sp_sw_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_SP_CON),
		(&val),
		(PMIC_RG_BUCK_VS1_SP_SW_VOSEL_MASK),
		(PMIC_RG_BUCK_VS1_SP_SW_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_sp_sw_vosel_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_SP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_BUCK_VS1_SP_SW_VOSEL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_sp_sw_vosel_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_SP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_BUCK_VS1_SP_SW_VOSEL_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_sp_on_vosel_mux_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_SP_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_SP_ON_VOSEL_MUX_SEL_MASK),
		(PMIC_RG_BUCK_VS1_SP_ON_VOSEL_MUX_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_sp_on_vosel_mux_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_SP_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_SP_ON_VOSEL_MUX_SEL_MASK),
		(PMIC_RG_BUCK_VS1_SP_ON_VOSEL_MUX_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_oc_deg_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_OC_DEG_EN_MASK),
		(PMIC_RG_BUCK_VS1_OC_DEG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_oc_deg_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_OC_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_OC_DEG_EN_MASK),
		(PMIC_RG_BUCK_VS1_OC_DEG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_oc_wnd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_OC_WND_MASK),
		(PMIC_RG_BUCK_VS1_OC_WND_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_oc_thd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_OC_THD_MASK),
		(PMIC_RG_BUCK_VS1_OC_THD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vs1_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DBG0),
		(&val),
		(PMIC_DA_VS1_VOSEL_MASK),
		(PMIC_DA_VS1_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vs1_vosel_gray(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DBG0),
		(&val),
		(PMIC_DA_VS1_VOSEL_GRAY_MASK),
		(PMIC_DA_VS1_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vs1_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_EN_MASK),
		(PMIC_DA_VS1_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vs1_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_STB_MASK),
		(PMIC_DA_VS1_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vs1_vsleep_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_VSLEEP_SEL_MASK),
		(PMIC_DA_VS1_VSLEEP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vs1_r2r_pdn(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_R2R_PDN_MASK),
		(PMIC_DA_VS1_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vs1_dvs_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_DVS_EN_MASK),
		(PMIC_DA_VS1_DVS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vs1_minfreq_discharge(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DBG1),
		(&val),
		(PMIC_DA_VS1_MINFREQ_DISCHARGE_MASK),
		(PMIC_DA_VS1_MINFREQ_DISCHARGE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_oc_flag_clr_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_DBG2),
		(val),
		(PMIC_RG_BUCK_VS1_OC_FLAG_CLR_SEL_MASK),
		(PMIC_RG_BUCK_VS1_OC_FLAG_CLR_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_osc_sel_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_DBG2),
		(val),
		(PMIC_RG_BUCK_VS1_OSC_SEL_DIS_MASK),
		(PMIC_RG_BUCK_VS1_OSC_SEL_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_DBG2),
		(val),
		(PMIC_RG_BUCK_VS1_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VS1_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_ck_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_DBG2),
		(val),
		(PMIC_RG_BUCK_VS1_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VS1_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_ck_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_DBG2),
		(&val),
		(PMIC_RG_BUCK_VS1_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VS1_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_voter_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_VOTER),
		(val),
		(PMIC_RG_BUCK_VS1_VOTER_EN_MASK),
		(PMIC_RG_BUCK_VS1_VOTER_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_voter_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_VOTER),
		(&val),
		(PMIC_RG_BUCK_VS1_VOTER_EN_MASK),
		(PMIC_RG_BUCK_VS1_VOTER_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_voter_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_VOTER_CFG),
		(val),
		(PMIC_RG_BUCK_VS1_VOTER_VOSEL_MASK),
		(PMIC_RG_BUCK_VS1_VOTER_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_voter_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_VOTER_CFG),
		(&val),
		(PMIC_RG_BUCK_VS1_VOTER_VOSEL_MASK),
		(PMIC_RG_BUCK_VS1_VOTER_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vs1_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VS1_ELR0),
		(val),
		(PMIC_RG_BUCK_VS1_VOSEL_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vs1_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VS1_ELR0),
		(&val),
		(PMIC_RG_BUCK_VS1_VOSEL_MASK),
		(PMIC_RG_BUCK_VS1_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vpa_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DSN_ID),
		(&val),
		(PMIC_BUCK_VPA_ANA_ID_MASK),
		(PMIC_BUCK_VPA_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vpa_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DSN_ID),
		(&val),
		(PMIC_BUCK_VPA_DIG_ID_MASK),
		(PMIC_BUCK_VPA_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vpa_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DSN_REV0),
		(&val),
		(PMIC_BUCK_VPA_ANA_MINOR_REV_MASK),
		(PMIC_BUCK_VPA_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vpa_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DSN_REV0),
		(&val),
		(PMIC_BUCK_VPA_ANA_MAJOR_REV_MASK),
		(PMIC_BUCK_VPA_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vpa_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DSN_REV0),
		(&val),
		(PMIC_BUCK_VPA_DIG_MINOR_REV_MASK),
		(PMIC_BUCK_VPA_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vpa_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DSN_REV0),
		(&val),
		(PMIC_BUCK_VPA_DIG_MAJOR_REV_MASK),
		(PMIC_BUCK_VPA_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vpa_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DSN_DBI),
		(&val),
		(PMIC_BUCK_VPA_DSN_CBS_MASK),
		(PMIC_BUCK_VPA_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vpa_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DSN_DBI),
		(&val),
		(PMIC_BUCK_VPA_DSN_BIX_MASK),
		(PMIC_BUCK_VPA_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vpa_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DSN_DBI),
		(&val),
		(PMIC_BUCK_VPA_DSN_ESP_MASK),
		(PMIC_BUCK_VPA_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_vpa_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DSN_DXI),
		(&val),
		(PMIC_BUCK_VPA_DSN_FPI_MASK),
		(PMIC_BUCK_VPA_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CON0),
		(val),
		(PMIC_RG_BUCK_VPA_EN_MASK),
		(PMIC_RG_BUCK_VPA_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_CON0),
		(&val),
		(PMIC_RG_BUCK_VPA_EN_MASK),
		(PMIC_RG_BUCK_VPA_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CON1),
		(val),
		(PMIC_RG_BUCK_VPA_VOSEL_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_CON1),
		(&val),
		(PMIC_RG_BUCK_VPA_VOSEL_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CFG0),
		(val),
		(PMIC_RG_BUCK_VPA_SFCHG_FRATE_MASK),
		(PMIC_RG_BUCK_VPA_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_sfchg_fen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CFG0),
		(val),
		(PMIC_RG_BUCK_VPA_SFCHG_FEN_MASK),
		(PMIC_RG_BUCK_VPA_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CFG0),
		(val),
		(PMIC_RG_BUCK_VPA_SFCHG_RRATE_MASK),
		(PMIC_RG_BUCK_VPA_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_sfchg_ren(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CFG0),
		(val),
		(PMIC_RG_BUCK_VPA_SFCHG_REN_MASK),
		(PMIC_RG_BUCK_VPA_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_dvs_transt_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CFG1),
		(val),
		(PMIC_RG_BUCK_VPA_DVS_TRANST_TD_MASK),
		(PMIC_RG_BUCK_VPA_DVS_TRANST_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_dvs_transt_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CFG1),
		(val),
		(PMIC_RG_BUCK_VPA_DVS_TRANST_CTRL_MASK),
		(PMIC_RG_BUCK_VPA_DVS_TRANST_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_dvs_transt_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CFG1),
		(val),
		(PMIC_RG_BUCK_VPA_DVS_TRANST_ONCE_MASK),
		(PMIC_RG_BUCK_VPA_DVS_TRANST_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_dvs_bw_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CFG1),
		(val),
		(PMIC_RG_BUCK_VPA_DVS_BW_TD_MASK),
		(PMIC_RG_BUCK_VPA_DVS_BW_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_dvs_bw_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CFG1),
		(val),
		(PMIC_RG_BUCK_VPA_DVS_BW_CTRL_MASK),
		(PMIC_RG_BUCK_VPA_DVS_BW_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_dvs_bw_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_CFG1),
		(val),
		(PMIC_RG_BUCK_VPA_DVS_BW_ONCE_MASK),
		(PMIC_RG_BUCK_VPA_DVS_BW_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_oc_deg_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VPA_OC_DEG_EN_MASK),
		(PMIC_RG_BUCK_VPA_OC_DEG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_oc_deg_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_OC_CFG),
		(&val),
		(PMIC_RG_BUCK_VPA_OC_DEG_EN_MASK),
		(PMIC_RG_BUCK_VPA_OC_DEG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_oc_wnd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VPA_OC_WND_MASK),
		(PMIC_RG_BUCK_VPA_OC_WND_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_oc_thd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_OC_CFG),
		(val),
		(PMIC_RG_BUCK_VPA_OC_THD_MASK),
		(PMIC_RG_BUCK_VPA_OC_THD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vpa_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DBG0),
		(&val),
		(PMIC_DA_VPA_VOSEL_MASK),
		(PMIC_DA_VPA_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vpa_vosel_gray(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DBG0),
		(&val),
		(PMIC_DA_VPA_VOSEL_GRAY_MASK),
		(PMIC_DA_VPA_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vpa_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DBG1),
		(&val),
		(PMIC_DA_VPA_EN_MASK),
		(PMIC_DA_VPA_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vpa_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DBG1),
		(&val),
		(PMIC_DA_VPA_STB_MASK),
		(PMIC_DA_VPA_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vpa_dvs_transt(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DBG1),
		(&val),
		(PMIC_DA_VPA_DVS_TRANST_MASK),
		(PMIC_DA_VPA_DVS_TRANST_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vpa_dvs_bw(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DBG1),
		(&val),
		(PMIC_DA_VPA_DVS_BW_MASK),
		(PMIC_DA_VPA_DVS_BW_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_oc_flag_clr_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_DBG2),
		(val),
		(PMIC_RG_BUCK_VPA_OC_FLAG_CLR_SEL_MASK),
		(PMIC_RG_BUCK_VPA_OC_FLAG_CLR_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_osc_sel_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_DBG2),
		(val),
		(PMIC_RG_BUCK_VPA_OSC_SEL_DIS_MASK),
		(PMIC_RG_BUCK_VPA_OSC_SEL_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_DBG2),
		(val),
		(PMIC_RG_BUCK_VPA_CK_SW_MODE_MASK),
		(PMIC_RG_BUCK_VPA_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_ck_sw_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_DBG2),
		(val),
		(PMIC_RG_BUCK_VPA_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPA_CK_SW_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_ck_sw_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DBG2),
		(&val),
		(PMIC_RG_BUCK_VPA_CK_SW_EN_MASK),
		(PMIC_RG_BUCK_VPA_CK_SW_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_vosel_dlc011(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_DLC_CON0),
		(val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC011_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC011_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_vosel_dlc011(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DLC_CON0),
		(&val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC011_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC011_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_vosel_dlc111(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_DLC_CON0),
		(val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC111_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC111_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_vosel_dlc111(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DLC_CON0),
		(&val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC111_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC111_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_vosel_dlc001(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_DLC_CON1),
		(val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC001_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC001_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_vosel_dlc001(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DLC_CON1),
		(&val),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC001_MASK),
		(PMIC_RG_BUCK_VPA_VOSEL_DLC001_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_dlc_map_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_DLC_CON2),
		(val),
		(PMIC_RG_BUCK_VPA_DLC_MAP_EN_MASK),
		(PMIC_RG_BUCK_VPA_DLC_MAP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_dlc_map_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DLC_CON2),
		(&val),
		(PMIC_RG_BUCK_VPA_DLC_MAP_EN_MASK),
		(PMIC_RG_BUCK_VPA_DLC_MAP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_dlc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_DLC_CON2),
		(val),
		(PMIC_RG_BUCK_VPA_DLC_MASK),
		(PMIC_RG_BUCK_VPA_DLC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vpa_dlc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_DLC_CON2),
		(&val),
		(PMIC_DA_VPA_DLC_MASK),
		(PMIC_DA_VPA_DLC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_buck_vpa_msfg_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_BUCK_VPA_MSFG_CON0),
		(val),
		(PMIC_RG_BUCK_VPA_MSFG_EN_MASK),
		(PMIC_RG_BUCK_VPA_MSFG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_buck_vpa_msfg_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_VPA_MSFG_CON0),
		(&val),
		(PMIC_RG_BUCK_VPA_MSFG_EN_MASK),
		(PMIC_RG_BUCK_VPA_MSFG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_ana_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_ANA_DSN_ID),
		(&val),
		(PMIC_BUCK_ANA_ANA_ID_MASK),
		(PMIC_BUCK_ANA_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_ana_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_ANA_DSN_ID),
		(&val),
		(PMIC_BUCK_ANA_DIG_ID_MASK),
		(PMIC_BUCK_ANA_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_ana_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_ANA_DSN_REV0),
		(&val),
		(PMIC_BUCK_ANA_ANA_MINOR_REV_MASK),
		(PMIC_BUCK_ANA_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_ana_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_ANA_DSN_REV0),
		(&val),
		(PMIC_BUCK_ANA_ANA_MAJOR_REV_MASK),
		(PMIC_BUCK_ANA_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_ana_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_ANA_DSN_REV0),
		(&val),
		(PMIC_BUCK_ANA_DIG_MINOR_REV_MASK),
		(PMIC_BUCK_ANA_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_ana_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_ANA_DSN_REV0),
		(&val),
		(PMIC_BUCK_ANA_DIG_MAJOR_REV_MASK),
		(PMIC_BUCK_ANA_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_ana_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_ANA_DSN_DBI),
		(&val),
		(PMIC_BUCK_ANA_DSN_CBS_MASK),
		(PMIC_BUCK_ANA_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_ana_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_ANA_DSN_DBI),
		(&val),
		(PMIC_BUCK_ANA_DSN_BIX_MASK),
		(PMIC_BUCK_ANA_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_ana_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_ANA_DSN_DBI),
		(&val),
		(PMIC_BUCK_ANA_DSN_ESP_MASK),
		(PMIC_BUCK_ANA_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_buck_ana_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_BUCK_ANA_DSN_FPI),
		(&val),
		(PMIC_BUCK_ANA_DSN_FPI_MASK),
		(PMIC_BUCK_ANA_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_smps_testmode_b(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON0),
		(val),
		(PMIC_RG_SMPS_TESTMODE_B_MASK),
		(PMIC_RG_SMPS_TESTMODE_B_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_bursth(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON0),
		(val),
		(PMIC_RG_VPA_BURSTH_MASK),
		(PMIC_RG_VPA_BURSTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_burstl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON0),
		(val),
		(PMIC_RG_VPA_BURSTL_MASK),
		(PMIC_RG_VPA_BURSTL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_triml(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON1),
		(val),
		(PMIC_RG_VCORE_TRIML_MASK),
		(PMIC_RG_VCORE_TRIML_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_sleep_voltage(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON1),
		(val),
		(PMIC_RG_VCORE_SLEEP_VOLTAGE_MASK),
		(PMIC_RG_VCORE_SLEEP_VOLTAGE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_sleep_voltage(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON1),
		(val),
		(PMIC_RG_VMODEM_SLEEP_VOLTAGE_MASK),
		(PMIC_RG_VMODEM_SLEEP_VOLTAGE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_triml(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON1),
		(val),
		(PMIC_RG_VPROC_TRIML_MASK),
		(PMIC_RG_VPROC_TRIML_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_sleep_voltage(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON2),
		(val),
		(PMIC_RG_VPROC_SLEEP_VOLTAGE_MASK),
		(PMIC_RG_VPROC_SLEEP_VOLTAGE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_proc_sleep_voltage(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON2),
		(val),
		(PMIC_RG_VSRAM_PROC_SLEEP_VOLTAGE_MASK),
		(PMIC_RG_VSRAM_PROC_SLEEP_VOLTAGE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_others_sleep_voltage(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON2),
		(val),
		(PMIC_RG_VSRAM_OTHERS_SLEEP_VOLTAGE_MASK),
		(PMIC_RG_VSRAM_OTHERS_SLEEP_VOLTAGE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_smps_ivgd_det(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON2),
		(val),
		(PMIC_RG_SMPS_IVGD_DET_MASK),
		(PMIC_RG_SMPS_IVGD_DET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_autok_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ANA_CON2),
		(val),
		(PMIC_RG_AUTOK_RST_MASK),
		(PMIC_RG_AUTOK_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_fpwm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(val),
		(PMIC_RG_VCORE_FPWM_MASK),
		(PMIC_RG_VCORE_FPWM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_fpwm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(val),
		(PMIC_RG_VPROC_FPWM_MASK),
		(PMIC_RG_VPROC_FPWM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(val),
		(PMIC_RG_VCORE_NDIS_EN_MASK),
		(PMIC_RG_VCORE_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcore_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(&val),
		(PMIC_RG_VCORE_NDIS_EN_MASK),
		(PMIC_RG_VCORE_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vproc_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(val),
		(PMIC_RG_VPROC_NDIS_EN_MASK),
		(PMIC_RG_VPROC_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vproc_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(&val),
		(PMIC_RG_VPROC_NDIS_EN_MASK),
		(PMIC_RG_VPROC_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcore_fcot(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(val),
		(PMIC_RG_VCORE_FCOT_MASK),
		(PMIC_RG_VCORE_FCOT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_fcot(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(val),
		(PMIC_RG_VPROC_FCOT_MASK),
		(PMIC_RG_VPROC_FCOT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcorevproc_tmdl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(val),
		(PMIC_RG_VCOREVPROC_TMDL_MASK),
		(PMIC_RG_VCOREVPROC_TMDL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_tbdis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(val),
		(PMIC_RG_VCORE_TBDIS_MASK),
		(PMIC_RG_VCORE_TBDIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_tbdis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(val),
		(PMIC_RG_VPROC_TBDIS_MASK),
		(PMIC_RG_VPROC_TBDIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_vdiffoff(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(val),
		(PMIC_RG_VCORE_VDIFFOFF_MASK),
		(PMIC_RG_VCORE_VDIFFOFF_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_vdiffoff(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON0),
		(val),
		(PMIC_RG_VPROC_VDIFFOFF_MASK),
		(PMIC_RG_VPROC_VDIFFOFF_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_rcomp0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON1),
		(val),
		(PMIC_RG_VCORE_RCOMP0_MASK),
		(PMIC_RG_VCORE_RCOMP0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_rcomp1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON1),
		(val),
		(PMIC_RG_VCORE_RCOMP1_MASK),
		(PMIC_RG_VCORE_RCOMP1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_ccomp0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON1),
		(val),
		(PMIC_RG_VCORE_CCOMP0_MASK),
		(PMIC_RG_VCORE_CCOMP0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_ccomp1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON1),
		(val),
		(PMIC_RG_VCORE_CCOMP1_MASK),
		(PMIC_RG_VCORE_CCOMP1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_ramp_slp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON1),
		(val),
		(PMIC_RG_VCORE_RAMP_SLP_MASK),
		(PMIC_RG_VCORE_RAMP_SLP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_rcomp0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON2),
		(val),
		(PMIC_RG_VPROC_RCOMP0_MASK),
		(PMIC_RG_VPROC_RCOMP0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_rcomp1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON2),
		(val),
		(PMIC_RG_VPROC_RCOMP1_MASK),
		(PMIC_RG_VPROC_RCOMP1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_ccomp0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON2),
		(val),
		(PMIC_RG_VPROC_CCOMP0_MASK),
		(PMIC_RG_VPROC_CCOMP0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_ccomp1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON2),
		(val),
		(PMIC_RG_VPROC_CCOMP1_MASK),
		(PMIC_RG_VPROC_CCOMP1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_ramp_slp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON2),
		(val),
		(PMIC_RG_VPROC_RAMP_SLP_MASK),
		(PMIC_RG_VPROC_RAMP_SLP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_rcs(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON3),
		(val),
		(PMIC_RG_VCORE_RCS_MASK),
		(PMIC_RG_VCORE_RCS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_rcs(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON3),
		(val),
		(PMIC_RG_VPROC_RCS_MASK),
		(PMIC_RG_VPROC_RCS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_rcb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON3),
		(val),
		(PMIC_RG_VCORE_RCB_MASK),
		(PMIC_RG_VCORE_RCB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_rcb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON3),
		(val),
		(PMIC_RG_VPROC_RCB_MASK),
		(PMIC_RG_VPROC_RCB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_tb_width(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON4),
		(val),
		(PMIC_RG_VCORE_TB_WIDTH_MASK),
		(PMIC_RG_VCORE_TB_WIDTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_tb_width(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON4),
		(val),
		(PMIC_RG_VPROC_TB_WIDTH_MASK),
		(PMIC_RG_VPROC_TB_WIDTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_ug_sr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON4),
		(val),
		(PMIC_RG_VCORE_UG_SR_MASK),
		(PMIC_RG_VCORE_UG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_lg_sr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON4),
		(val),
		(PMIC_RG_VCORE_LG_SR_MASK),
		(PMIC_RG_VCORE_LG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_ug_sr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON4),
		(val),
		(PMIC_RG_VPROC_UG_SR_MASK),
		(PMIC_RG_VPROC_UG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_lg_sr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON4),
		(val),
		(PMIC_RG_VPROC_LG_SR_MASK),
		(PMIC_RG_VPROC_LG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_pfm_ton(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON4),
		(val),
		(PMIC_RG_VCORE_PFM_TON_MASK),
		(PMIC_RG_VCORE_PFM_TON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_pfm_ton(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON5),
		(val),
		(PMIC_RG_VPROC_PFM_TON_MASK),
		(PMIC_RG_VPROC_PFM_TON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rgs_vcore_oc_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCORE_VPROC_ANA_CON5),
		(&val),
		(PMIC_RGS_VCORE_OC_STATUS_MASK),
		(PMIC_RGS_VCORE_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vproc_oc_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCORE_VPROC_ANA_CON5),
		(&val),
		(PMIC_RGS_VPROC_OC_STATUS_MASK),
		(PMIC_RGS_VPROC_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vcore_preoc_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCORE_VPROC_ANA_CON5),
		(&val),
		(PMIC_RGS_VCORE_PREOC_STATUS_MASK),
		(PMIC_RGS_VCORE_PREOC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vcore_dig_mon(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCORE_VPROC_ANA_CON5),
		(&val),
		(PMIC_RGS_VCORE_DIG_MON_MASK),
		(PMIC_RGS_VCORE_DIG_MON_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vproc_dig_mon(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCORE_VPROC_ANA_CON6),
		(&val),
		(PMIC_RGS_VPROC_DIG_MON_MASK),
		(PMIC_RGS_VPROC_DIG_MON_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcore_tran_bst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON7),
		(val),
		(PMIC_RG_VCORE_TRAN_BST_MASK),
		(PMIC_RG_VCORE_TRAN_BST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_tran_bst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON7),
		(val),
		(PMIC_RG_VPROC_TRAN_BST_MASK),
		(PMIC_RG_VPROC_TRAN_BST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_cotramp_slp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON7),
		(val),
		(PMIC_RG_VCORE_COTRAMP_SLP_MASK),
		(PMIC_RG_VCORE_COTRAMP_SLP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_cotramp_slp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON8),
		(val),
		(PMIC_RG_VPROC_COTRAMP_SLP_MASK),
		(PMIC_RG_VPROC_COTRAMP_SLP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_sleep_time(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON8),
		(val),
		(PMIC_RG_VCORE_SLEEP_TIME_MASK),
		(PMIC_RG_VCORE_SLEEP_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_sleep_time(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON8),
		(val),
		(PMIC_RG_VPROC_SLEEP_TIME_MASK),
		(PMIC_RG_VPROC_SLEEP_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_vreftb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON8),
		(val),
		(PMIC_RG_VCORE_VREFTB_MASK),
		(PMIC_RG_VCORE_VREFTB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_vreftb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON8),
		(val),
		(PMIC_RG_VPROC_VREFTB_MASK),
		(PMIC_RG_VPROC_VREFTB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_fugon(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON8),
		(val),
		(PMIC_RG_VCORE_FUGON_MASK),
		(PMIC_RG_VCORE_FUGON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_fugon(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON8),
		(val),
		(PMIC_RG_VPROC_FUGON_MASK),
		(PMIC_RG_VPROC_FUGON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_flgon(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON8),
		(val),
		(PMIC_RG_VCORE_FLGON_MASK),
		(PMIC_RG_VCORE_FLGON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_flgon(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON8),
		(val),
		(PMIC_RG_VPROC_FLGON_MASK),
		(PMIC_RG_VPROC_FLGON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON9),
		(val),
		(PMIC_RG_VCORE_RSV_MASK),
		(PMIC_RG_VCORE_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON10),
		(val),
		(PMIC_RG_VPROC_RSV_MASK),
		(PMIC_RG_VPROC_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcorevproc_disautok(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON11),
		(val),
		(PMIC_RG_VCOREVPROC_DISAUTOK_MASK),
		(PMIC_RG_VCOREVPROC_DISAUTOK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rgs_vcore_pfm_flag(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCORE_VPROC_ANA_CON11),
		(&val),
		(PMIC_RGS_VCORE_PFM_FLAG_MASK),
		(PMIC_RGS_VCORE_PFM_FLAG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vproc_pfm_flag(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCORE_VPROC_ANA_CON11),
		(&val),
		(PMIC_RGS_VPROC_PFM_FLAG_MASK),
		(PMIC_RGS_VPROC_PFM_FLAG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vproc_nonaudible_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON11),
		(val),
		(PMIC_RG_VPROC_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VPROC_NONAUDIBLE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vproc_nonaudible_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCORE_VPROC_ANA_CON11),
		(&val),
		(PMIC_RG_VPROC_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VPROC_NONAUDIBLE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcore_nonaudible_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ANA_CON11),
		(val),
		(PMIC_RG_VCORE_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VCORE_NONAUDIBLE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcore_nonaudible_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCORE_VPROC_ANA_CON11),
		(&val),
		(PMIC_RG_VCORE_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VCORE_NONAUDIBLE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vmodem_fcot(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON0),
		(val),
		(PMIC_RG_VMODEM_FCOT_MASK),
		(PMIC_RG_VMODEM_FCOT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_rcomp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON0),
		(val),
		(PMIC_RG_VMODEM_RCOMP_MASK),
		(PMIC_RG_VMODEM_RCOMP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_tb_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON0),
		(val),
		(PMIC_RG_VMODEM_TB_DIS_MASK),
		(PMIC_RG_VMODEM_TB_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_dispg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON0),
		(val),
		(PMIC_RG_VMODEM_DISPG_MASK),
		(PMIC_RG_VMODEM_DISPG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_fpwm(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON0),
		(val),
		(PMIC_RG_VMODEM_FPWM_MASK),
		(PMIC_RG_VMODEM_FPWM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_pfm_ton(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON0),
		(val),
		(PMIC_RG_VMODEM_PFM_TON_MASK),
		(PMIC_RG_VMODEM_PFM_TON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_pwmramp_slp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON0),
		(val),
		(PMIC_RG_VMODEM_PWMRAMP_SLP_MASK),
		(PMIC_RG_VMODEM_PWMRAMP_SLP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_cotramp_slp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON1),
		(val),
		(PMIC_RG_VMODEM_COTRAMP_SLP_MASK),
		(PMIC_RG_VMODEM_COTRAMP_SLP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_rcs(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON1),
		(val),
		(PMIC_RG_VMODEM_RCS_MASK),
		(PMIC_RG_VMODEM_RCS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_sleep_time(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON1),
		(val),
		(PMIC_RG_VMODEM_SLEEP_TIME_MASK),
		(PMIC_RG_VMODEM_SLEEP_TIME_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_nlim_gating(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON1),
		(val),
		(PMIC_RG_VMODEM_NLIM_GATING_MASK),
		(PMIC_RG_VMODEM_NLIM_GATING_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_vdiff_off(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON1),
		(val),
		(PMIC_RG_VMODEM_VDIFF_OFF_MASK),
		(PMIC_RG_VMODEM_VDIFF_OFF_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_vrefup(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON1),
		(val),
		(PMIC_RG_VMODEM_VREFUP_MASK),
		(PMIC_RG_VMODEM_VREFUP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_tb_width(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON1),
		(val),
		(PMIC_RG_VMODEM_TB_WIDTH_MASK),
		(PMIC_RG_VMODEM_TB_WIDTH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_ug_sr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON2),
		(val),
		(PMIC_RG_VMODEM_UG_SR_MASK),
		(PMIC_RG_VMODEM_UG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_lg_sr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON2),
		(val),
		(PMIC_RG_VMODEM_LG_SR_MASK),
		(PMIC_RG_VMODEM_LG_SR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_ccomp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON2),
		(val),
		(PMIC_RG_VMODEM_CCOMP_MASK),
		(PMIC_RG_VMODEM_CCOMP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON2),
		(val),
		(PMIC_RG_VMODEM_NDIS_EN_MASK),
		(PMIC_RG_VMODEM_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vmodem_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VMODEM_ANA_CON2),
		(&val),
		(PMIC_RG_VMODEM_NDIS_EN_MASK),
		(PMIC_RG_VMODEM_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vmodem_tmdl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON2),
		(val),
		(PMIC_RG_VMODEM_TMDL_MASK),
		(PMIC_RG_VMODEM_TMDL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON3),
		(val),
		(PMIC_RG_VMODEM_RSV_MASK),
		(PMIC_RG_VMODEM_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_fugon(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON4),
		(val),
		(PMIC_RG_VMODEM_FUGON_MASK),
		(PMIC_RG_VMODEM_FUGON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_flgon(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON4),
		(val),
		(PMIC_RG_VMODEM_FLGON_MASK),
		(PMIC_RG_VMODEM_FLGON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_vdiffpfm_off(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON4),
		(val),
		(PMIC_RG_VMODEM_VDIFFPFM_OFF_MASK),
		(PMIC_RG_VMODEM_VDIFFPFM_OFF_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rgs_vmodem_oc_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VMODEM_ANA_CON4),
		(&val),
		(PMIC_RGS_VMODEM_OC_STATUS_MASK),
		(PMIC_RGS_VMODEM_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vmodem_enpwm_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VMODEM_ANA_CON4),
		(&val),
		(PMIC_RGS_VMODEM_ENPWM_STATUS_MASK),
		(PMIC_RGS_VMODEM_ENPWM_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vmodem_disautok(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON4),
		(val),
		(PMIC_RG_VMODEM_DISAUTOK_MASK),
		(PMIC_RG_VMODEM_DISAUTOK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rgs_vmodem_trimok_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VMODEM_ANA_CON4),
		(&val),
		(PMIC_RGS_VMODEM_TRIMOK_STATUS_MASK),
		(PMIC_RGS_VMODEM_TRIMOK_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vmodem_dig_mon(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VMODEM_ANA_CON4),
		(&val),
		(PMIC_RGS_VMODEM_DIG_MON_MASK),
		(PMIC_RGS_VMODEM_DIG_MON_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vmodem_nonaudible_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ANA_CON4),
		(val),
		(PMIC_RG_VMODEM_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VMODEM_NONAUDIBLE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vmodem_nonaudible_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VMODEM_ANA_CON4),
		(&val),
		(PMIC_RG_VMODEM_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VMODEM_NONAUDIBLE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vmodem_pfm_flag(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VMODEM_ANA_CON5),
		(&val),
		(PMIC_RGS_VMODEM_PFM_FLAG_MASK),
		(PMIC_RGS_VMODEM_PFM_FLAG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vs1_min_off(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON0),
		(val),
		(PMIC_RG_VS1_MIN_OFF_MASK),
		(PMIC_RG_VS1_MIN_OFF_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_vrf18_sstart_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON0),
		(val),
		(PMIC_RG_VS1_VRF18_SSTART_EN_MASK),
		(PMIC_RG_VS1_VRF18_SSTART_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vs1_vrf18_sstart_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VS1_ANA_CON0),
		(&val),
		(PMIC_RG_VS1_VRF18_SSTART_EN_MASK),
		(PMIC_RG_VS1_VRF18_SSTART_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vs1_1p35up_sel_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON0),
		(val),
		(PMIC_RG_VS1_1P35UP_SEL_EN_MASK),
		(PMIC_RG_VS1_1P35UP_SEL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vs1_1p35up_sel_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VS1_ANA_CON0),
		(&val),
		(PMIC_RG_VS1_1P35UP_SEL_EN_MASK),
		(PMIC_RG_VS1_1P35UP_SEL_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vs1_rzsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON0),
		(val),
		(PMIC_RG_VS1_RZSEL_MASK),
		(PMIC_RG_VS1_RZSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_csr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON0),
		(val),
		(PMIC_RG_VS1_CSR_MASK),
		(PMIC_RG_VS1_CSR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_csl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON0),
		(val),
		(PMIC_RG_VS1_CSL_MASK),
		(PMIC_RG_VS1_CSL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_slp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON1),
		(val),
		(PMIC_RG_VS1_SLP_MASK),
		(PMIC_RG_VS1_SLP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON1),
		(val),
		(PMIC_RG_VS1_NDIS_EN_MASK),
		(PMIC_RG_VS1_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vs1_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VS1_ANA_CON1),
		(&val),
		(PMIC_RG_VS1_NDIS_EN_MASK),
		(PMIC_RG_VS1_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vs1_csm_n(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON1),
		(val),
		(PMIC_RG_VS1_CSM_N_MASK),
		(PMIC_RG_VS1_CSM_N_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_csm_p(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON1),
		(val),
		(PMIC_RG_VS1_CSM_P_MASK),
		(PMIC_RG_VS1_CSM_P_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON2),
		(val),
		(PMIC_RG_VS1_RSV_MASK),
		(PMIC_RG_VS1_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_modeset(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON2),
		(val),
		(PMIC_RG_VS1_MODESET_MASK),
		(PMIC_RG_VS1_MODESET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_tran_bst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON3),
		(val),
		(PMIC_RG_VS1_TRAN_BST_MASK),
		(PMIC_RG_VS1_TRAN_BST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_dts_enb(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON3),
		(val),
		(PMIC_RG_VS1_DTS_ENB_MASK),
		(PMIC_RG_VS1_DTS_ENB_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vs1_dts_enb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VS1_ANA_CON3),
		(&val),
		(PMIC_RG_VS1_DTS_ENB_MASK),
		(PMIC_RG_VS1_DTS_ENB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vs1_auto_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON3),
		(val),
		(PMIC_RG_VS1_AUTO_MODE_MASK),
		(PMIC_RG_VS1_AUTO_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_pwm_trig(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON3),
		(val),
		(PMIC_RG_VS1_PWM_TRIG_MASK),
		(PMIC_RG_VS1_PWM_TRIG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_rsv_l(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON4),
		(val),
		(PMIC_RG_VS1_RSV_L_MASK),
		(PMIC_RG_VS1_RSV_L_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_sr_p(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON4),
		(val),
		(PMIC_RG_VS1_SR_P_MASK),
		(PMIC_RG_VS1_SR_P_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_sr_n(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON4),
		(val),
		(PMIC_RG_VS1_SR_N_MASK),
		(PMIC_RG_VS1_SR_N_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_burst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON4),
		(val),
		(PMIC_RG_VS1_BURST_MASK),
		(PMIC_RG_VS1_BURST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rgs_vs1_oc_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VS1_ANA_CON4),
		(&val),
		(PMIC_RGS_VS1_OC_STATUS_MASK),
		(PMIC_RGS_VS1_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vs1_dig_mon(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VS1_ANA_CON5),
		(&val),
		(PMIC_RGS_VS1_DIG_MON_MASK),
		(PMIC_RGS_VS1_DIG_MON_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vs1_pfm_flag(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VS1_ANA_CON5),
		(&val),
		(PMIC_RGS_VS1_PFM_FLAG_MASK),
		(PMIC_RGS_VS1_PFM_FLAG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vs1_nonaudible_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ANA_CON5),
		(val),
		(PMIC_RG_VS1_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VS1_NONAUDIBLE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vs1_nonaudible_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VS1_ANA_CON5),
		(&val),
		(PMIC_RG_VS1_NONAUDIBLE_EN_MASK),
		(PMIC_RG_VS1_NONAUDIBLE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vpa_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON0),
		(val),
		(PMIC_RG_VPA_NDIS_EN_MASK),
		(PMIC_RG_VPA_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vpa_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VPA_ANA_CON0),
		(&val),
		(PMIC_RG_VPA_NDIS_EN_MASK),
		(PMIC_RG_VPA_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vpa_modeset(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON0),
		(val),
		(PMIC_RG_VPA_MODESET_MASK),
		(PMIC_RG_VPA_MODESET_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_cc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON1),
		(val),
		(PMIC_RG_VPA_CC_MASK),
		(PMIC_RG_VPA_CC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_csr(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON1),
		(val),
		(PMIC_RG_VPA_CSR_MASK),
		(PMIC_RG_VPA_CSR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_csmir(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON1),
		(val),
		(PMIC_RG_VPA_CSMIR_MASK),
		(PMIC_RG_VPA_CSMIR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_csl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON1),
		(val),
		(PMIC_RG_VPA_CSL_MASK),
		(PMIC_RG_VPA_CSL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_slp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON1),
		(val),
		(PMIC_RG_VPA_SLP_MASK),
		(PMIC_RG_VPA_SLP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_azc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON1),
		(val),
		(PMIC_RG_VPA_AZC_EN_MASK),
		(PMIC_RG_VPA_AZC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vpa_azc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VPA_ANA_CON1),
		(&val),
		(PMIC_RG_VPA_AZC_EN_MASK),
		(PMIC_RG_VPA_AZC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vpa_cp_fwupoff(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON1),
		(val),
		(PMIC_RG_VPA_CP_FWUPOFF_MASK),
		(PMIC_RG_VPA_CP_FWUPOFF_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_azc_delay(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON1),
		(val),
		(PMIC_RG_VPA_AZC_DELAY_MASK),
		(PMIC_RG_VPA_AZC_DELAY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_rzsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON1),
		(val),
		(PMIC_RG_VPA_RZSEL_MASK),
		(PMIC_RG_VPA_RZSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_hzp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON2),
		(val),
		(PMIC_RG_VPA_HZP_MASK),
		(PMIC_RG_VPA_HZP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_bwex_gat(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON2),
		(val),
		(PMIC_RG_VPA_BWEX_GAT_MASK),
		(PMIC_RG_VPA_BWEX_GAT_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_slew(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON2),
		(val),
		(PMIC_RG_VPA_SLEW_MASK),
		(PMIC_RG_VPA_SLEW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_slew_nmos(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON2),
		(val),
		(PMIC_RG_VPA_SLEW_NMOS_MASK),
		(PMIC_RG_VPA_SLEW_NMOS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_min_on(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON2),
		(val),
		(PMIC_RG_VPA_MIN_ON_MASK),
		(PMIC_RG_VPA_MIN_ON_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_vbat_del(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON2),
		(val),
		(PMIC_RG_VPA_VBAT_DEL_MASK),
		(PMIC_RG_VPA_VBAT_DEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rgs_vpa_azc_vos_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VPA_ANA_CON3),
		(&val),
		(PMIC_RGS_VPA_AZC_VOS_SEL_MASK),
		(PMIC_RGS_VPA_AZC_VOS_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vpa_min_pk(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON3),
		(val),
		(PMIC_RG_VPA_MIN_PK_MASK),
		(PMIC_RG_VPA_MIN_PK_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_rsv1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON4),
		(val),
		(PMIC_RG_VPA_RSV1_MASK),
		(PMIC_RG_VPA_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_rsv2(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ANA_CON4),
		(val),
		(PMIC_RG_VPA_RSV2_MASK),
		(PMIC_RG_VPA_RSV2_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rgs_vpa_oc_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VPA_ANA_CON5),
		(&val),
		(PMIC_RGS_VPA_OC_STATUS_MASK),
		(PMIC_RGS_VPA_OC_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vpa_azc_zx(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VPA_ANA_CON5),
		(&val),
		(PMIC_RGS_VPA_AZC_ZX_MASK),
		(PMIC_RGS_VPA_AZC_ZX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rgs_vpa_dig_mon(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VPA_ANA_CON5),
		(&val),
		(PMIC_RGS_VPA_DIG_MON_MASK),
		(PMIC_RGS_VPA_DIG_MON_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vs1_trimh(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_0),
		(val),
		(PMIC_RG_VS1_TRIMH_MASK),
		(PMIC_RG_VS1_TRIMH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_triml(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_0),
		(val),
		(PMIC_RG_VS1_TRIML_MASK),
		(PMIC_RG_VS1_TRIML_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_vsleep_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_0),
		(val),
		(PMIC_RG_VS1_VSLEEP_TRIM_MASK),
		(PMIC_RG_VS1_VSLEEP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_sleep_voltage(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_0),
		(val),
		(PMIC_RG_VS1_SLEEP_VOLTAGE_MASK),
		(PMIC_RG_VS1_SLEEP_VOLTAGE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_trimh(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_1),
		(val),
		(PMIC_RG_VCORE_TRIMH_MASK),
		(PMIC_RG_VCORE_TRIMH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_vsleep_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_1),
		(val),
		(PMIC_RG_VCORE_VSLEEP_TRIM_MASK),
		(PMIC_RG_VCORE_VSLEEP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_trimh(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_1),
		(val),
		(PMIC_RG_VPROC_TRIMH_MASK),
		(PMIC_RG_VPROC_TRIMH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_vsleep_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_1),
		(val),
		(PMIC_RG_VPROC_VSLEEP_TRIM_MASK),
		(PMIC_RG_VPROC_VSLEEP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_trimh(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_2),
		(val),
		(PMIC_RG_VMODEM_TRIMH_MASK),
		(PMIC_RG_VMODEM_TRIMH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_triml(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_2),
		(val),
		(PMIC_RG_VMODEM_TRIML_MASK),
		(PMIC_RG_VMODEM_TRIML_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_vsleep_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_2),
		(val),
		(PMIC_RG_VMODEM_VSLEEP_TRIM_MASK),
		(PMIC_RG_VMODEM_VSLEEP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_trimh(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_3),
		(val),
		(PMIC_RG_VPA_TRIMH_MASK),
		(PMIC_RG_VPA_TRIMH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_triml(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_3),
		(val),
		(PMIC_RG_VPA_TRIML_MASK),
		(PMIC_RG_VPA_TRIML_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_trim_ref(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_3),
		(val),
		(PMIC_RG_VPA_TRIM_REF_MASK),
		(PMIC_RG_VPA_TRIM_REF_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_proc_trimh(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_4),
		(val),
		(PMIC_RG_VSRAM_PROC_TRIMH_MASK),
		(PMIC_RG_VSRAM_PROC_TRIMH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_proc_triml(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_4),
		(val),
		(PMIC_RG_VSRAM_PROC_TRIML_MASK),
		(PMIC_RG_VSRAM_PROC_TRIML_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_proc_vsleep_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_4),
		(val),
		(PMIC_RG_VSRAM_PROC_VSLEEP_TRIM_MASK),
		(PMIC_RG_VSRAM_PROC_VSLEEP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_others_trimh(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_5),
		(val),
		(PMIC_RG_VSRAM_OTHERS_TRIMH_MASK),
		(PMIC_RG_VSRAM_OTHERS_TRIMH_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_others_triml(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_5),
		(val),
		(PMIC_RG_VSRAM_OTHERS_TRIML_MASK),
		(PMIC_RG_VSRAM_OTHERS_TRIML_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_others_vsleep_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_5),
		(val),
		(PMIC_RG_VSRAM_OTHERS_VSLEEP_TRIM_MASK),
		(PMIC_RG_VSRAM_OTHERS_VSLEEP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_voutdet_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_5),
		(val),
		(PMIC_RG_VOUTDET_EN_MASK),
		(PMIC_RG_VOUTDET_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_voutdet_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_SMPS_ELR_5),
		(&val),
		(PMIC_RG_VOUTDET_EN_MASK),
		(PMIC_RG_VOUTDET_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_m17l17_flag(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_SMPS_ELR_5),
		(val),
		(PMIC_RG_M17L17_FLAG_MASK),
		(PMIC_RG_M17L17_FLAG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_zc_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_0),
		(val),
		(PMIC_RG_VCORE_ZC_TRIM_MASK),
		(PMIC_RG_VCORE_ZC_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_nlim_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_0),
		(val),
		(PMIC_RG_VCORE_NLIM_TRIM_MASK),
		(PMIC_RG_VCORE_NLIM_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_ton_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_0),
		(val),
		(PMIC_RG_VCORE_TON_TRIM_MASK),
		(PMIC_RG_VCORE_TON_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_csp_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_1),
		(val),
		(PMIC_RG_VCORE_CSP_TRIM_MASK),
		(PMIC_RG_VCORE_CSP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_csn_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_1),
		(val),
		(PMIC_RG_VCORE_CSN_TRIM_MASK),
		(PMIC_RG_VCORE_CSN_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_rpsi1_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_1),
		(val),
		(PMIC_RG_VCORE_RPSI1_TRIM_MASK),
		(PMIC_RG_VCORE_RPSI1_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_preoc_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_1),
		(val),
		(PMIC_RG_VCORE_PREOC_TRIM_MASK),
		(PMIC_RG_VCORE_PREOC_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_cspslp_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_2),
		(val),
		(PMIC_RG_VCORE_CSPSLP_TRIM_MASK),
		(PMIC_RG_VCORE_CSPSLP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcore_csnslp_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_2),
		(val),
		(PMIC_RG_VCORE_CSNSLP_TRIM_MASK),
		(PMIC_RG_VCORE_CSNSLP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_zc_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_2),
		(val),
		(PMIC_RG_VPROC_ZC_TRIM_MASK),
		(PMIC_RG_VPROC_ZC_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_nlim_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_2),
		(val),
		(PMIC_RG_VPROC_NLIM_TRIM_MASK),
		(PMIC_RG_VPROC_NLIM_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_ton_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_3),
		(val),
		(PMIC_RG_VPROC_TON_TRIM_MASK),
		(PMIC_RG_VPROC_TON_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_csp_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_3),
		(val),
		(PMIC_RG_VPROC_CSP_TRIM_MASK),
		(PMIC_RG_VPROC_CSP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_csn_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_3),
		(val),
		(PMIC_RG_VPROC_CSN_TRIM_MASK),
		(PMIC_RG_VPROC_CSN_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_rpsi1_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_3),
		(val),
		(PMIC_RG_VPROC_RPSI1_TRIM_MASK),
		(PMIC_RG_VPROC_RPSI1_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_cspslp_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_4),
		(val),
		(PMIC_RG_VPROC_CSPSLP_TRIM_MASK),
		(PMIC_RG_VPROC_CSPSLP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vproc_csnslp_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_4),
		(val),
		(PMIC_RG_VPROC_CSNSLP_TRIM_MASK),
		(PMIC_RG_VPROC_CSNSLP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcorevproc_disconfig20(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCORE_VPROC_ELR_4),
		(val),
		(PMIC_RG_VCOREVPROC_DISCONFIG20_MASK),
		(PMIC_RG_VCOREVPROC_DISCONFIG20_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_zc_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ELR_0),
		(val),
		(PMIC_RG_VMODEM_ZC_TRIM_MASK),
		(PMIC_RG_VMODEM_ZC_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_nlim_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ELR_0),
		(val),
		(PMIC_RG_VMODEM_NLIM_TRIM_MASK),
		(PMIC_RG_VMODEM_NLIM_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_ton_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ELR_0),
		(val),
		(PMIC_RG_VMODEM_TON_TRIM_MASK),
		(PMIC_RG_VMODEM_TON_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_csp_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ELR_1),
		(val),
		(PMIC_RG_VMODEM_CSP_TRIM_MASK),
		(PMIC_RG_VMODEM_CSP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_csn_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ELR_1),
		(val),
		(PMIC_RG_VMODEM_CSN_TRIM_MASK),
		(PMIC_RG_VMODEM_CSN_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_rpsi_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ELR_1),
		(val),
		(PMIC_RG_VMODEM_RPSI_TRIM_MASK),
		(PMIC_RG_VMODEM_RPSI_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_csnslp_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ELR_2),
		(val),
		(PMIC_RG_VMODEM_CSNSLP_TRIM_MASK),
		(PMIC_RG_VMODEM_CSNSLP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmodem_cspslp_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMODEM_ELR_2),
		(val),
		(PMIC_RG_VMODEM_CSPSLP_TRIM_MASK),
		(PMIC_RG_VMODEM_CSPSLP_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_zxos_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ELR_0),
		(val),
		(PMIC_RG_VS1_ZXOS_TRIM_MASK),
		(PMIC_RG_VS1_ZXOS_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_zx_os(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ELR_0),
		(val),
		(PMIC_RG_VS1_ZX_OS_MASK),
		(PMIC_RG_VS1_ZX_OS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_rsv_h(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ELR_0),
		(val),
		(PMIC_RG_VS1_RSV_H_MASK),
		(PMIC_RG_VS1_RSV_H_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vs1_pfm_rip(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VS1_ELR_1),
		(val),
		(PMIC_RG_VS1_PFM_RIP_MASK),
		(PMIC_RG_VS1_PFM_RIP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_zxref(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ELR_0),
		(val),
		(PMIC_RG_VPA_ZXREF_MASK),
		(PMIC_RG_VPA_ZXREF_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vpa_nlim_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VPA_ELR_0),
		(val),
		(PMIC_RG_VPA_NLIM_SEL_MASK),
		(PMIC_RG_VPA_NLIM_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_ldo_top_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_ID),
		(&val),
		(PMIC_LDO_TOP_ANA_ID_MASK),
		(PMIC_LDO_TOP_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_ID),
		(&val),
		(PMIC_LDO_TOP_DIG_ID_MASK),
		(PMIC_LDO_TOP_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_REV0),
		(&val),
		(PMIC_LDO_TOP_ANA_MINOR_REV_MASK),
		(PMIC_LDO_TOP_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_REV0),
		(&val),
		(PMIC_LDO_TOP_ANA_MAJOR_REV_MASK),
		(PMIC_LDO_TOP_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_REV0),
		(&val),
		(PMIC_LDO_TOP_DIG_MINOR_REV_MASK),
		(PMIC_LDO_TOP_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_REV0),
		(&val),
		(PMIC_LDO_TOP_DIG_MAJOR_REV_MASK),
		(PMIC_LDO_TOP_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_DBI),
		(&val),
		(PMIC_LDO_TOP_CBS_MASK),
		(PMIC_LDO_TOP_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_DBI),
		(&val),
		(PMIC_LDO_TOP_BIX_MASK),
		(PMIC_LDO_TOP_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_DBI),
		(&val),
		(PMIC_LDO_TOP_ESP_MASK),
		(PMIC_LDO_TOP_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_DXI),
		(&val),
		(PMIC_LDO_TOP_FPI_MASK),
		(PMIC_LDO_TOP_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_clk_offset(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TPM0),
		(&val),
		(PMIC_LDO_TOP_CLK_OFFSET_MASK),
		(PMIC_LDO_TOP_CLK_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_rst_offset(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TPM0),
		(&val),
		(PMIC_LDO_TOP_RST_OFFSET_MASK),
		(PMIC_LDO_TOP_RST_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_int_offset(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TPM1),
		(&val),
		(PMIC_LDO_TOP_INT_OFFSET_MASK),
		(PMIC_LDO_TOP_INT_OFFSET_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_top_int_len(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TPM1),
		(&val),
		(PMIC_LDO_TOP_INT_LEN_MASK),
		(PMIC_LDO_TOP_INT_LEN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_dcm_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_DCM_CON0),
		(val),
		(PMIC_RG_LDO_DCM_MODE_MASK),
		(PMIC_RG_LDO_DCM_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VIO28_CON0),
		(val),
		(PMIC_RG_LDO_VIO28_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VIO28_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VIO18_CON0),
		(val),
		(PMIC_RG_LDO_VIO18_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VIO18_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VAUD28_CON0),
		(val),
		(PMIC_RG_LDO_VAUD28_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VAUD28_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VDRAM_CON0),
		(val),
		(PMIC_RG_LDO_VDRAM_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VDRAM_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VSRAM_PROC_CON0),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_osc_sel_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VSRAM_PROC_CON0),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_OSC_SEL_DIS_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_OSC_SEL_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VSRAM_OTHERS_CON0),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_osc_sel_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VSRAM_OTHERS_CON0),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_OSC_SEL_DIS_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_OSC_SEL_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VAUX18_CON0),
		(val),
		(PMIC_RG_LDO_VAUX18_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VAUX18_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VUSB33_CON0),
		(val),
		(PMIC_RG_LDO_VUSB33_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VUSB33_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VEMC_CON0),
		(val),
		(PMIC_RG_LDO_VEMC_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VEMC_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VXO22_CON0),
		(val),
		(PMIC_RG_LDO_VXO22_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VXO22_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VSIM1_CON0),
		(val),
		(PMIC_RG_LDO_VSIM1_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VSIM1_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VSIM2_CON0),
		(val),
		(PMIC_RG_LDO_VSIM2_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VSIM2_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VCAMD_CON0),
		(val),
		(PMIC_RG_LDO_VCAMD_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VCAMD_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VCAMIO_CON0),
		(val),
		(PMIC_RG_LDO_VCAMIO_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VCAMIO_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VEFUSE_CON0),
		(val),
		(PMIC_RG_LDO_VEFUSE_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VEFUSE_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VCN33_CON0),
		(val),
		(PMIC_RG_LDO_VCN33_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VCN33_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VCN18_CON0),
		(val),
		(PMIC_RG_LDO_VCN18_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VCN18_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VCN28_CON0),
		(val),
		(PMIC_RG_LDO_VCN28_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VCN28_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VIBR_CON0),
		(val),
		(PMIC_RG_LDO_VIBR_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VIBR_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VFE28_CON0),
		(val),
		(PMIC_RG_LDO_VFE28_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VFE28_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VMCH_CON0),
		(val),
		(PMIC_RG_LDO_VMCH_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VMCH_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VMC_CON0),
		(val),
		(PMIC_RG_LDO_VMC_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VMC_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VRF18_CON0),
		(val),
		(PMIC_RG_LDO_VRF18_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VRF18_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VLDO28_CON0),
		(val),
		(PMIC_RG_LDO_VLDO28_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VLDO28_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VRF12_CON0),
		(val),
		(PMIC_RG_LDO_VRF12_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VRF12_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_VCAMA_CON0),
		(val),
		(PMIC_RG_LDO_VCAMA_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_VCAMA_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_tref_ck_sw_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_CLK_TREF_CON0),
		(val),
		(PMIC_RG_LDO_TREF_CK_SW_MODE_MASK),
		(PMIC_RG_LDO_TREF_CK_SW_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_en_vfe28_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VFE28_OC_MASK),
		(PMIC_RG_INT_EN_VFE28_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vfe28_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VFE28_OC_MASK),
		(PMIC_RG_INT_EN_VFE28_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vxo22_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VXO22_OC_MASK),
		(PMIC_RG_INT_EN_VXO22_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vxo22_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VXO22_OC_MASK),
		(PMIC_RG_INT_EN_VXO22_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vrf18_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VRF18_OC_MASK),
		(PMIC_RG_INT_EN_VRF18_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vrf18_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VRF18_OC_MASK),
		(PMIC_RG_INT_EN_VRF18_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vrf12_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VRF12_OC_MASK),
		(PMIC_RG_INT_EN_VRF12_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vrf12_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VRF12_OC_MASK),
		(PMIC_RG_INT_EN_VRF12_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vefuse_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VEFUSE_OC_MASK),
		(PMIC_RG_INT_EN_VEFUSE_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vefuse_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VEFUSE_OC_MASK),
		(PMIC_RG_INT_EN_VEFUSE_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vcn33_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VCN33_OC_MASK),
		(PMIC_RG_INT_EN_VCN33_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vcn33_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VCN33_OC_MASK),
		(PMIC_RG_INT_EN_VCN33_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vcn28_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VCN28_OC_MASK),
		(PMIC_RG_INT_EN_VCN28_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vcn28_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VCN28_OC_MASK),
		(PMIC_RG_INT_EN_VCN28_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vcn18_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VCN18_OC_MASK),
		(PMIC_RG_INT_EN_VCN18_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vcn18_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VCN18_OC_MASK),
		(PMIC_RG_INT_EN_VCN18_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vcama_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VCAMA_OC_MASK),
		(PMIC_RG_INT_EN_VCAMA_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vcama_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VCAMA_OC_MASK),
		(PMIC_RG_INT_EN_VCAMA_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vcamd_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VCAMD_OC_MASK),
		(PMIC_RG_INT_EN_VCAMD_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vcamd_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VCAMD_OC_MASK),
		(PMIC_RG_INT_EN_VCAMD_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vcamio_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VCAMIO_OC_MASK),
		(PMIC_RG_INT_EN_VCAMIO_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vcamio_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VCAMIO_OC_MASK),
		(PMIC_RG_INT_EN_VCAMIO_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vldo28_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VLDO28_OC_MASK),
		(PMIC_RG_INT_EN_VLDO28_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vldo28_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VLDO28_OC_MASK),
		(PMIC_RG_INT_EN_VLDO28_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vusb33_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VUSB33_OC_MASK),
		(PMIC_RG_INT_EN_VUSB33_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vusb33_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VUSB33_OC_MASK),
		(PMIC_RG_INT_EN_VUSB33_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vaux18_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VAUX18_OC_MASK),
		(PMIC_RG_INT_EN_VAUX18_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vaux18_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VAUX18_OC_MASK),
		(PMIC_RG_INT_EN_VAUX18_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vaud28_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VAUD28_OC_MASK),
		(PMIC_RG_INT_EN_VAUD28_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vaud28_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VAUD28_OC_MASK),
		(PMIC_RG_INT_EN_VAUD28_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vio28_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(val),
		(PMIC_RG_INT_EN_VIO28_OC_MASK),
		(PMIC_RG_INT_EN_VIO28_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vio28_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON0),
		(&val),
		(PMIC_RG_INT_EN_VIO28_OC_MASK),
		(PMIC_RG_INT_EN_VIO28_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vio18_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_VIO18_OC_MASK),
		(PMIC_RG_INT_EN_VIO18_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vio18_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_VIO18_OC_MASK),
		(PMIC_RG_INT_EN_VIO18_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vsram_proc_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_VSRAM_PROC_OC_MASK),
		(PMIC_RG_INT_EN_VSRAM_PROC_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vsram_proc_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_VSRAM_PROC_OC_MASK),
		(PMIC_RG_INT_EN_VSRAM_PROC_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vsram_others_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_VSRAM_OTHERS_OC_MASK),
		(PMIC_RG_INT_EN_VSRAM_OTHERS_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vsram_others_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_VSRAM_OTHERS_OC_MASK),
		(PMIC_RG_INT_EN_VSRAM_OTHERS_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vibr_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_VIBR_OC_MASK),
		(PMIC_RG_INT_EN_VIBR_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vibr_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_VIBR_OC_MASK),
		(PMIC_RG_INT_EN_VIBR_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vdram_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_VDRAM_OC_MASK),
		(PMIC_RG_INT_EN_VDRAM_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vdram_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_VDRAM_OC_MASK),
		(PMIC_RG_INT_EN_VDRAM_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vmc_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_VMC_OC_MASK),
		(PMIC_RG_INT_EN_VMC_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vmc_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_VMC_OC_MASK),
		(PMIC_RG_INT_EN_VMC_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vmch_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_VMCH_OC_MASK),
		(PMIC_RG_INT_EN_VMCH_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vmch_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_VMCH_OC_MASK),
		(PMIC_RG_INT_EN_VMCH_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vemc_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_VEMC_OC_MASK),
		(PMIC_RG_INT_EN_VEMC_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vemc_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_VEMC_OC_MASK),
		(PMIC_RG_INT_EN_VEMC_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vsim1_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_VSIM1_OC_MASK),
		(PMIC_RG_INT_EN_VSIM1_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vsim1_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_VSIM1_OC_MASK),
		(PMIC_RG_INT_EN_VSIM1_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_en_vsim2_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(val),
		(PMIC_RG_INT_EN_VSIM2_OC_MASK),
		(PMIC_RG_INT_EN_VSIM2_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_en_vsim2_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_CON1),
		(&val),
		(PMIC_RG_INT_EN_VSIM2_OC_MASK),
		(PMIC_RG_INT_EN_VSIM2_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_int_mask_vfe28_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VFE28_OC_MASK),
		(PMIC_RG_INT_MASK_VFE28_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vxo22_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VXO22_OC_MASK),
		(PMIC_RG_INT_MASK_VXO22_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vrf18_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VRF18_OC_MASK),
		(PMIC_RG_INT_MASK_VRF18_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vrf12_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VRF12_OC_MASK),
		(PMIC_RG_INT_MASK_VRF12_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vefuse_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VEFUSE_OC_MASK),
		(PMIC_RG_INT_MASK_VEFUSE_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vcn33_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VCN33_OC_MASK),
		(PMIC_RG_INT_MASK_VCN33_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vcn28_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VCN28_OC_MASK),
		(PMIC_RG_INT_MASK_VCN28_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vcn18_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VCN18_OC_MASK),
		(PMIC_RG_INT_MASK_VCN18_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vcama_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VCAMA_OC_MASK),
		(PMIC_RG_INT_MASK_VCAMA_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vcamd_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VCAMD_OC_MASK),
		(PMIC_RG_INT_MASK_VCAMD_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vcamio_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VCAMIO_OC_MASK),
		(PMIC_RG_INT_MASK_VCAMIO_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vldo28_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VLDO28_OC_MASK),
		(PMIC_RG_INT_MASK_VLDO28_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vusb33_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VUSB33_OC_MASK),
		(PMIC_RG_INT_MASK_VUSB33_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vaux18_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VAUX18_OC_MASK),
		(PMIC_RG_INT_MASK_VAUX18_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vaud28_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VAUD28_OC_MASK),
		(PMIC_RG_INT_MASK_VAUD28_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vio28_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON0),
		(val),
		(PMIC_RG_INT_MASK_VIO28_OC_MASK),
		(PMIC_RG_INT_MASK_VIO28_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vio18_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_VIO18_OC_MASK),
		(PMIC_RG_INT_MASK_VIO18_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vsram_proc_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_VSRAM_PROC_OC_MASK),
		(PMIC_RG_INT_MASK_VSRAM_PROC_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vsram_others_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_VSRAM_OTHERS_OC_MASK),
		(PMIC_RG_INT_MASK_VSRAM_OTHERS_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vibr_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_VIBR_OC_MASK),
		(PMIC_RG_INT_MASK_VIBR_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vdram_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_VDRAM_OC_MASK),
		(PMIC_RG_INT_MASK_VDRAM_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vmc_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_VMC_OC_MASK),
		(PMIC_RG_INT_MASK_VMC_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vmch_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_VMCH_OC_MASK),
		(PMIC_RG_INT_MASK_VMCH_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vemc_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_VEMC_OC_MASK),
		(PMIC_RG_INT_MASK_VEMC_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vsim1_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_VSIM1_OC_MASK),
		(PMIC_RG_INT_MASK_VSIM1_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_int_mask_vsim2_oc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_INT_MASK_CON1),
		(val),
		(PMIC_RG_INT_MASK_VSIM2_OC_MASK),
		(PMIC_RG_INT_MASK_VSIM2_OC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vfe28_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VFE28_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VFE28_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vxo22_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VXO22_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VXO22_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vrf18_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VRF18_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VRF18_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vrf12_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VRF12_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VRF12_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vefuse_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VEFUSE_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VEFUSE_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vcn33_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VCN33_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VCN33_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vcn28_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VCN28_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VCN28_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vcn18_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VCN18_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VCN18_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vcama_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VCAMA_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VCAMA_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vcamd_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VCAMD_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VCAMD_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vcamio_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VCAMIO_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VCAMIO_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vldo28_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VLDO28_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VLDO28_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vusb33_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VUSB33_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VUSB33_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vaux18_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VAUX18_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VAUX18_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vaud28_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VAUD28_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VAUD28_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vio28_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS0),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VIO28_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VIO28_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vio18_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VIO18_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VIO18_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vsram_proc_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VSRAM_PROC_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VSRAM_PROC_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vsram_others_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VSRAM_OTHERS_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VSRAM_OTHERS_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vibr_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VIBR_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VIBR_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vdram_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VDRAM_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VDRAM_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vmc_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VMC_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VMC_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vmch_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VMCH_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VMCH_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vemc_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VEMC_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VEMC_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vsim1_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VSIM1_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VSIM1_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_rg_int_raw_status_vsim2_oc(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TOP_INT_RAW_STATUS1),
		(&val),
		(PMIC_RG_INT_RAW_STATUS_VSIM2_OC_MASK),
		(PMIC_RG_INT_RAW_STATUS_VSIM2_OC_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_mon_flag_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TEST_CON0),
		(val),
		(PMIC_RG_LDO_MON_FLAG_SEL_MASK),
		(PMIC_RG_LDO_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_int_flag_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TEST_CON0),
		(val),
		(PMIC_RG_LDO_INT_FLAG_EN_MASK),
		(PMIC_RG_LDO_INT_FLAG_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_int_flag_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TEST_CON0),
		(&val),
		(PMIC_RG_LDO_INT_FLAG_EN_MASK),
		(PMIC_RG_LDO_INT_FLAG_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_mon_grp_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TEST_CON0),
		(val),
		(PMIC_RG_LDO_MON_GRP_SEL_MASK),
		(PMIC_RG_LDO_MON_GRP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_wdt_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_WDT_CON0),
		(val),
		(PMIC_RG_LDO_WDT_MODE_MASK),
		(PMIC_RG_LDO_WDT_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_top_rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_RSV_CON0),
		(val),
		(PMIC_RG_LDO_TOP_RSV0_MASK),
		(PMIC_RG_LDO_TOP_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_top_rsv1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TOP_RSV_CON1),
		(val),
		(PMIC_RG_LDO_TOP_RSV1_MASK),
		(PMIC_RG_LDO_TOP_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_ldo_degtd_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_OCFB0),
		(val),
		(PMIC_LDO_DEGTD_SEL_MASK),
		(PMIC_LDO_DEGTD_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_lp_prot_disable(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_LP_PROTECTION),
		(val),
		(PMIC_RG_LDO_LP_PROT_DISABLE_MASK),
		(PMIC_RG_LDO_LP_PROT_DISABLE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_dummy_load_gated_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_DUMMY_LOAD_GATED),
		(val),
		(PMIC_RG_LDO_DUMMY_LOAD_GATED_DIS_MASK),
		(PMIC_RG_LDO_DUMMY_LOAD_GATED_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_ldo_gon0_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON0_DSN_ID),
		(&val),
		(PMIC_LDO_GON0_ANA_ID_MASK),
		(PMIC_LDO_GON0_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon0_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON0_DSN_ID),
		(&val),
		(PMIC_LDO_GON0_DIG_ID_MASK),
		(PMIC_LDO_GON0_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon0_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON0_DSN_REV0),
		(&val),
		(PMIC_LDO_GON0_ANA_MINOR_REV_MASK),
		(PMIC_LDO_GON0_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon0_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON0_DSN_REV0),
		(&val),
		(PMIC_LDO_GON0_ANA_MAJOR_REV_MASK),
		(PMIC_LDO_GON0_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon0_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON0_DSN_REV0),
		(&val),
		(PMIC_LDO_GON0_DIG_MINOR_REV_MASK),
		(PMIC_LDO_GON0_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon0_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON0_DSN_REV0),
		(&val),
		(PMIC_LDO_GON0_DIG_MAJOR_REV_MASK),
		(PMIC_LDO_GON0_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon0_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON0_DSN_DBI),
		(&val),
		(PMIC_LDO_GON0_DSN_CBS_MASK),
		(PMIC_LDO_GON0_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon0_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON0_DSN_DBI),
		(&val),
		(PMIC_LDO_GON0_DSN_BIX_MASK),
		(PMIC_LDO_GON0_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon0_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON0_DSN_DBI),
		(&val),
		(PMIC_LDO_GON0_DSN_ESP_MASK),
		(PMIC_LDO_GON0_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon0_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON0_DSN_DXI),
		(&val),
		(PMIC_LDO_GON0_DSN_FPI_MASK),
		(PMIC_LDO_GON0_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_CON0),
		(val),
		(PMIC_RG_LDO_VXO22_EN_MASK),
		(PMIC_RG_LDO_VXO22_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vxo22_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_CON0),
		(&val),
		(PMIC_RG_LDO_VXO22_EN_MASK),
		(PMIC_RG_LDO_VXO22_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_CON0),
		(val),
		(PMIC_RG_LDO_VXO22_LP_MASK),
		(PMIC_RG_LDO_VXO22_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_OP_EN),
		(val),
		(PMIC_RG_LDO_VXO22_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VXO22_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vxo22_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_OP_EN),
		(&val),
		(PMIC_RG_LDO_VXO22_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VXO22_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_OP_EN),
		(val),
		(PMIC_RG_LDO_VXO22_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VXO22_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vxo22_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_OP_EN),
		(&val),
		(PMIC_RG_LDO_VXO22_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VXO22_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_OP_EN),
		(val),
		(PMIC_RG_LDO_VXO22_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VXO22_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vxo22_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_OP_EN),
		(&val),
		(PMIC_RG_LDO_VXO22_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VXO22_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_OP_EN),
		(val),
		(PMIC_RG_LDO_VXO22_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VXO22_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vxo22_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_OP_EN),
		(&val),
		(PMIC_RG_LDO_VXO22_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VXO22_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_OP_CFG),
		(val),
		(PMIC_RG_LDO_VXO22_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VXO22_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vxo22_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VXO22_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VXO22_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_OP_CFG),
		(val),
		(PMIC_RG_LDO_VXO22_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VXO22_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vxo22_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VXO22_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VXO22_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_OP_CFG),
		(val),
		(PMIC_RG_LDO_VXO22_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VXO22_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vxo22_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VXO22_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VXO22_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vxo22_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_CON1),
		(&val),
		(PMIC_DA_VXO22_MODE_MASK),
		(PMIC_DA_VXO22_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_CON1),
		(val),
		(PMIC_RG_LDO_VXO22_STBTD_MASK),
		(PMIC_RG_LDO_VXO22_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vxo22_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_CON1),
		(&val),
		(PMIC_DA_VXO22_STB_MASK),
		(PMIC_DA_VXO22_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vxo22_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_CON1),
		(&val),
		(PMIC_DA_VXO22_EN_MASK),
		(PMIC_DA_VXO22_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_CON2),
		(val),
		(PMIC_RG_LDO_VXO22_OCFB_EN_MASK),
		(PMIC_RG_LDO_VXO22_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vxo22_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_CON2),
		(&val),
		(PMIC_RG_LDO_VXO22_OCFB_EN_MASK),
		(PMIC_RG_LDO_VXO22_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vxo22_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_CON2),
		(&val),
		(PMIC_DA_VXO22_OCFB_EN_MASK),
		(PMIC_DA_VXO22_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vxo22_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VXO22_CON3),
		(val),
		(PMIC_RG_LDO_VXO22_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VXO22_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vxo22_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VXO22_CON3),
		(&val),
		(PMIC_DA_VXO22_DUMMY_LOAD_MASK),
		(PMIC_DA_VXO22_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_CON0),
		(val),
		(PMIC_RG_LDO_VAUX18_EN_MASK),
		(PMIC_RG_LDO_VAUX18_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaux18_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_CON0),
		(&val),
		(PMIC_RG_LDO_VAUX18_EN_MASK),
		(PMIC_RG_LDO_VAUX18_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_CON0),
		(val),
		(PMIC_RG_LDO_VAUX18_LP_MASK),
		(PMIC_RG_LDO_VAUX18_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_OP_EN),
		(val),
		(PMIC_RG_LDO_VAUX18_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VAUX18_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaux18_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VAUX18_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VAUX18_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_OP_EN),
		(val),
		(PMIC_RG_LDO_VAUX18_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VAUX18_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaux18_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VAUX18_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VAUX18_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_OP_EN),
		(val),
		(PMIC_RG_LDO_VAUX18_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VAUX18_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaux18_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VAUX18_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VAUX18_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_OP_EN),
		(val),
		(PMIC_RG_LDO_VAUX18_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VAUX18_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaux18_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VAUX18_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VAUX18_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VAUX18_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUX18_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaux18_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VAUX18_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUX18_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VAUX18_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUX18_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaux18_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VAUX18_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUX18_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VAUX18_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUX18_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaux18_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VAUX18_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUX18_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vaux18_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_CON1),
		(&val),
		(PMIC_DA_VAUX18_MODE_MASK),
		(PMIC_DA_VAUX18_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_CON1),
		(val),
		(PMIC_RG_LDO_VAUX18_STBTD_MASK),
		(PMIC_RG_LDO_VAUX18_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vaux18_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_CON1),
		(&val),
		(PMIC_DA_VAUX18_STB_MASK),
		(PMIC_DA_VAUX18_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vaux18_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_CON1),
		(&val),
		(PMIC_DA_VAUX18_EN_MASK),
		(PMIC_DA_VAUX18_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_auxadc_pwdb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_CON2),
		(val),
		(PMIC_RG_LDO_VAUX18_AUXADC_PWDB_EN_MASK),
		(PMIC_RG_LDO_VAUX18_AUXADC_PWDB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaux18_auxadc_pwdb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_CON2),
		(&val),
		(PMIC_RG_LDO_VAUX18_AUXADC_PWDB_EN_MASK),
		(PMIC_RG_LDO_VAUX18_AUXADC_PWDB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_CON2),
		(val),
		(PMIC_RG_LDO_VAUX18_OCFB_EN_MASK),
		(PMIC_RG_LDO_VAUX18_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaux18_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_CON2),
		(&val),
		(PMIC_RG_LDO_VAUX18_OCFB_EN_MASK),
		(PMIC_RG_LDO_VAUX18_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vaux18_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_CON2),
		(&val),
		(PMIC_DA_VAUX18_OCFB_EN_MASK),
		(PMIC_DA_VAUX18_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaux18_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUX18_CON3),
		(val),
		(PMIC_RG_LDO_VAUX18_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VAUX18_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vaux18_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUX18_CON3),
		(&val),
		(PMIC_DA_VAUX18_DUMMY_LOAD_MASK),
		(PMIC_DA_VAUX18_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_CON0),
		(val),
		(PMIC_RG_LDO_VAUD28_EN_MASK),
		(PMIC_RG_LDO_VAUD28_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaud28_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_CON0),
		(&val),
		(PMIC_RG_LDO_VAUD28_EN_MASK),
		(PMIC_RG_LDO_VAUD28_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_CON0),
		(val),
		(PMIC_RG_LDO_VAUD28_LP_MASK),
		(PMIC_RG_LDO_VAUD28_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_OP_EN),
		(val),
		(PMIC_RG_LDO_VAUD28_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VAUD28_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaud28_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VAUD28_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VAUD28_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_OP_EN),
		(val),
		(PMIC_RG_LDO_VAUD28_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VAUD28_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaud28_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VAUD28_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VAUD28_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_OP_EN),
		(val),
		(PMIC_RG_LDO_VAUD28_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VAUD28_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaud28_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VAUD28_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VAUD28_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_OP_EN),
		(val),
		(PMIC_RG_LDO_VAUD28_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VAUD28_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaud28_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VAUD28_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VAUD28_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VAUD28_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUD28_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaud28_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VAUD28_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUD28_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VAUD28_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUD28_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaud28_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VAUD28_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUD28_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VAUD28_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUD28_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaud28_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VAUD28_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VAUD28_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vaud28_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_CON1),
		(&val),
		(PMIC_DA_VAUD28_MODE_MASK),
		(PMIC_DA_VAUD28_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_CON1),
		(val),
		(PMIC_RG_LDO_VAUD28_STBTD_MASK),
		(PMIC_RG_LDO_VAUD28_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vaud28_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_CON1),
		(&val),
		(PMIC_DA_VAUD28_STB_MASK),
		(PMIC_DA_VAUD28_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vaud28_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_CON1),
		(&val),
		(PMIC_DA_VAUD28_EN_MASK),
		(PMIC_DA_VAUD28_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_auxadc_pwdb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_CON2),
		(val),
		(PMIC_RG_LDO_VAUD28_AUXADC_PWDB_EN_MASK),
		(PMIC_RG_LDO_VAUD28_AUXADC_PWDB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaud28_auxadc_pwdb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_CON2),
		(&val),
		(PMIC_RG_LDO_VAUD28_AUXADC_PWDB_EN_MASK),
		(PMIC_RG_LDO_VAUD28_AUXADC_PWDB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_CON2),
		(val),
		(PMIC_RG_LDO_VAUD28_OCFB_EN_MASK),
		(PMIC_RG_LDO_VAUD28_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vaud28_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_CON2),
		(&val),
		(PMIC_RG_LDO_VAUD28_OCFB_EN_MASK),
		(PMIC_RG_LDO_VAUD28_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vaud28_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_CON2),
		(&val),
		(PMIC_DA_VAUD28_OCFB_EN_MASK),
		(PMIC_DA_VAUD28_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vaud28_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VAUD28_CON3),
		(val),
		(PMIC_RG_LDO_VAUD28_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VAUD28_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vaud28_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VAUD28_CON3),
		(&val),
		(PMIC_DA_VAUD28_DUMMY_LOAD_MASK),
		(PMIC_DA_VAUD28_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_CON0),
		(val),
		(PMIC_RG_LDO_VIO28_EN_MASK),
		(PMIC_RG_LDO_VIO28_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio28_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_CON0),
		(&val),
		(PMIC_RG_LDO_VIO28_EN_MASK),
		(PMIC_RG_LDO_VIO28_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_CON0),
		(val),
		(PMIC_RG_LDO_VIO28_LP_MASK),
		(PMIC_RG_LDO_VIO28_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_OP_EN),
		(val),
		(PMIC_RG_LDO_VIO28_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VIO28_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio28_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIO28_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VIO28_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_OP_EN),
		(val),
		(PMIC_RG_LDO_VIO28_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VIO28_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio28_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIO28_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VIO28_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_OP_EN),
		(val),
		(PMIC_RG_LDO_VIO28_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VIO28_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio28_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIO28_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VIO28_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_OP_EN),
		(val),
		(PMIC_RG_LDO_VIO28_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VIO28_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio28_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIO28_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VIO28_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VIO28_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO28_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio28_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VIO28_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO28_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VIO28_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO28_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio28_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VIO28_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO28_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VIO28_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO28_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio28_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VIO28_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO28_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vio28_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_CON1),
		(&val),
		(PMIC_DA_VIO28_MODE_MASK),
		(PMIC_DA_VIO28_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_CON1),
		(val),
		(PMIC_RG_LDO_VIO28_STBTD_MASK),
		(PMIC_RG_LDO_VIO28_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vio28_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_CON1),
		(&val),
		(PMIC_DA_VIO28_STB_MASK),
		(PMIC_DA_VIO28_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vio28_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_CON1),
		(&val),
		(PMIC_DA_VIO28_EN_MASK),
		(PMIC_DA_VIO28_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_CON2),
		(val),
		(PMIC_RG_LDO_VIO28_OCFB_EN_MASK),
		(PMIC_RG_LDO_VIO28_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio28_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_CON2),
		(&val),
		(PMIC_RG_LDO_VIO28_OCFB_EN_MASK),
		(PMIC_RG_LDO_VIO28_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vio28_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_CON2),
		(&val),
		(PMIC_DA_VIO28_OCFB_EN_MASK),
		(PMIC_DA_VIO28_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio28_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO28_CON3),
		(val),
		(PMIC_RG_LDO_VIO28_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VIO28_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vio28_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO28_CON3),
		(&val),
		(PMIC_DA_VIO28_DUMMY_LOAD_MASK),
		(PMIC_DA_VIO28_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_CON0),
		(val),
		(PMIC_RG_LDO_VIO18_EN_MASK),
		(PMIC_RG_LDO_VIO18_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio18_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_CON0),
		(&val),
		(PMIC_RG_LDO_VIO18_EN_MASK),
		(PMIC_RG_LDO_VIO18_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_CON0),
		(val),
		(PMIC_RG_LDO_VIO18_LP_MASK),
		(PMIC_RG_LDO_VIO18_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_OP_EN),
		(val),
		(PMIC_RG_LDO_VIO18_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VIO18_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio18_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIO18_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VIO18_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_OP_EN),
		(val),
		(PMIC_RG_LDO_VIO18_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VIO18_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio18_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIO18_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VIO18_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_OP_EN),
		(val),
		(PMIC_RG_LDO_VIO18_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VIO18_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio18_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIO18_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VIO18_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_OP_EN),
		(val),
		(PMIC_RG_LDO_VIO18_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VIO18_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio18_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIO18_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VIO18_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VIO18_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO18_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio18_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VIO18_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO18_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VIO18_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO18_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio18_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VIO18_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO18_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VIO18_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO18_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio18_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VIO18_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VIO18_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vio18_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_CON1),
		(&val),
		(PMIC_DA_VIO18_MODE_MASK),
		(PMIC_DA_VIO18_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_CON1),
		(val),
		(PMIC_RG_LDO_VIO18_STBTD_MASK),
		(PMIC_RG_LDO_VIO18_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vio18_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_CON1),
		(&val),
		(PMIC_DA_VIO18_STB_MASK),
		(PMIC_DA_VIO18_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vio18_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_CON1),
		(&val),
		(PMIC_DA_VIO18_EN_MASK),
		(PMIC_DA_VIO18_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_CON2),
		(val),
		(PMIC_RG_LDO_VIO18_OCFB_EN_MASK),
		(PMIC_RG_LDO_VIO18_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vio18_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_CON2),
		(&val),
		(PMIC_RG_LDO_VIO18_OCFB_EN_MASK),
		(PMIC_RG_LDO_VIO18_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vio18_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_CON2),
		(&val),
		(PMIC_DA_VIO18_OCFB_EN_MASK),
		(PMIC_DA_VIO18_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vio18_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIO18_CON3),
		(val),
		(PMIC_RG_LDO_VIO18_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VIO18_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vio18_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIO18_CON3),
		(&val),
		(PMIC_DA_VIO18_DUMMY_LOAD_MASK),
		(PMIC_DA_VIO18_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_CON0),
		(val),
		(PMIC_RG_LDO_VDRAM_EN_MASK),
		(PMIC_RG_LDO_VDRAM_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vdram_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_CON0),
		(&val),
		(PMIC_RG_LDO_VDRAM_EN_MASK),
		(PMIC_RG_LDO_VDRAM_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_CON0),
		(val),
		(PMIC_RG_LDO_VDRAM_LP_MASK),
		(PMIC_RG_LDO_VDRAM_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_OP_EN),
		(val),
		(PMIC_RG_LDO_VDRAM_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VDRAM_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vdram_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_OP_EN),
		(&val),
		(PMIC_RG_LDO_VDRAM_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VDRAM_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_OP_EN),
		(val),
		(PMIC_RG_LDO_VDRAM_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VDRAM_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vdram_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_OP_EN),
		(&val),
		(PMIC_RG_LDO_VDRAM_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VDRAM_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_OP_EN),
		(val),
		(PMIC_RG_LDO_VDRAM_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VDRAM_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vdram_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_OP_EN),
		(&val),
		(PMIC_RG_LDO_VDRAM_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VDRAM_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_OP_EN),
		(val),
		(PMIC_RG_LDO_VDRAM_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VDRAM_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vdram_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_OP_EN),
		(&val),
		(PMIC_RG_LDO_VDRAM_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VDRAM_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_OP_CFG),
		(val),
		(PMIC_RG_LDO_VDRAM_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VDRAM_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vdram_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VDRAM_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VDRAM_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_OP_CFG),
		(val),
		(PMIC_RG_LDO_VDRAM_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VDRAM_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vdram_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VDRAM_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VDRAM_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_OP_CFG),
		(val),
		(PMIC_RG_LDO_VDRAM_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VDRAM_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vdram_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VDRAM_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VDRAM_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vdram_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_CON1),
		(&val),
		(PMIC_DA_VDRAM_MODE_MASK),
		(PMIC_DA_VDRAM_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_CON1),
		(val),
		(PMIC_RG_LDO_VDRAM_STBTD_MASK),
		(PMIC_RG_LDO_VDRAM_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vdram_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_CON1),
		(&val),
		(PMIC_DA_VDRAM_STB_MASK),
		(PMIC_DA_VDRAM_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vdram_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_CON1),
		(&val),
		(PMIC_DA_VDRAM_EN_MASK),
		(PMIC_DA_VDRAM_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_CON2),
		(val),
		(PMIC_RG_LDO_VDRAM_OCFB_EN_MASK),
		(PMIC_RG_LDO_VDRAM_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vdram_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_CON2),
		(&val),
		(PMIC_RG_LDO_VDRAM_OCFB_EN_MASK),
		(PMIC_RG_LDO_VDRAM_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vdram_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_CON2),
		(&val),
		(PMIC_DA_VDRAM_OCFB_EN_MASK),
		(PMIC_DA_VDRAM_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vdram_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VDRAM_CON3),
		(val),
		(PMIC_RG_LDO_VDRAM_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VDRAM_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vdram_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VDRAM_CON3),
		(&val),
		(PMIC_DA_VDRAM_DUMMY_LOAD_MASK),
		(PMIC_DA_VDRAM_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon1_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON1_DSN_ID),
		(&val),
		(PMIC_LDO_GON1_ANA_ID_MASK),
		(PMIC_LDO_GON1_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon1_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON1_DSN_ID),
		(&val),
		(PMIC_LDO_GON1_DIG_ID_MASK),
		(PMIC_LDO_GON1_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon1_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON1_DSN_REV0),
		(&val),
		(PMIC_LDO_GON1_ANA_MINOR_REV_MASK),
		(PMIC_LDO_GON1_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon1_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON1_DSN_REV0),
		(&val),
		(PMIC_LDO_GON1_ANA_MAJOR_REV_MASK),
		(PMIC_LDO_GON1_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon1_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON1_DSN_REV0),
		(&val),
		(PMIC_LDO_GON1_DIG_MINOR_REV_MASK),
		(PMIC_LDO_GON1_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon1_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON1_DSN_REV0),
		(&val),
		(PMIC_LDO_GON1_DIG_MAJOR_REV_MASK),
		(PMIC_LDO_GON1_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon1_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON1_DSN_DBI),
		(&val),
		(PMIC_LDO_GON1_DSN_CBS_MASK),
		(PMIC_LDO_GON1_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon1_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON1_DSN_DBI),
		(&val),
		(PMIC_LDO_GON1_DSN_BIX_MASK),
		(PMIC_LDO_GON1_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon1_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON1_DSN_DBI),
		(&val),
		(PMIC_LDO_GON1_DSN_ESP_MASK),
		(PMIC_LDO_GON1_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_gon1_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GON1_DSN_DXI),
		(&val),
		(PMIC_LDO_GON1_DSN_FPI_MASK),
		(PMIC_LDO_GON1_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_CON0),
		(val),
		(PMIC_RG_LDO_VEMC_EN_MASK),
		(PMIC_RG_LDO_VEMC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vemc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_CON0),
		(&val),
		(PMIC_RG_LDO_VEMC_EN_MASK),
		(PMIC_RG_LDO_VEMC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_CON0),
		(val),
		(PMIC_RG_LDO_VEMC_LP_MASK),
		(PMIC_RG_LDO_VEMC_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_OP_EN),
		(val),
		(PMIC_RG_LDO_VEMC_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VEMC_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vemc_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VEMC_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VEMC_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_OP_EN),
		(val),
		(PMIC_RG_LDO_VEMC_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VEMC_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vemc_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VEMC_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VEMC_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_OP_EN),
		(val),
		(PMIC_RG_LDO_VEMC_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VEMC_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vemc_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VEMC_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VEMC_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_OP_EN),
		(val),
		(PMIC_RG_LDO_VEMC_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VEMC_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vemc_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VEMC_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VEMC_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_OP_CFG),
		(val),
		(PMIC_RG_LDO_VEMC_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VEMC_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vemc_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VEMC_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VEMC_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_OP_CFG),
		(val),
		(PMIC_RG_LDO_VEMC_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VEMC_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vemc_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VEMC_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VEMC_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_OP_CFG),
		(val),
		(PMIC_RG_LDO_VEMC_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VEMC_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vemc_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VEMC_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VEMC_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vemc_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_CON1),
		(&val),
		(PMIC_DA_VEMC_MODE_MASK),
		(PMIC_DA_VEMC_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_CON1),
		(val),
		(PMIC_RG_LDO_VEMC_STBTD_MASK),
		(PMIC_RG_LDO_VEMC_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vemc_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_CON1),
		(&val),
		(PMIC_DA_VEMC_STB_MASK),
		(PMIC_DA_VEMC_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vemc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_CON1),
		(&val),
		(PMIC_DA_VEMC_EN_MASK),
		(PMIC_DA_VEMC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_CON2),
		(val),
		(PMIC_RG_LDO_VEMC_OCFB_EN_MASK),
		(PMIC_RG_LDO_VEMC_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vemc_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_CON2),
		(&val),
		(PMIC_RG_LDO_VEMC_OCFB_EN_MASK),
		(PMIC_RG_LDO_VEMC_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vemc_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_CON2),
		(&val),
		(PMIC_DA_VEMC_OCFB_EN_MASK),
		(PMIC_DA_VEMC_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vemc_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEMC_CON3),
		(val),
		(PMIC_RG_LDO_VEMC_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VEMC_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vemc_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEMC_CON3),
		(&val),
		(PMIC_DA_VEMC_DUMMY_LOAD_MASK),
		(PMIC_DA_VEMC_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_CON0_0),
		(val),
		(PMIC_RG_LDO_VUSB33_EN_0_MASK),
		(PMIC_RG_LDO_VUSB33_EN_0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vusb33_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_CON0_0),
		(&val),
		(PMIC_RG_LDO_VUSB33_EN_0_MASK),
		(PMIC_RG_LDO_VUSB33_EN_0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_CON0_0),
		(val),
		(PMIC_RG_LDO_VUSB33_LP_MASK),
		(PMIC_RG_LDO_VUSB33_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_OP_EN),
		(val),
		(PMIC_RG_LDO_VUSB33_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VUSB33_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vusb33_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_OP_EN),
		(&val),
		(PMIC_RG_LDO_VUSB33_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VUSB33_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_OP_EN),
		(val),
		(PMIC_RG_LDO_VUSB33_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VUSB33_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vusb33_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_OP_EN),
		(&val),
		(PMIC_RG_LDO_VUSB33_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VUSB33_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_OP_EN),
		(val),
		(PMIC_RG_LDO_VUSB33_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VUSB33_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vusb33_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_OP_EN),
		(&val),
		(PMIC_RG_LDO_VUSB33_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VUSB33_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_OP_EN),
		(val),
		(PMIC_RG_LDO_VUSB33_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VUSB33_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vusb33_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_OP_EN),
		(&val),
		(PMIC_RG_LDO_VUSB33_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VUSB33_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_OP_CFG),
		(val),
		(PMIC_RG_LDO_VUSB33_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VUSB33_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vusb33_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VUSB33_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VUSB33_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_OP_CFG),
		(val),
		(PMIC_RG_LDO_VUSB33_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VUSB33_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vusb33_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VUSB33_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VUSB33_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_OP_CFG),
		(val),
		(PMIC_RG_LDO_VUSB33_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VUSB33_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vusb33_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VUSB33_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VUSB33_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_1_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_CON0_1),
		(val),
		(PMIC_RG_LDO_VUSB33_EN_1_MASK),
		(PMIC_RG_LDO_VUSB33_EN_1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vusb33_1_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_CON0_1),
		(&val),
		(PMIC_RG_LDO_VUSB33_EN_1_MASK),
		(PMIC_RG_LDO_VUSB33_EN_1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vusb33_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_CON1),
		(&val),
		(PMIC_DA_VUSB33_MODE_MASK),
		(PMIC_DA_VUSB33_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_CON1),
		(val),
		(PMIC_RG_LDO_VUSB33_STBTD_MASK),
		(PMIC_RG_LDO_VUSB33_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vusb33_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_CON1),
		(&val),
		(PMIC_DA_VUSB33_STB_MASK),
		(PMIC_DA_VUSB33_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vusb33_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_CON1),
		(&val),
		(PMIC_DA_VUSB33_EN_MASK),
		(PMIC_DA_VUSB33_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_CON2),
		(val),
		(PMIC_RG_LDO_VUSB33_OCFB_EN_MASK),
		(PMIC_RG_LDO_VUSB33_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vusb33_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_CON2),
		(&val),
		(PMIC_RG_LDO_VUSB33_OCFB_EN_MASK),
		(PMIC_RG_LDO_VUSB33_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vusb33_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_CON2),
		(&val),
		(PMIC_DA_VUSB33_OCFB_EN_MASK),
		(PMIC_DA_VUSB33_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vusb33_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VUSB33_CON3),
		(val),
		(PMIC_RG_LDO_VUSB33_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VUSB33_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vusb33_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VUSB33_CON3),
		(&val),
		(PMIC_DA_VUSB33_DUMMY_LOAD_MASK),
		(PMIC_DA_VUSB33_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CON0),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_CON0),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CON0),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_LP_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_vosel_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CON2),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_SLEEP_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_vosel_sleep(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_CON2),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_SLEEP_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CFG0),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_SFCHG_FRATE_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_sfchg_fen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CFG0),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_SFCHG_FEN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CFG0),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_SFCHG_RRATE_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_sfchg_ren(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CFG0),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_SFCHG_REN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_dvs_trans_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CFG1),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_DVS_TRANS_TD_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_DVS_TRANS_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_dvs_trans_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CFG1),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_DVS_TRANS_CTRL_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_DVS_TRANS_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_dvs_trans_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CFG1),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_DVS_TRANS_ONCE_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_DVS_TRANS_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_OP_EN),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_OP_EN),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_OP_EN),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_OP_EN),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_proc_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_CON3),
		(&val),
		(PMIC_DA_VSRAM_PROC_MODE_MASK),
		(PMIC_DA_VSRAM_PROC_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CON3),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_STBTD_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CON4),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_OCFB_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_CON4),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_OCFB_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_proc_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_CON4),
		(&val),
		(PMIC_DA_VSRAM_PROC_OCFB_EN_MASK),
		(PMIC_DA_VSRAM_PROC_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_CON5),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vsram_proc_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_CON5),
		(&val),
		(PMIC_DA_VSRAM_PROC_DUMMY_LOAD_MASK),
		(PMIC_DA_VSRAM_PROC_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_proc_vosel_gray(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_DBG0),
		(&val),
		(PMIC_DA_VSRAM_PROC_VOSEL_GRAY_MASK),
		(PMIC_DA_VSRAM_PROC_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_proc_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_DBG0),
		(&val),
		(PMIC_DA_VSRAM_PROC_VOSEL_MASK),
		(PMIC_DA_VSRAM_PROC_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_proc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_DBG1),
		(&val),
		(PMIC_DA_VSRAM_PROC_EN_MASK),
		(PMIC_DA_VSRAM_PROC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_proc_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_DBG1),
		(&val),
		(PMIC_DA_VSRAM_PROC_STB_MASK),
		(PMIC_DA_VSRAM_PROC_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_proc_vsleep_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_DBG1),
		(&val),
		(PMIC_DA_VSRAM_PROC_VSLEEP_SEL_MASK),
		(PMIC_DA_VSRAM_PROC_VSLEEP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_proc_r2r_pdn(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_DBG1),
		(&val),
		(PMIC_DA_VSRAM_PROC_R2R_PDN_MASK),
		(PMIC_DA_VSRAM_PROC_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_proc_track_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_DBG1),
		(&val),
		(PMIC_DA_VSRAM_PROC_TRACK_NDIS_EN_MASK),
		(PMIC_DA_VSRAM_PROC_TRACK_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON0),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON0),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON0),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_LP_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_vosel_sleep(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON2),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_SLEEP_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_SLEEP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_vosel_sleep(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON2),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_SLEEP_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_SLEEP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_sfchg_frate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CFG0),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_SFCHG_FRATE_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_SFCHG_FRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_sfchg_fen(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CFG0),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_SFCHG_FEN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_SFCHG_FEN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_sfchg_rrate(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CFG0),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_SFCHG_RRATE_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_SFCHG_RRATE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_sfchg_ren(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CFG0),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_SFCHG_REN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_SFCHG_REN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_dvs_trans_td(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CFG1),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_DVS_TRANS_TD_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_DVS_TRANS_TD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_dvs_trans_ctrl(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CFG1),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_DVS_TRANS_CTRL_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_DVS_TRANS_CTRL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_dvs_trans_once(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CFG1),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_DVS_TRANS_ONCE_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_DVS_TRANS_ONCE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_EN),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_EN),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_EN),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_EN),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_others_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON3),
		(&val),
		(PMIC_DA_VSRAM_OTHERS_MODE_MASK),
		(PMIC_DA_VSRAM_OTHERS_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON3),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_STBTD_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON4),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_OCFB_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON4),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_OCFB_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_others_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON4),
		(&val),
		(PMIC_DA_VSRAM_OTHERS_OCFB_EN_MASK),
		(PMIC_DA_VSRAM_OTHERS_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON5),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vsram_others_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_CON5),
		(&val),
		(PMIC_DA_VSRAM_OTHERS_DUMMY_LOAD_MASK),
		(PMIC_DA_VSRAM_OTHERS_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_others_vosel_gray(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_DBG0),
		(&val),
		(PMIC_DA_VSRAM_OTHERS_VOSEL_GRAY_MASK),
		(PMIC_DA_VSRAM_OTHERS_VOSEL_GRAY_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_others_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_DBG0),
		(&val),
		(PMIC_DA_VSRAM_OTHERS_VOSEL_MASK),
		(PMIC_DA_VSRAM_OTHERS_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_others_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_DBG1),
		(&val),
		(PMIC_DA_VSRAM_OTHERS_EN_MASK),
		(PMIC_DA_VSRAM_OTHERS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_others_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_DBG1),
		(&val),
		(PMIC_DA_VSRAM_OTHERS_STB_MASK),
		(PMIC_DA_VSRAM_OTHERS_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_others_vsleep_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_DBG1),
		(&val),
		(PMIC_DA_VSRAM_OTHERS_VSLEEP_SEL_MASK),
		(PMIC_DA_VSRAM_OTHERS_VSLEEP_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_others_r2r_pdn(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_DBG1),
		(&val),
		(PMIC_DA_VSRAM_OTHERS_R2R_PDN_MASK),
		(PMIC_DA_VSRAM_OTHERS_R2R_PDN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsram_others_track_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_DBG1),
		(&val),
		(PMIC_DA_VSRAM_OTHERS_TRACK_NDIS_EN_MASK),
		(PMIC_DA_VSRAM_OTHERS_TRACK_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_sp_sw_vosel_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_SP),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_SP_SW_VOSEL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_sp_sw_vosel_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_SP),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_SP_SW_VOSEL_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_sp_sw_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_SP),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_SP_SW_VOSEL_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_SP_SW_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_sp_sw_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_PROC_SP),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_SP_SW_VOSEL_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_SP_SW_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_sp_sw_vosel_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_SP),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_SP_SW_VOSEL_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_sp_sw_vosel_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_SP),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_SP_SW_VOSEL_EN_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_SP_SW_VOSEL_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_sp_sw_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_SP),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_SP_SW_VOSEL_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_SP_SW_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_sp_sw_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_OTHERS_SP),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_SP_SW_VOSEL_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_SP_SW_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_r2r_pdn_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_PROC_R2R_PDN_DIS),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_R2R_PDN_DIS_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_R2R_PDN_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_r2r_pdn_dis(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_OTHERS_R2R_PDN_DIS),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_R2R_PDN_DIS_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_R2R_PDN_DIS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_ldo_vsram_proc_wdtdbg_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_WDT_DBG0),
		(&val),
		(PMIC_LDO_VSRAM_PROC_WDTDBG_VOSEL_MASK),
		(PMIC_LDO_VSRAM_PROC_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_vsram_others_wdtdbg_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_WDT_DBG0),
		(&val),
		(PMIC_LDO_VSRAM_OTHERS_WDTDBG_VOSEL_MASK),
		(PMIC_LDO_VSRAM_OTHERS_WDTDBG_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_CON0),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_CON0),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_CON1),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_CON1),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_proc_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_CON2),
		(val),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_proc_vosel_limit_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_CON2),
		(&val),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_LDO_VSRAM_PROC_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsram_others_vosel_limit_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSRAM_CON2),
		(val),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_LIMIT_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsram_others_vosel_limit_sel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSRAM_CON2),
		(&val),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_LIMIT_SEL_MASK),
		(PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_LIMIT_SEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff0_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF0_DSN_ID),
		(&val),
		(PMIC_LDO_GOFF0_ANA_ID_MASK),
		(PMIC_LDO_GOFF0_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff0_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF0_DSN_ID),
		(&val),
		(PMIC_LDO_GOFF0_DIG_ID_MASK),
		(PMIC_LDO_GOFF0_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff0_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF0_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF0_ANA_MINOR_REV_MASK),
		(PMIC_LDO_GOFF0_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff0_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF0_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF0_ANA_MAJOR_REV_MASK),
		(PMIC_LDO_GOFF0_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff0_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF0_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF0_DIG_MINOR_REV_MASK),
		(PMIC_LDO_GOFF0_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff0_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF0_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF0_DIG_MAJOR_REV_MASK),
		(PMIC_LDO_GOFF0_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff0_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF0_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF0_DSN_CBS_MASK),
		(PMIC_LDO_GOFF0_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff0_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF0_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF0_DSN_BIX_MASK),
		(PMIC_LDO_GOFF0_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff0_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF0_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF0_DSN_ESP_MASK),
		(PMIC_LDO_GOFF0_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff0_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF0_DSN_DXI),
		(&val),
		(PMIC_LDO_GOFF0_DSN_FPI_MASK),
		(PMIC_LDO_GOFF0_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_CON0),
		(val),
		(PMIC_RG_LDO_VFE28_EN_MASK),
		(PMIC_RG_LDO_VFE28_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vfe28_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_CON0),
		(&val),
		(PMIC_RG_LDO_VFE28_EN_MASK),
		(PMIC_RG_LDO_VFE28_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_CON0),
		(val),
		(PMIC_RG_LDO_VFE28_LP_MASK),
		(PMIC_RG_LDO_VFE28_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_OP_EN),
		(val),
		(PMIC_RG_LDO_VFE28_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VFE28_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vfe28_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VFE28_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VFE28_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_OP_EN),
		(val),
		(PMIC_RG_LDO_VFE28_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VFE28_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vfe28_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VFE28_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VFE28_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_OP_EN),
		(val),
		(PMIC_RG_LDO_VFE28_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VFE28_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vfe28_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VFE28_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VFE28_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_OP_EN),
		(val),
		(PMIC_RG_LDO_VFE28_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VFE28_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vfe28_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VFE28_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VFE28_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VFE28_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VFE28_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vfe28_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VFE28_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VFE28_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VFE28_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VFE28_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vfe28_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VFE28_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VFE28_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VFE28_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VFE28_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vfe28_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VFE28_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VFE28_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vfe28_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_CON1),
		(&val),
		(PMIC_DA_VFE28_MODE_MASK),
		(PMIC_DA_VFE28_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_CON1),
		(val),
		(PMIC_RG_LDO_VFE28_STBTD_MASK),
		(PMIC_RG_LDO_VFE28_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vfe28_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_CON1),
		(&val),
		(PMIC_DA_VFE28_STB_MASK),
		(PMIC_DA_VFE28_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vfe28_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_CON1),
		(&val),
		(PMIC_DA_VFE28_EN_MASK),
		(PMIC_DA_VFE28_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_CON2),
		(val),
		(PMIC_RG_LDO_VFE28_OCFB_EN_MASK),
		(PMIC_RG_LDO_VFE28_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vfe28_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_CON2),
		(&val),
		(PMIC_RG_LDO_VFE28_OCFB_EN_MASK),
		(PMIC_RG_LDO_VFE28_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vfe28_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_CON2),
		(&val),
		(PMIC_DA_VFE28_OCFB_EN_MASK),
		(PMIC_DA_VFE28_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vfe28_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VFE28_CON3),
		(val),
		(PMIC_RG_LDO_VFE28_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VFE28_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vfe28_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VFE28_CON3),
		(&val),
		(PMIC_DA_VFE28_DUMMY_LOAD_MASK),
		(PMIC_DA_VFE28_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_CON0),
		(val),
		(PMIC_RG_LDO_VRF18_EN_MASK),
		(PMIC_RG_LDO_VRF18_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf18_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_CON0),
		(&val),
		(PMIC_RG_LDO_VRF18_EN_MASK),
		(PMIC_RG_LDO_VRF18_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_CON0),
		(val),
		(PMIC_RG_LDO_VRF18_LP_MASK),
		(PMIC_RG_LDO_VRF18_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_OP_EN),
		(val),
		(PMIC_RG_LDO_VRF18_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VRF18_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf18_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VRF18_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VRF18_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_OP_EN),
		(val),
		(PMIC_RG_LDO_VRF18_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VRF18_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf18_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VRF18_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VRF18_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_OP_EN),
		(val),
		(PMIC_RG_LDO_VRF18_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VRF18_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf18_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VRF18_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VRF18_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_OP_EN),
		(val),
		(PMIC_RG_LDO_VRF18_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VRF18_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf18_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VRF18_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VRF18_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VRF18_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF18_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf18_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VRF18_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF18_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VRF18_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF18_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf18_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VRF18_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF18_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VRF18_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF18_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf18_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VRF18_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF18_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vrf18_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_CON1),
		(&val),
		(PMIC_DA_VRF18_MODE_MASK),
		(PMIC_DA_VRF18_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_CON1),
		(val),
		(PMIC_RG_LDO_VRF18_STBTD_MASK),
		(PMIC_RG_LDO_VRF18_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vrf18_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_CON1),
		(&val),
		(PMIC_DA_VRF18_STB_MASK),
		(PMIC_DA_VRF18_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vrf18_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_CON1),
		(&val),
		(PMIC_DA_VRF18_EN_MASK),
		(PMIC_DA_VRF18_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_CON2),
		(val),
		(PMIC_RG_LDO_VRF18_OCFB_EN_MASK),
		(PMIC_RG_LDO_VRF18_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf18_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_CON2),
		(&val),
		(PMIC_RG_LDO_VRF18_OCFB_EN_MASK),
		(PMIC_RG_LDO_VRF18_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vrf18_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_CON2),
		(&val),
		(PMIC_DA_VRF18_OCFB_EN_MASK),
		(PMIC_DA_VRF18_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf18_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF18_CON3),
		(val),
		(PMIC_RG_LDO_VRF18_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VRF18_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vrf18_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF18_CON3),
		(&val),
		(PMIC_DA_VRF18_DUMMY_LOAD_MASK),
		(PMIC_DA_VRF18_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_CON0),
		(val),
		(PMIC_RG_LDO_VRF12_EN_MASK),
		(PMIC_RG_LDO_VRF12_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf12_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_CON0),
		(&val),
		(PMIC_RG_LDO_VRF12_EN_MASK),
		(PMIC_RG_LDO_VRF12_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_CON0),
		(val),
		(PMIC_RG_LDO_VRF12_LP_MASK),
		(PMIC_RG_LDO_VRF12_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_OP_EN),
		(val),
		(PMIC_RG_LDO_VRF12_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VRF12_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf12_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_OP_EN),
		(&val),
		(PMIC_RG_LDO_VRF12_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VRF12_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_OP_EN),
		(val),
		(PMIC_RG_LDO_VRF12_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VRF12_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf12_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_OP_EN),
		(&val),
		(PMIC_RG_LDO_VRF12_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VRF12_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_OP_EN),
		(val),
		(PMIC_RG_LDO_VRF12_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VRF12_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf12_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_OP_EN),
		(&val),
		(PMIC_RG_LDO_VRF12_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VRF12_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_OP_EN),
		(val),
		(PMIC_RG_LDO_VRF12_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VRF12_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf12_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_OP_EN),
		(&val),
		(PMIC_RG_LDO_VRF12_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VRF12_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_OP_CFG),
		(val),
		(PMIC_RG_LDO_VRF12_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF12_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf12_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VRF12_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF12_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_OP_CFG),
		(val),
		(PMIC_RG_LDO_VRF12_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF12_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf12_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VRF12_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF12_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_OP_CFG),
		(val),
		(PMIC_RG_LDO_VRF12_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF12_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf12_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VRF12_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VRF12_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vrf12_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_CON1),
		(&val),
		(PMIC_DA_VRF12_MODE_MASK),
		(PMIC_DA_VRF12_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_CON1),
		(val),
		(PMIC_RG_LDO_VRF12_STBTD_MASK),
		(PMIC_RG_LDO_VRF12_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vrf12_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_CON1),
		(&val),
		(PMIC_DA_VRF12_STB_MASK),
		(PMIC_DA_VRF12_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vrf12_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_CON1),
		(&val),
		(PMIC_DA_VRF12_EN_MASK),
		(PMIC_DA_VRF12_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_CON2),
		(val),
		(PMIC_RG_LDO_VRF12_OCFB_EN_MASK),
		(PMIC_RG_LDO_VRF12_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vrf12_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_CON2),
		(&val),
		(PMIC_RG_LDO_VRF12_OCFB_EN_MASK),
		(PMIC_RG_LDO_VRF12_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vrf12_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_CON2),
		(&val),
		(PMIC_DA_VRF12_OCFB_EN_MASK),
		(PMIC_DA_VRF12_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vrf12_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VRF12_CON3),
		(val),
		(PMIC_RG_LDO_VRF12_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VRF12_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vrf12_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VRF12_CON3),
		(&val),
		(PMIC_DA_VRF12_DUMMY_LOAD_MASK),
		(PMIC_DA_VRF12_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_CON0),
		(val),
		(PMIC_RG_LDO_VEFUSE_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vefuse_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_CON0),
		(&val),
		(PMIC_RG_LDO_VEFUSE_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_CON0),
		(val),
		(PMIC_RG_LDO_VEFUSE_LP_MASK),
		(PMIC_RG_LDO_VEFUSE_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_OP_EN),
		(val),
		(PMIC_RG_LDO_VEFUSE_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vefuse_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_OP_EN),
		(&val),
		(PMIC_RG_LDO_VEFUSE_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_OP_EN),
		(val),
		(PMIC_RG_LDO_VEFUSE_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vefuse_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_OP_EN),
		(&val),
		(PMIC_RG_LDO_VEFUSE_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_OP_EN),
		(val),
		(PMIC_RG_LDO_VEFUSE_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vefuse_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_OP_EN),
		(&val),
		(PMIC_RG_LDO_VEFUSE_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_OP_EN),
		(val),
		(PMIC_RG_LDO_VEFUSE_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vefuse_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_OP_EN),
		(&val),
		(PMIC_RG_LDO_VEFUSE_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_OP_CFG),
		(val),
		(PMIC_RG_LDO_VEFUSE_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VEFUSE_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vefuse_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VEFUSE_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VEFUSE_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_OP_CFG),
		(val),
		(PMIC_RG_LDO_VEFUSE_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VEFUSE_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vefuse_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VEFUSE_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VEFUSE_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_OP_CFG),
		(val),
		(PMIC_RG_LDO_VEFUSE_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VEFUSE_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vefuse_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VEFUSE_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VEFUSE_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vefuse_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_CON1),
		(&val),
		(PMIC_DA_VEFUSE_MODE_MASK),
		(PMIC_DA_VEFUSE_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_CON1),
		(val),
		(PMIC_RG_LDO_VEFUSE_STBTD_MASK),
		(PMIC_RG_LDO_VEFUSE_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vefuse_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_CON1),
		(&val),
		(PMIC_DA_VEFUSE_STB_MASK),
		(PMIC_DA_VEFUSE_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vefuse_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_CON1),
		(&val),
		(PMIC_DA_VEFUSE_EN_MASK),
		(PMIC_DA_VEFUSE_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_CON2),
		(val),
		(PMIC_RG_LDO_VEFUSE_OCFB_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vefuse_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_CON2),
		(&val),
		(PMIC_RG_LDO_VEFUSE_OCFB_EN_MASK),
		(PMIC_RG_LDO_VEFUSE_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vefuse_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_CON2),
		(&val),
		(PMIC_DA_VEFUSE_OCFB_EN_MASK),
		(PMIC_DA_VEFUSE_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vefuse_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VEFUSE_CON3),
		(val),
		(PMIC_RG_LDO_VEFUSE_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VEFUSE_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vefuse_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VEFUSE_CON3),
		(&val),
		(PMIC_DA_VEFUSE_DUMMY_LOAD_MASK),
		(PMIC_DA_VEFUSE_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_CON0),
		(val),
		(PMIC_RG_LDO_VCN18_EN_MASK),
		(PMIC_RG_LDO_VCN18_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn18_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_CON0),
		(&val),
		(PMIC_RG_LDO_VCN18_EN_MASK),
		(PMIC_RG_LDO_VCN18_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_CON0),
		(val),
		(PMIC_RG_LDO_VCN18_LP_MASK),
		(PMIC_RG_LDO_VCN18_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN18_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCN18_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn18_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN18_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCN18_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN18_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCN18_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn18_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN18_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCN18_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN18_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCN18_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn18_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN18_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCN18_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN18_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCN18_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn18_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN18_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCN18_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCN18_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN18_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn18_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCN18_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN18_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCN18_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN18_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn18_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCN18_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN18_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCN18_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN18_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn18_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCN18_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN18_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcn18_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_CON1),
		(&val),
		(PMIC_DA_VCN18_MODE_MASK),
		(PMIC_DA_VCN18_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_CON1),
		(val),
		(PMIC_RG_LDO_VCN18_STBTD_MASK),
		(PMIC_RG_LDO_VCN18_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcn18_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_CON1),
		(&val),
		(PMIC_DA_VCN18_STB_MASK),
		(PMIC_DA_VCN18_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcn18_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_CON1),
		(&val),
		(PMIC_DA_VCN18_EN_MASK),
		(PMIC_DA_VCN18_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_CON2),
		(val),
		(PMIC_RG_LDO_VCN18_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCN18_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn18_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_CON2),
		(&val),
		(PMIC_RG_LDO_VCN18_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCN18_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcn18_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_CON2),
		(&val),
		(PMIC_DA_VCN18_OCFB_EN_MASK),
		(PMIC_DA_VCN18_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn18_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN18_CON3),
		(val),
		(PMIC_RG_LDO_VCN18_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VCN18_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcn18_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN18_CON3),
		(&val),
		(PMIC_DA_VCN18_DUMMY_LOAD_MASK),
		(PMIC_DA_VCN18_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_CON0),
		(val),
		(PMIC_RG_LDO_VCAMA_EN_MASK),
		(PMIC_RG_LDO_VCAMA_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcama_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_CON0),
		(&val),
		(PMIC_RG_LDO_VCAMA_EN_MASK),
		(PMIC_RG_LDO_VCAMA_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_CON0),
		(val),
		(PMIC_RG_LDO_VCAMA_LP_MASK),
		(PMIC_RG_LDO_VCAMA_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMA_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMA_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcama_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMA_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMA_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMA_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMA_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcama_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMA_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMA_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMA_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMA_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcama_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMA_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMA_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMA_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMA_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcama_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMA_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMA_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCAMA_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMA_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcama_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCAMA_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMA_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCAMA_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMA_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcama_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCAMA_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMA_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCAMA_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMA_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcama_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCAMA_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMA_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcama_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_CON1),
		(&val),
		(PMIC_DA_VCAMA_MODE_MASK),
		(PMIC_DA_VCAMA_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_CON1),
		(val),
		(PMIC_RG_LDO_VCAMA_STBTD_MASK),
		(PMIC_RG_LDO_VCAMA_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcama_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_CON1),
		(&val),
		(PMIC_DA_VCAMA_STB_MASK),
		(PMIC_DA_VCAMA_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcama_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_CON1),
		(&val),
		(PMIC_DA_VCAMA_EN_MASK),
		(PMIC_DA_VCAMA_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_CON2),
		(val),
		(PMIC_RG_LDO_VCAMA_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCAMA_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcama_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_CON2),
		(&val),
		(PMIC_RG_LDO_VCAMA_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCAMA_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcama_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_CON2),
		(&val),
		(PMIC_DA_VCAMA_OCFB_EN_MASK),
		(PMIC_DA_VCAMA_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcama_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMA_CON3),
		(val),
		(PMIC_RG_LDO_VCAMA_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VCAMA_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcama_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMA_CON3),
		(&val),
		(PMIC_DA_VCAMA_DUMMY_LOAD_MASK),
		(PMIC_DA_VCAMA_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff1_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF1_DSN_ID),
		(&val),
		(PMIC_LDO_GOFF1_ANA_ID_MASK),
		(PMIC_LDO_GOFF1_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff1_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF1_DSN_ID),
		(&val),
		(PMIC_LDO_GOFF1_DIG_ID_MASK),
		(PMIC_LDO_GOFF1_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff1_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF1_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF1_ANA_MINOR_REV_MASK),
		(PMIC_LDO_GOFF1_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff1_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF1_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF1_ANA_MAJOR_REV_MASK),
		(PMIC_LDO_GOFF1_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff1_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF1_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF1_DIG_MINOR_REV_MASK),
		(PMIC_LDO_GOFF1_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff1_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF1_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF1_DIG_MAJOR_REV_MASK),
		(PMIC_LDO_GOFF1_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff1_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF1_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF1_DSN_CBS_MASK),
		(PMIC_LDO_GOFF1_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff1_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF1_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF1_DSN_BIX_MASK),
		(PMIC_LDO_GOFF1_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff1_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF1_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF1_DSN_ESP_MASK),
		(PMIC_LDO_GOFF1_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff1_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF1_DSN_DXI),
		(&val),
		(PMIC_LDO_GOFF1_DSN_FPI_MASK),
		(PMIC_LDO_GOFF1_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_CON0),
		(val),
		(PMIC_RG_LDO_VCAMD_EN_MASK),
		(PMIC_RG_LDO_VCAMD_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamd_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_CON0),
		(&val),
		(PMIC_RG_LDO_VCAMD_EN_MASK),
		(PMIC_RG_LDO_VCAMD_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_CON0),
		(val),
		(PMIC_RG_LDO_VCAMD_LP_MASK),
		(PMIC_RG_LDO_VCAMD_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMD_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMD_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamd_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMD_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMD_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMD_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMD_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamd_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMD_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMD_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMD_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMD_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamd_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMD_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMD_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMD_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMD_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamd_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMD_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMD_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCAMD_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMD_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamd_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCAMD_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMD_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCAMD_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMD_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamd_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCAMD_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMD_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCAMD_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMD_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamd_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCAMD_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMD_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcamd_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_CON1),
		(&val),
		(PMIC_DA_VCAMD_MODE_MASK),
		(PMIC_DA_VCAMD_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_CON1),
		(val),
		(PMIC_RG_LDO_VCAMD_STBTD_MASK),
		(PMIC_RG_LDO_VCAMD_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcamd_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_CON1),
		(&val),
		(PMIC_DA_VCAMD_STB_MASK),
		(PMIC_DA_VCAMD_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcamd_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_CON1),
		(&val),
		(PMIC_DA_VCAMD_EN_MASK),
		(PMIC_DA_VCAMD_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_CON2),
		(val),
		(PMIC_RG_LDO_VCAMD_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCAMD_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamd_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_CON2),
		(&val),
		(PMIC_RG_LDO_VCAMD_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCAMD_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcamd_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_CON2),
		(&val),
		(PMIC_DA_VCAMD_OCFB_EN_MASK),
		(PMIC_DA_VCAMD_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamd_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMD_CON3),
		(val),
		(PMIC_RG_LDO_VCAMD_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VCAMD_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcamd_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMD_CON3),
		(&val),
		(PMIC_DA_VCAMD_DUMMY_LOAD_MASK),
		(PMIC_DA_VCAMD_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_CON0),
		(val),
		(PMIC_RG_LDO_VCAMIO_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamio_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_CON0),
		(&val),
		(PMIC_RG_LDO_VCAMIO_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_CON0),
		(val),
		(PMIC_RG_LDO_VCAMIO_LP_MASK),
		(PMIC_RG_LDO_VCAMIO_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMIO_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamio_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMIO_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMIO_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamio_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMIO_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMIO_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamio_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMIO_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_OP_EN),
		(val),
		(PMIC_RG_LDO_VCAMIO_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamio_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCAMIO_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCAMIO_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMIO_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamio_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCAMIO_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMIO_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCAMIO_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMIO_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamio_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCAMIO_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMIO_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCAMIO_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMIO_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamio_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCAMIO_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCAMIO_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcamio_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_CON1),
		(&val),
		(PMIC_DA_VCAMIO_MODE_MASK),
		(PMIC_DA_VCAMIO_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_CON1),
		(val),
		(PMIC_RG_LDO_VCAMIO_STBTD_MASK),
		(PMIC_RG_LDO_VCAMIO_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcamio_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_CON1),
		(&val),
		(PMIC_DA_VCAMIO_STB_MASK),
		(PMIC_DA_VCAMIO_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcamio_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_CON1),
		(&val),
		(PMIC_DA_VCAMIO_EN_MASK),
		(PMIC_DA_VCAMIO_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_CON2),
		(val),
		(PMIC_RG_LDO_VCAMIO_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcamio_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_CON2),
		(&val),
		(PMIC_RG_LDO_VCAMIO_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCAMIO_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcamio_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_CON2),
		(&val),
		(PMIC_DA_VCAMIO_OCFB_EN_MASK),
		(PMIC_DA_VCAMIO_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcamio_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCAMIO_CON3),
		(val),
		(PMIC_RG_LDO_VCAMIO_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VCAMIO_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcamio_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCAMIO_CON3),
		(&val),
		(PMIC_DA_VCAMIO_DUMMY_LOAD_MASK),
		(PMIC_DA_VCAMIO_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_CON0),
		(val),
		(PMIC_RG_LDO_VMC_EN_MASK),
		(PMIC_RG_LDO_VMC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_CON0),
		(&val),
		(PMIC_RG_LDO_VMC_EN_MASK),
		(PMIC_RG_LDO_VMC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_CON0),
		(val),
		(PMIC_RG_LDO_VMC_LP_MASK),
		(PMIC_RG_LDO_VMC_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_OP_EN),
		(val),
		(PMIC_RG_LDO_VMC_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VMC_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmc_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VMC_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VMC_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_OP_EN),
		(val),
		(PMIC_RG_LDO_VMC_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VMC_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmc_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VMC_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VMC_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_OP_EN),
		(val),
		(PMIC_RG_LDO_VMC_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VMC_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmc_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VMC_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VMC_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_OP_EN),
		(val),
		(PMIC_RG_LDO_VMC_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VMC_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmc_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_OP_EN),
		(&val),
		(PMIC_RG_LDO_VMC_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VMC_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_OP_CFG),
		(val),
		(PMIC_RG_LDO_VMC_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VMC_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmc_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VMC_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VMC_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_OP_CFG),
		(val),
		(PMIC_RG_LDO_VMC_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VMC_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmc_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VMC_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VMC_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_OP_CFG),
		(val),
		(PMIC_RG_LDO_VMC_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VMC_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmc_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VMC_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VMC_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmc_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_CON1),
		(&val),
		(PMIC_DA_VMC_MODE_MASK),
		(PMIC_DA_VMC_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_CON1),
		(val),
		(PMIC_RG_LDO_VMC_STBTD_MASK),
		(PMIC_RG_LDO_VMC_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vmc_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_CON1),
		(&val),
		(PMIC_DA_VMC_STB_MASK),
		(PMIC_DA_VMC_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_CON1),
		(&val),
		(PMIC_DA_VMC_EN_MASK),
		(PMIC_DA_VMC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_CON2),
		(val),
		(PMIC_RG_LDO_VMC_OCFB_EN_MASK),
		(PMIC_RG_LDO_VMC_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmc_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_CON2),
		(&val),
		(PMIC_RG_LDO_VMC_OCFB_EN_MASK),
		(PMIC_RG_LDO_VMC_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmc_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_CON2),
		(&val),
		(PMIC_DA_VMC_OCFB_EN_MASK),
		(PMIC_DA_VMC_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmc_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMC_CON3),
		(val),
		(PMIC_RG_LDO_VMC_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VMC_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vmc_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMC_CON3),
		(&val),
		(PMIC_DA_VMC_DUMMY_LOAD_MASK),
		(PMIC_DA_VMC_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_CON0),
		(val),
		(PMIC_RG_LDO_VMCH_EN_MASK),
		(PMIC_RG_LDO_VMCH_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmch_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_CON0),
		(&val),
		(PMIC_RG_LDO_VMCH_EN_MASK),
		(PMIC_RG_LDO_VMCH_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_CON0),
		(val),
		(PMIC_RG_LDO_VMCH_LP_MASK),
		(PMIC_RG_LDO_VMCH_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_OP_EN),
		(val),
		(PMIC_RG_LDO_VMCH_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VMCH_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmch_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_OP_EN),
		(&val),
		(PMIC_RG_LDO_VMCH_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VMCH_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_OP_EN),
		(val),
		(PMIC_RG_LDO_VMCH_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VMCH_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmch_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_OP_EN),
		(&val),
		(PMIC_RG_LDO_VMCH_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VMCH_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_OP_EN),
		(val),
		(PMIC_RG_LDO_VMCH_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VMCH_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmch_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_OP_EN),
		(&val),
		(PMIC_RG_LDO_VMCH_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VMCH_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_OP_EN),
		(val),
		(PMIC_RG_LDO_VMCH_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VMCH_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmch_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_OP_EN),
		(&val),
		(PMIC_RG_LDO_VMCH_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VMCH_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_OP_CFG),
		(val),
		(PMIC_RG_LDO_VMCH_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VMCH_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmch_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VMCH_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VMCH_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_OP_CFG),
		(val),
		(PMIC_RG_LDO_VMCH_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VMCH_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmch_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VMCH_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VMCH_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_OP_CFG),
		(val),
		(PMIC_RG_LDO_VMCH_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VMCH_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmch_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VMCH_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VMCH_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmch_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_CON1),
		(&val),
		(PMIC_DA_VMCH_MODE_MASK),
		(PMIC_DA_VMCH_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_CON1),
		(val),
		(PMIC_RG_LDO_VMCH_STBTD_MASK),
		(PMIC_RG_LDO_VMCH_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vmch_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_CON1),
		(&val),
		(PMIC_DA_VMCH_STB_MASK),
		(PMIC_DA_VMCH_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmch_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_CON1),
		(&val),
		(PMIC_DA_VMCH_EN_MASK),
		(PMIC_DA_VMCH_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_CON2),
		(val),
		(PMIC_RG_LDO_VMCH_OCFB_EN_MASK),
		(PMIC_RG_LDO_VMCH_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vmch_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_CON2),
		(&val),
		(PMIC_RG_LDO_VMCH_OCFB_EN_MASK),
		(PMIC_RG_LDO_VMCH_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vmch_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_CON2),
		(&val),
		(PMIC_DA_VMCH_OCFB_EN_MASK),
		(PMIC_DA_VMCH_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vmch_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VMCH_CON3),
		(val),
		(PMIC_RG_LDO_VMCH_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VMCH_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vmch_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VMCH_CON3),
		(&val),
		(PMIC_DA_VMCH_DUMMY_LOAD_MASK),
		(PMIC_DA_VMCH_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_CON0),
		(val),
		(PMIC_RG_LDO_VSIM1_EN_MASK),
		(PMIC_RG_LDO_VSIM1_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim1_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_CON0),
		(&val),
		(PMIC_RG_LDO_VSIM1_EN_MASK),
		(PMIC_RG_LDO_VSIM1_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_CON0),
		(val),
		(PMIC_RG_LDO_VSIM1_LP_MASK),
		(PMIC_RG_LDO_VSIM1_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_OP_EN),
		(val),
		(PMIC_RG_LDO_VSIM1_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM1_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim1_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSIM1_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM1_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_OP_EN),
		(val),
		(PMIC_RG_LDO_VSIM1_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM1_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim1_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSIM1_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM1_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_OP_EN),
		(val),
		(PMIC_RG_LDO_VSIM1_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM1_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim1_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSIM1_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM1_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_OP_EN),
		(val),
		(PMIC_RG_LDO_VSIM1_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM1_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim1_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSIM1_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM1_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSIM1_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM1_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim1_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSIM1_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM1_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSIM1_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM1_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim1_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSIM1_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM1_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSIM1_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM1_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim1_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSIM1_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM1_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsim1_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_CON1),
		(&val),
		(PMIC_DA_VSIM1_MODE_MASK),
		(PMIC_DA_VSIM1_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_CON1),
		(val),
		(PMIC_RG_LDO_VSIM1_STBTD_MASK),
		(PMIC_RG_LDO_VSIM1_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vsim1_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_CON1),
		(&val),
		(PMIC_DA_VSIM1_STB_MASK),
		(PMIC_DA_VSIM1_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsim1_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_CON1),
		(&val),
		(PMIC_DA_VSIM1_EN_MASK),
		(PMIC_DA_VSIM1_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_CON2),
		(val),
		(PMIC_RG_LDO_VSIM1_OCFB_EN_MASK),
		(PMIC_RG_LDO_VSIM1_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim1_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_CON2),
		(&val),
		(PMIC_RG_LDO_VSIM1_OCFB_EN_MASK),
		(PMIC_RG_LDO_VSIM1_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsim1_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_CON2),
		(&val),
		(PMIC_DA_VSIM1_OCFB_EN_MASK),
		(PMIC_DA_VSIM1_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim1_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM1_CON3),
		(val),
		(PMIC_RG_LDO_VSIM1_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VSIM1_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vsim1_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM1_CON3),
		(&val),
		(PMIC_DA_VSIM1_DUMMY_LOAD_MASK),
		(PMIC_DA_VSIM1_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_CON0),
		(val),
		(PMIC_RG_LDO_VSIM2_EN_MASK),
		(PMIC_RG_LDO_VSIM2_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim2_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_CON0),
		(&val),
		(PMIC_RG_LDO_VSIM2_EN_MASK),
		(PMIC_RG_LDO_VSIM2_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_CON0),
		(val),
		(PMIC_RG_LDO_VSIM2_LP_MASK),
		(PMIC_RG_LDO_VSIM2_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_OP_EN),
		(val),
		(PMIC_RG_LDO_VSIM2_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM2_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim2_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSIM2_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM2_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_OP_EN),
		(val),
		(PMIC_RG_LDO_VSIM2_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM2_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim2_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSIM2_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM2_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_OP_EN),
		(val),
		(PMIC_RG_LDO_VSIM2_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM2_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim2_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSIM2_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM2_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_OP_EN),
		(val),
		(PMIC_RG_LDO_VSIM2_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM2_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim2_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_OP_EN),
		(&val),
		(PMIC_RG_LDO_VSIM2_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VSIM2_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSIM2_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM2_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim2_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSIM2_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM2_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSIM2_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM2_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim2_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSIM2_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM2_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_OP_CFG),
		(val),
		(PMIC_RG_LDO_VSIM2_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM2_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim2_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VSIM2_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VSIM2_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsim2_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_CON1),
		(&val),
		(PMIC_DA_VSIM2_MODE_MASK),
		(PMIC_DA_VSIM2_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_CON1),
		(val),
		(PMIC_RG_LDO_VSIM2_STBTD_MASK),
		(PMIC_RG_LDO_VSIM2_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vsim2_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_CON1),
		(&val),
		(PMIC_DA_VSIM2_STB_MASK),
		(PMIC_DA_VSIM2_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsim2_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_CON1),
		(&val),
		(PMIC_DA_VSIM2_EN_MASK),
		(PMIC_DA_VSIM2_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_CON2),
		(val),
		(PMIC_RG_LDO_VSIM2_OCFB_EN_MASK),
		(PMIC_RG_LDO_VSIM2_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vsim2_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_CON2),
		(&val),
		(PMIC_RG_LDO_VSIM2_OCFB_EN_MASK),
		(PMIC_RG_LDO_VSIM2_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vsim2_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_CON2),
		(&val),
		(PMIC_DA_VSIM2_OCFB_EN_MASK),
		(PMIC_DA_VSIM2_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vsim2_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VSIM2_CON3),
		(val),
		(PMIC_RG_LDO_VSIM2_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VSIM2_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vsim2_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VSIM2_CON3),
		(&val),
		(PMIC_DA_VSIM2_DUMMY_LOAD_MASK),
		(PMIC_DA_VSIM2_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff2_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF2_DSN_ID),
		(&val),
		(PMIC_LDO_GOFF2_ANA_ID_MASK),
		(PMIC_LDO_GOFF2_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff2_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF2_DSN_ID),
		(&val),
		(PMIC_LDO_GOFF2_DIG_ID_MASK),
		(PMIC_LDO_GOFF2_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff2_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF2_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF2_ANA_MINOR_REV_MASK),
		(PMIC_LDO_GOFF2_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff2_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF2_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF2_ANA_MAJOR_REV_MASK),
		(PMIC_LDO_GOFF2_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff2_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF2_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF2_DIG_MINOR_REV_MASK),
		(PMIC_LDO_GOFF2_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff2_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF2_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF2_DIG_MAJOR_REV_MASK),
		(PMIC_LDO_GOFF2_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff2_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF2_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF2_DSN_CBS_MASK),
		(PMIC_LDO_GOFF2_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff2_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF2_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF2_DSN_BIX_MASK),
		(PMIC_LDO_GOFF2_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff2_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF2_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF2_DSN_ESP_MASK),
		(PMIC_LDO_GOFF2_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff2_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF2_DSN_DXI),
		(&val),
		(PMIC_LDO_GOFF2_DSN_FPI_MASK),
		(PMIC_LDO_GOFF2_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_CON0),
		(val),
		(PMIC_RG_LDO_VIBR_EN_MASK),
		(PMIC_RG_LDO_VIBR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vibr_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_CON0),
		(&val),
		(PMIC_RG_LDO_VIBR_EN_MASK),
		(PMIC_RG_LDO_VIBR_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_CON0),
		(val),
		(PMIC_RG_LDO_VIBR_LP_MASK),
		(PMIC_RG_LDO_VIBR_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_OP_EN),
		(val),
		(PMIC_RG_LDO_VIBR_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VIBR_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vibr_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIBR_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VIBR_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_OP_EN),
		(val),
		(PMIC_RG_LDO_VIBR_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VIBR_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vibr_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIBR_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VIBR_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_OP_EN),
		(val),
		(PMIC_RG_LDO_VIBR_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VIBR_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vibr_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIBR_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VIBR_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_OP_EN),
		(val),
		(PMIC_RG_LDO_VIBR_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VIBR_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vibr_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_OP_EN),
		(&val),
		(PMIC_RG_LDO_VIBR_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VIBR_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_OP_CFG),
		(val),
		(PMIC_RG_LDO_VIBR_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VIBR_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vibr_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VIBR_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VIBR_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_OP_CFG),
		(val),
		(PMIC_RG_LDO_VIBR_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VIBR_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vibr_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VIBR_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VIBR_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_OP_CFG),
		(val),
		(PMIC_RG_LDO_VIBR_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VIBR_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vibr_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VIBR_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VIBR_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vibr_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_CON1),
		(&val),
		(PMIC_DA_VIBR_MODE_MASK),
		(PMIC_DA_VIBR_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_CON1),
		(val),
		(PMIC_RG_LDO_VIBR_STBTD_MASK),
		(PMIC_RG_LDO_VIBR_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vibr_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_CON1),
		(&val),
		(PMIC_DA_VIBR_STB_MASK),
		(PMIC_DA_VIBR_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vibr_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_CON1),
		(&val),
		(PMIC_DA_VIBR_EN_MASK),
		(PMIC_DA_VIBR_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_CON2),
		(val),
		(PMIC_RG_LDO_VIBR_OCFB_EN_MASK),
		(PMIC_RG_LDO_VIBR_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vibr_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_CON2),
		(&val),
		(PMIC_RG_LDO_VIBR_OCFB_EN_MASK),
		(PMIC_RG_LDO_VIBR_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vibr_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_CON2),
		(&val),
		(PMIC_DA_VIBR_OCFB_EN_MASK),
		(PMIC_DA_VIBR_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vibr_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VIBR_CON3),
		(val),
		(PMIC_RG_LDO_VIBR_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VIBR_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vibr_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VIBR_CON3),
		(&val),
		(PMIC_DA_VIBR_DUMMY_LOAD_MASK),
		(PMIC_DA_VIBR_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_bt_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_CON0_0),
		(val),
		(PMIC_RG_LDO_VCN33_EN_0_MASK),
		(PMIC_RG_LDO_VCN33_EN_0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn33_bt_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_CON0_0),
		(&val),
		(PMIC_RG_LDO_VCN33_EN_0_MASK),
		(PMIC_RG_LDO_VCN33_EN_0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_CON0_0),
		(val),
		(PMIC_RG_LDO_VCN33_LP_MASK),
		(PMIC_RG_LDO_VCN33_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN33_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCN33_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn33_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN33_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCN33_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN33_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCN33_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn33_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN33_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCN33_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN33_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCN33_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn33_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN33_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCN33_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN33_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCN33_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn33_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN33_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCN33_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCN33_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN33_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn33_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCN33_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN33_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCN33_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN33_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn33_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCN33_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN33_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCN33_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN33_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn33_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCN33_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN33_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_wifi_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_CON0_1),
		(val),
		(PMIC_RG_LDO_VCN33_EN_1_MASK),
		(PMIC_RG_LDO_VCN33_EN_1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn33_wifi_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_CON0_1),
		(&val),
		(PMIC_RG_LDO_VCN33_EN_1_MASK),
		(PMIC_RG_LDO_VCN33_EN_1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcn33_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_CON1),
		(&val),
		(PMIC_DA_VCN33_MODE_MASK),
		(PMIC_DA_VCN33_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_CON1),
		(val),
		(PMIC_RG_LDO_VCN33_STBTD_MASK),
		(PMIC_RG_LDO_VCN33_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcn33_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_CON1),
		(&val),
		(PMIC_DA_VCN33_STB_MASK),
		(PMIC_DA_VCN33_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcn33_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_CON1),
		(&val),
		(PMIC_DA_VCN33_EN_MASK),
		(PMIC_DA_VCN33_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_CON2),
		(val),
		(PMIC_RG_LDO_VCN33_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCN33_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn33_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_CON2),
		(&val),
		(PMIC_RG_LDO_VCN33_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCN33_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcn33_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_CON2),
		(&val),
		(PMIC_DA_VCN33_OCFB_EN_MASK),
		(PMIC_DA_VCN33_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn33_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN33_CON3),
		(val),
		(PMIC_RG_LDO_VCN33_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VCN33_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcn33_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN33_CON3),
		(&val),
		(PMIC_DA_VCN33_DUMMY_LOAD_MASK),
		(PMIC_DA_VCN33_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_CON0_0),
		(val),
		(PMIC_RG_LDO_VLDO28_EN_0_MASK),
		(PMIC_RG_LDO_VLDO28_EN_0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vldo28_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_CON0_0),
		(&val),
		(PMIC_RG_LDO_VLDO28_EN_0_MASK),
		(PMIC_RG_LDO_VLDO28_EN_0_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_CON0_0),
		(val),
		(PMIC_RG_LDO_VLDO28_LP_MASK),
		(PMIC_RG_LDO_VLDO28_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_OP_EN),
		(val),
		(PMIC_RG_LDO_VLDO28_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VLDO28_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vldo28_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VLDO28_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VLDO28_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_OP_EN),
		(val),
		(PMIC_RG_LDO_VLDO28_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VLDO28_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vldo28_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VLDO28_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VLDO28_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_OP_EN),
		(val),
		(PMIC_RG_LDO_VLDO28_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VLDO28_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vldo28_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VLDO28_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VLDO28_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_OP_EN),
		(val),
		(PMIC_RG_LDO_VLDO28_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VLDO28_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vldo28_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VLDO28_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VLDO28_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VLDO28_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VLDO28_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vldo28_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VLDO28_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VLDO28_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VLDO28_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VLDO28_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vldo28_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VLDO28_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VLDO28_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VLDO28_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VLDO28_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vldo28_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VLDO28_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VLDO28_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_1_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_CON0_1),
		(val),
		(PMIC_RG_LDO_VLDO28_EN_1_MASK),
		(PMIC_RG_LDO_VLDO28_EN_1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vldo28_1_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_CON0_1),
		(&val),
		(PMIC_RG_LDO_VLDO28_EN_1_MASK),
		(PMIC_RG_LDO_VLDO28_EN_1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vldo28_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_CON1),
		(&val),
		(PMIC_DA_VLDO28_MODE_MASK),
		(PMIC_DA_VLDO28_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_CON1),
		(val),
		(PMIC_RG_LDO_VLDO28_STBTD_MASK),
		(PMIC_RG_LDO_VLDO28_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vldo28_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_CON1),
		(&val),
		(PMIC_DA_VLDO28_STB_MASK),
		(PMIC_DA_VLDO28_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vldo28_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_CON1),
		(&val),
		(PMIC_DA_VLDO28_EN_MASK),
		(PMIC_DA_VLDO28_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_CON2),
		(val),
		(PMIC_RG_LDO_VLDO28_OCFB_EN_MASK),
		(PMIC_RG_LDO_VLDO28_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vldo28_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_CON2),
		(&val),
		(PMIC_RG_LDO_VLDO28_OCFB_EN_MASK),
		(PMIC_RG_LDO_VLDO28_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vldo28_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_CON2),
		(&val),
		(PMIC_DA_VLDO28_OCFB_EN_MASK),
		(PMIC_DA_VLDO28_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vldo28_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VLDO28_CON3),
		(val),
		(PMIC_RG_LDO_VLDO28_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VLDO28_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vldo28_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VLDO28_CON3),
		(&val),
		(PMIC_DA_VLDO28_DUMMY_LOAD_MASK),
		(PMIC_DA_VLDO28_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_goff2_rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_GOFF2_RSV_CON0),
		(val),
		(PMIC_RG_LDO_GOFF2_RSV0_MASK),
		(PMIC_RG_LDO_GOFF2_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_goff2_rsv1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_GOFF2_RSV_CON1),
		(val),
		(PMIC_RG_LDO_GOFF2_RSV1_MASK),
		(PMIC_RG_LDO_GOFF2_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_ldo_goff3_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF3_DSN_ID),
		(&val),
		(PMIC_LDO_GOFF3_ANA_ID_MASK),
		(PMIC_LDO_GOFF3_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff3_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF3_DSN_ID),
		(&val),
		(PMIC_LDO_GOFF3_DIG_ID_MASK),
		(PMIC_LDO_GOFF3_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff3_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF3_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF3_ANA_MINOR_REV_MASK),
		(PMIC_LDO_GOFF3_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff3_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF3_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF3_ANA_MAJOR_REV_MASK),
		(PMIC_LDO_GOFF3_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff3_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF3_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF3_DIG_MINOR_REV_MASK),
		(PMIC_LDO_GOFF3_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff3_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF3_DSN_REV0),
		(&val),
		(PMIC_LDO_GOFF3_DIG_MAJOR_REV_MASK),
		(PMIC_LDO_GOFF3_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff3_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF3_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF3_DSN_CBS_MASK),
		(PMIC_LDO_GOFF3_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff3_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF3_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF3_DSN_BIX_MASK),
		(PMIC_LDO_GOFF3_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff3_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF3_DSN_DBI),
		(&val),
		(PMIC_LDO_GOFF3_DSN_ESP_MASK),
		(PMIC_LDO_GOFF3_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_goff3_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_GOFF3_DSN_DXI),
		(&val),
		(PMIC_LDO_GOFF3_DSN_FPI_MASK),
		(PMIC_LDO_GOFF3_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_CON0),
		(val),
		(PMIC_RG_LDO_VCN28_EN_MASK),
		(PMIC_RG_LDO_VCN28_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn28_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_CON0),
		(&val),
		(PMIC_RG_LDO_VCN28_EN_MASK),
		(PMIC_RG_LDO_VCN28_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_lp(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_CON0),
		(val),
		(PMIC_RG_LDO_VCN28_LP_MASK),
		(PMIC_RG_LDO_VCN28_LP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN28_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCN28_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn28_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN28_SW_OP_EN_MASK),
		(PMIC_RG_LDO_VCN28_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN28_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCN28_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn28_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN28_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_VCN28_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN28_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCN28_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn28_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN28_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_VCN28_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN28_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCN28_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn28_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN28_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_VCN28_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_hw3_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_OP_EN),
		(val),
		(PMIC_RG_LDO_VCN28_HW3_OP_EN_MASK),
		(PMIC_RG_LDO_VCN28_HW3_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn28_hw3_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_OP_EN),
		(&val),
		(PMIC_RG_LDO_VCN28_HW3_OP_EN_MASK),
		(PMIC_RG_LDO_VCN28_HW3_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCN28_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN28_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn28_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCN28_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN28_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCN28_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN28_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn28_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCN28_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN28_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCN28_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN28_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn28_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCN28_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN28_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_hw3_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_OP_CFG),
		(val),
		(PMIC_RG_LDO_VCN28_HW3_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN28_HW3_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn28_hw3_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_OP_CFG),
		(&val),
		(PMIC_RG_LDO_VCN28_HW3_OP_CFG_MASK),
		(PMIC_RG_LDO_VCN28_HW3_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcn28_mode(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_CON1),
		(&val),
		(PMIC_DA_VCN28_MODE_MASK),
		(PMIC_DA_VCN28_MODE_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_CON1),
		(val),
		(PMIC_RG_LDO_VCN28_STBTD_MASK),
		(PMIC_RG_LDO_VCN28_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcn28_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_CON1),
		(&val),
		(PMIC_DA_VCN28_STB_MASK),
		(PMIC_DA_VCN28_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcn28_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_CON1),
		(&val),
		(PMIC_DA_VCN28_EN_MASK),
		(PMIC_DA_VCN28_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_ocfb_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_CON2),
		(val),
		(PMIC_RG_LDO_VCN28_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCN28_OCFB_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_vcn28_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_CON2),
		(&val),
		(PMIC_RG_LDO_VCN28_OCFB_EN_MASK),
		(PMIC_RG_LDO_VCN28_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vcn28_ocfb_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_CON2),
		(&val),
		(PMIC_DA_VCN28_OCFB_EN_MASK),
		(PMIC_DA_VCN28_OCFB_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_vcn28_dummy_load(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_VCN28_CON3),
		(val),
		(PMIC_RG_LDO_VCN28_DUMMY_LOAD_MASK),
		(PMIC_RG_LDO_VCN28_DUMMY_LOAD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_vcn28_dummy_load(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_VCN28_CON3),
		(&val),
		(PMIC_DA_VCN28_DUMMY_LOAD_MASK),
		(PMIC_DA_VCN28_DUMMY_LOAD_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vrtc_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VRTC_CON0),
		(val),
		(PMIC_RG_VRTC_EN_MASK),
		(PMIC_RG_VRTC_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vrtc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VRTC_CON0),
		(&val),
		(PMIC_RG_VRTC_EN_MASK),
		(PMIC_RG_VRTC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_vrtc_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VRTC_CON0),
		(&val),
		(PMIC_DA_VRTC_EN_MASK),
		(PMIC_DA_VRTC_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_tref_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TREF_CON0),
		(val),
		(PMIC_RG_LDO_TREF_EN_MASK),
		(PMIC_RG_LDO_TREF_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_tref_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TREF_CON0),
		(&val),
		(PMIC_RG_LDO_TREF_EN_MASK),
		(PMIC_RG_LDO_TREF_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_tref_sw_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TREF_OP_EN),
		(val),
		(PMIC_RG_LDO_TREF_SW_OP_EN_MASK),
		(PMIC_RG_LDO_TREF_SW_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_tref_sw_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TREF_OP_EN),
		(&val),
		(PMIC_RG_LDO_TREF_SW_OP_EN_MASK),
		(PMIC_RG_LDO_TREF_SW_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_tref_hw0_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TREF_OP_EN),
		(val),
		(PMIC_RG_LDO_TREF_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_TREF_HW0_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_tref_hw0_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TREF_OP_EN),
		(&val),
		(PMIC_RG_LDO_TREF_HW0_OP_EN_MASK),
		(PMIC_RG_LDO_TREF_HW0_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_tref_hw1_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TREF_OP_EN),
		(val),
		(PMIC_RG_LDO_TREF_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_TREF_HW1_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_tref_hw1_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TREF_OP_EN),
		(&val),
		(PMIC_RG_LDO_TREF_HW1_OP_EN_MASK),
		(PMIC_RG_LDO_TREF_HW1_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_tref_hw2_op_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TREF_OP_EN),
		(val),
		(PMIC_RG_LDO_TREF_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_TREF_HW2_OP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_tref_hw2_op_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TREF_OP_EN),
		(&val),
		(PMIC_RG_LDO_TREF_HW2_OP_EN_MASK),
		(PMIC_RG_LDO_TREF_HW2_OP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_tref_hw0_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TREF_OP_CFG),
		(val),
		(PMIC_RG_LDO_TREF_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_TREF_HW0_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_tref_hw0_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TREF_OP_CFG),
		(&val),
		(PMIC_RG_LDO_TREF_HW0_OP_CFG_MASK),
		(PMIC_RG_LDO_TREF_HW0_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_tref_hw1_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TREF_OP_CFG),
		(val),
		(PMIC_RG_LDO_TREF_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_TREF_HW1_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_tref_hw1_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TREF_OP_CFG),
		(&val),
		(PMIC_RG_LDO_TREF_HW1_OP_CFG_MASK),
		(PMIC_RG_LDO_TREF_HW1_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_tref_hw2_op_cfg(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TREF_OP_CFG),
		(val),
		(PMIC_RG_LDO_TREF_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_TREF_HW2_OP_CFG_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_ldo_tref_hw2_op_cfg(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TREF_OP_CFG),
		(&val),
		(PMIC_RG_LDO_TREF_HW2_OP_CFG_MASK),
		(PMIC_RG_LDO_TREF_HW2_OP_CFG_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_tref_stbtd(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_TREF_CON1),
		(val),
		(PMIC_RG_LDO_TREF_STBTD_MASK),
		(PMIC_RG_LDO_TREF_STBTD_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_tref_stb(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TREF_CON1),
		(&val),
		(PMIC_DA_TREF_STB_MASK),
		(PMIC_DA_TREF_STB_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_tref_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_TREF_CON1),
		(&val),
		(PMIC_DA_TREF_EN_MASK),
		(PMIC_DA_TREF_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_ldo_goff3_rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_GOFF3_RSV_CON0),
		(val),
		(PMIC_RG_LDO_GOFF3_RSV0_MASK),
		(PMIC_RG_LDO_GOFF3_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_ldo_goff3_rsv1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_LDO_GOFF3_RSV_CON1),
		(val),
		(PMIC_RG_LDO_GOFF3_RSV1_MASK),
		(PMIC_RG_LDO_GOFF3_RSV1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_ldo_ana0_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA0_DSN_ID),
		(&val),
		(PMIC_LDO_ANA0_ANA_ID_MASK),
		(PMIC_LDO_ANA0_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana0_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA0_DSN_ID),
		(&val),
		(PMIC_LDO_ANA0_DIG_ID_MASK),
		(PMIC_LDO_ANA0_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana0_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA0_DSN_REV0),
		(&val),
		(PMIC_LDO_ANA0_ANA_MINOR_REV_MASK),
		(PMIC_LDO_ANA0_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana0_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA0_DSN_REV0),
		(&val),
		(PMIC_LDO_ANA0_ANA_MAJOR_REV_MASK),
		(PMIC_LDO_ANA0_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana0_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA0_DSN_REV0),
		(&val),
		(PMIC_LDO_ANA0_DIG_MINOR_REV_MASK),
		(PMIC_LDO_ANA0_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana0_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA0_DSN_REV0),
		(&val),
		(PMIC_LDO_ANA0_DIG_MAJOR_REV_MASK),
		(PMIC_LDO_ANA0_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana0_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA0_DSN_DBI),
		(&val),
		(PMIC_LDO_ANA0_DSN_CBS_MASK),
		(PMIC_LDO_ANA0_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana0_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA0_DSN_DBI),
		(&val),
		(PMIC_LDO_ANA0_DSN_BIX_MASK),
		(PMIC_LDO_ANA0_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana0_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA0_DSN_DBI),
		(&val),
		(PMIC_LDO_ANA0_DSN_ESP_MASK),
		(PMIC_LDO_ANA0_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana0_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA0_DSN_DXI),
		(&val),
		(PMIC_LDO_ANA0_DSN_FPI_MASK),
		(PMIC_LDO_ANA0_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vfe28_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VFE28_ANA_CON0),
		(val),
		(PMIC_RG_VFE28_VOCAL_MASK),
		(PMIC_RG_VFE28_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vfe28_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VFE28_ANA_CON1),
		(val),
		(PMIC_RG_VFE28_NDIS_EN_MASK),
		(PMIC_RG_VFE28_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vfe28_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VFE28_ANA_CON1),
		(&val),
		(PMIC_RG_VFE28_NDIS_EN_MASK),
		(PMIC_RG_VFE28_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcn28_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCN28_ANA_CON0),
		(val),
		(PMIC_RG_VCN28_VOCAL_MASK),
		(PMIC_RG_VCN28_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcn28_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCN28_ANA_CON1),
		(val),
		(PMIC_RG_VCN28_NDIS_EN_MASK),
		(PMIC_RG_VCN28_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcn28_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCN28_ANA_CON1),
		(&val),
		(PMIC_RG_VCN28_NDIS_EN_MASK),
		(PMIC_RG_VCN28_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vaud28_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VAUD28_ANA_CON0),
		(val),
		(PMIC_RG_VAUD28_VOCAL_MASK),
		(PMIC_RG_VAUD28_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vaud28_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VAUD28_ANA_CON1),
		(val),
		(PMIC_RG_VAUD28_NDIS_EN_MASK),
		(PMIC_RG_VAUD28_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vaud28_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VAUD28_ANA_CON1),
		(&val),
		(PMIC_RG_VAUD28_NDIS_EN_MASK),
		(PMIC_RG_VAUD28_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vaux18_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VAUX18_ANA_CON0),
		(val),
		(PMIC_RG_VAUX18_VOCAL_MASK),
		(PMIC_RG_VAUX18_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vaux18_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VAUX18_ANA_CON1),
		(val),
		(PMIC_RG_VAUX18_NDIS_EN_MASK),
		(PMIC_RG_VAUX18_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vaux18_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VAUX18_ANA_CON1),
		(&val),
		(PMIC_RG_VAUX18_NDIS_EN_MASK),
		(PMIC_RG_VAUX18_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vxo22_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VXO22_ANA_CON0),
		(val),
		(PMIC_RG_VXO22_VOCAL_MASK),
		(PMIC_RG_VXO22_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vxo22_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VXO22_ANA_CON0),
		(val),
		(PMIC_RG_VXO22_VOSEL_MASK),
		(PMIC_RG_VXO22_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vxo22_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VXO22_ANA_CON0),
		(&val),
		(PMIC_RG_VXO22_VOSEL_MASK),
		(PMIC_RG_VXO22_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vxo22_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VXO22_ANA_CON1),
		(val),
		(PMIC_RG_VXO22_NDIS_EN_MASK),
		(PMIC_RG_VXO22_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vxo22_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VXO22_ANA_CON1),
		(&val),
		(PMIC_RG_VXO22_NDIS_EN_MASK),
		(PMIC_RG_VXO22_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcn33_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCN33_ANA_CON0),
		(val),
		(PMIC_RG_VCN33_VOCAL_MASK),
		(PMIC_RG_VCN33_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcn33_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCN33_ANA_CON0),
		(val),
		(PMIC_RG_VCN33_VOSEL_MASK),
		(PMIC_RG_VCN33_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcn33_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCN33_ANA_CON0),
		(&val),
		(PMIC_RG_VCN33_VOSEL_MASK),
		(PMIC_RG_VCN33_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcn33_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCN33_ANA_CON1),
		(val),
		(PMIC_RG_VCN33_NDIS_EN_MASK),
		(PMIC_RG_VCN33_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcn33_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCN33_ANA_CON1),
		(&val),
		(PMIC_RG_VCN33_NDIS_EN_MASK),
		(PMIC_RG_VCN33_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vemc_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VEMC_ANA_CON0),
		(val),
		(PMIC_RG_VEMC_VOCAL_MASK),
		(PMIC_RG_VEMC_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vemc_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VEMC_ANA_CON0),
		(val),
		(PMIC_RG_VEMC_VOSEL_MASK),
		(PMIC_RG_VEMC_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vemc_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VEMC_ANA_CON0),
		(&val),
		(PMIC_RG_VEMC_VOSEL_MASK),
		(PMIC_RG_VEMC_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vemc_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VEMC_ANA_CON1),
		(val),
		(PMIC_RG_VEMC_NDIS_EN_MASK),
		(PMIC_RG_VEMC_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vemc_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VEMC_ANA_CON1),
		(&val),
		(PMIC_RG_VEMC_NDIS_EN_MASK),
		(PMIC_RG_VEMC_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vldo28_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VLDO28_ANA_CON0),
		(val),
		(PMIC_RG_VLDO28_VOCAL_MASK),
		(PMIC_RG_VLDO28_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vldo28_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VLDO28_ANA_CON0),
		(val),
		(PMIC_RG_VLDO28_VOSEL_MASK),
		(PMIC_RG_VLDO28_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vldo28_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VLDO28_ANA_CON0),
		(&val),
		(PMIC_RG_VLDO28_VOSEL_MASK),
		(PMIC_RG_VLDO28_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vldo28_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VLDO28_ANA_CON1),
		(val),
		(PMIC_RG_VLDO28_NDIS_EN_MASK),
		(PMIC_RG_VLDO28_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vldo28_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VLDO28_ANA_CON1),
		(&val),
		(PMIC_RG_VLDO28_NDIS_EN_MASK),
		(PMIC_RG_VLDO28_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vio28_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VIO28_ANA_CON0),
		(val),
		(PMIC_RG_VIO28_VOCAL_MASK),
		(PMIC_RG_VIO28_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vio28_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VIO28_ANA_CON1),
		(val),
		(PMIC_RG_VIO28_NDIS_EN_MASK),
		(PMIC_RG_VIO28_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vio28_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VIO28_ANA_CON1),
		(&val),
		(PMIC_RG_VIO28_NDIS_EN_MASK),
		(PMIC_RG_VIO28_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vibr_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VIBR_ANA_CON0),
		(val),
		(PMIC_RG_VIBR_VOCAL_MASK),
		(PMIC_RG_VIBR_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vibr_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VIBR_ANA_CON0),
		(val),
		(PMIC_RG_VIBR_VOSEL_MASK),
		(PMIC_RG_VIBR_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vibr_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VIBR_ANA_CON0),
		(&val),
		(PMIC_RG_VIBR_VOSEL_MASK),
		(PMIC_RG_VIBR_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vibr_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VIBR_ANA_CON1),
		(val),
		(PMIC_RG_VIBR_NDIS_EN_MASK),
		(PMIC_RG_VIBR_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vibr_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VIBR_ANA_CON1),
		(&val),
		(PMIC_RG_VIBR_NDIS_EN_MASK),
		(PMIC_RG_VIBR_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vsim1_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSIM1_ANA_CON0),
		(val),
		(PMIC_RG_VSIM1_VOCAL_MASK),
		(PMIC_RG_VSIM1_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsim1_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSIM1_ANA_CON0),
		(val),
		(PMIC_RG_VSIM1_VOSEL_MASK),
		(PMIC_RG_VSIM1_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vsim1_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VSIM1_ANA_CON0),
		(&val),
		(PMIC_RG_VSIM1_VOSEL_MASK),
		(PMIC_RG_VSIM1_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vsim1_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSIM1_ANA_CON1),
		(val),
		(PMIC_RG_VSIM1_NDIS_EN_MASK),
		(PMIC_RG_VSIM1_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vsim1_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VSIM1_ANA_CON1),
		(&val),
		(PMIC_RG_VSIM1_NDIS_EN_MASK),
		(PMIC_RG_VSIM1_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vsim2_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSIM2_ANA_CON0),
		(val),
		(PMIC_RG_VSIM2_VOCAL_MASK),
		(PMIC_RG_VSIM2_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsim2_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSIM2_ANA_CON0),
		(val),
		(PMIC_RG_VSIM2_VOSEL_MASK),
		(PMIC_RG_VSIM2_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vsim2_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VSIM2_ANA_CON0),
		(&val),
		(PMIC_RG_VSIM2_VOSEL_MASK),
		(PMIC_RG_VSIM2_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vsim2_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSIM2_ANA_CON1),
		(val),
		(PMIC_RG_VSIM2_NDIS_EN_MASK),
		(PMIC_RG_VSIM2_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vsim2_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VSIM2_ANA_CON1),
		(&val),
		(PMIC_RG_VSIM2_NDIS_EN_MASK),
		(PMIC_RG_VSIM2_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vmch_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMCH_ANA_CON0),
		(val),
		(PMIC_RG_VMCH_VOCAL_MASK),
		(PMIC_RG_VMCH_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmch_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMCH_ANA_CON0),
		(val),
		(PMIC_RG_VMCH_VOSEL_MASK),
		(PMIC_RG_VMCH_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vmch_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VMCH_ANA_CON0),
		(&val),
		(PMIC_RG_VMCH_VOSEL_MASK),
		(PMIC_RG_VMCH_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vmch_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMCH_ANA_CON1),
		(val),
		(PMIC_RG_VMCH_NDIS_EN_MASK),
		(PMIC_RG_VMCH_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vmch_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VMCH_ANA_CON1),
		(&val),
		(PMIC_RG_VMCH_NDIS_EN_MASK),
		(PMIC_RG_VMCH_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vmch_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMCH_ANA_CON1),
		(val),
		(PMIC_RG_VMCH_RSV_MASK),
		(PMIC_RG_VMCH_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmc_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMC_ANA_CON0),
		(val),
		(PMIC_RG_VMC_VOCAL_MASK),
		(PMIC_RG_VMC_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmc_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMC_ANA_CON0),
		(val),
		(PMIC_RG_VMC_VOSEL_MASK),
		(PMIC_RG_VMC_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vmc_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VMC_ANA_CON0),
		(&val),
		(PMIC_RG_VMC_VOSEL_MASK),
		(PMIC_RG_VMC_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vmc_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMC_ANA_CON1),
		(val),
		(PMIC_RG_VMC_NDIS_EN_MASK),
		(PMIC_RG_VMC_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vmc_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VMC_ANA_CON1),
		(&val),
		(PMIC_RG_VMC_NDIS_EN_MASK),
		(PMIC_RG_VMC_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcamio_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCAMIO_ANA_CON0),
		(val),
		(PMIC_RG_VCAMIO_VOCAL_MASK),
		(PMIC_RG_VCAMIO_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcamio_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCAMIO_ANA_CON1),
		(val),
		(PMIC_RG_VCAMIO_NDIS_EN_MASK),
		(PMIC_RG_VCAMIO_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcamio_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCAMIO_ANA_CON1),
		(&val),
		(PMIC_RG_VCAMIO_NDIS_EN_MASK),
		(PMIC_RG_VCAMIO_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcn18_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCN18_ANA_CON0),
		(val),
		(PMIC_RG_VCN18_VOCAL_MASK),
		(PMIC_RG_VCN18_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcn18_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCN18_ANA_CON1),
		(val),
		(PMIC_RG_VCN18_NDIS_EN_MASK),
		(PMIC_RG_VCN18_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcn18_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCN18_ANA_CON1),
		(&val),
		(PMIC_RG_VCN18_NDIS_EN_MASK),
		(PMIC_RG_VCN18_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vrf18_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VRF18_ANA_CON0),
		(val),
		(PMIC_RG_VRF18_VOCAL_MASK),
		(PMIC_RG_VRF18_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vrf18_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VRF18_ANA_CON1),
		(val),
		(PMIC_RG_VRF18_NDIS_EN_MASK),
		(PMIC_RG_VRF18_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vrf18_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VRF18_ANA_CON1),
		(&val),
		(PMIC_RG_VRF18_NDIS_EN_MASK),
		(PMIC_RG_VRF18_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vio18_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VIO18_ANA_CON0),
		(val),
		(PMIC_RG_VIO18_VOCAL_MASK),
		(PMIC_RG_VIO18_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vio18_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VIO18_ANA_CON1),
		(val),
		(PMIC_RG_VIO18_NDIS_EN_MASK),
		(PMIC_RG_VIO18_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vio18_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VIO18_ANA_CON1),
		(&val),
		(PMIC_RG_VIO18_NDIS_EN_MASK),
		(PMIC_RG_VIO18_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vdram_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VDRAM_ANA_CON1),
		(val),
		(PMIC_RG_VDRAM_NDIS_EN_MASK),
		(PMIC_RG_VDRAM_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vdram_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VDRAM_ANA_CON1),
		(&val),
		(PMIC_RG_VDRAM_NDIS_EN_MASK),
		(PMIC_RG_VDRAM_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vdram_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VDRAM_ANA_CON1),
		(val),
		(PMIC_RG_VDRAM_RSV_MASK),
		(PMIC_RG_VDRAM_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vrf12_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VRF12_ANA_CON0),
		(val),
		(PMIC_RG_VRF12_VOCAL_MASK),
		(PMIC_RG_VRF12_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vrf12_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VRF12_ANA_CON1),
		(val),
		(PMIC_RG_VRF12_NDIS_EN_MASK),
		(PMIC_RG_VRF12_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vrf12_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VRF12_ANA_CON1),
		(&val),
		(PMIC_RG_VRF12_NDIS_EN_MASK),
		(PMIC_RG_VRF12_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vsram_proc_stb_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_PROC_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_PROC_STB_SEL_MASK),
		(PMIC_RG_VSRAM_PROC_STB_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_proc_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_PROC_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_PROC_NDIS_EN_MASK),
		(PMIC_RG_VSRAM_PROC_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vsram_proc_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VSRAM_PROC_ANA_CON0),
		(&val),
		(PMIC_RG_VSRAM_PROC_NDIS_EN_MASK),
		(PMIC_RG_VSRAM_PROC_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vsram_proc_ndis_plcur(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_PROC_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_PROC_NDIS_PLCUR_MASK),
		(PMIC_RG_VSRAM_PROC_NDIS_PLCUR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_proc_plcur_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_PROC_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_PROC_PLCUR_EN_MASK),
		(PMIC_RG_VSRAM_PROC_PLCUR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vsram_proc_plcur_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VSRAM_PROC_ANA_CON0),
		(&val),
		(PMIC_RG_VSRAM_PROC_PLCUR_EN_MASK),
		(PMIC_RG_VSRAM_PROC_PLCUR_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vsram_proc_rsv_h(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_PROC_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_PROC_RSV_H_MASK),
		(PMIC_RG_VSRAM_PROC_RSV_H_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_proc_rsv_l(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_PROC_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_PROC_RSV_L_MASK),
		(PMIC_RG_VSRAM_PROC_RSV_L_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_others_stb_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_OTHERS_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_OTHERS_STB_SEL_MASK),
		(PMIC_RG_VSRAM_OTHERS_STB_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_others_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_OTHERS_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_OTHERS_NDIS_EN_MASK),
		(PMIC_RG_VSRAM_OTHERS_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vsram_others_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VSRAM_OTHERS_ANA_CON0),
		(&val),
		(PMIC_RG_VSRAM_OTHERS_NDIS_EN_MASK),
		(PMIC_RG_VSRAM_OTHERS_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vsram_others_ndis_plcur(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_OTHERS_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_OTHERS_NDIS_PLCUR_MASK),
		(PMIC_RG_VSRAM_OTHERS_NDIS_PLCUR_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_others_plcur_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_OTHERS_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_OTHERS_PLCUR_EN_MASK),
		(PMIC_RG_VSRAM_OTHERS_PLCUR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vsram_others_plcur_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VSRAM_OTHERS_ANA_CON0),
		(&val),
		(PMIC_RG_VSRAM_OTHERS_PLCUR_EN_MASK),
		(PMIC_RG_VSRAM_OTHERS_PLCUR_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vsram_others_rsv_h(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_OTHERS_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_OTHERS_RSV_H_MASK),
		(PMIC_RG_VSRAM_OTHERS_RSV_H_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsram_others_rsv_l(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSRAM_OTHERS_ANA_CON0),
		(val),
		(PMIC_RG_VSRAM_OTHERS_RSV_L_MASK),
		(PMIC_RG_VSRAM_OTHERS_RSV_L_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vfe28_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VFE28_ELR_0),
		(val),
		(PMIC_RG_VFE28_VOTRIM_MASK),
		(PMIC_RG_VFE28_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcn28_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCN28_ELR_0),
		(val),
		(PMIC_RG_VCN28_VOTRIM_MASK),
		(PMIC_RG_VCN28_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vaud28_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VAUD28_ELR_0),
		(val),
		(PMIC_RG_VAUD28_VOTRIM_MASK),
		(PMIC_RG_VAUD28_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vaux18_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VAUX18_ELR_0),
		(val),
		(PMIC_RG_VAUX18_VOTRIM_MASK),
		(PMIC_RG_VAUX18_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vxo22_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VXO22_ELR_0),
		(val),
		(PMIC_RG_VXO22_VOTRIM_MASK),
		(PMIC_RG_VXO22_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcn33_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCN33_ELR_0),
		(val),
		(PMIC_RG_VCN33_VOTRIM_MASK),
		(PMIC_RG_VCN33_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vemc_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VEMC_ELR_0),
		(val),
		(PMIC_RG_VEMC_VOTRIM_MASK),
		(PMIC_RG_VEMC_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vldo28_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VLDO28_ELR_0),
		(val),
		(PMIC_RG_VLDO28_VOTRIM_MASK),
		(PMIC_RG_VLDO28_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vio28_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VIO28_ELR_0),
		(val),
		(PMIC_RG_VIO28_VOTRIM_MASK),
		(PMIC_RG_VIO28_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vibr_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VIBR_ELR_0),
		(val),
		(PMIC_RG_VIBR_VOTRIM_MASK),
		(PMIC_RG_VIBR_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsim1_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSIM1_ELR_0),
		(val),
		(PMIC_RG_VSIM1_VOTRIM_MASK),
		(PMIC_RG_VSIM1_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vsim2_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VSIM2_ELR_0),
		(val),
		(PMIC_RG_VSIM2_VOTRIM_MASK),
		(PMIC_RG_VSIM2_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmch_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMCH_ELR_0),
		(val),
		(PMIC_RG_VMCH_VOTRIM_MASK),
		(PMIC_RG_VMCH_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmch_oc_trim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMCH_ELR_0),
		(val),
		(PMIC_RG_VMCH_OC_TRIM_MASK),
		(PMIC_RG_VMCH_OC_TRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vmc_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VMC_ELR_0),
		(val),
		(PMIC_RG_VMC_VOTRIM_MASK),
		(PMIC_RG_VMC_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcamio_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCAMIO_ELR_0),
		(val),
		(PMIC_RG_VCAMIO_VOTRIM_MASK),
		(PMIC_RG_VCAMIO_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcn18_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCN18_ELR_0),
		(val),
		(PMIC_RG_VCN18_VOTRIM_MASK),
		(PMIC_RG_VCN18_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vrf18_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VRF18_ELR_0),
		(val),
		(PMIC_RG_VRF18_VOTRIM_MASK),
		(PMIC_RG_VRF18_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_ldo_ana1_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA1_DSN_ID),
		(&val),
		(PMIC_LDO_ANA1_ANA_ID_MASK),
		(PMIC_LDO_ANA1_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana1_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA1_DSN_ID),
		(&val),
		(PMIC_LDO_ANA1_DIG_ID_MASK),
		(PMIC_LDO_ANA1_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana1_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA1_DSN_REV0),
		(&val),
		(PMIC_LDO_ANA1_ANA_MINOR_REV_MASK),
		(PMIC_LDO_ANA1_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana1_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA1_DSN_REV0),
		(&val),
		(PMIC_LDO_ANA1_ANA_MAJOR_REV_MASK),
		(PMIC_LDO_ANA1_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana1_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA1_DSN_REV0),
		(&val),
		(PMIC_LDO_ANA1_DIG_MINOR_REV_MASK),
		(PMIC_LDO_ANA1_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana1_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA1_DSN_REV0),
		(&val),
		(PMIC_LDO_ANA1_DIG_MAJOR_REV_MASK),
		(PMIC_LDO_ANA1_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana1_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA1_DSN_DBI),
		(&val),
		(PMIC_LDO_ANA1_DSN_CBS_MASK),
		(PMIC_LDO_ANA1_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana1_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA1_DSN_DBI),
		(&val),
		(PMIC_LDO_ANA1_DSN_BIX_MASK),
		(PMIC_LDO_ANA1_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana1_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA1_DSN_DBI),
		(&val),
		(PMIC_LDO_ANA1_DSN_ESP_MASK),
		(PMIC_LDO_ANA1_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ldo_ana1_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_LDO_ANA1_DSN_DXI),
		(&val),
		(PMIC_LDO_ANA1_DSN_FPI_MASK),
		(PMIC_LDO_ANA1_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vusb33_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VUSB33_ANA_CON0),
		(val),
		(PMIC_RG_VUSB33_VOCAL_MASK),
		(PMIC_RG_VUSB33_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vusb33_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VUSB33_ANA_CON0),
		(val),
		(PMIC_RG_VUSB33_VOSEL_MASK),
		(PMIC_RG_VUSB33_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vusb33_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VUSB33_ANA_CON0),
		(&val),
		(PMIC_RG_VUSB33_VOSEL_MASK),
		(PMIC_RG_VUSB33_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vusb33_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VUSB33_ANA_CON1),
		(val),
		(PMIC_RG_VUSB33_NDIS_EN_MASK),
		(PMIC_RG_VUSB33_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vusb33_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VUSB33_ANA_CON1),
		(&val),
		(PMIC_RG_VUSB33_NDIS_EN_MASK),
		(PMIC_RG_VUSB33_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcama_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCAMA_ANA_CON0),
		(val),
		(PMIC_RG_VCAMA_VOCAL_MASK),
		(PMIC_RG_VCAMA_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcama_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCAMA_ANA_CON0),
		(val),
		(PMIC_RG_VCAMA_VOSEL_MASK),
		(PMIC_RG_VCAMA_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcama_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCAMA_ANA_CON0),
		(&val),
		(PMIC_RG_VCAMA_VOSEL_MASK),
		(PMIC_RG_VCAMA_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcama_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCAMA_ANA_CON1),
		(val),
		(PMIC_RG_VCAMA_NDIS_EN_MASK),
		(PMIC_RG_VCAMA_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcama_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCAMA_ANA_CON1),
		(&val),
		(PMIC_RG_VCAMA_NDIS_EN_MASK),
		(PMIC_RG_VCAMA_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vefuse_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VEFUSE_ANA_CON0),
		(val),
		(PMIC_RG_VEFUSE_VOCAL_MASK),
		(PMIC_RG_VEFUSE_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vefuse_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VEFUSE_ANA_CON0),
		(val),
		(PMIC_RG_VEFUSE_VOSEL_MASK),
		(PMIC_RG_VEFUSE_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vefuse_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VEFUSE_ANA_CON0),
		(&val),
		(PMIC_RG_VEFUSE_VOSEL_MASK),
		(PMIC_RG_VEFUSE_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vefuse_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VEFUSE_ANA_CON1),
		(val),
		(PMIC_RG_VEFUSE_NDIS_EN_MASK),
		(PMIC_RG_VEFUSE_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vefuse_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VEFUSE_ANA_CON1),
		(&val),
		(PMIC_RG_VEFUSE_NDIS_EN_MASK),
		(PMIC_RG_VEFUSE_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcamd_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCAMD_ANA_CON0),
		(val),
		(PMIC_RG_VCAMD_VOCAL_MASK),
		(PMIC_RG_VCAMD_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcamd_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCAMD_ANA_CON0),
		(val),
		(PMIC_RG_VCAMD_VOSEL_MASK),
		(PMIC_RG_VCAMD_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcamd_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCAMD_ANA_CON0),
		(&val),
		(PMIC_RG_VCAMD_VOSEL_MASK),
		(PMIC_RG_VCAMD_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vcamd_ndis_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCAMD_ANA_CON1),
		(val),
		(PMIC_RG_VCAMD_NDIS_EN_MASK),
		(PMIC_RG_VCAMD_NDIS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vcamd_ndis_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VCAMD_ANA_CON1),
		(&val),
		(PMIC_RG_VCAMD_NDIS_EN_MASK),
		(PMIC_RG_VCAMD_NDIS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vusb33_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VUSB33_ELR_0),
		(val),
		(PMIC_RG_VUSB33_VOTRIM_MASK),
		(PMIC_RG_VUSB33_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcama_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCAMA_ELR_0),
		(val),
		(PMIC_RG_VCAMA_VOTRIM_MASK),
		(PMIC_RG_VCAMA_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vefuse_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VEFUSE_ELR_0),
		(val),
		(PMIC_RG_VEFUSE_VOTRIM_MASK),
		(PMIC_RG_VEFUSE_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vcamd_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VCAMD_ELR_0),
		(val),
		(PMIC_RG_VCAMD_VOTRIM_MASK),
		(PMIC_RG_VCAMD_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vio18_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VIO18_ELR_0),
		(val),
		(PMIC_RG_VIO18_VOTRIM_MASK),
		(PMIC_RG_VIO18_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vdram_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VDRAM_ELR_0),
		(val),
		(PMIC_RG_VDRAM_VOTRIM_MASK),
		(PMIC_RG_VDRAM_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vrf12_votrim(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VRF12_ELR_0),
		(val),
		(PMIC_RG_VRF12_VOTRIM_MASK),
		(PMIC_RG_VRF12_VOTRIM_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vrtc_bias_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VRTC_ELR_0),
		(val),
		(PMIC_RG_VRTC_BIAS_SEL_MASK),
		(PMIC_RG_VRTC_BIAS_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vdram_vocal_1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VDRAM_ELR_1),
		(val),
		(PMIC_RG_VDRAM_VOCAL_1_MASK),
		(PMIC_RG_VDRAM_VOCAL_1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vdram_vosel_1(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VDRAM_ELR_1),
		(val),
		(PMIC_RG_VDRAM_VOSEL_1_MASK),
		(PMIC_RG_VDRAM_VOSEL_1_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vdram_vosel_1(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VDRAM_ELR_1),
		(&val),
		(PMIC_RG_VDRAM_VOSEL_1_MASK),
		(PMIC_RG_VDRAM_VOSEL_1_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_vdram_vocal(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VDRAM_ELR_2),
		(val),
		(PMIC_RG_VDRAM_VOCAL_MASK),
		(PMIC_RG_VDRAM_VOCAL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_vdram_vosel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_VDRAM_ELR_2),
		(val),
		(PMIC_RG_VDRAM_VOSEL_MASK),
		(PMIC_RG_VDRAM_VOSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_vdram_vosel(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_VDRAM_ELR_2),
		(&val),
		(PMIC_RG_VDRAM_VOSEL_MASK),
		(PMIC_RG_VDRAM_VOSEL_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_xpp_top_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_XPP_TOP_ID),
		(&val),
		(PMIC_XPP_TOP_ANA_ID_MASK),
		(PMIC_XPP_TOP_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_xpp_top_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_XPP_TOP_ID),
		(&val),
		(PMIC_XPP_TOP_DIG_ID_MASK),
		(PMIC_XPP_TOP_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_xpp_top_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_XPP_TOP_REV0),
		(&val),
		(PMIC_XPP_TOP_ANA_MINOR_REV_MASK),
		(PMIC_XPP_TOP_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_xpp_top_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_XPP_TOP_REV0),
		(&val),
		(PMIC_XPP_TOP_ANA_MAJOR_REV_MASK),
		(PMIC_XPP_TOP_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_xpp_top_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_XPP_TOP_REV0),
		(&val),
		(PMIC_XPP_TOP_DIG_MINOR_REV_MASK),
		(PMIC_XPP_TOP_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_xpp_top_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_XPP_TOP_REV0),
		(&val),
		(PMIC_XPP_TOP_DIG_MAJOR_REV_MASK),
		(PMIC_XPP_TOP_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_xpp_top_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_XPP_TOP_DBI),
		(&val),
		(PMIC_XPP_TOP_CBS_MASK),
		(PMIC_XPP_TOP_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_xpp_top_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_XPP_TOP_DBI),
		(&val),
		(PMIC_XPP_TOP_BIX_MASK),
		(PMIC_XPP_TOP_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_xpp_top_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_XPP_TOP_DBI),
		(&val),
		(PMIC_XPP_TOP_ESP_MASK),
		(PMIC_XPP_TOP_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_xpp_top_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_XPP_TOP_DXI),
		(&val),
		(PMIC_XPP_TOP_FPI_MASK),
		(PMIC_XPP_TOP_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_xpp_test_out(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_XPP_TOP_TEST_OUT),
		(&val),
		(PMIC_XPP_TEST_OUT_MASK),
		(PMIC_XPP_TEST_OUT_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_xpp_mon_flag_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_TEST_CON0),
		(val),
		(PMIC_XPP_MON_FLAG_SEL_MASK),
		(PMIC_XPP_MON_FLAG_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_xpp_mon_grp_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_TEST_CON0),
		(val),
		(PMIC_XPP_MON_GRP_SEL_MASK),
		(PMIC_XPP_MON_GRP_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_drv_isink0_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_DRV_ISINK0_CK_PDN_MASK),
		(PMIC_RG_DRV_ISINK0_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_drv_isink1_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_DRV_ISINK1_CK_PDN_MASK),
		(PMIC_RG_DRV_ISINK1_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_drv_isink2_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_DRV_ISINK2_CK_PDN_MASK),
		(PMIC_RG_DRV_ISINK2_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_drv_isink3_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_DRV_ISINK3_CK_PDN_MASK),
		(PMIC_RG_DRV_ISINK3_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_drv_128k_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_DRV_128K_CK_PDN_MASK),
		(PMIC_RG_DRV_128K_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_drv_chrind_ck_pdn(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_CKPDN_CON0),
		(val),
		(PMIC_RG_DRV_CHRIND_CK_PDN_MASK),
		(PMIC_RG_DRV_CHRIND_CK_PDN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_drv_isink_ck_cksel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_CKSEL_CON0),
		(val),
		(PMIC_RG_DRV_ISINK_CK_CKSEL_MASK),
		(PMIC_RG_DRV_ISINK_CK_CKSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_driver_bl_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_RST_CON0),
		(val),
		(PMIC_RG_DRIVER_BL_RST_MASK),
		(PMIC_RG_DRIVER_BL_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_driver_ci_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_RST_CON0),
		(val),
		(PMIC_RG_DRIVER_CI_RST_MASK),
		(PMIC_RG_DRIVER_CI_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_driver_bl_bank_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_RST_BANK_CON0),
		(val),
		(PMIC_RG_DRIVER_BL_BANK_RST_MASK),
		(PMIC_RG_DRIVER_BL_BANK_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_driver_ci_bank_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_RST_BANK_CON0),
		(val),
		(PMIC_RG_DRIVER_CI_BANK_RST_MASK),
		(PMIC_RG_DRIVER_CI_BANK_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_driver_dl_bank_rst(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_XPP_TOP_RST_BANK_CON0),
		(val),
		(PMIC_RG_DRIVER_DL_BANK_RST_MASK),
		(PMIC_RG_DRIVER_DL_BANK_RST_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_driver_bl_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_BL_DSN_ID),
		(&val),
		(PMIC_DRIVER_BL_ANA_ID_MASK),
		(PMIC_DRIVER_BL_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_bl_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_BL_DSN_ID),
		(&val),
		(PMIC_DRIVER_BL_DIG_ID_MASK),
		(PMIC_DRIVER_BL_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_bl_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_BL_DSN_REV0),
		(&val),
		(PMIC_DRIVER_BL_ANA_MINOR_REV_MASK),
		(PMIC_DRIVER_BL_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_bl_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_BL_DSN_REV0),
		(&val),
		(PMIC_DRIVER_BL_ANA_MAJOR_REV_MASK),
		(PMIC_DRIVER_BL_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_bl_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_BL_DSN_REV0),
		(&val),
		(PMIC_DRIVER_BL_DIG_MINOR_REV_MASK),
		(PMIC_DRIVER_BL_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_bl_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_BL_DSN_REV0),
		(&val),
		(PMIC_DRIVER_BL_DIG_MAJOR_REV_MASK),
		(PMIC_DRIVER_BL_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_bl_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_BL_DSN_DBI),
		(&val),
		(PMIC_DRIVER_BL_DSN_CBS_MASK),
		(PMIC_DRIVER_BL_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_bl_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_BL_DSN_DBI),
		(&val),
		(PMIC_DRIVER_BL_DSN_BIX_MASK),
		(PMIC_DRIVER_BL_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_bl_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_BL_DSN_DBI),
		(&val),
		(PMIC_DRIVER_BL_DSN_ESP_MASK),
		(PMIC_DRIVER_BL_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_bl_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_BL_DSN_DXI),
		(&val),
		(PMIC_DRIVER_BL_DSN_FPI_MASK),
		(PMIC_DRIVER_BL_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_isink_dim1_fsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON0),
		(val),
		(PMIC_ISINK_DIM1_FSEL_MASK),
		(PMIC_ISINK_DIM1_FSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_en1_gpio_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON1),
		(val),
		(PMIC_EN1_GPIO_SEL_MASK),
		(PMIC_EN1_GPIO_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bias1_gpio_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON1),
		(val),
		(PMIC_BIAS1_GPIO_SEL_MASK),
		(PMIC_BIAS1_GPIO_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_step1_gpio_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON1),
		(val),
		(PMIC_STEP1_GPIO_SEL_MASK),
		(PMIC_STEP1_GPIO_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chop1_gpio_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON1),
		(val),
		(PMIC_CHOP1_GPIO_SEL_MASK),
		(PMIC_CHOP1_GPIO_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chop1_sw_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON1),
		(val),
		(PMIC_CHOP1_SW_SEL_MASK),
		(PMIC_CHOP1_SW_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_dim1_duty(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON1),
		(val),
		(PMIC_ISINK_DIM1_DUTY_MASK),
		(PMIC_ISINK_DIM1_DUTY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_ch1_step(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON1),
		(val),
		(PMIC_ISINK_CH1_STEP_MASK),
		(PMIC_ISINK_CH1_STEP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_breath1_tf2_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON2),
		(val),
		(PMIC_ISINK_BREATH1_TF2_SEL_MASK),
		(PMIC_ISINK_BREATH1_TF2_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_breath1_tf1_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON2),
		(val),
		(PMIC_ISINK_BREATH1_TF1_SEL_MASK),
		(PMIC_ISINK_BREATH1_TF1_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_breath1_tr2_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON2),
		(val),
		(PMIC_ISINK_BREATH1_TR2_SEL_MASK),
		(PMIC_ISINK_BREATH1_TR2_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_breath1_tr1_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON2),
		(val),
		(PMIC_ISINK_BREATH1_TR1_SEL_MASK),
		(PMIC_ISINK_BREATH1_TR1_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_breath1_toff_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON3),
		(val),
		(PMIC_ISINK_BREATH1_TOFF_SEL_MASK),
		(PMIC_ISINK_BREATH1_TOFF_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_breath1_ton_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK1_CON3),
		(val),
		(PMIC_ISINK_BREATH1_TON_SEL_MASK),
		(PMIC_ISINK_BREATH1_TON_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_ad_isink3_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA1),
		(&val),
		(PMIC_AD_ISINK3_STATUS_MASK),
		(PMIC_AD_ISINK3_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ad_isink2_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA1),
		(&val),
		(PMIC_AD_ISINK2_STATUS_MASK),
		(PMIC_AD_ISINK2_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_ad_isink1_status(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA1),
		(&val),
		(PMIC_AD_ISINK1_STATUS_MASK),
		(PMIC_AD_ISINK1_STATUS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_isink_phase1_dly_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK_PHASE_DLY),
		(val),
		(PMIC_ISINK_PHASE1_DLY_EN_MASK),
		(PMIC_ISINK_PHASE1_DLY_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_phase1_dly_tc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK_PHASE_DLY),
		(val),
		(PMIC_ISINK_PHASE1_DLY_TC_MASK),
		(PMIC_ISINK_PHASE1_DLY_TC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_chop1_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK_PHASE_DLY),
		(val),
		(PMIC_ISINK_CHOP1_SW_MASK),
		(PMIC_ISINK_CHOP1_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_sfstr1_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK_SFSTR),
		(val),
		(PMIC_ISINK_SFSTR1_EN_MASK),
		(PMIC_ISINK_SFSTR1_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_sfstr1_tc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK_SFSTR),
		(val),
		(PMIC_ISINK_SFSTR1_TC_MASK),
		(PMIC_ISINK_SFSTR1_TC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_ch1_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK_EN_CTRL),
		(val),
		(PMIC_ISINK_CH1_EN_MASK),
		(PMIC_ISINK_CH1_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_chop1_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK_EN_CTRL),
		(val),
		(PMIC_ISINK_CHOP1_EN_MASK),
		(PMIC_ISINK_CHOP1_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_ch1_bias_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK_EN_CTRL),
		(val),
		(PMIC_ISINK_CH1_BIAS_EN_MASK),
		(PMIC_ISINK_CH1_BIAS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK_MODE_CTRL),
		(val),
		(PMIC_ISINK_RSV_MASK),
		(PMIC_ISINK_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_ch1_pwm_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK_MODE_CTRL),
		(val),
		(PMIC_ISINK_CH1_PWM_MODE_MASK),
		(PMIC_ISINK_CH1_PWM_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_isink_ch1_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK_MODE_CTRL),
		(val),
		(PMIC_ISINK_CH1_MODE_MASK),
		(PMIC_ISINK_CH1_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_isink_trim_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRIVER_ANA_CON0),
		(val),
		(PMIC_RG_ISINK_TRIM_EN_MASK),
		(PMIC_RG_ISINK_TRIM_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_isink_trim_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_ANA_CON0),
		(&val),
		(PMIC_RG_ISINK_TRIM_EN_MASK),
		(PMIC_RG_ISINK_TRIM_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_isink_trim_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRIVER_ANA_CON0),
		(val),
		(PMIC_RG_ISINK_TRIM_SEL_MASK),
		(PMIC_RG_ISINK_TRIM_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_isink_rsv(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRIVER_ANA_CON0),
		(val),
		(PMIC_RG_ISINK_RSV_MASK),
		(PMIC_RG_ISINK_RSV_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_isink1_chop_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRIVER_ANA_CON0),
		(val),
		(PMIC_RG_ISINK1_CHOP_EN_MASK),
		(PMIC_RG_ISINK1_CHOP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_isink1_chop_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_ANA_CON0),
		(&val),
		(PMIC_RG_ISINK1_CHOP_EN_MASK),
		(PMIC_RG_ISINK1_CHOP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_isink2_chop_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRIVER_ANA_CON0),
		(val),
		(PMIC_RG_ISINK2_CHOP_EN_MASK),
		(PMIC_RG_ISINK2_CHOP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_isink2_chop_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_ANA_CON0),
		(&val),
		(PMIC_RG_ISINK2_CHOP_EN_MASK),
		(PMIC_RG_ISINK2_CHOP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_isink3_chop_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRIVER_ANA_CON0),
		(val),
		(PMIC_RG_ISINK3_CHOP_EN_MASK),
		(PMIC_RG_ISINK3_CHOP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_rg_isink3_chop_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_ANA_CON0),
		(&val),
		(PMIC_RG_ISINK3_CHOP_EN_MASK),
		(PMIC_RG_ISINK3_CHOP_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_isink1_double(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRIVER_ANA_CON0),
		(val),
		(PMIC_RG_ISINK1_DOUBLE_MASK),
		(PMIC_RG_ISINK1_DOUBLE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_isink2_double(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRIVER_ANA_CON0),
		(val),
		(PMIC_RG_ISINK2_DOUBLE_MASK),
		(PMIC_RG_ISINK2_DOUBLE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_rg_isink3_double(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRIVER_ANA_CON0),
		(val),
		(PMIC_RG_ISINK3_DOUBLE_MASK),
		(PMIC_RG_ISINK3_DOUBLE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_isink1_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON0),
		(&val),
		(PMIC_DA_ISINK1_EN_MASK),
		(PMIC_DA_ISINK1_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_isink1_bias_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON0),
		(&val),
		(PMIC_DA_ISINK1_BIAS_EN_MASK),
		(PMIC_DA_ISINK1_BIAS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_isink1_chop_clk(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON0),
		(&val),
		(PMIC_DA_ISINK1_CHOP_CLK_MASK),
		(PMIC_DA_ISINK1_CHOP_CLK_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_isink1_step(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON0),
		(&val),
		(PMIC_DA_ISINK1_STEP_MASK),
		(PMIC_DA_ISINK1_STEP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_isink3_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON1),
		(&val),
		(PMIC_DA_ISINK3_EN_MASK),
		(PMIC_DA_ISINK3_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_isink3_bias_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON1),
		(&val),
		(PMIC_DA_ISINK3_BIAS_EN_MASK),
		(PMIC_DA_ISINK3_BIAS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_isink3_chop_clk(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON1),
		(&val),
		(PMIC_DA_ISINK3_CHOP_CLK_MASK),
		(PMIC_DA_ISINK3_CHOP_CLK_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_isink3_step(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON1),
		(&val),
		(PMIC_DA_ISINK3_STEP_MASK),
		(PMIC_DA_ISINK3_STEP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_isink2_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON1),
		(&val),
		(PMIC_DA_ISINK2_EN_MASK),
		(PMIC_DA_ISINK2_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_isink2_bias_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON1),
		(&val),
		(PMIC_DA_ISINK2_BIAS_EN_MASK),
		(PMIC_DA_ISINK2_BIAS_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_isink2_chop_clk(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON1),
		(&val),
		(PMIC_DA_ISINK2_CHOP_CLK_MASK),
		(PMIC_DA_ISINK2_CHOP_CLK_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_isink2_step(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_ISINK_ANA_CON1),
		(&val),
		(PMIC_DA_ISINK2_STEP_MASK),
		(PMIC_DA_ISINK2_STEP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_rg_isink_trim_bias(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_DRIVER_BL_ELR_0),
		(val),
		(PMIC_RG_ISINK_TRIM_BIAS_MASK),
		(PMIC_RG_ISINK_TRIM_BIAS_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_driver_ci_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_CI_DSN_ID),
		(&val),
		(PMIC_DRIVER_CI_ANA_ID_MASK),
		(PMIC_DRIVER_CI_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_ci_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_CI_DSN_ID),
		(&val),
		(PMIC_DRIVER_CI_DIG_ID_MASK),
		(PMIC_DRIVER_CI_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_ci_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_CI_DSN_REV0),
		(&val),
		(PMIC_DRIVER_CI_ANA_MINOR_REV_MASK),
		(PMIC_DRIVER_CI_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_ci_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_CI_DSN_REV0),
		(&val),
		(PMIC_DRIVER_CI_ANA_MAJOR_REV_MASK),
		(PMIC_DRIVER_CI_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_ci_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_CI_DSN_REV0),
		(&val),
		(PMIC_DRIVER_CI_DIG_MINOR_REV_MASK),
		(PMIC_DRIVER_CI_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_ci_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_CI_DSN_REV0),
		(&val),
		(PMIC_DRIVER_CI_DIG_MAJOR_REV_MASK),
		(PMIC_DRIVER_CI_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_ci_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_CI_DSN_DBI),
		(&val),
		(PMIC_DRIVER_CI_DSN_CBS_MASK),
		(PMIC_DRIVER_CI_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_ci_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_CI_DSN_DBI),
		(&val),
		(PMIC_DRIVER_CI_DSN_BIX_MASK),
		(PMIC_DRIVER_CI_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_ci_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_CI_DSN_DBI),
		(&val),
		(PMIC_DRIVER_CI_DSN_ESP_MASK),
		(PMIC_DRIVER_CI_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_ci_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_CI_DSN_DXI),
		(&val),
		(PMIC_DRIVER_CI_DSN_FPI_MASK),
		(PMIC_DRIVER_CI_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_chrind_dim_fsel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON0),
		(val),
		(PMIC_CHRIND_DIM_FSEL_MASK),
		(PMIC_CHRIND_DIM_FSEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_dim_duty(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON1),
		(val),
		(PMIC_CHRIND_DIM_DUTY_MASK),
		(PMIC_CHRIND_DIM_DUTY_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_rsv0(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON2),
		(val),
		(PMIC_CHRIND_RSV0_MASK),
		(PMIC_CHRIND_RSV0_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_indicator_step_gpio_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON2),
		(val),
		(PMIC_INDICATOR_STEP_GPIO_SEL_MASK),
		(PMIC_INDICATOR_STEP_GPIO_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_indicator_en_gpio_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON2),
		(val),
		(PMIC_INDICATOR_EN_GPIO_SEL_MASK),
		(PMIC_INDICATOR_EN_GPIO_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_step(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON2),
		(val),
		(PMIC_CHRIND_STEP_MASK),
		(PMIC_CHRIND_STEP_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_pwm_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON2),
		(val),
		(PMIC_CHRIND_PWM_MODE_MASK),
		(PMIC_CHRIND_PWM_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_breath_tf2_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON3),
		(val),
		(PMIC_CHRIND_BREATH_TF2_SEL_MASK),
		(PMIC_CHRIND_BREATH_TF2_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_breath_tf1_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON3),
		(val),
		(PMIC_CHRIND_BREATH_TF1_SEL_MASK),
		(PMIC_CHRIND_BREATH_TF1_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_breath_tr2_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON3),
		(val),
		(PMIC_CHRIND_BREATH_TR2_SEL_MASK),
		(PMIC_CHRIND_BREATH_TR2_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_breath_tr1_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON3),
		(val),
		(PMIC_CHRIND_BREATH_TR1_SEL_MASK),
		(PMIC_CHRIND_BREATH_TR1_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_breath_toff_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON4),
		(val),
		(PMIC_CHRIND_BREATH_TOFF_SEL_MASK),
		(PMIC_CHRIND_BREATH_TOFF_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_breath_ton_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_CON4),
		(val),
		(PMIC_CHRIND_BREATH_TON_SEL_MASK),
		(PMIC_CHRIND_BREATH_TON_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_sfstr_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_EN_CTRL),
		(val),
		(PMIC_CHRIND_SFSTR_EN_MASK),
		(PMIC_CHRIND_SFSTR_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_sfstr_tc(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_EN_CTRL),
		(val),
		(PMIC_CHRIND_SFSTR_TC_MASK),
		(PMIC_CHRIND_SFSTR_TC_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_en_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_EN_CTRL),
		(val),
		(PMIC_CHRIND_EN_SEL_MASK),
		(PMIC_CHRIND_EN_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_EN_CTRL),
		(val),
		(PMIC_CHRIND_EN_MASK),
		(PMIC_CHRIND_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_chop_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_EN_CTRL),
		(val),
		(PMIC_CHRIND_CHOP_EN_MASK),
		(PMIC_CHRIND_CHOP_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_mode(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_EN_CTRL),
		(val),
		(PMIC_CHRIND_MODE_MASK),
		(PMIC_CHRIND_MODE_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_chop_sw(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_EN_CTRL),
		(val),
		(PMIC_CHRIND_CHOP_SW_MASK),
		(PMIC_CHRIND_CHOP_SW_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_bias_en(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_EN_CTRL),
		(val),
		(PMIC_CHRIND_BIAS_EN_MASK),
		(PMIC_CHRIND_BIAS_EN_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chrind_mode_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_CHRIND_EN_CTRL),
		(val),
		(PMIC_CHRIND_MODE_SEL_MASK),
		(PMIC_CHRIND_MODE_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_get_da_indicator_en(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHRIND_ANA_CON0),
		(&val),
		(PMIC_DA_INDICATOR_EN_MASK),
		(PMIC_DA_INDICATOR_EN_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_da_indicator_step(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_CHRIND_ANA_CON0),
		(&val),
		(PMIC_DA_INDICATOR_STEP_MASK),
		(PMIC_DA_INDICATOR_STEP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_dl_ana_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_DL_DSN_ID),
		(&val),
		(PMIC_DRIVER_DL_ANA_ID_MASK),
		(PMIC_DRIVER_DL_ANA_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_dl_dig_id(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_DL_DSN_ID),
		(&val),
		(PMIC_DRIVER_DL_DIG_ID_MASK),
		(PMIC_DRIVER_DL_DIG_ID_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_dl_ana_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_DL_DSN_REV0),
		(&val),
		(PMIC_DRIVER_DL_ANA_MINOR_REV_MASK),
		(PMIC_DRIVER_DL_ANA_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_dl_ana_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_DL_DSN_REV0),
		(&val),
		(PMIC_DRIVER_DL_ANA_MAJOR_REV_MASK),
		(PMIC_DRIVER_DL_ANA_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_dl_dig_minor_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_DL_DSN_REV0),
		(&val),
		(PMIC_DRIVER_DL_DIG_MINOR_REV_MASK),
		(PMIC_DRIVER_DL_DIG_MINOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_dl_dig_major_rev(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_DL_DSN_REV0),
		(&val),
		(PMIC_DRIVER_DL_DIG_MAJOR_REV_MASK),
		(PMIC_DRIVER_DL_DIG_MAJOR_REV_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_dl_dsn_cbs(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_DL_DSN_DBI),
		(&val),
		(PMIC_DRIVER_DL_DSN_CBS_MASK),
		(PMIC_DRIVER_DL_DSN_CBS_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_dl_dsn_bix(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_DL_DSN_DBI),
		(&val),
		(PMIC_DRIVER_DL_DSN_BIX_MASK),
		(PMIC_DRIVER_DL_DSN_BIX_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_dl_dsn_esp(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_DL_DSN_DBI),
		(&val),
		(PMIC_DRIVER_DL_DSN_ESP_MASK),
		(PMIC_DRIVER_DL_DSN_ESP_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_get_driver_dl_dsn_fpi(
	void)
{
	unsigned int ret = 0;
	unsigned int val = 0;

	ret = pmic_read_interface(
		(MT6357_DRIVER_DL_DSN_DXI),
		(&val),
		(PMIC_DRIVER_DL_DSN_FPI_MASK),
		(PMIC_DRIVER_DL_DSN_FPI_SHIFT)
		);

	return val;
}

unsigned int mt6357_upmu_set_en2_gpio_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK2_CON0),
		(val),
		(PMIC_EN2_GPIO_SEL_MASK),
		(PMIC_EN2_GPIO_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_bias2_gpio_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK2_CON0),
		(val),
		(PMIC_BIAS2_GPIO_SEL_MASK),
		(PMIC_BIAS2_GPIO_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_step2_gpio_sel(
	unsigned int val)
{
	unsigned int ret = 0;

	ret = pmic_config_interface(
		(MT6357_ISINK2_CON0),
		(val),
		(PMIC_STEP2_GPIO_SEL_MASK),
		(PMIC_STEP2_GPIO_SEL_SHIFT)
			);

	return ret;
}

unsigned int mt6357_upmu_set_chop2_gpio_sel(
	unsigned int val)
{
	unsigned int ret = 0;

		(val),

