#include "main.h"

/**
 * _prime - find if prime
 * @n: number to find
 * @k: n-1
 * Return: 1 if prime 0 otherwise
 */
int _prime(int n, int k)
{
	/*base case*/
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (_prime(n, (k - 1)));
}
/**
 * is_prime_number - checks for prime number
 * @n: number to check
 * Return: 1 if found and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, (n - 1)));
}
