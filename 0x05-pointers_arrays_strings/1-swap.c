#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
