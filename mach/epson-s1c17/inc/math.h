    /********************************************************************/
    /*                                                                  */
    /*  math.h                                                          */
    /*       version 0        1992/08/31        K.Shinozuka             */
    /*       modified         1997/03/17        T.Katahira              */
    /*       change function declaration to the ANSI style              */
    /*                                                                  */
    /*       prototypes changed to revoke extern                        */
    /*                        2007/5/7          K.Watanabe              */
    /*                                                                  */
    /*  math.h contains followings.                                     */
    /*    declarations of math-functions                                */
    /*    declarations of special codes and useful numbers              */
    /*                                                                  */
    /********************************************************************/

#ifndef MATH_H 
#define MATH_H

#ifdef UNIX
#include "errno.h"
#else
#include <errno.h>
#endif

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
extern double acos( double );
extern double asin( double );
extern double atan( double );
extern double atan2( double, double );
extern double ceil( double );
extern double cos( double );
extern double cosh( double );
extern double exp( double );
extern double fabs( double );
extern double floor( double );
extern double fmod( double, double );
extern double frexp( double, int * );
extern double ldexp( double, int );
extern double log( double );
extern double log10( double );
extern double modf( double, double * );
extern double pow( double, double );
extern double sin( double );
extern double sinh( double );
extern double sqrt( double );
extern double tan( double );
extern double tanh( double );
extern double __kernel_sin(double , double , int );
extern double __kernel_cos(double , double );
extern double scalbn (double x, int n);
#endif



double acos( double );
double asin( double );
double atan( double );
double atan2( double, double );
double ceil( double );
double cos( double );
double cosh( double );
double exp( double );
double fabs( double );
double floor( double );
double fmod( double, double );
double frexp( double, int * );
double ldexp( double, int );
double log( double );
double log10( double );
double modf( double, double * );
double pow( double, double );
double sin( double );
double sinh( double );
double sqrt( double );
double tan( double );
double tanh( double );
double __kernel_sin(double , double , int );
double __kernel_cos(double , double );
double scalbn (double x, int n);
// CHG K.Watanabe 2008/5/7 <<<<<<<

#ifndef DBL_LNG_TYPE 

#define DBL_LNG_TYPE 

typedef union {
    struct {
#ifdef BIG_ENDIAN
        unsigned long _LL;
        unsigned long _LH;
#else  
        unsigned long _LH;
        unsigned long _LL;
#endif 
    } st;
    double _D;
} DBL_LNG;

#endif

#endif
