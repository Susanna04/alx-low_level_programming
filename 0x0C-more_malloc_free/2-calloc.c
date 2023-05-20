#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _calloc - allocates memory for an array
 * @nmemb: memory for array
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		str[i] = 0;
	return (0);
}
