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

	for (i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}

	printf("%d\n", 98);
}
