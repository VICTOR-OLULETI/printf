#include "main.h"

/**
 * str_nupx - prints in uppercase hex
 * @vl: list
 * @buf: buffer
 * @j: index
 * Return: number of characters
 */

int str_nupx(va_list vl, char *buf, unsigned int j)
{
	int int_input, i, isneg, count, first;
	char *hexadecimal, *binary;

	int_input = va_arg(vl, int);
	isneg = 0;
	if (int_input == 0)
	{
		j = str_cpy(buf, '0', j);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isneg = 1;
	}
	j = str_cpy(buf, '0', j);
	j = str_cpy(buf, 'X', j);
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, int_input, isneg, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 1, 8);
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
	return (count + 2);
}
