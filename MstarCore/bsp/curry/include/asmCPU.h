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
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2008-2009 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// ("MStar Confidential Information") by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
///
/// file    asmCPU.h
/// @author MStar Semiconductor Inc.
/// @brief  Inline Assembly wrapper
///////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef _ASM_CPU_H_
#define _ASM_CPU_H_



#ifdef __cplusplus
extern "C"
{
#endif

#include "MsTypes.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
///
/// @file   asmCPU.h
/// @brief  For NonOS usage driver
/// @author MStar Semiconductor Inc.
/// @version 1.0
/////////////////////////////////////////////////////////////////////////////////////////////////////

//-------------------------------------------------------------------------------------------------
// Defines
//-------------------------------------------------------------------------------------------------
#if defined(__MIPS16E__)
#define ATTRIBUTE   __attribute__((nomips16))
#else
#define ATTRIBUTE
#endif

//-------------------------------------------------------------------------------------------------
// Macros
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Type and Structure Declaration
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Extern Functions
//-------------------------------------------------------------------------------------------------
//

//-------------------------------------------------------------------------------------------------
/// Cache coherence operation
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_Sync(void);
//-------------------------------------------------------------------------------------------------
/// Do NOP for some special purpose
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_Nop(void);
//-------------------------------------------------------------------------------------------------
/// Debug backtrace 
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_SwDbgBp(void);
//-------------------------------------------------------------------------------------------------
/// Debug backtrace
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_SwDbgBp(void);
//-------------------------------------------------------------------------------------------------
/// Power down CPU
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_PowerDown(void);
//-------------------------------------------------------------------------------------------------
/// Get CPU status
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_StatusBEV(MS_BOOL bBEV);
//-------------------------------------------------------------------------------------------------
/// Setting up Program Counter
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_Jump(MS_U32 u32PC);
//-------------------------------------------------------------------------------------------------
/// Get Trail
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
MS_U8   ATTRIBUTE   MAsm_CPU_GetTrailOne(MS_U32 u32Flags);
//-------------------------------------------------------------------------------------------------
/// Enable timer interrupt
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_EnableTimerInterrupt(MS_BOOL bEnable);
//-------------------------------------------------------------------------------------------------
/// Delay by Ms
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_DelayMs(MS_U32 msec);
//-------------------------------------------------------------------------------------------------
/// Delay by us
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_DelayUs(MS_U32 usec);
//-------------------------------------------------------------------------------------------------
/// Setup the address of exception register 
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_SetEBASE(MS_U32 u32addr);
//-------------------------------------------------------------------------------------------------
/// Get the system time 
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
MS_U32  ATTRIBUTE   MAsm_GetSystemTime (void);
//-------------------------------------------------------------------------------------------------
/// Init timer
/// @ingroup ASM_CPU_BASIC
//-------------------------------------------------------------------------------------------------
void    ATTRIBUTE   MAsm_CPU_TimerInit(void);

#ifdef __cplusplus
}
#endif

#endif // _ASM_CPU_H_

