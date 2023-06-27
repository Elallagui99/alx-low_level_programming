#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
