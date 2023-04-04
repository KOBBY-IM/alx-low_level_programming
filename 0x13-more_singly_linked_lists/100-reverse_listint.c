#include "lists.h"

/**
 * reverse_listint - func that reverses a listint_t list
 * @head: pointer to the the head of list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	while (current != NULL) /* iterate thru the linked list */
	{
		listint_t *next = current->next; /* keep track of next node */

		current->next = prev; /* reverse link btw current and previous node */

		prev = current; /* move to next mode */
		current = next;
	}
	*head = prev; /* up head pointer to new 1st node */

	return (*head); /* return pointer to 1st node of rev list */
}
