#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry function that adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
int num;
unsigned int k, sum = 0;
char *j;

if (argc > 1)
{
for (num = 1; num < argc; num++)
{
j = argv[num];
for (k = 0; k < strlen(j); k++)
{
if (j[k] < 48 || j[k] > 57)
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(j);
j++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
