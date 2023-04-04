#include "lists.h"

/**
 * free_listint2 - func that frees a listint_t list
 * @head: pointer to the head of list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL) /* check for no linked list */
		return;

	while (head != NULL) /* iterate to keep track of list and free */
	{
		current = head;
		head = head->next; /* shift to next node and pointer free earlier node */
		free(current);
	}
	head = NULL;
}
