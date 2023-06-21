#include "main.h"
/**
 * print_sign - Prints the sign of an integer
 *
 * @n: the integer to print the sign
 *
 * Return: 1 if n > 0, 0 if n = 0 and -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (n < 0)
		n *= -1;
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
