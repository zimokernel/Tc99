/*************************************************************************
	> File Name: string.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 六 5/10 22:14:44 2016
 ************************************************************************/

#ifndef _STRING_H
#define _STRING_H

#ifdef __cplusplus
extern "C" {
#endif

#include <system/types/null.h>
#include <system/types/size_t.h>

void  *memcpy(void *restrict str, const void *restrict dest, size_t n);
 
void  *memmove(void *str, const void *dest, size_t n);

char  *strcpy(char *restrict str, const char *restrict dest);

char  *strncpy(char *restrict str, const char *restrict dest, size_t n);

char  *strcat(char *restrict src, const char *restrict dest);

char  *strncat(char *restrict src, const char *restrict dest, size_t n);

int memcmp(const void *str, const void *dest, size_t n);

int strcmp(const char *str1, const char *str2);

int strcoll(const char *str, const char *dest);

int strncmp(const char *str, const char *dest, size_t n);

size_t  strxfrm(char *restrict str, const char *restrict dest, size_t n);

void  *memchr(const void *s, int c, size_t n);

char  *strchr(const char *str, int c);

size_t  strcspn(const char *str1, const char *str2);

char  *strpbrk(const char *str1, const char *str2);
    
char  *strrchr( const char *s, int c );

size_t  strspn(const char *str1, const char *str2);

char  *strstr(const char *haystack, const char *needle);

char  *strtok( char *restrict str, const char *restrict delim );

void  *memset(void *s, int c, size_t n);

char  *strerror(int errnum);

size_t  strlen(const char *s);

#ifdef __cplusplus
}
#endif


#endif
