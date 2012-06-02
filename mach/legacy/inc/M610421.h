/**************************************************************

    M610421.h - SFR define Header file for CCU8

	#CORE           "nX-U8/100"
	#TARGET         "ML610421"
	#VERSION        "1.00" (Preliminary)

    Copyright (C) 2008, OKI SEMICONDUCTOR CO., LTD.
**************************************************************/
#ifndef _M610421_H_
#define _M610421_H_

/*---------------------------------------------------
	CODE ADDRESS SYMBOLS
---------------------------------------------------*/
#define WDTINT	0x0008
#define NMINT	0x000A
#define P00INT	0x0010
#define P01INT	0x0012
#define P02INT	0x0014
#define P03INT	0x0016
#define SIO0INT	0x0020
#define SADINT	0x0024
#define I2C0INT	0x002E
#define TM0INT	0x0030
#define TM1INT	0x0032
#define UA0INT	0x0040
#define MD0INT	0x0044
#define RADINT	0x004A
#define TM2INT	0x0058
#define TM3INT	0x005A
#define PW0INT	0x0060
#define T1KINT	0x0068
#define T128HINT	0x006A
#define T32HINT	0x006E
#define T16HINT	0x0070
#define T2HINT	0x0076
/*---------------------------------------------------
	END OF CODE ADDRESS SYMBOLS
---------------------------------------------------*/

/*---------------------------------------------------
	DATA ADDRESS SYMBOLS
---------------------------------------------------*/
#define DSR (*(volatile unsigned char __near *)0xF000)
#define _B_DSR (*(volatile _BYTE_FIELD __near *)0xF000)

#define RSTAT (*(volatile unsigned char __near *)0xF001)
#define _B_RSTAT (*(volatile _BYTE_FIELD __near *)0xF001)

#define FCON (*(volatile unsigned int __near *)0xF002)

#define FCON0 (*(volatile unsigned char __near *)0xF002)
#define _B_FCON0 (*(volatile _BYTE_FIELD __near *)0xF002)

#define FCON1 (*(volatile unsigned char __near *)0xF003)
#define _B_FCON1 (*(volatile _BYTE_FIELD __near *)0xF003)

#define STPACP (*(volatile unsigned char __near *)0xF008)

#define SBYCON (*(volatile unsigned char __near *)0xF009)
#define _B_SBYCON (*(volatile _BYTE_FIELD __near *)0xF009)

#define LTBR (*(volatile unsigned char __near *)0xF00A)
#define _B_LTBR (*(volatile _BYTE_FIELD __near *)0xF00A)

#define HTBDR (*(volatile unsigned char __near *)0xF00B)
#define _B_HTBDR (*(volatile _BYTE_FIELD __near *)0xF00B)

#define LTBADJ (*(volatile unsigned int __near *)0xF00C)

#define LTBADJL (*(volatile unsigned char __near *)0xF00C)
#define _B_LTBADJL (*(volatile _BYTE_FIELD __near *)0xF00C)

#define LTBADJH (*(volatile unsigned char __near *)0xF00D)
#define _B_LTBADJH (*(volatile _BYTE_FIELD __near *)0xF00D)

#define WDTCON (*(volatile unsigned char __near *)0xF00E)
#define _B_WDTCON (*(volatile _BYTE_FIELD __near *)0xF00E)

#define WDTMOD (*(volatile unsigned char __near *)0xF00F)
#define _B_WDTMOD (*(volatile _BYTE_FIELD __near *)0xF00F)

#define IE1 (*(volatile unsigned char __near *)0xF011)
#define _B_IE1 (*(volatile _BYTE_FIELD __near *)0xF011)

#define IE2 (*(volatile unsigned char __near *)0xF012)
#define _B_IE2 (*(volatile _BYTE_FIELD __near *)0xF012)

#define IE3 (*(volatile unsigned char __near *)0xF013)
#define _B_IE3 (*(volatile _BYTE_FIELD __near *)0xF013)

#define IE4 (*(volatile unsigned char __near *)0xF014)
#define _B_IE4 (*(volatile _BYTE_FIELD __near *)0xF014)

#define IE5 (*(volatile unsigned char __near *)0xF015)
#define _B_IE5 (*(volatile _BYTE_FIELD __near *)0xF015)

#define IE6 (*(volatile unsigned char __near *)0xF016)
#define _B_IE6 (*(volatile _BYTE_FIELD __near *)0xF016)

#define IE7 (*(volatile unsigned char __near *)0xF017)
#define _B_IE7 (*(volatile _BYTE_FIELD __near *)0xF017)

#define IRQ0 (*(volatile unsigned char __near *)0xF018)
#define _B_IRQ0 (*(volatile _BYTE_FIELD __near *)0xF018)

#define IRQ1 (*(volatile unsigned char __near *)0xF019)
#define _B_IRQ1 (*(volatile _BYTE_FIELD __near *)0xF019)

#define IRQ2 (*(volatile unsigned char __near *)0xF01A)
#define _B_IRQ2 (*(volatile _BYTE_FIELD __near *)0xF01A)

#define IRQ3 (*(volatile unsigned char __near *)0xF01B)
#define _B_IRQ3 (*(volatile _BYTE_FIELD __near *)0xF01B)

#define IRQ4 (*(volatile unsigned char __near *)0xF01C)
#define _B_IRQ4 (*(volatile _BYTE_FIELD __near *)0xF01C)

#define IRQ5 (*(volatile unsigned char __near *)0xF01D)
#define _B_IRQ5 (*(volatile _BYTE_FIELD __near *)0xF01D)

#define IRQ6 (*(volatile unsigned char __near *)0xF01E)
#define _B_IRQ6 (*(volatile _BYTE_FIELD __near *)0xF01E)

#define IRQ7 (*(volatile unsigned char __near *)0xF01F)
#define _B_IRQ7 (*(volatile _BYTE_FIELD __near *)0xF01F)

#define EXICON0 (*(volatile unsigned char __near *)0xF020)
#define _B_EXICON0 (*(volatile _BYTE_FIELD __near *)0xF020)

#define EXICON1 (*(volatile unsigned char __near *)0xF021)
#define _B_EXICON1 (*(volatile _BYTE_FIELD __near *)0xF021)

#define EXICON2 (*(volatile unsigned char __near *)0xF022)
#define _B_EXICON2 (*(volatile _BYTE_FIELD __near *)0xF022)

#define BLKCON0 (*(volatile unsigned char __near *)0xF028)
#define _B_BLKCON0 (*(volatile _BYTE_FIELD __near *)0xF028)

#define BLKCON1 (*(volatile unsigned char __near *)0xF029)
#define _B_BLKCON1 (*(volatile _BYTE_FIELD __near *)0xF029)

#define BLKCON2 (*(volatile unsigned char __near *)0xF02A)
#define _B_BLKCON2 (*(volatile _BYTE_FIELD __near *)0xF02A)

#define BLKCON3 (*(volatile unsigned char __near *)0xF02B)
#define _B_BLKCON3 (*(volatile _BYTE_FIELD __near *)0xF02B)

#define BLKCON4 (*(volatile unsigned char __near *)0xF02C)
#define _B_BLKCON4 (*(volatile _BYTE_FIELD __near *)0xF02C)

#define TM0DC (*(volatile unsigned int __near *)0xF030)

#define TM0D (*(volatile unsigned char __near *)0xF030)
#define _B_TM0D (*(volatile _BYTE_FIELD __near *)0xF030)

#define TM0C (*(volatile unsigned char __near *)0xF031)
#define _B_TM0C (*(volatile _BYTE_FIELD __near *)0xF031)

#define TM0CON (*(volatile unsigned int __near *)0xF032)

#define TM0CON0 (*(volatile unsigned char __near *)0xF032)
#define _B_TM0CON0 (*(volatile _BYTE_FIELD __near *)0xF032)

#define TM0CON1 (*(volatile unsigned char __near *)0xF033)
#define _B_TM0CON1 (*(volatile _BYTE_FIELD __near *)0xF033)

#define TM1DC (*(volatile unsigned int __near *)0xF034)

#define TM1D (*(volatile unsigned char __near *)0xF034)
#define _B_TM1D (*(volatile _BYTE_FIELD __near *)0xF034)

#define TM1C (*(volatile unsigned char __near *)0xF035)
#define _B_TM1C (*(volatile _BYTE_FIELD __near *)0xF035)

#define TM1CON (*(volatile unsigned int __near *)0xF036)

#define TM1CON0 (*(volatile unsigned char __near *)0xF036)
#define _B_TM1CON0 (*(volatile _BYTE_FIELD __near *)0xF036)

#define TM1CON1 (*(volatile unsigned char __near *)0xF037)
#define _B_TM1CON1 (*(volatile _BYTE_FIELD __near *)0xF037)

#define TM2DC (*(volatile unsigned int __near *)0xF038)

#define TM2D (*(volatile unsigned char __near *)0xF038)
#define _B_TM2D (*(volatile _BYTE_FIELD __near *)0xF038)

#define TM2C (*(volatile unsigned char __near *)0xF039)
#define _B_TM2C (*(volatile _BYTE_FIELD __near *)0xF039)

#define TM2CON (*(volatile unsigned int __near *)0xF03A)

#define TM2CON0 (*(volatile unsigned char __near *)0xF03A)
#define _B_TM2CON0 (*(volatile _BYTE_FIELD __near *)0xF03A)

#define TM2CON1 (*(volatile unsigned char __near *)0xF03B)
#define _B_TM2CON1 (*(volatile _BYTE_FIELD __near *)0xF03B)

#define TM3DC (*(volatile unsigned int __near *)0xF03C)

#define TM3D (*(volatile unsigned char __near *)0xF03C)
#define _B_TM3D (*(volatile _BYTE_FIELD __near *)0xF03C)

#define TM3C (*(volatile unsigned char __near *)0xF03D)
#define _B_TM3C (*(volatile _BYTE_FIELD __near *)0xF03D)

#define TM3CON (*(volatile unsigned int __near *)0xF03E)

#define TM3CON0 (*(volatile unsigned char __near *)0xF03E)
#define _B_TM3CON0 (*(volatile _BYTE_FIELD __near *)0xF03E)

#define TM3CON1 (*(volatile unsigned char __near *)0xF03F)
#define _B_TM3CON1 (*(volatile _BYTE_FIELD __near *)0xF03F)

#define T1KCR (*(volatile unsigned int __near *)0xF080)

#define T1KCRL (*(volatile unsigned char __near *)0xF080)
#define _B_T1KCRL (*(volatile _BYTE_FIELD __near *)0xF080)

#define T1KCRH (*(volatile unsigned char __near *)0xF081)
#define _B_T1KCRH (*(volatile _BYTE_FIELD __near *)0xF081)

#define T1KCON (*(volatile unsigned char __near *)0xF082)
#define _B_T1KCON (*(volatile _BYTE_FIELD __near *)0xF082)

#define CAPCON (*(volatile unsigned char __near *)0xF090)
#define _B_CAPCON (*(volatile _BYTE_FIELD __near *)0xF090)

#define CAPSTAT (*(volatile unsigned char __near *)0xF091)
#define _B_CAPSTAT (*(volatile _BYTE_FIELD __near *)0xF091)

#define CAPR0 (*(volatile unsigned char __near *)0xF092)
#define _B_CAPR0 (*(volatile _BYTE_FIELD __near *)0xF092)

#define CAPR1 (*(volatile unsigned char __near *)0xF093)
#define _B_CAPR1 (*(volatile _BYTE_FIELD __near *)0xF093)

#define PW0P (*(volatile unsigned int __near *)0xF0A0)

#define PW0PL (*(volatile unsigned char __near *)0xF0A0)
#define _B_PW0PL (*(volatile _BYTE_FIELD __near *)0xF0A0)

#define PW0PH (*(volatile unsigned char __near *)0xF0A1)
#define _B_PW0PH (*(volatile _BYTE_FIELD __near *)0xF0A1)

#define PW0D (*(volatile unsigned int __near *)0xF0A2)

#define PW0DL (*(volatile unsigned char __near *)0xF0A2)
#define _B_PW0DL (*(volatile _BYTE_FIELD __near *)0xF0A2)

#define PW0DH (*(volatile unsigned char __near *)0xF0A3)
#define _B_PW0DH (*(volatile _BYTE_FIELD __near *)0xF0A3)

#define PW0C (*(volatile unsigned int __near *)0xF0A4)

#define PW0CL (*(volatile unsigned char __near *)0xF0A4)
#define _B_PW0CL (*(volatile _BYTE_FIELD __near *)0xF0A4)

#define PW0CH (*(volatile unsigned char __near *)0xF0A5)
#define _B_PW0CH (*(volatile _BYTE_FIELD __near *)0xF0A5)

#define PW0CON (*(volatile unsigned int __near *)0xF0A6)

#define PW0CON0 (*(volatile unsigned char __near *)0xF0A6)
#define _B_PW0CON0 (*(volatile _BYTE_FIELD __near *)0xF0A6)

#define PW0CON1 (*(volatile unsigned char __near *)0xF0A7)
#define _B_PW0CON1 (*(volatile _BYTE_FIELD __near *)0xF0A7)

#define BLDCON (*(volatile unsigned int __near *)0xF0D0)

#define BLDCON0 (*(volatile unsigned char __near *)0xF0D0)
#define _B_BLDCON0 (*(volatile _BYTE_FIELD __near *)0xF0D0)

#define BLDCON1 (*(volatile unsigned char __near *)0xF0D1)
#define _B_BLDCON1 (*(volatile _BYTE_FIELD __near *)0xF0D1)

#define BIASCON (*(volatile unsigned char __near *)0xF0F0)
#define _B_BIASCON (*(volatile _BYTE_FIELD __near *)0xF0F0)

#define DSPCNT (*(volatile unsigned char __near *)0xF0F1)
#define _B_DSPCNT (*(volatile _BYTE_FIELD __near *)0xF0F1)

#define DSPMOD (*(volatile unsigned int __near *)0xF0F2)

#define DSPMOD0 (*(volatile unsigned char __near *)0xF0F2)
#define _B_DSPMOD0 (*(volatile _BYTE_FIELD __near *)0xF0F2)

#define DSPMOD1 (*(volatile unsigned char __near *)0xF0F3)
#define _B_DSPMOD1 (*(volatile _BYTE_FIELD __near *)0xF0F3)

#define DSPCON (*(volatile unsigned char __near *)0xF0F4)
#define _B_DSPCON (*(volatile _BYTE_FIELD __near *)0xF0F4)

#define DSPR00 (*(volatile unsigned char __near *)0xF100)

#define DSPR01 (*(volatile unsigned char __near *)0xF101)

#define DSPR02 (*(volatile unsigned char __near *)0xF102)

#define DSPR03 (*(volatile unsigned char __near *)0xF103)

#define DSPR04 (*(volatile unsigned char __near *)0xF104)

#define DSPR05 (*(volatile unsigned char __near *)0xF105)

#define DSPR06 (*(volatile unsigned char __near *)0xF106)

#define DSPR07 (*(volatile unsigned char __near *)0xF107)

#define DSPR08 (*(volatile unsigned char __near *)0xF108)

#define DSPR09 (*(volatile unsigned char __near *)0xF109)

#define DSPR0A (*(volatile unsigned char __near *)0xF10A)

#define DSPR0B (*(volatile unsigned char __near *)0xF10B)

#define DSPR0C (*(volatile unsigned char __near *)0xF10C)

#define DSPR0D (*(volatile unsigned char __near *)0xF10D)

#define DSPR0E (*(volatile unsigned char __near *)0xF10E)

#define DSPR0F (*(volatile unsigned char __near *)0xF10F)

#define DSPR10 (*(volatile unsigned char __near *)0xF110)

#define DSPR11 (*(volatile unsigned char __near *)0xF111)

#define DSPR12 (*(volatile unsigned char __near *)0xF112)

#define DSPR13 (*(volatile unsigned char __near *)0xF113)

#define DSPR14 (*(volatile unsigned char __near *)0xF114)

#define DSPR15 (*(volatile unsigned char __near *)0xF115)

#define DSPR16 (*(volatile unsigned char __near *)0xF116)

#define DSPR17 (*(volatile unsigned char __near *)0xF117)

#define DSPR18 (*(volatile unsigned char __near *)0xF118)

#define DSPR19 (*(volatile unsigned char __near *)0xF119)

#define DSPR1A (*(volatile unsigned char __near *)0xF11A)

#define DSPR1B (*(volatile unsigned char __near *)0xF11B)

#define DSPR1C (*(volatile unsigned char __near *)0xF11C)

#define DSPR1D (*(volatile unsigned char __near *)0xF11D)

#define DSPR1E (*(volatile unsigned char __near *)0xF11E)

#define DSPR1F (*(volatile unsigned char __near *)0xF11F)

#define DSPR20 (*(volatile unsigned char __near *)0xF120)

#define DSPR21 (*(volatile unsigned char __near *)0xF121)

#define DSPR22 (*(volatile unsigned char __near *)0xF122)

#define DSPR23 (*(volatile unsigned char __near *)0xF123)

#define DSPR24 (*(volatile unsigned char __near *)0xF124)

#define DSPR25 (*(volatile unsigned char __near *)0xF125)

#define DSPR26 (*(volatile unsigned char __near *)0xF126)

#define DSPR27 (*(volatile unsigned char __near *)0xF127)

#define DSPR28 (*(volatile unsigned char __near *)0xF128)

#define DSPR29 (*(volatile unsigned char __near *)0xF129)

#define DSPR2A (*(volatile unsigned char __near *)0xF12A)

#define DSPR2B (*(volatile unsigned char __near *)0xF12B)

#define DSPR2C (*(volatile unsigned char __near *)0xF12C)

#define DSPR2D (*(volatile unsigned char __near *)0xF12D)

#define DSPR2E (*(volatile unsigned char __near *)0xF12E)

#define DSPR2F (*(volatile unsigned char __near *)0xF12F)

#define DSPR30 (*(volatile unsigned char __near *)0xF130)

#define DSPR31 (*(volatile unsigned char __near *)0xF131)

#define DSPR32 (*(volatile unsigned char __near *)0xF132)

#define DSPR33 (*(volatile unsigned char __near *)0xF133)

#define DSPR34 (*(volatile unsigned char __near *)0xF134)

#define DSPR35 (*(volatile unsigned char __near *)0xF135)

#define DSPR36 (*(volatile unsigned char __near *)0xF136)

#define DSPR37 (*(volatile unsigned char __near *)0xF137)

#define DSPR38 (*(volatile unsigned char __near *)0xF138)

#define DSPR39 (*(volatile unsigned char __near *)0xF139)

#define DSPR3A (*(volatile unsigned char __near *)0xF13A)

#define DSPR3B (*(volatile unsigned char __near *)0xF13B)

#define DSPR3C (*(volatile unsigned char __near *)0xF13C)

#define DSPR3D (*(volatile unsigned char __near *)0xF13D)

#define DSPR3E (*(volatile unsigned char __near *)0xF13E)

#define DSPR3F (*(volatile unsigned char __near *)0xF13F)

#define DSPR40 (*(volatile unsigned char __near *)0xF140)

#define DSPR41 (*(volatile unsigned char __near *)0xF141)

#define DSPR42 (*(volatile unsigned char __near *)0xF142)

#define DSPR43 (*(volatile unsigned char __near *)0xF143)

#define DSPR44 (*(volatile unsigned char __near *)0xF144)

#define DSPR45 (*(volatile unsigned char __near *)0xF145)

#define DSPR46 (*(volatile unsigned char __near *)0xF146)

#define DSPR47 (*(volatile unsigned char __near *)0xF147)

#define DSPR48 (*(volatile unsigned char __near *)0xF148)

#define DSPR49 (*(volatile unsigned char __near *)0xF149)

#define DSPR4A (*(volatile unsigned char __near *)0xF14A)

#define DSPR4B (*(volatile unsigned char __near *)0xF14B)

#define DSPR4C (*(volatile unsigned char __near *)0xF14C)

#define DSPR4D (*(volatile unsigned char __near *)0xF14D)

#define DSPR4E (*(volatile unsigned char __near *)0xF14E)

#define DSPR4F (*(volatile unsigned char __near *)0xF14F)

#define DSPR50 (*(volatile unsigned char __near *)0xF150)

#define DSPR51 (*(volatile unsigned char __near *)0xF151)

#define DSPR52 (*(volatile unsigned char __near *)0xF152)

#define DSPR53 (*(volatile unsigned char __near *)0xF153)

#define DSPR54 (*(volatile unsigned char __near *)0xF154)

#define DSPR55 (*(volatile unsigned char __near *)0xF155)

#define DSPR56 (*(volatile unsigned char __near *)0xF156)

#define DSPR57 (*(volatile unsigned char __near *)0xF157)

#define DSPR58 (*(volatile unsigned char __near *)0xF158)

#define DSPR59 (*(volatile unsigned char __near *)0xF159)

#define DSPR5A (*(volatile unsigned char __near *)0xF15A)

#define DSPR5B (*(volatile unsigned char __near *)0xF15B)

#define DSPR5C (*(volatile unsigned char __near *)0xF15C)

#define DSPR5D (*(volatile unsigned char __near *)0xF15D)

#define DSPR5E (*(volatile unsigned char __near *)0xF15E)

#define DSPR5F (*(volatile unsigned char __near *)0xF15F)

#define DSPR60 (*(volatile unsigned char __near *)0xF160)

#define DSPR61 (*(volatile unsigned char __near *)0xF161)

#define DSPR62 (*(volatile unsigned char __near *)0xF162)

#define DSPR63 (*(volatile unsigned char __near *)0xF163)

#define DSPR64 (*(volatile unsigned char __near *)0xF164)

#define DSPR65 (*(volatile unsigned char __near *)0xF165)

#define DSPR66 (*(volatile unsigned char __near *)0xF166)

#define DSPR67 (*(volatile unsigned char __near *)0xF167)

#define DSPR68 (*(volatile unsigned char __near *)0xF168)

#define DSPR69 (*(volatile unsigned char __near *)0xF169)

#define DSPR6A (*(volatile unsigned char __near *)0xF16A)

#define DSPR6B (*(volatile unsigned char __near *)0xF16B)

#define DSPR6C (*(volatile unsigned char __near *)0xF16C)

#define DSPR6D (*(volatile unsigned char __near *)0xF16D)

#define DSPR6E (*(volatile unsigned char __near *)0xF16E)

#define DSPR6F (*(volatile unsigned char __near *)0xF16F)

#define DSPR70 (*(volatile unsigned char __near *)0xF170)

#define DSPR71 (*(volatile unsigned char __near *)0xF171)

#define NMID (*(volatile unsigned char __near *)0xF200)
#define _B_NMID (*(volatile _BYTE_FIELD __near *)0xF200)

#define NMICON (*(volatile unsigned char __near *)0xF201)
#define _B_NMICON (*(volatile _BYTE_FIELD __near *)0xF201)

#define P0D (*(volatile unsigned char __near *)0xF204)
#define _B_P0D (*(volatile _BYTE_FIELD __near *)0xF204)

#define P0CON (*(volatile unsigned int __near *)0xF206)

#define P0CON0 (*(volatile unsigned char __near *)0xF206)
#define _B_P0CON0 (*(volatile _BYTE_FIELD __near *)0xF206)

#define P0CON1 (*(volatile unsigned char __near *)0xF207)
#define _B_P0CON1 (*(volatile _BYTE_FIELD __near *)0xF207)

#define P1D (*(volatile unsigned char __near *)0xF208)
#define _B_P1D (*(volatile _BYTE_FIELD __near *)0xF208)

#define P1CON (*(volatile unsigned int __near *)0xF20A)

#define P1CON0 (*(volatile unsigned char __near *)0xF20A)
#define _B_P1CON0 (*(volatile _BYTE_FIELD __near *)0xF20A)

#define P1CON1 (*(volatile unsigned char __near *)0xF20B)
#define _B_P1CON1 (*(volatile _BYTE_FIELD __near *)0xF20B)

#define P2D (*(volatile unsigned char __near *)0xF210)
#define _B_P2D (*(volatile _BYTE_FIELD __near *)0xF210)

#define P2CON (*(volatile unsigned int __near *)0xF212)

#define P2CON0 (*(volatile unsigned char __near *)0xF212)
#define _B_P2CON0 (*(volatile _BYTE_FIELD __near *)0xF212)

#define P2CON1 (*(volatile unsigned char __near *)0xF213)
#define _B_P2CON1 (*(volatile _BYTE_FIELD __near *)0xF213)

#define P2MOD (*(volatile unsigned char __near *)0xF214)
#define _B_P2MOD (*(volatile _BYTE_FIELD __near *)0xF214)

#define P3D (*(volatile unsigned char __near *)0xF218)
#define _B_P3D (*(volatile _BYTE_FIELD __near *)0xF218)

#define P3DIR (*(volatile unsigned char __near *)0xF219)
#define _B_P3DIR (*(volatile _BYTE_FIELD __near *)0xF219)

#define P3CON (*(volatile unsigned int __near *)0xF21A)

#define P3CON0 (*(volatile unsigned char __near *)0xF21A)
#define _B_P3CON0 (*(volatile _BYTE_FIELD __near *)0xF21A)

#define P3CON1 (*(volatile unsigned char __near *)0xF21B)
#define _B_P3CON1 (*(volatile _BYTE_FIELD __near *)0xF21B)

#define P3MOD (*(volatile unsigned int __near *)0xF21C)

#define P3MOD0 (*(volatile unsigned char __near *)0xF21C)
#define _B_P3MOD0 (*(volatile _BYTE_FIELD __near *)0xF21C)

#define P3MOD1 (*(volatile unsigned char __near *)0xF21D)
#define _B_P3MOD1 (*(volatile _BYTE_FIELD __near *)0xF21D)

#define P4D (*(volatile unsigned char __near *)0xF220)
#define _B_P4D (*(volatile _BYTE_FIELD __near *)0xF220)

#define P4DIR (*(volatile unsigned char __near *)0xF221)
#define _B_P4DIR (*(volatile _BYTE_FIELD __near *)0xF221)

#define P4CON (*(volatile unsigned int __near *)0xF222)

#define P4CON0 (*(volatile unsigned char __near *)0xF222)
#define _B_P4CON0 (*(volatile _BYTE_FIELD __near *)0xF222)

#define P4CON1 (*(volatile unsigned char __near *)0xF223)
#define _B_P4CON1 (*(volatile _BYTE_FIELD __near *)0xF223)

#define P4MOD (*(volatile unsigned int __near *)0xF224)

#define P4MOD0 (*(volatile unsigned char __near *)0xF224)
#define _B_P4MOD0 (*(volatile _BYTE_FIELD __near *)0xF224)

#define P4MOD1 (*(volatile unsigned char __near *)0xF225)
#define _B_P4MOD1 (*(volatile _BYTE_FIELD __near *)0xF225)

#define PAD (*(volatile unsigned char __near *)0xF250)
#define _B_PAD (*(volatile _BYTE_FIELD __near *)0xF250)

#define PADIR (*(volatile unsigned char __near *)0xF251)
#define _B_PADIR (*(volatile _BYTE_FIELD __near *)0xF251)

#define PACON (*(volatile unsigned int __near *)0xF252)

#define PACON0 (*(volatile unsigned char __near *)0xF252)
#define _B_PACON0 (*(volatile _BYTE_FIELD __near *)0xF252)

#define PACON1 (*(volatile unsigned char __near *)0xF253)
#define _B_PACON1 (*(volatile _BYTE_FIELD __near *)0xF253)

#define SIO0BUF (*(volatile unsigned int __near *)0xF280)

#define SIO0BUFL (*(volatile unsigned char __near *)0xF280)
#define _B_SIO0BUFL (*(volatile _BYTE_FIELD __near *)0xF280)

#define SIO0BUFH (*(volatile unsigned char __near *)0xF281)
#define _B_SIO0BUFH (*(volatile _BYTE_FIELD __near *)0xF281)

#define SIO0CON (*(volatile unsigned char __near *)0xF282)
#define _B_SIO0CON (*(volatile _BYTE_FIELD __near *)0xF282)

#define SIO0MOD (*(volatile unsigned int __near *)0xF284)

#define SIO0MOD0 (*(volatile unsigned char __near *)0xF284)
#define _B_SIO0MOD0 (*(volatile _BYTE_FIELD __near *)0xF284)

#define SIO0MOD1 (*(volatile unsigned char __near *)0xF285)
#define _B_SIO0MOD1 (*(volatile _BYTE_FIELD __near *)0xF285)

#define UA0BUF (*(volatile unsigned char __near *)0xF290)
#define _B_UA0BUF (*(volatile _BYTE_FIELD __near *)0xF290)

#define UA0CON (*(volatile unsigned char __near *)0xF291)
#define _B_UA0CON (*(volatile _BYTE_FIELD __near *)0xF291)

#define UA0MOD (*(volatile unsigned int __near *)0xF292)

#define UA0MOD0 (*(volatile unsigned char __near *)0xF292)
#define _B_UA0MOD0 (*(volatile _BYTE_FIELD __near *)0xF292)

#define UA0MOD1 (*(volatile unsigned char __near *)0xF293)
#define _B_UA0MOD1 (*(volatile _BYTE_FIELD __near *)0xF293)

#define UA0BRT (*(volatile unsigned int __near *)0xF294)

#define UA0BRTL (*(volatile unsigned char __near *)0xF294)
#define _B_UA0BRTL (*(volatile _BYTE_FIELD __near *)0xF294)

#define UA0BRTH (*(volatile unsigned char __near *)0xF295)
#define _B_UA0BRTH (*(volatile _BYTE_FIELD __near *)0xF295)

#define UA0STAT (*(volatile unsigned char __near *)0xF296)
#define _B_UA0STAT (*(volatile _BYTE_FIELD __near *)0xF296)

#define I2C0RD (*(volatile unsigned char __near *)0xF2A0)
#define _B_I2C0RD (*(volatile _BYTE_FIELD __near *)0xF2A0)

#define I2C0SA (*(volatile unsigned char __near *)0xF2A1)
#define _B_I2C0SA (*(volatile _BYTE_FIELD __near *)0xF2A1)

#define I2C0TD (*(volatile unsigned char __near *)0xF2A2)
#define _B_I2C0TD (*(volatile _BYTE_FIELD __near *)0xF2A2)

#define I2C0CON (*(volatile unsigned char __near *)0xF2A3)
#define _B_I2C0CON (*(volatile _BYTE_FIELD __near *)0xF2A3)

#define I2C0MOD (*(volatile unsigned char __near *)0xF2A4)
#define _B_I2C0MOD (*(volatile _BYTE_FIELD __near *)0xF2A4)

#define I2C0STAT (*(volatile unsigned char __near *)0xF2A5)
#define _B_I2C0STAT (*(volatile _BYTE_FIELD __near *)0xF2A5)

#define MD0CON (*(volatile unsigned char __near *)0xF2C0)
#define _B_MD0CON (*(volatile _BYTE_FIELD __near *)0xF2C0)

#define MD0TMP (*(volatile unsigned char __near *)0xF2C1)
#define _B_MD0TMP (*(volatile _BYTE_FIELD __near *)0xF2C1)

#define MD0TL (*(volatile unsigned int __near *)0xF2C2)

#define MD0TON (*(volatile unsigned char __near *)0xF2C2)
#define _B_MD0TON (*(volatile _BYTE_FIELD __near *)0xF2C2)

#define MD0LEN (*(volatile unsigned char __near *)0xF2C3)
#define _B_MD0LEN (*(volatile _BYTE_FIELD __near *)0xF2C3)

#define SADR0 (*(volatile unsigned int __near *)0xF2D0)

#define SADR0L (*(volatile unsigned char __near *)0xF2D0)
#define _B_SADR0L (*(volatile _BYTE_FIELD __near *)0xF2D0)

#define SADR0H (*(volatile unsigned char __near *)0xF2D1)
#define _B_SADR0H (*(volatile _BYTE_FIELD __near *)0xF2D1)

#define SADR1 (*(volatile unsigned int __near *)0xF2D2)

#define SADR1L (*(volatile unsigned char __near *)0xF2D2)
#define _B_SADR1L (*(volatile _BYTE_FIELD __near *)0xF2D2)

#define SADR1H (*(volatile unsigned char __near *)0xF2D3)
#define _B_SADR1H (*(volatile _BYTE_FIELD __near *)0xF2D3)

#define SADCON (*(volatile unsigned int __near *)0xF2F0)

#define SADCON0 (*(volatile unsigned char __near *)0xF2F0)
#define _B_SADCON0 (*(volatile _BYTE_FIELD __near *)0xF2F0)

#define SADCON1 (*(volatile unsigned char __near *)0xF2F1)
#define _B_SADCON1 (*(volatile _BYTE_FIELD __near *)0xF2F1)

#define SADMOD0 (*(volatile unsigned char __near *)0xF2F2)
#define _B_SADMOD0 (*(volatile _BYTE_FIELD __near *)0xF2F2)

#define RADCA0 (*(volatile unsigned char __near *)0xF300)
#define _B_RADCA0 (*(volatile _BYTE_FIELD __near *)0xF300)

#define RADCA1 (*(volatile unsigned char __near *)0xF301)
#define _B_RADCA1 (*(volatile _BYTE_FIELD __near *)0xF301)

#define RADCA2 (*(volatile unsigned char __near *)0xF302)
#define _B_RADCA2 (*(volatile _BYTE_FIELD __near *)0xF302)

#define RADCB0 (*(volatile unsigned char __near *)0xF304)
#define _B_RADCB0 (*(volatile _BYTE_FIELD __near *)0xF304)

#define RADCB1 (*(volatile unsigned char __near *)0xF305)
#define _B_RADCB1 (*(volatile _BYTE_FIELD __near *)0xF305)

#define RADCB2 (*(volatile unsigned char __near *)0xF306)
#define _B_RADCB2 (*(volatile _BYTE_FIELD __near *)0xF306)

#define RADMOD (*(volatile unsigned char __near *)0xF308)
#define _B_RADMOD (*(volatile _BYTE_FIELD __near *)0xF308)

#define RADCON (*(volatile unsigned char __near *)0xF309)
#define _B_RADCON (*(volatile _BYTE_FIELD __near *)0xF309)

#define DS0C0A (*(volatile unsigned char __near *)0xF400)

#define DS1C0A (*(volatile unsigned char __near *)0xF401)

#define DS2C0A (*(volatile unsigned char __near *)0xF402)

#define DS3C0A (*(volatile unsigned char __near *)0xF403)

#define DS4C0A (*(volatile unsigned char __near *)0xF404)

#define DS5C0A (*(volatile unsigned char __near *)0xF405)

#define DS6C0A (*(volatile unsigned char __near *)0xF406)

#define DS7C0A (*(volatile unsigned char __near *)0xF407)

#define DS8C0A (*(volatile unsigned char __near *)0xF408)

#define DS9C0A (*(volatile unsigned char __near *)0xF409)

#define DS10C0A (*(volatile unsigned char __near *)0xF40A)

#define DS11C0A (*(volatile unsigned char __near *)0xF40B)

#define DS12C0A (*(volatile unsigned char __near *)0xF40C)

#define DS13C0A (*(volatile unsigned char __near *)0xF40D)

#define DS14C0A (*(volatile unsigned char __near *)0xF40E)

#define DS15C0A (*(volatile unsigned char __near *)0xF40F)

#define DS16C0A (*(volatile unsigned char __near *)0xF410)

#define DS17C0A (*(volatile unsigned char __near *)0xF411)

#define DS18C0A (*(volatile unsigned char __near *)0xF412)

#define DS19C0A (*(volatile unsigned char __near *)0xF413)

#define DS20C0A (*(volatile unsigned char __near *)0xF414)

#define DS21C0A (*(volatile unsigned char __near *)0xF415)

#define DS22C0A (*(volatile unsigned char __near *)0xF416)

#define DS23C0A (*(volatile unsigned char __near *)0xF417)

#define DS24C0A (*(volatile unsigned char __near *)0xF418)

#define DS25C0A (*(volatile unsigned char __near *)0xF419)

#define DS26C0A (*(volatile unsigned char __near *)0xF41A)

#define DS27C0A (*(volatile unsigned char __near *)0xF41B)

#define DS28C0A (*(volatile unsigned char __near *)0xF41C)

#define DS29C0A (*(volatile unsigned char __near *)0xF41D)

#define DS30C0A (*(volatile unsigned char __near *)0xF41E)

#define DS31C0A (*(volatile unsigned char __near *)0xF41F)

#define DS32C0A (*(volatile unsigned char __near *)0xF420)

#define DS33C0A (*(volatile unsigned char __near *)0xF421)

#define DS34C0A (*(volatile unsigned char __near *)0xF422)

#define DS35C0A (*(volatile unsigned char __near *)0xF423)

#define DS36C0A (*(volatile unsigned char __near *)0xF424)

#define DS37C0A (*(volatile unsigned char __near *)0xF425)

#define DS38C0A (*(volatile unsigned char __near *)0xF426)

#define DS39C0A (*(volatile unsigned char __near *)0xF427)

#define DS40C0A (*(volatile unsigned char __near *)0xF428)

#define DS41C0A (*(volatile unsigned char __near *)0xF429)

#define DS42C0A (*(volatile unsigned char __near *)0xF42A)

#define DS43C0A (*(volatile unsigned char __near *)0xF42B)

#define DS44C0A (*(volatile unsigned char __near *)0xF42C)

#define DS45C0A (*(volatile unsigned char __near *)0xF42D)

#define DS46C0A (*(volatile unsigned char __near *)0xF42E)

#define DS47C0A (*(volatile unsigned char __near *)0xF42F)

#define DS48C0A (*(volatile unsigned char __near *)0xF430)

#define DS49C0A (*(volatile unsigned char __near *)0xF431)

#define DS50C0A (*(volatile unsigned char __near *)0xF432)

#define DS51C0A (*(volatile unsigned char __near *)0xF433)

#define DS52C0A (*(volatile unsigned char __near *)0xF434)

#define DS53C0A (*(volatile unsigned char __near *)0xF435)

#define DS54C0A (*(volatile unsigned char __near *)0xF436)

#define DS55C0A (*(volatile unsigned char __near *)0xF437)

#define DS56C0A (*(volatile unsigned char __near *)0xF438)

#define DS57C0A (*(volatile unsigned char __near *)0xF439)

#define DS58C0A (*(volatile unsigned char __near *)0xF43A)

#define DS59C0A (*(volatile unsigned char __near *)0xF43B)

#define DS60C0A (*(volatile unsigned char __near *)0xF43C)

#define DS61C0A (*(volatile unsigned char __near *)0xF43D)

#define DS62C0A (*(volatile unsigned char __near *)0xF43E)

#define DS63C0A (*(volatile unsigned char __near *)0xF43F)

#define DS0C1A (*(volatile unsigned char __near *)0xF440)

#define DS1C1A (*(volatile unsigned char __near *)0xF441)

#define DS2C1A (*(volatile unsigned char __near *)0xF442)

#define DS3C1A (*(volatile unsigned char __near *)0xF443)

#define DS4C1A (*(volatile unsigned char __near *)0xF444)

#define DS5C1A (*(volatile unsigned char __near *)0xF445)

#define DS6C1A (*(volatile unsigned char __near *)0xF446)

#define DS7C1A (*(volatile unsigned char __near *)0xF447)

#define DS8C1A (*(volatile unsigned char __near *)0xF448)

#define DS9C1A (*(volatile unsigned char __near *)0xF449)

#define DS10C1A (*(volatile unsigned char __near *)0xF44A)

#define DS11C1A (*(volatile unsigned char __near *)0xF44B)

#define DS12C1A (*(volatile unsigned char __near *)0xF44C)

#define DS13C1A (*(volatile unsigned char __near *)0xF44D)

#define DS14C1A (*(volatile unsigned char __near *)0xF44E)

#define DS15C1A (*(volatile unsigned char __near *)0xF44F)

#define DS16C1A (*(volatile unsigned char __near *)0xF450)

#define DS17C1A (*(volatile unsigned char __near *)0xF451)

#define DS18C1A (*(volatile unsigned char __near *)0xF452)

#define DS19C1A (*(volatile unsigned char __near *)0xF453)

#define DS20C1A (*(volatile unsigned char __near *)0xF454)

#define DS21C1A (*(volatile unsigned char __near *)0xF455)

#define DS22C1A (*(volatile unsigned char __near *)0xF456)

#define DS23C1A (*(volatile unsigned char __near *)0xF457)

#define DS24C1A (*(volatile unsigned char __near *)0xF458)

#define DS25C1A (*(volatile unsigned char __near *)0xF459)

#define DS26C1A (*(volatile unsigned char __near *)0xF45A)

#define DS27C1A (*(volatile unsigned char __near *)0xF45B)

#define DS28C1A (*(volatile unsigned char __near *)0xF45C)

#define DS29C1A (*(volatile unsigned char __near *)0xF45D)

#define DS30C1A (*(volatile unsigned char __near *)0xF45E)

#define DS31C1A (*(volatile unsigned char __near *)0xF45F)

#define DS32C1A (*(volatile unsigned char __near *)0xF460)

#define DS33C1A (*(volatile unsigned char __near *)0xF461)

#define DS34C1A (*(volatile unsigned char __near *)0xF462)

#define DS35C1A (*(volatile unsigned char __near *)0xF463)

#define DS36C1A (*(volatile unsigned char __near *)0xF464)

#define DS37C1A (*(volatile unsigned char __near *)0xF465)

#define DS38C1A (*(volatile unsigned char __near *)0xF466)

#define DS39C1A (*(volatile unsigned char __near *)0xF467)

#define DS40C1A (*(volatile unsigned char __near *)0xF468)

#define DS41C1A (*(volatile unsigned char __near *)0xF469)

#define DS42C1A (*(volatile unsigned char __near *)0xF46A)

#define DS43C1A (*(volatile unsigned char __near *)0xF46B)

#define DS44C1A (*(volatile unsigned char __near *)0xF46C)

#define DS45C1A (*(volatile unsigned char __near *)0xF46D)

#define DS46C1A (*(volatile unsigned char __near *)0xF46E)

#define DS47C1A (*(volatile unsigned char __near *)0xF46F)

#define DS48C1A (*(volatile unsigned char __near *)0xF470)

#define DS49C1A (*(volatile unsigned char __near *)0xF471)

#define DS50C1A (*(volatile unsigned char __near *)0xF472)

#define DS51C1A (*(volatile unsigned char __near *)0xF473)

#define DS52C1A (*(volatile unsigned char __near *)0xF474)

#define DS53C1A (*(volatile unsigned char __near *)0xF475)

#define DS54C1A (*(volatile unsigned char __near *)0xF476)

#define DS55C1A (*(volatile unsigned char __near *)0xF477)

#define DS56C1A (*(volatile unsigned char __near *)0xF478)

#define DS57C1A (*(volatile unsigned char __near *)0xF479)

#define DS58C1A (*(volatile unsigned char __near *)0xF47A)

#define DS59C1A (*(volatile unsigned char __near *)0xF47B)

#define DS60C1A (*(volatile unsigned char __near *)0xF47C)

#define DS61C1A (*(volatile unsigned char __near *)0xF47D)

#define DS62C1A (*(volatile unsigned char __near *)0xF47E)

#define DS63C1A (*(volatile unsigned char __near *)0xF47F)

#define DS0C2A (*(volatile unsigned char __near *)0xF480)

#define DS1C2A (*(volatile unsigned char __near *)0xF481)

#define DS2C2A (*(volatile unsigned char __near *)0xF482)

#define DS3C2A (*(volatile unsigned char __near *)0xF483)

#define DS4C2A (*(volatile unsigned char __near *)0xF484)

#define DS5C2A (*(volatile unsigned char __near *)0xF485)

#define DS6C2A (*(volatile unsigned char __near *)0xF486)

#define DS7C2A (*(volatile unsigned char __near *)0xF487)

#define DS8C2A (*(volatile unsigned char __near *)0xF488)

#define DS9C2A (*(volatile unsigned char __near *)0xF489)

#define DS10C2A (*(volatile unsigned char __near *)0xF48A)

#define DS11C2A (*(volatile unsigned char __near *)0xF48B)

#define DS12C2A (*(volatile unsigned char __near *)0xF48C)

#define DS13C2A (*(volatile unsigned char __near *)0xF48D)

#define DS14C2A (*(volatile unsigned char __near *)0xF48E)

#define DS15C2A (*(volatile unsigned char __near *)0xF48F)

#define DS16C2A (*(volatile unsigned char __near *)0xF490)

#define DS17C2A (*(volatile unsigned char __near *)0xF491)

#define DS18C2A (*(volatile unsigned char __near *)0xF492)

#define DS19C2A (*(volatile unsigned char __near *)0xF493)

#define DS20C2A (*(volatile unsigned char __near *)0xF494)

#define DS21C2A (*(volatile unsigned char __near *)0xF495)

#define DS22C2A (*(volatile unsigned char __near *)0xF496)

#define DS23C2A (*(volatile unsigned char __near *)0xF497)

#define DS24C2A (*(volatile unsigned char __near *)0xF498)

#define DS25C2A (*(volatile unsigned char __near *)0xF499)

#define DS26C2A (*(volatile unsigned char __near *)0xF49A)

#define DS27C2A (*(volatile unsigned char __near *)0xF49B)

#define DS28C2A (*(volatile unsigned char __near *)0xF49C)

#define DS29C2A (*(volatile unsigned char __near *)0xF49D)

#define DS30C2A (*(volatile unsigned char __near *)0xF49E)

#define DS31C2A (*(volatile unsigned char __near *)0xF49F)

#define DS32C2A (*(volatile unsigned char __near *)0xF4A0)

#define DS33C2A (*(volatile unsigned char __near *)0xF4A1)

#define DS34C2A (*(volatile unsigned char __near *)0xF4A2)

#define DS35C2A (*(volatile unsigned char __near *)0xF4A3)

#define DS36C2A (*(volatile unsigned char __near *)0xF4A4)

#define DS37C2A (*(volatile unsigned char __near *)0xF4A5)

#define DS38C2A (*(volatile unsigned char __near *)0xF4A6)

#define DS39C2A (*(volatile unsigned char __near *)0xF4A7)

#define DS40C2A (*(volatile unsigned char __near *)0xF4A8)

#define DS41C2A (*(volatile unsigned char __near *)0xF4A9)

#define DS42C2A (*(volatile unsigned char __near *)0xF4AA)

#define DS43C2A (*(volatile unsigned char __near *)0xF4AB)

#define DS44C2A (*(volatile unsigned char __near *)0xF4AC)

#define DS45C2A (*(volatile unsigned char __near *)0xF4AD)

#define DS46C2A (*(volatile unsigned char __near *)0xF4AE)

#define DS47C2A (*(volatile unsigned char __near *)0xF4AF)

#define DS48C2A (*(volatile unsigned char __near *)0xF4B0)

#define DS49C2A (*(volatile unsigned char __near *)0xF4B1)

#define DS50C2A (*(volatile unsigned char __near *)0xF4B2)

#define DS51C2A (*(volatile unsigned char __near *)0xF4B3)

#define DS52C2A (*(volatile unsigned char __near *)0xF4B4)

#define DS53C2A (*(volatile unsigned char __near *)0xF4B5)

#define DS54C2A (*(volatile unsigned char __near *)0xF4B6)

#define DS55C2A (*(volatile unsigned char __near *)0xF4B7)

#define DS56C2A (*(volatile unsigned char __near *)0xF4B8)

#define DS57C2A (*(volatile unsigned char __near *)0xF4B9)

#define DS58C2A (*(volatile unsigned char __near *)0xF4BA)

#define DS59C2A (*(volatile unsigned char __near *)0xF4BB)

#define DS60C2A (*(volatile unsigned char __near *)0xF4BC)

#define DS61C2A (*(volatile unsigned char __near *)0xF4BD)

#define DS62C2A (*(volatile unsigned char __near *)0xF4BE)

#define DS63C2A (*(volatile unsigned char __near *)0xF4BF)

#define DS0C3A (*(volatile unsigned char __near *)0xF4C0)

#define DS1C3A (*(volatile unsigned char __near *)0xF4C1)

#define DS2C3A (*(volatile unsigned char __near *)0xF4C2)

#define DS3C3A (*(volatile unsigned char __near *)0xF4C3)

#define DS4C3A (*(volatile unsigned char __near *)0xF4C4)

#define DS5C3A (*(volatile unsigned char __near *)0xF4C5)

#define DS6C3A (*(volatile unsigned char __near *)0xF4C6)

#define DS7C3A (*(volatile unsigned char __near *)0xF4C7)

#define DS8C3A (*(volatile unsigned char __near *)0xF4C8)

#define DS9C3A (*(volatile unsigned char __near *)0xF4C9)

#define DS10C3A (*(volatile unsigned char __near *)0xF4CA)

#define DS11C3A (*(volatile unsigned char __near *)0xF4CB)

#define DS12C3A (*(volatile unsigned char __near *)0xF4CC)

#define DS13C3A (*(volatile unsigned char __near *)0xF4CD)

#define DS14C3A (*(volatile unsigned char __near *)0xF4CE)

#define DS15C3A (*(volatile unsigned char __near *)0xF4CF)

#define DS16C3A (*(volatile unsigned char __near *)0xF4D0)

#define DS17C3A (*(volatile unsigned char __near *)0xF4D1)

#define DS18C3A (*(volatile unsigned char __near *)0xF4D2)

#define DS19C3A (*(volatile unsigned char __near *)0xF4D3)

#define DS20C3A (*(volatile unsigned char __near *)0xF4D4)

#define DS21C3A (*(volatile unsigned char __near *)0xF4D5)

#define DS22C3A (*(volatile unsigned char __near *)0xF4D6)

#define DS23C3A (*(volatile unsigned char __near *)0xF4D7)

#define DS24C3A (*(volatile unsigned char __near *)0xF4D8)

#define DS25C3A (*(volatile unsigned char __near *)0xF4D9)

#define DS26C3A (*(volatile unsigned char __near *)0xF4DA)

#define DS27C3A (*(volatile unsigned char __near *)0xF4DB)

#define DS28C3A (*(volatile unsigned char __near *)0xF4DC)

#define DS29C3A (*(volatile unsigned char __near *)0xF4DD)

#define DS30C3A (*(volatile unsigned char __near *)0xF4DE)

#define DS31C3A (*(volatile unsigned char __near *)0xF4DF)

#define DS32C3A (*(volatile unsigned char __near *)0xF4E0)

#define DS33C3A (*(volatile unsigned char __near *)0xF4E1)

#define DS34C3A (*(volatile unsigned char __near *)0xF4E2)

#define DS35C3A (*(volatile unsigned char __near *)0xF4E3)

#define DS36C3A (*(volatile unsigned char __near *)0xF4E4)

#define DS37C3A (*(volatile unsigned char __near *)0xF4E5)

#define DS38C3A (*(volatile unsigned char __near *)0xF4E6)

#define DS39C3A (*(volatile unsigned char __near *)0xF4E7)

#define DS40C3A (*(volatile unsigned char __near *)0xF4E8)

#define DS41C3A (*(volatile unsigned char __near *)0xF4E9)

#define DS42C3A (*(volatile unsigned char __near *)0xF4EA)

#define DS43C3A (*(volatile unsigned char __near *)0xF4EB)

#define DS44C3A (*(volatile unsigned char __near *)0xF4EC)

#define DS45C3A (*(volatile unsigned char __near *)0xF4ED)

#define DS46C3A (*(volatile unsigned char __near *)0xF4EE)

#define DS47C3A (*(volatile unsigned char __near *)0xF4EF)

#define DS48C3A (*(volatile unsigned char __near *)0xF4F0)

#define DS49C3A (*(volatile unsigned char __near *)0xF4F1)

#define DS50C3A (*(volatile unsigned char __near *)0xF4F2)

#define DS51C3A (*(volatile unsigned char __near *)0xF4F3)

#define DS52C3A (*(volatile unsigned char __near *)0xF4F4)

#define DS53C3A (*(volatile unsigned char __near *)0xF4F5)

#define DS54C3A (*(volatile unsigned char __near *)0xF4F6)

#define DS55C3A (*(volatile unsigned char __near *)0xF4F7)

#define DS56C3A (*(volatile unsigned char __near *)0xF4F8)

#define DS57C3A (*(volatile unsigned char __near *)0xF4F9)

#define DS58C3A (*(volatile unsigned char __near *)0xF4FA)

#define DS59C3A (*(volatile unsigned char __near *)0xF4FB)

#define DS60C3A (*(volatile unsigned char __near *)0xF4FC)

#define DS61C3A (*(volatile unsigned char __near *)0xF4FD)

#define DS62C3A (*(volatile unsigned char __near *)0xF4FE)

#define DS63C3A (*(volatile unsigned char __near *)0xF4FF)

#define DS0C4A (*(volatile unsigned char __near *)0xF500)

#define DS1C4A (*(volatile unsigned char __near *)0xF501)

#define DS2C4A (*(volatile unsigned char __near *)0xF502)

#define DS3C4A (*(volatile unsigned char __near *)0xF503)

#define DS4C4A (*(volatile unsigned char __near *)0xF504)

#define DS5C4A (*(volatile unsigned char __near *)0xF505)

#define DS6C4A (*(volatile unsigned char __near *)0xF506)

#define DS7C4A (*(volatile unsigned char __near *)0xF507)

#define DS8C4A (*(volatile unsigned char __near *)0xF508)

#define DS9C4A (*(volatile unsigned char __near *)0xF509)

#define DS10C4A (*(volatile unsigned char __near *)0xF50A)

#define DS11C4A (*(volatile unsigned char __near *)0xF50B)

#define DS12C4A (*(volatile unsigned char __near *)0xF50C)

#define DS13C4A (*(volatile unsigned char __near *)0xF50D)

#define DS14C4A (*(volatile unsigned char __near *)0xF50E)

#define DS15C4A (*(volatile unsigned char __near *)0xF50F)

#define DS16C4A (*(volatile unsigned char __near *)0xF510)

#define DS17C4A (*(volatile unsigned char __near *)0xF511)

#define DS18C4A (*(volatile unsigned char __near *)0xF512)

#define DS19C4A (*(volatile unsigned char __near *)0xF513)

#define DS20C4A (*(volatile unsigned char __near *)0xF514)

#define DS21C4A (*(volatile unsigned char __near *)0xF515)

#define DS22C4A (*(volatile unsigned char __near *)0xF516)

#define DS23C4A (*(volatile unsigned char __near *)0xF517)

#define DS24C4A (*(volatile unsigned char __near *)0xF518)

#define DS25C4A (*(volatile unsigned char __near *)0xF519)

#define DS26C4A (*(volatile unsigned char __near *)0xF51A)

#define DS27C4A (*(volatile unsigned char __near *)0xF51B)

#define DS28C4A (*(volatile unsigned char __near *)0xF51C)

#define DS29C4A (*(volatile unsigned char __near *)0xF51D)

#define DS30C4A (*(volatile unsigned char __near *)0xF51E)

#define DS31C4A (*(volatile unsigned char __near *)0xF51F)

#define DS32C4A (*(volatile unsigned char __near *)0xF520)

#define DS33C4A (*(volatile unsigned char __near *)0xF521)

#define DS34C4A (*(volatile unsigned char __near *)0xF522)

#define DS35C4A (*(volatile unsigned char __near *)0xF523)

#define DS36C4A (*(volatile unsigned char __near *)0xF524)

#define DS37C4A (*(volatile unsigned char __near *)0xF525)

#define DS38C4A (*(volatile unsigned char __near *)0xF526)

#define DS39C4A (*(volatile unsigned char __near *)0xF527)

#define DS40C4A (*(volatile unsigned char __near *)0xF528)

#define DS41C4A (*(volatile unsigned char __near *)0xF529)

#define DS42C4A (*(volatile unsigned char __near *)0xF52A)

#define DS43C4A (*(volatile unsigned char __near *)0xF52B)

#define DS44C4A (*(volatile unsigned char __near *)0xF52C)

#define DS45C4A (*(volatile unsigned char __near *)0xF52D)

#define DS46C4A (*(volatile unsigned char __near *)0xF52E)

#define DS47C4A (*(volatile unsigned char __near *)0xF52F)

#define DS48C4A (*(volatile unsigned char __near *)0xF530)

#define DS49C4A (*(volatile unsigned char __near *)0xF531)

#define DS50C4A (*(volatile unsigned char __near *)0xF532)

#define DS51C4A (*(volatile unsigned char __near *)0xF533)

#define DS52C4A (*(volatile unsigned char __near *)0xF534)

#define DS53C4A (*(volatile unsigned char __near *)0xF535)

#define DS54C4A (*(volatile unsigned char __near *)0xF536)

#define DS55C4A (*(volatile unsigned char __near *)0xF537)

#define DS56C4A (*(volatile unsigned char __near *)0xF538)

#define DS57C4A (*(volatile unsigned char __near *)0xF539)

#define DS58C4A (*(volatile unsigned char __near *)0xF53A)

#define DS59C4A (*(volatile unsigned char __near *)0xF53B)

#define DS60C4A (*(volatile unsigned char __near *)0xF53C)

#define DS61C4A (*(volatile unsigned char __near *)0xF53D)

#define DS62C4A (*(volatile unsigned char __near *)0xF53E)

#define DS63C4A (*(volatile unsigned char __near *)0xF53F)

#define DS0C5A (*(volatile unsigned char __near *)0xF540)

#define DS1C5A (*(volatile unsigned char __near *)0xF541)

#define DS2C5A (*(volatile unsigned char __near *)0xF542)

#define DS3C5A (*(volatile unsigned char __near *)0xF543)

#define DS4C5A (*(volatile unsigned char __near *)0xF544)

#define DS5C5A (*(volatile unsigned char __near *)0xF545)

#define DS6C5A (*(volatile unsigned char __near *)0xF546)

#define DS7C5A (*(volatile unsigned char __near *)0xF547)

#define DS8C5A (*(volatile unsigned char __near *)0xF548)

#define DS9C5A (*(volatile unsigned char __near *)0xF549)

#define DS10C5A (*(volatile unsigned char __near *)0xF54A)

#define DS11C5A (*(volatile unsigned char __near *)0xF54B)

#define DS12C5A (*(volatile unsigned char __near *)0xF54C)

#define DS13C5A (*(volatile unsigned char __near *)0xF54D)

#define DS14C5A (*(volatile unsigned char __near *)0xF54E)

#define DS15C5A (*(volatile unsigned char __near *)0xF54F)

#define DS16C5A (*(volatile unsigned char __near *)0xF550)

#define DS17C5A (*(volatile unsigned char __near *)0xF551)

#define DS18C5A (*(volatile unsigned char __near *)0xF552)

#define DS19C5A (*(volatile unsigned char __near *)0xF553)

#define DS20C5A (*(volatile unsigned char __near *)0xF554)

#define DS21C5A (*(volatile unsigned char __near *)0xF555)

#define DS22C5A (*(volatile unsigned char __near *)0xF556)

#define DS23C5A (*(volatile unsigned char __near *)0xF557)

#define DS24C5A (*(volatile unsigned char __near *)0xF558)

#define DS25C5A (*(volatile unsigned char __near *)0xF559)

#define DS26C5A (*(volatile unsigned char __near *)0xF55A)

#define DS27C5A (*(volatile unsigned char __near *)0xF55B)

#define DS28C5A (*(volatile unsigned char __near *)0xF55C)

#define DS29C5A (*(volatile unsigned char __near *)0xF55D)

#define DS30C5A (*(volatile unsigned char __near *)0xF55E)

#define DS31C5A (*(volatile unsigned char __near *)0xF55F)

#define DS32C5A (*(volatile unsigned char __near *)0xF560)

#define DS33C5A (*(volatile unsigned char __near *)0xF561)

#define DS34C5A (*(volatile unsigned char __near *)0xF562)

#define DS35C5A (*(volatile unsigned char __near *)0xF563)

#define DS36C5A (*(volatile unsigned char __near *)0xF564)

#define DS37C5A (*(volatile unsigned char __near *)0xF565)

#define DS38C5A (*(volatile unsigned char __near *)0xF566)

#define DS39C5A (*(volatile unsigned char __near *)0xF567)

#define DS40C5A (*(volatile unsigned char __near *)0xF568)

#define DS41C5A (*(volatile unsigned char __near *)0xF569)

#define DS42C5A (*(volatile unsigned char __near *)0xF56A)

#define DS43C5A (*(volatile unsigned char __near *)0xF56B)

#define DS44C5A (*(volatile unsigned char __near *)0xF56C)

#define DS45C5A (*(volatile unsigned char __near *)0xF56D)

#define DS46C5A (*(volatile unsigned char __near *)0xF56E)

#define DS47C5A (*(volatile unsigned char __near *)0xF56F)

#define DS48C5A (*(volatile unsigned char __near *)0xF570)

#define DS49C5A (*(volatile unsigned char __near *)0xF571)

#define DS50C5A (*(volatile unsigned char __near *)0xF572)

#define DS51C5A (*(volatile unsigned char __near *)0xF573)

#define DS52C5A (*(volatile unsigned char __near *)0xF574)

#define DS53C5A (*(volatile unsigned char __near *)0xF575)

#define DS54C5A (*(volatile unsigned char __near *)0xF576)

#define DS55C5A (*(volatile unsigned char __near *)0xF577)

#define DS56C5A (*(volatile unsigned char __near *)0xF578)

#define DS57C5A (*(volatile unsigned char __near *)0xF579)

#define DS58C5A (*(volatile unsigned char __near *)0xF57A)

#define DS59C5A (*(volatile unsigned char __near *)0xF57B)

#define DS60C5A (*(volatile unsigned char __near *)0xF57C)

#define DS61C5A (*(volatile unsigned char __near *)0xF57D)

#define DS62C5A (*(volatile unsigned char __near *)0xF57E)

#define DS63C5A (*(volatile unsigned char __near *)0xF57F)

#define DS0C6A (*(volatile unsigned char __near *)0xF580)

#define DS1C6A (*(volatile unsigned char __near *)0xF581)

#define DS2C6A (*(volatile unsigned char __near *)0xF582)

#define DS3C6A (*(volatile unsigned char __near *)0xF583)

#define DS4C6A (*(volatile unsigned char __near *)0xF584)

#define DS5C6A (*(volatile unsigned char __near *)0xF585)

#define DS6C6A (*(volatile unsigned char __near *)0xF586)

#define DS7C6A (*(volatile unsigned char __near *)0xF587)

#define DS8C6A (*(volatile unsigned char __near *)0xF588)

#define DS9C6A (*(volatile unsigned char __near *)0xF589)

#define DS10C6A (*(volatile unsigned char __near *)0xF58A)

#define DS11C6A (*(volatile unsigned char __near *)0xF58B)

#define DS12C6A (*(volatile unsigned char __near *)0xF58C)

#define DS13C6A (*(volatile unsigned char __near *)0xF58D)

#define DS14C6A (*(volatile unsigned char __near *)0xF58E)

#define DS15C6A (*(volatile unsigned char __near *)0xF58F)

#define DS16C6A (*(volatile unsigned char __near *)0xF590)

#define DS17C6A (*(volatile unsigned char __near *)0xF591)

#define DS18C6A (*(volatile unsigned char __near *)0xF592)

#define DS19C6A (*(volatile unsigned char __near *)0xF593)

#define DS20C6A (*(volatile unsigned char __near *)0xF594)

#define DS21C6A (*(volatile unsigned char __near *)0xF595)

#define DS22C6A (*(volatile unsigned char __near *)0xF596)

#define DS23C6A (*(volatile unsigned char __near *)0xF597)

#define DS24C6A (*(volatile unsigned char __near *)0xF598)

#define DS25C6A (*(volatile unsigned char __near *)0xF599)

#define DS26C6A (*(volatile unsigned char __near *)0xF59A)

#define DS27C6A (*(volatile unsigned char __near *)0xF59B)

#define DS28C6A (*(volatile unsigned char __near *)0xF59C)

#define DS29C6A (*(volatile unsigned char __near *)0xF59D)

#define DS30C6A (*(volatile unsigned char __near *)0xF59E)

#define DS31C6A (*(volatile unsigned char __near *)0xF59F)

#define DS32C6A (*(volatile unsigned char __near *)0xF5A0)

#define DS33C6A (*(volatile unsigned char __near *)0xF5A1)

#define DS34C6A (*(volatile unsigned char __near *)0xF5A2)

#define DS35C6A (*(volatile unsigned char __near *)0xF5A3)

#define DS36C6A (*(volatile unsigned char __near *)0xF5A4)

#define DS37C6A (*(volatile unsigned char __near *)0xF5A5)

#define DS38C6A (*(volatile unsigned char __near *)0xF5A6)

#define DS39C6A (*(volatile unsigned char __near *)0xF5A7)

#define DS40C6A (*(volatile unsigned char __near *)0xF5A8)

#define DS41C6A (*(volatile unsigned char __near *)0xF5A9)

#define DS42C6A (*(volatile unsigned char __near *)0xF5AA)

#define DS43C6A (*(volatile unsigned char __near *)0xF5AB)

#define DS44C6A (*(volatile unsigned char __near *)0xF5AC)

#define DS45C6A (*(volatile unsigned char __near *)0xF5AD)

#define DS46C6A (*(volatile unsigned char __near *)0xF5AE)

#define DS47C6A (*(volatile unsigned char __near *)0xF5AF)

#define DS48C6A (*(volatile unsigned char __near *)0xF5B0)

#define DS49C6A (*(volatile unsigned char __near *)0xF5B1)

#define DS50C6A (*(volatile unsigned char __near *)0xF5B2)

#define DS51C6A (*(volatile unsigned char __near *)0xF5B3)

#define DS52C6A (*(volatile unsigned char __near *)0xF5B4)

#define DS53C6A (*(volatile unsigned char __near *)0xF5B5)

#define DS54C6A (*(volatile unsigned char __near *)0xF5B6)

#define DS55C6A (*(volatile unsigned char __near *)0xF5B7)

#define DS56C6A (*(volatile unsigned char __near *)0xF5B8)

#define DS57C6A (*(volatile unsigned char __near *)0xF5B9)

#define DS58C6A (*(volatile unsigned char __near *)0xF5BA)

#define DS59C6A (*(volatile unsigned char __near *)0xF5BB)

#define DS60C6A (*(volatile unsigned char __near *)0xF5BC)

#define DS61C6A (*(volatile unsigned char __near *)0xF5BD)

#define DS62C6A (*(volatile unsigned char __near *)0xF5BE)

#define DS63C6A (*(volatile unsigned char __near *)0xF5BF)

#define DS0C7A (*(volatile unsigned char __near *)0xF5C0)

#define DS1C7A (*(volatile unsigned char __near *)0xF5C1)

#define DS2C7A (*(volatile unsigned char __near *)0xF5C2)

#define DS3C7A (*(volatile unsigned char __near *)0xF5C3)

#define DS4C7A (*(volatile unsigned char __near *)0xF5C4)

#define DS5C7A (*(volatile unsigned char __near *)0xF5C5)

#define DS6C7A (*(volatile unsigned char __near *)0xF5C6)

#define DS7C7A (*(volatile unsigned char __near *)0xF5C7)

#define DS8C7A (*(volatile unsigned char __near *)0xF5C8)

#define DS9C7A (*(volatile unsigned char __near *)0xF5C9)

#define DS10C7A (*(volatile unsigned char __near *)0xF5CA)

#define DS11C7A (*(volatile unsigned char __near *)0xF5CB)

#define DS12C7A (*(volatile unsigned char __near *)0xF5CC)

#define DS13C7A (*(volatile unsigned char __near *)0xF5CD)

#define DS14C7A (*(volatile unsigned char __near *)0xF5CE)

#define DS15C7A (*(volatile unsigned char __near *)0xF5CF)

#define DS16C7A (*(volatile unsigned char __near *)0xF5D0)

#define DS17C7A (*(volatile unsigned char __near *)0xF5D1)

#define DS18C7A (*(volatile unsigned char __near *)0xF5D2)

#define DS19C7A (*(volatile unsigned char __near *)0xF5D3)

#define DS20C7A (*(volatile unsigned char __near *)0xF5D4)

#define DS21C7A (*(volatile unsigned char __near *)0xF5D5)

#define DS22C7A (*(volatile unsigned char __near *)0xF5D6)

#define DS23C7A (*(volatile unsigned char __near *)0xF5D7)

#define DS24C7A (*(volatile unsigned char __near *)0xF5D8)

#define DS25C7A (*(volatile unsigned char __near *)0xF5D9)

#define DS26C7A (*(volatile unsigned char __near *)0xF5DA)

#define DS27C7A (*(volatile unsigned char __near *)0xF5DB)

#define DS28C7A (*(volatile unsigned char __near *)0xF5DC)

#define DS29C7A (*(volatile unsigned char __near *)0xF5DD)

#define DS30C7A (*(volatile unsigned char __near *)0xF5DE)

#define DS31C7A (*(volatile unsigned char __near *)0xF5DF)

#define DS32C7A (*(volatile unsigned char __near *)0xF5E0)

#define DS33C7A (*(volatile unsigned char __near *)0xF5E1)

#define DS34C7A (*(volatile unsigned char __near *)0xF5E2)

#define DS35C7A (*(volatile unsigned char __near *)0xF5E3)

#define DS36C7A (*(volatile unsigned char __near *)0xF5E4)

#define DS37C7A (*(volatile unsigned char __near *)0xF5E5)

#define DS38C7A (*(volatile unsigned char __near *)0xF5E6)

#define DS39C7A (*(volatile unsigned char __near *)0xF5E7)

#define DS40C7A (*(volatile unsigned char __near *)0xF5E8)

#define DS41C7A (*(volatile unsigned char __near *)0xF5E9)

#define DS42C7A (*(volatile unsigned char __near *)0xF5EA)

#define DS43C7A (*(volatile unsigned char __near *)0xF5EB)

#define DS44C7A (*(volatile unsigned char __near *)0xF5EC)

#define DS45C7A (*(volatile unsigned char __near *)0xF5ED)

#define DS46C7A (*(volatile unsigned char __near *)0xF5EE)

#define DS47C7A (*(volatile unsigned char __near *)0xF5EF)

#define DS48C7A (*(volatile unsigned char __near *)0xF5F0)

#define DS49C7A (*(volatile unsigned char __near *)0xF5F1)

#define DS50C7A (*(volatile unsigned char __near *)0xF5F2)

#define DS51C7A (*(volatile unsigned char __near *)0xF5F3)

#define DS52C7A (*(volatile unsigned char __near *)0xF5F4)

#define DS53C7A (*(volatile unsigned char __near *)0xF5F5)

#define DS54C7A (*(volatile unsigned char __near *)0xF5F6)

#define DS55C7A (*(volatile unsigned char __near *)0xF5F7)

#define DS56C7A (*(volatile unsigned char __near *)0xF5F8)

#define DS57C7A (*(volatile unsigned char __near *)0xF5F9)

#define DS58C7A (*(volatile unsigned char __near *)0xF5FA)

#define DS59C7A (*(volatile unsigned char __near *)0xF5FB)

#define DS60C7A (*(volatile unsigned char __near *)0xF5FC)

#define DS61C7A (*(volatile unsigned char __near *)0xF5FD)

#define DS62C7A (*(volatile unsigned char __near *)0xF5FE)

#define DS63C7A (*(volatile unsigned char __near *)0xF5FF)

#define DS0C0B (*(volatile unsigned char __near *)0xF600)

#define DS1C0B (*(volatile unsigned char __near *)0xF601)

#define DS2C0B (*(volatile unsigned char __near *)0xF602)

#define DS3C0B (*(volatile unsigned char __near *)0xF603)

#define DS4C0B (*(volatile unsigned char __near *)0xF604)

#define DS5C0B (*(volatile unsigned char __near *)0xF605)

#define DS6C0B (*(volatile unsigned char __near *)0xF606)

#define DS7C0B (*(volatile unsigned char __near *)0xF607)

#define DS8C0B (*(volatile unsigned char __near *)0xF608)

#define DS9C0B (*(volatile unsigned char __near *)0xF609)

#define DS10C0B (*(volatile unsigned char __near *)0xF60A)

#define DS11C0B (*(volatile unsigned char __near *)0xF60B)

#define DS12C0B (*(volatile unsigned char __near *)0xF60C)

#define DS13C0B (*(volatile unsigned char __near *)0xF60D)

#define DS14C0B (*(volatile unsigned char __near *)0xF60E)

#define DS15C0B (*(volatile unsigned char __near *)0xF60F)

#define DS16C0B (*(volatile unsigned char __near *)0xF610)

#define DS17C0B (*(volatile unsigned char __near *)0xF611)

#define DS18C0B (*(volatile unsigned char __near *)0xF612)

#define DS19C0B (*(volatile unsigned char __near *)0xF613)

#define DS20C0B (*(volatile unsigned char __near *)0xF614)

#define DS21C0B (*(volatile unsigned char __near *)0xF615)

#define DS22C0B (*(volatile unsigned char __near *)0xF616)

#define DS23C0B (*(volatile unsigned char __near *)0xF617)

#define DS24C0B (*(volatile unsigned char __near *)0xF618)

#define DS25C0B (*(volatile unsigned char __near *)0xF619)

#define DS26C0B (*(volatile unsigned char __near *)0xF61A)

#define DS27C0B (*(volatile unsigned char __near *)0xF61B)

#define DS28C0B (*(volatile unsigned char __near *)0xF61C)

#define DS29C0B (*(volatile unsigned char __near *)0xF61D)

#define DS30C0B (*(volatile unsigned char __near *)0xF61E)

#define DS31C0B (*(volatile unsigned char __near *)0xF61F)

#define DS32C0B (*(volatile unsigned char __near *)0xF620)

#define DS33C0B (*(volatile unsigned char __near *)0xF621)

#define DS34C0B (*(volatile unsigned char __near *)0xF622)

#define DS35C0B (*(volatile unsigned char __near *)0xF623)

#define DS36C0B (*(volatile unsigned char __near *)0xF624)

#define DS37C0B (*(volatile unsigned char __near *)0xF625)

#define DS38C0B (*(volatile unsigned char __near *)0xF626)

#define DS39C0B (*(volatile unsigned char __near *)0xF627)

#define DS40C0B (*(volatile unsigned char __near *)0xF628)

#define DS41C0B (*(volatile unsigned char __near *)0xF629)

#define DS42C0B (*(volatile unsigned char __near *)0xF62A)

#define DS43C0B (*(volatile unsigned char __near *)0xF62B)

#define DS44C0B (*(volatile unsigned char __near *)0xF62C)

#define DS45C0B (*(volatile unsigned char __near *)0xF62D)

#define DS46C0B (*(volatile unsigned char __near *)0xF62E)

#define DS47C0B (*(volatile unsigned char __near *)0xF62F)

#define DS48C0B (*(volatile unsigned char __near *)0xF630)

#define DS49C0B (*(volatile unsigned char __near *)0xF631)

#define DS50C0B (*(volatile unsigned char __near *)0xF632)

#define DS51C0B (*(volatile unsigned char __near *)0xF633)

#define DS52C0B (*(volatile unsigned char __near *)0xF634)

#define DS53C0B (*(volatile unsigned char __near *)0xF635)

#define DS54C0B (*(volatile unsigned char __near *)0xF636)

#define DS55C0B (*(volatile unsigned char __near *)0xF637)

#define DS56C0B (*(volatile unsigned char __near *)0xF638)

#define DS57C0B (*(volatile unsigned char __near *)0xF639)

#define DS58C0B (*(volatile unsigned char __near *)0xF63A)

#define DS59C0B (*(volatile unsigned char __near *)0xF63B)

#define DS60C0B (*(volatile unsigned char __near *)0xF63C)

#define DS61C0B (*(volatile unsigned char __near *)0xF63D)

#define DS62C0B (*(volatile unsigned char __near *)0xF63E)

#define DS63C0B (*(volatile unsigned char __near *)0xF63F)

#define DS0C1B (*(volatile unsigned char __near *)0xF640)

#define DS1C1B (*(volatile unsigned char __near *)0xF641)

#define DS2C1B (*(volatile unsigned char __near *)0xF642)

#define DS3C1B (*(volatile unsigned char __near *)0xF643)

#define DS4C1B (*(volatile unsigned char __near *)0xF644)

#define DS5C1B (*(volatile unsigned char __near *)0xF645)

#define DS6C1B (*(volatile unsigned char __near *)0xF646)

#define DS7C1B (*(volatile unsigned char __near *)0xF647)

#define DS8C1B (*(volatile unsigned char __near *)0xF648)

#define DS9C1B (*(volatile unsigned char __near *)0xF649)

#define DS10C1B (*(volatile unsigned char __near *)0xF64A)

#define DS11C1B (*(volatile unsigned char __near *)0xF64B)

#define DS12C1B (*(volatile unsigned char __near *)0xF64C)

#define DS13C1B (*(volatile unsigned char __near *)0xF64D)

#define DS14C1B (*(volatile unsigned char __near *)0xF64E)

#define DS15C1B (*(volatile unsigned char __near *)0xF64F)

#define DS16C1B (*(volatile unsigned char __near *)0xF650)

#define DS17C1B (*(volatile unsigned char __near *)0xF651)

#define DS18C1B (*(volatile unsigned char __near *)0xF652)

#define DS19C1B (*(volatile unsigned char __near *)0xF653)

#define DS20C1B (*(volatile unsigned char __near *)0xF654)

#define DS21C1B (*(volatile unsigned char __near *)0xF655)

#define DS22C1B (*(volatile unsigned char __near *)0xF656)

#define DS23C1B (*(volatile unsigned char __near *)0xF657)

#define DS24C1B (*(volatile unsigned char __near *)0xF658)

#define DS25C1B (*(volatile unsigned char __near *)0xF659)

#define DS26C1B (*(volatile unsigned char __near *)0xF65A)

#define DS27C1B (*(volatile unsigned char __near *)0xF65B)

#define DS28C1B (*(volatile unsigned char __near *)0xF65C)

#define DS29C1B (*(volatile unsigned char __near *)0xF65D)

#define DS30C1B (*(volatile unsigned char __near *)0xF65E)

#define DS31C1B (*(volatile unsigned char __near *)0xF65F)

#define DS32C1B (*(volatile unsigned char __near *)0xF660)

#define DS33C1B (*(volatile unsigned char __near *)0xF661)

#define DS34C1B (*(volatile unsigned char __near *)0xF662)

#define DS35C1B (*(volatile unsigned char __near *)0xF663)

#define DS36C1B (*(volatile unsigned char __near *)0xF664)

#define DS37C1B (*(volatile unsigned char __near *)0xF665)

#define DS38C1B (*(volatile unsigned char __near *)0xF666)

#define DS39C1B (*(volatile unsigned char __near *)0xF667)

#define DS40C1B (*(volatile unsigned char __near *)0xF668)

#define DS41C1B (*(volatile unsigned char __near *)0xF669)

#define DS42C1B (*(volatile unsigned char __near *)0xF66A)

#define DS43C1B (*(volatile unsigned char __near *)0xF66B)

#define DS44C1B (*(volatile unsigned char __near *)0xF66C)

#define DS45C1B (*(volatile unsigned char __near *)0xF66D)

#define DS46C1B (*(volatile unsigned char __near *)0xF66E)

#define DS47C1B (*(volatile unsigned char __near *)0xF66F)

#define DS48C1B (*(volatile unsigned char __near *)0xF670)

#define DS49C1B (*(volatile unsigned char __near *)0xF671)

#define DS50C1B (*(volatile unsigned char __near *)0xF672)

#define DS51C1B (*(volatile unsigned char __near *)0xF673)

#define DS52C1B (*(volatile unsigned char __near *)0xF674)

#define DS53C1B (*(volatile unsigned char __near *)0xF675)

#define DS54C1B (*(volatile unsigned char __near *)0xF676)

#define DS55C1B (*(volatile unsigned char __near *)0xF677)

#define DS56C1B (*(volatile unsigned char __near *)0xF678)

#define DS57C1B (*(volatile unsigned char __near *)0xF679)

#define DS58C1B (*(volatile unsigned char __near *)0xF67A)

#define DS59C1B (*(volatile unsigned char __near *)0xF67B)

#define DS60C1B (*(volatile unsigned char __near *)0xF67C)

#define DS61C1B (*(volatile unsigned char __near *)0xF67D)

#define DS62C1B (*(volatile unsigned char __near *)0xF67E)

#define DS63C1B (*(volatile unsigned char __near *)0xF67F)

#define DS0C2B (*(volatile unsigned char __near *)0xF680)

#define DS1C2B (*(volatile unsigned char __near *)0xF681)

#define DS2C2B (*(volatile unsigned char __near *)0xF682)

#define DS3C2B (*(volatile unsigned char __near *)0xF683)

#define DS4C2B (*(volatile unsigned char __near *)0xF684)

#define DS5C2B (*(volatile unsigned char __near *)0xF685)

#define DS6C2B (*(volatile unsigned char __near *)0xF686)

#define DS7C2B (*(volatile unsigned char __near *)0xF687)

#define DS8C2B (*(volatile unsigned char __near *)0xF688)

#define DS9C2B (*(volatile unsigned char __near *)0xF689)

#define DS10C2B (*(volatile unsigned char __near *)0xF68A)

#define DS11C2B (*(volatile unsigned char __near *)0xF68B)

#define DS12C2B (*(volatile unsigned char __near *)0xF68C)

#define DS13C2B (*(volatile unsigned char __near *)0xF68D)

#define DS14C2B (*(volatile unsigned char __near *)0xF68E)

#define DS15C2B (*(volatile unsigned char __near *)0xF68F)

#define DS16C2B (*(volatile unsigned char __near *)0xF690)

#define DS17C2B (*(volatile unsigned char __near *)0xF691)

#define DS18C2B (*(volatile unsigned char __near *)0xF692)

#define DS19C2B (*(volatile unsigned char __near *)0xF693)

#define DS20C2B (*(volatile unsigned char __near *)0xF694)

#define DS21C2B (*(volatile unsigned char __near *)0xF695)

#define DS22C2B (*(volatile unsigned char __near *)0xF696)

#define DS23C2B (*(volatile unsigned char __near *)0xF697)

#define DS24C2B (*(volatile unsigned char __near *)0xF698)

#define DS25C2B (*(volatile unsigned char __near *)0xF699)

#define DS26C2B (*(volatile unsigned char __near *)0xF69A)

#define DS27C2B (*(volatile unsigned char __near *)0xF69B)

#define DS28C2B (*(volatile unsigned char __near *)0xF69C)

#define DS29C2B (*(volatile unsigned char __near *)0xF69D)

#define DS30C2B (*(volatile unsigned char __near *)0xF69E)

#define DS31C2B (*(volatile unsigned char __near *)0xF69F)

#define DS32C2B (*(volatile unsigned char __near *)0xF6A0)

#define DS33C2B (*(volatile unsigned char __near *)0xF6A1)

#define DS34C2B (*(volatile unsigned char __near *)0xF6A2)

#define DS35C2B (*(volatile unsigned char __near *)0xF6A3)

#define DS36C2B (*(volatile unsigned char __near *)0xF6A4)

#define DS37C2B (*(volatile unsigned char __near *)0xF6A5)

#define DS38C2B (*(volatile unsigned char __near *)0xF6A6)

#define DS39C2B (*(volatile unsigned char __near *)0xF6A7)

#define DS40C2B (*(volatile unsigned char __near *)0xF6A8)

#define DS41C2B (*(volatile unsigned char __near *)0xF6A9)

#define DS42C2B (*(volatile unsigned char __near *)0xF6AA)

#define DS43C2B (*(volatile unsigned char __near *)0xF6AB)

#define DS44C2B (*(volatile unsigned char __near *)0xF6AC)

#define DS45C2B (*(volatile unsigned char __near *)0xF6AD)

#define DS46C2B (*(volatile unsigned char __near *)0xF6AE)

#define DS47C2B (*(volatile unsigned char __near *)0xF6AF)

#define DS48C2B (*(volatile unsigned char __near *)0xF6B0)

#define DS49C2B (*(volatile unsigned char __near *)0xF6B1)

#define DS50C2B (*(volatile unsigned char __near *)0xF6B2)

#define DS51C2B (*(volatile unsigned char __near *)0xF6B3)

#define DS52C2B (*(volatile unsigned char __near *)0xF6B4)

#define DS53C2B (*(volatile unsigned char __near *)0xF6B5)

#define DS54C2B (*(volatile unsigned char __near *)0xF6B6)

#define DS55C2B (*(volatile unsigned char __near *)0xF6B7)

#define DS56C2B (*(volatile unsigned char __near *)0xF6B8)

#define DS57C2B (*(volatile unsigned char __near *)0xF6B9)

#define DS58C2B (*(volatile unsigned char __near *)0xF6BA)

#define DS59C2B (*(volatile unsigned char __near *)0xF6BB)

#define DS60C2B (*(volatile unsigned char __near *)0xF6BC)

#define DS61C2B (*(volatile unsigned char __near *)0xF6BD)

#define DS62C2B (*(volatile unsigned char __near *)0xF6BE)

#define DS63C2B (*(volatile unsigned char __near *)0xF6BF)

#define DS0C3B (*(volatile unsigned char __near *)0xF6C0)

#define DS1C3B (*(volatile unsigned char __near *)0xF6C1)

#define DS2C3B (*(volatile unsigned char __near *)0xF6C2)

#define DS3C3B (*(volatile unsigned char __near *)0xF6C3)

#define DS4C3B (*(volatile unsigned char __near *)0xF6C4)

#define DS5C3B (*(volatile unsigned char __near *)0xF6C5)

#define DS6C3B (*(volatile unsigned char __near *)0xF6C6)

#define DS7C3B (*(volatile unsigned char __near *)0xF6C7)

#define DS8C3B (*(volatile unsigned char __near *)0xF6C8)

#define DS9C3B (*(volatile unsigned char __near *)0xF6C9)

#define DS10C3B (*(volatile unsigned char __near *)0xF6CA)

#define DS11C3B (*(volatile unsigned char __near *)0xF6CB)

#define DS12C3B (*(volatile unsigned char __near *)0xF6CC)

#define DS13C3B (*(volatile unsigned char __near *)0xF6CD)

#define DS14C3B (*(volatile unsigned char __near *)0xF6CE)

#define DS15C3B (*(volatile unsigned char __near *)0xF6CF)

#define DS16C3B (*(volatile unsigned char __near *)0xF6D0)

#define DS17C3B (*(volatile unsigned char __near *)0xF6D1)

#define DS18C3B (*(volatile unsigned char __near *)0xF6D2)

#define DS19C3B (*(volatile unsigned char __near *)0xF6D3)

#define DS20C3B (*(volatile unsigned char __near *)0xF6D4)

#define DS21C3B (*(volatile unsigned char __near *)0xF6D5)

#define DS22C3B (*(volatile unsigned char __near *)0xF6D6)

#define DS23C3B (*(volatile unsigned char __near *)0xF6D7)

#define DS24C3B (*(volatile unsigned char __near *)0xF6D8)

#define DS25C3B (*(volatile unsigned char __near *)0xF6D9)

#define DS26C3B (*(volatile unsigned char __near *)0xF6DA)

#define DS27C3B (*(volatile unsigned char __near *)0xF6DB)

#define DS28C3B (*(volatile unsigned char __near *)0xF6DC)

#define DS29C3B (*(volatile unsigned char __near *)0xF6DD)

#define DS30C3B (*(volatile unsigned char __near *)0xF6DE)

#define DS31C3B (*(volatile unsigned char __near *)0xF6DF)

#define DS32C3B (*(volatile unsigned char __near *)0xF6E0)

#define DS33C3B (*(volatile unsigned char __near *)0xF6E1)

#define DS34C3B (*(volatile unsigned char __near *)0xF6E2)

#define DS35C3B (*(volatile unsigned char __near *)0xF6E3)

#define DS36C3B (*(volatile unsigned char __near *)0xF6E4)

#define DS37C3B (*(volatile unsigned char __near *)0xF6E5)

#define DS38C3B (*(volatile unsigned char __near *)0xF6E6)

#define DS39C3B (*(volatile unsigned char __near *)0xF6E7)

#define DS40C3B (*(volatile unsigned char __near *)0xF6E8)

#define DS41C3B (*(volatile unsigned char __near *)0xF6E9)

#define DS42C3B (*(volatile unsigned char __near *)0xF6EA)

#define DS43C3B (*(volatile unsigned char __near *)0xF6EB)

#define DS44C3B (*(volatile unsigned char __near *)0xF6EC)

#define DS45C3B (*(volatile unsigned char __near *)0xF6ED)

#define DS46C3B (*(volatile unsigned char __near *)0xF6EE)

#define DS47C3B (*(volatile unsigned char __near *)0xF6EF)

#define DS48C3B (*(volatile unsigned char __near *)0xF6F0)

#define DS49C3B (*(volatile unsigned char __near *)0xF6F1)

#define DS50C3B (*(volatile unsigned char __near *)0xF6F2)

#define DS51C3B (*(volatile unsigned char __near *)0xF6F3)

#define DS52C3B (*(volatile unsigned char __near *)0xF6F4)

#define DS53C3B (*(volatile unsigned char __near *)0xF6F5)

#define DS54C3B (*(volatile unsigned char __near *)0xF6F6)

#define DS55C3B (*(volatile unsigned char __near *)0xF6F7)

#define DS56C3B (*(volatile unsigned char __near *)0xF6F8)

#define DS57C3B (*(volatile unsigned char __near *)0xF6F9)

#define DS58C3B (*(volatile unsigned char __near *)0xF6FA)

#define DS59C3B (*(volatile unsigned char __near *)0xF6FB)

#define DS60C3B (*(volatile unsigned char __near *)0xF6FC)

#define DS61C3B (*(volatile unsigned char __near *)0xF6FD)

#define DS62C3B (*(volatile unsigned char __near *)0xF6FE)

#define DS63C3B (*(volatile unsigned char __near *)0xF6FF)

#define DS0C4B (*(volatile unsigned char __near *)0xF700)

#define DS1C4B (*(volatile unsigned char __near *)0xF701)

#define DS2C4B (*(volatile unsigned char __near *)0xF702)

#define DS3C4B (*(volatile unsigned char __near *)0xF703)

#define DS4C4B (*(volatile unsigned char __near *)0xF704)

#define DS5C4B (*(volatile unsigned char __near *)0xF705)

#define DS6C4B (*(volatile unsigned char __near *)0xF706)

#define DS7C4B (*(volatile unsigned char __near *)0xF707)

#define DS8C4B (*(volatile unsigned char __near *)0xF708)

#define DS9C4B (*(volatile unsigned char __near *)0xF709)

#define DS10C4B (*(volatile unsigned char __near *)0xF70A)

#define DS11C4B (*(volatile unsigned char __near *)0xF70B)

#define DS12C4B (*(volatile unsigned char __near *)0xF70C)

#define DS13C4B (*(volatile unsigned char __near *)0xF70D)

#define DS14C4B (*(volatile unsigned char __near *)0xF70E)

#define DS15C4B (*(volatile unsigned char __near *)0xF70F)

#define DS16C4B (*(volatile unsigned char __near *)0xF710)

#define DS17C4B (*(volatile unsigned char __near *)0xF711)

#define DS18C4B (*(volatile unsigned char __near *)0xF712)

#define DS19C4B (*(volatile unsigned char __near *)0xF713)

#define DS20C4B (*(volatile unsigned char __near *)0xF714)

#define DS21C4B (*(volatile unsigned char __near *)0xF715)

#define DS22C4B (*(volatile unsigned char __near *)0xF716)

#define DS23C4B (*(volatile unsigned char __near *)0xF717)

#define DS24C4B (*(volatile unsigned char __near *)0xF718)

#define DS25C4B (*(volatile unsigned char __near *)0xF719)

#define DS26C4B (*(volatile unsigned char __near *)0xF71A)

#define DS27C4B (*(volatile unsigned char __near *)0xF71B)

#define DS28C4B (*(volatile unsigned char __near *)0xF71C)

#define DS29C4B (*(volatile unsigned char __near *)0xF71D)

#define DS30C4B (*(volatile unsigned char __near *)0xF71E)

#define DS31C4B (*(volatile unsigned char __near *)0xF71F)

#define DS32C4B (*(volatile unsigned char __near *)0xF720)

#define DS33C4B (*(volatile unsigned char __near *)0xF721)

#define DS34C4B (*(volatile unsigned char __near *)0xF722)

#define DS35C4B (*(volatile unsigned char __near *)0xF723)

#define DS36C4B (*(volatile unsigned char __near *)0xF724)

#define DS37C4B (*(volatile unsigned char __near *)0xF725)

#define DS38C4B (*(volatile unsigned char __near *)0xF726)

#define DS39C4B (*(volatile unsigned char __near *)0xF727)

#define DS40C4B (*(volatile unsigned char __near *)0xF728)

#define DS41C4B (*(volatile unsigned char __near *)0xF729)

#define DS42C4B (*(volatile unsigned char __near *)0xF72A)

#define DS43C4B (*(volatile unsigned char __near *)0xF72B)

#define DS44C4B (*(volatile unsigned char __near *)0xF72C)

#define DS45C4B (*(volatile unsigned char __near *)0xF72D)

#define DS46C4B (*(volatile unsigned char __near *)0xF72E)

#define DS47C4B (*(volatile unsigned char __near *)0xF72F)

#define DS48C4B (*(volatile unsigned char __near *)0xF730)

#define DS49C4B (*(volatile unsigned char __near *)0xF731)

#define DS50C4B (*(volatile unsigned char __near *)0xF732)

#define DS51C4B (*(volatile unsigned char __near *)0xF733)

#define DS52C4B (*(volatile unsigned char __near *)0xF734)

#define DS53C4B (*(volatile unsigned char __near *)0xF735)

#define DS54C4B (*(volatile unsigned char __near *)0xF736)

#define DS55C4B (*(volatile unsigned char __near *)0xF737)

#define DS56C4B (*(volatile unsigned char __near *)0xF738)

#define DS57C4B (*(volatile unsigned char __near *)0xF739)

#define DS58C4B (*(volatile unsigned char __near *)0xF73A)

#define DS59C4B (*(volatile unsigned char __near *)0xF73B)

#define DS60C4B (*(volatile unsigned char __near *)0xF73C)

#define DS61C4B (*(volatile unsigned char __near *)0xF73D)

#define DS62C4B (*(volatile unsigned char __near *)0xF73E)

#define DS63C4B (*(volatile unsigned char __near *)0xF73F)

#define DS0C5B (*(volatile unsigned char __near *)0xF740)

#define DS1C5B (*(volatile unsigned char __near *)0xF741)

#define DS2C5B (*(volatile unsigned char __near *)0xF742)

#define DS3C5B (*(volatile unsigned char __near *)0xF743)

#define DS4C5B (*(volatile unsigned char __near *)0xF744)

#define DS5C5B (*(volatile unsigned char __near *)0xF745)

#define DS6C5B (*(volatile unsigned char __near *)0xF746)

#define DS7C5B (*(volatile unsigned char __near *)0xF747)

#define DS8C5B (*(volatile unsigned char __near *)0xF748)

#define DS9C5B (*(volatile unsigned char __near *)0xF749)

#define DS10C5B (*(volatile unsigned char __near *)0xF74A)

#define DS11C5B (*(volatile unsigned char __near *)0xF74B)

#define DS12C5B (*(volatile unsigned char __near *)0xF74C)

#define DS13C5B (*(volatile unsigned char __near *)0xF74D)

#define DS14C5B (*(volatile unsigned char __near *)0xF74E)

#define DS15C5B (*(volatile unsigned char __near *)0xF74F)

#define DS16C5B (*(volatile unsigned char __near *)0xF750)

#define DS17C5B (*(volatile unsigned char __near *)0xF751)

#define DS18C5B (*(volatile unsigned char __near *)0xF752)

#define DS19C5B (*(volatile unsigned char __near *)0xF753)

#define DS20C5B (*(volatile unsigned char __near *)0xF754)

#define DS21C5B (*(volatile unsigned char __near *)0xF755)

#define DS22C5B (*(volatile unsigned char __near *)0xF756)

#define DS23C5B (*(volatile unsigned char __near *)0xF757)

#define DS24C5B (*(volatile unsigned char __near *)0xF758)

#define DS25C5B (*(volatile unsigned char __near *)0xF759)

#define DS26C5B (*(volatile unsigned char __near *)0xF75A)

#define DS27C5B (*(volatile unsigned char __near *)0xF75B)

#define DS28C5B (*(volatile unsigned char __near *)0xF75C)

#define DS29C5B (*(volatile unsigned char __near *)0xF75D)

#define DS30C5B (*(volatile unsigned char __near *)0xF75E)

#define DS31C5B (*(volatile unsigned char __near *)0xF75F)

#define DS32C5B (*(volatile unsigned char __near *)0xF760)

#define DS33C5B (*(volatile unsigned char __near *)0xF761)

#define DS34C5B (*(volatile unsigned char __near *)0xF762)

#define DS35C5B (*(volatile unsigned char __near *)0xF763)

#define DS36C5B (*(volatile unsigned char __near *)0xF764)

#define DS37C5B (*(volatile unsigned char __near *)0xF765)

#define DS38C5B (*(volatile unsigned char __near *)0xF766)

#define DS39C5B (*(volatile unsigned char __near *)0xF767)

#define DS40C5B (*(volatile unsigned char __near *)0xF768)

#define DS41C5B (*(volatile unsigned char __near *)0xF769)

#define DS42C5B (*(volatile unsigned char __near *)0xF76A)

#define DS43C5B (*(volatile unsigned char __near *)0xF76B)

#define DS44C5B (*(volatile unsigned char __near *)0xF76C)

#define DS45C5B (*(volatile unsigned char __near *)0xF76D)

#define DS46C5B (*(volatile unsigned char __near *)0xF76E)

#define DS47C5B (*(volatile unsigned char __near *)0xF76F)

#define DS48C5B (*(volatile unsigned char __near *)0xF770)

#define DS49C5B (*(volatile unsigned char __near *)0xF771)

#define DS50C5B (*(volatile unsigned char __near *)0xF772)

#define DS51C5B (*(volatile unsigned char __near *)0xF773)

#define DS52C5B (*(volatile unsigned char __near *)0xF774)

#define DS53C5B (*(volatile unsigned char __near *)0xF775)

#define DS54C5B (*(volatile unsigned char __near *)0xF776)

#define DS55C5B (*(volatile unsigned char __near *)0xF777)

#define DS56C5B (*(volatile unsigned char __near *)0xF778)

#define DS57C5B (*(volatile unsigned char __near *)0xF779)

#define DS58C5B (*(volatile unsigned char __near *)0xF77A)

#define DS59C5B (*(volatile unsigned char __near *)0xF77B)

#define DS60C5B (*(volatile unsigned char __near *)0xF77C)

#define DS61C5B (*(volatile unsigned char __near *)0xF77D)

#define DS62C5B (*(volatile unsigned char __near *)0xF77E)

#define DS63C5B (*(volatile unsigned char __near *)0xF77F)

#define DS0C6B (*(volatile unsigned char __near *)0xF780)

#define DS1C6B (*(volatile unsigned char __near *)0xF781)

#define DS2C6B (*(volatile unsigned char __near *)0xF782)

#define DS3C6B (*(volatile unsigned char __near *)0xF783)

#define DS4C6B (*(volatile unsigned char __near *)0xF784)

#define DS5C6B (*(volatile unsigned char __near *)0xF785)

#define DS6C6B (*(volatile unsigned char __near *)0xF786)

#define DS7C6B (*(volatile unsigned char __near *)0xF787)

#define DS8C6B (*(volatile unsigned char __near *)0xF788)

#define DS9C6B (*(volatile unsigned char __near *)0xF789)

#define DS10C6B (*(volatile unsigned char __near *)0xF78A)

#define DS11C6B (*(volatile unsigned char __near *)0xF78B)

#define DS12C6B (*(volatile unsigned char __near *)0xF78C)

#define DS13C6B (*(volatile unsigned char __near *)0xF78D)

#define DS14C6B (*(volatile unsigned char __near *)0xF78E)

#define DS15C6B (*(volatile unsigned char __near *)0xF78F)

#define DS16C6B (*(volatile unsigned char __near *)0xF790)

#define DS17C6B (*(volatile unsigned char __near *)0xF791)

#define DS18C6B (*(volatile unsigned char __near *)0xF792)

#define DS19C6B (*(volatile unsigned char __near *)0xF793)

#define DS20C6B (*(volatile unsigned char __near *)0xF794)

#define DS21C6B (*(volatile unsigned char __near *)0xF795)

#define DS22C6B (*(volatile unsigned char __near *)0xF796)

#define DS23C6B (*(volatile unsigned char __near *)0xF797)

#define DS24C6B (*(volatile unsigned char __near *)0xF798)

#define DS25C6B (*(volatile unsigned char __near *)0xF799)

#define DS26C6B (*(volatile unsigned char __near *)0xF79A)

#define DS27C6B (*(volatile unsigned char __near *)0xF79B)

#define DS28C6B (*(volatile unsigned char __near *)0xF79C)

#define DS29C6B (*(volatile unsigned char __near *)0xF79D)

#define DS30C6B (*(volatile unsigned char __near *)0xF79E)

#define DS31C6B (*(volatile unsigned char __near *)0xF79F)

#define DS32C6B (*(volatile unsigned char __near *)0xF7A0)

#define DS33C6B (*(volatile unsigned char __near *)0xF7A1)

#define DS34C6B (*(volatile unsigned char __near *)0xF7A2)

#define DS35C6B (*(volatile unsigned char __near *)0xF7A3)

#define DS36C6B (*(volatile unsigned char __near *)0xF7A4)

#define DS37C6B (*(volatile unsigned char __near *)0xF7A5)

#define DS38C6B (*(volatile unsigned char __near *)0xF7A6)

#define DS39C6B (*(volatile unsigned char __near *)0xF7A7)

#define DS40C6B (*(volatile unsigned char __near *)0xF7A8)

#define DS41C6B (*(volatile unsigned char __near *)0xF7A9)

#define DS42C6B (*(volatile unsigned char __near *)0xF7AA)

#define DS43C6B (*(volatile unsigned char __near *)0xF7AB)

#define DS44C6B (*(volatile unsigned char __near *)0xF7AC)

#define DS45C6B (*(volatile unsigned char __near *)0xF7AD)

#define DS46C6B (*(volatile unsigned char __near *)0xF7AE)

#define DS47C6B (*(volatile unsigned char __near *)0xF7AF)

#define DS48C6B (*(volatile unsigned char __near *)0xF7B0)

#define DS49C6B (*(volatile unsigned char __near *)0xF7B1)

#define DS50C6B (*(volatile unsigned char __near *)0xF7B2)

#define DS51C6B (*(volatile unsigned char __near *)0xF7B3)

#define DS52C6B (*(volatile unsigned char __near *)0xF7B4)

#define DS53C6B (*(volatile unsigned char __near *)0xF7B5)

#define DS54C6B (*(volatile unsigned char __near *)0xF7B6)

#define DS55C6B (*(volatile unsigned char __near *)0xF7B7)

#define DS56C6B (*(volatile unsigned char __near *)0xF7B8)

#define DS57C6B (*(volatile unsigned char __near *)0xF7B9)

#define DS58C6B (*(volatile unsigned char __near *)0xF7BA)

#define DS59C6B (*(volatile unsigned char __near *)0xF7BB)

#define DS60C6B (*(volatile unsigned char __near *)0xF7BC)

#define DS61C6B (*(volatile unsigned char __near *)0xF7BD)

#define DS62C6B (*(volatile unsigned char __near *)0xF7BE)

#define DS63C6B (*(volatile unsigned char __near *)0xF7BF)

#define DS0C7B (*(volatile unsigned char __near *)0xF7C0)

#define DS1C7B (*(volatile unsigned char __near *)0xF7C1)

#define DS2C7B (*(volatile unsigned char __near *)0xF7C2)

#define DS3C7B (*(volatile unsigned char __near *)0xF7C3)

#define DS4C7B (*(volatile unsigned char __near *)0xF7C4)

#define DS5C7B (*(volatile unsigned char __near *)0xF7C5)

#define DS6C7B (*(volatile unsigned char __near *)0xF7C6)

#define DS7C7B (*(volatile unsigned char __near *)0xF7C7)

#define DS8C7B (*(volatile unsigned char __near *)0xF7C8)

#define DS9C7B (*(volatile unsigned char __near *)0xF7C9)

#define DS10C7B (*(volatile unsigned char __near *)0xF7CA)

#define DS11C7B (*(volatile unsigned char __near *)0xF7CB)

#define DS12C7B (*(volatile unsigned char __near *)0xF7CC)

#define DS13C7B (*(volatile unsigned char __near *)0xF7CD)

#define DS14C7B (*(volatile unsigned char __near *)0xF7CE)

#define DS15C7B (*(volatile unsigned char __near *)0xF7CF)

#define DS16C7B (*(volatile unsigned char __near *)0xF7D0)

#define DS17C7B (*(volatile unsigned char __near *)0xF7D1)

#define DS18C7B (*(volatile unsigned char __near *)0xF7D2)

#define DS19C7B (*(volatile unsigned char __near *)0xF7D3)

#define DS20C7B (*(volatile unsigned char __near *)0xF7D4)

#define DS21C7B (*(volatile unsigned char __near *)0xF7D5)

#define DS22C7B (*(volatile unsigned char __near *)0xF7D6)

#define DS23C7B (*(volatile unsigned char __near *)0xF7D7)

#define DS24C7B (*(volatile unsigned char __near *)0xF7D8)

#define DS25C7B (*(volatile unsigned char __near *)0xF7D9)

#define DS26C7B (*(volatile unsigned char __near *)0xF7DA)

#define DS27C7B (*(volatile unsigned char __near *)0xF7DB)

#define DS28C7B (*(volatile unsigned char __near *)0xF7DC)

#define DS29C7B (*(volatile unsigned char __near *)0xF7DD)

#define DS30C7B (*(volatile unsigned char __near *)0xF7DE)

#define DS31C7B (*(volatile unsigned char __near *)0xF7DF)

#define DS32C7B (*(volatile unsigned char __near *)0xF7E0)

#define DS33C7B (*(volatile unsigned char __near *)0xF7E1)

#define DS34C7B (*(volatile unsigned char __near *)0xF7E2)

#define DS35C7B (*(volatile unsigned char __near *)0xF7E3)

#define DS36C7B (*(volatile unsigned char __near *)0xF7E4)

#define DS37C7B (*(volatile unsigned char __near *)0xF7E5)

#define DS38C7B (*(volatile unsigned char __near *)0xF7E6)

#define DS39C7B (*(volatile unsigned char __near *)0xF7E7)

#define DS40C7B (*(volatile unsigned char __near *)0xF7E8)

#define DS41C7B (*(volatile unsigned char __near *)0xF7E9)

#define DS42C7B (*(volatile unsigned char __near *)0xF7EA)

#define DS43C7B (*(volatile unsigned char __near *)0xF7EB)

#define DS44C7B (*(volatile unsigned char __near *)0xF7EC)

#define DS45C7B (*(volatile unsigned char __near *)0xF7ED)

#define DS46C7B (*(volatile unsigned char __near *)0xF7EE)

#define DS47C7B (*(volatile unsigned char __near *)0xF7EF)

#define DS48C7B (*(volatile unsigned char __near *)0xF7F0)

#define DS49C7B (*(volatile unsigned char __near *)0xF7F1)

#define DS50C7B (*(volatile unsigned char __near *)0xF7F2)

#define DS51C7B (*(volatile unsigned char __near *)0xF7F3)

#define DS52C7B (*(volatile unsigned char __near *)0xF7F4)

#define DS53C7B (*(volatile unsigned char __near *)0xF7F5)

#define DS54C7B (*(volatile unsigned char __near *)0xF7F6)

#define DS55C7B (*(volatile unsigned char __near *)0xF7F7)

#define DS56C7B (*(volatile unsigned char __near *)0xF7F8)

#define DS57C7B (*(volatile unsigned char __near *)0xF7F9)

#define DS58C7B (*(volatile unsigned char __near *)0xF7FA)

#define DS59C7B (*(volatile unsigned char __near *)0xF7FB)

#define DS60C7B (*(volatile unsigned char __near *)0xF7FC)

#define DS61C7B (*(volatile unsigned char __near *)0xF7FD)

#define DS62C7B (*(volatile unsigned char __near *)0xF7FE)

#define DS63C7B (*(volatile unsigned char __near *)0xF7FF)

/*---------------------------------------------------
	END OF DATA ADDRESS SYMBOLS
---------------------------------------------------*/

/*---------------------------------------------------
	BIT ADDRESS SYMBOLS
---------------------------------------------------*/

#define DSR0		(_B_DSR.b0)
#define DSR1		(_B_DSR.b1)
#define DSR2		(_B_DSR.b2)
#define DSR3		(_B_DSR.b3)

#define POR		(_B_RSTAT.b0)
#define XSTR		(_B_RSTAT.b1)
#define WDTR		(_B_RSTAT.b2)

#define SYSC0		(_B_FCON0.b0)
#define SYSC1		(_B_FCON0.b1)
#define OSCM0		(_B_FCON0.b2)
#define OSCM1		(_B_FCON0.b3)
#define OUTC0		(_B_FCON0.b4)
#define OUTC1		(_B_FCON0.b5)

#define SYSCLK		(_B_FCON1.b0)
#define ENOSC		(_B_FCON1.b1)
#define ENMLT		(_B_FCON1.b2)
#define LPLL		(_B_FCON1.b7)

#define HLT		(_B_SBYCON.b0)
#define STP		(_B_SBYCON.b1)

#define T128HZ		(_B_LTBR.b0)
#define T64HZ		(_B_LTBR.b1)
#define T32HZ		(_B_LTBR.b2)
#define T16HZ		(_B_LTBR.b3)
#define T8HZ		(_B_LTBR.b4)
#define T4HZ		(_B_LTBR.b5)
#define T2HZ		(_B_LTBR.b6)
#define T1HZ		(_B_LTBR.b7)

#define HTD0		(_B_HTBDR.b0)
#define HTD1		(_B_HTBDR.b1)
#define HTD2		(_B_HTBDR.b2)
#define HTD3		(_B_HTBDR.b3)

#define LADJ0		(_B_LTBADJL.b0)
#define LADJ1		(_B_LTBADJL.b1)
#define LADJ2		(_B_LTBADJL.b2)
#define LADJ3		(_B_LTBADJL.b3)
#define LADJ4		(_B_LTBADJL.b4)
#define LADJ5		(_B_LTBADJL.b5)
#define LADJ6		(_B_LTBADJL.b6)
#define LADJ7		(_B_LTBADJL.b7)

#define LADJ8		(_B_LTBADJH.b0)
#define LADJ9		(_B_LTBADJH.b1)
#define LADJS		(_B_LTBADJH.b2)

#define WDP		(_B_WDTCON.b0)

#define WDT0		(_B_WDTMOD.b0)
#define WDT1		(_B_WDTMOD.b1)

#define EP00		(_B_IE1.b0)
#define EP01		(_B_IE1.b1)
#define EP02		(_B_IE1.b2)
#define EP03		(_B_IE1.b3)

#define ESIO0		(_B_IE2.b0)
#define ESAD		(_B_IE2.b2)
#define EI2C0		(_B_IE2.b7)

#define ETM0		(_B_IE3.b0)
#define ETM1		(_B_IE3.b1)

#define EUA0		(_B_IE4.b0)
#define EMD0		(_B_IE4.b2)
#define ERAD		(_B_IE4.b5)

#define ETM2		(_B_IE5.b4)
#define ETM3		(_B_IE5.b5)

#define EPW0		(_B_IE6.b0)
#define ET1K		(_B_IE6.b4)
#define E128H		(_B_IE6.b5)
#define E32H		(_B_IE6.b7)

#define E16H		(_B_IE7.b0)
#define E2H		(_B_IE7.b3)

#define QWDT		(_B_IRQ0.b0)
#define QNMI		(_B_IRQ0.b1)

#define QP00		(_B_IRQ1.b0)
#define QP01		(_B_IRQ1.b1)
#define QP02		(_B_IRQ1.b2)
#define QP03		(_B_IRQ1.b3)

#define QSIO0		(_B_IRQ2.b0)
#define QSAD		(_B_IRQ2.b2)
#define QI2C0		(_B_IRQ2.b7)

#define QTM0		(_B_IRQ3.b0)
#define QTM1		(_B_IRQ3.b1)

#define QUA0		(_B_IRQ4.b0)
#define QMD0		(_B_IRQ4.b2)
#define QRAD		(_B_IRQ4.b5)

#define QTM2		(_B_IRQ5.b4)
#define QTM3		(_B_IRQ5.b5)

#define QPW0		(_B_IRQ6.b0)
#define QT1K		(_B_IRQ6.b4)
#define Q128H		(_B_IRQ6.b5)
#define Q32H		(_B_IRQ6.b7)

#define Q16H		(_B_IRQ7.b0)
#define Q2H		(_B_IRQ7.b3)

#define P00E0		(_B_EXICON0.b0)
#define P01E0		(_B_EXICON0.b1)
#define P02E0		(_B_EXICON0.b2)
#define P03E0		(_B_EXICON0.b3)

#define P00E1		(_B_EXICON1.b0)
#define P01E1		(_B_EXICON1.b1)
#define P02E1		(_B_EXICON1.b2)
#define P03E1		(_B_EXICON1.b3)

#define P00SM		(_B_EXICON2.b0)
#define P01SM		(_B_EXICON2.b1)
#define P02SM		(_B_EXICON2.b2)
#define P03SM		(_B_EXICON2.b3)

#define DTM0		(_B_BLKCON0.b0)
#define DTM1		(_B_BLKCON0.b1)
#define DTM2		(_B_BLKCON0.b2)
#define DTM3		(_B_BLKCON0.b3)

#define DPW0		(_B_BLKCON1.b0)
#define DT1K		(_B_BLKCON1.b4)
#define DCAPR		(_B_BLKCON1.b6)

#define DSIO0		(_B_BLKCON2.b0)
#define DUA0		(_B_BLKCON2.b2)
#define DI2C0		(_B_BLKCON2.b7)

#define DMD0		(_B_BLKCON3.b0)

#define DSAD		(_B_BLKCON4.b0)
#define DRAD		(_B_BLKCON4.b1)
#define DXTSP		(_B_BLKCON4.b4)
#define DBLD		(_B_BLKCON4.b5)
#define DLCD		(_B_BLKCON4.b6)

#define T0D0		(_B_TM0D.b0)
#define T0D1		(_B_TM0D.b1)
#define T0D2		(_B_TM0D.b2)
#define T0D3		(_B_TM0D.b3)
#define T0D4		(_B_TM0D.b4)
#define T0D5		(_B_TM0D.b5)
#define T0D6		(_B_TM0D.b6)
#define T0D7		(_B_TM0D.b7)

#define T0C0		(_B_TM0C.b0)
#define T0C1		(_B_TM0C.b1)
#define T0C2		(_B_TM0C.b2)
#define T0C3		(_B_TM0C.b3)
#define T0C4		(_B_TM0C.b4)
#define T0C5		(_B_TM0C.b5)
#define T0C6		(_B_TM0C.b6)
#define T0C7		(_B_TM0C.b7)

#define T0CS0		(_B_TM0CON0.b0)
#define T0CS1		(_B_TM0CON0.b1)
#define T01M16		(_B_TM0CON0.b2)

#define T0RUN		(_B_TM0CON1.b0)
#define T0STAT		(_B_TM0CON1.b7)

#define T1D0		(_B_TM1D.b0)
#define T1D1		(_B_TM1D.b1)
#define T1D2		(_B_TM1D.b2)
#define T1D3		(_B_TM1D.b3)
#define T1D4		(_B_TM1D.b4)
#define T1D5		(_B_TM1D.b5)
#define T1D6		(_B_TM1D.b6)
#define T1D7		(_B_TM1D.b7)

#define T1C0		(_B_TM1C.b0)
#define T1C1		(_B_TM1C.b1)
#define T1C2		(_B_TM1C.b2)
#define T1C3		(_B_TM1C.b3)
#define T1C4		(_B_TM1C.b4)
#define T1C5		(_B_TM1C.b5)
#define T1C6		(_B_TM1C.b6)
#define T1C7		(_B_TM1C.b7)

#define T1CS0		(_B_TM1CON0.b0)
#define T1CS1		(_B_TM1CON0.b1)

#define T1RUN		(_B_TM1CON1.b0)
#define T1STAT		(_B_TM1CON1.b7)

#define T2D0		(_B_TM2D.b0)
#define T2D1		(_B_TM2D.b1)
#define T2D2		(_B_TM2D.b2)
#define T2D3		(_B_TM2D.b3)
#define T2D4		(_B_TM2D.b4)
#define T2D5		(_B_TM2D.b5)
#define T2D6		(_B_TM2D.b6)
#define T2D7		(_B_TM2D.b7)

#define T2C0		(_B_TM2C.b0)
#define T2C1		(_B_TM2C.b1)
#define T2C2		(_B_TM2C.b2)
#define T2C3		(_B_TM2C.b3)
#define T2C4		(_B_TM2C.b4)
#define T2C5		(_B_TM2C.b5)
#define T2C6		(_B_TM2C.b6)
#define T2C7		(_B_TM2C.b7)

#define T2CS0		(_B_TM2CON0.b0)
#define T2CS1		(_B_TM2CON0.b1)
#define T23M16		(_B_TM2CON0.b2)
#define T23MFM		(_B_TM2CON0.b3)
#define T2FMA4		(_B_TM2CON0.b4)
#define T2FMA5		(_B_TM2CON0.b5)
#define T2FMA6		(_B_TM2CON0.b6)
#define T2FMA7		(_B_TM2CON0.b7)

#define T2RUN		(_B_TM2CON1.b0)
#define T2STAT		(_B_TM2CON1.b7)

#define T3D0		(_B_TM3D.b0)
#define T3D1		(_B_TM3D.b1)
#define T3D2		(_B_TM3D.b2)
#define T3D3		(_B_TM3D.b3)
#define T3D4		(_B_TM3D.b4)
#define T3D5		(_B_TM3D.b5)
#define T3D6		(_B_TM3D.b6)
#define T3D7		(_B_TM3D.b7)

#define T3C0		(_B_TM3C.b0)
#define T3C1		(_B_TM3C.b1)
#define T3C2		(_B_TM3C.b2)
#define T3C3		(_B_TM3C.b3)
#define T3C4		(_B_TM3C.b4)
#define T3C5		(_B_TM3C.b5)
#define T3C6		(_B_TM3C.b6)
#define T3C7		(_B_TM3C.b7)

#define T3CS0		(_B_TM3CON0.b0)
#define T3CS1		(_B_TM3CON0.b1)

#define T3RUN		(_B_TM3CON1.b0)
#define T3STAT		(_B_TM3CON1.b7)

#define T1KC0		(_B_T1KCRL.b4)
#define T1KC1		(_B_T1KCRL.b5)
#define T1KC2		(_B_T1KCRL.b6)
#define T1KC3		(_B_T1KCRL.b7)

#define T1KC4		(_B_T1KCRH.b0)
#define T1KC5		(_B_T1KCRH.b1)
#define T1KC6		(_B_T1KCRH.b2)
#define T1KC7		(_B_T1KCRH.b3)
#define T1KC8		(_B_T1KCRH.b4)
#define T1KC9		(_B_T1KCRH.b5)
#define T1KC10		(_B_T1KCRH.b6)
#define T1KC11		(_B_T1KCRH.b7)

#define T1KRUN		(_B_T1KCON.b0)
#define T1KSEL		(_B_T1KCON.b1)

#define ECAP0		(_B_CAPCON.b0)
#define ECAP1		(_B_CAPCON.b1)

#define CAPF0		(_B_CAPSTAT.b0)
#define CAPF1		(_B_CAPSTAT.b1)

#define CP00		(_B_CAPR0.b0)
#define CP01		(_B_CAPR0.b1)
#define CP02		(_B_CAPR0.b2)
#define CP03		(_B_CAPR0.b3)
#define CP04		(_B_CAPR0.b4)
#define CP05		(_B_CAPR0.b5)
#define CP06		(_B_CAPR0.b6)
#define CP07		(_B_CAPR0.b7)

#define CP10		(_B_CAPR1.b0)
#define CP11		(_B_CAPR1.b1)
#define CP12		(_B_CAPR1.b2)
#define CP13		(_B_CAPR1.b3)
#define CP14		(_B_CAPR1.b4)
#define CP15		(_B_CAPR1.b5)
#define CP16		(_B_CAPR1.b6)
#define CP17		(_B_CAPR1.b7)

#define P0P0		(_B_PW0PL.b0)
#define P0P1		(_B_PW0PL.b1)
#define P0P2		(_B_PW0PL.b2)
#define P0P3		(_B_PW0PL.b3)
#define P0P4		(_B_PW0PL.b4)
#define P0P5		(_B_PW0PL.b5)
#define P0P6		(_B_PW0PL.b6)
#define P0P7		(_B_PW0PL.b7)

#define P0P8		(_B_PW0PH.b0)
#define P0P9		(_B_PW0PH.b1)
#define P0P10		(_B_PW0PH.b2)
#define P0P11		(_B_PW0PH.b3)
#define P0P12		(_B_PW0PH.b4)
#define P0P13		(_B_PW0PH.b5)
#define P0P14		(_B_PW0PH.b6)
#define P0P15		(_B_PW0PH.b7)

#define P0D0		(_B_PW0DL.b0)
#define P0D1		(_B_PW0DL.b1)
#define P0D2		(_B_PW0DL.b2)
#define P0D3		(_B_PW0DL.b3)
#define P0D4		(_B_PW0DL.b4)
#define P0D5		(_B_PW0DL.b5)
#define P0D6		(_B_PW0DL.b6)
#define P0D7		(_B_PW0DL.b7)

#define P0D8		(_B_PW0DH.b0)
#define P0D9		(_B_PW0DH.b1)
#define P0D10		(_B_PW0DH.b2)
#define P0D11		(_B_PW0DH.b3)
#define P0D12		(_B_PW0DH.b4)
#define P0D13		(_B_PW0DH.b5)
#define P0D14		(_B_PW0DH.b6)
#define P0D15		(_B_PW0DH.b7)

#define P0C0		(_B_PW0CL.b0)
#define P0C1		(_B_PW0CL.b1)
#define P0C2		(_B_PW0CL.b2)
#define P0C3		(_B_PW0CL.b3)
#define P0C4		(_B_PW0CL.b4)
#define P0C5		(_B_PW0CL.b5)
#define P0C6		(_B_PW0CL.b6)
#define P0C7		(_B_PW0CL.b7)

#define P0C8		(_B_PW0CH.b0)
#define P0C9		(_B_PW0CH.b1)
#define P0C10		(_B_PW0CH.b2)
#define P0C11		(_B_PW0CH.b3)
#define P0C12		(_B_PW0CH.b4)
#define P0C13		(_B_PW0CH.b5)
#define P0C14		(_B_PW0CH.b6)
#define P0C15		(_B_PW0CH.b7)

#define P0CS0		(_B_PW0CON0.b0)
#define P0CS1		(_B_PW0CON0.b1)
#define P0IS0		(_B_PW0CON0.b2)
#define P0IS1		(_B_PW0CON0.b3)
#define P0NEG		(_B_PW0CON0.b4)

#define P0RUN		(_B_PW0CON1.b0)
#define P0FLG		(_B_PW0CON1.b6)
#define P0STAT		(_B_PW0CON1.b7)

#define LD0		(_B_BLDCON0.b0)
#define LD1		(_B_BLDCON0.b1)
#define LD2		(_B_BLDCON0.b2)
#define LD3		(_B_BLDCON0.b3)

#define ENBL		(_B_BLDCON1.b0)
#define BLDF		(_B_BLDCON1.b1)

#define BSON		(_B_BIASCON.b0)
#define BSN0		(_B_BIASCON.b1)
#define BSN1		(_B_BIASCON.b2)
#define BSN2		(_B_BIASCON.b3)
#define BSEL		(_B_BIASCON.b4)

#define LCN0		(_B_DSPCNT.b0)
#define LCN1		(_B_DSPCNT.b1)
#define LCN2		(_B_DSPCNT.b2)
#define LCN3		(_B_DSPCNT.b3)
#define LCN4		(_B_DSPCNT.b4)

#define DUTY0		(_B_DSPMOD0.b0)
#define DUTY1		(_B_DSPMOD0.b1)
#define DUTY2		(_B_DSPMOD0.b2)
#define DUTY3		(_B_DSPMOD0.b3)
#define FRM0		(_B_DSPMOD0.b5)
#define FRM1		(_B_DSPMOD0.b6)

#define DADM0		(_B_DSPMOD1.b0)
#define DADM1		(_B_DSPMOD1.b1)
#define DASN		(_B_DSPMOD1.b2)

#define LMD0		(_B_DSPCON.b0)
#define LMD1		(_B_DSPCON.b1)

#define NMI		(_B_NMID.b0)

#define NMIC		(_B_NMICON.b0)

#define P00D		(_B_P0D.b0)
#define P01D		(_B_P0D.b1)
#define P02D		(_B_P0D.b2)
#define P03D		(_B_P0D.b3)

#define P00C0		(_B_P0CON0.b0)
#define P01C0		(_B_P0CON0.b1)
#define P02C0		(_B_P0CON0.b2)
#define P03C0		(_B_P0CON0.b3)

#define P00C1		(_B_P0CON1.b0)
#define P01C1		(_B_P0CON1.b1)
#define P02C1		(_B_P0CON1.b2)
#define P03C1		(_B_P0CON1.b3)

#define P10D		(_B_P1D.b0)
#define P11D		(_B_P1D.b1)

#define P10C0		(_B_P1CON0.b0)
#define P11C0		(_B_P1CON0.b1)

#define P10C1		(_B_P1CON1.b0)
#define P11C1		(_B_P1CON1.b1)

#define P20D		(_B_P2D.b0)
#define P21D		(_B_P2D.b1)
#define P22D		(_B_P2D.b2)

#define P20C0		(_B_P2CON0.b0)
#define P21C0		(_B_P2CON0.b1)
#define P22C0		(_B_P2CON0.b2)

#define P20C1		(_B_P2CON1.b0)
#define P21C1		(_B_P2CON1.b1)
#define P22C1		(_B_P2CON1.b2)

#define P20MD		(_B_P2MOD.b0)
#define P21MD		(_B_P2MOD.b1)
#define P22MD		(_B_P2MOD.b2)

#define P30D		(_B_P3D.b0)
#define P31D		(_B_P3D.b1)
#define P32D		(_B_P3D.b2)
#define P33D		(_B_P3D.b3)
#define P34D		(_B_P3D.b4)
#define P35D		(_B_P3D.b5)

#define P30DIR		(_B_P3DIR.b0)
#define P31DIR		(_B_P3DIR.b1)
#define P32DIR		(_B_P3DIR.b2)
#define P33DIR		(_B_P3DIR.b3)
#define P34DIR		(_B_P3DIR.b4)
#define P35DIR		(_B_P3DIR.b5)

#define P30C0		(_B_P3CON0.b0)
#define P31C0		(_B_P3CON0.b1)
#define P32C0		(_B_P3CON0.b2)
#define P33C0		(_B_P3CON0.b3)
#define P34C0		(_B_P3CON0.b4)
#define P35C0		(_B_P3CON0.b5)

#define P30C1		(_B_P3CON1.b0)
#define P31C1		(_B_P3CON1.b1)
#define P32C1		(_B_P3CON1.b2)
#define P33C1		(_B_P3CON1.b3)
#define P34C1		(_B_P3CON1.b4)
#define P35C1		(_B_P3CON1.b5)

#define P30MD0		(_B_P3MOD0.b0)
#define P31MD0		(_B_P3MOD0.b1)
#define P32MD0		(_B_P3MOD0.b2)
#define P33MD0		(_B_P3MOD0.b3)
#define P34MD0		(_B_P3MOD0.b4)
#define P35MD0		(_B_P3MOD0.b5)

#define P30MD1		(_B_P3MOD1.b0)
#define P31MD1		(_B_P3MOD1.b1)
#define P32MD1		(_B_P3MOD1.b2)
#define P33MD1		(_B_P3MOD1.b3)
#define P34MD1		(_B_P3MOD1.b4)
#define P35MD1		(_B_P3MOD1.b5)

#define P40D		(_B_P4D.b0)
#define P41D		(_B_P4D.b1)
#define P42D		(_B_P4D.b2)
#define P43D		(_B_P4D.b3)
#define P44D		(_B_P4D.b4)
#define P45D		(_B_P4D.b5)
#define P46D		(_B_P4D.b6)
#define P47D		(_B_P4D.b7)

#define P40DIR		(_B_P4DIR.b0)
#define P41DIR		(_B_P4DIR.b1)
#define P42DIR		(_B_P4DIR.b2)
#define P43DIR		(_B_P4DIR.b3)
#define P44DIR		(_B_P4DIR.b4)
#define P45DIR		(_B_P4DIR.b5)
#define P46DIR		(_B_P4DIR.b6)
#define P47DIR		(_B_P4DIR.b7)

#define P40C0		(_B_P4CON0.b0)
#define P41C0		(_B_P4CON0.b1)
#define P42C0		(_B_P4CON0.b2)
#define P43C0		(_B_P4CON0.b3)
#define P44C0		(_B_P4CON0.b4)
#define P45C0		(_B_P4CON0.b5)
#define P46C0		(_B_P4CON0.b6)
#define P47C0		(_B_P4CON0.b7)

#define P40C1		(_B_P4CON1.b0)
#define P41C1		(_B_P4CON1.b1)
#define P42C1		(_B_P4CON1.b2)
#define P43C1		(_B_P4CON1.b3)
#define P44C1		(_B_P4CON1.b4)
#define P45C1		(_B_P4CON1.b5)
#define P46C1		(_B_P4CON1.b6)
#define P47C1		(_B_P4CON1.b7)

#define P40MD0		(_B_P4MOD0.b0)
#define P41MD0		(_B_P4MOD0.b1)
#define P42MD0		(_B_P4MOD0.b2)
#define P43MD0		(_B_P4MOD0.b3)
#define P44MD0		(_B_P4MOD0.b4)
#define P45MD0		(_B_P4MOD0.b5)
#define P46MD0		(_B_P4MOD0.b6)
#define P47MD0		(_B_P4MOD0.b7)

#define P40MD1		(_B_P4MOD1.b0)
#define P41MD1		(_B_P4MOD1.b1)
#define P42MD1		(_B_P4MOD1.b2)
#define P43MD1		(_B_P4MOD1.b3)
#define P44MD1		(_B_P4MOD1.b4)
#define P45MD1		(_B_P4MOD1.b5)
#define P46MD1		(_B_P4MOD1.b6)
#define P47MD1		(_B_P4MOD1.b7)

#define PA0D		(_B_PAD.b0)
#define PA1D		(_B_PAD.b1)
#define PA2D		(_B_PAD.b2)
#define PA3D		(_B_PAD.b3)
#define PA4D		(_B_PAD.b4)
#define PA5D		(_B_PAD.b5)
#define PA6D		(_B_PAD.b6)
#define PA7D		(_B_PAD.b7)

#define PA0DIR		(_B_PADIR.b0)
#define PA1DIR		(_B_PADIR.b1)
#define PA2DIR		(_B_PADIR.b2)
#define PA3DIR		(_B_PADIR.b3)
#define PA4DIR		(_B_PADIR.b4)
#define PA5DIR		(_B_PADIR.b5)
#define PA6DIR		(_B_PADIR.b6)
#define PA7DIR		(_B_PADIR.b7)

#define PA0C0		(_B_PACON0.b0)
#define PA1C0		(_B_PACON0.b1)
#define PA2C0		(_B_PACON0.b2)
#define PA3C0		(_B_PACON0.b3)
#define PA4C0		(_B_PACON0.b4)
#define PA5C0		(_B_PACON0.b5)
#define PA6C0		(_B_PACON0.b6)
#define PA7C0		(_B_PACON0.b7)

#define PA0C1		(_B_PACON1.b0)
#define PA1C1		(_B_PACON1.b1)
#define PA2C1		(_B_PACON1.b2)
#define PA3C1		(_B_PACON1.b3)
#define PA4C1		(_B_PACON1.b4)
#define PA5C1		(_B_PACON1.b5)
#define PA6C1		(_B_PACON1.b6)
#define PA7C1		(_B_PACON1.b7)

#define S0B0		(_B_SIO0BUFL.b0)
#define S0B1		(_B_SIO0BUFL.b1)
#define S0B2		(_B_SIO0BUFL.b2)
#define S0B3		(_B_SIO0BUFL.b3)
#define S0B4		(_B_SIO0BUFL.b4)
#define S0B5		(_B_SIO0BUFL.b5)
#define S0B6		(_B_SIO0BUFL.b6)
#define S0B7		(_B_SIO0BUFL.b7)

#define S0B8		(_B_SIO0BUFH.b0)
#define S0B9		(_B_SIO0BUFH.b1)
#define S0B10		(_B_SIO0BUFH.b2)
#define S0B11		(_B_SIO0BUFH.b3)
#define S0B12		(_B_SIO0BUFH.b4)
#define S0B13		(_B_SIO0BUFH.b5)
#define S0B14		(_B_SIO0BUFH.b6)
#define S0B15		(_B_SIO0BUFH.b7)

#define S0EN		(_B_SIO0CON.b0)

#define S0DIR		(_B_SIO0MOD0.b0)
#define S0MD0		(_B_SIO0MOD0.b1)
#define S0MD1		(_B_SIO0MOD0.b2)
#define S0LG		(_B_SIO0MOD0.b3)

#define S0CK0		(_B_SIO0MOD1.b0)
#define S0CK1		(_B_SIO0MOD1.b1)
#define S0CK2		(_B_SIO0MOD1.b2)
#define S0CKT		(_B_SIO0MOD1.b4)

#define U0B0		(_B_UA0BUF.b0)
#define U0B1		(_B_UA0BUF.b1)
#define U0B2		(_B_UA0BUF.b2)
#define U0B3		(_B_UA0BUF.b3)
#define U0B4		(_B_UA0BUF.b4)
#define U0B5		(_B_UA0BUF.b5)
#define U0B6		(_B_UA0BUF.b6)
#define U0B7		(_B_UA0BUF.b7)

#define U0EN		(_B_UA0CON.b0)

#define U0IO		(_B_UA0MOD0.b0)
#define U0CK0		(_B_UA0MOD0.b1)
#define U0CK1		(_B_UA0MOD0.b2)
#define U0RSEL		(_B_UA0MOD0.b4)

#define U0LG0		(_B_UA0MOD1.b0)
#define U0LG1		(_B_UA0MOD1.b1)
#define U0PT0		(_B_UA0MOD1.b2)
#define U0PT1		(_B_UA0MOD1.b3)
#define U0STP		(_B_UA0MOD1.b4)
#define U0NEG		(_B_UA0MOD1.b5)
#define U0DIR		(_B_UA0MOD1.b6)

#define U0BR0		(_B_UA0BRTL.b0)
#define U0BR1		(_B_UA0BRTL.b1)
#define U0BR2		(_B_UA0BRTL.b2)
#define U0BR3		(_B_UA0BRTL.b3)
#define U0BR4		(_B_UA0BRTL.b4)
#define U0BR5		(_B_UA0BRTL.b5)
#define U0BR6		(_B_UA0BRTL.b6)
#define U0BR7		(_B_UA0BRTL.b7)

#define U0BR8		(_B_UA0BRTH.b0)
#define U0BR9		(_B_UA0BRTH.b1)
#define U0BR10		(_B_UA0BRTH.b2)
#define U0BR11		(_B_UA0BRTH.b3)

#define U0FER		(_B_UA0STAT.b0)
#define U0OER		(_B_UA0STAT.b1)
#define U0PER		(_B_UA0STAT.b2)
#define U0FUL		(_B_UA0STAT.b3)

#define I20R0		(_B_I2C0RD.b0)
#define I20R1		(_B_I2C0RD.b1)
#define I20R2		(_B_I2C0RD.b2)
#define I20R3		(_B_I2C0RD.b3)
#define I20R4		(_B_I2C0RD.b4)
#define I20R5		(_B_I2C0RD.b5)
#define I20R6		(_B_I2C0RD.b6)
#define I20R7		(_B_I2C0RD.b7)

#define I20RW		(_B_I2C0SA.b0)
#define I20A0		(_B_I2C0SA.b1)
#define I20A1		(_B_I2C0SA.b2)
#define I20A2		(_B_I2C0SA.b3)
#define I20A3		(_B_I2C0SA.b4)
#define I20A4		(_B_I2C0SA.b5)
#define I20A5		(_B_I2C0SA.b6)
#define I20A6		(_B_I2C0SA.b7)

#define I20T0		(_B_I2C0TD.b0)
#define I20T1		(_B_I2C0TD.b1)
#define I20T2		(_B_I2C0TD.b2)
#define I20T3		(_B_I2C0TD.b3)
#define I20T4		(_B_I2C0TD.b4)
#define I20T5		(_B_I2C0TD.b5)
#define I20T6		(_B_I2C0TD.b6)
#define I20T7		(_B_I2C0TD.b7)

#define I20ST		(_B_I2C0CON.b0)
#define I20SP		(_B_I2C0CON.b1)
#define I20RS		(_B_I2C0CON.b2)
#define I20ACT		(_B_I2C0CON.b7)

#define I20EN		(_B_I2C0MOD.b0)
#define I20MD		(_B_I2C0MOD.b1)
#define I20DW0		(_B_I2C0MOD.b2)
#define I20DW1		(_B_I2C0MOD.b3)
#define I20SYN		(_B_I2C0MOD.b4)

#define I20BB		(_B_I2C0STAT.b0)
#define I20ACR		(_B_I2C0STAT.b1)
#define I20ER		(_B_I2C0STAT.b2)

#define M0RUN		(_B_MD0CON.b0)
#define BZMD		(_B_MD0CON.b1)

#define M0TM0		(_B_MD0TMP.b0)
#define M0TM1		(_B_MD0TMP.b1)
#define M0TM2		(_B_MD0TMP.b2)
#define M0TM3		(_B_MD0TMP.b3)

#define M0TN0		(_B_MD0TON.b0)
#define M0TN1		(_B_MD0TON.b1)
#define M0TN2		(_B_MD0TON.b2)
#define M0TN3		(_B_MD0TON.b3)
#define M0TN4		(_B_MD0TON.b4)
#define M0TN5		(_B_MD0TON.b5)
#define M0TN6		(_B_MD0TON.b6)

#define M0LN0		(_B_MD0LEN.b0)
#define M0LN1		(_B_MD0LEN.b1)
#define M0LN2		(_B_MD0LEN.b2)
#define M0LN3		(_B_MD0LEN.b3)
#define M0LN4		(_B_MD0LEN.b4)
#define M0LN5		(_B_MD0LEN.b5)

#define SAR00		(_B_SADR0L.b4)
#define SAR01		(_B_SADR0L.b5)
#define SAR02		(_B_SADR0L.b6)
#define SAR03		(_B_SADR0L.b7)

#define SAR04		(_B_SADR0H.b0)
#define SAR05		(_B_SADR0H.b1)
#define SAR06		(_B_SADR0H.b2)
#define SAR07		(_B_SADR0H.b3)
#define SAR08		(_B_SADR0H.b4)
#define SAR09		(_B_SADR0H.b5)
#define SAR0A		(_B_SADR0H.b6)
#define SAR0B		(_B_SADR0H.b7)

#define SAR10		(_B_SADR1L.b4)
#define SAR11		(_B_SADR1L.b5)
#define SAR12		(_B_SADR1L.b6)
#define SAR13		(_B_SADR1L.b7)

#define SAR14		(_B_SADR1H.b0)
#define SAR15		(_B_SADR1H.b1)
#define SAR16		(_B_SADR1H.b2)
#define SAR17		(_B_SADR1H.b3)
#define SAR18		(_B_SADR1H.b4)
#define SAR19		(_B_SADR1H.b5)
#define SAR1A		(_B_SADR1H.b6)
#define SAR1B		(_B_SADR1H.b7)

#define SALP		(_B_SADCON0.b0)
#define SACK		(_B_SADCON0.b1)

#define SARUN		(_B_SADCON1.b0)

#define SACH0		(_B_SADMOD0.b0)
#define SACH1		(_B_SADMOD0.b1)

#define RAA0		(_B_RADCA0.b0)
#define RAA1		(_B_RADCA0.b1)
#define RAA2		(_B_RADCA0.b2)
#define RAA3		(_B_RADCA0.b3)
#define RAA4		(_B_RADCA0.b4)
#define RAA5		(_B_RADCA0.b5)
#define RAA6		(_B_RADCA0.b6)
#define RAA7		(_B_RADCA0.b7)

#define RAA8		(_B_RADCA1.b0)
#define RAA9		(_B_RADCA1.b1)
#define RAA10		(_B_RADCA1.b2)
#define RAA11		(_B_RADCA1.b3)
#define RAA12		(_B_RADCA1.b4)
#define RAA13		(_B_RADCA1.b5)
#define RAA14		(_B_RADCA1.b6)
#define RAA15		(_B_RADCA1.b7)

#define RAA16		(_B_RADCA2.b0)
#define RAA17		(_B_RADCA2.b1)
#define RAA18		(_B_RADCA2.b2)
#define RAA19		(_B_RADCA2.b3)
#define RAA20		(_B_RADCA2.b4)
#define RAA21		(_B_RADCA2.b5)
#define RAA22		(_B_RADCA2.b6)
#define RAA23		(_B_RADCA2.b7)

#define RAB0		(_B_RADCB0.b0)
#define RAB1		(_B_RADCB0.b1)
#define RAB2		(_B_RADCB0.b2)
#define RAB3		(_B_RADCB0.b3)
#define RAB4		(_B_RADCB0.b4)
#define RAB5		(_B_RADCB0.b5)
#define RAB6		(_B_RADCB0.b6)
#define RAB7		(_B_RADCB0.b7)

#define RAB8		(_B_RADCB1.b0)
#define RAB9		(_B_RADCB1.b1)
#define RAB10		(_B_RADCB1.b2)
#define RAB11		(_B_RADCB1.b3)
#define RAB12		(_B_RADCB1.b4)
#define RAB13		(_B_RADCB1.b5)
#define RAB14		(_B_RADCB1.b6)
#define RAB15		(_B_RADCB1.b7)

#define RAB16		(_B_RADCB2.b0)
#define RAB17		(_B_RADCB2.b1)
#define RAB18		(_B_RADCB2.b2)
#define RAB19		(_B_RADCB2.b3)
#define RAB20		(_B_RADCB2.b4)
#define RAB21		(_B_RADCB2.b5)
#define RAB22		(_B_RADCB2.b6)
#define RAB23		(_B_RADCB2.b7)

#define OM0		(_B_RADMOD.b0)
#define OM1		(_B_RADMOD.b1)
#define OM2		(_B_RADMOD.b2)
#define OM3		(_B_RADMOD.b3)
#define RADI		(_B_RADMOD.b4)
#define RACK0		(_B_RADMOD.b5)
#define RACK1		(_B_RADMOD.b6)
#define RACK2		(_B_RADMOD.b7)

#define RARUN		(_B_RADCON.b0)
/*---------------------------------------------------
	END OF BIT ADDRESS SYMBOLS
---------------------------------------------------*/

#endif
