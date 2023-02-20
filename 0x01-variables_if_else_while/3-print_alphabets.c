#include <stdio.h>

/**
  * main - program that prints the alphabet in lowercase then in uppercase
  * Return: 0 exit code of the program if successful
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
