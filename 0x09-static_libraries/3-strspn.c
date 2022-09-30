#include "main.h"

/**
 *  _strspn - return length of string that matches values consistently
 *  @s: string to search
 *  @accept: target matches
 *  Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;

	for (i = 0; s[i] != 0; i++)
	{
		k = 0;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				k = 1;
			}
		}
		if (k == 0)
		{
			break;
		}
	}
	return (i);
}

