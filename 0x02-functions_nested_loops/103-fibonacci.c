#include <stdio.h>

/**
 * main - prints the sum of the even valued terms in fibonacci sequence
 * Return: 0 success
 */
int main(void)
{
	int a;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);

	return (0);
}
