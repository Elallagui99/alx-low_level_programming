#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of te array
 * @c: char to fill with
 * Return: pointer to thr array
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
		return (0);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (0);

	while (size != 0)
	{
		size--;
		s[size] = c;
	}

	return (s);
}
