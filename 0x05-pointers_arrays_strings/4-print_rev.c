#include "main.h"
/**
 * print_rev - prints a string in reverse followed by new line
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i, len, temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (temp = len; temp <= 0; temp--)
	{
		_putchar(s[temp]);
	}

	_putchar('\n');
}
