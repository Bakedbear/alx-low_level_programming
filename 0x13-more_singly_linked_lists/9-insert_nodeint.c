#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at an index
 * @head: pointer to linked list
 * @idx: index of the list where new node is to be inserted
 * @n: new data to be inserted
 * Return: address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i != idx - 1)
			temp = temp->next;
		else
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	}

	return (NULL);
}
