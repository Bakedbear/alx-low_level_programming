#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer of original allocated memory block
 * @old_size: size of initial memory block allocated
 * @new_size: size of new memory block to be allocated
 * Return: pointer to new allocated memory block
 * return NULL in case of memory allocation failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
		{
			free (ptr);
			return (NULL);
		}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
