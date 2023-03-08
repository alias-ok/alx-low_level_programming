#include "main.h"
int check_prime(int n, int i);
/**
 * is_prime_number - a function that returns 1 if the input is a prime numbe
 *                    - otherwise return 0
 * @n: Stores value of prime number
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - Checks for prime number
 * @n: Stores value of prime number
 * @i: Extra parameter
 * Return: iif the number is divisible - 0
 *         if the number is not divisible - 1
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
