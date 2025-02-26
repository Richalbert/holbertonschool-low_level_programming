#include "main.h"
#include<stdio.h>

/**
 * print_array - print element of an array of integer
 *
 * Description: si la taille ne correpond pas a la size on affiche rien
 *
 * @a: a pointer to a array of integer
 * @n: the size of array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		/* ne rien faire mais un saut de ligne */
		printf("\n");
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	/* affiche le drnier element (sans la virgule et l'espace) */
	printf("%d\n", a[i]);
}

/*
 *
 * Correct output: int array[1] = { 98 };// simple array with wrong length:
 *					// print_array(array, 0);
 *					// print_array(array, -1);
 *
 */
