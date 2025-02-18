/*
 *
 * Alphabet in lowecase and in uppercase
 *
 * Description :
 *	This program writes alphabeth in lowercase and uppercase
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

	for (lettre = 'A'; lettre <= 'Z'; lettre++)
	{
		putchar(lettre);
	}

	lettre = '\n';
	putchar(lettre);

	return (0);
}
