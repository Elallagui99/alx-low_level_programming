#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print char
 * @l: variadic list
 */
void print_char(va_list l)
{
	printf("%c", va_arg(l, int));
}
/**
 * print_int - print int
 * @l: variadic list
 */
void print_int(va_list l)
{
	printf("%d", va_arg(l, int));
}
/**
 * print_float - print float
 * @l: variadic list
 */
void print_float(va_list l)
{
	printf("%f", va_arg(l, double));
}
/**
 * print_string - print string
 * @l: variadic list
 */
void print_string(va_list l)
{
	printf("%s", va_arg(l, char *));
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 * passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list l;

	int i = 0, j;
	char *s = "";
	print_t print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(l, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != print[j].param[0])
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", s);
			print[j].f(l);
			s = ", ";
		}
		++i;
	}
	printf("\n");
	va_end(l);
}
