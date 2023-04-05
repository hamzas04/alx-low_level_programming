#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: square root of n, -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursive(n, 1));
}

/**
 * _sqrt_recursive - recursively calculates the square root of n
 * @n: number to calculate the square root of
 * @i: possible square root
 *
 * Return: square root of n, -1 if n does not have a natural square root
 */
int _sqrt_recursive(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_recursive(n, i + 1));
}
