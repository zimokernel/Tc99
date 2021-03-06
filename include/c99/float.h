/*************************************************************************
	> File Name: float.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 10:57:08 2016
 ************************************************************************/

#ifndef _FLOAT_H
#define _FLOAT_H

#ifdef __cplusplus
extern "C" {
#endif
	
#include <system/types/flt_eval_method.h>
	
#define FLT_ROUNDS          1
	
#define FLT_RADIX           2
	
#define DECIMAL_DIG         10
	
#define FLT_MANT_DIG        24
#define DBL_MANT_DIG        53
#define LDBL_MANT_DIG       DBL_MANT_DIG
	
#define FLT_DIG             6
#define DBL_DIG             15
#define LDBL_DIG            DBL_DIG
	
#define FLT_MIN_EXP         (-125)
#define DBL_MIN_EXP         (-1021)
#define LDBL_MIN_EXP        DBL_MIN_EXP
	
#define FLT_MIN_10_EXP      (-37)
#define DBL_MIN_10_EXP      (-307)
#define LDBL_MIN_10_EXP     DBL_MIN_10_EXP
	
#define FLT_MAX_EXP         128
#define DBL_MAX_EXP         1024
#define LDBL_MAX_EXP        DBL_MAX_EXP
	
#define FLT_MAX_10_EXP      38
#define DBL_MAX_10_EXP      308
#define LDBL_MAX_10_EXP     DBL_MAX_10_EXP
	
#define FLT_MAX             3.40282347e+38F
#define DBL_MAX             1.7976931348623157e+308
#define LDBL_MAX            DBL_MAX
	
#define FLT_EPSILON         1.1920929e-07F
#define DBL_EPSILON         2.2204460492503131e-16
#define LDBL_EPSILON        DBL_EPSILON
	
#define FLT_MIN             1.17549435e-38F
#define DBL_MIN             2.2250738585072014e-308
#define LDBL_MIN            DBL_MIN
	
#ifdef __cplusplus
}
#endif

#endif

