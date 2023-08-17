#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * 
 * @h: input list
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (num);
}
