#include "main.h"
/**
 * _memcpy - Entry function that copies memory area
 * @dest: Where memory is stored
 * @src: Where memory is copied
 * @n: Stores the number of bytes
 * Return: Copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
