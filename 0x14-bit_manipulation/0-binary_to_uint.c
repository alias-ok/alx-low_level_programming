#include "main.h"
/**
 * binary_to_uint - func that converts a binary number to an unsigned int.
 * @b: binary.
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unin;
	int len, baze_tu;

	if (!b)
		return (0);
	unin = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, baze_tu = 1; len >= 0; len--, baze_tu *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			unin += baze_tu;
		}
	}
	return (unin);
}
