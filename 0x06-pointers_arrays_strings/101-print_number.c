#include "main.h"
/**
 * print_number - Entry func that prints an integer
 * @n: Set parameter stores value of integer
 * Return: ...
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
