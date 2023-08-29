#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked listint_t list
 *@h: linked_list
 *Return: number of elements
 **/

size_t listint_len(const listint_t *h)
{
	int cntr = 0;

	while (h)
	{
		h = h->next;
		cntr++;
	}

	return (cntr);
}
