#include "lists.h"

/**
 * free_list - free a `list_t` list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	for (; head;)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
