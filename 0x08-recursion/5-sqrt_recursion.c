#include "main.h"

/**
 * _sqrt_root - calculate square root of integer
 * @n: integer to calculate
 * @x: approxipate
 * Return: result
 */
int _sqrt_root(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt_root(n, x + 1));
}

/**
 * _sqrt_recursion - return square root of integer
 * @n: integer to calculate
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_root(n, 1));
}
