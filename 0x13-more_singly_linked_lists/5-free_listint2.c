#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *free_listint2 - frees a list
 *@head: a pointer point to the head of a list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
