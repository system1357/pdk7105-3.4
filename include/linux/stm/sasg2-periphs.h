/*
 * include/linux/stm/sasg2-periphs.h
 *
 * Copyright (C) 2012 STMicroelectronics Limited.
 * Author: Francesco Virlinzi <francesco.virlinzi@st.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#define SASG2_SBC_LPM_BASE	0xfe400000
#define SASG2_SBC_KEYSCAN_BASE	(SASG2_SBC_LPM_BASE + 0x0b0000)
#define SASG2_SBC_LPM_CONF_BASE	(SASG2_SBC_LPM_BASE + 0x0b5100)
#define SASG2_SBC_COMMS_BASE	(SASG2_SBC_LPM_BASE + 0x100000)
#define SASG2_SBC_PWM_BASE	(SASG2_SBC_COMMS_BASE + 0x10000)

#define SASG2_SBC_IRB_BASE	(SASG2_SBC_COMMS_BASE + 0x18000)
#define SASG2_SBC_ASC0_BASE	(SASG2_SBC_COMMS_BASE + 0x30000)
#define SASG2_SBC_ASC1_BASE	(SASG2_SBC_COMMS_BASE + 0x31000)
#define SASG2_SBC_SSC0_BASE	(SASG2_SBC_COMMS_BASE + 0x40000)
#define SASG2_SBC_SSC1_BASE	(SASG2_SBC_COMMS_BASE + 0x41000)
#define SASG2_SBC_SSC2_BASE	(SASG2_SBC_COMMS_BASE + 0x42000)

#define SASG2_SBC_SYSCONF_BASE	0xFE600000 /* 0-999 */
#define SASG2_SBC_PIO_BASE	0xfe610000

#define SASG2_COMMS_BASE	0xFED00000
#define SASG2_PWM_BASE		(SASG2_COMMS_BASE + 0x10000)

#define SASG2_ASC0_BASE		(SASG2_COMMS_BASE + 0x30000)
#define SASG2_ASC1_BASE		(SASG2_COMMS_BASE + 0x31000)
#define SASG2_ASC2_BASE		(SASG2_COMMS_BASE + 0x32000)
#define SASG2_ASC3_BASE		(SASG2_COMMS_BASE + 0x33000)

#define SASG2_SSC0_BASE		(SASG2_COMMS_BASE + 0x40000)
#define SASG2_SSC1_BASE		(SASG2_COMMS_BASE + 0x41000)
#define SASG2_SSC2_BASE		(SASG2_COMMS_BASE + 0x42000)
#define SASG2_SSC3_BASE		(SASG2_COMMS_BASE + 0x43000)
#define SASG2_SSC4_BASE		(SASG2_COMMS_BASE + 0x44000)
#define SASG2_SSC5_BASE		(SASG2_COMMS_BASE + 0x45000)
#define SASG2_SSC6_BASE		(SASG2_COMMS_BASE + 0x46000)
#define SASG2_SSC7_BASE		(SASG2_COMMS_BASE + 0x47000)


#define SASG2_PIO_REAR_BASE	0xfe820000
#define SASG2_PIO_FRONT_BASE	0xfee00000

#define SASG2_FRONT_SYSCONF_BASE	0xfee10000 /* 1000-1999 */
#define SASG2_REAR_SYSCONF_BASE		0xfe830000 /* 2000-2999 */

#define SASG2_PCMPLAYER_0_BASE	0xfe002000
#define SASG2_PCMPLAYER_1_BASE	0xfe003000
#define SASG2_PCMPLAYER_2_BASE	0xfe004000
#define SASG2_PCMREADER_0_BASE	0xfe005000
#define SASG2_SPDIFPLAYER_BASE	0xfe006000
#define SASG2_PCMREADER_1_BASE	0xfe007000

