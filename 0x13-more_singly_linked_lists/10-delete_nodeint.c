#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index index linked list
 *@head: a pointer of linkedlist
 *@index: the index want to delete
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head || !(*head))
		return (-1);

	listint_t *node = *head;

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	listint_t *prev = NULL;

	for (unsigned int i = 0; node && i < index; i++)
	{
		prev = node;
		node = node->next;
	}

	if (!node)
		return (-1);

	prev->next = node->next;
	free(node);

	return (1);
}
