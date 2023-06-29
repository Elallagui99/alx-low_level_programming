#include "main.h"

/**
 * _strncat - concatinate n byte from string to a string
 * @dest: 1st string
 * @src: 2nd string
 * @n: n byte to concat
 * Return: pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

	for (j = 0; src[j] != '\0' && j < n; j++)
		*(dest + len + j) = *(src + j);

	*(dest + len + j) = '\0';

	return (dest);
}
