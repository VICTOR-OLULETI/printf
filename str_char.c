#include "main.h"
#include <stdio.h>

/**
 * str_char - checks int type and copies into buffer
 * @vl: variable arguments
 * @buffer: buffer
 * @j: index of buffer
 *
 * Return: 1.
 */
int str_char(va_list vl, char *buffer, unsigned int j)
{
	char c;

	c = va_arg(vl, int);
	str_cpy(buffer, c, j);

	return (1);
}
