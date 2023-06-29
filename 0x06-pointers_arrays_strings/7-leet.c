#include "main.h"

/**
 * leet - encode string to 1337
 * @s: string to be encoded
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: pointer to the string
 */

char *leet(char *s)
{
	int i, j;
	char letter[] = "AEOTLaeotl";
	char number[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (s[i] == letter[j])
				s[i] = number[j];
		}
	}
	return (s);
}
