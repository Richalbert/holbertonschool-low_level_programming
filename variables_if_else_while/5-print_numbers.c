/*
 *
 * all single digit numbers of base 10
 *
 * Description :
 *	This program writes all single digit numbers of base 10
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int chiffre;

	for (chiffre = 0; chiffre <= 9; chiffre++)
	{
		printf("%d", chiffre);
	}

	printf("\n");

	return (0);
}
