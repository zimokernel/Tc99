/*************************************************************************
	> File Name: stdbool.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 11:20:22 2016
 ************************************************************************/

#ifndef _STDBOOL_H
#define _STDBOOL_H

#ifdef __cplusplus
extern "C" {
#endif
	
#if __STDC_VERSION__ < 199901L && __GNUC__ < 3
	
typedef	int _Bool;
	
#endif
	
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
	
#define __bool_true_false_are_defined   1
	
#ifdef __clang__
#pragma clang diagnostic pop
#endif
	
#define true                            1
#define false                           0
#define bool							_Bool
	
#ifdef __cplusplus
}
#endif

#endif
