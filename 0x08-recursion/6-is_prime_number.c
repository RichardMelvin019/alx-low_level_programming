#include "main.h"
/**
 * _prime - return 0 or 1
 * @num: number being checked
 * @f: posible factor of the number
 * Return: integer
 */

int _prime(int num, int f)
{
	if (f < num)
	{
		if (num % f == 0)
		{
			return (0);
		}
		else
		{
			return (_prime(num, f + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if number is prime number or not
 * @n: number to be checked
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n, 2));
	}
}
