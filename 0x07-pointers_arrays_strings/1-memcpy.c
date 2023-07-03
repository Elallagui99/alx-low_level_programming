#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: whre to cpy
 * @src: from wher to copy
 * @n: n byte to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
