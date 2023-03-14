#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of original string
 * @str: first string
 * Return: pointer to new string
 * returns NULL if no string provided or in case of insufficient memory
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc((len + 1) * sizeof(char));
	
	if (ptr == NULL)
		return (NULL);

	while ((ptr[i] = str[i]) != '\0')
		i++;

	return (ptr);
}
