#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *free_listint2 - frees a list
 *@head: a pointer point to the head of a list
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, t;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		t = node;
		node = node->next;
		free(t);
	}

	*head = NULL;
}
