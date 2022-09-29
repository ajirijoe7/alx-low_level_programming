#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 * Return: -1 On error, and errno is set appropriately.
 * On success 1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 * Return: On success 1 and -1 on error
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
