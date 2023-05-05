#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	for (i < n; i++;)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
