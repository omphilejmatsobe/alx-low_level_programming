#include "lists.h"

/**
 * print_list- prints list
 * @h: inpuut pointrt
 *
 * Return: x if succesful, 1 if NULL
 */
size_t print_list(const list_t *h)
{
	int x;

	if (h == NULL)
		return (0);

	for (x = 0; h; x++)
	{
		if (!h->str)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}
