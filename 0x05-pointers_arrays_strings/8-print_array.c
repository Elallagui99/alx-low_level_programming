#include "main.h"
#include <stdio.h>
/**
 * print_array - prints b element of int
 * @a: array
 * @n: n times
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
