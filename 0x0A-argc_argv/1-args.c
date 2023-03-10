#include "main.h"
#include <stdio.h>
/**
 * main - Entry point that prints the number of arguments placed in it
 * @argc: argument count
 * @argc: argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
