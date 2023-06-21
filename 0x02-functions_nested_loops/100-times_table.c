#include "main.h"

/**
 * print_times_table - prints the n time table
 * starting from 0
 * @n: int to print its table
 * Return: nothing
 */

void print_times_table(int n)
{
	int i, j, r = 0;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if (r > 99)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
				else if (r > 9)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(r + '0');
				}
			}
			_putchar('\n');
		}
	}
}
