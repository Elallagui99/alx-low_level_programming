#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinate 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (0);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < len2; j++)
		s[i + j] = s2[j];

	return (s);
}
