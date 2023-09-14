#include "lists.h"

/**
 * free_dlistint_t - free a dlistint_t list
 * @head: head of the list
 * Return: no return
 */

void free_dlistint_t(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
