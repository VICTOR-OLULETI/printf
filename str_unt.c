#include "main.h"
/**
 * str_unt - prints unsigned int
 * @vl: list
 * @buf: buffer
 * @j: index
 * Return: number of characters
 */
int str_unt(va_list vl, char *buf, unsigned int j)
{
	unsigned int in, temp, i, div;

	in = va_arg(vl, unsigned int);
	temp = in;
	div = 1;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		j = str_cpy(buf, ((in / div) % 10) + '0', j);
	}
	return (i);
}
