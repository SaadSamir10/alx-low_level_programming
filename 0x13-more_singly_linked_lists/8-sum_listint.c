#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 *@head: a pointer of linkedlist
 *Return: the sum of data
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
