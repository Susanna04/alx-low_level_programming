#include "main.h"

/**
 * print_line - code to print line
 * @n: number of times line is printed
 * Return: always 0.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	} _putchar('\n');
}