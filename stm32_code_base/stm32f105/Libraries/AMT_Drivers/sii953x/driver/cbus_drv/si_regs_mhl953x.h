//***************************************************************************
//!file     si_regs_mhl953x.h
//!brief    SiI9687 Device Register Manifest Constants.
//
// No part of this work may be reproduced, modified, distributed,
// transmitted, transcribed, or translated into any language or computer
// format, in any form or by any means without written permission of
// Silicon Image, Inc., 1060 East Arques Avenue, Sunnyvale, California 94085
//
// Copyright 2007-2010, Silicon Image, Inc.  All rights reserved.
//***************************************************************************/

#ifndef __SI_9687REGS_MHL_H__
#define __SI_9687REGS_MHL_H__

#include "si_cra_cfg.h"

//------------------------------------------------------------------------------
// Registers in Page 0  (0xB0) // TODO:SHV - move to common header
//------------------------------------------------------------------------------
//#define REG_CH0_INTR4                   (PP_PAGE_0 | 0x74)
//#define REG_CH0_INTR4_MASK              (PP_PAGE_0 | 0x78)

#define REG_CH0_INTR4                   (PP_PAGE | 0x74)
#define REG_CH0_INTR4_MASK              (PP_PAGE | 0x78)

//------------------------------------------------------------------------------
// Registers in Page 5  (0x50) // TODO:SHV - move to common header
//------------------------------------------------------------------------------
#define REG_MHL_1X2X_PORT_REG2          (PP_PAGE_5 | 0xB0)

//------------------------------------------------------------------------------
// Registers in Page 6  (0x52) // TODO:SHV - move to common header
//------------------------------------------------------------------------------

#define REG_PAUTH_MHL_CFG2              (PP_PAGE_6 | 0x80)
#define REG_PAUTH_MHL_CFG3              (PP_PAGE_6 | 0x81)
#define REG_MHL1X_EQ_DATA0              (PP_PAGE_6 | 0xC7)
#define REG_MHL1X_EQ_DATA1              (PP_PAGE_6 | 0xC8)
#define REG_MHL1X_EQ_DATA2              (PP_PAGE_6 | 0xC9)
#define REG_MHL1X_EQ_DATA3              (PP_PAGE_6 | 0xCA)
#define REG_PAUTH_NUM_SMPS              (PP_PAGE_6 | 0xD0)

//------------------------------------------------------------------------------
// Registers in Page 9  (0xE0) // TODO:SHV - move to common header
//------------------------------------------------------------------------------
#define REG_GPIO_AON_CTRL0              (PP_PAGE_GPIO | 0xC0)

#define REG_HDMIM_CP_CTRL           (PP_PAGE_9 | 0xD2)
#define BIT_MHL_FORCE0                      0x01
#define BIT_MHL_FORCE1                      0x02
#define BIT_MHL_FORCE2                      0x04
#define BIT_MHL_FORCE3                      0x08

#define REG_HDMIM_CP_PAD_STAT           (PP_PAGE_9 | 0xD7)
#define BIT_MHL_PORT0                       0x01
#define BIT_MHL_PORT1                       0x02
#define BIT_MHL_PORT2                       0x04
#define BIT_MHL_PORT3                       0x08
#define MSK_MHL_PORT_ALL                    0x0F    // Newly Added
#define BIT_20MHZ_OSC_PWR_SAVE              0x10

#define REG_HDMIM_HPD_OVRD_CTRL         (PP_PAGE_9 | 0xDE)
#define BIT_MHL_SEL_PORT0                   0x01
#define BIT_MHL_SEL_PORT1                   0x02
#define BIT_MHL_PORT_SEL_FORCE              0x80  // Override CBUS port select over NVRAM selection

#define REG_CDSENSE_CTRL                (PP_PAGE_9 | 0xDF)
#define BIT_MHL_SEL_CDSENSE0                0x05
#define BIT_MHL_SEL_CDSENSE1                0x08

#define REG_CBUS_DEV_CONNECTED          (PP_PAGE_9 | 0xE0)

#define REG_CBUS_CH_RST_CTRL            (PP_PAGE_9 | 0xE5)
#define BIT_TRI_STATE_EN                    BIT7

#define REG_CBUS_PORT_SEL_AUTO          (PP_PAGE_9 | 0xE6)

#define REG_HDMIM_MODE_OVWR             (PP_PAGE_9 | 0xE7)
#define BIT_MHL_1X_EN                       BIT7

#define REG_CBUS_HPD_OEN_CTRL           (PP_PAGE_9 | 0xEA)
#define REG_CBUS_HPD_PE_CTRL            (PP_PAGE_9 | 0xEB)
#define REG_CBUS_HPD_PU_CTRL            (PP_PAGE_9 | 0xEC)
#define REG_CBUS_HPD_OVRT_CTRL          (PP_PAGE_9 | 0xED)

//------------------------------------------------------------------------------
// Registers in Page 12  (0xE6)
//------------------------------------------------------------------------------

#define REG_CBUS_DEVICE_CAP_0           (CBUS_PAGE | 0x00)
#define REG_CBUS_DEVICE_CAP_1           (CBUS_PAGE | 0x01)
#define REG_CBUS_DEVICE_CAP_2           (CBUS_PAGE | 0x02)
#define REG_CBUS_DEVICE_CAP_3           (CBUS_PAGE | 0x03)
#define REG_CBUS_DEVICE_CAP_4           (CBUS_PAGE | 0x04)
#define REG_CBUS_DEVICE_CAP_5           (CBUS_PAGE | 0x05)
#define REG_CBUS_DEVICE_CAP_6           (CBUS_PAGE | 0x06)
#define REG_CBUS_DEVICE_CAP_7           (CBUS_PAGE | 0x07)
#define REG_CBUS_DEVICE_CAP_8           (CBUS_PAGE | 0x08)
#define REG_CBUS_DEVICE_CAP_9           (CBUS_PAGE | 0x09)
#define REG_CBUS_DEVICE_CAP_A           (CBUS_PAGE | 0x0A)
#define REG_CBUS_DEVICE_CAP_B           (CBUS_PAGE | 0x0B)
#define REG_CBUS_DEVICE_CAP_C           (CBUS_PAGE | 0x0C)
#define REG_CBUS_DEVICE_CAP_D           (CBUS_PAGE | 0x0D)
#define REG_CBUS_DEVICE_CAP_E           (CBUS_PAGE | 0x0E)
#define REG_CBUS_DEVICE_CAP_F           (CBUS_PAGE | 0x0F)

#define REG_CBUS_SET_INT_0              (CBUS_PAGE | 0x20)
#define REG_CBUS_SET_INT_1              (CBUS_PAGE | 0x21)
#define REG_CBUS_SET_INT_2              (CBUS_PAGE | 0x22)
#define REG_CBUS_SET_INT_3              (CBUS_PAGE | 0x23)

#define REG_CBUS_WRITE_STAT_0           (CBUS_PAGE | 0x30)
#define REG_CBUS_WRITE_STAT_1           (CBUS_PAGE | 0x31)
#define REG_CBUS_WRITE_STAT_2           (CBUS_PAGE | 0x32)
#define REG_CBUS_WRITE_STAT_3           (CBUS_PAGE | 0x33)

#define REG_CBUS_SCRATCHPAD_0           (CBUS_PAGE | 0x60)

#define REG_CBUS_SET_INT_0_MASK         (CBUS_PAGE | 0x80)
#define REG_CBUS_SET_INT_1_MASK         (CBUS_PAGE | 0x81)
#define REG_CBUS_SET_INT_2_MASK         (CBUS_PAGE | 0x82)
#define REG_CBUS_SET_INT_3_MASK         (CBUS_PAGE | 0x83)

#define REG_CBUS_INTR_0            (CBUS_PAGE | 0x92)
#define BIT_CONNECT_CHG                     0x01
#define BIT_MSC_CMD_DONE                    0x02    	// ACK packet received
#define BIT_HPD_RCVD                     	0x04    	// HPD received
#define BIT_MSC_WRITE_STAT_RCVD             0x08    	// WRITE_STAT received
#define BIT_MSC_MSG_RCVD                    0x10    	// MSC_MSG received
#define BIT_MSC_WRITE_BURST_RCVD            0x20    	// WRITE_BURST received
#define BIT_MSC_SET_INT_RCVD                0x40    	// SET_INT received
#define	BIT_MSC_CMD_DONE_WITH_NACK          0x80		// NACK received from peer

#define REG_CBUS_INTR_0_MASK       (CBUS_PAGE | 0x93)

#define REG_CBUS_INTR_1            (CBUS_PAGE | 0x94)
#define BIT_HEARTBEAT_TIMEOUT               0x01    	// Heartbeat max attempts failed
#define BIT_CEC_ABORT                       0x02    	// peer aborted CEC command at translation layer
#define BIT_DDC_ABORT                       0x04    	// peer aborted DDC command at translation layer
#define BIT_MSC_XFR_ABORT_R               	0x08    	// peer aborted MSC command at translation layer
#define BIT_SET_CAP_ID_RSVD					0x10		// SET_CAP_ID received from peer
#define BIT_CBUS_PKT_RCVD					0x20		// a valid CBus pkt has been received from peer
#define BIT_MSC_XFR_ABORT_T               	0x40    	// this device aborted MSC command at translation layer

#define REG_CBUS_INTR_1_MASK       (CBUS_PAGE | 0x95)

#define REG_CBUS_BUS_STATUS             (CBUS_PAGE | 0x91)
#define BIT_BUS_CONNECTED                   0x01

#define REG_CEC_ABORT_REASON            (CBUS_PAGE | 0x96)
#define REG_DDC_ABORT_REASON            (CBUS_PAGE | 0x98)
#define REG_MSC_XFR_ABORT_REASON_T    	(CBUS_PAGE | 0x9A)	// abort happened, this device is the transmitter
#define REG_MSC_XFR_ABORT_REASON_R    	(CBUS_PAGE | 0x9C)	// abort happened, this device is the receiver of the cmd

#define REG_CBUS_PRI_START              (CBUS_PAGE | 0xB8)
#define MSC_START_BIT_MSC_CMD               (0x01 << 0)
#define MSC_START_BIT_MSC_MSG_CMD           (0x01 << 1)
#define MSC_START_BIT_READ_DEV_CAP_REG      (0x01 << 2)
#define MSC_START_BIT_SET_INT_WRITE_STAT    (0x01 << 3)
#define MSC_START_BIT_WRITE_BURST           (0x01 << 4)

#define REG_CBUS_PRI_ADDR_CMD           (CBUS_PAGE | 0xB9)
#define REG_CBUS_PRI_WR_DATA_1ST        (CBUS_PAGE | 0xBA)
#define REG_CBUS_PRI_WR_DATA_2ND        (CBUS_PAGE | 0xBB)
#define REG_CBUS_PRI_RD_DATA_1ST        (CBUS_PAGE | 0xBC)
#define REG_CBUS_PRI_RD_DATA_2ND        (CBUS_PAGE | 0xBD)

#define REG_CBUS_PRI_VS_CMD             (CBUS_PAGE | 0xBF)
#define REG_CBUS_PRI_VS_DATA            (CBUS_PAGE | 0xC0)
#define REG_MSC_WRITE_BURST_LEN         (CBUS_PAGE | 0xC6)       // only for WRITE_BURST

#define REG_CBUS_DISC_PWIDTH_MIN        (CBUS_PAGE | 0xE3)  //0x9EE=0x4E
#define REG_CBUS_DISC_PWIDTH_MAX        (CBUS_PAGE | 0xE4)  //0x9EF=0xC0.

#endif  // __SI_9687REGS_MHL_H__

