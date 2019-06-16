////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Garmin Canada Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2019 Garmin Canada Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 20.90Release
// Tag = production/akw/20.90.00-0-g6a0e7d7
// Product = EXAMPLE
// Alignment = 4 bytes, padding disabled.
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_CRC_H)
#define FIT_CRC_H

#include "fit.h"


//////////////////////////////////////////////////////////////////////////////////
// Public Function Prototypes
//////////////////////////////////////////////////////////////////////////////////

#if defined(__cplusplus)
   extern "C" {
#endif

FIT_UINT16 FitCRC_Get16(FIT_UINT16 crc, FIT_UINT8 byte);
FIT_UINT16 FitCRC_Update16(FIT_UINT16 crc, const volatile void *data, FIT_UINT32 size);
FIT_UINT16 FitCRC_Calc16(const volatile void *data, FIT_UINT32 size);

#if defined(__cplusplus)
   }
#endif

#endif // !defined(FIT_CRC_H)
