#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: doesn't return.
 */
void free_listint(listint_t *head)
{
	listint_t *tempt;

	while ((tempt = head) != NULL)
	{
		head = head->next;
		free(tempt);
	}
}
