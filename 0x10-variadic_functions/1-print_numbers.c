#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;

	unsigned int i;

	if (n == 0)
		return;
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0 || separator == NULL)
			printf("%d", va_arg(nums, int));
		else
		{
			printf("%s", separator);
			printf("%d", va_arg(nums, int));
		}
	}
	printf("\n");
	va_end(nums);
}
