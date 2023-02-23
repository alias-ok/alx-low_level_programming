#include "main.h"
/**
 * _isdigit - Entry point which checks for the presence of digits
 * @c: Parameter which stores the value of return
 * Return: Always 1 for digits and 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
