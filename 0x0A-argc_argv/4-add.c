#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of parameters passed in function
 * Return: 0 success
 * return 1 if a number passed is non-digit
 */
int main(int argc, char *argv[])
{
	int i, j;

	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	if (argc == 1)
		printf("0\n");

	printf("%d\n", sum);
	return (0);
}
