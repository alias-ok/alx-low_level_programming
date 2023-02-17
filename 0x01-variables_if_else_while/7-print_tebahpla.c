#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 for success
 */
int main(void)
{
char t;
t = 'z';
while (t >= 'a')
{
putchar(t);
t--;
}
putchar('\n');
return (0);
}
