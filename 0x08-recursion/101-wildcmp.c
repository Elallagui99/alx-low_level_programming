#include "main.h"

/**
 * wildcmp - compare 2 strings
 * @s1: first string
 * @s2: seond string
 * Return: 1 if identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	/*base case*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	/*error case*/
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
