#include "main.h"

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
