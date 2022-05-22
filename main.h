#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

typedef struct op
{
	char *op;
	int (*func)(va_list, char *, unsigned int);
} op_t;

int _putchar(char c);
char *_strcpy(char *str1, char *str2);
char *__strrev(char *str);
char *__itoa(int i, char *strout, int base);
int print(const char *format, ...);
int buffer_output(char *buffer, unsigned int j);
unsigned int str_cpy(char *buffer, char c, unsigned int j);
int (*get_func(const char *s, int index))(va_list, char *, unsigned int);
int str_char(va_list vl, char *buffer, unsigned int j);
int str_str(va_list vl, char *buffer, unsigned int j);

#endif
