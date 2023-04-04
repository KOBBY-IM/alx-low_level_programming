#include "lists.h"

/**
 * listint_len - function that returns the numberof listint_t list
 * @h: the list of nodes
 *
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes),
}
