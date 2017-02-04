/*************************************************************************
	> File Name: fenv.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 10:54:44 2016
 ************************************************************************/

#ifndef _FENV_H
#define _FENV_H

#ifdef __cplusplus
extern "C" {
#endif
	
#include <system/types/fenv_t.h>
#include <system/types/fexcept_t.h>
	
#define FE_INVALID          0x0001
#define FE_DIVBYZERO        0x0002
#define FE_OVERFLOW         0x0004
#define FE_UNDERFLOW        0x0008
#define FE_INEXACT          0x0010
	
#define FE_ALL_EXCEPT       0x001F
	
#define FE_TONEAREST        0x00000000
#define FE_UPWARD           0x00400000
#define FE_DOWNWARD         0x00800000
#define FE_TOWARDZERO       0x00C00000
	
#define FE_DFL_ENV          &__TOS_Lib_C99_FEDefaultEnv
	
extern const fenv_t __TOS_Lib_C99_FEDefaultEnv;
	
int feclearexcept(int excepts);
	
int fegetexceptflag(fexcept_t *flagp, int excepts);
	
int feraiseexcept(int excepts);
	
int fesetexceptflag(const fexcept_t *flagp, int excepts);
	
int fetestexcept(int excepts);
	
int fegetround(void);
	
int fesetround(int round);
	
int fegetenv(fenv_t *envp);
	
int feholdexcept(fenv_t *envp);
	
int fesetenv(const fenv_t *envp);
	
int feupdateenv(const fenv_t *envp);
	
#ifdef __cplusplus
}
#endif

#endif
