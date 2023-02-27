#include "main.h"
/**
 * _puts - Entry function, prints a string followed by a new line to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
