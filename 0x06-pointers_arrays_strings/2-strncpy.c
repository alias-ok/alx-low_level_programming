#include "main.h"
/**
 * _strncpy - Entry function that copies a string
 * @dest: Set parameter storing the string copy
 * @src: Source string
 * @n: Maximum number of bytes to copy from source
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
