/*************************************************************************
> File Name: stdio.h
> Author: TTc
> Mail: focuskernel@gmail.com
> Created Time: 日 5/11 11:31:19 2016
 ************************************************************************/

#ifndef _STDIO_H
#define _STDIO_H

#ifdef __cplusplus
extern "C" {
#endif

#include <system/types/null.h>
#include <system/types/size_t.h>
#include <system/types/va_list.h>
#include <system/types/fpos_t.h>
#include <system/types/file.h>

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif

#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#define BUFSIZ 1024
#define EOF (-1)

#define FOPEN_MAX   20
#define FILENAME_MAX1024

#define L_tmpnam    1024

#include <system/types/seek_set.h>
#include <system/types/seek_cur.h>
#include <system/types/seek_end.h>

#define TMP_MAX0xFFFF

#define stderr __TOS_Lib_C99_stderr_p
#define stdin  __TOS_Lib_C99_stdin_p
#define stdout __TOS_Lib_C99_stdout_p

extern FILE *__TOS_Lib_C99_stderr_p;
extern FILE *__TOS_Lib_C99_stdin_p;
extern FILE *__TOS_Lib_C99_stdout_p;

int remove(const char *filename);
	
int rename(const char *old, const char *new);
	
FILE *tmpfile(void);
	
char *tmpnam(char *s);
	
int fclose(FILE *stream);
	
int fflush(FILE *stream);
	
FILE *fopen(const char *restrict filename, const char *restrict mode);
	
FILE *freopen(const char *restrict filename, const char *restrict mode, FILE *restrict stream);
	
void setbuf(FILE *restrict stream, char *restrict buf);
	
int setvbuf(FILE *restrict stream, char *restrict buf, int mode, size_t size);
	
int fprintf(FILE *restrict stream, const char *restrict format, ...);
	
int fscanf(FILE *restrict stream, const char *restrict format, ...);
	
int printf(const char *restrict format, ...);
	
int scanf(const char *restrict format, ...);
	
int snprintf(char *restrict s, size_t n, const char *restrict format, ...);
	
int sprintf(char *restrict s, const char *restrict format, ...);
	
int sscanf(const char *restrict s, const char *restrict format, ...);
	
int vfprintf(FILE *restrict stream, const char *restrict format, va_list arg);
	
int vfscanf(FILE *restrict stream, const char *restrict format, va_list arg);
	
int vprintf(const char *restrict format, va_list arg);
	
int vscanf(const char *restrict format, va_list arg);
	
int vsnprintf(char *restrict s, size_t n, const char *restrict format, va_list arg);
	
int vsprintf(char *restrict s, const char *restrict format, va_list arg);
	
int vsscanf(const char *restrict s, const char *restrict format, va_list arg);
	
int fgetc(FILE *stream);
	
char *fgets(char *restrict s, int n, FILE *restrict stream);
	
int fputc(int c, FILE *stream);
	
int fputs(const char *restrict s, FILE *restrict stream);
	
int getc(FILE *stream);
	
int getchar(void);
	
char *gets(char *s);
	
int putc(int c, FILE *stream);
	
int putchar(int c);
	
int puts(const char *s);
	
int ungetc(int c, FILE *stream);
	
size_t fread(void *restrict ptr, size_t size, size_t nmemb, FILE *restrict stream);
	
size_t fwrite(const void *restrict ptr, size_t size, size_t nmemb, FILE *restrict stream);
	
int fgetpos(FILE *restrict stream, fpos_t *restrict pos);
	
int fseek(FILE *stream, long int offset, int whence);
	
int fsetpos(FILE *stream, const fpos_t *pos);
	
long int ftell(FILE *stream);
	
void rewind(FILE *stream);
	
void clearerr(FILE *stream);
	
int feof(FILE *stream);
	
int ferror(FILE *stream);
	
void perror(const char *s);

#ifdef __cplusplus
}
#endif

#endif
