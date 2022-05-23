#include "main.h"

/**
 * str_hex - prints decimal in hexadecimal
 * @vl: list
 * @buf: buffer
 * @j: index
 * Return: number of characters printed
 */
int str_hex(va_list vl, char *buf, unsigned int j)
{
	int input, i, isneg, count, first_digit;
	char *hexadecimal, *binary;

	input = va_arg(vl, int);
	isneg = 0;
	if (input == 0)
	{
		input = (input * -1) - 1;
		isneg = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, input, isneg, 32);
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 0, 8);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			j = str_cpy(buf, hexadecimal[i], j);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count);
}
