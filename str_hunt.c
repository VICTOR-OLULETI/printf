#include "main.h"

/**
 * str_hunt - print short unsigned integer
 * @vl: list
 * @buf: buffer
 * @j: index
 * Return: number of characters
 */
int str_hunt(va_list vl, char *buf, unsigned int j)
{
	unsigned short int int_in, temp, i, div;

	int_in = va_arg(vl, unsigned int);
	temp = int_in;
	div = 1;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		j = str_cpy(buf, ((int_in / div) % 10) + '0', j);
	}
	return (i);
}
