#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i, max;
	long int num = 612852475143;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			max = i;
			num /= i;
		}
	}
	if (num > 2)
		max = num;
	printf("%d\n", max);
	return (0);
}
