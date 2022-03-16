#include "main.h"

/**
 * _printf_13 - decimal a rot13
 * @list: va_list
 * let-> funcion que cambia letras especificas por numeros
 * p-> puntero
 * Return: contador
 */

int _printf_13(va_list list)
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
	return (i);
}
