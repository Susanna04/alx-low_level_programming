#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check string, if there are digits
 * @str: array
 * Return: always 0
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print program
 * @argv: argument  array
 * @argc: argument count
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int count;
	int str;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str = atoi(argv[count]);
			sum += str;
		}

		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
