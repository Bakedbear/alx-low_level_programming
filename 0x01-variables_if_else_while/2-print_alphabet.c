#include <stdio.h>

/**
  * main - program that prints the alphabet in lowercase
  * Return: 0 exit code of the program if successful
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
