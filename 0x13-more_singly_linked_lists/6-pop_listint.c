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
	listint_t *node;
	int n;

	if (!*head || !head)
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
