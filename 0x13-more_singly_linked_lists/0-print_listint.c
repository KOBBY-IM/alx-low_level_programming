#include "lists.h"

/**
 * print_listint - function to print all the elements of a list
 * @h: the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /*print out the data in the current node */

		h = h->next; /* move to the next node */
		nodes++; /* increment of count */
	}
	return (nodes);
}
