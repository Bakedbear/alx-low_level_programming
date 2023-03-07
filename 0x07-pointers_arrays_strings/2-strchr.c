#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string provided
 * @c: character to be located
 * Return: pointer to first occurrence of character c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
