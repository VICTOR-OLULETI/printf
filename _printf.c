#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: contains format specifier within string
 * Return: returns the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list vl;
	unsigned int i = 0, j = 0, buff_len = 0;
	int (*func)(va_list, char *, unsigned int);
	char *buffer;

	va_start(vl, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				buffer_output(buffer, j), free(buffer), va_end(vl);
				return (-1);
			}
			else
			{
				func = get_func(format, i + 1);
				if (func == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					str_cpy(buffer, format[i], j), buff_len++, i--;
				}
				else
				{
					buff_len += func(vl, buffer, j);
					i += identifier_size(format, i + 1);
				}
			} i++;
		}
		else
			str_cpy(buffer, format[i], j), buff_len++;
		for (j = buff_len; j > 1024; j -= 1024)
			;
	}
	buffer_output(buffer, j), free(buffer), va_end(vl);
	return (buff_len);
}
