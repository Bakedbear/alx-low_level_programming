#include "main.h"

int find_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to get square root 
 * Return: square root
 * return -1 if number does not have natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt_recursion(n, 0));
}

/**
 * find_sqrt_recursion - returns square root of a number
 * @n: number provided
 * @i: iterator
 * Return: square root
 */
int find_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i = n)
		return (i);
	return find_sqrt_recursion(n, n + 1);
}
