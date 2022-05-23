#include "main.h"
/**
 * str_loct - prints long decimal in octal
 * @vl: list
 * @buf: buffer
 * @j: index
 * Return: number of characters
 */
int str_loct(va_list vl, char *buf, unsigned int j)
{
	long int int_input, i, isnegative, count, first_digit;
	char *octal, *binary;

	int_input = va_arg(vl, long int);
	isnegative = 0;
	if (int_input == 0)
	{
		j = str_cpy(buf, '0', j);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}

	binary = malloc(sizeof(char) * (64 + 1));
	binary = binary_array(binary, int_input, isnegative, 64);
	octal = malloc(sizeof(char) * ( 22 + 1));
	octal = long_oct_array(binary, octal);

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
