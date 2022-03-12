#include "main.h"

/**
*_printf_c - funcion que corresponde a printf %c
*
*@caracter: caracter a printear perteneciente a la tabla ASCII
*Return: 1
*/

int _printf_c(char caracter)
{
	if (caracter >= 36 && caracter <= 126)
	{
		_putchar(caracter);
		_putchar('\n');
	}
	return (1);
}

/**
*_printf_s - function that prints a string
*
*@str: string to print
*Return: i
*/
int _printf_s(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
	return (i);
}

/**
*_printf_d_i - function that prints an integer.
*
*@n: number given.
*
*Return: i
*/
int _printf_d_i(int n)
{
	int i;
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
	_putchar('\n');

	for (i = 0; i < n; i++)
		return (i);
}

/**
 * _printf_u - function that prints an unsigned integer
 * @n: number
 * Return: i
 */
int _printf_u(unsigned int n)
{
	int i;
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
	_putchar('\n');
	for (i = 0; i < n; i++)
		return (i);
}

/**
 * _printf_r - function that prints a string in reverse
 * @str : ponter
 * Return: a
*/
int _printf_r(char *str)
{
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

	_putchar('\n');
	return (a);
}
