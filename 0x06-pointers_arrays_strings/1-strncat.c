#include "main.h"
/**
 * _strncat - function that copies string
 * @dest: destination
 * @src: source
 * @n: last parameter and var
 * Return: return destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
