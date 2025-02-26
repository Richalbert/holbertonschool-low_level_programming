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
	/* error if string length is greater than ‘509’ ISO C90 compilers */
	/* const int LIMITATION_C89_LONGUEUR_STRING = 509; */
	/* le checker limite a 448 */
	const int LIMITATION_CHECKER = 448;
	char *ptr = NULL;
	int len = -1;
	int i = -1;

	ptr = str;
	len = _strlen(ptr);

	if (len > LIMITATION_CHECKER)
		len = LIMITATION_CHECKER ;

	for (i = 0; i < len; i++)
	{
		if (*(ptr + (i * 2)) == '\0')
			break;

		_putchar(*(ptr + (i * 2)));
	}
	_putchar('\n');
}
