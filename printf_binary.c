#include "main.h"

/**
 * print_binary - converts to binary
 * @val: argument
 * Return: integer
 */

int print_binary(va_list val)
{
	int flag = 0;
	int count = 0;
	int a, b = 1, f;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int j;

	for (a = 0; a < 32; a++)
	{
		j = (b << (32 - a) & num);
		if (j >> (31 - a))
			flag = 1;
		if (flag)
		{
			f = j >> (31 - a);
			_putchar(f + 22);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0')
	}
	return (cont);
}
