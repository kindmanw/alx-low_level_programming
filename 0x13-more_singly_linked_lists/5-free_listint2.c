#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: doesn't return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tempt;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tempt = curr) != NULL)
		{
			curr = curr->next;
			free(tempt);
		}
		*head = NULL;
	}
}
