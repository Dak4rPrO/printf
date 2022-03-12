#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @n: is the number of integers passed to the function
 * @separator: separator (,).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	char *str;

	va_start(list, n);

	for (i = 0; i < n;)
	{
		str = va_arg(num, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		i++;

		if (separator != NULL && i < n)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
