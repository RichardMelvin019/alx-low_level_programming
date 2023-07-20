#include "main.h"
/**
 * reverse_array - reverses the content of an array of integer
 * @a: the array
 * @n: the number of an array to be reversed
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;

	while (i >= 0)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
}
