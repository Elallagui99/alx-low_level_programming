#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concat all arguments of your prog
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, l, len = 0;
	char *t;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	t = malloc(sizeof(char) * len + 1);
	if (t == NULL)
		return (0);

	for (i = 0, l = 0; i < ac; i++, l++)
	{
		for (j = 0; av[i][j] != '\0'; j++, l++)
			t[l] = av[i][j];
		t[l] = '\n';
	}
	t[l] = '\0';
	return (t);
}
