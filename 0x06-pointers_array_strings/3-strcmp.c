#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 if equal
 * >0 if first bigger, <0 if second id bigger
 */
int _strcmp(char *s1, char *s2)
{
	int i, j = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			j++;
	}
	if (j == 0)
		return (0);
	return (*s1 - *s2);

}
