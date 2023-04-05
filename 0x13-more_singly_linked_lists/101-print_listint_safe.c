#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer
 *
 * Return: 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *x, *y;
	size_t nodecount;

	nodecount = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	x = head->next;
	y = (head->next)->next;

	while (y != 0)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				nodecount++;
				x = x->next;
				y = y->next;
			}

			x = x->next;
		while (x != y)
		{
			nodecount++;
			x = x->next;
		}

		return (nodecount);
		}

		x = x->next;
		y = (y->next)->next;
	}
	return (0);
}


/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: A pointer
 *
 * Return: The node list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx;

	idx = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}

	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

