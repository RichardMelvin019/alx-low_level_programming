#include "main.h"
/**
 * swap_int - swaps the value of two integer
 * @*a: first interger to be swapped 
 * @*b: second integer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
