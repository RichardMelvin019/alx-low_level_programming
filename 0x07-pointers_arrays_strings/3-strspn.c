#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a, b;

	a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		b = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				a++;
				b = 1;
			}
		}
		if (b == 0)
		{
			return (a);
		}
	}
	return (a);
}
