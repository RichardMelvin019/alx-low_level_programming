#include "main.h"

/**
 * get_endianness - checks the endianess
 * Return: integer
*/

int get_endianness(void)
{
	int i;
	char *p;

	i = 1;
	p = (char *)&i;
	return (*p);
}
