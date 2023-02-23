#include "main.h"
/**
 * _isupper - Entry point that checks for uppercase character
 * @c: Set parameter that stores data
 * Return: Always returns 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
