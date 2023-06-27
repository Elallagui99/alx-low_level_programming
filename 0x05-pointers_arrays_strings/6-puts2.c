#include "main.h"

/**
 * puts2 - prints every other charachter
 * @str: tring to print from
 * Return:nothing
 */

void puts2(char *str)
{
	int len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
}
