#include "main.h"
/**
 * print_alphabet_x10 - 10x alpha
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int x = 0;

	while (x <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		x++;
	}
}
