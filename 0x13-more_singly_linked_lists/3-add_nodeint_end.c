#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the head of the list
 * @head: pointer to the head of the list
 * @n: node to be used
 * Return: pointer to the new head of the list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *x = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
	{
		return (NULL);
	}
	if (x != NULL)
	{
		while (x->next != NULL)
			x = x->next;
		x->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
