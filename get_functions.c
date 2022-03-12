#include "3-calc.h"

/**
 * printf_functions - function that selects the correct function
 * @s: pointer
 * Return: always
 */
int _printf(const char *format, ...)
{
	op_t ops[] = {
		{"%c", _printf_c},
		{"%s", _printf_s},
		{"%d", _printf_d_i},
		{"%i", _printf_d_i},
		{"%u", _printf_u},
		{"%r", _printf_r},
		{"%R", *_printf_13},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (format[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
