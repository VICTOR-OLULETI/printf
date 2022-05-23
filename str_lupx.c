#include "main.h"

/**
 * str_lupx - prints a long decimal in hexadecimal
 * @vl: list
 * @buf: buffer
 * @j: index
 * Return: number of characters
 */

int str_lupx(va_list vl, char *buf, unsigned int j)
{
	long int input, i, isneg, count, first;
	char *hexadecimal, *binary;

	input = va_arg(vl, long int);
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

	binary = malloc(sizeof(char) * (64 + 1));
	binary = binary_array(binary, input, isneg, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 1, 16);
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
	return (count);
}
