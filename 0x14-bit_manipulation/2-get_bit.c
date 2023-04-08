#include "main.h"
/**
 * get_bit - Entry func that returns the value of a bit at a given index
 * @n: variable storing value of a bit
 * @index: where n is stored
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
