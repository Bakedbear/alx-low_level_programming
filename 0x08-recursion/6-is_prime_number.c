#include "main.h"

int check_prime_number(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be checked
 *
 * Return: 0 if not prime number
 * return 1 if prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return check_prime_number(int n, int n - 1);
}

/**
 * check_prime_number - checks if a number is prime number
 * @n: number to check
 * @i: iterator
 * Return: 1 if number is prime, 0 if not
 */
int check_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime_number(n, i - 1));
}
