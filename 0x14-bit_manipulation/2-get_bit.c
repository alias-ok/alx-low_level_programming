#include "main.h"

/**
 * get_bit - displays value of a bit at a given index
 * @n: da bit
 * @index: The index to get the value of bit
 *
 * Return: -1 if an error occurs
 *         Otherwise index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
