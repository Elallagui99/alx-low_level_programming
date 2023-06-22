#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = size - j - 1; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
