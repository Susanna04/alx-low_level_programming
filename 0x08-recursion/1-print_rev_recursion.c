#include "main.h"

/**
 * _print_rev_recursion -print string in reverse
 * @s: string
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_print_rev_recursion(s);
		return;
	}
	s--;
	_putchar(*s);
}
