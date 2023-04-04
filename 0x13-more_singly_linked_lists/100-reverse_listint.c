#include "lists.h"

/**
 * reverse_listint - func that reverses a listint_t list
 * @head: pointer to the the head of list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	while (*head != NULL) /* iterate thru the linked list */
	{
		next = (*head)->next; /* keep track of next node */

		(*head)->next = prev; /* reverse link btw current and previous node */

		prev = *head; /* move to next mode */
		*head = next;
	}
	*head = prev; /* up head pointer to new 1st node */

	return (*head); /* return pointer to 1st node of rev list */
}
