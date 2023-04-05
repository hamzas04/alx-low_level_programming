#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_check(n, 2));
}

/**
 * _check - checks if a number is prime recursively
 * @n: the number to check
 * @i: the divisor to check n against
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _check(int n, int i)
{
	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	return (_check(n, i + 1));
}
