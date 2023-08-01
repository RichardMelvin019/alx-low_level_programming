#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node will be added
 * @n: value for the new node to be added
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *t = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = t;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (t == NULL || t->next == NULL)
			return (NULL);
		t = t->next;
	}
	new->next = t->next;
	t->next = new;
	return (new);
}
