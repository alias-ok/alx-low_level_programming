#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */
int main(void)
{
int i, sum = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += 1;
}
i++;
}

printf("%d\n", sum);
return (0);
}
