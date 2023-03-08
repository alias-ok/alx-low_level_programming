#include "main.h"
/**
 * find_sqrt - Returns the natural square root of a number
 * @num: number with the natural square root
 * @root: the root to be tested
 * Return: r4w
 */
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: The number to return the square root of
 * Return: if n does not have a natural square root -1
 *         postive for success
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
