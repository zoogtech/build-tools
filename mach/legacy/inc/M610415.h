/**************************************************************

    M610415.h - SFR define Header file for CCU8

	#CORE           "nX-U8/100"
	#TARGET         "ML610415"
	#VERSION        "1.02"

    Copyright (C) 2008, OKI SEMICONDUCTOR CO., LTD.
**************************************************************/
#ifndef _M610415_H_
#define _M610415_H_

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
#define OUTC0		(_B_FCON0.b4)
#define OUTC1		(_B_FCON0.b5)

#define SYSCLK		(_B_FCON1.b0)
#define ENOSC		(_B_FCON1.b1)
#define ENMLT		(_B_FCON1.b2)

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

#define LCN0		(_B_DSPCNT.b0)
#define LCN1		(_B_DSPCNT.b1)
#define LCN2		(_B_DSPCNT.b2)
#define LCN3		(_B_DSPCNT.b3)
#define LCN4		(_B_DSPCNT.b4)

#define DUTY0		(_B_DSPMOD0.b0)
#define DUTY1		(_B_DSPMOD0.b1)
#define FRM0		(_B_DSPMOD0.b5)
#define FRM1		(_B_DSPMOD0.b6)

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

#define M0TM0		(_B_MD0TMP.b0)
#define M0TM1		(_B_MD0TMP.b1)

#define M0TN0		(_B_MD0TON.b0)
#define M0TN1		(_B_MD0TON.b1)
#define M0TN2		(_B_MD0TON.b2)

#define M0LN0		(_B_MD0LEN.b0)
#define M0LN1		(_B_MD0LEN.b1)
#define M0LN2		(_B_MD0LEN.b2)
#define M0LN3		(_B_MD0LEN.b3)

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
