#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *pop_listint - frees a list
 *@head: a pointer point to the head of a list
 *Return: void
 */

int pop_listint(listint_t **head)
{
	listint_t *node, *t;
	int n;

	if (!*head)
		return (0);
	t = *head;
	node = t->next;
	n = t->n;
	free(t);
	t = node;
}
