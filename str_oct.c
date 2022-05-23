#include "main.h"

/**
 * str_oct - prints decimal in octal
 * @vl : list
 * @buf: buffer
 * @j: index for buffer
 *
 * Return: number of characters printed
 */
int str_oct(va_list vl, char *buf, unsigned int j)
{
	int input, i, isneg, count, first_digit;
	char *octal, *binary;

	input = va_arg(vl, int);
	isneg = 0;
	if (input == 0)
	{
		j = str_cpy(buf, '0', j);
		return (1);
	}
	if (input < 0)
	{
		input  = (input * -1) - 1;
		isneg = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, input, isneg, 32);
	octal = malloc(sizeof(char) * (11 + 1));
	octal = oct_array(binary, octal);
	for (first_digit = i = count = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			j = str_cpy(buf, octal[i], j);
			count++;
		}
	}
	free(binary);
	free(octal);
	return (count);
}
