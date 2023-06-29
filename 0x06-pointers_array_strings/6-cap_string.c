#include "main.h"

/**
 * cap_string - captalizes a string
 * @s: string to the change
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int i, j;
	int sy[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j <= 13; j++)
		{
			if (s[i - 1] == sy[j] && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
