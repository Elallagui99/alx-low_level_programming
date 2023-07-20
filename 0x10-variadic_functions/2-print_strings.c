#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a string
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;

	unsigned int i;

	va_start(st, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0 || separator == NULL)
			printf("%s", va_arg(st, char *));
		else
		{
			printf("%s%s", separator, va_arg(st, char *));
		}
	}
	printf("\n");
	va_end(st);
}
