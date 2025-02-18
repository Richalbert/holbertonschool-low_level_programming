/*
 *
 * all the numbers of base 16 in lowercase
 *
 * Description :
 *	This program writes all the numbers of base 16 in lowercase
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

	for (lettre = '0'; lettre <= '9'; lettre++)
	{
		putchar(lettre);
	}

	for (lettre = 'a'; lettre <= 'f'; lettre++)
	{
		putchar(lettre);
	}

	lettre = '\n';
	putchar(lettre);

	return (0);
}
