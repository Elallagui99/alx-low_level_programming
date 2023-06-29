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
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
