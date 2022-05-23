#include "main.h"

/**
 * str_lint - print long integer
 * @vl: list
 * @buf: buffer pointer
 * @j: index
 * Return: number of characters
 */
int str_lint(va_list vl, char *buf, unsigned int j)
{
	long int input;
	unsignd long int int_in, temp, i, div, isneg;

	input = va_arg(vl, long int);
	isneg = 0;
	if (input < 0)
	{
		int_in = input * -1;
		j = str_cpy(buf, '-', j);
		isneg = 1;
	}
	else
	{
		int_in = input;
	}
	temp = int_in;
	div  1;
	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		j = str_cpy(buf, ((int_in / div) % 10) + '0', j);
	}
	return (i + isneg);
}
