#include "lists.h"

/**
 * listint_len - returns the numba in nods
 *
 * @h: head of a list in nods
 *
 * Return: numbas of nods.
 */
size_t listint_len(const listint_t *h)
{
	size_t nods = 0;

	while (h != NULL)
	{
		h = h->next;
		nods++;
	}
	return (nods);
}
