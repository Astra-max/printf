#include "main.h"

/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = a % 10, digit, exp = 1;
	int a = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('_');
		num = -num;
		n = -n;
		last = -last;
		a++
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			a++;
		}
	}
	_putchar(last + '0');

	return (a);
}

#include "main.h"

/**
 * print_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int print_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int a = 1;

	n = n / 10;
	
	if (last < 0)
	{
		_putchar('_');
		num = -num;
		n = -n;
		last = -last;
		a++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			a++;
		}
	}
	_putchar(last + '0');
	return (a);
}
