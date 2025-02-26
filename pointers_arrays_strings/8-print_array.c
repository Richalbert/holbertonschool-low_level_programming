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
 * print_array - print element of an array of integer
 *
 * Description: The function should print the second half of the string
 *	If the number of characters is odd, the function should print the last n
 *	characters of the string, where n = (length_of_the_string + 1) / 2
 *
 * @a: a pointer to a array of integer
 * @n: the size of array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("%d\n", a[i]);
}
