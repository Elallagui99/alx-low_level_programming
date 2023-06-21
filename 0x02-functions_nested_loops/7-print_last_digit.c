#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: integer to print
 * Return: the value
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n % 10 * -1;
		_putchar(n + '0');
		return (n);
	}
	else if (n >= 0)
	{
		n %= 10;
		_putchar(n + '0');
	}
	return (n);
}
