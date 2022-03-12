#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <ctype.h>

int _printf(const char *format, ...);
void _printf_u(unsigned int a);
int _putchar(char c);
void _printf_c(char caracter);
void _printf_s(char *str);
void _printf_d_i(int n);
void _printf_r(char *str);

#endif
