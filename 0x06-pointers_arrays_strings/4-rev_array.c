#include "main.h"
/**
 * reverse_array - reverses content of array of integers
 * @a: an array of integers
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int x, y, temp;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[y];
		a[y--] = temp;
	}
}
