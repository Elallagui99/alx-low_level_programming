#include "main.h"

/**
 * print_number - print an int
 * @n: int to print
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = n * -1;
	}
	if (x < 10)
		_putchar(x + '0');
	else if (x < 100)
	{
		_putchar(x / 10 + '0');
		_putchar(x % 10 + '0');
	}
	else if (x < 1000)
	{
		_putchar(x / 100 + '0');
		_putchar(x % 100 / 10 + '0');
		_putchar(x % 100 % 10 + '0');
	}
	else if (x > 1000)
	{
		_putchar(x / 1000 + '0');
		_putchar(x % 1000 / 100 + '0');
		_putchar(x % 1000 % 100 / 10 + '0');
		_putchar(x % 1000 % 100 % 10 + '0');
	}
}
