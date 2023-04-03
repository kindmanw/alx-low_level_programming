#include "lists.h"

/**
 * add_nodeint - add a new node at the start
 * of a linked list
 * @head: start of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start;

	new = malloc(sizeof(listint_t));

	if (start == NULL)
		return (NULL);

	start->n = n;
	start->next = *head;
	*head = start;

	return (*head);
}
