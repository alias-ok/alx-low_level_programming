#include "main.h"
/**
 * print_last_digit - Entry point that prints the last digit of a number
 * @a: Parameter set
 * Return 0 for success
 */
int print_last_digit(int a)
{
int last;
last = a % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
