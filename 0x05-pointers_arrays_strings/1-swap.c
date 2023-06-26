#include "main.h"

/**
 * swap_int - swaps the values of 2 int
 * @a: first pointer to int
 * @b: second pointer to int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
