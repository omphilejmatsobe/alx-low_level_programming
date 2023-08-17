#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
