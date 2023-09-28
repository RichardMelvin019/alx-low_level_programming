#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head of a list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;_1
	dlistint_t *ptr;

	new_1 = malloc(sizeof(dlistint_t));
	if (new_1 == NULL)
		return (NULL);
	new_1->n = n;
	new_1->prev = NULL;
	ptr = *head;
	if (ptr != NULL)
	{
		while (ptr->prev != NULL)
			ptr = ptr->prev;
	}
	new_1->next = ptr;
	if (ptr != NULL)
		ptr->prev = new_1;
	*head = new_1;

	return (new_1);
}
