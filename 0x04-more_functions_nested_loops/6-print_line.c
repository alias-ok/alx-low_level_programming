#include "main.h"
#include <stdio.h>
/**
 * print_line - Entry point that draws a straight line in the terminal
 * @n: Set parameter to store value
 * Return: ...
 */
void print_line(int n)
{
	int p;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (p = 0; p < n; p++)
	{
	putchar(95);
	}
	putchar('\n');
	}
}
