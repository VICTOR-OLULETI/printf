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
		{"c", str_char}, {"s", str_str},
		{"i", str_int}, {"d", str_int},
		{"b", str_bnr}, {"u", str_unt},
		{"o", str_oct}, {"x", str_hex},
		{"X", str_upx}, {"S", str_usr},
		{"p", str_add}, {"li", str_lint},
		{"ld", str_lint}, {"lu", str_lunt},
		{"lo", str_loct}, {"lx", str_lhex},
		{"lX", str_lupx}, {"hi", str_hint},
		{"hd", str_hint}, {"hu", str_hunt},
		{"ho", str_hoct}, {"hx", str_shex},
		{"hX", str_hupx}, {"#o", str_noct},
		{"#x", str_nhex}, {"#X", str_nupx},
		{"#i", str_int}, {"#d", str_int},
		{"#u", str_unt}, {"+i", str_pint},
		{"+d", str_pint}, {"+u", str_unt},
		{"+o", str_oct}, {"+x", str_hex},
		{"+X", str_upx}, {" i", str_sint},
		{" d", str_sint}, {" u", str_unt},
		{" o", str_oct}, {" X", str_hex},
		{" X", str_upx}, {"R", str_rot},
		{"r", str_rev}, {"%", str_prg},
		{"l", str_prg}, {"h", str_prg},
		{" +i", str_pint}, {" +d", str_pint},
		{"+ i", str_pint}, {"+ d", str_pint},
		{" %", str_prg}, {NULL, NULL},
	};
	int i = 0, j = 0, primary_index;

	primary_index = index;
	while (ops[i].op)
	{
		if (format[index] == ops[i].op[j])
		{
			if (ops[i].op[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = primary_index;
		}
	}
	return (ops[i].func);
}
