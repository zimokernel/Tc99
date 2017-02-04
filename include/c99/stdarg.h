/*************************************************************************
	> File Name: stdarg.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 11:19:13 2016
 ************************************************************************/

#ifndef _STDARG_H
#define _STDARG_H

#ifdef __cplusplus
extern "C" {
#endif
	
#include <system/types/va_list.h>
	
#ifdef __clang__
	
#define va_start(_ap_, _lastarg_)     __builtin_va_start(_ap_, _lastarg_)
#define va_arg(_ap_, _type_)          __builtin_va_arg(_ap_, _type_)
#define va_copy(_dst_, _src_)         __builtin_va_copy(_dst_, _src_)
#define va_end(_ap_)                  __builtin_va_end(_ap_)
	
#else
	
#define va_start(_ap_, _lastarg_)     _ap_ = (char *) & _lastarg_ + sizeof(int)
#define va_arg(_ap_, _type_)          *(_type_ *)(_ap_ += sizeof(_type_), _ap_ - sizeof(_type_))
#define va_copy(_dst_, _src_)         ((void)((_dst_) = (_src_)))
#define va_end(_ap_)                  _ap_ = (va_list)0
	
#endif
	
#ifdef __cplusplus
}
#endif


#endif
