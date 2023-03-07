#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: bytes to copy
 *
 * Return: return pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
