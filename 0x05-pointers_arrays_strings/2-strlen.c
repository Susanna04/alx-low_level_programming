#include "main.h"

/**
 * _strlen - functions that return length of string
 * @s: character to be returned
 * Return: Length of string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
