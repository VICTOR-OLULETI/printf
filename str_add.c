#include "main.h"
#include <stdio.h>

/**
 * str_add - prints address
 * @vl: input list
 * @buffer: buffer
 * @j: index
 * Return: number of characters
 */
int str_add(va_list vl, char *buffer, unsigned int j)
{
	void *add;
	long int input;
	int i , count, first_digit, isneg;
	char *hexadecimal, *binary;
	char empty[] = "(nil)";

	add = va_arg(vl, void *);
	if (add == NULL)
	{
		for (i = 0; empty[i]; i++)
			j = str_cpy(buffer, empty[i], j);
		return (5);
	}
	input = (intptr_t)add;
	isneg = 0;
	if (input < 0)
	{
		input = (input * -1) - 1;
		isneg = 1;
	}
	binary = malloc(sizeof(char) * (64 + 1));
	binary = binary_array(binary, input, isneg, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = hex_array(binary, hexadecimal, 0, 16);
	j = str_cpy(buffer, '0', j);
	j = str_cpy(buffer, 'x', j);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			j = str_cpy(buffer, hexadecimal[i], j);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
