#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reset_to_98 - that takes a pointer to an int as parameter and
 *		updates the value it points to to 98
 *
 * @n: a pointer to the number
 *
 * Return: nothing
 */
void reset_to_98(int *n)
{
	int _98 = 98;

	*n = _98;
}

