#include "main.h"

/**
 * str_int - prints an integer
 * @vl: list
 * @buf: buffer
 * @j: index of buffer
 * Return: number of characters
 */
int str_int(va_list vl, char *buf, unsigned int j)
{
	int input;
	unsigned int input_in, temp, i, div, isneg;

	input = va_arg(vl, int);
	isneg = 0;
	if (input < 0)
	{
		input_in = input * -1;
		j = str_cpy(buf, '-', j);
		isneg = 1;
	}
	else
	{
		input_in = input;
	}
	temp = input_in;
	div = 1;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		j = str_cpy(buf, ((input_in / div) % 10) + '0', j);
	}
	return (i + isneg);
}
