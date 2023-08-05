#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @b: base of the exponent
 * @p: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int b, unsigned int p)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= p; i++)
		n *= b;
	return (n);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, x;
	char y;

	y = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		x = n & div;
		if (x == div)
		{
			y = 1;
			_putchar('1');
		}
		else if (y == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
