#include "main.h"
/**
 * print_alphabet - Entry point, prints the alphabet in lowercase
 *
 * Return: Always 0 for success
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
