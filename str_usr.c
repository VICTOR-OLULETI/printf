#include "main.h"

/**
 * str_usr - outputs string and non-printed chars
 * @vl: list
 * @buf: buffer
 * @j: index
 * Return: number of characters
 */
int str_usr(va_list vl, char *buf, unsigned int j)
{
	unsigned char *str;
	char *hexadecimal, *binary;
	unsigned int i, sum, op;

	str = va_arg(vl, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			j = str_cpy(buf, '\\', j);
			j = str_cpy(buf, 'x', j);
			op = str[i];
			binary = binary_array(binary, op, 0, 32);
			hexadecimal = hex_array(binary, hexadecimal, 1, 8);
			j = str_cpy(buf, hexadecimal[6], j);
			j = str_cpy(buf, hexadecimal[7], j);
			sum += 3;
		}
		else
			j = str_cpy(buf, str[i], j);
	}
	free(binary);
	free(hexadecimal);
	return (i + sum);
}
