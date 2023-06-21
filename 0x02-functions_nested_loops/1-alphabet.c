#include "main.h"
/**
 * print_alphabet - print alphabets in lowecase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char s = 'a';

	while (s <= 122)
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
