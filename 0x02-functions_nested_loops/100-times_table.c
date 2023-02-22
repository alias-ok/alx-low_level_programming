#include "main.h"
/**
 * print_times_table - Entry point that prints the n times table
 *@n: Value of times table to be printed
 * Return:
 */
void print_times_table(int n)
{
int num, mult, prod;
while ((n = 2))
{
if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('0');
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 99)
_putchar(' ');
if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 10)) % 10 + '0');
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
}
