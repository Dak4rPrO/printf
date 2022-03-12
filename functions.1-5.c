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
*
*
*
*/

