#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int sum, i;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 || i % 5)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return (0);
}
