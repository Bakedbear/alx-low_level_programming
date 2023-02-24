#include <stdio.h>
/**
 * main - program to implement fizzbuzz
 * Return: 0 success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int flag3 = i % 3 == 0;
		int flag5 = i % 5 == 0;

		if (flag3 && flag5)
		{
			printf("FizzBuzz");
		}
		else if (flag3)
		{
			printf("Fizz");
		}
		else if (flag5)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}

