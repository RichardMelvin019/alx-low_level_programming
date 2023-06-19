#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphal = 'a';
	char alphah = 'A';

	while (alphal <= 'z')
	{
		putchar(alphal);
		alphal++;
	}
	while (alphah <= 'Z')
	{
		putchar(alphah);
		alphah++;
	}
	putchar('\n');
	return (0);
}
