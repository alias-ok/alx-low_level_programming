#include "main.h"
/**
 * _isdigit - Entry point that checks for a digit
 * @c: Set parameter to store value
 * Return: Always 1 for uppercase otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
