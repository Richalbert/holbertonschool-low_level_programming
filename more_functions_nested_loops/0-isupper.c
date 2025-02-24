#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c : le caractere a tester
 *
 * Return : 1 if c is uppercase
 * 	    0 otherwise
 */
int _isupper(int c)
{
	/* caracteres majuscules entre 66('A') et 90('Z') */
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
	/* caracteres minuscules entre 97('a') et 122('z') */
		return 0;

	return 0;
}
