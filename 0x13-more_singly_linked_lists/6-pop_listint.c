#include "lists.h"

/**
 * pop_listint - func that deletes the head node of a listint_t lisk
 * @head: head of list node
 *
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL) /* check if list is empty */
	{
		return (0);
	}
	temp = *head; /*cast temp pointer to head node */
	data = temp->n;

	*head = temp->next; /*move pointer to next node on list */
	free(temp);

	return (data);

}


