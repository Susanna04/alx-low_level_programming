#include "main.h"
/**
 * main - entry code
 * Description: prints numbers 1 t0 100
 * Print Fuzz for multiples of 3, Buzz for multiples of 5
 * Print FizzBuzz for multiples of both
 * Return: Always 0.
 */

int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%i", a);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
