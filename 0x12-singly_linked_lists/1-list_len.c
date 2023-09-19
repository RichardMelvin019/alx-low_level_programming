#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - length of the list
 * @h: list header
 *
 * Return: Always 0.
*/

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
