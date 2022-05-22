#include "main.h"

/**
 * str_str - copies string into buffer
 * @vl: variable argument
 * @buffer: buffer
 * @j: index
 *
 * Return: 1.
 */
int str_str(va_list vl, char *buffer, unsigned int j)
{
	char *str;
	unsigned int i;
	char empty[] = "(null)";

	str = va_arg(vl, char *);
	if (str == NULL)
	{
		for (i = 0; empty[i]; i++)
			j = str_cpy(buffer, empty[i], j);
		return (6);
	}
	for (i = 0; str[i]; i++)
		j = str_cpy(buffer, str[i], j);
	return (i);
}
