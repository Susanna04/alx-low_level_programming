#include "main.h"
#include <stdio.h>

/**
 * print_array -  print n element of an array of integers
 * @a: array
 * @n: integer
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
		printf("%d", a[c]);
	if (c != (n - 1))
	{
		printf(", ");
	}
	printf("\n");
}
