#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *get_nodeint_at_index - a function that returns the nth node of a linked list
 *@head: a pointer that points to the list
 *@index: holds the position (index) to return
 *Return: the nth node of a listint_t or NULL if the node does not exist
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	listint_t *node;

	node = head;
	i = 0;

	while (i < index)
	{
		if (!node)
			return (NULL);
		node = node->next;
		i++;
	}

	return (node);
}
