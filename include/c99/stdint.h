/*************************************************************************
	> File Name: stdint.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 11:22:05 2016
 ************************************************************************/

#ifndef _STDINT_H
#define _STDINT_H

#ifdef __cplusplus
extern "C" {
#endif
	
#include <system/types/int8_t.h>
#include <system/types/int16_t.h>
#include <system/types/int32_t.h>
#include <system/types/int64_t.h>
	
#include <system/types/uint8_t.h>
#include <system/types/uint16_t.h>
#include <system/types/uint32_t.h>
#include <system/types/uint64_t.h>
	
#include <system/types/int_least8_t.h>
#include <system/types/int_least16_t.h>
#include <system/types/int_least32_t.h>
#include <system/types/int_least64_t.h>
	
#include <system/types/uint_least8_t.h>
#include <system/types/uint_least16_t.h>
#include <system/types/uint_least32_t.h>
#include <system/types/uint_least64_t.h>
	
#include <system/types/int_fast8_t.h>
#include <system/types/int_fast16_t.h>
#include <system/types/int_fast32_t.h>
#include <system/types/int_fast64_t.h>
	
#include <system/types/uint_fast8_t.h>
#include <system/types/uint_fast16_t.h>
#include <system/types/uint_fast32_t.h>
#include <system/types/uint_fast64_t.h>
	
#include <system/types/intptr_t.h>
#include <system/types/uintptr_t.h>
	
#include <system/types/intmax_t.h>
#include <system/types/uintmax_t.h>
	
#define INT8_MAX                0x7F
#define INT16_MAX               0x7FFF
#define INT32_MAX               0x7FFFFFFF
#define INT64_MAX               0x7FFFFFFFFFFFFFFFLL
	
#define INT8_MIN                -0x80
#define INT16_MIN               -0x8000
#define INT32_MIN               (-INT32_MAX - 1)
#define INT64_MIN               (-INT64_MAX - 1)
	
#define UINT8_MAX               0xFF
#define UINT16_MAX              0xFFFF
#define UINT32_MAX              0xFFFFFFFFU
#define UINT64_MAX              0xFFFFFFFFFFFFFFFFULL
	
#define INT_LEAST8_MIN          INT8_MIN
#define INT_LEAST16_MIN         INT16_MIN
#define INT_LEAST32_MIN         INT32_MIN
#define INT_LEAST64_MIN         INT64_MIN
	
#define INT_LEAST8_MAX          INT8_MAX
#define INT_LEAST16_MAX         INT16_MAX
#define INT_LEAST32_MAX         INT32_MAX
#define INT_LEAST64_MAX         INT64_MAX
	
#define UINT_LEAST8_MAX         UINT8_MAX
#define UINT_LEAST16_MAX        UINT16_MAX
#define UINT_LEAST32_MAX        UINT32_MAX
#define UINT_LEAST64_MAX        UINT64_MAX
	
#define INT_FAST8_MIN           INT8_MIN
#define INT_FAST16_MIN          INT16_MIN
#define INT_FAST32_MIN          INT32_MIN
#define INT_FAST64_MIN          INT64_MIN
	
#define INT_FAST8_MAX           INT8_MAX
#define INT_FAST16_MAX          INT16_MAX
#define INT_FAST32_MAX          INT32_MAX
#define INT_FAST64_MAX          INT64_MAX
	
#define UINT_FAST8_MAX          UINT8_MAX
#define UINT_FAST16_MAX         UINT16_MAX
#define UINT_FAST32_MAX         UINT32_MAX
#define UINT_FAST64_MAX         UINT64_MAX
	
#define INTMAX_MIN              INT64_MIN
#define INTMAX_MAX              INT64_MAX
#define UINTMAX_MAX             UINT64_MAX
	
#ifdef __LP64__
	
#define INTPTR_MIN          INT64_MIN
#define INTPTR_MAX          INT64_MAX
#define UINTPTR_MAX         UINT64_MAX
	
#define SIZE_MAX            UINT64_MAX
	
#define PTRDIFF_MIN         INT64_MIN
#define PTRDIFF_MAX         INT64_MAX
	
#else
	
#define INTPTR_MIN          INT32_MIN
#define INTPTR_MAX          INT32_MAX
#define UINTPTR_MAX         UINT32_MAX
	
#define SIZE_MAX            UINT32_MAX
	
#define PTRDIFF_MIN         INT32_MIN
#define PTRDIFF_MAX         INT32_MAX
	
#endif
	
#ifdef __WCHAR_MAX__
	
#define WCHAR_MAX           __WCHAR_MAX__
	
#else
	
#define WCHAR_MAX           0x7FFFFFFF
	
#endif
	
#if WCHAR_MAX == 0xFFFF
	
#define WCHAR_MIN           0
	
#else
	
#define WCHAR_MIN           (-WCHAR_MAX - 1)
	
#endif
	
#define WINT_MIN                INT32_MIN
#define WINT_MAX                INT32_MAX
	
#define SIG_ATOMIC_MIN          INT32_MIN
#define SIG_ATOMIC_MAX          INT32_MAX
	
#define INT8_C(_v_)           (_v_)
#define INT16_C(_v_)          (_v_)
#define INT32_C(_v_)          (_v_)
#define INT64_C(_v_)          (_v_  ## LL)
	
#define UINT8_C(_v_)          (_v_  ## U)
#define UINT16_C(_v_)         (_v_  ## U)
#define UINT32_C(_v_)         (_v_  ## U)
#define UINT64_C(_v_)         (_v_  ## ULL)
	
#define INTMAX_C(_v_)         (_v_  ## LL)
#define UINTMAX_C(_v_)        (_v_  ## ULL)
	
#ifdef __cplusplus
}
#endif

#endif
