#include <stdio.h>

/**
 * main - prints number of arg passed
 * @argc: number of arg
 * @argv: arguments
 * Return: 0
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
