#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c : le caratere a tester
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int resultat;

	if (c >= 'a' && c <= 'z')
		resultat = 1;
	else
		resultat = 0;

	return (resultat);
}
