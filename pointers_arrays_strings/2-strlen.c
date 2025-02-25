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
	int compteur = 0;

	while (*s++ == '\0')
	{
		compteur++;
	}

	return (compteur);
}

