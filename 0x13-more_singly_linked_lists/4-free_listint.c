#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head of the list
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
