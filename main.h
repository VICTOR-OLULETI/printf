#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct op - struct for op_t functions
 * @op: identifier
 * @func: pointer
 *
 * Description: struct that stores pointers to a op_t
 * functions
 */

typedef struct operator
{
	char *op;
	int (*func)(va_list, char *, unsigned int);
} op_t;

int _putchar(char c);
char *_strcpy(char *str1, char *str2);
char *__strrev(char *str);
char *__itoa(int i, char *strout, int base);
int _printf(const char *format, ...);
int buffer_output(char *buffer, unsigned int j);
unsigned int str_cpy(char *buffer, char c, unsigned int j);
int (*get_func(const char *s, int index))(va_list, char *, unsigned int);
int identifier_size(const char *format, int index);
int str_char(va_list vl, char *buffer, unsigned int j);
int str_str(va_list vl, char *buffer, unsigned int j);
int str_prg(va_list __attribute__((unused)), char *, unsigned int);
int str_int(va_list vl, char *buf, unsigned int j);
int str_bnr(va_list vl, char *buf, unsigned int j);
int str_unt(va_list vl, char *buf, unsigned int j);
int str_oct(va_list vl, char *buf, unsigned int j);
int str_hex(va_list vl, char *buf, unsigned int j);
int str_upx(va_list vl, char *buf, unsigned int j);
int str_usr(va_list vl, char *buf, unsigned int j);
int str_add(va_list vl, char *buf, unsigned int j);
int str_rev(va_list vl, char *buf, unsigned int j);
int str_rot(va_list vl, char *buf, unsigned int j);
int str_lint(va_list vl, char *buf, unsigned int j);
int str_lunt(va_list vl, char *buf, unsigned int j);
int str_loct(va_list vl, char *buf, unsigned int j);
int str_lhex(va_list vl, char *buf, unsigned int j);
int str_lupx(va_list vl, char *buf, unsigned int j);
int str_hint(va_list vl, char *buf, unsigned int j);
int str_hunt(va_list vl, char *buf, unsigned int j);
int str_hoct(va_list vl, char *buf, unsigned int j);
int str_shex(va_list vl, char *buf, unsigned int j);
int str_hupx(va_list vl, char *buf, unsigned int j);
int str_pint(va_list vl, char *buf, unsigned int j);
int str_noct(va_list vl, char *buf, unsigned int j);
int str_nhex(va_list vl, char *buf, unsigned int j);
int str_nupx(va_list vl, char *buf, unsigned int j);
int str_sint(va_list vl, char *buf, unsigned int j);
char *binary_array(char *binary, long int num, int sign, int limit);
char *oct_array(char *bnr, char *oct);
char *long_oct_array(char *bnr, char *oct);
char *short_oct_array(char *bnr, char *oct);
char *hex_array(char *bnr, char *hex, int isupp, int limit);

#endif
