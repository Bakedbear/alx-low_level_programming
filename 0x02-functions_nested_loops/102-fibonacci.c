#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers starting with 1 and 2
 * Return: 0 success
 */

int main(void)
{
	int i;

	int t1 = 1, t2 = 2;

	int nextTerm = t1 + t2;

	printf("Fibonacci series: %d, %d, ", t1, t2);

	for (i = 3; i <= 50; i++)
	{
		if (i == 50)
		{
			printf("%d", nextTerm);
		}
		else
		{
			printf("%d, ", nextTerm);
			t1 = t2;
			t2 = nextTerm;
			nextTerm = t1 + t2;
		}
	}
	return (0);
}
