#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: the head of the list
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;
	while (*head)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	head = NULL;
}
