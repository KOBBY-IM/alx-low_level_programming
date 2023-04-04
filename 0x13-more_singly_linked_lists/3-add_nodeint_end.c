#include "lists.h"

/**
 * add_nodeint_end - func that adds new node at the end of a listint_t list
 * @head: pointer to the head pointer of the linked list
 * @n: data to add to the new node
 *
 * Return: address of new element, Or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	new_node = malloc(sizeof(listint_t)); /*allocate memory for new node */

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n; /* set data for new node */
	new_node->next = NULL; /* set pointer for the new node to NULL */

	if (*head == NULL) /* check of list is empty */
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head; /* itterate to find the last node */

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node; /* set nx pointer of last node to new node */
	}
	return (new_node);
}
