#include "main.h"

/**
 * _strlen - the length of a string
 *
 * @s: a pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	char *ptr = s;
	int compteur = 0;

	while (*ptr != '\0')
	{
		ptr++;
		compteur++;
	}

	return (compteur);
}

/**
 * print_rev - print a string in reverse
 *
 * @s: a pointer to the string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	char *ptr = s;
	int longueur = _strlen(ptr);
	int i;

	ptr = s + longueur;

	for (i = 0; i < longueur + 1; i++)
	{	_putchar(*ptr);
		ptr--;
	}

	_putchar('\n');
}

