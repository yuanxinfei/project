#ifndef __SYSTEM_DEFALUT_PARMS_H__
#define __SYSTEM_DEFALUT_PARMS_H__

#include "Defs.h"

/* GROUP_ID and MODEL_INDEX Description:
GROUP_ID:
0x00: SB42 serial

MODEL_INDEX:
0x00: 5.1 Serial
0x01: 2.1 Serial
0x02: 5.1 CI Version	// JUNE 10 2013; Smith
0x03: 2.1 CI Version	// JUNE 10 2013; Smith
*/

#if defined(S4051A) || defined(S4051B) || defined ( S4551A )|| defined ( S3851E )|| defined ( S3851F )
#define GROUP_ID	0x00
#define MODEL_INDEX	0x02

#elif defined(S4221W_ENABLE)
#define GROUP_ID 0x00
#define MODEL_INDEX 0x03 /*0x03 2.1 CI Version*/

#else
#error "GROUP_ID and MODEL_INDEX do not be defined !! "
#endif


#define EEPROM_DATA_INTEGRITY_VALID 0x55 // 0x55 = 01010101, a nice value to check the data integrity

#if defined( SYS_PARMS_SECTION )

/* EEPROM Storage Device MAP */
const uint8 STORAGE_EEPROM_DEFAULT[] @ "USER_PARMS" =
{
    0x24, // MANUFACTURER_ID_H;              // 0
    0x89, // MANUFACTURER_ID_L;              // 1
    0x96, // EEPROM_DATA_LENGTH,            //2
    0x01, // INF_SERIAL_NUMBER;              // 3
    0x0D, // INF_SERIAL_NUMBER_LENGTH;     // 4
    0x00, // SERIAL_NUMBER_BYTE1;        // 5
    0x00, // SERIAL_NUMBER_BYTE2;        // 6
    0x00, // SERIAL_NUMBER_BYTE3;        // 7
    0x00, // SERIAL_NUMBER_BYTE4;        // 8
    0x00, // SERIAL_NUMBER_BYTE5;        // 9
    0x00, // SERIAL_NUMBER_BYTE6;        // A
    0x00, // SERIAL_NUMBER_BYTE7;        // B
    0x00, // SERIAL_NUMBER_BYTE8;        // C
    0x00, // SERIAL_NUMBER_BYTE9;        // D
    0x00, // SERIAL_NUMBER_BYTE10;        // E
    0x00, // SERIAL_NUMBER_BYTE11;        // F
    0x00, // SERIAL_NUMBER_BYTE12;        // 10
    0x00, // SERIAL_NUMBER_BYTE13;        // 11
    0x00, // SERIAL_NUMBER_BYTE14;        // 12
    0x00, // SERIAL_NUMBER_BYTE15;        // 13
    GET_HIGH_U8(VERSION), // FW Version;                        // 14
    GET_LOW_U8(VERSION), // FW ReVersion;                      // 15
    0x02, // INF_DEBUG_SETTING;              // 16
    0x04, // INF_DEBUG_SETTING_LENGTH;  // 17
    0x00, // INF_DEBUG_BYTE1;        // 18
    0x00, // INF_DEBUG_BYTE2;        // 19
    0x00, // INF_DEBUG_BYTE3;        // 1A
    0x07, // INF_DEBUG_BYTE4;        // 1B
    GROUP_ID, // STORAGE_EEPROM_GROUP_ID,    //1C
    MODEL_INDEX, // STORAGE_EEPROM_MODEL_INDEX    //1D 
    0x00, // Reserved    //1E
    0x00, // Reserved    //1F
    0x03, //INF_SYSTEM_PARAMETER;                // 20
    0x6F, //INF_SYSTEM_PARAMETER_LENGTH;    // 21
    0x00, //SYSTEM_POWER_STATUS;    // 22
    0x01, //AUTO_POWER_DOWN;           // 23 
    0x00, //SYSTEM_MODE;                     // 24
    0x03, //AUDIO_SOURCE;                    // 25
    0x00, // Reserved    //26
    0x00, // Reserved    //27
    0x00, // Reserved    //28
    0x00, // Reserved    //29
    0x00, // Reserved    //2A
    0x00, // Reserved    //2B
    0x00, // Reserved    //2C
    0x00, // Reserved    //2D
    0x00, // Reserved    //2E
    0x00, // Reserved    //2F
    0x01, //PROCESSING_MODE;             // 30  // 0x01-> CSII:On; Tru_V:Off; TSHD:Off; NightMode:Off
    0x05, //VLOUME_ADJUST;                 // 31
    0x06, //BASS_ADJUST;                     // 32
    0x06, //TREBLE_ADJUST;                 // 33
    0x06, //BALANCE_ADJUST;              // 34
#ifdef S4221W_ENABLE
    0x06, //DIALOG_ADJUST                // 35
#else //SB4251
    0x06, //CENTER_ADJUST;               // 35
#endif
    0x06, //SURROUND_ADJUST;          // 36
    0x06, //SUBWOOFER_ADJUST;       // 37
    0x00, // TRE_VOLUME    //38
    0x00, // SRS_TSHD    //39
    0x01, // ECO_POWER    //3A
    0x01, // REMOTE_TV    //3B
    0x00, // Reserved    //3C
    0x00, // Reserved    //3D
    0x00, // Reserved    //3E
    0x00, // Reserved    //3F
    0x01, //PROCESSING_MODE;             // 40  // 0x01-> CSII:On; Tru_V:Off; TSHD:Off; NightMode:Off
    0x05, //VLOUME_ADJUST;                 // 41
    0x06, //BASS_ADJUST;                     // 42
    0x06, //TREBLE_ADJUST;                 // 43
    0x06, //BALANCE_ADJUST;              // 44
#ifdef S4221W_ENABLE
    0x06, //DIALOG_ADJUST                // 45
#else //SB4251
    0x06, //CENTER_ADJUST;               // 45
#endif
    0x06, //SURROUND_ADJUST;          // 46
    0x06, //SUBWOOFER_ADJUST;       // 47
    0x00, // TRE_VOLUME    //48
    0x00, // SRS_TSHD    //49
    0x01, // ECO_POWER    //4A
    0x01, // REMOTE_TV    //4B
    0x00, // Reserved    //4C
    0x00, // Reserved    //4D
    0x00, // Reserved    //4E
    0x00, // Reserved    //4F
    0x01, //PROCESSING_MODE;             // 50  // 0x01-> CSII:On; Tru_V:Off; TSHD:Off; NightMode:Off
    0x05, //VLOUME_ADJUST;                 // 51
    0x06, //BASS_ADJUST;                     // 52
    0x06, //TREBLE_ADJUST;                 // 53
    0x06, //BALANCE_ADJUST;              // 54
#ifdef S4221W_ENABLE
    0x06, //DIALOG_ADJUST                // 55
#else //SB4251
    0x06, //CENTER_ADJUST;               // 55
#endif
    0x06, //SURROUND_ADJUST;          // 56
    0x06, //SUBWOOFER_ADJUST;       // 57
    0x00, // TRE_VOLUME    //58
    0x00, // SRS_TSHD    //59
    0x01, // ECO_POWER    //5A
    0x01, // REMOTE_TV    //5B
    0x00, // Reserved    //5C
    0x00, // Reserved    //5D
    0x00, // Reserved    //5E
    0x00, // Reserved    //5F
    0x01, //PROCESSING_MODE;             // 60  // 0x01-> CSII:On; Tru_V:Off; TSHD:Off; NightMode:Off
    0x05, //VLOUME_ADJUST;                 // 61
    0x06, //BASS_ADJUST;                     // 62
    0x06, //TREBLE_ADJUST;                 // 63
    0x06, //BALANCE_ADJUST;              // 64
#ifdef S4221W_ENABLE
    0x06, //DIALOG_ADJUST                // 65
#else //SB4251
    0x06, //CENTER_ADJUST;               // 65
#endif
    0x06, //SURROUND_ADJUST;          // 66
    0x06, //SUBWOOFER_ADJUST;       // 67
    0x00, // TRE_VOLUME    //68
    0x00, // SRS_TSHD    //69
    0x01, // ECO_POWER    //6A
    0x01, // REMOTE_TV    //6B
    0x00, // Reserved    //6C
    0x00, // Reserved    //6D
    0x00, // Reserved    //6E
    0x00, // Reserved    //6F
    0x01, //PROCESSING_MODE;             // 70  // 0x01-> CSII:On; Tru_V:Off; TSHD:Off; NightMode:Off
    0x05, //VLOUME_ADJUST;                 // 71
    0x06, //BASS_ADJUST;                     // 72
    0x06, //TREBLE_ADJUST;                 // 73
    0x06, //BALANCE_ADJUST;              // 74
#ifdef S4221W_ENABLE
    0x06, //DIALOG_ADJUST                // 75
#else //SB4251
    0x06, //CENTER_ADJUST;               // 75
#endif
    0x06, //SURROUND_ADJUST;          // 76
    0x06, //SUBWOOFER_ADJUST;       // 77
    0x00, // TRE_VOLUME    //78
    0x00, // SRS_TSHD    //79
    0x01, // ECO_POWER    //7A
    0x01, // REMOTE_TV    //7B
    0x00, // Reserved    //7C
    0x00, // Reserved    //7D
    0x00, // Reserved    //7E
    0x00, // Reserved    //7F
    0x01, //PROCESSING_MODE;             // 80  // 0x01-> CSII:On; Tru_V:Off; TSHD:Off; NightMode:Off
    0x05, //VLOUME_ADJUST;                 // 81
    0x06, //BASS_ADJUST;                     // 82
    0x06, //TREBLE_ADJUST;                 // 83
    0x06, //BALANCE_ADJUST;              // 84
#ifdef S4221W_ENABLE
    0x06, //DIALOG_ADJUST                // 85
#else //SB4251
    0x06, //CENTER_ADJUST;               // 85
#endif
    0x06, //SURROUND_ADJUST;          // 86
    0x06, //SUBWOOFER_ADJUST;       // 87
    0x00, // TRE_VOLUME    //88
    0x00, // SRS_TSHD    //89
    0x01, // ECO_POWER    //8A
    0x01, // REMOTE_TV    //8B
    0x00, // Reserved    //8C
    0x00, // Reserved    //8D
    0x00, // Reserved    //8E
    0x00, // Reserved    //8F
    0x04, // IR Parameter              // 90
    0x05, // IR Parameter Length    // 91
    0x00, // Coustomer code H       // 92
    0x00, // Coustomer code L       // 93
    0x00, // Power Key code         // 94
    0x00, // Volume Up Key code     // 95
    0x00, // Volume Down Key code   // 96
#if EEPROM_512 //scott_IR prepare for IR learning 
    0x00, //0x97
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x 98~0x 9F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x A0~0x AF
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x B0~0x BF
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x C0~0x CF
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x D0~0x DF
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x E0~0x EF
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x F0~0x FF
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x100~0x10F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x110~0x11F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x120~0x12F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x130~0x13F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x140~0x14F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x150~0x15F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x160~0x16F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x170~0x17F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x180~0x18F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x190~0x19F
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x1A0~0x1AF
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x1B0~0x1BF
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x1C0~0x1C7
    0x00,                                            //0x1C8
#if 1
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x1D0~0x1DF
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //0x1E0~0x1EF
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00,   
#endif
#endif    
    0xDA, //EE_CHECKSUM;               // 97
    EEPROM_DATA_INTEGRITY_VALID
};

#else
#warning "SYS_PARMS_SECTION doesn't be defined on C/C++ Compliler Defined symbols. If you would like to build application, please define SYS_PARMS_SECTION"
#endif 


#endif /*__SYSTEM_DEFALUT_PARMS_H__*/
