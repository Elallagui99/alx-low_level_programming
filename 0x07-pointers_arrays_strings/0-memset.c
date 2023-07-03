#include "main.h"

/**
 * _memset - filsmemory with const byte
 * @s: pointer to string
 * @b: const to fill with
 * @n: n byte to fill
 * Return: pointer to the string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
