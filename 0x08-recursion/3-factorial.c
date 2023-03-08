#include "main.h"
/**
 * factorial - Entry function that returns the factorial of a given number
 * @n: Stores number factorial
 * Return: Always 0 for success
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);
	else if (n > 0 && n <= 1)
		return (1);
	res = res * factorial(n - 1);
	return (res);
}
