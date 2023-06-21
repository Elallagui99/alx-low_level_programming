#include "main.h"

/**
 * _abs - computes the absolute values of an int
 * @a: integer to computes
 * Return: the value
 */

int _abs(int a)
{
	if (a < 0)
	{
		a *= -1;
		return (a);
	}
	return (a);
}
