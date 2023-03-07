#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square
 * matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int add, add2;

	add = 0;
	add2 = 0;

	for (i = 0; i < size; i++)
	{
		add += a[(size * i) + i];
		add2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", add, add2);
}
