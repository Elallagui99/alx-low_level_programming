#include "main.h"

/**
 * _pow_recursion - calcul x powred by y
 * @x: number to calcul
 * @y: number to powred by
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	/*error case*/
	if (y < 0)
		return (-1);
	/*base case*/
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
