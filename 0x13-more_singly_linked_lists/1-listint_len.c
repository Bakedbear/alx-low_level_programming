#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: linked list type listint_t
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}

	return (sum);
}
