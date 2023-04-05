#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: pointer to the first node in the list
 * @n: new data to insert in the list
 * Return: pointer to new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
