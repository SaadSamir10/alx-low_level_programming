#include "main.h"

/**
 *flip_bits - returns the number of flips to get from one number to another
 *@n: first number
 *@m: second number
 *Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, x;

	x = n ^ m;
	cntr = 0;

	while (x)
	{
		if (x & 1)
			cntr++;
		x = x >> 1;
	}

	return (cntr);
}

