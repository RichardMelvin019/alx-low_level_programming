#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: pointer to the head of list
 * Return: integer
*/

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
