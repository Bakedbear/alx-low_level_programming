#include "main.h"

/**
 * main - prints the alphabet in lowercase
 * Return: 0 to exit code
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);	
	}
	_putchar('\n');
}
