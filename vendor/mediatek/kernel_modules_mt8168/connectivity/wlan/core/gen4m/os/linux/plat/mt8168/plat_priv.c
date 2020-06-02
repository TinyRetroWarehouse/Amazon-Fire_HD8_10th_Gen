/*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See http://www.gnu.org/licenses/gpl-2.0.html for more details.
*/
#include <topo_ctrl.h>
#ifdef WLAN_FORCE_DDR_OPP
#include <linux/pm_qos.h>
#endif

#include "precomp.h"

#ifdef CONFIG_MTK_EMI
#include <mt_emi_api.h>
#define WIFI_EMI_MEM_OFFSET    0x177000
#define WIFI_EMI_MEM_SIZE      0xBD000
#endif

#ifdef CONFIG_MTK_EMI
void kalSetEmiMpuProtection(phys_addr_t emiPhyBase, bool enable)
{
	struct emi_region_info_t region_info;

	/*set MPU for EMI share Memory */
	region_info.start = emiPhyBase + WIFI_EMI_MEM_OFFSET;
	region_info.end = emiPhyBase + WIFI_EMI_MEM_OFFSET
		+ WIFI_EMI_MEM_SIZE - 1;
	region_info.region = 10;

	SET_ACCESS_PERMISSION(region_info.apc, enable ? LOCK : UNLOCK,
			      FORBIDDEN, FORBIDDEN,
			      FORBIDDEN, FORBIDDEN, FORBIDDEN, FORBIDDEN,
			      FORBIDDEN, FORBIDDEN, FORBIDDEN, FORBIDDEN,
			      FORBIDDEN, FORBIDDEN, FORBIDDEN, NO_PROTECTION,
			      FORBIDDEN, enable ? FORBIDDEN : NO_PROTECTION);
	emi_mpu_set_protection(&region_info);
}

void kalSetDrvEmiMpuProtection(phys_addr_t emiPhyBase, uint32_t offset,
			       uint32_t size)
{
	struct emi_region_info_t region_info;

	/*set MPU for EMI share Memory */
	region_info.start = emiPhyBase + offset;
	region_info.end = emiPhyBase + offset + size - 1;
	region_info.region = 11;
	SET_ACCESS_PERMISSION(region_info.apc, LOCK, FORBIDDEN, FORBIDDEN,
			      FORBIDDEN, FORBIDDEN, FORBIDDEN, FORBIDDEN,
			      FORBIDDEN, FORBIDDEN, FORBIDDEN, FORBIDDEN,
			      FORBIDDEN, FORBIDDEN, FORBIDDEN, NO_PROTECTION,
			      FORBIDDEN, NO_PROTECTION);
	emi_mpu_set_protection(&region_info);
}
#endif

int32_t kalGetFwFlavor(uint8_t *flavor)
{
	*flavor = 'a';
	return 1;
}