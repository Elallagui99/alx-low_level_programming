#include <stdio.h>

/**
 * main -Entry point
 * Return:0
 */

int main(void)
{
	char str;

	for (str = 'z'; str >= 'a'; str--)
		putchar(str);
	putchar('\n');
	return (0);
}
