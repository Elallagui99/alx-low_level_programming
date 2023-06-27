#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: tha string to count
 * Return: result
 */

int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	return (len);
}
