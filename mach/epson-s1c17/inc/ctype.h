
/*
        Copyright (C), 1993 SEIKO EPSON Corp.
                ALL RIGHTS RESERVED
 
        file name : ctype.h
 
 
        revision history
                1st release     1993/10/1       mizutani
                change prototype definition
                                1993/12/17      shinozuka
                prototypes changed  to revoke comments of parameters
                                 2008/5/7       K.Watanabe
*/

#ifndef _CTYPE
#define _CTYPE

// CHG K.Watanabe 2008/5/7 >>>>>>>
#if 0
int isalnum( /* int */ ) ;
int isalpha( /* int */ ) ;
int iscntrl( /* int */ ) ;
int isdigit( /* int */ ) ;
int isgraph( /* int */ ) ;
int islower( /* int */ ) ;
int isprint( /* int */ ) ;
int ispunct( /* int */ ) ;
int isspace( /* int */ ) ;
int isupper( /* int */ ) ;
int isxdigit( /* int */ ) ;
int tolower( /* int */ ) ;
int toupper( /* int */ ) ;
#endif



int isalnum( int );
int isalpha( int );
int iscntrl( int );
int isdigit( int );
int isgraph( int );
int islower( int );
int isprint( int );
int ispunct( int );
int isspace( int );
int isupper( int );
int isxdigit( int );
int tolower( int );
int toupper( int );
// CHG K.Watanabe 2008/5/7 <<<<<<<

#endif
