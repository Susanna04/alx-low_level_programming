#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two integers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if correct, else print 1
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}
