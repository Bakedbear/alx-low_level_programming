#include <stdio.h>
#include <stdlib.h>

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
	
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
