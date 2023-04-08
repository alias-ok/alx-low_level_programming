#include "main.h"
/**
 * binary_to_uint - Func that converts a binary number to an unsigned int
 * @b: pointer variable to a string of 0 and 1 chars
 * Return:  the converted number:
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int result = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		result = 2 * result + (b[a] - '0');
	}
	return (result);
}
