#include "main.h"

/**
 * _strcpy - copies the second string argument into the first
 * @str1: first string
 * @str2: second string
 *
 * Return: string concatenated
 */

char *_strcpy(char *str1, char *str2)
{
	int n, k;
	int i = 0, j = 0;

	while (str1[i])
	{
		i++;
	}
	while (str2[j])
	{
		j++;
	}
	n = i + j;
	
	for (k = i; k < n; k++)
	{
		str1[k] = str2[k - i];
	}
	str1[n] = '\0';
	return (str1);
}
