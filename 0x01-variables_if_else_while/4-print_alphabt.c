#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * t
 * Return: Always 0 for success
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if ((c != 'q' && c != 'e') && c <= 'z')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
