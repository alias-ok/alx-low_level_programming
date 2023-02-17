#include <stdio.h>
/**
 * main - Entry point
 * Result: Always 0 for success
 */
int main(void)
{
char d;
int c;
d = 'a';
while (c < 10)
{
putchar(c + '0');
c++;
}
while (d <= 'f')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
