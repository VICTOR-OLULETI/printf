#include "main.h"

/**
 * str_rev - reverses string
 * @vl: list
 * @buf: buffer pointer
 * @j: index
 * Return: number of characters
 */
int str_rev(va_list vl, char *buf, unsigned int j)
{
	char *str;
	unsigned int i;
	int k = 0;
	char empty[] = "(llun)";

	str = va_arg(vl, char *);
	if (str == NULL)
	{
		for (i = 0; empty[i]; i++)
			j = str_cpy(buf, empty[i], j);
		return (6);
	}
	for (i = 0; str[i]; i++)
		;
	k = i - 1;
	for (; k >= 0; k--)
	{
		j = str_cpy(buf, str[k], j);
	}
	return (i);
}
