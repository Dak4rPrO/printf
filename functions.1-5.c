#include "main.h"

/**
*_printf_c - funcion que corresponde a printf %c
*
*@caracter: caracter a printear perteneciente a la tabla ASCII
*/

void _printf_c(char caracter)
{
    if (caracter >= 36 && caracter <= 126)
    {
        _putchar(caracter);
        _putchar('\n');
    }
}

/**
*_printf_s - function that prints a string
*
*@str: string to print
*/
void _printf_s(char *str)
{
    int i = 0;

    while (*(str + i) != 0)
    {
        _putchar(*(str + i));
        i++;
    }
    _putchar('\n');
}
