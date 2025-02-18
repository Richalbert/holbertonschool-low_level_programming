/*
 *
 * all single digit numbers of base 10
 *
 * Description :
 *	This program writes all single digit numbers of base 10
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int car;
	int car2;
	int car3;

	car2 = '0';
	car3 = '0';
	for (car = '0'; car <= '9'; car++)
	{
		for (car2 = car; car2 <= '9'; car2++)
		{
			for (car3 = car2; car3 <= '9'; car3++)
			{
				if ((car == car2) || (car2 == car3) || (car3 == car))
					continue;

				putchar(car);
				putchar(car2);
				putchar(car3);

				if (car == '7' && car2 == '8' && car3 == '9')
					break;

				putchar(',');
				putchar(' ');
			}
		}
	}

	car = '\n';
	putchar(car);

	return (0);
}
