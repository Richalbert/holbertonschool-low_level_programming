/*
 *
 * The last digit
 *
 * Description :
 *	This program will assign a random number to the variable n
 *	and prints it with special condition.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int sign = 1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	printf("Last digit of %d ", n);

	if (n < 0)
	{
		n = n * (-1);
		sign = -1;
	}

	while (n >= 10)
	{
		n = n - 10;
	}

	n = n * sign;
	printf("is %d ", n);

	if (n < 6)
	{
		if (n == 0)
			printf("and is 0\n");
		else
			printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is greater than 5\n");
	}

	return (0);
}
