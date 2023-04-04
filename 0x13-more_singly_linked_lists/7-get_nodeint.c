#include "lists.h"

/**
 * get_nodeint_at_index - func that returns the nth node of listint_t list
 * @head: pointer to the head of the list
 * @index: count of node
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	/*iterate list till it reaches nth node or end of list */
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL) /*if it reaches end of list b4 nth node, reutn null */
	{
		return (NULL);
	}
	else
		return (current); /* return pointer to nth node */
}
