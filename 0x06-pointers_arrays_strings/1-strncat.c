#include "main.h"

/**
 * _strncat - function that catenates two string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: Destination.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
		a++;
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = dest[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
