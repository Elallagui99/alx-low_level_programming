#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: index to check
 * Return: value of the bit at index or -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = 0, res = 0;

	size = sizeof(int) * 8;
	if (index > size)
		return (-1);
	res = n >> index;
	return (res & 1);
}
