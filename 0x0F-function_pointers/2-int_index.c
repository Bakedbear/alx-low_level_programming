#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 * Return: index of first element for which
 * the cmp function does not return 0
 * return -1 if no such element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
