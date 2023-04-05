#include "lists.h"

/**
 * find_listint_loop - loop in a linked list
 * @head: linked list 
 *
 * Return: pointer node or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
 	listint_t *x;
 	listint_t *y;

	x = head;
	y = head;

	if (head == NULL)
		return (NULL);

	while (x && y && y->next)
	{
		y = y->next->next;
		x = x->next;
		while (y == x)
		{
			x = head;
			while (x != y)
			{
				x = x->next;
				y = y->next;
			}
			return (y);
		}
	}

	return (NULL);
}
