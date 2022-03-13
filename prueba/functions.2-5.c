#include "main.h"

/**
 * rot13 - decimal a rot13
 * leet - funcion que cambia letras especificas por numeros
 * @p: puntero
 * Return: retorna el valor del puntero p
 */

char _printf_13(va_list r)
{
	char *p = va_arg(list, char *);
	int i = 0;
	int j = 0;
	char let[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rot[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (; p[i]; i++)
	{
		for (j = 0; j < 54; j++)
		{
			if (p[i] == let[j])
			{
				p[i] = rot[j];
			}
		}
	}
	return (p);
}

/**
*/
int _printf_x(va_list x)
{
}

/**
*/
int _printf_X(va_list X)
{
}

/**
*/
int _printf_o(va_list o)
{
}

/**
*/
int _printf_b(va_list b)
{
}
