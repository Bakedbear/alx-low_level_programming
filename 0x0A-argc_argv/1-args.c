#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: array containing actual parameters passed
 * Return: 0 exit code
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
