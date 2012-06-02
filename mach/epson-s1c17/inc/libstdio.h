/********************************************************/
/*                                                      */
/*                                                      */
/*         Copyright (C), 2007  SEIKO EPSON Corp.       */
/*         ALL RIGHTS RESERVED                          */
/*                                                      */
/*                                                      */
/*  file name : libstdio.h                              */
/*                                                      */
/*  Revision history                                    */
/*      2007/06/15  first release       D.Fujimoto      */
/*      2008/5/7    prototypes changed to revoke extern */
/*                                      K.Watanabe      */
/*                                                      */
/********************************************************/

#ifndef _LIBSTDIO_H
#define _LIBSTDIO_H


/* prototypes */

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
// ANSI C library initializer
extern	void _init_lib(void);
// stdio initializer
extern	void _init_sys(void);
#endif



// ANSI C library initializer
void _init_lib(void);

// stdio initializer
void _init_sys(void);
// CHG K.Watanabe 2008/5/7 <<<<<<<

#endif	/* _LIBSTDIO_H */
