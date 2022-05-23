#include "main.h"

/**
 * str_pint - print integer with plus
 * @vl: list
 * @buf: buffer pointer
 * @j: index
 * Return: number of characters printed
 */
int str_pint(va_list vl, char *buf, unsigned int j)
{
	int input;
	unsigned int in, temp, i, div;

	input = va_arg(vl, int);
	if (input < 0)
	{
		in = input * -1;
		j = str_cpy(buf, '-', j);
	}
	else
	{
		in = input;
		j = str_cpy(buf, '+', j);
	}
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
	return (i + 1);
}
