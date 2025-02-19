#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - imprime le 26 lettres de l'alphabet en minuscule
 *
 * Return: rien
 */
void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
		_putchar(lettre);

	lettre = '\n';
	_putchar(lettre);
}
