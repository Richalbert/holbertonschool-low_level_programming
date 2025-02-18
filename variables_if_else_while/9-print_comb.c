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

	for (car = '0'; car <= '9'; car++)
	{
		putchar(car);
		if (car == '9')
			continue;
		putchar(',');
		putchar(' ');
	}

	car = '\n';
	putchar(car);

	return (0);
}
