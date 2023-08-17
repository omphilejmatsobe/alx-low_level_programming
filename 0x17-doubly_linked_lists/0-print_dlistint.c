#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: input list
 *Return: number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
