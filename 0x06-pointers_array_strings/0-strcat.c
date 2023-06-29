#include "main.h"

/**
 * _strcat - concatinate 2 strings
 * @dest: 1st string
 * @src: 2nd string
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

	for (j = 0; src[j] != '\0'; j++)
	{
		*(dest + len + j) = *(src + j);
	}
	*(dest len + j) = '\0';

	return (dest);
}
