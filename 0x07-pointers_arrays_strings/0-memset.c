#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @b: constant byte
 * @s: memory  area
 * @n: byte of memory area
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
