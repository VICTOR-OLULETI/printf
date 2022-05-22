#include "main.h"

/**
 * get_func - checks and calls the function needed for the identified
 * @format: format identifier
 * @index: index of format identifer
 *
 * Return: pointer to a function
 */

int (*get_func(const char *format, int index))(va_list, char *, unsigned int)
{
	op_t ops[] = {
		{"c", str_char},
		{"s", str_str},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (format[index] == ops[i].op)
			break;
		i++;
	}
	return (ops[i].func);
}
