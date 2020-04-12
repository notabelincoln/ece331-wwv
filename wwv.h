// A. Sheaff 3/5/2020
// Header for the WWV time/date transmitter kernel driver
#ifndef WWV_H
#define WWV_H

#include <linux/types.h>
#include <asm/ioctl.h>

// Magic number
#define WWV_MAGIC '_'

// IOCTL Write to pass in date/time data
#define WWV_TRANSMIT _IOW(WWV_MAGIC,1,struct wwv_tm *)

#endif	// WWV_H
