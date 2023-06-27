#include "main.h"

/**
 * rev_string - reerse string
 * @s: pointer to string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j, len = 0;
	char v;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			v = *(s + j);
			*(s + j) = *(s + (j - 1));
			*(s + (j - 1)) = v;
		}
	}
}
