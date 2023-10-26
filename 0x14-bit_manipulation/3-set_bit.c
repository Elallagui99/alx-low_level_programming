#include "main.h"

/**
 * set_bit - set a bit at given index into 1
 * @n: pointer to the integer
 * @index: where to change the bit
 * Return: 1 if success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(int) * 8)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
