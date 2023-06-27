#include "main.h"
/**
 * *_strcpy - copies item from one string to the other
 * @src: string 1
 * @dest: string 2
 * Return: stri ng dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
