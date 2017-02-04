/*************************************************************************
	> File Name: setjmp.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 11:16:41 2016
 ************************************************************************/

#ifndef _SETJMP_H
#define _SETJMP_H

#ifdef __cplusplus
extern "C" {
#endif
	
#include <system/types/jmp_buf.h>
	
int setjmp(jmp_buf env);
void longjmp(jmp_buf env, int val);
	
#ifdef __cplusplus
}
#endif

#endif
