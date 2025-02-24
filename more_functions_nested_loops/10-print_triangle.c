#include "main.h"

/**
 * print_triangle - draws a triangle
 *
 * @size : the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = size; i > 0; i--)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}

		for (j = i; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

