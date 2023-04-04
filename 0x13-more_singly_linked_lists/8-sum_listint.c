#include "lists.h"

/**
 * sum_listint - func to return sum of all data of a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	/* iterate throught the list and add up n in each node */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
