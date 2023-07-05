#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: pointer to string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	/*base case*/
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
