#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: integer number to generate factorial
 * Return: -1 error if n is less than 0
 * return factorial of number if n is greater than or equal to 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return n * factorial(n - 1);
}
