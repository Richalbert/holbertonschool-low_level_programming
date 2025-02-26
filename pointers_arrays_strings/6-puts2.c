#include "main.h"
#include<stdio.h>

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
 * rev_string - reverse a string
 *
 * @s: a pointer to the string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char *ptr = s;
	int len;
	char tmp;
	int pivot;
	int i;

	/* longueur de la chaine */
	len = _strlen(s);

	pivot = len / 2;

	for (i = 0; i < pivot; i++)
	{
		tmp = *(ptr + i);
		*(ptr + i) = *(ptr + (len - i) - 1);
		*(ptr + (len - i) - 1) = tmp;
	}
}

/**
 * puts2 - print a string
 *
 * @str: a pointer to the string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	char *ptr = NULL;
	long int len = -1;
	char nouveau_caractere = '\0';

	int i = -1;

	ptr = str;
	len = _strlen(ptr);

	for (i = 0; i < len; i++)
	{
		nouveau_caractere = *(ptr + (i * 2));
		if (nouveau_caractere == '\0')
		{
			break;
		}

		_putchar(*(ptr + (i * 2)));
	}
	_putchar('\n');
}
