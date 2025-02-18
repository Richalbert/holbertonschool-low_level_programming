/*
 *
 * Alphabet in lowecase and reverse
 *
 * Description :
 *	This program writes alphabeth in lowercase and reverse
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

	for (lettre = 'z'; lettre >= 'a'; lettre--)
	{
		putchar(lettre);
	}

	lettre = '\n';
	putchar(lettre);

	return (0);
}
