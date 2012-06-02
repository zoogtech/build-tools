    /********************************************************/
    /*                                                      */
    /*                                                      */
    /*         Copyright (C), 1993  SEIKO EPSON Corp.       */
    /*         ALL RIGHTS RESERVED                          */
    /*                                                      */
    /*                                                      */
    /*  file name : float.h                                 */
    /*                                                      */
    /*  Revision history                                    */
    /*      93/12/17    first release       S.Akaiwa        */
    /*                                                      */
    /*                                                      */
    /********************************************************/

#ifndef _FLOAT_H
#define _FLOAT_H

#define FLT_RADIX       2
#define FLT_ROUNDS      1

#define FLT_MANT_DIG    24

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
#define FLT_EPSILON     1.19209290E-07
#endif

#define FLT_EPSILON     1.19209290E-07F
// CHG K.Watanabe 2008/5/7 <<<<<<<

#define FLT_DIG         6
#define FLT_MIN_EXP     (-125)

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
#define FLT_MIN         1.17549435E-38
#endif

#define FLT_MIN         1.17549435E-38F
// CHG K.Watanabe 2008/5/7 <<<<<<<

#define FLT_MIN_10_EXP  (-37)
#define FLT_MAX_EXP     (+128)

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
#define FLT_MAX         3.40282347E+38
#endif

#define FLT_MAX         3.40282347E+38F
// CHG K.Watanabe 2008/5/7 <<<<<<<

#define FLT_MAX_10_EXP  (+38)

#define DBL_MANT_DIG    53
#define DBL_EPSILON     2.2204460492503131E-16
#define DBL_DIG         15
#define DBL_MIN_EXP     (-1021)
#define DBL_MIN         2.2250738585072014E-308
#define DBL_MIN_10_EXP  (-307)
#define DBL_MAX_EXP     (+1024)
#define DBL_MAX         1.7976931348623157E+308
#define DBL_MAX_10_EXP  (+308)

#define LDBL_MANT_DIG    53

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
#define LDBL_EPSILON     2.2204460492503131E-16
#endif

#define LDBL_EPSILON     2.2204460492503131E-16L
// CHG K.Watanabe 2008/5/7 <<<<<<<

#define LDBL_DIG         15
#define LDBL_MIN_EXP     (-1021)

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
#define LDBL_MIN         2.2250738585072014E-308
#endif

#define LDBL_MIN         2.2250738585072014E-308L
// CHG K.Watanabe 2008/5/7 <<<<<<<

#define LDBL_MIN_10_EXP  (-307)
#define LDBL_MAX_EXP     (+1024)

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
#define LDBL_MAX         1.7976931348623157E+308
#endif

#define LDBL_MAX         1.7976931348623157E+308L
// CHG K.Watanabe 2008/5/7 <<<<<<<

#define LDBL_MAX_10_EXP  (+308)

#endif  /* _FLOAT_H */
