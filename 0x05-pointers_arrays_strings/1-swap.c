#include "main.h"
/**
 * swap_int - Entry point that swaps values of two integers
 * @a: First paramater
 * @b: Second parameter
 * Return: ...
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
