#include "main.h"

/**
 * _strpbrk - searches for any set of bytes in string
 * @s: pointer to string
 * @accept: pointer to string
 * Return: pointer to the byte found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
