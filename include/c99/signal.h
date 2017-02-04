/*************************************************************************
	> File Name: signal.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 11:17:31 2016
 ************************************************************************/

#ifndef _SIGNAL_H
#define _SIGNAL_H

#ifdef __cplusplus
extern "C" {
#endif
	
#include <system/types/sig_atomic_t.h>
	
#define SIG_DFL         ((void (*)(int))0)
#define SIG_ERR         ((void (*)(int))-1)
#define SIG_IGN         ((void (*)(int))1)
	
#define SIGINT          1
#define SIGILL          4
#define SIGABRT         6
#define SIGFPE          8
#define SIGSEGV         11
#define SIGTERM         15
	
void (* signal(int sig, void (* func)(int)))(int);
	
int raise(int sig);
	
#ifdef __cplusplus
}
#endif


#endif
