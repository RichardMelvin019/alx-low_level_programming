#include "lists.h"

/**
 * dlistint_len - returns number of element in  a list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len;

	len = 0;
	if (h == NULL)
		return (len);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
