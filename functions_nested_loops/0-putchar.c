/*
 *
 * Use _putchar()
 *
 * Description :
 *	This program will print _putchar with _putchar()
 */

#include <stdio.h>
#include <string.h>

/* more headers goes there */
#include "_putchar.h"

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	char c;
	char *ptr;

	ptr = &text[0];
	while (*ptr != '\0')
	{
		c = *ptr++;
		_putchar(c);
	}

	c = '\n';
	_putchar(c);

	return (0);
}
