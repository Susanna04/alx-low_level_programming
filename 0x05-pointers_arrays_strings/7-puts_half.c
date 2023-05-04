#include "main.h"

/**
 * puts_half - print half of string
 * @str: string to be input
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int a = 0;
	int i;

	while (str[a] != '\0')
		a++;
	if (a % 2 == 1)
	{
		i = (a - 1) / 2;
		i += 1;
	}
	else
	{
		i = a / 2;
	}

	for (; i < a; i++)
		_putchar(str[i]);
	_putchar('\n');
}
