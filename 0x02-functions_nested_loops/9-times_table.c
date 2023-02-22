#include "main.h"
/**
 * times_table - Entry point that prints the 9 times table
 * Return: Empty output
 */
void times_table(void)
{
int a, b, c, m, n;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c > 9)
{
m = c % 10;
n = (c - m) / 10;
_putchar(44);
_putchar(32);
_putchar(n + '0');
_putchar(m + '0');
}
else
{
if (b != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(c + '0');
}
}
_putchar('\n');
}
}
