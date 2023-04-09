#include "main.h"
/**
 * get_endianness - Entry func that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int h = 1;
	char *s = (char *)&h;

	if (*s == 1)
		return (1);
	return (0);
}
