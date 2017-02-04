/*************************************************************************
> File Name: stdlib.h
> Author: TTc
> Mail: focuskernel@gmail.com
> Created Time: 日 5/11 10:18:03 2016
 ************************************************************************/

#ifndef _STDLIB_H
#define _STDLIB_H

#ifdef __cplusplus
extern "C" {
#endif

    
#include <system/types/null.h>
#include <system/types/size_t.h>
#include <system/types/wchar_t.h>
#include <system/types/div_t.h>
#include <system/types/ldiv_t.h>
#include <system/types/lldiv_t.h>

#define EXIT_FAILURE            1
#define EXIT_SUCCESS            0

#define RAND_MAX				0x7FFFFFFF
#define MB_CUR_MAX              __TOS_LIB_C99_MB_CUR_MAX


extern int __TOS_LIB_C99_MB_CUR_MAX;

double  atof(const char *nptr);
	
int     atoi(const char *nptr);
	
long int atol(const char *nptr);
	
long long int  atoll(const char *nptr);
	
double  strtod(const char *restrict nptr, char **restrict endptr);
	
float   strtof(const char *restrict nptr, char **restrict endptr);
	
long double  strtold(const char *restrict nptr, char **restrict endptr);
	
long int strtol(const char *restrict nptr, char **restrict endptr, int base);
	
long long int strtoll(const char *restrict nptr, char **restrict endptr, int base);
	
unsigned long int strtoul(const char *restrict nptr, char **restrict endptr, int base);
	
unsigned long long int strtoull(const char *restrict nptr, char **restrict endptr, int base);
	
int     rand(void);
	
void    srand(unsigned int seed);
	
void  *calloc(size_t nmemb, size_t size);
	
void    free(void *ptr);
	
void  *malloc(size_t size);
	
void  *realloc(void *ptr, size_t size);
	
void    abort(void);
	
int     atexit(void (*func)(void));
	
void    exit(int status);
	
void    _Exit(int status);
	
char  *getenv(const char *name);
	
int     system(const char *string);
	
void  *bsearch(const void *key, const void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
	
void    qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
	
int     abs(int j);
	
long int labs(long int j);
	
long long int llabs(long long int j);
	
div_t   div(int numer, int denom);
	
ldiv_t  ldiv(long int numer, long int denom);
	
lldiv_t lldiv(long long int numer, long long int denom);
	
int     mblen(const char *s, size_t n);
	
int     mbtowc(wchar_t *restrict pwc, const char *restrict s, size_t n);
	
int     wctomb(char *s, wchar_t wc);
	
size_t  mbstowcs(wchar_t *restrict pwcs, const char *restrict s, size_t n);
	
size_t  wcstombs(char *restrict s, const wchar_t *restrict pwcs, size_t n);
	

#ifdef __cplusplus
}
#endif

#endif
