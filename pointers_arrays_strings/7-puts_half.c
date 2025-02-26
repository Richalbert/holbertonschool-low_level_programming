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
 * puts_half - print a half of string
 *
 * Description: The function should print the second half of the string
 *	If the number of characters is odd, the function should print the last n
 *	characters of the string, where n = (length_of_the_string + 1) / 2
 *
 * @str: a pointer to the string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	char *ptr = str;
	int length_of_the_string = _strlen(ptr);
	int n;
	int i;

	if (length_of_the_string % 2)
	{
		/* le nombre de caractere est pair (even) */

	}
	else
	{
		/* le nombre de caractere est impair (odd) */

		n = (length_of_the_string + 1) / 2;

		/* on se deplace au debut de l'affichage */
		for (i = 0; i < n; i++)
		{
			ptr++;
		}

		/* on affiche a partir d'ici */
		for (i = n; i < length_of_the_string; i++)
		{
			_putchar(*ptr);
			ptr++;
		}

		_putchar('\n');
	}
}
