#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to node
 *
 * Return: pointer to node 
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *foll = NULL;

	while (*head)
	{
 		foll = (*head)->next;
 		(*head)->next = rev;
		rev = *head;
		*head = foll;
	}

	*head = rev;

	return (*head);
}
