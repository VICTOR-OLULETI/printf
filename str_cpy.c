#include "main.h"

/**
 * str_cpy - concatenates the character into the buffer
 * @buffer: buffer
 * @c: character string
 * @j: index of buffer
 *
 * Return: index
 */

unsigned int str_cpy(char *buffer, char c, unsigned int j)
{
	if (j == 1024)
	{
		buffer_output(buffer, j);
		j = 0;
	}
	buffer[j] = c;
	j++;
	return (j);
}
