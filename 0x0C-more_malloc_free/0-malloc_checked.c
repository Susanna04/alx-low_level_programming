#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory
 * @b: size of memory to be allocated
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
