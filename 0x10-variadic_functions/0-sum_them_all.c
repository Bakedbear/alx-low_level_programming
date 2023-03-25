#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum of parameters, 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
