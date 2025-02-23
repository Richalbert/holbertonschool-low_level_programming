#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: le debut de la liste des nombres
 *
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}

	if (n == 98)
		printf("%d\n", 98);

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}
}
