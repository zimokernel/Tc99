/*************************************************************************
	> File Name: stddef.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 11:21:22 2016
 ************************************************************************/

#ifndef _STDDEF_H
#define _STDDEF_H

#ifdef __cplusplus
extern "C" {
#endif
	
#include <system/types/null.h>
#include <system/types/size_t.h>
#include <system/types/wchar_t.h>
#include <system/types/ptrdiff_t.h>
	
#define offsetof(_type_, _field_)  ((size_t)(&((_type_ *) 0)->_field_))
	
#ifdef __cplusplus
}
#endif

#endif
