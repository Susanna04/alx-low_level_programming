#include <stdio.h>
/**
 * main - function for hexadecimal
 * Return: always 0
 */

int main(void)
{
	int h;
	char i;

	for (h = 0; h < 10 ; h++)
		putchar('0' + h);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
