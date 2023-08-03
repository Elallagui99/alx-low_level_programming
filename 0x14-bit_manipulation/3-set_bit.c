#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer
 * @index: index to change
 * Return: 1 if it worked, or -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(int) * 8))
		return (-1);
	*n = *n | 1 << index;

	return (1);
}
