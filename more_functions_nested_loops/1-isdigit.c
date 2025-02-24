#include "main.h"

/**
 * _isdigit -	checks for a digit (chiffre)
 *
 * @c:		le caractere a tester
 *
 * Return:	1 if c is digit
 *		0 otherwise
 */
int _isdigit(int c)
{
	const int TRUE = 1;
	const int FALSE = 0;
	int resultat;

	/* les chiffres sont entre 48('0') et 57('9') */
	if (c >= '0' && c <= '9')
		resultat = TRUE;
	else
		resultat = FALSE;

	return (resultat);
}
