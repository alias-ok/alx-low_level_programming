#include "main.h"
/**
 * print_alphabetx10 - Entry point which prints alphabets in lowercase x10
 *
 * Return: Always 0 for success
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}

