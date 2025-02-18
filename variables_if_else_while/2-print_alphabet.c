/*
 *
 * Alphabet in lowecase
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
		putchar(lettre);
	}

	lettre = '\n';
	putchar(lettre);

	return (0);
}
