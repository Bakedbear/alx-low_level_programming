#include "main.h"
/**
 * _strncat - concatenates two strings
 * it uses at most n bytes from src
 * @dest: first string
 * @src: second string
 * @n: integer indicating byte size of string
 *
 * Return: a pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0; 
	y = 0;

	while dest[x] != '\0'
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
