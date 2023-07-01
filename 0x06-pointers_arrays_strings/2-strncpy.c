#include "main.h"
/**
 * _strncpy - Copies inputted numbers
 * @dest: the buffer storing the string copied
 * @src: the source string
 * @n: number of byte
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;

	while (src[i++])
		l++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = l; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
