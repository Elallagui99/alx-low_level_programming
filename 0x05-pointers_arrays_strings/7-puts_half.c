#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string to print from
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	len++;
	for (len /= 2; str[len] != '\0'; len++)
		_putchar(str[len]);

	_putchar('\n');
}
