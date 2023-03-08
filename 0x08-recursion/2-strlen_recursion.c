#include "main.h"
/**
 * _strlen_recursion - Entry function that returns the length of a str
 * @s: Stores the string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
