#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -calcul the sum of parameters
 * @n: number of parameters
 * Return: the result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int s = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}

	va_end(args);

	return (s);
}
