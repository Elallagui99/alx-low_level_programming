#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of bytes to concats
 * Return: pointer shall point to a newly allocated
 * space in memory, which contains s1,
 * followed by the first n bytes of s2,
 * and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1, len2;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (0);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
