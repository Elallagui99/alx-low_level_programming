#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
		putchar(str);
	putchar('\n');
	return (0);
}
