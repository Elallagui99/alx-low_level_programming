#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
