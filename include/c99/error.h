/*************************************************************************
	> File Name: error.h
	> Author: TTc
	> Mail: focuskernel@gmail.com
	> Created Time: 日 5/11 10:50:11 2016
 ************************************************************************/

#ifndef _ERROR_H
#define _ERROR_H

#ifdef __cplusplus
extern "C" {
#endif
	
#define EDOM        0x01    /* Numerical argument out of domain */
#define EILSEQ		0x02    /* Illegal byte sequence */
#define	ERANGE		0x03    /* Result too large */
	
extern int errno;
	
#ifdef __cplusplus
}
#endif

#endif
