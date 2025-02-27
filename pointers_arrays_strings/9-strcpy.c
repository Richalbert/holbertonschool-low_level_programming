#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _strcpy - copie a string to a buffer
 *
 * Description: copies the string pointed to by src,
 *		including the terminating null byte (\0),
 *		to the buffer pointed to by dest.
 *
 * @src: a pointer to the string
 * @dest: a pointer to the buffer
 *
 * Return: the pointer to the buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	_putchar('\0');

	return (dest);
}
