#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to new allocated memory
 * which comtains copy of the given string
 * @str: string to copy
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, len = 0;

	if (str == NULL)
		return (0);

	while (str[len])
		len++;

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (0);

	for (i = 0; i <= len; i++)
		s[i] = str[i];

	return (s);
}
