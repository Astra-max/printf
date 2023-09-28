#include "main.h"

/**
 * print_pointer - function that points pointer
 * @val: value
 * Return: int
 */

int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a
	int i;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex_extra(a);
	return (b + 2);
}
