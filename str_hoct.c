#include "main.h"

/**
 * str_hoct - long decimal in octal
 * @vl: list
 * @buf: buffer
 * @j: index
 * Return: number of characters
 */
int str_hoct(va_list vl, char *buf, unsigned int j)
{
	short int input, i, isneg, count, first_num;
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
		input = (input * -1) - 1;
		isneg = 1;
	}
	binary = malloc(sizeof(char) * (16 + 1));
	binary = binary_array(binary, input, isneg, 16);
	octal = malloc(sizeof(char) * (6 + 1));
	octal = short_oct_array(binary, octal);
	for (first_num = i = count = 0; octal[i]; i++)
	{
		if (octal[i] != '0' && first_num == 0)
			first_num = 1;
		if (first_num)
		{
			j = str_cpy(buf, octal[i], j);
			count++;
		}
	}
	free(binary);
	free(octal);
	return (count);
}
