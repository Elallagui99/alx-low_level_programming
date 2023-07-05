#include "main.h"

/**
 * factorial - returns the factorial
 * @n: number to count
 * Return: result
 */
int factorial(int n)
{
	/*error case*/
	if (n < 0)
		return (-1);
	/*base case*/
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
