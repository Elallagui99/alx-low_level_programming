#include "main.h"

/**
 * _islower - checkes for lowecase char
 * @c: integer to checks
 * Return: 1 if &c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
