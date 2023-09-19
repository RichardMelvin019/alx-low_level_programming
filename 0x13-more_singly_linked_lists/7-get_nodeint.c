#include "lists.h"

/**
 * get_nodeint_at_index - finds a nodein a linked list
 * @head: pointer to head of list
 * @index: index of node
 * Return: pointer to node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
	head = head->next;

	if (n < index)
	{
		return (NULL);
	}
	return (head);
}
