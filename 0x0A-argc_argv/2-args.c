#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: number of arguments
 * @argv: array of parameters
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}
