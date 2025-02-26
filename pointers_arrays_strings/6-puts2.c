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
 * puts2 - print a string
 *
 * @str: a pointer to the string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	char *ptr = NULL;
	int len = -1;
	int i = -1;

	ptr = str;
	len = _strlen(ptr);

	for (i = 0; i < len - 1; i++)
	{
		if (*ptr == '\0')
			break;
		else
		{
			_putchar(*ptr);
			ptr++;
			ptr++;
		}
	
	/*	if (*(ptr + (i * 2)) == '\0')
			break;
		_putchar(*(ptr + (i * 2)));
*/
	}
	_putchar('\n');
}
