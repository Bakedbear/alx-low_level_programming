#include <stdio.h>

/**
  * main - program that prints the alphabet in lowercase, except q and e
  * Return: 0 exit code of the program if successful
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			;
		}
		else
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
