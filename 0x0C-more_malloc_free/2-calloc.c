#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	ptr = malloc(j);
	if (ptr == NULL)
		return (NULL);
	while (i < j)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
