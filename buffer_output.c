#include "main.h"

/**
 * buffer_output - print buffer output
 * @buffer: buffer
 * @j: number of bytes
 *
 * Return: number of bytes
 */

int buffer_output(char *buffer, unsigned int j)
{
	return (write(1, buffer, j));
}
