/*************************************************************************
	> File Name: ctype.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 10:48:29 2016
 ************************************************************************/

#ifndef _CTYPE_H
#define _CTYPE_H

#ifdef __cplusplus
extern "C" {
#endif
	
int isalnum(int c);
int isalpha(int c);
int isblank(int c);
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);
int tolower(int c);
int toupper(int c);
	
#ifdef __cplusplus
}
#endif


#endif
