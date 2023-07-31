#include "lists.h"

/**
 * print_listint - print a list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *x = h;
	size_t i = 0;

	while (x != NULL)
	{
		printf("%d\n", x->n);
		i += 1;
		x = x->next;
	}
	return (i);
}
