#include <stdio.h>
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
	int i;

	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
