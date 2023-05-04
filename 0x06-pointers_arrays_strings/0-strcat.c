#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: source
 * @dest: destination
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
