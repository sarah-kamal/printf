#ifndef MAIN_H
#define MAIN_H

#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdarg.h>
#include<unistd.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct mod
{
	char mod;
	int (*f)(size_t *size, va_list arg);
} mod_t;


int _printf(const char *format, ...);
int switches(va_list args,char c, size_t *size);

int count_chars(int num);
int checkifoct(int num);
int dec2oct(int num);
int print_ptr(size_t *size, va_list arg);
char *inttostring(int x);
int print_string(size_t *size, va_list arg);
int print_binary(size_t *size, va_list arg);
int print_char(size_t *size, va_list arg);
int print_int(size_t *size, va_list arg);
int print_prec(size_t *size, va_list arg);
int print_dec(size_t *size, va_list arg);
int print_unsigned(size_t *size, va_list arg);
int print_octal(size_t *size, va_list arg);
int print_hexupp(size_t *size, va_list  arg);
int print_hexlow(size_t *size, va_list arg);
int print_mod_string(size_t *size, va_list arg);

int count_chars(int num);
char *uninttostring(unsigned int l);
char *convert_to_base(va_list arg, size_t *size, unsigned int base);
void str_to_lower(char *str);
char *conv_bas(int num, int base, int precision);
#endif
