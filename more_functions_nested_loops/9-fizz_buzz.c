#include<stdio.h>

int isMultipleDe3(int n);
int isMultipleDe5(int);
int isMultipleDe3Et5(int);

/**
 * main - fizz buzz
 *
 * Description: Fizz pour les multiple de 3
 *		Buzz pour les multiple de 5
 *		FizzBuzz pr le multiple de 3 et 5
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((isMultipleDe3(i)) || (isMultipleDe5(i)))
		{
			if (isMultipleDe3Et5(i))
			{
				printf("%s ", "FizzBuzz");
			}
			else
			{
				if (isMultipleDe3(i))
				{
					printf("%s ", "Fizz");
				}

				if (isMultipleDe5(i))
				{
					printf("%s ", "Buzz");
				}
			}
		}
		else
		{
			printf("%d ", i);
		}
	}

	/* et la 100 ieme valeur est un multiple de 5 */
	printf("%s", "Buzz");

	return (0);
}

/**
 * isMultipleDe3 - Vérifie si un nombre est un multiple de 3
 * @n: Le nombre à tester
 *
 * Return: 1 si n est un multiple de 3, 0 sinon
 */
int isMultipleDe3(int n)
{
	const int OUI = 1;
	const int NON = 0;

	if (n % 3 == 0)
		return (OUI);
	else
		return (NON);
}

/**
 * isMultipleDe5 - Vérifie si un nombre est un multiple de 5
 * @n: Le nombre à tester
 *
 * Return: 1 si n est un multiple de 5, 0 sinon
 */
int isMultipleDe5(int n)
{
	const int OUI = 1;
	const int NON = 0;

	if (n % 5 == 0)
		return (OUI);
	else
		return (NON);
}

/**
 * isMultipleDe3Et5 - Vérifie si un nombre est un multiple de 3 et de 5
 * @n: Le nombre à tester
 *
 * Return: 1 si n est un multiple de 3 et de 5, 0 sinon
 */
int isMultipleDe3Et5(int n)
{
	const int OUI = 1;
	const int NON = 0;

	if (n % 15 == 0)
		return (OUI);
	else
		return (NON);
}
