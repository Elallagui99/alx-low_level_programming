#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @s: string to encode
 * Return: result
 */

char *rot13(char *s)
{
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; arr1[j] != '\0'; j++)
		{
			if (s[i] == arr1[j])
			       s[i] = arr2[j];
		}

	}
	return (s);
}
