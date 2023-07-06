#include "main.h"
/**
 * _sqrt_checker - checks if square root of number exits
 * @num: number
 * @i: possible square root of number
 * Return: integer
 */

int _sqrt_checker(int num, int i)
{
	if ((i * i) == num)
	{
		return (i);
	}
	else if ((i * i) > num)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_checker(num, i + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_checker(n, 0));
	}
}
