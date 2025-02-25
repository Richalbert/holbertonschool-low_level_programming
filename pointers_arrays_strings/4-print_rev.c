#include "main.h"

/**
 * _puts - print a string
 *
 * @str: a pointer to the string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
	}

	_putchar('\n');
}


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

	for (i = 1; i < longueur + 1; i++)
	{
		ptr--;
		_putchar(*ptr);
	}

	_putchar('\n');
}

