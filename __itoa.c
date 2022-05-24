#include "main.h"

/**
 * __itoa - converts integer to string
 * @i : integer to be converted
 * @strout: string output
 * @base: base either decimal...etc
 *
 * Return: string output
 */

char *__itoa(int i, char *strout, int base)
{
	char *str = strout;
	int digit, sign = 0;

	if (i < 0)
	{
		sign = 1;
		i = -i;
	}
	while (i)
	{
		digit = i % base;
		*str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
		i = i / base;
		str++;
	}
	if (sign)
	{
		*str++ = '-';
	}
	*str = '\0';
	__strrev(strout);
	return (strout);
}
