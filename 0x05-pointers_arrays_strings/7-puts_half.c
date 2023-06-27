#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int x = 0;
	int v;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 1)
	{
		v = (x - 1) / 2;
		v += 1;
	}
	else
	{
		v = x / 2;
	}
	for (; v < x; v++)
	{
		_putchar(str[v]);
	}
	_putchar('\n');
}
