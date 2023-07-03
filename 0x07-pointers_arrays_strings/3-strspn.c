#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: pointer to string
 * @accept: pointer to string
 * Return: number of similar char
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;
			}
		}
		else
			break;
	}
	return (count);
}
