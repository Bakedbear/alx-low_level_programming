#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}

	return (sum);
}
