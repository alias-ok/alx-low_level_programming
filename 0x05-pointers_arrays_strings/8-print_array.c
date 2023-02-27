#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry function prints elements of an array of int
 * @a: First parameter
 * @n: Second parameter
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != n - 1)
			printf(", ");
	}
	printf("\n");
}
