#include "main.h"
/**
 * print_binary - Entry func that prints the binary representation of a number
 * @n: variable of number to print in binary
 */
void print_binary(unsigned long int n)
{
	int b;
	int count = 0;
	unsigned long int binary;

	for (b = 55; b >= 0; b--)
	{
		binary = n >> b;
		if (binary & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
