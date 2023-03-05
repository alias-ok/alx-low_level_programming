#include <stdio.h>
/**
 * _memset - Entry function that fills memory with a constant
 * @s: Set parameter for ponter
 * @b: Constant byte
 * @n: Stores first memory area
 * Return: Returns value of pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
