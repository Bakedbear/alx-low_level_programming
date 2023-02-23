#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 skipping 2 and 4
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c >= 0 && c <= 9)
	{
		if (c == 2 || c == 4)
			;
		else
			_putchar(c + '0');
	}
	_putchar('\n');
}
