#include "main.h"
/**
 * _pow_recursion - returns value of x raisded to power of y
 * @x: first integer
 * @y: second integer
 * Return: -1 if y is lower than 0
 * return value of x if y is greater than or equal to 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
