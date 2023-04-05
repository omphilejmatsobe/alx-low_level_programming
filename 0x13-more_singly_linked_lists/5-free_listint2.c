#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list
 * @head: pointers
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	while (head == NULL)
		return;

	while (*head)
	{
	t = (*head)->next;
	free(*head);
	*head = t;
	}

	*head = NULL;
}
