#include "main.h"
#include <stdlib.h>

/**
 * strtow - split string into words
 * @str: string to split
 * Return: pointer to array of words
 */

char **strtow(char *str)
{
	int i, len = 0, l;
	char **s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	s = malloc(len * sizeof(char *));
	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < len; i++)
	{
		if (str[i] == ' ' && l == 0)
		{
			*s[i] = '\n';
			l++;
		}
		else if (str[i] != ' ')
		{
			*s[i] = str[i];
			l = 0;
		}
	}
	return (s);
}
