#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees dog
 * @d: dog structure
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
