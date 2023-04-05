#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to starting node
 */
void free_listint(listint_t *head)
{
	free_listint *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
