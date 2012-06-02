/**************************************************************

    M610340.h - SFR define Header file for CCU8

	#CORE           "nX-U8/100"
	#TARGET         "ML610340"
	#VERSION        "1.01"

    Copyright (C) 2008, OKI SEMICONDUCTOR CO., LTD.
**************************************************************/
#ifndef _M610340_H_
#define _M610340_H_

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
#define TM0INT	0x0030
#define TM1INT	0x0032
#define VC0INT	0x0038
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

#define ESIO0		(_B_IE2.b0)

#define ETM0		(_B_IE3.b0)
#define ETM1		(_B_IE3.b1)
#define EVC0		(_B_IE3.b4)

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

#define QTM0		(_B_IRQ3.b0)
#define QTM1		(_B_IRQ3.b1)
#define QVC0		(_B_IRQ3.b4)

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

#define DSIO0		(_B_BLKCON2.b0)

#define DVC0		(_B_BLKCON3.b4)

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

#define P00C0		(_B_P0CON0.b0)
#define P01C0		(_B_P0CON0.b1)
#define P02C0		(_B_P0CON0.b2)
#define P03C0		(_B_P0CON0.b3)

#define P00C1		(_B_P0CON1.b0)
#define P01C1		(_B_P0CON1.b1)
#define P02C1		(_B_P0CON1.b2)
#define P03C1		(_B_P0CON1.b3)

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

#define P40D		(_B_P4D.b0)
#define P41D		(_B_P4D.b1)
#define P42D		(_B_P4D.b2)
#define P43D		(_B_P4D.b3)

#define P40DIR		(_B_P4DIR.b0)
#define P41DIR		(_B_P4DIR.b1)
#define P42DIR		(_B_P4DIR.b2)
#define P43DIR		(_B_P4DIR.b3)

#define P40C0		(_B_P4CON0.b0)
#define P41C0		(_B_P4CON0.b1)
#define P42C0		(_B_P4CON0.b2)
#define P43C0		(_B_P4CON0.b3)

#define P40C1		(_B_P4CON1.b0)
#define P41C1		(_B_P4CON1.b1)
#define P42C1		(_B_P4CON1.b2)
#define P43C1		(_B_P4CON1.b3)

#define P40MD0		(_B_P4MOD0.b0)
#define P41MD0		(_B_P4MOD0.b1)
#define P42MD0		(_B_P4MOD0.b2)
#define P43MD0		(_B_P4MOD0.b3)

#define P40MD1		(_B_P4MOD1.b0)
#define P41MD1		(_B_P4MOD1.b1)
#define P42MD1		(_B_P4MOD1.b2)
#define P43MD1		(_B_P4MOD1.b3)

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
/*---------------------------------------------------
	END OF BIT ADDRESS SYMBOLS
---------------------------------------------------*/

#endif
