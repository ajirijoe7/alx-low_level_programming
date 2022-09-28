#include "main.h"

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
