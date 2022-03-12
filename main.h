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

int _printf(const char *format, ...);
void _printf_u(unsigned int n);
int _putchar(char c);
void _printf_c(char caracter);
void _printf_s(char *str);
void _printf_d_i(int n);
void _printf_r(char *str);
char *_printf_13(char *p);

#endif
