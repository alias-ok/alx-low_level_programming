#include "main.h"
/**
 * _strpbrk - Entry function that searches a string for any of the bytes
 * @s: Pointer to an address
 * @accept: Pointer
 * Return: Value of pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
