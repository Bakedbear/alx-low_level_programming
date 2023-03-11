#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of parameters passed
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int a, b;

	int i = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i < argc)
		{
			a = atoi(argv[i]);
			b = atoi(argv[i + 1]);
		}
		printf("%d\n", a * b);
	}
	return (0);
}
