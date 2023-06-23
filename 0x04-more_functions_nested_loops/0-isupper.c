#include "main.h"
/**
 * _isupper - Checks for uppercase of character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
