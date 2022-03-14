#include "main.h"

/**
*_printf_c - funcion que corresponde a printf %c
*
*@caracter: caracter a printear perteneciente a la tabla ASCII
*Return: 1
*/

void _printf_c(va_list c)
{
	char caracter = va_arg(c, int);

	if (caracter >= 32 && caracter <= 126)
	{
		_putchar(caracter);
	}
}

/**
*_printf_s - function that prints a string
*
*@str: string to print
*Return: i
*/
void _printf_s(va_list s)
{
	char *str = va_arg(s, char *);

	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}

}

/**
*_printf_d_i - function that prints an integer.
*
*@n: number given.
*
*Return: i
*/
void _printf_d_i(va_list d_i)
{
	int n = va_arg(d_i, int);
	unsigned int dc, dig, nat = n;
	double f = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			nat = n * -1;
			_putchar('-');
		}

		while (f <= nat)
			f *= 10;
		dc = f / 10;

		while (dc >= 1)
		{
			dig = nat / dc;
			_putchar(dig + '0');
			nat = (nat - (dc * dig));
			dc /= 10;
		}
	}
}

/**
 * _printf_u - function that prints an unsigned integer
 * @n: number
 * Return: i
 */
int _printf_u(va_list u)
{
	unsigned int n = va_arg(u, unsigned int);
	unsigned int 
	unsigned int dc, dig, nat = n;
	double f = 1;

		if (n == 0)
			_putchar('0');
		else
		{
			while (f <= nat)
				f *= 10;
			dc = f / 10;

			while (dc >= 1)
			{
				dig = nat / dc;
				_putchar(dig + '0');
				nat = (nat - (dc * dig));
				dc /= 10;
			}
		}
}

/**
 * _printf_r - function that prints a string in reverse
 * @str : ponter
 * Return: a
*/
int _printf_r(va_list r)
{
	char *str = va_arg(r, char *);
	int a = 0;
	int b;

	while (*str != '\0')
	{
		a++;
		++str;
	}
	str--;
	for (b = a; b > 0; b--)
	{
		_putchar(*str);
		str--;
	}
	return (a);
}
