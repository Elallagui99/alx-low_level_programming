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

/**
 * _pal - check if string is palindrome(helper)
 * @s:the string
 * @i: beggining of the string
 * @j: ending of the string
 * Return: 1 if palindrome, 0 otherwise
 */

int _pal(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] == s[j])
		return (_pal(s, i + 1, j - 1));
	return (0);
}

/**
 * is_palindrome - checks if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (_pal(s, 0, _strlen_recursion(s) - 1));
}
