#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 **add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: head of linked_list
 *@n: int
 *Return: the address of the new element, or NULL if it failed
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;
	if (!*head)
	{
		*head = newnode;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = newnode;
	}

	return (newnode);
}
