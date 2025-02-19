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

/**
 * print_alphabet_x10 - imprime 10 lignes d'alphabet
 *
 * Return: rien
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();

}

