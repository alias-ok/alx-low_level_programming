#include "main.h"
/**
 * print_sign - Entry point that prints sign of number
 * @n: Stores value
 * Return: Always 1, 0 and -1 for success
 */
int print_sign(int n)
{
while (n > 0)
{
_putchar('+');
return (1);
}
while (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
