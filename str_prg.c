#include "main.h"
#include <stdio.h>

/**
 * str_prg - writes the character to stdout
 * @vl: list
 * @buf: buffer pointer
 * @i: index
 * Return: on success 1.
 */

int str_prg(va_list vl __attribute((unused)), char *buf, unsigned int i)
{
	str_cpy(buf, '%', i);
	return (1);
}
