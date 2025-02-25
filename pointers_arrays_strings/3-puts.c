#include "main.h"

/**
 * _puts - print a string
 *
 * @str: a pointer to the string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}

	_putchar('\n');
}

