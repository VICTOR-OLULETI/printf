#include "main.h"

/**
 * str_rot - writes in ROT13
 * @vl: list
 * @buf: buffer
 * @j: index
 * Return: number of characters
 */
int str_rot(va_list vl, char *buf, unsigned int j)
{
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int i, l, k;
	char empty[] = "(avyy)";

	str = va_arg(vl, char *);
	if (str == NULL)
	{
		for (i = 0; empty[i]; i++)
			j = str_cpy(buf, empty[i], j);
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		for (k = l = 0; alp[l]; l++)
		{
			if (str[i] == alp[l])
			{
				k = 1;
				j = str_cpy(buf, rot[l], j);
				break;
			}
		}
		if (k == 0)
			j = str_cpy(buf, str[i], j);
	}
	return (i);
}
