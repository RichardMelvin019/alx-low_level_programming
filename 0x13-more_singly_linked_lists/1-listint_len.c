#include "lists.h"

/**
 * listint_len - counts the number ofnodes in the list
 * @h: head of list
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *x = h;
	size_t count = 0;

	while (x != NULL)
	{
		count += 1;
		x = x->next;
	}
	return (count);
}
