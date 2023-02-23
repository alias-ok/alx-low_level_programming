#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Entry point that prints the numbers from 0 to 9
 *
 * Return: ...
 */
void print_most_numbers(void)
{
	int d = 0;

	for (; d <= 9; d++)
		{
			if (d == 2 || d == 4)
			{
				continue;
			}
			else
			{
				putchar(d + '0');
			}
		}
	putchar('\n');
}
