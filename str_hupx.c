#include "main.h"

/**
 * str_hupx - prints a short decimal in hexadecimal
 * @vl: list
 * @buf: buffer
 * @j: index of buffer
 * Return: number of characters
 */

int str_hupx(va_list vl, char *buf, unsigned int j)
{
	short int int_input, i, isneg, count, first_num;
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
	binary = malloc(sizeof(char) * (16 + 1));
	binary = binary_array(binary, int_input, isneg, 16);
	hexadecimal = malloc(sizeof(char) * (4 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 1, 4);

	for (first_num = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_num == 0)
			first_num = 1;
		if (first_num)
		{
			j = str_cpy(buf, hexadecimal[i], j);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count);
}
