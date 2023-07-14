#include "main.h"
#include <stdlib.h>

/**
 * _atoi - convert string to int
 * @s: string to print
 * Return: result
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}


/**
 * _isdigit - checks for digits (0 through 9)
 * @c: in the integer to be checked
 * Return: 1 if it is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - multiplie 2 positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3 || _isdigit(_atoi(argv[1])) || _isdigit(_atoi(argv[2])))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (_atoi(argv[1]) <= 0 || _atoi(argv[0]) <= 0)
		exit(98);

	mul = _atoi(argv[1]) * _atoi(argv[2]);
	_putchar(48 + mul);
	_putchar('\n');
	return (0);
}
