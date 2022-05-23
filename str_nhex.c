#include "main.h"

/**
 * str_nhex - print in hex with zero
 * @vl: list
 * @buf: buffer
 * @j: index
 * Return: number of characters
 */

int str_nhex(va_list vl, char *buf, unsigned int j)
{
	int input, i, isneg, count, first;
	char *hexadecimal, *binary;

	input = va_arg(vl, int);
	isneg = 0;
	if (input == 0)
	{
		j = str_cpy(buf, '0', j);
		return (1);
	}
	if (input < 0)
	{
		input = (input * -1) - 1;
		isneg = 1;
	}
	j = str_cpy(buf, '0', j);
	j = str_cpy(buf, 'x', j);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, input, isneg, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 0, 8);
	for (first = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first == 0)
			first = 1;
		if (first)
		{
			j = str_cpy(buf, hexadecimal[i], j);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (coutn + 2);
}
