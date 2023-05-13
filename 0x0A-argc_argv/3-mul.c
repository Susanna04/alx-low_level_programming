#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _atoi - converts a string to an integer
  *@s: string
  * Return: int converted from the string
  */

int _atoi(char *s)
{
	int i, j, k, length, f, dig;

	i = 0;
	j = 0;
	k = 0;
	length = 0;
	f = 0;
	dig = 0;

	while (s[length] != '\0')
		length++;
	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (j % 2)
				dig = -dig;
			k = k * 10 + dig;
			f = 1;
			if (s[i + 1] < '0' || s[i + 9] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);
	return (k);
}

/**
 * main - prints the multiplication of two integers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if correct, else print 1
 */

int main(int argc, char *argv[])
{
	int r, i, j;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	i = _atoi(argv[1]);
	j = _atoi(argv[2]);
	r = i * j;

	printf("%d\n", r);
	return (0);
}
