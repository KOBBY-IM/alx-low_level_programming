#include "list.h"

/**
 * print_list - function to print all elements of a list_t list
 * @h: head of linked list
 *
 * Return: numbers of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h; i++)
	{
		printf("[%u] %s\n", (h->str != NULL) ? h->len : 0,
				(h->str != NULL) ? h->str : "(nil)");
		h = h->next;
	}

	return (i);
}
