#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: a pointer of linkedlist
 *@idx: index of the list where the new node
 *@n: data
 *Return: the sum of data
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *node;
	unsigned int i;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	node = *head;
	for (i = 0; i < idx - 1 && node; i++)
	{
		node = node->next;
	}

	if (!node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}
