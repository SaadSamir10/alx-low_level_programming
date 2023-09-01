#include "main.h"

/**
* get_bit - a function that returns the value of a bit
* @n: long integer
* @index: is the index
* Return: the value of the bit at index or -1 in error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return (n >> index & 1);
}
