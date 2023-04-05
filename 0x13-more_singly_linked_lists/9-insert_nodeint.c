#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to node
 * @idx: index of node
 * @n: data 
 *
 * Return: pointer to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *point;
	listint_t *rev = *head;

	point = malloc(sizeof(listint_t));
	
	if ((point == NULL) || (head == NULL))
		return (NULL);

	point->n = n;
	point->next = NULL;

	if (idx == 0)
	{
		point->next = *head;
		*head = point;
		return (point);
	}

	for (x = 0; (rev && x < idx); x++)
	{
		if (x == idx - 1)
		{
			point->next = rev->next;
			rev->next = point;
			return (point);
		}
		else
		rev = rev->next;
	}
	return (NULL);
}
