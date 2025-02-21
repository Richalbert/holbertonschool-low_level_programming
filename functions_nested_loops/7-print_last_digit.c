#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n : the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	/* on recupere le chiffre des unites */
	n = n % 10;

	/* ce chiffre doit etre positif */
	if (n < 0) 
		n = -n;

	/* on passe la valeur ascii du chiffre */
	_putchar(n + '0');

	return (n);
}
