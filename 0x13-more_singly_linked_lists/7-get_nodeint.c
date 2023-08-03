#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: ...
 * @index: ...
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = o; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	rerurn (head);
}
