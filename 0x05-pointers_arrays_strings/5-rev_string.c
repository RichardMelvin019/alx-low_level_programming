#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: 0
 */

void rev_string(char *s)
{
	char r = s[0];
	int x = 0;
	int i;

	while (s[x] != '\0')
		x++;
	for (i = 0; i < x; i++)
	{
		x--;
		r = s[i];
		s[i] = s[x];
		s[x] = r;
	}
}
