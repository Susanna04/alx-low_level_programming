#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of square matrix
 * @a: array
 * @size: size
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int j, n, sum1 = 0, sum2 = 0;

	for (j = 0; j <= (size * size); j = j + size + 1)
		sum1 = sum1 + a[j];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
