#include "main.h"
#include <stdio.h>
/**
 * print_square - Entry point that prints a square, followed by a new line
 * @size: Parameter to store dimensions
 * Return: void
 */
void print_square(int size)
{
int a, m;

if (size <= 0)
{
putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (m = 0; m < size; m++)
{
putchar(35);
}
putchar('\n');
}
}
}
