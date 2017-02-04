/*************************************************************************
> File Name: time.h
> Author: TTc
> Mail: focuskernel@gmail.com
> Created Time: 日 5/11 11:38:08 2016
 ************************************************************************/

#ifndef _TIME_H
#define _TIME_H

#ifdef __cplusplus
extern "C" {
#endif

#include <system/types/null.h>
#include <system/types/size_t.h>
#include <system/types/clock_t.h>
#include <system/types/time_t.h>
#include <system/types/struct_tm.h>

#define CLOCKS_PER_SEC 1000000

char *asctime(const struct tm *timeptr);
	
clock_t clock(void);
	
char *ctime(const time_t *timer);
	
double difftime(time_t time1, time_t time0);
	
struct tm *gmtime(const time_t *timer);
	
struct tm *localtime(const time_t *timer);
	
time_t mktime(struct tm *timeptr);
	
size_t strftime(char *restrict s, size_t maxsize, const char *restrict format, const struct tm *restrict timeptr);
	
time_t time(time_t *timer);

#ifdef __cplusplus
}
#endif

#endif
