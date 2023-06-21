#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char s = 'a';
	int i = 10;

	while (i--)
	{
		while (s <= 122)
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
		s = 'a';
	}
}
