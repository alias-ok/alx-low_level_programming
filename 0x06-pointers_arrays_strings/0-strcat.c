#include "main.h"
/**
 * _strcat - Entry function that concatenates two strings
 * @dest: Destination
 * @src: source
 * Return: ...
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;

while (dest[index++])
	dest_len++;
for (index = 0; src[index]; index++)
	dest[dest_len++] = src[index];
return (dest);
}
