#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the teo strings
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, strc = 0, k = 0;
	char *ps;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0, j = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	strc = i + j;
	ps = malloc(strc * sizeof(char) + 1);
	if (ps == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (k < strc)
	{
		if (k <= i)
		{
			ps[k] = s1[k];
		}
		if (k >= i)
		{
			ps[k] = s2[j];
			j++;
		}
		k++;
	}
	ps[k] = '\0';
	return (ps);
}
