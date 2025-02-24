#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int unite, dizaine;
	int ligne;

	for (ligne = 0; ligne < 10; ligne++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				unite = i % 10;
				dizaine = (i -  unite) / 10;
				_putchar('0' + dizaine);
			}
			else
			{
				unite = i;
			}
				_putchar('0' + unite);
		}
		_putchar('\n');
	}
}

