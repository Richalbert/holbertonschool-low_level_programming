#include "main.h"
#include <stdio.h>

int is_chiffre(char);
int is_signe(char);
int is_finChaine(char);

int c_bon(char *s, int i)
{
	int sign = 1;
	int n = -1;

	/* on lit la chaine partir du bon endroit */
	while (s[i] != '\0')
	{
		if ((s[i] == '-') || (s[i] == '+'))
		{
			if (s[i] == '-')
				sign *= -1;

		}

		if (n > 0)
		{
			n = 10 * n;
			n = n + (s[i] - '0');
		}
		else
		{
			n = s[i] - '0';
			/* printf("s[i] = %c ---> %d \n", s[i], s[i] - '0'); */
		}

		i++;
	}

	return (sign * n);
}


/**
 * _atoi -  copie a string to an integer
 *
 * @s: a pointer to the string
 *
 * Return: 0 if there are no numbers in the string
 *	le nombre sinon
 */
int _atoi(char *s)
{
	int i = 0;
	int n;

	int un_chiffre;
	int un_signe;
	int un_espace;

	un_signe = ((s[i] == '-') || (s[i] == '+'));
	un_chiffre = ((s[i] >= '0') && (s[i] <= '9'));
	un_espace = (s[i] == ' ');
	
	while (!(un_chiffre || un_signe))
	{
		i++;
		while (un_espace)
		{
			i++;
			un_espace = (s[i] == ' ');
		}

		un_signe = ((s[i] == '-') || (s[i] == '+'));
		un_chiffre = ((s[i] >= '0') && (s[i] <= '9'));
	}

	while (un_espace)
	{
		i++;      
		un_espace = (s[i] == ' ');
	}

	if (un_chiffre || un_signe)
	{
		n = c_bon(s, i);
	}

	return (n);
}
