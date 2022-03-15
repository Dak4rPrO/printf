#include "main.h"
#define BUFFER_SIZE 1024

/**
 * _printf - function that produces output according to a format.
 * @format: string give
 
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i, j = 0;

   op_t op[] = {{"c", _printf_c}, {"s", _printf_s}, {"d", _printf_d_i},
	{"i", _printf_d_i}, {"u", _printf_u}, {"r", _printf_r},
	{"R", _printf_13}, {NULL, NULL}};
   va_start(list, format);	
   if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
   if (list == NULL)
	   return (-1);
	for (i = 0; format[i] != '\0';)
	{
		if (format[i] == '%')
		{
			while (j < '9')
			{
				if (format[i + 1] == op[j].func[0])
				{
					op[j].f(list);
					i++;
					i++;
					break;
				}
				j++;			
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
