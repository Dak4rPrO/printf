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

/**
*_printf_d_i - function that prints an integer.
*
*@n: number given.
*/

void _printf_d_i(int n)
{
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
}

/**
 * _printf_u - function that prints an unsigned integer
 * @a: number
 */
void _printf_u(unsigned int a)
{
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
}
