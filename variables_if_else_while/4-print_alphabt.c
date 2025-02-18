/*
 *
 * Alphabet in lowecase without q and e
 *
 * Description :
 *	This program writes alphabeth in lowercase
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre == 'q' || lettre == 'e')
			continue;
		putchar(lettre);
	}

	lettre = '\n';
	putchar(lettre);

	return (0);
}
