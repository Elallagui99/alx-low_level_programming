#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to strinf to find from
 * @needle: pinter to string to find
 * Return: pointer to founded sub
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (haystack + j);
		}
	}
	return (0);
}
