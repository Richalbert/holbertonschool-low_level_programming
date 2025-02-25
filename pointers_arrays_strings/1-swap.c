#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: a pointer to the number
 * @b: a pointer to the number
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

