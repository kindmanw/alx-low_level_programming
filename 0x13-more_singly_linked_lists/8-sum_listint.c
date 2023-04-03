#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a position.
 * @head: head of a list.
 * @idx: index of the list where the new node.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *k;

	k = *head;

	if (jdx != 0)
	{
		for (j = 0; j < jdx - 1 && k != NULL; j++)
		{
			k = k->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}
