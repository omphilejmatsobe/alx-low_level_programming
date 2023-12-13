#include "search_algos.h"

/**
 * jump_list - jump searches on singly linked list
 * @list: pointer to head node
 * @size: its size
 * @value: value to search for
 *
 * Return: the node found or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t x = 0, jump = sqrt(size), k = 0, last_j = 0;
	listint_t *last = list;

	if (!list)
		return (NULL);

	while (list->n < value)
	{
		for (last_j = x, last = list, k = 0; list->next && k < jump; k++)
		{
			list = list->next;
			x++;
		}

		printf("Value checked at index [%lu] = [%d]\n", x, list->n);
		if (!list->next)
			break;
	}

	if (!list->next)
		jump = last_j;
	else
		jump = x >= jump ? x - jump : 0;
	printf("Value found between indexes [%lu] and [%lu]\n", jump, x);
	x = x >= size ? size - 1 : x;
	list = last;

	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", jump, list->n);
		if (list->n == value)
			return (list);
		jump++;
		list = list->next;
	}

	return (NULL);
}
