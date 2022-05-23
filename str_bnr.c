#include "main.h"

/**
 * str_bnr - prints decimal in binary
 * @vl: list
 * @buf: buffer
 * @j: index
 * Return: number of characters
 */
int str_bnr(va_list vl, char *buf, unsigned int j)
{
	int input, count, i, first_one, isnegative;
	char *binary;

	input = va_arg(vl, int);
	isnegative = 0;
	if (input == 0)
	{
		j = str_cpy(buf, '0', j);
		return (1);
	}
	if (input < 0)
	{
		input = (input * -1) - 1;
		isnegative = 1;
	}
	binary = malloc(sizeof(char) * (32 + 1));
	binary = binary_array(binary, input, isnegative, 32);
	first_one = 0;
	for (count = i = 0; binary[i]; i++)
	{
		if (first_one == 0 && binary[i] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			j = str_cpy(buf, binary[i], j);
			count++;
		}
	}
	free(binary);
	return (count);
}
