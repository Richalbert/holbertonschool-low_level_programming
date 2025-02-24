#include<stdio.h>

int isMultipleDe3(int);
int isMultipleDe5(int);
int isMultipleDe3Et5(int);

/**
 * main - fizz buzz
 *
 * Description: Fizz pour les multiple de 3
 * 		Buzz pour les multiple de 5
 * 		FizzBuzz pr le multiple de 3 et 5
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i =0; i <= 100; i++)
	{
		if ((isMultipleDe3(i)) || (isMultipleDe5(i)))
		{
			if (isMultipleDe3Et5(i))
			{
				printf("%s ", "FizzBuzz ");
			}

			if (isMultipleDe3(i))
			{
				printf("%s ", "Fizz ");
			}

			if (isMultipleDe5(i))
			{
				printf("%s ", "Buzz");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}

	return(0);
}

int isMultipleDe3(int n)
{
	const int OUI = 1;
	const int NON = 0;

	if (n % 3 == 0)
		return(OUI);
	else
		return(NON);
}

int isMultipleDe5(int n)
{
	const int OUI = 1;
	const int NON = 0;

	if (n % 5 == 0)
		return(OUI);
	else
		return(NON);
}

int isMultipleDe3Et5(int n)
{
	const int OUI = 1;
	const int NON = 0;

	if (n % 15 == 0)
		return(OUI);
	else
		return(NON);
}
