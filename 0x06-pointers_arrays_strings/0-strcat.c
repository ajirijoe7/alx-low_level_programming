#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the
 *	terminating null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string@dest.
 */

char *strcat(char *dest, const char *src)
{
	int m = 0;
	int n = 0;

	while (dest[m] != '\0')
		m++;

	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;

	}
	dest[m] = '\0';

	return (dest);
}
