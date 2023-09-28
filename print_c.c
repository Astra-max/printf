#include "main.h"

/**
 * printf_char - prints a char.
 * @chart: arguments.
 * Return: 1
 */

int printf_char(va_list chart)
{
	char str;

	str = va_arg(chart, int);
	_putchar(str);
	return(1);
}
