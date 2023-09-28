#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct format
{
	char *id;
	int (*f) ();
}match;

int print_HEX(unsigned int num);
int printff_hex(va_list val);
int print_oct(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list chart);
int prinf_string(va_list chart);
int _strlen(char *str);
int _strlenC(const char *str);
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_binary(va_list val);
int print_unsigned(va_list args);
int print_HEX(va_list val);
int print_string(va_list val);
int print_exc_string(va_list val);
int print_pointer(va_list val);
int printf_hex_extra(unsigned long int val);
int print_reves(va_list val);
int print_rot13(va_list val);

#endif
