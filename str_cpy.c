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
	buffer[j] = c;
	j++;
	return (j);
}
