/*************************************************************************
	> File Name: locale.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 11:07:00 2016
 ************************************************************************/

#ifndef _LOCALE_H
#define _LOCALE_H

#ifdef __cplusplus
extern "C" {
#endif
	
#include <system/types/null.h>
#include <system/types/struct_lconv.h>
	
#define LC_ALL                      0
#define LC_COLLATE                  1
#define LC_CTYPE                    2
#define LC_MONETARY                 3
#define LC_NUMERIC                  4
#define LC_TIME                     5
	
char * setlocale(int category, const char * locale);
	
struct lconv * localeconv(void);
	
#ifdef __cplusplus
}
#endif


#endif
