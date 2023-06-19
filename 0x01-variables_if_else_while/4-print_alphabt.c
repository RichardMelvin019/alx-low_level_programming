#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Aways 0 (success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha++;
		}
		else 
		{
			putchar(alpha);
			alpha++;
		}
	}
	putchar('\n');
	return (0);
}
