#include "main.h"

/**
 * _strpbrk- search fro string of all bytes
 * @s: string
 * @accept: input
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + 1);
		}
	}
	return (0);
}
