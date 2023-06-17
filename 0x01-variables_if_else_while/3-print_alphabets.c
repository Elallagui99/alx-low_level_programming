#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char str1;
	char str2;

	for (str1 = 'a'; str1 <= 'z'; str1++)
		putchar(str1);
	for (str2 = 'A'; str2 <= 'Z'; str2++)
		putchar(str2);
	putchar('\n');
	return (0);
}
