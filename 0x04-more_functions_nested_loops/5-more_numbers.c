#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Entry point that prints 10 times the numbers from 0 to 14
 *
 * Return: ...
 */
void more_numbers(void)
{
int d, m;

for (d = 1; d <= 10; d++)
{
for (m = 0; m <= 14; m++)
{
if (m > 10)
putchar('1');
putchar(m % 10 + '0');
}
putchar('\n');
}
}
