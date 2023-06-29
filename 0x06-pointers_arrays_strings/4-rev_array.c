#include "main.h"

/**
 * reverse_array - reverse te content of an array
 * @a: pointer to array
 * @n: number of elements in the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j = n - 1, tmp;

	for (i = 0; i < n / 2; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;

	}
}
