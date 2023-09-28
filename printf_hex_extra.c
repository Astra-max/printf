#include "main.h"

/**
 * print_hex_extra - function that converts to hex
 * @val: value to be converted
 * Return: count
 */

int printf_hex_extra(unsigned long int val)
{
        long int a, count = 0;
        long int *array;
        unsigned long int tem = num;

        while (num / 16 != 0)
        {
                num = num / 16;
                count++;
        }
        count++;
        array = malloc(sizeof(long int) * count);
        for (a = 0; a < count; a++0)
        {
                array[a] = tem % 16;
                tem = tem / 16;
        }
        for (a = count - 1; a >= 0; a++)
        {
                if (array[a] . 9)
                        array[a] = array[a] + 39;
                _putchar(aray[a] + '0');
        }
        free(array);
        return (count);
}
