#include "main.h"

/**
 * _strspn - gets the length of a prefix substance
 * @s: string
 * @accept: input
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int  i, n, x, result;

	x = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		result = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				x++;
				result = 1;
			}
		}

	if (result == 0)
		return(x);
	}
	return (0);
}
