#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 *@i: The number to be computed
 *
 * Return: Absolute value 
 */
int _abs(int n)
{
	int abs_v;

	if (n < 0)
	{
		abs_v = n * -1;
		return (abs_v);
	}
	return (n);
}
