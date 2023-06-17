#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar(num + 48);
		else
			putchar(num - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
