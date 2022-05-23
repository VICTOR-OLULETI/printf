#include "main.h"

/**
 * binary_array - converts decimal to binary
 * @binary: pointer to binary
 * @num: input number
 * @sign: if number is negative
 * @limit: size of binary
 * Return: number of characters
 */

char *binary_array(char *binary, long int num, int sign, int limit)
{
	int i;

	for (i = 0; i < limit; i++)
		binary[i] = '0';
	binary[limit] = '\0';
	for (i = limit - 1; num > 1; i--)
	{
		if (num == 2)
			binary[i] = '0';
		else
			binary[i] = (num % 2) + '0';
		num /= 2;
	}
	if (num != 0)
		binary[i] = '1';
	if (sign)
	{
		for (i = 0; binary[i]; i++)
			if (binary[i] == '0')
				binary[i] = '1';
			else
				binary[i] = '0';
	}
	return (binary);
}
