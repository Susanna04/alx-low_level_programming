#include <stdio.h>
/**
 * sentence - prints a sentence before the main function
 *
 * Return: always 0
 */

void __attribute__ ((constructor)) sentence()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
