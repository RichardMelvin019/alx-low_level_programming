#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a list
 * @head: pointer to the head of the list
 * @n: integer to be added
 * Return: pointer to the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
	}
	else
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		new->next = *head;
	}
	*head = new;
	return (new);
}
