#include "main.h"
/**
 * print_array - prints array of integer
 * @n: number of element of array
 * @a: array of integer
 * Return: 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d, ", a[x]);
	}
	printf("\n");
}
