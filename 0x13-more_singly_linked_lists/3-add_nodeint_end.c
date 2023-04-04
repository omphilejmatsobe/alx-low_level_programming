#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer
 * @n: input n
 *
 * Return: counter
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *rev = *head;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	while (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (rev->next)
		rev = rev->next;

	rev->next = node;

	return (node);
}
