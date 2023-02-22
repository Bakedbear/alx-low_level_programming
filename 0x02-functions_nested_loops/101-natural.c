#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 and 5 below 1024
 * Return: 0 if succesfully executed
 */

int main(void)
{
	int sum3 = 0, sum5 = 0, sum15 = 0;

	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum3 += i;
		}
		else if (i % 5 == 0)
		{
			sum5 += i;
		}
		else if (i % 15 == 0)
		{
			sum15 += i;
		}
	}
	printf("%d", sum3 + sum5 - sum15);
	return (0);
}
