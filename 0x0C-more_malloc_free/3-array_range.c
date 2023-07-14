#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integer
 * @min: minimum
 * @max: maximum
 * Return: integer value
 */
int *array_range(int min, int max)
{
	int *ar, i = 0;

	if (min > max)
		return (NULL);
	ar = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (ar == NULL)
		return (NULL);
	while (min <= max)
	{
		ar[i] = min;
		i++;
		min++;
	}
	return (ar);
}
