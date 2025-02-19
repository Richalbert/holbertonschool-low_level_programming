#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c : le caratere a tester
 *
 * Return: 1 if c is a letter, lowercase uppercase
 *	   0 otherwise
 */
int _isalpha(int c)
{
	int resultat;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		resultat = 1;
	else
		resultat = 0;

	return (resultat);
}
