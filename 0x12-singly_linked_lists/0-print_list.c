#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: singly linked list
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		elements++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (elements);
}
