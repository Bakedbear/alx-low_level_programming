#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of original string
 * @str: first string
 * Return: pointer to new string
 * returns NULL if no string provided or in case of insufficient memory
 */
char *_strdup(char *str)
{
	int *ptr;

	if (str == NULL)
		return ("NULL\n");
	ptr = (int *) malloc(8 * sizeof(char));
	free(ptr);
}
