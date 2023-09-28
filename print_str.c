#include "main.h"

/**
 * _strlen - Return the lenght of a string.
 * @str: string pointer
 * Return: a
 */

int _strlen(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}

/**
 * _strlenc - strlen function but applied for constant char pointer str
 * @str: char pointer
 * Return: a
 */

int _strlenc(const char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}
