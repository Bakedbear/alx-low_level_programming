#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: pointer to list_t
 * Return: number of nodes (successful)
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
