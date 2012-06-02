/**************************************************************

    M610346.H - SFR define Header file for CCU8

	#CORE           "nX-U8/100"
	#TARGET         "ML610346"
	#VERSION        "1.01"

    Copyright (C) 2008, OKI SEMICONDUCTOR CO., LTD.
**************************************************************/
#ifndef _M610346_H_
#define _M610346_H_

/*---------------------------------------------------
	CODE ADDRESS SYMBOLS
---------------------------------------------------*/
#define WDTINT	0x0008
#define NMINT	0x000A
#define P00INT	0x0010
#define P01INT	0x0012
#define P02INT	0x0014
#define P03INT	0x0016
#define P04INT	0x0018
#define P05INT	0x001A
#define P06INT	0x001C
#define P07INT	0x001E
#define SIO0INT	0x0020
#define SADINT	0x0024
#define TM0INT	0x0030
#define TM1INT	0x0032
#define VC0INT	0x0038
#define UA0INT	0x0040
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

#define VFDAT (*(volatile unsigned char __near *)0xF2B0)
#define _B_VFDAT (*(volatile _BYTE_FIELD __near *)0xF2B0)

#define VFEDAT (*(volatile unsigned char __near *)0xF2B1)
#define _B_VFEDAT (*(volatile _BYTE_FIELD __near *)0xF2B1)

#define VHQSBL (*(volatile unsigned char __near *)0xF2B2)
#define _B_VHQSBL (*(volatile _BYTE_FIELD __near *)0xF2B2)

#define VSTAT (*(volatile unsigned char __near *)0xF2B3)
#define _B_VSTAT (*(volatile _BYTE_FIELD __near *)0xF2B3)

#define VMOD (*(volatile unsigned char __near *)0xF2B4)
#define _B_VMOD (*(volatile _BYTE_FIELD __near *)0xF2B4)

#define VTYPE (*(volatile unsigned char __near *)0xF2B5)
#define _B_VTYPE (*(volatile _BYTE_FIELD __near *)0xF2B5)

#define VVOL (*(volatile unsigned char __near *)0xF2B6)
#define _B_VVOL (*(volatile _BYTE_FIELD __near *)0xF2B6)

#define VCON (*(volatile unsigned char __near *)0xF2B7)
#define _B_VCON (*(volatile _BYTE_FIELD __near *)0xF2B7)

#define SPCON (*(volatile unsigned char __near *)0xF2BC)
#define _B_SPCON (*(volatile _BYTE_FIELD __near *)0xF2BC)

#define TSDMOD (*(volatile unsigned char __near *)0xF2BD)
#define _B_TSDMOD (*(volatile _BYTE_FIELD __near *)0xF2BD)

#define TSDCON (*(volatile unsigned char __near *)0xF2BE)
#define _B_TSDCON (*(volatile _BYTE_FIELD __near *)0xF2BE)

#define DCDCON (*(volatile unsigned char __near *)0xF2BF)
#define _B_DCDCON (*(volatile _BYTE_FIELD __near *)0xF2BF)

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

#define SADR2 (*(volatile unsigned int __near *)0xF2D4)

#define SADR2L (*(volatile unsigned char __near *)0xF2D4)
#define _B_SADR2L (*(volatile _BYTE_FIELD __near *)0xF2D4)

#define SADR2H (*(volatile unsigned char __near *)0xF2D5)
#define _B_SADR2H (*(volatile _BYTE_FIELD __near *)0xF2D5)

#define SADR3 (*(volatile unsigned int __near *)0xF2D6)

#define SADR3L (*(volatile unsigned char __near *)0xF2D6)
#define _B_SADR3L (*(volatile _BYTE_FIELD __near *)0xF2D6)

#define SADR3H (*(volatile unsigned char __near *)0xF2D7)
#define _B_SADR3H (*(volatile _BYTE_FIELD __near *)0xF2D7)

#define SADR4 (*(volatile unsigned int __near *)0xF2D8)

#define SADR4L (*(volatile unsigned char __near *)0xF2D8)
#define _B_SADR4L (*(volatile _BYTE_FIELD __near *)0xF2D8)

#define SADR4H (*(volatile unsigned char __near *)0xF2D9)
#define _B_SADR4H (*(volatile _BYTE_FIELD __near *)0xF2D9)

#define SADR5 (*(volatile unsigned int __near *)0xF2DA)

#define SADR5L (*(volatile unsigned char __near *)0xF2DA)
#define _B_SADR5L (*(volatile _BYTE_FIELD __near *)0xF2DA)

#define SADR5H (*(volatile unsigned char __near *)0xF2DB)
#define _B_SADR5H (*(volatile _BYTE_FIELD __near *)0xF2DB)

#define SADR6 (*(volatile unsigned int __near *)0xF2DC)

#define SADR6L (*(volatile unsigned char __near *)0xF2DC)
#define _B_SADR6L (*(volatile _BYTE_FIELD __near *)0xF2DC)

#define SADR6H (*(volatile unsigned char __near *)0xF2DD)
#define _B_SADR6H (*(volatile _BYTE_FIELD __near *)0xF2DD)

#define SADR7 (*(volatile unsigned int __near *)0xF2DE)

#define SADR7L (*(volatile unsigned char __near *)0xF2DE)
#define _B_SADR7L (*(volatile _BYTE_FIELD __near *)0xF2DE)

#define SADR7H (*(volatile unsigned char __near *)0xF2DF)
#define _B_SADR7H (*(volatile _BYTE_FIELD __near *)0xF2DF)

#define SADR8 (*(volatile unsigned int __near *)0xF2E0)

#define SADR8L (*(volatile unsigned char __near *)0xF2E0)
#define _B_SADR8L (*(volatile _BYTE_FIELD __near *)0xF2E0)

#define SADR8H (*(volatile unsigned char __near *)0xF2E1)
#define _B_SADR8H (*(volatile _BYTE_FIELD __near *)0xF2E1)

#define SADR9 (*(volatile unsigned int __near *)0xF2E2)

#define SADR9L (*(volatile unsigned char __near *)0xF2E2)
#define _B_SADR9L (*(volatile _BYTE_FIELD __near *)0xF2E2)

#define SADR9H (*(volatile unsigned char __near *)0xF2E3)
#define _B_SADR9H (*(volatile _BYTE_FIELD __near *)0xF2E3)

#define SADRA (*(volatile unsigned int __near *)0xF2E4)

#define SADRAL (*(volatile unsigned char __near *)0xF2E4)
#define _B_SADRAL (*(volatile _BYTE_FIELD __near *)0xF2E4)

#define SADRAH (*(volatile unsigned char __near *)0xF2E5)
#define _B_SADRAH (*(volatile _BYTE_FIELD __near *)0xF2E5)

#define SADRB (*(volatile unsigned int __near *)0xF2E6)

#define SADRBL (*(volatile unsigned char __near *)0xF2E6)
#define _B_SADRBL (*(volatile _BYTE_FIELD __near *)0xF2E6)

#define SADRBH (*(volatile unsigned char __near *)0xF2E7)
#define _B_SADRBH (*(volatile _BYTE_FIELD __near *)0xF2E7)

#define SADCON (*(volatile unsigned int __near *)0xF2F0)

#define SADCON0 (*(volatile unsigned char __near *)0xF2F0)
#define _B_SADCON0 (*(volatile _BYTE_FIELD __near *)0xF2F0)

#define SADCON1 (*(volatile unsigned char __near *)0xF2F1)
#define _B_SADCON1 (*(volatile _BYTE_FIELD __near *)0xF2F1)

#define SADMOD (*(volatile unsigned int __near *)0xF2F2)

#define SADMOD0 (*(volatile unsigned char __near *)0xF2F2)
#define _B_SADMOD0 (*(volatile _BYTE_FIELD __near *)0xF2F2)

#define SADMOD1 (*(volatile unsigned char __near *)0xF2F3)
#define _B_SADMOD1 (*(volatile _BYTE_FIELD __near *)0xF2F3)

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
#define WDTR		(_B_RSTAT.b2)

#define SYSC0		(_B_FCON0.b0)
#define SYSC1		(_B_FCON0.b1)
#define OUTC0		(_B_FCON0.b4)
#define OUTC1		(_B_FCON0.b5)

#define SYSCLK		(_B_FCON1.b0)
#define ENOSC		(_B_FCON1.b1)

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

#define WDP		(_B_WDTCON.b0)

#define WDT0		(_B_WDTMOD.b0)
#define WDT1		(_B_WDTMOD.b1)

#define EP00		(_B_IE1.b0)
#define EP01		(_B_IE1.b1)
#define EP02		(_B_IE1.b2)
#define EP03		(_B_IE1.b3)
#define EP04		(_B_IE1.b4)
#define EP05		(_B_IE1.b5)
#define EP06		(_B_IE1.b6)
#define EP07		(_B_IE1.b7)

#define ESIO0		(_B_IE2.b0)
#define ESAD		(_B_IE2.b2)

#define ETM0		(_B_IE3.b0)
#define ETM1		(_B_IE3.b1)
#define EVC0		(_B_IE3.b4)

#define EUA0		(_B_IE4.b0)

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
#define QP04		(_B_IRQ1.b4)
#define QP05		(_B_IRQ1.b5)
#define QP06		(_B_IRQ1.b6)
#define QP07		(_B_IRQ1.b7)

#define QSIO0		(_B_IRQ2.b0)
#define QSAD		(_B_IRQ2.b2)

#define QTM0		(_B_IRQ3.b0)
#define QTM1		(_B_IRQ3.b1)
#define QVC0		(_B_IRQ3.b4)

#define QUA0		(_B_IRQ4.b0)

#define Q128H		(_B_IRQ6.b5)
#define Q32H		(_B_IRQ6.b7)

#define Q16H		(_B_IRQ7.b0)
#define Q2H		(_B_IRQ7.b3)

#define P00E0		(_B_EXICON0.b0)
#define P01E0		(_B_EXICON0.b1)
#define P02E0		(_B_EXICON0.b2)
#define P03E0		(_B_EXICON0.b3)
#define P04E0		(_B_EXICON0.b4)
#define P05E0		(_B_EXICON0.b5)
#define P06E0		(_B_EXICON0.b6)
#define P07E0		(_B_EXICON0.b7)

#define P00E1		(_B_EXICON1.b0)
#define P01E1		(_B_EXICON1.b1)
#define P02E1		(_B_EXICON1.b2)
#define P03E1		(_B_EXICON1.b3)
#define P04E1		(_B_EXICON1.b4)
#define P05E1		(_B_EXICON1.b5)
#define P06E1		(_B_EXICON1.b6)
#define P07E1		(_B_EXICON1.b7)

#define P00SM		(_B_EXICON2.b0)
#define P01SM		(_B_EXICON2.b1)
#define P02SM		(_B_EXICON2.b2)
#define P03SM		(_B_EXICON2.b3)
#define P04SM		(_B_EXICON2.b4)
#define P05SM		(_B_EXICON2.b5)
#define P06SM		(_B_EXICON2.b6)
#define P07SM		(_B_EXICON2.b7)

#define DTM0		(_B_BLKCON0.b0)
#define DTM1		(_B_BLKCON0.b1)

#define DSIO0		(_B_BLKCON2.b0)
#define DUA0		(_B_BLKCON2.b2)

#define DVC0		(_B_BLKCON3.b4)

#define DSAD		(_B_BLKCON4.b0)

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

#define NMI		(_B_NMID.b0)

#define NMIC		(_B_NMICON.b0)

#define P00D		(_B_P0D.b0)
#define P01D		(_B_P0D.b1)
#define P02D		(_B_P0D.b2)
#define P03D		(_B_P0D.b3)
#define P04D		(_B_P0D.b4)
#define P05D		(_B_P0D.b5)
#define P06D		(_B_P0D.b6)
#define P07D		(_B_P0D.b7)

#define P00C0		(_B_P0CON0.b0)
#define P01C0		(_B_P0CON0.b1)
#define P02C0		(_B_P0CON0.b2)
#define P03C0		(_B_P0CON0.b3)
#define P04C0		(_B_P0CON0.b4)
#define P05C0		(_B_P0CON0.b5)
#define P06C0		(_B_P0CON0.b6)
#define P07C0		(_B_P0CON0.b7)

#define P00C1		(_B_P0CON1.b0)
#define P01C1		(_B_P0CON1.b1)
#define P02C1		(_B_P0CON1.b2)
#define P03C1		(_B_P0CON1.b3)
#define P04C1		(_B_P0CON1.b4)
#define P05C1		(_B_P0CON1.b5)
#define P06C1		(_B_P0CON1.b6)
#define P07C1		(_B_P0CON1.b7)

#define P11D		(_B_P1D.b1)

#define P11C0		(_B_P1CON0.b1)

#define P11C1		(_B_P1CON1.b1)

#define P20D		(_B_P2D.b0)
#define P21D		(_B_P2D.b1)
#define P22D		(_B_P2D.b2)
#define P23D		(_B_P2D.b3)

#define P20C0		(_B_P2CON0.b0)
#define P21C0		(_B_P2CON0.b1)
#define P22C0		(_B_P2CON0.b2)
#define P23C0		(_B_P2CON0.b3)

#define P20C1		(_B_P2CON1.b0)
#define P21C1		(_B_P2CON1.b1)
#define P22C1		(_B_P2CON1.b2)
#define P23C1		(_B_P2CON1.b3)

#define P20MD		(_B_P2MOD.b0)
#define P21MD		(_B_P2MOD.b1)
#define P22MD		(_B_P2MOD.b2)
#define P23MD		(_B_P2MOD.b3)

#define P30D		(_B_P3D.b0)
#define P31D		(_B_P3D.b1)
#define P32D		(_B_P3D.b2)
#define P33D		(_B_P3D.b3)
#define P34D		(_B_P3D.b4)
#define P35D		(_B_P3D.b5)
#define P36D		(_B_P3D.b6)
#define P37D		(_B_P3D.b7)

#define P30DIR		(_B_P3DIR.b0)
#define P31DIR		(_B_P3DIR.b1)
#define P32DIR		(_B_P3DIR.b2)
#define P33DIR		(_B_P3DIR.b3)
#define P34DIR		(_B_P3DIR.b4)
#define P35DIR		(_B_P3DIR.b5)
#define P36DIR		(_B_P3DIR.b6)
#define P37DIR		(_B_P3DIR.b7)

#define P30C0		(_B_P3CON0.b0)
#define P31C0		(_B_P3CON0.b1)
#define P32C0		(_B_P3CON0.b2)
#define P33C0		(_B_P3CON0.b3)
#define P34C0		(_B_P3CON0.b4)
#define P35C0		(_B_P3CON0.b5)
#define P36C0		(_B_P3CON0.b6)
#define P37C0		(_B_P3CON0.b7)

#define P30C1		(_B_P3CON1.b0)
#define P31C1		(_B_P3CON1.b1)
#define P32C1		(_B_P3CON1.b2)
#define P33C1		(_B_P3CON1.b3)
#define P34C1		(_B_P3CON1.b4)
#define P35C1		(_B_P3CON1.b5)
#define P36C1		(_B_P3CON1.b6)
#define P37C1		(_B_P3CON1.b7)

#define P30MD0		(_B_P3MOD0.b0)
#define P31MD0		(_B_P3MOD0.b1)
#define P32MD0		(_B_P3MOD0.b2)
#define P33MD0		(_B_P3MOD0.b3)
#define P34MD0		(_B_P3MOD0.b4)
#define P35MD0		(_B_P3MOD0.b5)
#define P36MD0		(_B_P3MOD0.b6)
#define P37MD0		(_B_P3MOD0.b7)

#define P30MD1		(_B_P3MOD1.b0)
#define P31MD1		(_B_P3MOD1.b1)
#define P32MD1		(_B_P3MOD1.b2)
#define P33MD1		(_B_P3MOD1.b3)
#define P34MD1		(_B_P3MOD1.b4)
#define P35MD1		(_B_P3MOD1.b5)
#define P36MD1		(_B_P3MOD1.b6)
#define P37MD1		(_B_P3MOD1.b7)

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
#define S0CK3		(_B_SIO0MOD1.b3)
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
#define U0RSEL		(_B_UA0MOD0.b4)
#define U0RSS		(_B_UA0MOD0.b5)

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

#define VFDAT0		(_B_VFDAT.b0)
#define VFDAT1		(_B_VFDAT.b1)
#define VFDAT2		(_B_VFDAT.b2)
#define VFDAT3		(_B_VFDAT.b3)
#define VFDAT4		(_B_VFDAT.b4)
#define VFDAT5		(_B_VFDAT.b5)
#define VFDAT6		(_B_VFDAT.b6)
#define VFDAT7		(_B_VFDAT.b7)

#define VFEDAT0		(_B_VFEDAT.b0)
#define VFEDAT1		(_B_VFEDAT.b1)
#define VFEDAT2		(_B_VFEDAT.b2)
#define VFEDAT3		(_B_VFEDAT.b3)
#define VFEDAT4		(_B_VFEDAT.b4)
#define VFEDAT5		(_B_VFEDAT.b5)
#define VFEDAT6		(_B_VFEDAT.b6)
#define VFEDAT7		(_B_VFEDAT.b7)

#define VHQSBL0		(_B_VHQSBL.b3)
#define VHQSBL1		(_B_VHQSBL.b4)
#define VHQSBL2		(_B_VHQSBL.b5)
#define VHQSBL3		(_B_VHQSBL.b6)
#define VHQSBL4		(_B_VHQSBL.b7)

#define VEMP		(_B_VSTAT.b0)
#define VMID		(_B_VSTAT.b1)
#define VFUL		(_B_VSTAT.b2)
#define VDEND		(_B_VSTAT.b3)
#define VAEND		(_B_VSTAT.b4)
#define VERR		(_B_VSTAT.b7)

#define VFMD0		(_B_VMOD.b0)
#define VFMD1		(_B_VMOD.b1)
#define VSG0		(_B_VMOD.b2)
#define VSG1		(_B_VMOD.b3)
#define VPOP		(_B_VMOD.b4)

#define VSMP0		(_B_VTYPE.b0)
#define VSMP1		(_B_VTYPE.b1)
#define VSMP2		(_B_VTYPE.b2)
#define VSMP3		(_B_VTYPE.b3)
#define VSYN0		(_B_VTYPE.b4)
#define VSYN1		(_B_VTYPE.b5)
#define VSYN2		(_B_VTYPE.b6)

#define VVOL0		(_B_VVOL.b0)
#define VVOL1		(_B_VVOL.b1)
#define VVOL2		(_B_VVOL.b2)
#define VVOL3		(_B_VVOL.b3)
#define VVOL4		(_B_VVOL.b4)

#define VCEN		(_B_VCON.b0)
#define VSTP		(_B_VCON.b4)

#define SPPEN		(_B_SPCON.b0)
#define SPMEN		(_B_SPCON.b1)

#define TSDMD0		(_B_TSDMOD.b0)
#define TSDMD1		(_B_TSDMOD.b1)
#define TSDMD2		(_B_TSDMOD.b2)

#define TSDEN		(_B_TSDCON.b0)
#define TSDF		(_B_TSDCON.b7)

#define DCDEN		(_B_DCDCON.b0)
#define DCDF		(_B_DCDCON.b7)

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

#define SAR20		(_B_SADR2L.b4)
#define SAR21		(_B_SADR2L.b5)
#define SAR22		(_B_SADR2L.b6)
#define SAR23		(_B_SADR2L.b7)

#define SAR24		(_B_SADR2H.b0)
#define SAR25		(_B_SADR2H.b1)
#define SAR26		(_B_SADR2H.b2)
#define SAR27		(_B_SADR2H.b3)
#define SAR28		(_B_SADR2H.b4)
#define SAR29		(_B_SADR2H.b5)
#define SAR2A		(_B_SADR2H.b6)
#define SAR2B		(_B_SADR2H.b7)

#define SAR30		(_B_SADR3L.b4)
#define SAR31		(_B_SADR3L.b5)
#define SAR32		(_B_SADR3L.b6)
#define SAR33		(_B_SADR3L.b7)

#define SAR34		(_B_SADR3H.b0)
#define SAR35		(_B_SADR3H.b1)
#define SAR36		(_B_SADR3H.b2)
#define SAR37		(_B_SADR3H.b3)
#define SAR38		(_B_SADR3H.b4)
#define SAR39		(_B_SADR3H.b5)
#define SAR3A		(_B_SADR3H.b6)
#define SAR3B		(_B_SADR3H.b7)

#define SAR40		(_B_SADR4L.b4)
#define SAR41		(_B_SADR4L.b5)
#define SAR42		(_B_SADR4L.b6)
#define SAR43		(_B_SADR4L.b7)

#define SAR44		(_B_SADR4H.b0)
#define SAR45		(_B_SADR4H.b1)
#define SAR46		(_B_SADR4H.b2)
#define SAR47		(_B_SADR4H.b3)
#define SAR48		(_B_SADR4H.b4)
#define SAR49		(_B_SADR4H.b5)
#define SAR4A		(_B_SADR4H.b6)
#define SAR4B		(_B_SADR4H.b7)

#define SAR50		(_B_SADR5L.b4)
#define SAR51		(_B_SADR5L.b5)
#define SAR52		(_B_SADR5L.b6)
#define SAR53		(_B_SADR5L.b7)

#define SAR54		(_B_SADR5H.b0)
#define SAR55		(_B_SADR5H.b1)
#define SAR56		(_B_SADR5H.b2)
#define SAR57		(_B_SADR5H.b3)
#define SAR58		(_B_SADR5H.b4)
#define SAR59		(_B_SADR5H.b5)
#define SAR5A		(_B_SADR5H.b6)
#define SAR5B		(_B_SADR5H.b7)

#define SAR60		(_B_SADR6L.b4)
#define SAR61		(_B_SADR6L.b5)
#define SAR62		(_B_SADR6L.b6)
#define SAR63		(_B_SADR6L.b7)

#define SAR64		(_B_SADR6H.b0)
#define SAR65		(_B_SADR6H.b1)
#define SAR66		(_B_SADR6H.b2)
#define SAR67		(_B_SADR6H.b3)
#define SAR68		(_B_SADR6H.b4)
#define SAR69		(_B_SADR6H.b5)
#define SAR6A		(_B_SADR6H.b6)
#define SAR6B		(_B_SADR6H.b7)

#define SAR70		(_B_SADR7L.b4)
#define SAR71		(_B_SADR7L.b5)
#define SAR72		(_B_SADR7L.b6)
#define SAR73		(_B_SADR7L.b7)

#define SAR74		(_B_SADR7H.b0)
#define SAR75		(_B_SADR7H.b1)
#define SAR76		(_B_SADR7H.b2)
#define SAR77		(_B_SADR7H.b3)
#define SAR78		(_B_SADR7H.b4)
#define SAR79		(_B_SADR7H.b5)
#define SAR7A		(_B_SADR7H.b6)
#define SAR7B		(_B_SADR7H.b7)

#define SAR80		(_B_SADR8L.b4)
#define SAR81		(_B_SADR8L.b5)
#define SAR82		(_B_SADR8L.b6)
#define SAR83		(_B_SADR8L.b7)

#define SAR84		(_B_SADR8H.b0)
#define SAR85		(_B_SADR8H.b1)
#define SAR86		(_B_SADR8H.b2)
#define SAR87		(_B_SADR8H.b3)
#define SAR88		(_B_SADR8H.b4)
#define SAR89		(_B_SADR8H.b5)
#define SAR8A		(_B_SADR8H.b6)
#define SAR8B		(_B_SADR8H.b7)

#define SAR90		(_B_SADR9L.b4)
#define SAR91		(_B_SADR9L.b5)
#define SAR92		(_B_SADR9L.b6)
#define SAR93		(_B_SADR9L.b7)

#define SAR94		(_B_SADR9H.b0)
#define SAR95		(_B_SADR9H.b1)
#define SAR96		(_B_SADR9H.b2)
#define SAR97		(_B_SADR9H.b3)
#define SAR98		(_B_SADR9H.b4)
#define SAR99		(_B_SADR9H.b5)
#define SAR9A		(_B_SADR9H.b6)
#define SAR9B		(_B_SADR9H.b7)

#define SARA0		(_B_SADRAL.b4)
#define SARA1		(_B_SADRAL.b5)
#define SARA2		(_B_SADRAL.b6)
#define SARA3		(_B_SADRAL.b7)

#define SARA4		(_B_SADRAH.b0)
#define SARA5		(_B_SADRAH.b1)
#define SARA6		(_B_SADRAH.b2)
#define SARA7		(_B_SADRAH.b3)
#define SARA8		(_B_SADRAH.b4)
#define SARA9		(_B_SADRAH.b5)
#define SARAA		(_B_SADRAH.b6)
#define SARAB		(_B_SADRAH.b7)

#define SARB0		(_B_SADRBL.b4)
#define SARB1		(_B_SADRBL.b5)
#define SARB2		(_B_SADRBL.b6)
#define SARB3		(_B_SADRBL.b7)

#define SARB4		(_B_SADRBH.b0)
#define SARB5		(_B_SADRBH.b1)
#define SARB6		(_B_SADRBH.b2)
#define SARB7		(_B_SADRBH.b3)
#define SARB8		(_B_SADRBH.b4)
#define SARB9		(_B_SADRBH.b5)
#define SARBA		(_B_SADRBH.b6)
#define SARBB		(_B_SADRBH.b7)

#define SALP		(_B_SADCON0.b0)
#define SACK		(_B_SADCON0.b1)

#define SARUN		(_B_SADCON1.b0)

#define SACH0		(_B_SADMOD0.b0)
#define SACH1		(_B_SADMOD0.b1)
#define SACH2		(_B_SADMOD0.b2)
#define SACH3		(_B_SADMOD0.b3)
#define SACH4		(_B_SADMOD0.b4)
#define SACH5		(_B_SADMOD0.b5)
#define SACH6		(_B_SADMOD0.b6)
#define SACH7		(_B_SADMOD0.b7)

#define SACH8		(_B_SADMOD1.b0)
#define SACH9		(_B_SADMOD1.b1)
#define SACHA		(_B_SADMOD1.b2)
#define SACHB		(_B_SADMOD1.b3)
/*---------------------------------------------------
	END OF BIT ADDRESS SYMBOLS
---------------------------------------------------*/

#endif
