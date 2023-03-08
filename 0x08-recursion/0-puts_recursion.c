#include "main.h"
/**
 * _puts_recursion - Entry function that prints a string
 * @s: Pointer to the address of string
 * Return: String
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
