#include "main.h"

/**
 * str_shex - prints short decimal in hexadecimal
 * @vl: list
 * @buf: buffer pointer
 * @j : index for buffer
 * Return: number of characters printed
 */

int str_shex(va_list vl, char *buf, unsigned int j)
{
	short int input, i, isneg, count, first_num;
	char *hexa, *bin;

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
	bin = malloc(sizeof(char) * (16 + 1));
	bin = binary_array(bin, input, isneg, 16);
	hexa = malloc(sizeof(char) * (4 + 1));
	hexa = hex_array(bin, hexa, 0, 4);
	for (first_num = i = count = 0; hexa[i]; i++)
	{
		if (hexa[i] != '0' && first_num == 0)
			first_num = 1;
		if (first_num)
		{
			j = str_cpy(buf, hexa[i], j);
			count++;
		}
	}
	free(bin);
	free(hexa);
	return (count);
}
