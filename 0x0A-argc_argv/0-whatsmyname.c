#include <stdio.h>

/**
 * main - prints name of program
 * @argc: counts number of arguments in program
 * @argv: collection of arrays containing the parameters
 *
 * Return: 0 successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
