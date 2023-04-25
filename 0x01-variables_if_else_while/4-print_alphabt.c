#include <stdio.h>
/**
  * main - function to print in lower case except q and e
  *Return: forever 0
  */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	return (0);
}
