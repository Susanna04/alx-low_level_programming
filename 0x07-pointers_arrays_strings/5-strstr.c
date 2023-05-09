#include "main.h"

/**
 * _strstr - check the code
 * @haystack: string
 * @needle: substring
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *q = needle;

		while (*p == *q && *q != '\0')
		{
			p++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
	}
	return (0);
}
