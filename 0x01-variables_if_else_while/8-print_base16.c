#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char hexa = 'a';
	int decimal = 0;

	while (decimal <= 9)
	{
		putchar(decimal);
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
