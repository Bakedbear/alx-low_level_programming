#include "main.h"

/**
 * string_toupper - converts lowercase letters of string to uppercase
 * @str: string to be converted
 * Return: converted string
 */
char *string_toupper(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (str[b] >= 'a' && str[b] <= 'z')
			str[b] -= 32;
	}

	return (str);
}

