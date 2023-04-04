#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: 
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while ((h != 0) || (h != NULL))
	{
		h = h->next;
		++count;
	}

	return (count);
}
