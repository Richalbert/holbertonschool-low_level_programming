#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n : le nombre a tester
 *
 * Return:
 *	1 and prints + if n is greater than zero
 *	0 and prints 0 if n is zero
 *	-1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int resultat;

	if (n >= 0)
	{
		if (n > 0)
		{
			_putchar('+');
			resultat = 1;
		}
		else
		{
			_putchar('0');
			resultat = 0;
		}
	}
	else
	{
		_putchar('-');
		resultat = -1;
	}

	return (resultat);
}
