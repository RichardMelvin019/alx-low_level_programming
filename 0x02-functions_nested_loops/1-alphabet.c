#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void);
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
