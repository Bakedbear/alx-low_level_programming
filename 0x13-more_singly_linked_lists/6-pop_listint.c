#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the linked list
 * Return: head node's data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int bin;

	if (!head || !*head)
		return (0);

	bin = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (bin);
}
