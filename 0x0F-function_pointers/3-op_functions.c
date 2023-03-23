#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Entry function that returns the sum two numbers
 * @a: first number to add
 * @b: second number to add
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Entry function that returns the difference of two numbers
 * @a: first number to sub
 * @b: second number to sub
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Entry function that returns the product of two numbers
 * @a: first number to mul
 * @b: second number to mul
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Entry function that divides two numbers
 * @a: first number to div
 * @b: second number to div
 * Return: the result of division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers
 * @a: first number to mod
 * @b: second number to mod
 * Return: the remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
