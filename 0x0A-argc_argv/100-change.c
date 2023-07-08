#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number  of coins
 * to make change for amount of money
 * @argc: num of arg
 * @argv: arguments
 * Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, change, cent = 0;
	char coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		cent += change / coin[i];
		change %= coin[i];
	}

	printf("%d\n", cent);
	return (0);
}
