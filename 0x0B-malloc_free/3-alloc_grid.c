#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2D array of int
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **n;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = malloc(height * sizeof(int *));
	if (n == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		n[i] = malloc(width * sizeof(int));
		if (n[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(n[j]);
			free(n);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			n[i][j] = 0;
		}
	}

	return (n);
}
