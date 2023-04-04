#include "lists.h"

/**
 * free_listint - func that frees a listint_t list
 * @head: pointer to the head of list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	/* listint_t *temp; */

	if (head == NULL) /* check for no linked list */
		return;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
