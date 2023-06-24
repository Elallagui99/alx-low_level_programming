#include <stdio.h>

/**
 * isprime - checks if num is prime
 * @n: num to checks
 * Return: 1 if success, 0 otherwie
 */

int isprime(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int num = 612852475143;

	for (i = num / 2; i >= 2; i--)
	{
		if (num % i == 0)
		{
			if (isprime(i))
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	return (0);
}
