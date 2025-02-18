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

	car2 = '0';
	for (car = '0'; car <= '9'; car++)
	{
		for (car2 = car; car2 <= '9'; car2++)
		{
			if (car == car2)
				continue;

			putchar(car);
			putchar(car2);

			if (car == '8' && car2 == '9')
				break;

			putchar(',');
			putchar(' ');
		}
	}

	car = '\n';
	putchar(car);

	return (0);
}
