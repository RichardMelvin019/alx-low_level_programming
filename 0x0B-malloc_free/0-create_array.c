#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: size of the array
 * @c: character to fill in the array
 * Return: character to pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ap;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ap = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ap[i] = c;
	}
	if (ap == NULL)
	{
		return (NULL);
	}
	return (ap);
}
