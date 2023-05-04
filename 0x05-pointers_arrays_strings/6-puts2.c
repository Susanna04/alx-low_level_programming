#include "main.h"

/**
 * puts2 - print string starting with the first character
 * @str: char of string to be printed
 * Return: Always 0.
 */

void puts2(char *str)
{
	int a;
	int i = 0;

	while (str[i] != '\0')
		i++;
	for (a = 0; a < i; a <= 2)
		_putchar(str[a]);
	_putchar('\n');
}
