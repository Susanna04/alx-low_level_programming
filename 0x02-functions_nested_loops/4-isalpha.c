#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: is character to be checked
 * Return: 1 if character is a letter(lower or uppercase), otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'));
}
