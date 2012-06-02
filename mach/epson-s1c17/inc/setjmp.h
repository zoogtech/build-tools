
    /********************************************************/
    /*                                                      */
    /*                                                      */
    /*         Copyright (C), 2001  SEIKO EPSON Corp.       */
    /*         ALL RIGHTS RESERVED                          */
    /*                                                      */
    /*                                                      */
    /*  file name : setjmp.h                                */
    /*                                                      */
    /*  Revision history                                    */
    /*    2001/08/09    first release       T.Tazaki        */
    /*    2008/5/7      prototypes changed to revoke extern */
    /*                                      K.Watanabe      */
    /*                                                      */
    /********************************************************/

#ifndef _SETJMP_H
#define _SETJMP_H

//typedef int jmp_buf[16];
typedef long jmp_buf[16];

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
extern int setjmp(jmp_buf);
extern void longjmp(jmp_buf, int);
#endif



int setjmp(jmp_buf);
void longjmp(jmp_buf, int);
// CHG K.Watanabe 2008/5/7 <<<<<<<

#endif /* _SETJMP_H */
