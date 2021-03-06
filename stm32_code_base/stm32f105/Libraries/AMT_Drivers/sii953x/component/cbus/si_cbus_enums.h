//***************************************************************************
//@file     si_cbus_enums.h
//@brief    CBUS API Enums
//
// No part of this work may be reproduced, modified, distributed,
// transmitted, transcribed, or translated into any language or computer
// format, in any form or by any means without written permission of
// Silicon Image, Inc., 1140 East Arques Avenue, Sunnyvale, California 94085
//
// Copyright 2010-2012, Silicon Image, Inc.  All rights reserved.
//***************************************************************************/

#ifndef SI_CBUS_ENUMS_H_
#define SI_CBUS_ENUMS_H_

#include "device_config.h"

#define CBUS_NOCHANNEL      0xFF
#define CBUS_NOPORT         0xFF

enum
{
	MHL_MSC_NO_ERROR			= 0x00, 	// no error
	MHL_MSC_INVALID_SUBCMD		= 0X01,		// invalid sub command
};

enum
{
	MHL_MSC_MSG_E				= 0x02,
    MHL_MSC_MSG_RCP             = 0x10,     // RCP sub-command
    MHL_MSC_MSG_RCPK            = 0x11,     // RCP Acknowledge sub-command
    MHL_MSC_MSG_RCPE            = 0x12,     // RCP Error sub-command
    MHL_MSC_MSG_RAP             = 0x20,     // RAP sub-command
    MHL_MSC_MSG_RAPK            = 0x21,     // RAP Acknowledge sub-command
    MHL_MSC_MSG_UCP				= 0x30,		// UCP sub-command
    MHL_MSC_MSG_UCPK			= 0x31,		// UCP Acknowledge sub-command
    MHL_MSC_MSG_UCPE			= 0x32,		// UCP Error sub-command
};

// RCPK/RCPE status values
typedef enum
{
    MHL_MSC_MSG_RCP_NO_ERROR                = 0x00,     // RCP No Error
    MHL_MSC_MSG_RCP_INEFFECTIVE_KEY_CODE    = 0x01,     // The key code in the RCP sub-command is not recognized
    MHL_MSC_MSG_RCP_RESPONDER_BUSY          = 0x02,     // RCP Response busy
    MHL_MSC_MSG_RCP_OTHER_ERROR             = 0xFF      // NOT RCP code: Hardware or Queue problem caused error
} SiiMhlMscMsgRcpErrorCodes_t;

//RAPK status values
typedef enum
{
    MHL_MSC_MSG_RAP_NO_ERROR                = 0x00,     // RAP No Error
    MHL_MSC_MSG_RAP_UNRECOGNIZED_ACT_CODE   = 0x01,
    MHL_MSC_MSG_RAP_UNSUPPORTED_ACT_CODE    = 0x02,
    MHL_MSC_MSG_RAP_RESPONDER_BUSY          = 0x03,
    MHL_MSC_MSG_RAP_OTHER_ERROR             = 0xFF      // NOT RAP code: Hardware or Queue problem caused error
} SiiMhlMscMsgRapErrorCodes_t;

// ACPK/ACPE status values
enum
{
	MHL_MSC_MSG_UCP_NO_ERROR        		= 0x00,     // UCP No Error
	MHL_MSC_MSG_UCP_INEFFECTIVE_KEY_CODE  	= 0x01,     // The key code in the UCP sub-command is not recognized
};

typedef enum _SiiMhlLogicalDeviceTypes_t
{
    MHL_LD_DISPLAY                  = 0x01,
    MHL_LD_VIDEO                    = 0x02,
    MHL_LD_AUDIO                    = 0x04,
    MHL_LD_MEDIA                    = 0x08,
    MHL_LD_TUNER                    = 0x10,
    MHL_LD_RECORD                   = 0x20,
    MHL_LD_SPEAKER                  = 0x40,
    MHL_LD_GUI                      = 0x80,
} SiiMhlLogicalDeviceTypes_t;

typedef enum _SiiRcpKeyIds_t
{
    MHL_RCP_CMD_SELECT          = 0x00,
	MHL_RCP_CMD_UP              = 0x01,
    MHL_RCP_CMD_DOWN            = 0x02,
	MHL_RCP_CMD_LEFT            = 0x03,
    MHL_RCP_CMD_RIGHT           = 0x04,
    MHL_RCP_CMD_RIGHT_UP        = 0x05,
    MHL_RCP_CMD_RIGHT_DOWN      = 0x06,
    MHL_RCP_CMD_LEFT_UP         = 0x07,
    MHL_RCP_CMD_LEFT_DOWN       = 0x08,
    MHL_RCP_CMD_ROOT_MENU       = 0x09,
    MHL_RCP_CMD_SETUP_MENU      = 0x0A,
    MHL_RCP_CMD_CONTENTS_MENU   = 0x0B,
    MHL_RCP_CMD_FAVORITE_MENU   = 0x0C,
    MHL_RCP_CMD_EXIT            = 0x0D,

	//0x0E - 0x1F are reserved

	MHL_RCP_CMD_NUM_0           = 0x20,
    MHL_RCP_CMD_NUM_1           = 0x21,
    MHL_RCP_CMD_NUM_2           = 0x22,
    MHL_RCP_CMD_NUM_3           = 0x23,
    MHL_RCP_CMD_NUM_4           = 0x24,
    MHL_RCP_CMD_NUM_5           = 0x25,
    MHL_RCP_CMD_NUM_6           = 0x26,
    MHL_RCP_CMD_NUM_7           = 0x27,
    MHL_RCP_CMD_NUM_8           = 0x28,
    MHL_RCP_CMD_NUM_9           = 0x29,

	MHL_RCP_CMD_DOT             = 0x2A,
	MHL_RCP_CMD_ENTER           = 0x2B,
	MHL_RCP_CMD_CLEAR           = 0x2C,

	//0x2D - 0x2F are reserved

    MHL_RCP_CMD_CH_UP           = 0x30,
    MHL_RCP_CMD_CH_DOWN         = 0x31,
    MHL_RCP_CMD_PRE_CH          = 0x32,
    MHL_RCP_CMD_SOUND_SELECT    = 0x33,
    MHL_RCP_CMD_INPUT_SELECT    = 0x34,
    MHL_RCP_CMD_SHOW_INFO       = 0x35,
    MHL_RCP_CMD_HELP            = 0x36,
    MHL_RCP_CMD_PAGE_UP         = 0x37,
    MHL_RCP_CMD_PAGE_DOWN       = 0x38,

	//0x39 - 0x40 are reserved

    MHL_RCP_CMD_VOL_UP	        = 0x41,
    MHL_RCP_CMD_VOL_DOWN        = 0x42,
    MHL_RCP_CMD_MUTE            = 0x43,
    MHL_RCP_CMD_PLAY            = 0x44,
    MHL_RCP_CMD_STOP            = 0x45,
    MHL_RCP_CMD_PAUSE           = 0x46,
    MHL_RCP_CMD_RECORD          = 0x47,
    MHL_RCP_CMD_REWIND          = 0x48,
    MHL_RCP_CMD_FAST_FWD        = 0x49,
    MHL_RCP_CMD_EJECT           = 0x4A,
    MHL_RCP_CMD_FWD             = 0x4B,
    MHL_RCP_CMD_BKWD            = 0x4C,

	//0x4D - 0x4F are reserved

    MHL_RCP_CMD_ANGLE            = 0x50,
    MHL_RCP_CMD_SUBPICTURE       = 0x51,

	//0x52 - 0x5F are reserved

    MHL_RCP_CMD_PLAY_FUNC       = 0x60,
    MHL_RCP_CMD_PAUSE_PLAY_FUNC = 0x61,
    MHL_RCP_CMD_RECORD_FUNC     = 0x62,
    MHL_RCP_CMD_PAUSE_REC_FUNC  = 0x63,
    MHL_RCP_CMD_STOP_FUNC       = 0x64,
	MHL_RCP_CMD_MUTE_FUNC       = 0x65,
    MHL_RCP_CMD_UN_MUTE_FUNC    = 0x66,
    MHL_RCP_CMD_TUNE_FUNC       = 0x67,
    MHL_RCP_CMD_MEDIA_FUNC      = 0x68,

	//0x69 - 0x70 are reserved

    MHL_RCP_CMD_F1              = 0x71,
    MHL_RCP_CMD_F2              = 0x72,
    MHL_RCP_CMD_F3              = 0x73,
    MHL_RCP_CMD_F4              = 0x74,
    MHL_RCP_CMD_F5              = 0x75,

	//0x76 - 0x7D are reserved

    MHL_RCP_CMD_VS              = 0x7E,
    MHL_RCP_CMD_RSVD            = 0x7F,

} SiiRcpKeyIds_t;

typedef enum _SiiRapActionCodes_t
{
    MHL_RAP_CMD_POLL            = 0x00,
    MHL_RAP_CONTENT_ON          = 0x10,
    MHL_RAP_CONTENT_OFF         = 0x11,
    MHL_RAP_CMD_END             = 0x12
} SiiRapActionCodes_t;

enum
{
	MHL_CMD_NO_RSP_RQD			= 0x00,         // general enum for all commands that don't require response data
    MHL_ACK                     = 0x33,         // Command or Data byte acknowledge
    MHL_NACK                    = 0x34,         // Command or Data byte not acknowledge
    MHL_ABORT                   = 0x35,         // Transaction abort
    MHL_WRITE_STAT              = 0x60 | 0x80,  // Write one status register strip top bit
    MHL_SET_INT                 = 0x60,         // Write one interrupt register
    MHL_READ_DEVCAP             = 0x61,         // Read one register
    MHL_GET_STATE               = 0x62,         // Read CBUS revision level from follower
    MHL_GET_VENDOR_ID           = 0x63,         // Read vendor ID value from follower.
    MHL_SET_HPD                 = 0x64,         // Set Hot Plug Detect in follower
    MHL_CLR_HPD                 = 0x65,         // Clear Hot Plug Detect in follower
    MHL_MSC_MSG                 = 0x68,         // VS command to send RCP sub-commands
    MHL_GET_SC1_ERRORCODE       = 0x69,         // Get Vendor-Specific command error code.
    MHL_GET_DDC_ERRORCODE       = 0x6A,         // Get DDC channel command error code.
    MHL_GET_MSC_ERRORCODE       = 0x6B,         // Get MSC command error code.
    MHL_WRITE_BURST             = 0x6C,         // Write 1-16 bytes to responder?s scratchpad.
    MHL_GET_SC3_ERRORCODE       = 0x6D,         // Get channel 3 command error code.
};

typedef enum
{
    FLAGS_SCRATCHPAD_BUSY         = 0x0001,
    FLAGS_REQ_WRT_PENDING         = 0x0002,
    FLAGS_WRITE_BURST_PENDING     = 0x0004,
    FLAGS_SENT_DCAP_RDY           = 0x0008,
    FLAGS_SENT_PATH_EN            = 0x0010,
} CBUS_MISC_FLAGS_t;

//
// CBUS module reports these error types
//

#if ( configSII_DEV_953x_PORTING == 1 )
typedef enum
{
    CBUS_SUCCESS = 0,
    ERROR_CBUS_ABORT,
    ERROR_WRITE_FAILED,
} CBUS_SOFTWARE_ERRORS_t;
#else
typedef enum
{
    SUCCESS = 0,
    ERROR_CBUS_ABORT,
    ERROR_WRITE_FAILED,
} CBUS_SOFTWARE_ERRORS_t;
#endif 

typedef enum
{
    CBUS_IDLE           = 0x00,    			// BUS idle
    CBUS_XFR_DONE		= 0x01,             // Translation layer complete
    CBUS_RECEIVED		= 0x02,             // Message received, verify and send ACK
    CBUS_FAILED			= 0x04,				// last cbus cmd failed
    CBUS_SENT			= 0x08,             // Translation layer complete
} SiiCbusState_t;

typedef enum
{
    CBUS_REQ_IDLE       = 0,
    CBUS_REQ_PENDING,           // Request is waiting to be sent
    CBUS_REQ_SENT,
    CBUS_REQ_RECEIVED,
} SiiCbusRequest_t;



#endif /* SI_CBUS_ENUMS_H_ */
