#include "main.h"

/**
 *get_endianness - function that checks the endianness.
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *) &num;

	return ((int) byte[0]);
}
