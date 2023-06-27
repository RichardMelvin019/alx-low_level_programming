#include "main.h"
/**
 * print_rev - to print a string inreversed pattern
 * @s: string to be printed
 * Return: 0
 */

void print_rev(char *s)
{
	int r;
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	for (r = x; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
