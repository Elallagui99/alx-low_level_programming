#include "main.h"

/**
 * get_bit - get a bit in spesific index
 * @n: number to get from
 * @index: index to serch with
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = 0;
	int res = 0;

	size = sizeof(int) * 8;
	if (index > size)
		return (-1);
	res = n >> index;
	return (res & 1);
}
