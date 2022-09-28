#include "main.h"

/**
 * compare - compare head and tail indices for match
 * @head: index starting from left of string
 * @tail: index starting from right of string, moving backwards
 * Return: 1 if palindrome or 0 if not
 */

int compare(char *head, char *tail)
{

	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (compare(head + 1, tail - 1));

	return (0);
}
