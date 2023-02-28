#include "main.h"
/**
 * puts2 - prints out every other character in a string 
 * starting with the first character
 * @str: string
 */
void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2;)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
