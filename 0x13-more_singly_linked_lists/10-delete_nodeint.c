#include "lists.h"

/**
 * delete_nodeint_at_index - func dat delete nod at index of a listint_t list
 * @head: pointer to the head of list
 * @index: index of node starting at 0
 *
 * Return: 1 if is succeeds and -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	/* iterate list till node at specified index is found */
	while (index > 0 && current != NULL)
	{
		prev = current;
		current = current->next;
		index--;
	}
	if (current == NULL) /* if node is not found at spec index */
	{
		return (-1);
	}
	if (prev == NULL) /* node to deleted is head node, update head pointer */
	{
		*head = current->next;
	}
	else /* update prev node pointer to skip the node deleted */
	{
		prev->next = current->next;
	}
	free(current);

	return (1);
}
