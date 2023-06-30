#include "lists.h"

/**
 * list_len - calculates the lenth of a list
 *
 * @h: inout pointer to h
 *
 * Return: length of a list
 */
size_t list_len(const list_t *h)
{
	size_t x;

	x = 0;
	while (h != NULL)
	{
		h = h->next;
		x++;
	}

	return (x);
}
