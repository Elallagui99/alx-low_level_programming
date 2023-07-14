#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array on int
 * @min: min value
 * @max: max value
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, n = min, len = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		len++;
	p = malloc(sizeof(int) * len);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len && n != (max + 1); i++, n++)
		p[i] = n;
	return (p);
}
