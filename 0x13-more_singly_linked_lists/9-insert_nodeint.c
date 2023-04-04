#include "lists.h"

/**
 * insert_nodeint_at_index - func that inserts a new node at a given position
 * @head: pointer to the head of list
 * @idx: index of list
 * @n: store value of new node
 *
 * Return: address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int count = 0;
	listint_t *new_node;

	/* iterate thru till node at index or end of list */
	while (current != NULL && count < idx)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (count < idx) /* return null if no index before end of list */
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t)); /* new node to store value of n */

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (prev == NULL) /* update head pointer & return to new node,if start 0*/
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else /*insert new node after prev node & return new node */
	{
		new_node->next = current;
		prev->next = new_node;
	}
		return (new_node);
}
