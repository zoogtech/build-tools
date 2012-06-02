    /********************************************************/
    /*                                                      */
    /*                                                      */
    /*         Copyright (C), 1993-2006 SSEIKO EPSON Corp.  */
    /*         ALL RIGHTS RESERVED                          */
    /*                                                      */
    /*                                                      */
    /*  file name : limits.h                                */
    /*                                                      */
    /*  Revision history                                    */
    /*      93/12/17    first release       S.Akaiwa        */
    /*    2001/12/19    INT_MIN,LONG_MIN,ULONG_MAX T.Tazaki */
    /*    2002/07/31    T.Tazaki                            */
    /*    2006/10/19    T.Tazaki INT_MINLONG_MIN,LONG_MAX 	*/
	/*					        	modify					*/
    /*							 LLONG_MAX,LLONG_MIN		*/
	/*							 ULLONG_MAX add				*/
    /*                                                      */
    /********************************************************/

//#ifndef _LIMITS_H
//#define _LIMITS_H
/* We use _GCC_LIMITS_H_ because we want this not to match
   any macros that the system's limits.h uses for its own purposes.  */
#ifndef _GCC_LIMITS_H_  /* Terminated in limits.h.  */
#define _GCC_LIMITS_H_

#define MB_LEN_MAX  1               /* multibyte characters max */

#define CHAR_BIT    8               /* number of bits in char */

#define CHAR_MIN    (-128)          /* min value a char */
#define CHAR_MAX    127             /* max value a char */

#define SCHAR_MIN   (-128)          /* min value a signed char */
#define SCHAR_MAX   127             /* max value a signed char */ 

#define UCHAR_MAX   255             /* max value a unsigned char */

#define SHRT_MIN    (-32768)        /* min value a signed short */
#define SHRT_MAX    32767           /* max value a signed short */

/* Bug fix t.tazaki 2001.12.19
#define INT_MIN     (-2147483648)
*/

#if 0
/* Bug fix t.tazaki 2001.12.19 */
#define INT_MIN     0x80000000     /* min value a signed int */
#define INT_MAX     2147483647      /* max value a signed int */

#define UINT_MAX    4294967295      /* max value a unsigned int */
#endif


/* change, c17 spec 2006.02.09 m.kakinuma */
//#define INT_MIN     0x8000     		/* min value a signed int */
#define INT_MAX     32767      		/* max value a signed int */
#define INT_MIN     (-INT_MAX-1)    /* min value a signed int */     /* change T.Tazaki 2006/10/16 */
//#define INT_MIN     -32768     		/* min value a signed int */ /* change T.Tazaki 2006/10/16 */

#define UINT_MAX    65535      		/* max value a unsigned int */

#define USHRT_MAX   65535           /* max value a unsigned short */

/* Bug fix t.tazaki 2001.12.19
#define LONG_MIN    (-2147483648)
*/
/* Bug fix t.tazaki 2001.12.19 */

/* Modify T.Tazaki 2006/10/12 >>> */
# if 0
#define LONG_MIN    0x80000000      /* min value a signed long */ 
#define LONG_MAX    2147483647      /* max value a signed long */
#endif

#define LONG_MAX    2147483647      /* max value a signed long */
#define LONG_MIN    (-LONG_MAX-1)   /* min value a signed long */
/* Modify T.Tazaki 2006/10/12 <<< */

/* Bug fix t.tazaki 2001.12.19
#define ULONG_MAX   4294967295      
*/
/* t.tazaki 2001.12.19 */
#define ULONG_MAX   4294967295UL    /* max value a unsigned long */


/* ADD T.Tazaki >>>>>>> */
#define LLONG_MAX    0x7fffffffffffffffLL      /* max value a signed long long */
#define LLONG_MIN    (-LLONG_MAX - 1LL)        /* min value a signed long long */
#define ULLONG_MAX   0xffffffffffffffffULL     /* max value a unsigned long long */
/* ADD T.Tazaki <<<<<<< */

//#endif  _LIMITS_H

#else /* not _GCC_LIMITS_H_ */

#ifdef _GCC_NEXT_LIMITS_H
 #include_next <limits.h>           /* recurse down to the real one */
#endif

#endif /* not _GCC_LIMITS_H_ */
