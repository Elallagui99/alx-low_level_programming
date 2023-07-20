#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, r;
	int (*ptr)(int, int)

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2] == '/' || argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	r = ptr(a, b);
	printf("%d\n", r);
	return (0);
}
