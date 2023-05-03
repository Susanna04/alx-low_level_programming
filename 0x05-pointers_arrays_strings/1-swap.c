#include "main.h"

/**
 * swap_int - Function that swaps value of two integers
 * @a: int to be swapped
 * @b: int to be swapped
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
