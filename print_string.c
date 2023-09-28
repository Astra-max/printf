#include "main.h"

/**
 * printf_string - print a string.
 * @chart: argument
 * Return: the length of the string.
 */

int prinf_string(va_list chart)
{
	char *str;
	int a;
	int length;

	str = va_arg(chart, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (a = 0; a < length; a++)
			_putchar(str[a]);
		return (length)
	}
	else
	{
		length = _strlen(str);
		for (a = 0; a < length; a++)
			_putchar(str[a]);
		return (length)
	}
}
