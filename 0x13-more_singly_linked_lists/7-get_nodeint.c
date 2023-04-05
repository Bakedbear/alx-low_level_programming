#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @index: index of node
 * @head: pointer to the list
 * Return: nth node or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
