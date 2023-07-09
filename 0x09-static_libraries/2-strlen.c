#include "main.h"
/**
 * _strlen - checks the length of a string
 * @s: string to be checked for the length
 * Return: 0
 */

int _strlen(char *s)
{
	int length = 0;


	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
