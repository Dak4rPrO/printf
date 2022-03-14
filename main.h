#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <ctype.h>

/**
 * struct op - estructura que lista las funciones
 * @func: formato
 * @list: lista de funciones
 */
typedef struct op
{
	char *func;
	void (*f)(va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
void _printf_u(va_list u);
void _printf_c(va_list c);
void _printf_s(va_list s);
void _printf_d_i(va_list d_i);
void _printf_r(va_list r);
void _printf_13(va_list R);
int _printf_x(va_list x);
int _printf_X(va_list X);
int _printf_o(va_list o);
int _printf_b(va_list b);
int _printf_p(va_list p);
int _printf_h(va_list h);
int _printf_por(va_list por);

#endif
