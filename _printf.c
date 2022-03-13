#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: string given.
 *
 */

int _printf(const char *format, ...)
{
	int i, j = 0;

   op_t op[] = {
        {"c", _printf_c},
        {"s", _printf_s},
        {"d", _printf_d_i},
        {"i", _printf_d_i},
        {"u", _printf_u},
        {"r", _printf_r},
     /**   {"R", _printf_13},
        {"x", _printf_x},
        {"X", _printf_X},
        {"o", _printf_o},
        {"b", _printf_b},
        {"p", _printf_p},
        {"h", _printf_h},
        {"%", _printf_por},*/
        {NULL, NULL}
    };

	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (i = 0; format[i] != '\0';)
	{
		if (format[i] == '%')
		{
			while (j < 7)
				if (op[j].func[0] == format[i + 1])
				{
					op[j].f(list);
					i++;
					break;
				}
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	va_end(list);
	return (i);
}
