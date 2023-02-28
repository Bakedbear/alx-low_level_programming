#include "main.h"
/**
 * print_rev - prints a string in reverse followed by new line
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i, len, temp;

	len = 50;

	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
