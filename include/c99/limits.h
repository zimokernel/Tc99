/*************************************************************************
	> File Name: limits.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 11:05:01 2016
 ************************************************************************/

#ifndef _LIMITS_H
#define _LIMITS_H

#ifdef __cplusplus
extern "C" {
#endif
	
#define CHAR_BIT            0x08
	
#define UCHAR_MAX           (SCHAR_MAX * 2   + 1 )
#define SCHAR_MIN           (-SCHAR_MAX - 1)
#define SCHAR_MAX           0x7F
	
#ifdef __CHAR_UNSIGNED__
	
#define CHAR_MIN			0x00
#define CHAR_MAX			UCHAR_MAX
	
#else
	
#define CHAR_MIN			SCHAR_MIN
#define CHAR_MAX			SCHAR_MAX
	
#endif
	
#define MB_LEN_MAX          0x01
	
#define USHRT_MAX           (SHRT_MAX * 2 + 1)
#define SHRT_MIN            (-SHRT_MAX  - 1)
#define SHRT_MAX            0x7FFF
	
#define UINT_MAX            (INT_MAX * 2U + 1U)
#define INT_MIN             (-INT_MAX - 1)
#define INT_MAX             0x7FFFFFFF
	
#define ULONG_MAX           (LONG_MAX * 2UL + 1UL)
#define LONG_MIN            (-LONG_MAX - 1L)
	
#ifdef __LP64__
	
#define LONG_MAX			0x7FFFFFFFFFFFFFFFL
	
#else
	
#define LONG_MAX			0x7FFFFFFF
	
#endif
	
#if __STDC_VERSION__ >=		199901
	
#define LLONG_MAX			0x7FFFFFFFFFFFFFFFL
#define LLONG_MIN			(-LLONG_MAX - 1LL)
#define ULLONG_MAX			(LLONG_MAX * 2ULL + 1ULL)
	
#endif
	
#ifdef __cplusplus
}
#endif


#endif
