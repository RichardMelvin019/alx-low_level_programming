#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int nz = 0;

	while (nz <= 9)
	{
		putchar(nz + '0');
		nz++;
	}
	putchar('\n');
	return (0);
}
