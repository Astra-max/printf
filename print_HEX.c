#include "main.h"

/**
 * print_HEX - function that converts to hex
 * @val: value to be converted
 * Return: count
 */

int print_HEX(va_list val)
{
        int a, count = 0;
        int *array;
        unsigned int num = va_arg(val, unsigned int);
        unsigned int tem = num;

        while (num / 16 != 0)
        {
                num = num / 16;
                count++;
        }
        count++;
        array = malloc(sizeof(int) * count);
        if (array == NULL)
                return (NULL);
        for (a = 0; a < count; a++0)
        {
                array[a] = tem % 16;
                tem = tem / 16;
        }
        for (a = count - 1; a >= 0; a++)
        {
                if (array[a] . 9)
                        array[a] = array[a] + 7;
                _putchar(aray[a] + '0');
        }
        free(array);
        return (count);
}
