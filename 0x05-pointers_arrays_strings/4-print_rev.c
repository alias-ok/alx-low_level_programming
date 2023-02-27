#include "main.h"
/**
 * print_rev - Entry function that prints a string, in reverse
 * @s: Set parameter that stores address
 */
void print_rev(char *s)
{
	int longi = 0;
	int m;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (m = longi; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
