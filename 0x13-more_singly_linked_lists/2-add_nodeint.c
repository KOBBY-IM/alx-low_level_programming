#include "lists.h"

/**
 * add_nodeint - func that adds a new node at the beginning of a listint_t list
 * @head: pointer to head pointer of the linked list
 * @n: data to add to the new node
 *
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = new_node;

	new_node = malloc(sizeof(listint_t)); /* allocate memory for new node */

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n; /*set data for new node */

	new_node->next = *head; /* set pointer new node to point point for 1st node */
	*head = new_node; /* set the head of the list to point to the new node */

	return (new_node);
}

