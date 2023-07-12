#include "main.h"
#include <stdlib.h>

/**
 * _strncpy - copy n string to anoyher string
 * @dest: string to be copied in
 * @src: strin to be copied from
 * @n: number of string to be copied
 * Return: pointer to the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}

/**
 * strtow - split string into words
 * @str: string to split
 * Return: pointer to array of words
 */
char **strtow(char *str)
{
	int i, len = 0, l = 0, word_count = 0;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	s = malloc((len + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' && l == 0)
			continue;
		if (str[i] == ' ')
		{
			l = 0;
			continue;
		}
		while (str[i] != ' ' && str[i] != '\0')
		{
			l++;
			i++;
		}
		s[word_count] = malloc((l + 1) * sizeof(char));
		if (s[word_count] == NULL)
		{
			for (i = 0; i < word_count; i++)
				free(s[i]);
			free(s);
			return (NULL);
		}
		_strncpy(s[word_count], &str[i - l], l);
		s[word_count][l] = '\0';
		word_count++;
	}
	s[word_count] = NULL;
	return (s);
}
