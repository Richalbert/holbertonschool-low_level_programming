#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */
void times_table(void)
{
	int ligne, colonne;
	int resultat;
	int dizaine, unite;
	int cond1, cond2, cond4, cond5, cond6;
	for (colonne = 0; colonne < 10; colonne++)
	{
		for (ligne = 0; ligne < 10; ligne++)
		{
			resultat = ligne * colonne;
			if (resultat >= 10)
			{
				unite = resultat % 10;
				dizaine = (resultat - unite) / 10;
				_putchar('0' + dizaine);
				_putchar('0' + unite);
				/* pas de virgule en fin de ligne */
				if (ligne == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + resultat);
				/* pas de virgule en fin de ligne */
				if (ligne == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				/* reunion des conditions pour faire moins de ligne */
				/* condition1 = colonne == 2 && resultat == 8; */
				/* condition2 = colonne == 3 && resultat == 9; */
				/* condition3 = colonne == 4 && resultat == 8; */
				/* condition4 = colonne == 5 && resultat == 5; */
				/* condition5 = colonne == 6 && resultat == 6; */
				/* condition6 = colonne == 7 && resultat == 7; */
				/* condition7 = colonne == 8 && resultat == 8; */
				/* condition8 = colonne == 9 && resultat == 9; */
				cond1 = (colonne == 2 || colonne == 4 || colonne == 8) && resultat == 8;
				cond2 = (colonne == 3 || colonne == 9) && resultat == 9;
				cond4 = colonne == 5 && resultat == 5;
				cond5 = colonne == 6 && resultat == 6;
				cond6 = colonne == 7 && resultat == 7;
				if (!(cond1 || cond2 || cond4 || cond5 || cond6)) 
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
