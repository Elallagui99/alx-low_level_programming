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
	int (*op_f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	op_f = get_op_func(argv[2]);
	if (op_f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	r = op_f(a, b);
	printf("%d\n", r);
	return (0);
}
