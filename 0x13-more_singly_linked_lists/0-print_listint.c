#include "lists.h"

/**
 * print_listint - displays all the elements of the list.
 * @h: head of list.
 *
 * Return: number to the  node.
 */


size_t print_listint(const listint_t *h)

{
	size_t nods = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nods++;
	}

	return (nods);
}
