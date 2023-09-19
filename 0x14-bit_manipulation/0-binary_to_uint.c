#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned integer
 * @b: pointer to binary
 * Return: unsigned integer
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int n = 0;

	if (!b)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
		{
			n += 1;
		}
	}
	return (n);
}
