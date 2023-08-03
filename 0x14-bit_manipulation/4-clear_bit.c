#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to integer
 * @index: index to chsnge at
 * Return: 1 if it worked, or -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
