#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
	
}
