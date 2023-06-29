#include "main.h"

/**
 * _strncpy - copy string
 * @dest: string to copy into
 * @src: string to copy from
 * @n: how many char to copy
 * Return: pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
