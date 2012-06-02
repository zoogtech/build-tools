/********************************************************
 *
 *         Copyright (C), 1994  SEIKO EPSON Corp.
 *         ALL RIGHTS RESERVED
 *
 *      file name : time.h
 *
 *  This is include file for time functions.
 *
 *      Revision history
 *          93/12/17  1.st release       S.Akaiwa
 *              94/02/07  modify for 88  M.Kudo
 *      97/03/25  modify for 33          M.Kudo
 *      2008/5/7  prototypes changed to revoke extern 
 *                and comments of parameters   K.Watanabe
 *
 ********************************************************/

#ifndef _TIME_H
#define _TIME_H

#ifndef _SIZE_T
#define _SIZE_T

#ifdef __POINTER16

typedef unsigned int   size_t;         /* size of type */

#else

typedef unsigned long   size_t;         /* size of type */

#endif

#endif

typedef long            clock_t;    /* clock type */

typedef long            time_t;     /* time type */

#if !defined(NULL)
#  define NULL          ((void *)0L)/* null pointer */
#endif

struct  tm {                        /* time structure */
    int tm_sec;                     /* seconds (0-59) */
    int tm_min;                     /* minutes (0-59) */
    int tm_hour;                    /* hours (0-23) */
    int tm_mday;                    /* days (1-31) */
    int tm_mon;                     /* months (0-11) */
    int tm_year;                    /* year -1900 */
    int tm_wday;                    /* day of week (sun = 0) */
    int tm_yday;                    /* day of year (0 - 365) */
    int tm_isdst;                   /* non-zero if DST */
};

#define CLOCKS_PER_SEC  1000000     /* 1000000 cycles is 1 sec */

/* prototype definition */

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
extern  time_t      time( /* time_t * */ );
extern  time_t      mktime( /* struct tm * */ );
extern  struct tm   *gmtime( /* time_t * */ );
extern  double      difftime(/* time_t, time_t */);
extern  clock_t     clock(/* void */);
extern  struct tm   *localtime(/* const time_t * */);
extern  char        *asctime(/* const struct tm * */);
extern  char        *ctime(/* const time_t * */);
#endif



time_t      time( time_t * );
time_t      mktime( struct tm * );
struct tm   *gmtime( const time_t * );
double      difftime( time_t, time_t );
clock_t     clock( void );
struct tm   *localtime( const time_t * );
char        *asctime( const struct tm * );
char        *ctime( const time_t * );
// CHG K.Watanabe 2008/5/7 <<<<<<<

#endif  /* _TIME_H */
