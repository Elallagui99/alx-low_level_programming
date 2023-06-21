#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, a = 1, b = 2, c = 0;

	printf("%d, %d", 1, 2);
	for (i = 0; i <= 48; i++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
