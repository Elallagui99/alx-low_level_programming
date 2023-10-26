#include "main.h"
#include <stdio.h>

/**
 * print_binary - convert from decimal to binary
 * and print it
 * @n: int to convert
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		if (n > 1)
			print_binary(n >> 1);/*recurtion on n/2*/
		_putchar((n & 1) + '0');/*print f its 1*/
	}
	else
	{
		_putchar('0');
	}
}
