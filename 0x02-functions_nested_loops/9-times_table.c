#include "main.h"
/**
 * times_table - prints the time table
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int i, j, k, a, b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				a = k % 10;
				b = (k - a) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(b + '0');
				_putchar(a + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
