#include "list.h"

/**
 * print_list - function to print all elements of a list_t list
 * @h: head of linked list
 *
 * Return: numbers of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		c++;
	}

	return (c);
}
