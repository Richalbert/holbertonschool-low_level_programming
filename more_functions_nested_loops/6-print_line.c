#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n : le nombre de fois que le caractere '_' sera affiche
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
		_putchar('\n');
}

