#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 **add_nodeint - adds a new node at the beginning of a listint_t list
 *@head: the head of linked_list
 *@n: int
 *Return: the address of the new element, or NULL if it failed
 **/

listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;
	if (*head)
		newnode->next = *head;
	*head = newnode;
	return (newnode);
}
