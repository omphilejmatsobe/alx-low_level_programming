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
		return (1);

	for (x = 1; h->next != NULL; x++)
	{
		if (h->next == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (x);
}
