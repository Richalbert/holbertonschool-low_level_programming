#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n : the number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int i, j;
	int compteur;

	if (n == 0)
		_putchar('\n');

	compteur = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < compteur; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		compteur++;
	}
}

