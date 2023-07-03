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
	unsigned int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
