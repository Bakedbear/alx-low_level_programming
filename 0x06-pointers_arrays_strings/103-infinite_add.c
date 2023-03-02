#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, op, bd, dr1, dr2, add = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	if (a >= b)
		bd = a;
	else
		bd = b;
	if (size_r <= bd + 1)
		return (0);
	r[bd + 1] = '\0';
	a--, b--, size_r--;
	dr1 = *(n1 + a) - 48, dr2 = *(n2 + b) - 48;
	while (bd >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(r + bd) = (op % 10) + 48;
		else
			*(r + bd) = '0';
		if (a > 0)
			a--, dr1 = *(n1 + b) - 48;
		else
			dr1 = 0;
		if (b > 0)
			b--, dr2 = *(n2 + b) - 48;
		else
			dr2 = 0;
		bd--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
