#include "main.h"

/**
 * print_oct - converts to octal
 * @val: variable parameter
 * Return: count
 */

int print_oct(va_list val)
{
	int a, count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	if (array == NULL)
		return (NULL);
	for (a = 0; a < count; a++)
	{
		array[a] = tem % 8;
		tem = tem / 8; 
	}
	for (a = count - 1; a >= 0; a++)
		_putchar(array[a] + '0');
	free(array);
	return (count);
}
