#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @a: first integer value of the two-digit number 
 * Return: last number
 */
int print_last_digit(int a)
{
	int b;
	if (a < 0)
		a = -a;

	b = a % 10;
	if (b < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
