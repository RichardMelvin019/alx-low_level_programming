#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int decimal = 0;
	char hexa = 'a';

	while (decimal <= 9)
	{
		putchar(decimal + '0');
		decimal++;
	}
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
