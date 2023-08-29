#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a list
* @h: linked_list
* Return: a num of nodes
**/

size_t print_listint(const listint_t *h)
{
	int len;

	len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
