#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59.
 *
 */
void jack_bauer(void)
{
	int heure;
	int heure2;
	int minute;
	int minute2;

	for (heure = 0; heure <= 2; heure++)
		for (heure2 = 0; heure2 <= 9; heure2++)
		{
			if (heure == 2 && heure2 >= 4)
				continue;
			for (minute = 0; minute <= 5; minute++)
				for (minute2 = 0; minute2 <= 9; minute2++)
				{
					_putchar(heure + '0');
					_putchar(heure2 + '0');
					_putchar(':');
					_putchar(minute + '0');
					_putchar(minute2 + '0');
					_putchar('\n');
				}
		}
}
