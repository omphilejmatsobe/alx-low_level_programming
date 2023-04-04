#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer
 *
 * Return: number of nodes, size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	if ((h != 0) || (h != NULL))
	{
		printf("%d", h->n);
		h = h->next;
		++count;
	}
	else
		return (0);

	return (count);
}
