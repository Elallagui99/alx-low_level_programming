#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a char in a string
 * @s: sting to search in
 * @c: char to find
 * Return: poniter to the char
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
