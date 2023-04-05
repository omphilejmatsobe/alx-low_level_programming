#include "lists.h"
/**
 * free_listint - frees linked lists
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
	t = head->next;
	free(head);
	head = t;
	}
}
