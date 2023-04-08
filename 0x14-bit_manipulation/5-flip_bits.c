#include "main.h"
/**
 * flip_bits - Entry func that returns number of bits you would need to flip
 * @n: number to be flipped
 * @m: second number to be flipped
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int e;
	int count = 0;
	unsigned long int bits;
	unsigned long int bit_power = n ^ m;

	for (e = 63; e >= 0; e--)
	{
		bits = bit_power >> e;
		if (bits & 1)
			count++;
	}
	return (count);
}
