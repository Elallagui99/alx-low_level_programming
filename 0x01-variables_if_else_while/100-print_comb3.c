#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1 ; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
