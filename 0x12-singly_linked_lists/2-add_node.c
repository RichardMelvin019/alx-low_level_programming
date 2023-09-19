#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning
 * of a linked list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t x;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	for (x = 0; str[x]; x++)
	{
		;
	}
	new_node->len = x;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
