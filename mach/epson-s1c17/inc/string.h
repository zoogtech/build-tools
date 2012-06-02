/*
        Copyright (C), 1993 SEIKO EPSON Corp.
                ALL RIGHTS RESERVED
 
        file name : string.h
 
 
        revision history
                1st release     1993/10/1       mizutani
                modify to work on native environment
                                1993/12/17      shinozuka
                changed the prototype of some functions
                                2007/12/10     K.Watanabe
                prototypes changed to revoke comments of parameters
                                2008/5/7       K.Watanabe
*/

#ifndef _STRING_H
#define _STRING_H

#ifndef NULL
#define NULL    0
#endif

#ifndef _SIZE_T
#define _SIZE_T

#ifdef __POINTER16

typedef unsigned int   size_t;         /* size of type */

#else

typedef unsigned long   size_t;         /* size of type */

#endif

#endif

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
extern void *memchr(const void *, int, size_t );
int memcmp( /* char *, char *, int */ ) ;
// CHG K.Watanabe 2007/12/10 >>>>>>>
#if 0
char *memcpy( /* char *, char *, int */ ) ;
char *memmove( /* char *, char *, int */ ) ;
char *memset( /* char *, int, int */ ) ;
#endif
void *memcpy( /* char *, char *, int */ ) ;
void *memmove( /* char *, char *, int */ ) ;
void *memset( /* char *, int, int */ ) ;
// CHG K.Watanabe 2007/12/10 <<<<<<<
char *strcat( /* char *, const char * */ ) ;
char *strchr( /* const char *, int */ ) ;
int strcmp( /* const char *, const char * */ ) ;
char *strcpy( /* char *, char * */ ) ;
size_t strcspn( /* const char *, const char * */ ) ;
char *strerror( /* int */ ) ;
size_t strlen( /* const char * */ ) ;
char *strncat( /* char *, const char *, size_t */ ) ;
int strncmp( /* const char *, const char *, size_t */ ) ;
char *strncpy( /* char *, const char *, size_t */ ) ;
char *strpbrk( /* const char *, const char * */ ) ;
char *strrchr( /* const char *, int */ ) ;
size_t strspn( /* const char *, const char * */ ) ;
char *strstr( /* const char *, const char * */ ) ;
char *strtok( /* char *, const char * */ ) ;
#endif



void *memchr(const void *, int, size_t );
int memcmp( const void *, const void *, size_t );
void *memcpy( void *, const void *, size_t );
void *memmove( void *, const void *, size_t );
void *memset( void *, int , size_t );
char *strcat( char *, const char * );
char *strchr( const char *, int );
int strcmp( const char *, const char * );
char *strcpy( char *, const char * );
size_t strcspn( const char *, const char * );
char *strerror( int );
size_t strlen( const char * );
char *strncat( char *, const char *, size_t );
int strncmp( const char *, const char *, size_t );
char *strncpy( char *, const char *, size_t );
char *strpbrk( const char *, const char * );
char *strrchr( const char *, int );
size_t strspn( const char *, const char * );
char *strstr( const char *, const char * ) ;
char *strtok( char *, const char * ) ;
// CHG K.Watanabe 2008/5/7 <<<<<<<
#endif
