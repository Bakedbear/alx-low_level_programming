#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * @argc: argument count
 * @argv: array of parameters
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
