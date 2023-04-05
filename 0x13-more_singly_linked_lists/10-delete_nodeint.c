#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked lis
 * @head: pointer
 * @index: node
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *node = NULL;
	unsigned int x;

	x = 0;

	while (*head == NULL)
		return (-1);

	while (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	while (x < (index - 1))
	{
		if ((t == NULL) || ((t->next) == NULL))
			return (-1);
		t = t->next;
		++x;
	}

	node = t->next;
	t->next = node->next;
	free(node);

	return (1);
}
