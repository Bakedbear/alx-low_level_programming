#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes with
 * a specific char
 * @size: size of array
 * @c: initialize the array ith char
 *
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	P = (char*) malloc(sizeof(char) * size)

	if (p == NULL)	
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';
	return (p);
}
