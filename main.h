#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <ctype.h>
#include <iostream>

/**
 * struct op - estructura que lista las funciones
 * @format: formato
 * @list: lista de funciones
 */
typedef struct op
{
	char format;
	void (*f)(va_list list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_u(va_list list);
int _printf_c(va_list list);
int _printf_s(va_list list);
int _printf_d_i(va_list list);
int _printf_r(va_list list);
int _printf_13(va_list list);
int _printf_x(va_list list);
int _printf_X(va_list list);
int _printf_o(va_list list);
int _printf_b(va_list list);
int _printf_p(va_list list);
int _printf_h(va_list list);
int _printf_por(va_list list);

#endif
