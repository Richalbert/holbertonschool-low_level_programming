#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n : le nombre a tester
 *
 * Return: la valeur absolue de n
 */
int _abs(int n)
{
	int resultat;

	if (n < 0)
		resultat = n * (-1);
	else
		resultat = n;

	return (resultat);
}
