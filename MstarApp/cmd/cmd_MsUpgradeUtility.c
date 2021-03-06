//<MStar Software>
//******************************************************************************
// MStar Software
// Copyright (c) 2010 - 2012 MStar Semiconductor, Inc. All rights reserved.
// All software, firmware and related documentation herein ("MStar Software") are
// intellectual property of MStar Semiconductor, Inc. ("MStar") and protected by
// law, including, but not limited to, copyright law and international treaties.
// Any use, modification, reproduction, retransmission, or republication of all
// or part of MStar Software is expressly prohibited, unless prior written
// permission has been granted by MStar.
//
// By accessing, browsing and/or using MStar Software, you acknowledge that you
// have read, understood, and agree, to be bound by below terms ("Terms") and to
// comply with all applicable laws and regulations:
//
// 1. MStar shall retain any and all right, ownership and interest to MStar
//    Software and any modification/derivatives thereof.
//    No right, ownership, or interest to MStar Software and any
//    modification/derivatives thereof is transferred to you under Terms.
//
// 2. You understand that MStar Software might include, incorporate or be
//    supplied together with third party`s software and the use of MStar
//    Software may require additional licenses from third parties.
//    Therefore, you hereby agree it is your sole responsibility to separately
//    obtain any and all third party right and license necessary for your use of
//    such third party`s software.
//
// 3. MStar Software and any modification/derivatives thereof shall be deemed as
//    MStar`s confidential information and you agree to keep MStar`s
//    confidential information in strictest confidence and not disclose to any
//    third party.
//
// 4. MStar Software is provided on an "AS IS" basis without warranties of any
//    kind. Any warranties are hereby expressly disclaimed by MStar, including
//    without limitation, any warranties of merchantability, non-infringement of
//    intellectual property rights, fitness for a particular purpose, error free
//    and in conformity with any international standard.  You agree to waive any
//    claim against MStar for any loss, damage, cost or expense that you may
//    incur related to your use of MStar Software.
//    In no event shall MStar be liable for any direct, indirect, incidental or
//    consequential damages, including without limitation, lost of profit or
//    revenues, lost or damage of data, and unauthorized system use.
//    You agree that this Section 4 shall still apply without being affected
//    even if MStar Software has been modified by MStar in accordance with your
//    request or instruction for your use, except otherwise agreed by both
//    parties in writing.
//
// 5. If requested, MStar may from time to time provide technical supports or
//    services in relation with MStar Software to you for your use of
//    MStar Software in conjunction with your or your customer`s product
//    ("Services").
//    You understand and agree that, except otherwise agreed by both parties in
//    writing, Services are provided on an "AS IS" basis and the warranty
//    disclaimer set forth in Section 4 above shall apply.
//
// 6. Nothing contained herein shall be construed as by implication, estoppels
//    or otherwise:
//    (a) conferring any license or right to use MStar name, trademark, service
//        mark, symbol or any other identification;
//    (b) obligating MStar or any of its affiliates to furnish any person,
//        including without limitation, you and your customers, any assistance
//        of any kind whatsoever, or any information; or
//    (c) conferring any license or right under any intellectual property right.
//
// 7. These terms shall be governed by and construed in accordance with the laws
//    of Taiwan, R.O.C., excluding its conflict of law rules.
//    Any and all dispute arising out hereof or related hereto shall be finally
//    settled by arbitration referred to the Chinese Arbitration Association,
//    Taipei in accordance with the ROC Arbitration Law and the Arbitration
//    Rules of the Association by three (3) arbitrators appointed in accordance
//    with the said Rules.
//    The place of arbitration shall be in Taipei, Taiwan and the language shall
//    be English.
//    The arbitration award shall be final and binding to both parties.
//
//******************************************************************************
//<MStar Software>
#include <MsUpgradeUtility.h>
#include <config.h>
#include <command.h>

#if(ENABLE_MODULE_DONT_OVERWRITE==1)
U_BOOT_CMD(dont_overwrite_init, 1, 0, do_dont_overwrite_init,
            "This serial apis are for protecting the specific partitions are overwrited. ex: customer\n"
            "This cmd is used to init this function\n",
            "\n");

U_BOOT_CMD(dont_overwrite, 2, 0, do_dont_overwrite,
            "This serial apis are for protecting the specific partitions are overwrited. ex: customer\n"
            "This cmd is used to register which partition should not be overwrite\n",
            "[partition name] \n");

U_BOOT_CMD(dont_overwrite_free, 1, 0, do_dont_overwrite_free,
            "This serial apis are for protecting the specific partitions are overwrited. ex: customer\n"
            "This cmd is used to free all registered partitions.\n",
            "\n");

U_BOOT_CMD(force_overwrite_init, 1, 0, do_force_overwirte_init,
            "This serial apis are for force write and re-create partitions.\n"
            "This cmd is used to register which partition should force overwrite\n",
            "\n");

U_BOOT_CMD(force_overwrite, 2, 0, do_force_overwrite,
            "This serial apis are for force write and re-create partitions.\n"
            "This cmd is used to register which partition should force overwrite\n",
            "[partition name] \n");

#endif

#if (!CONFIG_UBOOT_MINI_LIB)
U_BOOT_CMD
(
    update_mode, 3, 0, do_rw_en_update_mode,
    "get/set update_mode \n",
    "<g/s> [EN_UPDATE_MODE]\n"
    "EN_UPDATE_MODE:\n'EN_UPDATE_MODE_NONE' 'EN_UPDATE_MODE_TFTP' 'EN_UPDATE_MODE_USB' 'EN_UPDATE_MODE_OAD'\n'EN_UPDATE_MODE_NET' 'EN_UPDATE_MODE_USB_WITH_SEG_DECRYPTED' 'EN_UPDATE_MODE_NET_WITH_SEG_DECRYPTED'\n"
);
#endif

U_BOOT_CMD(filepartload, 5, 0, do_file_part_load,
    "load part of a file to RAM",
    "<addr> <filename> [bytes]\n"
    "    - load file 'filename' to address 'addr'\n");

#if CONFIG_MINIUBOOT
#else
U_BOOT_CMD
(
    checkfile, CONFIG_SYS_MAXARGS, 0, do_check_file_partition,
    "check file exist in u disk,and set the partition.",
    "<Dir>\n"
    "    - check a file in U disk Dir exist or not\n"
);
#endif

#if defined (CONFIG_R2_BRINGUP) || defined (CONFIG_AMP_TRUSTZONE_ENABLE)
U_BOOT_CMD
(
    UpdateNuttx, CONFIG_SYS_MAXARGS, 0, do_update_nuttx,
    "upgrade nuttx.",
    "<Dir>\n"
    "    - upgrade nuttx\n"
);
#endif
#ifdef HB_CUS
U_BOOT_CMD(
    cusid ,  6,    0,     do_checkOUIValid,
    "cusid check the image is release by the valid guys\n",
    "command cusid <oui> <swModel> <swVer> <ChipVersion> <BoardSel>\n"
);
#endif

