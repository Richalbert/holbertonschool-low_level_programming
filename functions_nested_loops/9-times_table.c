#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */
void times_table(void)
{
	int col, lig;
	int resultat, resultat_suivant;
	int dizaine, unite;

	for (lig = 0; lig < 10; lig++)
	{
		for (col = 0; col < 10; col++)
		{
			/* on affiche 1 ou 2 digits */
			resultat = col * lig;
			if (resultat < 10)
				_putchar('0' + resultat);
			else
			{
				unite = resultat % 10;
				dizaine = (resultat - unite) / 10;
				_putchar('0' + dizaine);
				_putchar('0' + unite);
			}

			/* pas de virgule en fin de ligne */
			if (col == 9)
				continue;
			else
			{
				/* sinon on affiche la virgule et un espace */
				_putchar(',');
				_putchar(' ');
			}

			/* on affiche 1 espace supplementaire */
			resultat_suivant = (col + 1) * lig;
			if (resultat_suivant < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
