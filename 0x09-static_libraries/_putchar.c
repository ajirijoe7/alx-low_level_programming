#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: The character to print
 *
 * 
 * Return: 1 on success, -1 on error
 * and erno is set appropriately.
 */

int _putchar(char  c)
{
	return (write(1, &c, 1));
}
