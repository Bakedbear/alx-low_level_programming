#include "3-calc.h"

/**
 * main - performs various operations on numbers
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 exit
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char a;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	a = *argv[2];

	if ((a == '/' || a == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}	
