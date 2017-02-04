/*************************************************************************
	> File Name: assert.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 六 5/10 21:49:40 2016
 ************************************************************************/

#undef assert

#ifdef NDEBUG
     #define assert(_e_)   ((void )0)
#else

    #define assert(_e_)   \
         (_e_) ? ((void)0) :  \
         (__TOS_Lib_C99_AssertFail(#_e_, __FILE__, __LINE__, __func__))

#endif


#ifndef _ASSERT_H
#define _ASSERT_H

#ifdef __cplusplus
extern "C"
#endif

extern void __TOS_Lib_C99_AssertFail(char * expression,
                        char * file, int line, char * func);


#ifdef __cplusplus
}
#endif

#endif
