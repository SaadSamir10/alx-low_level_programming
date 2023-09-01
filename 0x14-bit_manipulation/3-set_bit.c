#include "main.h"

/**
* set_bit - a function that sets the value of a bit to 1 at a given index
* @n: pointer to number
* @index: is the index
* Return: 1 on success or -1 in error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n |= (1 << index);
	return (1);
}
