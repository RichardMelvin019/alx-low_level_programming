#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to be duplicated
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	char *ps;
	int i, strlen = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	ps = malloc(strlen * sizeof(char) + 1);
	if (ps == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ps[i] = str[i];
	}
	ps[i] = '\0';
	return (ps);
}
