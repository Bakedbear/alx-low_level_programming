#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array of integers
 * @min: minimum value of array
 * @max: maximum value of array
 * Return: pointer to  newly created array
 * return NULL if failure
 */
int *array_range(int min, int max)
{
	int i, array_size;
	int *ptr;

	if (min > max)
		return (NULL);

	array_size = max - min + 1;

	ptr = malloc(sizeof(int) * array_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min ++;
	}
	return (ptr);
}
