#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - convert from bianry to unsigned int
 * @b: pointer to string of 0 and 1
 * Return: converted usnigned int or NULL otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res <<= 1; /*multiplied by 2*/
		res += b[i] - '0';/*convert string to int*/
	}
	return (res);
}
