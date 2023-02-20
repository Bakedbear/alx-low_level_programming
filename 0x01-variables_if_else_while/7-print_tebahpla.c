#include <stdio.h>

/**
  * main - prints the lowercase alphabet in reverse
  * Return: 0 exit code if successful
 */
int main(void)
{
	int b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
