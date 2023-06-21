#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1, b = 2, c = 0, sum = 0;

	printf("%lu, %lu", a, b);
	while (sum <= 4000000)
	{
		c = a + b;
		sum += c;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	printf("%lu\n", sum);
	return (0);
}
