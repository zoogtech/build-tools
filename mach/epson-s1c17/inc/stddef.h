/********************************************************
 *
 *         Copyright (C), 2007  SEIKO EPSON Corp.
 *         ALL RIGHTS RESERVED
 *
 *      file name : stddef.h
 *
 *  This is include file for the basic definition.
 *
 *      Revision history
 *          2007/8/27  1.st release      K.Watanabe
 *          2008/5/7   changed the definition of size_t  K.Watanabe
 *
 ********************************************************/

#ifndef STDDEF_H
#define STDDEF_H

#ifdef __POINTER16

typedef int   ptrdiff_t;         /* size of type */

#else

typedef long   ptrdiff_t;         /* size of type */

#endif

#ifndef _SIZE_T
#define _SIZE_T

#ifdef __POINTER16

typedef unsigned int   size_t;         /* size of type */

#else

typedef unsigned long   size_t;         /* size of type */

#endif

#endif


#ifndef NULL
#define NULL         ((void *)0)
#endif

#define offsetof(type,id) ((size_t)&(((type *)0)->id))

#ifndef _WCHART
#define _WCHART
typedef unsigned short  _Wchart;
typedef _Wchart wchar_t;
#endif

#endif
