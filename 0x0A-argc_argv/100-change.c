#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints minimum number of coins to get change for
 * a certain amount of money
 * @argc: number of arguments used 
 * @argv: array of arguments
 * Return: 0 on success, 1 if error
 */

int main(int argc, char *argv[])
{
	int value, i, min;
	int coins[] = {25, 10, 5, 2, 1}

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1] < 0)
		printf("0\n");

	value = atoi(argv[1]);

	for (i = 0; i < 5 && value >= 0; i++)
	{
		while (value >= coins[i])
		{
			min++;
			value -= coins[i];
		}
	}
	printf("%d\n", min);
	return (0);
}

