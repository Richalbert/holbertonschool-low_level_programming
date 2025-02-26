#include "main.h"

/**
 * puts2 - print a string
 *
 * @str: a pointer to the string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		/* on avance de 2 en 2 */
		i += 2;
	}
	_putchar('\n');
}
