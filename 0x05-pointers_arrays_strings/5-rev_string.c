#include "main.h"

/**
 * rev_string - print the reverse of a string
 * @s: string to be reversed
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char rev = s[0];
	int a = 0;
	int b;

	while (s[a] != '\0')
		a++;
	for (b = 0; b < a; b++)
	{
		a--;
		rev = s[b];
		s[b] = s[a];
		s[a] = rev;
	}
}
